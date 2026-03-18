/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2026-03-18T12:34:28+0100
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[419] = {
  0xbf28aada3f192039U, 0xbebd07023edbcc72U, 0xbea79a2f3e1c3e97U, 0x3e6849143cdfb481U,
  0x3f9f37de3e00d657U, 0x3e158e313ed07f03U, 0xbee4a1253e003c16U, 0x3f5ac9533eac218cU,
  0x3f8607053f22a8a2U, 0x3f51595bbe8360bcU, 0xbf706322bf0dcf1dU, 0xbea758653eadbccfU,
  0xbf093002bebaa6e3U, 0xbfc131e9bf06deedU, 0xbf22014ebdaf96fbU, 0x3f4f30d6bf80f6c4U,
  0x3ec668da3e9e8789U, 0x3eb622273f1d946bU, 0xbf7e5d47bc51946fU, 0x3d4f3de73f39c85fU,
  0xbd1d68d93ce078beU, 0x3f29f2ee3e6f1694U, 0x3f147e513e9c32adU, 0xbf3c799c3f8f9a86U,
  0xbea482a93f1ed32fU, 0xbf2d59ab3e73241fU, 0xbd459651bf0c759cU, 0x3f786f893eb3245bU,
  0xbcc0e711bf187d03U, 0xbe8bb1613f528bccU, 0x3e92862ebe554ea3U, 0x3e99d4aebee2bd7eU,
  0xbf77f8fe3ef3c6c0U, 0xbd9107343cca5981U, 0xbfa16ab93e969201U, 0xbe09d36cbf489bd5U,
  0x3f493c5fbdc5a921U, 0xbfdc3e8ebf0504d6U, 0x3f17bcaabe0c3cc9U, 0xbf3c398fbe744263U,
  0xbe26d0eb3f5e86d9U, 0xbe0a8cf43f46132cU, 0x3effdf35bed60543U, 0x3f935e1dbf1b89c8U,
  0x3e0dfdeabfa083c6U, 0x3de3ba963f0dcdf5U, 0x3f09adfcbf104b1cU, 0x3de076dbbe92a6c8U,
  0xbe8afaa3be49a661U, 0xbfb621763f1fa82bU, 0x3ee810243e4ff421U, 0xbe0fc6723e35e18cU,
  0x3f5f819d3ea685c2U, 0x3f5d42e4bed4ef7bU, 0x3f5dac0e3ebe6538U, 0x3e2c9d05be844da7U,
  0xbedcba50bf3f7c68U, 0x3f1b1939bd19281fU, 0x3f9eded03eea2b26U, 0xbe817b2fbf263f88U,
  0x3df1adffbf2c4481U, 0xbe36154ebdf249e5U, 0xbf9988ccbe0ce1dcU, 0xbf3bb3933e375ac6U,
  0xbd5b8ea8bf039436U, 0x3db0f2bf3f221264U, 0xbe827cdabf914800U, 0xbe8ef0eb3f24113bU,
  0x3f6f5cdebdd6aa52U, 0x3ee63c65bef24e89U, 0xbf37c4d0bd033afbU, 0x3ebbba36bead7ef9U,
  0xbef537f13e25e142U, 0x3eebfe253eda5a63U, 0x3f07289a3fc65396U, 0x3dbe3cd03ee1e34fU,
  0xbf0ff4493e07eecbU, 0x3f55a87ebf5c9758U, 0xbeaa238c3e64539cU, 0xbf00e48abe605e1cU,
  0x3fb7e92b3e292ef3U, 0x3fa91bba3eafd576U, 0xbf953b67bd7767e7U, 0xbe0727f43ef7c049U,
  0xbdb57a6c3d87e355U, 0xbe3db7993d1db510U, 0x3ee0f8743f9bc22eU, 0xbfad498b3e8c82feU,
  0xbe933e0bbf928504U, 0xbe8766aa3efcfe44U, 0xbf087124beee10fdU, 0x3eba393fbee9ee71U,
  0x3e0abd683fd23905U, 0x3e996ee63de6570dU, 0x3f4d1e21bf08d047U, 0xbe788231bf0669afU,
  0x3e67a30a3f752d30U, 0xbd38d43b3cc62373U, 0x3f1d00463ec5ad0fU, 0x3f1a12c13f0f22ceU,
  0x3e66a2273f05ffbbU, 0x3f938f3b3f8d41d5U, 0x3e9720273e973cf1U, 0xbf0165293f2cef1bU,
  0x3eed18f9be2732dfU, 0x3e9d1c3cbe24e781U, 0x3f52024b3f5eaf07U, 0x3f8fa43b3a9cb085U,
  0x3e5171dcbeda7024U, 0xbe55e5cb3e46e52aU, 0x3e325a2fbecdf964U, 0x3f3eb8bf3e79e33dU,
  0x3ef823783eda3a54U, 0xbe26a54e3de86610U, 0x3f0297433efe9c67U, 0x3d2e9fe23ec47799U,
  0xbe1a5546be0c492dU, 0xbe8e43c33f29b7bfU, 0xbef95100be3fcfb0U, 0xbf2a1f01be81925aU,
  0xbe76c75c3da1729dU, 0x3eb8e741bdc28c7aU, 0x3f7ef9933ec73624U, 0xbccd76833ea22a8fU,
  0xbe3ff8743f509779U, 0xbf424110beab5df7U, 0xbe00d8113e684f99U, 0x3f1a862fbe319f8dU,
  0xbd5d2d0fbec406a5U, 0x3f4089743ed1d551U, 0x3e8f10fa3f83c810U, 0xbee8c8b2be30f70bU,
  0xbcc13f123dd4de9bU, 0x3e8178e0bf67934aU, 0xbf2c8eda3fb3a4fcU, 0x3eccc6e63c7902e2U,
  0x3d2431df3f9606fbU, 0x3f62f4f1be7b7c2fU, 0x3d9b8482bf5ba3eaU, 0x3ee57f223fae034dU,
  0x3f5bc9d03edf0b4dU, 0x3f5f44013f9f86f9U, 0x3f06864d3f2b3264U, 0xbeab0d613c332d33U,
  0xbed844433f69484dU, 0x3f34ed4cbf5051a3U, 0x3ed43b6b3f062705U, 0xbf304dacbcd696c3U,
  0xbf2490183f891302U, 0x3fddbac83edfb6c4U, 0xbeb94c043ebbc3abU, 0xbe0e79e53eac370fU,
  0x3d59e79c3cbc01f5U, 0x3cbf06c53e0c7409U, 0xbd45c2bc3ef5e851U, 0x3f84d2653e88f240U,
  0xbe2ebb47bf8ba46bU, 0x3edee65e3e936f4bU, 0x3f323d19bf4b9bb2U, 0x3d83ec15be2c7bacU,
  0xbf5e8f9a3f90633bU, 0xbe99ef74beb55692U, 0x3f5a31c8bedc66b7U, 0x3f2823583f648098U,
  0xbefb3ddd3ee4e7b5U, 0x3f4c50333ecd2898U, 0x3f17ac33bf420643U, 0xbf22cced3ec2c817U,
  0xbf286440bebf505cU, 0xbe1ca4553fbebed8U, 0x3f0d15a83ecfa5f8U, 0x3f624688bdc24c99U,
  0xbe27d571bf157fa3U, 0xbd2bee2ebe163b6eU, 0xbef2e00ebf3382f2U, 0x3f6fdbdb3ec1124cU,
  0x3ed910debe73cfc0U, 0xbee557b53f8b4a65U, 0x3e4fdc593df910e6U, 0x3f53690dbebf9ed8U,
  0x3f1af5ddbf2342dfU, 0xbf52a8193f01735fU, 0x3d89312f3e945829U, 0x3c42fe2e3dc35460U,
  0x3f39ee5e3d50de15U, 0x3e308aafbf12764bU, 0x3ece88fe3eaf9535U, 0xbe0b608dbf1b3757U,
  0x3decca7340080578U, 0xbec69c60be221ce7U, 0xbe21a8133fa94281U, 0x3e9500fa3f4ca299U,
  0x3e18fbb9bf102075U, 0x3ec741d6bf8a5165U, 0xbede40d13f08ad1fU, 0x3dfe6bd8bfd2547aU,
  0x3ed727433ed7efc8U, 0x3ef0448abdc5676cU, 0xbfe3af7f3f536c6bU, 0xbec032d4c01d0aafU,
  0xbeaaf562be28aeb7U, 0x3f00e1823ecbbabdU, 0xbf2882f23f3ca5a6U, 0x3f3af21ebe90e7e0U,
  0x3ef205d8be64e659U, 0x3f5a08183e79e6e2U, 0x3f1f4c783ec56ffbU, 0xbf592961be4b9c0dU,
  0x3f61a0f73f0e2d85U, 0xbe512f033ce2921cU, 0xbeab02c13f2d2422U, 0xbee523eb3f82ac1fU,
  0xbed445ad3e9ba7d8U, 0x3f41f27f3e6a5f56U, 0xbe4d47f03f57ed9eU, 0xbefd226b3ef1b2a3U,
  0x3f270e583e54094dU, 0x3f43ef7cbeff94b9U, 0x3e8044683daab486U, 0x3f6e2c0cbe585749U,
  0x3f253e54bef6cd38U, 0xbf3819e9bf19c842U, 0xbe836686be8cbb28U, 0x3f36c46abf0405d5U,
  0x3e34fe24beac4fa3U, 0xbe359678bd7e7d18U, 0xbe64ca163e4ecb50U, 0x3d4650c0be217774U,
  0x3e83071ebea05e35U, 0xbe7f99353e9f728bU, 0xbd3a2e90bd8dde12U, 0xbe3770be3c95cd89U,
  0x3dfbbe93be743e15U, 0xbe713868bea29ab4U, 0xbe5bd917be92285eU, 0x3e1d1b063d8adc51U,
  0xbd8f92293d9ce5afU, 0xbe9aad54bde082bfU, 0xbe8390273e4364dfU, 0xbe9995e2bc25c13cU,
  0xbf2016d43efcad4cU, 0x3e267c51beb0498eU, 0xbd80c15b3e5a31ffU, 0x3c07730fbe741474U,
  0xbd6242f63f5134abU, 0x3fa1887e3f26faedU, 0xbf0b4c453f25d75cU, 0xbf25741dbd7ef4fbU,
  0xbe649920be400b83U, 0xbe18faca3f764fe4U, 0x3e2f0f9a3f27e338U, 0x3f8b95adbe0d2ea0U,
  0x3e8a1516bf18b683U, 0xbf10a9123dc54da7U, 0xbda3c3b2bf1eb9aaU, 0x3d6f72dbbdd10320U,
  0x3e497f823ed829d0U, 0xbe8468cabf194733U, 0x3f05f5753d859241U, 0xbe7aa2afbeb487f6U,
  0x3dfb494c3e018101U, 0xbf51bf793f0d1abbU, 0x3e21a3b4be31af51U, 0xbdc70a173e42dca9U,
  0x3efc89533e892b9eU, 0xbe9cd2743ed3a9c1U, 0x3ea2ab43bf1a5be4U, 0xbf054ca0bd097f3aU,
  0x3d4b89de3f4f5dffU, 0x3bc5c5b1bfe31fe5U, 0x3eadc8383e7d79ceU, 0x3da3cf313f09120fU,
  0xbf2ee32a3eefa309U, 0x3e2acaaac00679cbU, 0xbd81e8ef3f3f54c9U, 0x3e4139acbdefe50aU,
  0x3f0759803f311e94U, 0x3f4acfe13f02116dU, 0xbe93b0d03ea329b4U, 0x3e4d69d9be2efa7bU,
  0x3f11c56e3da415b9U, 0xbe085b8fbf48adbaU, 0xbf0d984c3f98570bU, 0x3f4eaca8beafdda1U,
  0x3ebf62e3bd0770afU, 0xbe567372bf8f5e61U, 0xbdd15cbfbe7c1ba7U, 0xbd664c21bf99990aU,
  0x3f4819dd3f2e17d4U, 0xbf4de3c63f727bc9U, 0xbe33c8153f219b6cU, 0xbe6edf703f5e13c8U,
  0xbf11d800be1210faU, 0x3f24ecb0bead094dU, 0x3f8ba8723e3c65a9U, 0x3d2f2f573da9c8deU,
  0x3e8785a53f59ebcaU, 0x3f6c9946be627761U, 0x3f47b693bee8ee86U, 0x3ed1c6c23ef49ccdU,
  0x3ea09baf3e9c3417U, 0xbe77b0873f230746U, 0xbd0584283dffc5c5U, 0x3d02e5053ec6e42fU,
  0x400ccac03f04b7ecU, 0xbe70d5ab3d966e10U, 0xbe50cf6f3e034323U, 0x3efb278e3f757a61U,
  0x3f8f0da8bb1a7de7U, 0xbd8dea143f3bad97U, 0xbd032e873dc9f0e6U, 0xbf0521c93eeac07dU,
  0x3f3ab36abe6ecf7bU, 0x3f87e14bbefd9b11U, 0x3ed881a93e89d73bU, 0x3ec2ba0cbf33b975U,
  0x3ec183af3e98b428U, 0xbeb909c8bf45bfb8U, 0x3e98793abe0c627fU, 0x3f177a85befe57bfU,
  0xbdbbd1053f279c07U, 0xbf214935be265a49U, 0x3f02bcc0bf14dc21U, 0x3d9195d83f0f547bU,
  0xbf024681be835588U, 0x3ee825da3f32d318U, 0x3ef859cebe4061f5U, 0xbf33b86cbe69ba23U,
  0xbe44cb02be8969d9U, 0x3e0137e33f5f416bU, 0x3f36ca8c3dba9cddU, 0x3f1c012cbe4fa1b9U,
  0xbeab6d8b3e975297U, 0xbeb805ccbe2769f8U, 0xbe9c52c6bf1656eeU, 0x3f7a9c973e64321dU,
  0x3d1fe29a3f5027c5U, 0x3f8a51ab3e5e8205U, 0x3f159dd3be8c376bU, 0x3f5e11793f057e86U,
  0x3f4de7e13d6474b2U, 0x3e3b29073f8efbf5U, 0x3f4a4743bfbc6164U, 0x3e9d56cd3e8abe83U,
  0x3e928ed0bf4ef95dU, 0xbe9f57683f4e635dU, 0x3e1dd45d3f8818f7U, 0xbef453eabeb729d7U,
  0xbf3f9730bdc07fcaU, 0x3f0523bfbea7b86cU, 0x3f48ea5abe8c33abU, 0x3df4e7463f840916U,
  0x3dfd109cbfa35ea9U, 0x3d75fa9f3f53aa45U, 0x3f4e5767bd2bf568U, 0x3df6acddbe528d76U,
  0x3e04c94fbfa5c83bU, 0xbefb46b63faed409U, 0x3e030e2dbdaf42dbU, 0xbef6f62fbf7cb039U,
  0x3eb2f6b2bca1e0d7U, 0xbeda28723e4d55a1U, 0x3da8595e3f2f5182U, 0x3e89e02a3e34dd34U,
  0xbe4d193c3fa74de1U, 0xbf0afe64beb3fda2U, 0x3da328493e9753cdU, 0x3f00de753f00e5eeU,
  0xbdcb0fa23e8f4a46U, 0x3f4b94483ef60343U, 0x3e126d493e605f55U, 0xbd1485533ed8a372U,
  0xbd9bf70c3f4138a2U, 0x3e6091b43eda6e90U, 0x3f0c6a453ef8f96cU, 0xbe539fcd3e909f76U,
  0x3f341ff7bf98d52dU, 0xbf98dedc3ce7004dU, 0xc037bd2bbe8fb82aU, 0x3e6881bf3defd6e0U,
  0xc0408deabf0a758eU, 0x3ea87c7bbe5336e6U, 0xbfcced363e6d7a2cU, 0xc039fe9fbf85383aU,
  0x3f03f9a3be7175aeU, 0xbfa7b1033e5934b0U, 0x3fe07772bd86ff27U, 0x3eb67f05bf844a17U,
  0x3f840f013ed46682U, 0xbfb48cc13f980704U, 0xbfba1396bf677a85U, 0x3e96cf403d94412dU,
  0xbf4313edbe54a84cU, 0xbf2e02d1bfdf2cc8U, 0xbf18e0a03fa39bf4U, 0x3da7f439beec3deeU,
  0x3e37176bbfe83a40U, 0xbf322bb3bf65fb33U, 0xbe37f2533ee18d7cU, 0x3f6044e23f95af86U,
  0x3fa261563e452485U, 0xbfd03f81bf7e6693U, 0x3dbe4e793ed21dd2U, 0x3d91b2a8bfcd4ddbU,
  0xbf33ab19c00ea3edU, 0x3f641584c0361bc1U, 0xbf349d03c00c52ddU, 0x3f022eadbfed3483U,
  0x3dfdfc23bf7ea90bU, 0x3f60c1b83f133428U, 0xc045b45abfa4d544U, 0x3e68f148bf8041c2U,
  0xc0601b6c3d49a89bU, 0xbf0f18f1bfb46d06U, 0x3dc8c7edbf8d1df1U, 0x3f25faca3f8004acU,
  0xbea3bad5bdd630a3U, 0xbdd50663bd912f38U, 0x3d4c0107U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

