import serial
import numpy as np
import struct 
import time   

PORT = "/dev/tty.usbmodem14303" 
THRESHOLD = 0.3
FAILURE_NAMES = ['TWF', 'HDF', 'PWF', 'OSF', 'RNF']

def synchronise_UART(serial_port):
    print("Searching for STM32...")
    serial_port.reset_input_buffer() 
    while True:
        serial_port.write(b"\xAB") 
        time.sleep(0.2)            
        if serial_port.in_waiting > 0:
            ret = serial_port.read(1)
            if ret == b"\xCD":
                print("Signal 0xCD received!")
                break

def send_inputs_to_STM32(inputs, serial_port):
    inputs = inputs.astype(np.float32)
    buffer = b""
    for x in inputs: #It will send the 6 sensors
        buffer += x.tobytes()
    serial_port.write(buffer)

def read_output_from_STM32(serial_port):
    # We read 20 bytes (5 outputs * 4 bytes each float32)
    output_bytes = serial_port.read(20) 
    
    if len(output_bytes) == 20:
        # We decode the bytes to 5 floating numbers (Little-endian)
        float_values = struct.unpack('<5f', output_bytes)
        return np.array(float_values)
    else:
        print("Reading error: The 20 bytes were not received.")
        return np.zeros(5)

def evaluate_model_on_STM32(iterations, serial_port):
    accuracy_count = 0
    
    for i in range(iterations):
        serial_port.reset_input_buffer() 
        print(f"\n----- Iteration {i+1} -----")
        
        # 1. Send the 6 sensors
        send_inputs_to_STM32(X_test[i], serial_port)
        
        # 2. Receive the 5 raw odds
        raw_output = read_output_from_STM32(serial_port)
        
        # 3. Apply the INDUSTRIAL STRATEGY: threshold of 0.3
        predicted_binary = (raw_output > THRESHOLD).astype(int)
        expected_binary = Y_test[i].astype(int)
        
        #4. Compare if the predicted vector is EXACTLY the same as the real one
        if np.array_equal(predicted_binary, expected_binary):
            accuracy_count += 1
            status = "✅ MATCH"
        else:
            status = "❌ FAIL"
            
        print(f"   Expected: {expected_binary}")
        print(f"   Raw STM32:{np.round(raw_output, 3)}")
        print(f"   Predicted:{predicted_binary} -> {status}")
        
    final_accuracy = (accuracy_count / iterations) * 100
    print(f"\n=====================================")
    print(f" Exact Match Accuracy: {final_accuracy:.2f}%")
    print(f"=====================================")
    return final_accuracy

if __name__ == '__main__':
    X_test = np.load("/Users/sofia/Documents/ISMIN/STM32/IA_embarquee/X_test.npy")
    Y_test = np.load("/Users/sofia/Documents/ISMIN/STM32/IA_embarquee/Y_test.npy")
    
    with serial.Serial(PORT, 115200, timeout=1) as ser:
        print("Synchronising with STM32...")
        synchronise_UART(ser)
        print("Synchronised!")

        print("Evaluating Predictive Maintenance model on STM32...")
        evaluate_model_on_STM32(100, ser)