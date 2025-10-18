void AssetLoader___ctor(AssetLoader_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AssetLoader__AddCallback(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  if ( callbackFunc )
    AssetLoader__add_endCallback2(this, callbackFunc, method);
}


void AssetLoader__AddEntry(AssetLoader_o *this, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C372B4(0);
  AssetData__AddEntry(data, 0);
}


void AssetLoader__AssetLoadLogError(AssetLoader_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  __int64 Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x21
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w1
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w1
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w1
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t v75; // w1
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  int32_t v78; // w1
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  int32_t v81; // w1
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w1
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  int32_t v87; // w1
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  int32_t v90; // w1
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w1
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  int32_t v96; // w1
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  int32_t v99; // w1
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  int32_t v102; // w1
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  int32_t v105; // w1
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  int32_t v108; // w1
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  int32_t v111; // w1
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  int32_t v114; // w1
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  int32_t v117; // w1
  __int64 v118; // x23
  __int64 v119; // x24
  CrashReporter_o *v120; // x19

  if ( (byte_4C41F4D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_14163/*"The request timed out."*/);
    sub_1C37058(&StringLiteral_21062/*"java.net.SocketException"*/);
    sub_1C37058(&StringLiteral_12294/*"SSL CA certificate error"*/);
    sub_1C37058(&StringLiteral_1414/*"404: Not Found"*/);
    sub_1C37058(&StringLiteral_14104/*"The network connection was lost."*/);
    sub_1C37058(&StringLiteral_1408/*"400: Bad Request"*/);
    sub_1C37058(&StringLiteral_14898/*"Unable to complete SSL connection"*/);
    sub_1C37058(&StringLiteral_14928/*"Unable to read data"*/);
    sub_1C37058(&StringLiteral_18216/*"connect failed"*/);
    sub_1C37058(&StringLiteral_7264/*"HTTP/1.1 500 Internal Server Error"*/);
    sub_1C37058(&StringLiteral_21064/*"java.net.UnknownHostException"*/);
    sub_1C37058(&StringLiteral_1422/*"500: Internal Server Error"*/);
    sub_1C37058(&StringLiteral_1424/*"502:"*/);
    sub_1C37058(&StringLiteral_11342/*"Request timeout"*/);
    sub_1C37058(&StringLiteral_4664/*"Connection reset by peer"*/);
    sub_1C37058(&StringLiteral_5025/*"DLErrorType"*/);
    sub_1C37058(&StringLiteral_5024/*"DLErrorAsset"*/);
    sub_1C37058(&StringLiteral_1436/*"504: Gateway Timeout"*/);
    sub_1C37058(&StringLiteral_15099/*"Unknown Error"*/);
    sub_1C37058(&StringLiteral_1426/*"503 Auto retry count"*/);
    sub_1C37058(&StringLiteral_21046/*"java.io.EOFException"*/);
    sub_1C37058(&StringLiteral_21059/*"java.net.ConnectException"*/);
    sub_1C37058(&StringLiteral_1412/*"403: Forbidden"*/);
    sub_1C37058(&StringLiteral_4663/*"Connection refused"*/);
    sub_1C37058(&StringLiteral_7265/*"HTTP/1.1 504 Gateway Timeout"*/);
    sub_1C37058(&StringLiteral_1410/*"401: Authorization Required"*/);
    sub_1C37058(&StringLiteral_21047/*"java.io.IOException"*/);
    sub_1C37058(&StringLiteral_9456/*"No address associated with hostname"*/);
    sub_1C37058(&StringLiteral_21061/*"java.net.ProtocolException"*/);
    sub_1C37058(&StringLiteral_2377/*"AssetBundle file download time over"*/);
    sub_1C37058(&StringLiteral_1415/*"408: Request Time-out"*/);
    sub_1C37058(&StringLiteral_14547/*"Too many redirects"*/);
    sub_1C37058(&StringLiteral_12922/*"Software caused connection abort"*/);
    sub_1C37058(&StringLiteral_2376/*"AssetBundle file check sum error"*/);
    sub_1C37058(&StringLiteral_21060/*"java.net.NoRouteToHostException"*/);
    sub_1C37058(&StringLiteral_5252/*"Destination host has an erroneous SSL certificate"*/);
    sub_1C37058(&StringLiteral_4665/*"Connection timed out"*/);
    sub_1C37058(&StringLiteral_4253/*"Cannot resolve destination host"*/);
    sub_1C37058(&StringLiteral_21063/*"java.net.SocketTimeoutException"*/);
    sub_1C37058(&StringLiteral_2380/*"AssetLoadError"*/);
    byte_4C41F4D = 1;
  }
  Instance = sub_1C37100(string___TypeInfo, 37);
  if ( !Instance )
    goto LABEL_58;
  v8 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v9 = StringLiteral_9456/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9456/*"No address associated with hostname"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(Instance + 32), v9, v6, v7);
  if ( *(_DWORD *)(v8 + 24) <= 1u )
    goto LABEL_47;
  v12 = StringLiteral_2377/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v8 + 40) = StringLiteral_2377/*"AssetBundle file download time over"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 40), v12, v10, v11);
  if ( *(_DWORD *)(v8 + 24) <= 2u )
    goto LABEL_47;
  v15 = StringLiteral_14104/*"The network connection was lost."*/;
  *(_QWORD *)(v8 + 48) = StringLiteral_14104/*"The network connection was lost."*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 48), v15, v13, v14);
  if ( *(_DWORD *)(v8 + 24) <= 3u )
    goto LABEL_47;
  v18 = StringLiteral_4664/*"Connection reset by peer"*/;
  *(_QWORD *)(v8 + 56) = StringLiteral_4664/*"Connection reset by peer"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 56), v18, v16, v17);
  if ( *(_DWORD *)(v8 + 24) <= 4u )
    goto LABEL_47;
  v21 = StringLiteral_12922/*"Software caused connection abort"*/;
  *(_QWORD *)(v8 + 64) = StringLiteral_12922/*"Software caused connection abort"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 64), v21, v19, v20);
  if ( *(_DWORD *)(v8 + 24) <= 5u )
    goto LABEL_47;
  v24 = StringLiteral_4665/*"Connection timed out"*/;
  *(_QWORD *)(v8 + 72) = StringLiteral_4665/*"Connection timed out"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 72), v24, v22, v23);
  if ( *(_DWORD *)(v8 + 24) <= 6u )
    goto LABEL_47;
  v27 = StringLiteral_4663/*"Connection refused"*/;
  *(_QWORD *)(v8 + 80) = StringLiteral_4663/*"Connection refused"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 80), v27, v25, v26);
  if ( *(_DWORD *)(v8 + 24) <= 7u )
    goto LABEL_47;
  v30 = StringLiteral_14163/*"The request timed out."*/;
  *(_QWORD *)(v8 + 88) = StringLiteral_14163/*"The request timed out."*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 88), v30, v28, v29);
  if ( *(_DWORD *)(v8 + 24) <= 8u )
    goto LABEL_47;
  v33 = StringLiteral_4253/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v8 + 96) = StringLiteral_4253/*"Cannot resolve destination host"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 96), v33, v31, v32);
  if ( *(_DWORD *)(v8 + 24) <= 9u )
    goto LABEL_47;
  v36 = StringLiteral_14898/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v8 + 104) = StringLiteral_14898/*"Unable to complete SSL connection"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 104), v36, v34, v35);
  if ( *(_DWORD *)(v8 + 24) <= 0xAu )
    goto LABEL_47;
  v39 = StringLiteral_15099/*"Unknown Error"*/;
  *(_QWORD *)(v8 + 112) = StringLiteral_15099/*"Unknown Error"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 112), v39, v37, v38);
  if ( *(_DWORD *)(v8 + 24) <= 0xBu )
    goto LABEL_47;
  v42 = StringLiteral_11342/*"Request timeout"*/;
  *(_QWORD *)(v8 + 120) = StringLiteral_11342/*"Request timeout"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 120), v42, v40, v41);
  if ( *(_DWORD *)(v8 + 24) <= 0xCu )
    goto LABEL_47;
  v45 = StringLiteral_2376/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v8 + 128) = StringLiteral_2376/*"AssetBundle file check sum error"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 128), v45, v43, v44);
  if ( *(_DWORD *)(v8 + 24) <= 0xDu )
    goto LABEL_47;
  v48 = StringLiteral_12294/*"SSL CA certificate error"*/;
  *(_QWORD *)(v8 + 136) = StringLiteral_12294/*"SSL CA certificate error"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 136), v48, v46, v47);
  if ( *(_DWORD *)(v8 + 24) <= 0xEu )
    goto LABEL_47;
  v51 = StringLiteral_7264/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v8 + 144) = StringLiteral_7264/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 144), v51, v49, v50);
  if ( *(_DWORD *)(v8 + 24) <= 0xFu )
    goto LABEL_47;
  v54 = StringLiteral_7265/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v8 + 152) = StringLiteral_7265/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 152), v54, v52, v53);
  if ( *(_DWORD *)(v8 + 24) <= 0x10u )
    goto LABEL_47;
  v57 = StringLiteral_5252/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v8 + 160) = StringLiteral_5252/*"Destination host has an erroneous SSL certificate"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 160), v57, v55, v56);
  if ( *(_DWORD *)(v8 + 24) <= 0x11u )
    goto LABEL_47;
  v60 = StringLiteral_14547/*"Too many redirects"*/;
  *(_QWORD *)(v8 + 168) = StringLiteral_14547/*"Too many redirects"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 168), v60, v58, v59);
  if ( *(_DWORD *)(v8 + 24) <= 0x12u )
    goto LABEL_47;
  v63 = StringLiteral_21046/*"java.io.EOFException"*/;
  *(_QWORD *)(v8 + 176) = StringLiteral_21046/*"java.io.EOFException"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 176), v63, v61, v62);
  if ( *(_DWORD *)(v8 + 24) <= 0x13u )
    goto LABEL_47;
  v66 = StringLiteral_21062/*"java.net.SocketException"*/;
  *(_QWORD *)(v8 + 184) = StringLiteral_21062/*"java.net.SocketException"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 184), v66, v64, v65);
  if ( *(_DWORD *)(v8 + 24) <= 0x14u )
    goto LABEL_47;
  v69 = StringLiteral_21063/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v8 + 192) = StringLiteral_21063/*"java.net.SocketTimeoutException"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 192), v69, v67, v68);
  if ( *(_DWORD *)(v8 + 24) <= 0x15u )
    goto LABEL_47;
  v72 = StringLiteral_21060/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v8 + 200) = StringLiteral_21060/*"java.net.NoRouteToHostException"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 200), v72, v70, v71);
  if ( *(_DWORD *)(v8 + 24) <= 0x16u )
    goto LABEL_47;
  v75 = StringLiteral_21047/*"java.io.IOException"*/;
  *(_QWORD *)(v8 + 208) = StringLiteral_21047/*"java.io.IOException"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 208), v75, v73, v74);
  if ( *(_DWORD *)(v8 + 24) <= 0x17u )
    goto LABEL_47;
  v78 = StringLiteral_21059/*"java.net.ConnectException"*/;
  *(_QWORD *)(v8 + 216) = StringLiteral_21059/*"java.net.ConnectException"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 216), v78, v76, v77);
  if ( *(_DWORD *)(v8 + 24) <= 0x18u )
    goto LABEL_47;
  v81 = StringLiteral_18216/*"connect failed"*/;
  *(_QWORD *)(v8 + 224) = StringLiteral_18216/*"connect failed"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 224), v81, v79, v80);
  if ( *(_DWORD *)(v8 + 24) <= 0x19u )
    goto LABEL_47;
  v84 = StringLiteral_21061/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v8 + 232) = StringLiteral_21061/*"java.net.ProtocolException"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 232), v84, v82, v83);
  if ( *(_DWORD *)(v8 + 24) <= 0x1Au )
    goto LABEL_47;
  v87 = StringLiteral_21064/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v8 + 240) = StringLiteral_21064/*"java.net.UnknownHostException"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 240), v87, v85, v86);
  if ( *(_DWORD *)(v8 + 24) <= 0x1Bu )
    goto LABEL_47;
  v90 = StringLiteral_1408/*"400: Bad Request"*/;
  *(_QWORD *)(v8 + 248) = StringLiteral_1408/*"400: Bad Request"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 248), v90, v88, v89);
  if ( *(_DWORD *)(v8 + 24) <= 0x1Cu )
    goto LABEL_47;
  v93 = StringLiteral_1410/*"401: Authorization Required"*/;
  *(_QWORD *)(v8 + 256) = StringLiteral_1410/*"401: Authorization Required"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 256), v93, v91, v92);
  if ( *(_DWORD *)(v8 + 24) <= 0x1Du )
    goto LABEL_47;
  v96 = StringLiteral_1412/*"403: Forbidden"*/;
  *(_QWORD *)(v8 + 264) = StringLiteral_1412/*"403: Forbidden"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 264), v96, v94, v95);
  if ( *(_DWORD *)(v8 + 24) <= 0x1Eu )
    goto LABEL_47;
  v99 = StringLiteral_1414/*"404: Not Found"*/;
  *(_QWORD *)(v8 + 272) = StringLiteral_1414/*"404: Not Found"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 272), v99, v97, v98);
  if ( *(_DWORD *)(v8 + 24) <= 0x1Fu )
    goto LABEL_47;
  v102 = StringLiteral_1415/*"408: Request Time-out"*/;
  *(_QWORD *)(v8 + 280) = StringLiteral_1415/*"408: Request Time-out"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 280), v102, v100, v101);
  if ( *(_DWORD *)(v8 + 24) <= 0x20u )
    goto LABEL_47;
  v105 = StringLiteral_1422/*"500: Internal Server Error"*/;
  *(_QWORD *)(v8 + 288) = StringLiteral_1422/*"500: Internal Server Error"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 288), v105, v103, v104);
  if ( *(_DWORD *)(v8 + 24) <= 0x21u )
    goto LABEL_47;
  v108 = StringLiteral_1424/*"502:"*/;
  *(_QWORD *)(v8 + 296) = StringLiteral_1424/*"502:"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 296), v108, v106, v107);
  if ( *(_DWORD *)(v8 + 24) <= 0x22u
    || (v111 = StringLiteral_1426/*"503 Auto retry count"*/,
        *(_QWORD *)(v8 + 304) = StringLiteral_1426/*"503 Auto retry count"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 304), v111, v109, v110),
        *(_DWORD *)(v8 + 24) <= 0x23u)
    || (v114 = StringLiteral_1436/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v8 + 312) = StringLiteral_1436/*"504: Gateway Timeout"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 312), v114, v112, v113),
        *(_DWORD *)(v8 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1C372BC(Instance);
  }
  v117 = StringLiteral_14928/*"Unable to read data"*/;
  *(_QWORD *)(v8 + 320) = StringLiteral_14928/*"Unable to read data"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 320), v117, v115, v116);
  if ( (int)*(_QWORD *)(v8 + 24) < 1 )
  {
LABEL_48:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_57;
  }
  v118 = 0;
  v119 = (unsigned int)*(_QWORD *)(v8 + 24) - 1LL;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_58;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v8 + 32 + 8 * v118), 0);
    if ( (Instance & 1) != 0 )
      break;
    if ( v119 == v118 )
      goto LABEL_48;
    if ( ++v118 >= (unsigned __int64)*(unsigned int *)(v8 + 24) )
      goto LABEL_47;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v120 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, 0), !v120) )
  {
LABEL_58:
    sub_1C372B4(Instance);
  }
  CrashReporter__AddCustomKey(v120, (System_String_o *)StringLiteral_5024/*"DLErrorAsset"*/, (System_String_o *)Instance, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v118 >= *(_DWORD *)(v8 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5025/*"DLErrorType"*/,
    *(System_String_o **)(v8 + 32 + 8 * v118),
    0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  errorCode = (System_String_o *)StringLiteral_2380/*"AssetLoadError"*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0);
}


void AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_4C41F4A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C41F4A = 1;
  }
  endCallback = this->fields.endCallback;
  this->fields.isEndLoad = 1;
  if ( endCallback )
    ((void (__fastcall *)(intptr_t, AssetLoader_o *, intptr_t))endCallback->fields.invoke_impl)(
      endCallback->fields.method_code,
      this,
      endCallback->fields.method);
  endCallback2 = this->fields.endCallback2;
  if ( endCallback2 )
    ((void (__fastcall *)(intptr_t, struct AssetData_o *, intptr_t))endCallback2->fields.invoke_impl)(
      endCallback2->fields.method_code,
      this->fields.data,
      endCallback2->fields.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void AssetLoader__EndRetryDialog(AssetLoader_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    AssetLoader__Reboot(this, (const MethodInfo *)isDecide);
}


void AssetLoader__EndWarningDialog(AssetLoader_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void AssetLoader__Init(AssetLoader_o *this, AssetData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.data = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
}


bool AssetLoader__IsSame(AssetLoader_o *this, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame(data, name, 0);
  return (char)data;
}


bool AssetLoader__IsSame_40514348(AssetLoader_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_40506240(data, type, name, 0);
  return (char)data;
}


System_Collections_IEnumerator_o *AssetLoader__LoadDataCR(
        AssetLoader_o *this,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C41F49 & 1) == 0 )
  {
    sub_1C37058(&AssetLoader__LoadDataCR_d__29_TypeInfo);
    byte_4C41F49 = 1;
  }
  v5 = sub_1C372A4(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)resourceNames, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  System_Byte_array *readData; // x20
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C41F4B & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C41F4B = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v4 = CatAndMouseGame__MouseGame4(readData, 0);
  this->fields._decData = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._decData, (int32_t)v4, v5, v6);
}


void AssetLoader__Reboot(AssetLoader_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ManagementManager_c *v8; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C41F4C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&ManagementManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C41F4C = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
    this->fields.loader = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loader, 0, v6, v7);
  }
  this->fields.readData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.readData, 0, v2, v3);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4C41F40 )
  {
    sub_1C37058(&ManagementManager_TypeInfo);
    byte_4C41F40 = 1;
  }
  v8 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v8 = ManagementManager_TypeInfo;
  }
  if ( v8->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71061684(0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
  }
}


void AssetLoader__StartLoad(
        AssetLoader_o *this,
        AssetLoader_LoadEndHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x21
  AssetData_o *v7; // x0
  bool IsNeedUpdateVersion; // w0
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *DataCR; // x1

  this->fields.endCallback = callbackFunc;
  p_endCallback = &this->fields.endCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callbackFunc, (int32_t)resourceNames, method);
  v7 = (AssetData_o *)*(p_endCallback - 1);
  if ( !v7 )
    sub_1C372B4(0);
  IsNeedUpdateVersion = AssetData__IsNeedUpdateVersion(v7, 0);
  this->fields.isDownload = IsNeedUpdateVersion;
  this->fields.isRequestDownload = IsNeedUpdateVersion;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, DataCR, 0);
}


void AssetLoader__abort_thread(AssetLoader_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Threading_Thread_o *threadDecrypt; // x0
  System_Threading_Thread_o **p_threadDecrypt; // x19

  p_threadDecrypt = &this->fields.threadDecrypt;
  threadDecrypt = this->fields.threadDecrypt;
  if ( threadDecrypt && !System_Threading_Thread__get_ThreadState(threadDecrypt, 0) )
  {
    if ( !*p_threadDecrypt )
      sub_1C372B4(0);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0);
  }
  *p_threadDecrypt = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)p_threadDecrypt, 0, v2, v3);
}


void AssetLoader__add_endCallback(AssetLoader_o *this, AssetLoader_LoadEndHandler_o *value, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndHandler_o *endCallback; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetLoader_o *v11; // x0
  AssetLoader_LoadEndHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C41F45 & 1) == 0 )
  {
    sub_1C37058(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4C41F45 = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v6 = (System_Delegate_o *)endCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndHandler_c *)v8->klass != AssetLoader_LoadEndHandler_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  AssetLoader__remove_endCallback(v11, v12, v13);
}


void AssetLoader__add_endCallback2(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *value,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndDataHandler_o **p_endCallback2; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetLoader_o *v11; // x0
  AssetLoader_LoadEndDataHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C41F47 & 1) == 0 )
  {
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C41F47 = 1;
  }
  endCallback2 = this->fields.endCallback2;
  p_endCallback2 = &this->fields.endCallback2;
  v6 = (System_Delegate_o *)endCallback2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndDataHandler_c *)v8->klass != AssetLoader_LoadEndDataHandler_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  AssetLoader__remove_endCallback2(v11, v12, v13);
}


bool AssetLoader__get_IsRequestDownload(AssetLoader_o *this, const MethodInfo *method)
{
  return this->fields.isRequestDownload;
}


int32_t AssetLoader__get_LoadSize(AssetLoader_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  float downloadProgress; // s0
  struct AssetData_o *v5; // x8
  float v6; // s0
  struct AssetData_o *data; // x8

  if ( !this->fields.isDownload )
  {
    data = this->fields.data;
    if ( data )
    {
      LODWORD(loader) = data->fields.size;
      return (int)loader;
    }
    goto LABEL_10;
  }
  loader = this->fields.loader;
  if ( !loader )
    return (int)loader;
  downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(loader, 0);
  v5 = this->fields.data;
  if ( !v5 )
LABEL_10:
    sub_1C372B4(this);
  v6 = downloadProgress * (float)v5->fields.size;
  if ( v6 == INFINITY )
    LODWORD(loader) = 0x80000000;
  else
    LODWORD(loader) = (int)v6;
  return (int)loader;
}


System_String_o *AssetLoader__get_Name(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C372B4(this);
  return data->fields.name;
}


int32_t AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C372B4(this);
  return data->fields.size;
}


void AssetLoader__remove_endCallback(
        AssetLoader_o *this,
        AssetLoader_LoadEndHandler_o *value,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o **p_endCallback; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndHandler_o *endCallback; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetLoader_o *v11; // x0
  AssetLoader_LoadEndDataHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C41F46 & 1) == 0 )
  {
    sub_1C37058(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4C41F46 = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v6 = (System_Delegate_o *)endCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndHandler_c *)v8->klass != AssetLoader_LoadEndHandler_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  AssetLoader__add_endCallback2(v11, v12, v13);
}


void AssetLoader__remove_endCallback2(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *value,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndDataHandler_o **p_endCallback2; // x20
  System_Delegate_o *v6; // x21
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetLoader_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C41F48 & 1) == 0 )
  {
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C41F48 = 1;
  }
  endCallback2 = this->fields.endCallback2;
  p_endCallback2 = &this->fields.endCallback2;
  v6 = (System_Delegate_o *)endCallback2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndDataHandler_c *)v8->klass != AssetLoader_LoadEndDataHandler_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  AssetLoader__get_IsRequestDownload(v11, v12);
}


void AssetLoader_LoadEndDataHandler___ctor(
        AssetLoader_LoadEndDataHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7B1C0;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C37110(method);
        v12 = sub_1C375CC(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A7B2BC;
          else
            v9 = sub_1A7B280;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A7B1FC;
        }
        else
        {
          v9 = sub_1A7B1D0;
        }
      }
      else
      {
        v9 = sub_1A7B1A0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A7B158;
}


System_IAsyncResult_o *AssetLoader_LoadEndDataHandler__BeginInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        AssetData_o *data,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  AssetData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = data;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void AssetLoader_LoadEndDataHandler__Invoke(
        AssetLoader_LoadEndDataHandler_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    data,
    this->fields.method);
}


void AssetLoader_LoadEndHandler___ctor(
        AssetLoader_LoadEndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7AFD0;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C37110(method);
        v12 = sub_1C375CC(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A7B0CC;
          else
            v9 = sub_1A7B090;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A7B00C;
        }
        else
        {
          v9 = sub_1A7AFE0;
        }
      }
      else
      {
        v9 = sub_1A7AFB0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A7AF68;
}


System_IAsyncResult_o *AssetLoader_LoadEndHandler__BeginInvoke(
        AssetLoader_LoadEndHandler_o *this,
        AssetLoader_o *loader,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  AssetLoader_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = loader;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void AssetLoader_LoadEndHandler__Invoke(
        AssetLoader_LoadEndHandler_o *this,
        AssetLoader_o *loader,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, AssetLoader_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    loader,
    this->fields.method);
}


void AssetLoader__LoadDataCR_d__29___ctor(
        AssetLoader__LoadDataCR_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetLoader__LoadDataCR_d__29__MoveNext(AssetLoader__LoadDataCR_d__29_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  __int64 v4; // x27
  AssetLoader__LoadDataCR_d__29_o *v5; // x19
  struct AssetLoader_o *_4__this; // x20
  const MethodInfo *v7; // x1
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  CGThumbnailListItem_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v12; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int v16; // w8
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  char v19; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  const MethodInfo *v21; // x1
  __int64 naturalAligment; // x10
  UnityEngine_Networking_DownloadHandler_o *v23; // x8
  uint32_t klass; // w8
  AssetData_o *v25; // x20
  System_Collections_IEnumerator_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Byte_array *data; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Byte_array *readData; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  float unscaledTime; // s8
  ManagerConfig_c *v46; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v48; // x23
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x0
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int64_t v56; // x23
  int32_t v57; // w1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  CGThumbnailListItem_o *p_errorLocalizeCode_5__7; // x0
  int32_t v61; // w1
  System_String_o *Url; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_String_o *url_5__12; // x21
  struct AssetData_o *v66; // x8
  AssetLoader__LoadDataCR_d__29_o *v67; // x22
  bool v68; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__13; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v79; // s8
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  float v82; // s0
  bool v83; // zf
  float v84; // s8
  UnityEngine_Networking_DownloadHandler_o *v85; // x0
  __int64 v86; // x10
  DownloadHandlerFileWithCrcCheck_o *v87; // x22
  System_String_o *v88; // x0
  uint32_t crc; // w8
  System_String_o *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct System_Exception_o *error_k__BackingField; // x0
  System_Exception_c *v96; // x8
  __int64 v97; // x10
  struct System_Exception_o *v98; // x8
  AssetLoader__LoadDataCR_d__29_o *v99; // x22
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  int32_t v104; // w1
  CGThumbnailListItem_o *p_errorCode_5__6; // x0
  System_String_o *v106; // x22
  System_String_o *v107; // x0
  System_String_o *v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v112; // x23
  Il2CppObject *v113; // x23
  AssetLoader__LoadDataCR_d__29_o *v114; // x23
  System_String_o *v115; // x24
  int v116; // w8
  System_String_o *v117; // x0
  System_String_o *v118; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  AssetLoader__LoadDataCR_d__29_o *v121; // x22
  int32_t v122; // w1
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  struct System_String_o *v125; // x1
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  int32_t v128; // w1
  struct AssetData_o *v129; // x8
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  int32_t v134; // w1
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  int32_t v139; // w1
  System_String_o *v140; // x0
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  System_String_o *errorCode_5__6; // x1
  ManagerConfig_c *v144; // x0
  struct AssetData_o *v145; // x8
  CommonUI_o *v146; // x21
  System_String_o *v147; // x22
  ErrorDialog_ClickDelegate_o *v148; // x23
  ManagementManager_c *v149; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v153; // x22
  System_String_o *v154; // x21
  System_String_o *v155; // x23
  System_String_o *v156; // x23
  ErrorDialog_ClickDelegate_o *v157; // x24
  System_String_o *v158; // x23
  System_String_o *v159; // x23
  ErrorDialog_ClickDelegate_o *v160; // x24
  UnityEngine_Networking_UnityWebRequest_o *v161; // x0
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  AssetManager_c *v166; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  System_String_o *v170; // x21
  System_String_o *UrlString; // x0
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  AssetLoader__LoadDataCR_d__29_o **v174; // x21
  float v175; // s8
  ManagerConfig_c *v176; // x0
  float v177; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v178; // x0
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  System_String_o *ResponseHeader; // x21
  uint64_t freeSize_5__11; // x21
  ManagerConfig_c *v185; // x0
  float v186; // s0
  float v187; // s9
  float v188; // s8
  float v189; // s0
  float v190; // s8
  System_String_o **v191; // x21
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  System_String_o *v194; // x0
  System_String_o *text; // x22
  System_String_o *v196; // x22
  int32_t v197; // w2
  const MethodInfo *v198; // x3
  AssetLoader__LoadDataCR_d__29_o *v199; // x22
  int v200; // w8
  int32_t v201; // w0
  int32_t v202; // w24
  System_String_o *v203; // x23
  System_String_o *v204; // x22
  System_Byte_array *v205; // x24
  uint32_t v206; // w24
  int v207; // w8
  Il2CppObject *v208; // x8
  AssetLoader__LoadDataCR_d__29_o *v209; // x21
  int v210; // w28
  int v211; // w29
  System_String_o *v212; // x22
  Il2CppObject *v213; // x8
  AssetLoader__LoadDataCR_d__29_o *v214; // x22
  char v215; // w8
  const MethodInfo *v216; // x2
  System_String_o *v217; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v219; // x22
  System_String_o *v220; // x0
  int v221; // w23
  struct AssetData_o *v222; // x8
  ManagementManager_c *v223; // x0
  _BOOL4 v224; // w22
  Il2CppObject *v225; // x21
  System_String_o *v226; // x22
  ErrorDialog_ClickDelegate_o *v227; // x23
  ManagementManager_c *v228; // x0
  _BOOL4 v229; // w21
  Il2CppObject *v230; // x19
  __int64 *v231; // x8
  System_String_o *v232; // x21
  ErrorDialog_ClickDelegate_o *v233; // x22
  bool v234; // w0
  __int64 *v235; // x8
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v237; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v239; // x20
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  System_String_o *v242; // x22
  ErrorDialog_ClickDelegate_o *v243; // x23
  int32_t v244; // w2
  const MethodInfo *v245; // x3
  int32_t v246; // w2
  const MethodInfo *v247; // x3
  Il2CppObject *_2__current; // x21
  AssetData_o *v249; // x22
  AssetLoader__LoadDataCR_d__29_o **v250; // x21
  __int64 v251; // x10
  __int64 v252; // x10
  System_Byte_array *v253; // x0
  UnityEngine_AssetBundleCreateRequest_o *v254; // x0
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  int32_t v257; // w2
  const MethodInfo *v258; // x3
  Il2CppObject *req_5__16; // x1
  int32_t v260; // w2
  const MethodInfo *v261; // x3
  AssetLoader___c_c *v262; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v264; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int32_t v266; // w2
  const MethodInfo *v267; // x3
  UnityEngine_WaitUntil_o *v268; // x21
  int32_t v269; // w2
  const MethodInfo *v270; // x3
  Il2CppObject *v271; // x1
  Il2CppObject *v272; // x1
  Il2CppObject *v273; // x1
  int32_t v274; // w2
  const MethodInfo *v275; // x3
  int32_t v276; // w2
  const MethodInfo *v277; // x3
  int32_t v278; // w1
  __int64 v279; // x1
  CGThumbnailListItem_o *v280; // x0
  System_String_o *v281; // x0
  UnityEngine_Networking_UnityWebRequest_o *v282; // x0
  int32_t v283; // w2
  const MethodInfo *v284; // x3
  ManagerConfig_c *v285; // x0
  struct AssetData_o *v286; // x8
  CommonUI_o *v287; // x22
  System_String_o *v288; // x21
  ErrorDialog_ClickDelegate_o *v289; // x23
  Il2CppObject *v290; // x1
  ManagementManager_c *v291; // x0
  _BOOL4 v292; // w22
  Il2CppObject *v293; // x21
  System_String_o *v294; // x22
  ErrorDialog_ClickDelegate_o *v295; // x23
  System_String_o *v296; // x22
  ErrorDialog_ClickDelegate_o *v297; // x23
  Il2CppObject *v298; // x1
  UnityEngine_WaitForSeconds_o *v299; // x20
  int32_t v300; // w2
  const MethodInfo *v301; // x3
  UnityEngine_Networking_DownloadHandler_o *v302; // x0
  ManagerConfig_c *v303; // x0
  struct ManagerConfig_StaticFields *v304; // x8
  Il2CppObject *wait_5__10; // x1
  CGThumbnailListItem_o *v306; // x19
  ManagerConfig_c *v307; // x0
  struct ManagerConfig_StaticFields *v308; // x8
  Il2CppObject *v309; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-B0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-B0h]
  uint64_t result; // [xsp+28h] [xbp-88h] BYREF
  __int64 v313; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-78h] BYREF

  v5 = this;
  if ( (byte_4C41F50 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetLoader_EndRebootDialog__);
    sub_1C37058(&Method_AssetLoader_EndRetryDialog__);
    sub_1C37058(&Method_AssetLoader_EndWarningDialog__);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&char___TypeInfo);
    sub_1C37058(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&CommonServicePluginScript_TypeInfo);
    sub_1C37058(&Crc32_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C37058(&DownloadHandlerDecryptFileWithCrc_TypeInfo);
    sub_1C37058(&DownloadHandlerFileWithCrcCheck_TypeInfo);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&System_IO_IOException_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&ManagementManager_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&Method_AssetLoader___c__LoadDataCR_b__29_0__);
    sub_1C37058(&AssetLoader___c_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_9242/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/);
    sub_1C37058(&StringLiteral_7261/*"HTTP"*/);
    sub_1C37058(&StringLiteral_5292/*"Disk full"*/);
    sub_1C37058(&StringLiteral_2394/*"AssetStorageList download time over"*/);
    sub_1C37058(&StringLiteral_9251/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_2381/*"AssetName : "*/);
    sub_1C37058(&StringLiteral_762/*")\n\n503 Auto retry count "*/);
    sub_1C37058(&StringLiteral_765/*")\nfile crc ("*/);
    sub_1C37058(&StringLiteral_1425/*"503"*/);
    sub_1C37058(&StringLiteral_2043/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C37058(&StringLiteral_15929/*"[FFFF80]Download error for debug"*/);
    sub_1C37058(&StringLiteral_2391/*"AssetStorageList download data error"*/);
    sub_1C37058(&StringLiteral_4689/*"Content-Length"*/);
    sub_1C37058(&StringLiteral_25260/*"~"*/);
    sub_1C37058(&StringLiteral_12351/*"STATUS"*/);
    sub_1C37058(&StringLiteral_761/*")\n\n"*/);
    sub_1C37058(&StringLiteral_9241/*"NETWORK_ERROR_ASSET_UPDATE"*/);
    sub_1C37058(&StringLiteral_654/*"("*/);
    sub_1C37058(&StringLiteral_763/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_1C37058(&StringLiteral_759/*")"*/);
    sub_1C37058(&StringLiteral_19070/*"error "*/);
    sub_1C37058(&StringLiteral_1769/*"@"*/);
    sub_1C37058(&StringLiteral_2044/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C37058(&StringLiteral_2392/*"AssetStorageList download error"*/);
    sub_1C37058(&StringLiteral_764/*")\n\nAssetBundle file download time over"*/);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C41F50 = 1;
  }
  v313 = 0;
  value = 0;
  result = 0;
  _4__this = v5->fields.__4__this;
  switch ( v5->fields.__1__state )
  {
    case 0:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_383;
      v5->fields._isEncrypted_5__2 = AssetData__get_IsAssetBundle((AssetData_o *)this, 0);
      v5->fields._autoRetryCount_5__3 = 0;
      goto LABEL_58;
    case 1:
      v5->fields.__1__state = -1;
      goto LABEL_77;
    case 2:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      goto LABEL_147;
    case 3:
      v5->fields.__1__state = -1;
      goto LABEL_172;
    case 4:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      goto LABEL_171;
    case 5:
      v5->fields.__1__state = -1;
      goto LABEL_195;
    case 6:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      goto LABEL_352;
    case 7:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      goto LABEL_367;
    case 8:
      v5->fields._asyncOperater_5__13 = 0;
      v5->fields.__1__state = -1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13, 0, (int32_t)v2, v3);
      goto LABEL_188;
    case 9:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      goto LABEL_301;
    case 0xA:
      v5->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_22;
      goto LABEL_383;
    case 0xB:
      v5->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_383;
      p_loader = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(error, 0);
      if ( !*p_loader )
        goto LABEL_383;
      v19 = (char)this;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0);
      if ( downloadHandler )
      {
        naturalAligment = DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.naturalAligment;
        if ( downloadHandler->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[naturalAligment - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v23 = downloadHandler;
          else
            v23 = 0;
          if ( (v19 & 1) != 0 )
            goto LABEL_31;
LABEL_46:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_383;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
          _4__this->fields.loader = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v33, v34);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !this )
            goto LABEL_383;
          AssetData__ResetVersion((AssetData_o *)this, 0);
          goto LABEL_58;
        }
      }
      v23 = 0;
      if ( (v19 & 1) == 0 )
        goto LABEL_46;
LABEL_31:
      if ( v23 )
      {
        klass = (uint32_t)v23[1].klass;
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
        if ( !*p_loader )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                    0);
        if ( !this )
          goto LABEL_383;
        data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
        _4__this->fields.readData = data;
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.readData, (int32_t)data, v36, v37);
        readData = _4__this->fields.readData;
        if ( !Crc32_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
        klass = Crc32__Compute(readData, 0);
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_383;
      if ( klass == this->fields._autoRetryCount_5__3 )
        goto LABEL_306;
      *(_WORD *)&_4__this->fields.isRequestDownload = 257;
      AssetData__ResetVersion((AssetData_o *)this, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      _4__this->fields.loader = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v39, v40);
      _4__this->fields.readData = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v41, v42);
LABEL_58:
      while ( 1 )
      {
        _4__this->fields.readData = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        if ( _4__this->fields.isDownload )
          break;
LABEL_304:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_383;
        if ( SLODWORD(this->fields._loadProgress_5__9) >= 1 )
        {
          if ( v5->fields._isEncrypted_5__2 )
          {
LABEL_22:
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_383;
            LoadRequest = AssetData__GetLoadRequest((AssetData_o *)this, 0);
            _4__this->fields.loader = LoadRequest;
            v9 = (CGThumbnailListItem_o *)&_4__this->fields.loader;
            sub_1C36FFC(v9, (int32_t)LoadRequest, v10, v11);
            this = (AssetLoader__LoadDataCR_d__29_o *)v9->klass;
            if ( !v9->klass )
              goto LABEL_383;
            v12 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0);
            v5->fields.__2__current = (Il2CppObject *)v12;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C36FFC(p__2__current, (int32_t)v12, v14, v15);
            v16 = 11;
          }
          else
          {
            v262 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v262 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v262->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v262->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v262);
                v262 = AssetLoader___c_TypeInfo;
              }
              v264 = (Il2CppObject *)v262->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(_9__29_0, v264, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v266, v267);
            }
            v268 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v268, _9__29_0, 0);
            v5->fields.__2__current = (Il2CppObject *)v268;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C36FFC(p__2__current, (int32_t)v268, v269, v270);
            v16 = 10;
          }
          goto LABEL_370;
        }
LABEL_306:
        if ( _4__this->fields.isDownload )
        {
          _2__current = this->fields.__2__current;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__isExistAssetStorage(
                                                      (System_String_o *)_2__current,
                                                      v21);
          if ( ((unsigned __int8)this & 1) != 0 )
            continue;
        }
LABEL_310:
        v249 = _4__this->fields.data;
        if ( !v249 )
          goto LABEL_383;
        if ( v249->fields.entryCount >= 1 )
        {
          v250 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v5->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_383;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0);
            if ( !this
              || (v251 = DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.naturalAligment,
                  this->klass->_2.naturalAligment < (unsigned int)v251)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v251 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v250;
              if ( !*v250 )
                goto LABEL_383;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0);
              if ( !this )
                goto LABEL_383;
              v252 = DownloadHandlerFileWithCrcCheck_TypeInfo->_2.naturalAligment;
              if ( this->klass->_2.naturalAligment < (unsigned int)v252
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v252 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_383;
              }
            }
            v253 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
            v254 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v253, 0);
            v5->fields._req_5__16 = v254;
            sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._req_5__16, (int32_t)v254, v255, v256);
            this = *v250;
            if ( !*v250 )
              goto LABEL_383;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
            *v250 = 0;
            sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v257, v258);
            req_5__16 = (Il2CppObject *)v5->fields._req_5__16;
            v5->fields.__2__current = req_5__16;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C36FFC(p__2__current, (int32_t)req_5__16, v260, v261);
            v16 = 12;
            goto LABEL_370;
          }
          if ( !this )
            goto LABEL_383;
          v302 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0);
          AssetData__SetData(v249, v302, 0);
        }
LABEL_39:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
          _4__this->fields.loader = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v30, v31);
        }
        _4__this->fields.readData = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        AssetLoader__EndLoad(_4__this, v32);
        return 0;
      }
      *(_WORD *)&v5->fields._isAutoRetry_5__4 = 0;
      v5->fields._errorCode_5__6 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, 0, (int32_t)v2, v3);
      v5->fields._errorLocalizeCode_5__7 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7, 0, v43, v44);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0);
      v46 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v46 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v46->static_fields->TIMEOUT;
      v5->fields._loadProgress_5__9 = 0.0;
      v5->fields._requestTime_5__8 = unscaledTime + TIMEOUT;
      v48 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v48, 0);
      v5->fields._wait_5__10 = v48;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._wait_5__10, (int32_t)v48, v49, v50);
      Path = AssetStorageCache__GetPath(v51);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0);
      v5->fields._freeSize_5__11 = FreeSize;
      if ( FreeSize < 0 )
        goto LABEL_68;
      v56 = FreeSize;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_383;
      if ( v56 < ManagerConfig_TypeInfo->static_fields->LIMIT_FREE_SIZE + *(int *)&this->fields._isEncrypted_5__2 )
      {
LABEL_68:
        _4__this->fields.isErrorDialog = 1;
        v57 = StringLiteral_5292/*"Disk full"*/;
        v5->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5292/*"Disk full"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, v57, v54, v55);
        p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7;
        v61 = StringLiteral_9251/*"NETWORK_ERROR_DISK_FULL"*/;
        v5->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9251/*"NETWORK_ERROR_DISK_FULL"*/;
        goto LABEL_140;
      }
      Url = AssetData__get_Url((AssetData_o *)this, 0);
      v5->fields._url_5__12 = Url;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._url_5__12, (int32_t)Url, v63, v64);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_383;
      url_5__12 = v5->fields._url_5__12;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, 0);
      v66 = _4__this->fields.data;
      v67 = this;
      if ( v5->fields._isEncrypted_5__2 )
      {
        if ( !v66 )
          goto LABEL_383;
        v68 = v66->fields.entryCount > 0;
      }
      else
      {
        if ( !v66 )
          goto LABEL_383;
        v68 = 0;
      }
      Key = AssetData__get_Key(_4__this->fields.data, 0);
      v70 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__12, (System_String_o *)v67, v68, Key, 0);
      _4__this->fields.loader = v70;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)v70, v71, v72);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      v73 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      v5->fields._asyncOperater_5__13 = v73;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13, (int32_t)v73, v74, v75);
LABEL_77:
      p_asyncOperater_5__13 = (AssetLoader__LoadDataCR_d__29_o **)&v5->fields._asyncOperater_5__13;
      this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
      if ( !this )
LABEL_383:
        sub_1C372B4(this);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                                  (UnityEngine_AsyncOperation_o *)this,
                                                  0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = *p_asyncOperater_5__13;
        if ( !*p_asyncOperater_5__13 )
          goto LABEL_383;
        progress = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
        loadProgress_5__9 = v5->fields._loadProgress_5__9;
        v79 = progress;
        v82 = UnityEngine_Time__get_unscaledTime(0);
        v83 = v79 == loadProgress_5__9;
        v84 = v82;
        if ( !v83 )
        {
          v303 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v303 = ManagerConfig_TypeInfo;
          }
          v304 = v303->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
          v5->fields._requestTime_5__8 = v84 + v304->TIMEOUT;
          if ( !this )
            goto LABEL_383;
          v5->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0);
LABEL_377:
          wait_5__10 = (Il2CppObject *)v5->fields._wait_5__10;
          v5->fields.__2__current = wait_5__10;
          v306 = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C36FFC(v306, (int32_t)wait_5__10, v80, v81);
          v234 = 1;
          LODWORD(v306[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return v234;
        }
        if ( v82 < v5->fields._requestTime_5__8 )
          goto LABEL_377;
      }
      if ( !_4__this )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      v85 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
              (UnityEngine_Networking_UnityWebRequest_o *)this,
              0);
      if ( v85
        && (v86 = DownloadHandlerFileWithCrcCheck_TypeInfo->_2.naturalAligment,
            v85->klass->_2.naturalAligment >= (unsigned int)v86) )
      {
        v87 = (DownloadHandlerFileWithCrcCheck_c *)v85->klass->_2.typeHierarchy[v86 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
            ? (DownloadHandlerFileWithCrcCheck_o *)v85
            : 0LL;
      }
      else
      {
        v87 = 0;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0) )
      {
        v90 = System_String__Concat_63599904(
                (System_String_o *)StringLiteral_654/*"("*/,
                v5->fields._url_5__12,
                (System_String_o *)StringLiteral_764/*")\n\nAssetBundle file download time over"*/,
                0);
        v5->fields._errorCode_5__6 = v90;
        sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, (int32_t)v90, v91, v92);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_383;
        UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        if ( v87 )
          DownloadHandlerFileWithCrcCheck__CloseStream(v87, 0);
        goto LABEL_139;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      v88 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      if ( System_String__IsNullOrEmpty(v88, 0) )
      {
        if ( !v87 )
        {
          crc = 0;
LABEL_126:
          HIDWORD(v313) = crc;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
          if ( !this )
            goto LABEL_383;
          if ( crc == this->fields._autoRetryCount_5__3 )
          {
            AssetData__UpdateVersion((AssetData_o *)this, 0);
            _4__this->fields.isDownload = 0;
          }
          else
          {
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C37100(string___TypeInfo, 7);
            if ( !this )
              goto LABEL_383;
            v121 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_267;
            v122 = StringLiteral_654/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_654/*"("*/;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__4__this, v122, v119, v120);
            if ( LODWORD(v121->fields.__2__current) <= 1 )
              goto LABEL_267;
            v125 = v5->fields._url_5__12;
            v121->fields.resourceNames = (struct System_String_array *)v125;
            sub_1C36FFC((CGThumbnailListItem_o *)&v121->fields.resourceNames, (int32_t)v125, v123, v124);
            if ( LODWORD(v121->fields.__2__current) <= 2 )
              goto LABEL_267;
            v128 = StringLiteral_763/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v121->fields._isEncrypted_5__2 = StringLiteral_763/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1C36FFC((CGThumbnailListItem_o *)&v121->fields._isEncrypted_5__2, v128, v126, v127);
            v129 = _4__this->fields.data;
            if ( !v129 )
              goto LABEL_383;
            LODWORD(v313) = v129->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v313, 0);
            if ( LODWORD(v121->fields.__2__current) <= 3 )
              goto LABEL_267;
            *(_QWORD *)&v121->fields._isAutoRetry_5__4 = this;
            sub_1C36FFC((CGThumbnailListItem_o *)&v121->fields._isAutoRetry_5__4, (int32_t)this, v130, v131);
            if ( LODWORD(v121->fields.__2__current) <= 4 )
              goto LABEL_267;
            v134 = StringLiteral_765/*")\nfile crc ("*/;
            v121->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_765/*")\nfile crc ("*/;
            sub_1C36FFC((CGThumbnailListItem_o *)&v121->fields._errorCode_5__6, v134, v132, v133);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v313 + 4, 0);
            if ( LODWORD(v121->fields.__2__current) <= 5 )
              goto LABEL_267;
            v121->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1C36FFC((CGThumbnailListItem_o *)&v121->fields._errorLocalizeCode_5__7, (int32_t)this, v135, v136);
            if ( LODWORD(v121->fields.__2__current) <= 6 )
              goto LABEL_267;
            v139 = StringLiteral_759/*")"*/;
            *(_QWORD *)&v121->fields._requestTime_5__8 = StringLiteral_759/*")"*/;
            sub_1C36FFC((CGThumbnailListItem_o *)&v121->fields._requestTime_5__8, v139, v137, v138);
            v140 = System_String__Concat_63602172((System_String_array *)v121, 0);
            v5->fields._errorCode_5__6 = v140;
            sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, (int32_t)v140, v141, v142);
            v5->fields._isCrcError_5__5 = 1;
          }
          goto LABEL_139;
        }
        if ( !v87->fields._error_k__BackingField )
        {
          crc = v87->fields.crc;
          goto LABEL_126;
        }
      }
      else if ( !v87 )
      {
LABEL_109:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_383;
        v106 = v5->fields._url_5__12;
        v107 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        v108 = System_String__Concat_63601908(
                 (System_String_o *)StringLiteral_654/*"("*/,
                 v106,
                 (System_String_o *)StringLiteral_761/*")\n\n"*/,
                 v107,
                 0);
        v5->fields._errorCode_5__6 = v108;
        sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, (int32_t)v108, v109, v110);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_383;
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                            0);
        if ( !ResponseHeaders )
          goto LABEL_139;
        v112 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
               (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v112,
                (Il2CppObject *)StringLiteral_12351/*"STATUS"*/,
                &value,
                (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_139;
        }
        v113 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C37100(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_383;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_267;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v113 )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_63610848(
                                                    (System_String_o *)v113,
                                                    (System_Char_array *)this,
                                                    1,
                                                    0);
        if ( !this )
          goto LABEL_383;
        v114 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_139;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_7261/*"HTTP"*/,
                                                    0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_139;
        if ( LODWORD(v114->fields.__2__current) <= 1 )
          goto LABEL_267;
        this = (AssetLoader__LoadDataCR_d__29_o *)v114->fields.resourceNames;
        if ( !this )
          goto LABEL_383;
        if ( !System_String__Equals_63596960((System_String_o *)this, (System_String_o *)StringLiteral_1425/*"503"*/, 0) )
          goto LABEL_139;
        v115 = v5->fields._url_5__12;
        v116 = v5->fields._autoRetryCount_5__3 + 1;
        v5->fields._isAutoRetry_5__4 = 1;
        v5->fields._autoRetryCount_5__3 = v116;
        v117 = System_Int32__ToString((int)v5 + 52, 0);
        v118 = System_String__Concat_63601908(
                 (System_String_o *)StringLiteral_654/*"("*/,
                 v115,
                 (System_String_o *)StringLiteral_762/*")\n\n503 Auto retry count "*/,
                 v117,
                 0);
        v104 = (int)v118;
        v5->fields._errorCode_5__6 = v118;
        p_errorCode_5__6 = (CGThumbnailListItem_o *)&v5->fields._errorCode_5__6;
        goto LABEL_108;
      }
      DownloadHandlerFileWithCrcCheck__CloseStream(v87, 0);
      error_k__BackingField = v87->fields._error_k__BackingField;
      if ( !error_k__BackingField )
        goto LABEL_109;
      v96 = error_k__BackingField->klass;
      v97 = System_IO_IOException_TypeInfo->_2.naturalAligment;
      if ( error_k__BackingField->klass->_2.naturalAligment >= (unsigned int)v97
        && (System_IO_IOException_c *)v96->_2.typeHierarchy[v97 - 1] == System_IO_IOException_TypeInfo )
      {
        _4__this->fields.isErrorDialog = 1;
        v101 = (System_String_o *)((__int64 (__fastcall *)(struct System_Exception_o *, const MethodInfo *))error_k__BackingField->klass->vtable._5_get_Message.methodPtr)(
                                    error_k__BackingField,
                                    error_k__BackingField->klass->vtable._5_get_Message.method);
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)((__int64 (*)(void))v96->vtable._3_ToString.methodPtr)();
        v98 = v87->fields._error_k__BackingField;
        if ( !v98 )
          goto LABEL_383;
        v99 = this;
        v100 = (System_String_o *)((System_String_o *(__fastcall *)(struct System_Exception_o *__return_ptr, struct System_Exception_o *, const MethodInfo *))v98->klass->vtable._5_get_Message.methodPtr)(
                                    v98,
                                    v98,
                                    v98->klass->vtable._5_get_Message.method);
        v101 = System_String__Concat_63601908(
                 (System_String_o *)StringLiteral_19070/*"error "*/,
                 (System_String_o *)v99,
                 (System_String_o *)StringLiteral_113/*" "*/,
                 v100,
                 0);
      }
      v104 = (int)v101;
      v5->fields._errorCode_5__6 = v101;
      p_errorCode_5__6 = (CGThumbnailListItem_o *)&v5->fields._errorCode_5__6;
LABEL_108:
      sub_1C36FFC(p_errorCode_5__6, v104, v102, v103);
LABEL_139:
      v5->fields._url_5__12 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._url_5__12, 0, v93, v94);
      p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13;
      v61 = 0;
      v5->fields._asyncOperater_5__13 = 0;
LABEL_140:
      sub_1C36FFC(p_errorLocalizeCode_5__7, v61, v58, v59);
      errorCode_5__6 = v5->fields._errorCode_5__6;
      if ( errorCode_5__6 )
      {
        AssetLoader__AssetLoadLogError(_4__this, errorCode_5__6, v2);
        v144 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v144 = ManagerConfig_TypeInfo;
        }
        if ( v144->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v145 = _4__this->fields.data;
          if ( !v145 )
            goto LABEL_383;
          v146 = (CommonUI_o *)this;
          v147 = System_String__Concat_63601908(
                   (System_String_o *)StringLiteral_2381/*"AssetName : "*/,
                   v145->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v5->fields._errorCode_5__6,
                   0);
          v148 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v148, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
          if ( !v146 )
            goto LABEL_383;
          v4 &= 0xFFFFFFFF00000000LL;
          LODWORD(effectDistance.fields.value.fields.y) = v4;
          *(_QWORD *)&effectDistance.fields.hasValue = 0;
          CommonUI__OpenWarningDialog(
            v146,
            (System_String_o *)StringLiteral_15929/*"[FFFF80]Download error for debug"*/,
            v147,
            v148,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0);
LABEL_147:
          if ( _4__this->fields.isErrorDialog )
          {
            v271 = (Il2CppObject *)v5->fields._wait_5__10;
            v5->fields.__2__current = v271;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C36FFC(p__2__current, (int32_t)v271, (int32_t)v2, v3);
            v16 = 2;
            goto LABEL_370;
          }
        }
        if ( v5->fields._isAutoRetry_5__4 )
        {
          autoRetryCount_5__3 = v5->fields._autoRetryCount_5__3;
          v237 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v237 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v237->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v239 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v239, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0);
          v5->fields.__2__current = (Il2CppObject *)v239;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C36FFC(p__2__current, (int32_t)v239, v240, v241);
          v16 = 3;
          goto LABEL_370;
        }
        if ( !v5->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          if ( !byte_4C41F40 )
          {
            sub_1C37058(&ManagementManager_TypeInfo);
            byte_4C41F40 = 1;
          }
          v149 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v149 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v149->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v5->fields._errorLocalizeCode_5__7;
          v153 = (CommonUI_o *)Instance;
          v154 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v155 = v5->fields._errorLocalizeCode_5__7;
            else
              v155 = (System_String_o *)StringLiteral_2043/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v156 = LocalizationManager__Get(v155, 0);
            v157 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v157, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
            if ( !v153 )
              goto LABEL_383;
            CommonUI__OpenRetryBootDialog(v153, v154, v156, v157, 1, 0);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v158 = v5->fields._errorLocalizeCode_5__7;
            else
              v158 = (System_String_o *)StringLiteral_2044/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v159 = LocalizationManager__Get(v158, 0);
            v160 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v160, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
            if ( !v153 )
              goto LABEL_383;
            CommonUI__OpenRetryDialog(v153, v154, v159, v160, 1, 0);
          }
LABEL_171:
          if ( _4__this->fields.isErrorDialog )
          {
            v272 = (Il2CppObject *)v5->fields._wait_5__10;
            v5->fields.__2__current = v272;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C36FFC(p__2__current, (int32_t)v272, (int32_t)v2, v3);
            v16 = 4;
            goto LABEL_370;
          }
        }
      }
LABEL_172:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C3E408 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3E408 = 1;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      }
      if ( !_4__this )
        goto LABEL_383;
      if ( *(_BYTE *)(*(_QWORD *)&this[1].fields._isEncrypted_5__2 + 144LL) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_383;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        _4__this->fields.loader = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v274, v275);
        _4__this->fields.readData = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v276, v277);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v5->fields._isEncrypted_5__2 )
        goto LABEL_310;
      v161 = _4__this->fields.loader;
      if ( v161 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v161, 0);
        _4__this->fields.loader = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v162, v163);
        _4__this->fields.readData = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v164, v165);
      }
      if ( !v5->fields._isCrcError_5__5 )
      {
LABEL_303:
        v5->fields._errorCode_5__6 = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, 0, (int32_t)v2, v3);
        v5->fields._errorLocalizeCode_5__7 = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7, 0, v244, v245);
        v5->fields._wait_5__10 = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._wait_5__10, 0, v246, v247);
        goto LABEL_304;
      }
      v166 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v166);
      v5->fields._url_5__12 = ConfigFileAddress;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._url_5__12, (int32_t)ConfigFileAddress, v168, v169);
LABEL_188:
      v170 = v5->fields._url_5__12;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v170, v7);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0);
      if ( !_4__this )
        goto LABEL_383;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v174 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)this, v172, v173);
      v175 = UnityEngine_Time__get_unscaledTime(0);
      v176 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v176 = ManagerConfig_TypeInfo;
      }
      v177 = v176->static_fields->TIMEOUT;
      v5->fields._loadProgress_5__9 = 0.0;
      *(_WORD *)&v5->fields._isSizeChecked_5__14 = 0;
      v5->fields._requestTime_5__8 = v175 + v177;
      this = *v174;
      if ( !*v174 )
        goto LABEL_383;
      v178 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      v5->fields._asyncOperater_5__13 = v178;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13, (int32_t)v178, v179, v180);
LABEL_195:
      this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
      if ( !this )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                                  (UnityEngine_AsyncOperation_o *)this,
                                                  0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v5->fields._isSizeChecked_5__14 )
        {
          if ( !_4__this )
            goto LABEL_383;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( !this )
            goto LABEL_383;
          ResponseHeader = UnityEngine_Networking_UnityWebRequest__GetResponseHeader(
                             (UnityEngine_Networking_UnityWebRequest_o *)this,
                             (System_String_o *)StringLiteral_4689/*"Content-Length"*/,
                             0);
          if ( !System_String__IsNullOrEmpty(ResponseHeader, 0) )
          {
            v5->fields._isSizeChecked_5__14 = 1;
            result = 0;
            System_UInt64__TryParse(ResponseHeader, &result, 0);
            freeSize_5__11 = v5->fields._freeSize_5__11;
            v185 = ManagerConfig_TypeInfo;
            if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v185 = ManagerConfig_TypeInfo;
            }
            if ( freeSize_5__11 < result + v185->static_fields->LIMIT_FREE_SIZE )
            {
              v5->fields._isDiskFull_5__15 = 1;
              goto LABEL_209;
            }
          }
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
        if ( !this )
          goto LABEL_383;
        v186 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
        v187 = v5->fields._loadProgress_5__9;
        v188 = v186;
        v189 = UnityEngine_Time__get_unscaledTime(0);
        v83 = v188 == v187;
        v190 = v189;
        if ( !v83 )
        {
          v307 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v307 = ManagerConfig_TypeInfo;
          }
          v308 = v307->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
          v5->fields._requestTime_5__8 = v190 + v308->TIMEOUT;
          if ( !this )
            goto LABEL_383;
          v5->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0);
          goto LABEL_382;
        }
        if ( v189 < v5->fields._requestTime_5__8 )
        {
LABEL_382:
          v309 = (Il2CppObject *)v5->fields._wait_5__10;
          v5->fields.__2__current = v309;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C36FFC(p__2__current, (int32_t)v309, v181, v182);
          v16 = 5;
          goto LABEL_370;
        }
      }
LABEL_209:
      v5->fields._errorCode_5__6 = 0;
      v191 = &v5->fields._errorCode_5__6;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, 0, v181, v182);
      if ( !_4__this )
        goto LABEL_383;
      if ( v5->fields._isDiskFull_5__15 )
      {
        _4__this->fields.isErrorDialog = 1;
        v278 = StringLiteral_5292/*"Disk full"*/;
        v5->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5292/*"Disk full"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, v278, v192, v193);
        LODWORD(v279) = StringLiteral_9251/*"NETWORK_ERROR_DISK_FULL"*/;
        v5->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9251/*"NETWORK_ERROR_DISK_FULL"*/;
        v280 = (CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7;
        goto LABEL_343;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0);
      if ( !_4__this->fields.loader )
        goto LABEL_383;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(_4__this->fields.loader, 0);
        v235 = &StringLiteral_2394/*"AssetStorageList download time over"*/;
        goto LABEL_341;
      }
      v194 = UnityEngine_Networking_UnityWebRequest__get_error(_4__this->fields.loader, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v194, 0);
      if ( !_4__this->fields.loader )
        goto LABEL_383;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v281 = UnityEngine_Networking_UnityWebRequest__get_error(_4__this->fields.loader, 0);
        LODWORD(v279) = (_DWORD)v281;
        *v191 = v281;
LABEL_342:
        v280 = (CGThumbnailListItem_o *)&v5->fields._errorCode_5__6;
LABEL_343:
        sub_1C36FFC(v280, v279, v197, v198);
        v282 = _4__this->fields.loader;
        if ( v282 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(v282, 0);
          _4__this->fields.loader = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v283, v284);
        }
        if ( !*v191 )
          goto LABEL_369;
        v285 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v285 = ManagerConfig_TypeInfo;
        }
        if ( v285->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v286 = _4__this->fields.data;
          if ( !v286 )
            goto LABEL_383;
          v287 = (CommonUI_o *)this;
          v288 = System_String__Concat_63601908(
                   (System_String_o *)StringLiteral_2381/*"AssetName : "*/,
                   v286->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v191,
                   0);
          v289 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v289, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
          if ( !v287 )
            goto LABEL_383;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v287,
            (System_String_o *)StringLiteral_15929/*"[FFFF80]Download error for debug"*/,
            v288,
            v289,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0);
LABEL_352:
          if ( _4__this->fields.isErrorDialog )
          {
            v290 = (Il2CppObject *)v5->fields._wait_5__10;
            v5->fields.__2__current = v290;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C36FFC(p__2__current, (int32_t)v290, (int32_t)v2, v3);
            v16 = 6;
            goto LABEL_370;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4C41F40 )
        {
          sub_1C37058(&ManagementManager_TypeInfo);
          byte_4C41F40 = 1;
        }
        v291 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v291 = ManagementManager_TypeInfo;
        }
        v292 = v291->static_fields->isDuringStartup;
        v293 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v292 )
        {
          v294 = LocalizationManager__Get((System_String_o *)StringLiteral_2043/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
          v295 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v295, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( !v293 )
            goto LABEL_383;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v293, (System_String_o *)StringLiteral_1/*""*/, v294, v295, 0, 0);
        }
        else
        {
          v296 = LocalizationManager__Get((System_String_o *)StringLiteral_2044/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
          v297 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v297, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( !v293 )
            goto LABEL_383;
          CommonUI__OpenRetryDialog((CommonUI_o *)v293, (System_String_o *)StringLiteral_1/*""*/, v296, v297, 0, 0);
        }
LABEL_367:
        if ( _4__this->fields.isErrorDialog )
        {
          v298 = (Il2CppObject *)v5->fields._wait_5__10;
          v5->fields.__2__current = v298;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C36FFC(p__2__current, (int32_t)v298, (int32_t)v2, v3);
          v16 = 7;
        }
        else
        {
LABEL_369:
          v299 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v299, 1.0, 0);
          v5->fields.__2__current = (Il2CppObject *)v299;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C36FFC(p__2__current, (int32_t)v299, v300, v301);
          v16 = 8;
        }
LABEL_370:
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v16;
        return 1;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  _4__this->fields.loader,
                                                  0);
      if ( !this )
        goto LABEL_383;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v196 = CatAndMouseGame__MouseGame3(text, 0);
      if ( System_String__IsNullOrEmpty(v196, 0) )
      {
        v235 = &StringLiteral_2392/*"AssetStorageList download error"*/;
        goto LABEL_341;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C37100(char___TypeInfo, 1);
      if ( !this )
        goto LABEL_383;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_267;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v196 )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_63618204(v196, (System_Char_array *)this, 0);
      if ( !this )
        goto LABEL_383;
      v199 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25260/*"~"*/, 0) )
        goto LABEL_295;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C37100(char___TypeInfo, 2);
      if ( !this )
        goto LABEL_383;
      v200 = (int)this->fields.__2__current;
      if ( !v200 )
        goto LABEL_267;
      LOWORD(this->fields.__4__this) = 13;
      if ( v200 == 1 )
        goto LABEL_267;
      WORD1(this->fields.__4__this) = 10;
      v201 = System_String__IndexOfAny((System_String_o *)v199, (System_Char_array *)this, 0);
      if ( v201 < 2 )
        goto LABEL_295;
      v202 = v201;
      v203 = System_String__Substring_63607580((System_String_o *)v199, 1, v201 - 1, 0);
      v204 = System_String__Substring((System_String_o *)v199, v202 + 1, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0);
      if ( !this )
        goto LABEL_383;
      v205 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, void *))this->klass[1]._1.properties)(
                                    this,
                                    v204,
                                    this->klass[1]._1.methods);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v206 = Crc32__Compute(v205, 0);
      if ( System_UInt32__Parse(v203, 0) != v206 )
      {
LABEL_295:
        v235 = &StringLiteral_2391/*"AssetStorageList download data error"*/;
LABEL_341:
        v279 = *v235;
        *v191 = (System_String_o *)*v235;
        goto LABEL_342;
      }
      if ( !v204 )
        goto LABEL_281;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C37100(char___TypeInfo, 2);
      if ( !this )
        goto LABEL_383;
      v207 = (int)this->fields.__2__current;
      if ( !v207 || (LOWORD(this->fields.__4__this) = 13, v207 == 1) )
LABEL_267:
        sub_1C372BC(this);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_63610848(v204, (System_Char_array *)this, 1, 0);
      if ( !this )
        goto LABEL_383;
      v208 = this->fields.__2__current;
      v209 = this;
      v210 = (_DWORD)v208 - 1;
      if ( (int)v208 < 1 )
        goto LABEL_281;
      v211 = 0;
      while ( 2 )
      {
        v212 = (System_String_o *)*((_QWORD *)&v209->fields.__4__this + v211);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C37100(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_383;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_267;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v212 )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_63610732(v212, (System_Char_array *)this, 0);
        if ( !this )
          goto LABEL_383;
        v213 = this->fields.__2__current;
        v214 = this;
        if ( (int)v213 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_383;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1769/*"@"*/,
                                                      0);
          if ( !LODWORD(v214->fields.__2__current) )
            goto LABEL_267;
          v215 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v214->fields.__4__this;
          if ( !this )
            goto LABEL_383;
          if ( (v215 & 1) != 0 )
          {
            v217 = System_String__Substring((System_String_o *)this, 1, 0);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v214->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v214->fields.resourceNames;
            v219 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v217, v219, v216);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_281;
            goto LABEL_265;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_25260/*"~"*/,
                                                      0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v214->fields.__2__current) )
              goto LABEL_267;
            this = (AssetLoader__LoadDataCR_d__29_o *)v214->fields.__4__this;
            if ( !this )
              goto LABEL_383;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0);
            if ( (_DWORD)this != 1 )
            {
              v213 = v214->fields.__2__current;
              break;
            }
          }
LABEL_265:
          if ( v210 == v211 )
            goto LABEL_281;
          if ( (unsigned int)++v211 >= LODWORD(v209->fields.__2__current) )
            goto LABEL_267;
          continue;
        }
        break;
      }
      if ( (_DWORD)v213 != 5 )
        goto LABEL_281;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v214->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_383;
      v220 = System_String__Trim((System_String_o *)this, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v220, 0);
      if ( LODWORD(v214->fields.__2__current) <= 4 )
        goto LABEL_267;
      v221 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_265;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__IsSame((AssetData_o *)this, v214->fields._errorCode_5__6, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_265;
      v222 = _4__this->fields.data;
      if ( !v222 )
        goto LABEL_383;
      if ( v221 == v222->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4C41F40 )
        {
          sub_1C37058(&ManagementManager_TypeInfo);
          byte_4C41F40 = 1;
        }
        v223 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v223 = ManagementManager_TypeInfo;
        }
        v224 = v223->static_fields->isDuringStartup;
        v225 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v224 )
        {
          v226 = LocalizationManager__Get((System_String_o *)StringLiteral_2043/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
          v227 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v227, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( v225 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v225, (System_String_o *)StringLiteral_1/*""*/, v226, v227, 1, 0);
            goto LABEL_301;
          }
          goto LABEL_383;
        }
        v242 = LocalizationManager__Get((System_String_o *)StringLiteral_2044/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
        v243 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v243, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
        if ( !v225 )
          goto LABEL_383;
        CommonUI__OpenRetryDialog((CommonUI_o *)v225, (System_String_o *)StringLiteral_1/*""*/, v242, v243, 1, 0);
LABEL_301:
        if ( !_4__this->fields.isErrorDialog )
        {
          v5->fields._url_5__12 = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._url_5__12, 0, (int32_t)v2, v3);
          goto LABEL_303;
        }
        v273 = (Il2CppObject *)v5->fields._wait_5__10;
        v5->fields.__2__current = v273;
        p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
        sub_1C36FFC(p__2__current, (int32_t)v273, (int32_t)v2, v3);
        v16 = 9;
        goto LABEL_370;
      }
LABEL_281:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4C41F40 )
      {
        sub_1C37058(&ManagementManager_TypeInfo);
        byte_4C41F40 = 1;
      }
      v228 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v228 = ManagementManager_TypeInfo;
      }
      v229 = v228->static_fields->isDuringStartup;
      v230 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v229 )
          goto LABEL_289;
LABEL_291:
        v231 = &StringLiteral_9241/*"NETWORK_ERROR_ASSET_UPDATE"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !v229 )
          goto LABEL_291;
LABEL_289:
        v231 = &StringLiteral_9242/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
      }
      v232 = LocalizationManager__Get((System_String_o *)*v231, 0);
      v233 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v233, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0);
      if ( !v230 )
        goto LABEL_383;
      CommonUI__OpenErrorDialog((CommonUI_o *)v230, (System_String_o *)StringLiteral_1/*""*/, v232, v233, 0, 0);
      return 0;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._req_5__16;
      v5->fields.__1__state = -1;
      if ( !this )
        goto LABEL_38;
      if ( !_4__this )
        goto LABEL_383;
      v25 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(
                                                  (UnityEngine_AssetBundleCreateRequest_o *)this,
                                                  0);
      if ( !v25 )
        goto LABEL_383;
      v26 = AssetData__SetAssetBundleData(v25, (UnityEngine_AssetBundle_o *)this, v5->fields.resourceNames, 0);
      v5->fields.__2__current = (Il2CppObject *)v26;
      p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
      sub_1C36FFC(p__2__current, (int32_t)v26, v27, v28);
      v16 = 13;
      goto LABEL_370;
    case 0xD:
      v5->fields.__1__state = -1;
LABEL_38:
      v5->fields._req_5__16 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields._req_5__16, 0, (int32_t)v2, v3);
      if ( _4__this )
        goto LABEL_39;
      goto LABEL_383;
    default:
      return 0;
  }
}


Il2CppObject *AssetLoader__LoadDataCR_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetLoader__LoadDataCR_d__29__System_Collections_IEnumerator_Reset(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *AssetLoader__LoadDataCR_d__29__System_Collections_IEnumerator_get_Current(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetLoader__LoadDataCR_d__29__System_IDisposable_Dispose(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetLoader___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C41F4E & 1) == 0 )
  {
    sub_1C37058(&AssetLoader___c_TypeInfo);
    byte_4C41F4E = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(AssetLoader___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AssetLoader___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C41F4F & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4C41F4F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return BYTE4(Instance[7].monitor) == 0;
}