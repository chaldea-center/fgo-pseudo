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
    sub_1C6BC60(0, method);
  AssetData__AddEntry(data, 0);
}


void AssetLoader__AssetLoadLogError(AssetLoader_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x21
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int32_t v76; // w1
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int32_t v79; // w1
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  int32_t v82; // w1
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  int32_t v85; // w1
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  int32_t v88; // w1
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  int32_t v91; // w1
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  int32_t v94; // w1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  int32_t v97; // w1
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w1
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  int32_t v103; // w1
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  int32_t v106; // w1
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  int32_t v109; // w1
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  int32_t v112; // w1
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  int32_t v115; // w1
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  int32_t v118; // w1
  __int64 v119; // x23
  __int64 v120; // x24
  CrashReporter_o *v121; // x19

  if ( (byte_4CB5254 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_14163/*"The request timed out."*/);
    sub_1C6BA08(&StringLiteral_21139/*"java.net.SocketException"*/);
    sub_1C6BA08(&StringLiteral_12296/*"SSL CA certificate error"*/);
    sub_1C6BA08(&StringLiteral_1407/*"404: Not Found"*/);
    sub_1C6BA08(&StringLiteral_14104/*"The network connection was lost."*/);
    sub_1C6BA08(&StringLiteral_1401/*"400: Bad Request"*/);
    sub_1C6BA08(&StringLiteral_14895/*"Unable to complete SSL connection"*/);
    sub_1C6BA08(&StringLiteral_14925/*"Unable to read data"*/);
    sub_1C6BA08(&StringLiteral_18239/*"connect failed"*/);
    sub_1C6BA08(&StringLiteral_7257/*"HTTP/1.1 500 Internal Server Error"*/);
    sub_1C6BA08(&StringLiteral_21141/*"java.net.UnknownHostException"*/);
    sub_1C6BA08(&StringLiteral_1415/*"500: Internal Server Error"*/);
    sub_1C6BA08(&StringLiteral_1417/*"502:"*/);
    sub_1C6BA08(&StringLiteral_11341/*"Request timeout"*/);
    sub_1C6BA08(&StringLiteral_4654/*"Connection reset by peer"*/);
    sub_1C6BA08(&StringLiteral_5012/*"DLErrorType"*/);
    sub_1C6BA08(&StringLiteral_5011/*"DLErrorAsset"*/);
    sub_1C6BA08(&StringLiteral_1429/*"504: Gateway Timeout"*/);
    sub_1C6BA08(&StringLiteral_15096/*"Unknown Error"*/);
    sub_1C6BA08(&StringLiteral_1419/*"503 Auto retry count"*/);
    sub_1C6BA08(&StringLiteral_21123/*"java.io.EOFException"*/);
    sub_1C6BA08(&StringLiteral_21136/*"java.net.ConnectException"*/);
    sub_1C6BA08(&StringLiteral_1405/*"403: Forbidden"*/);
    sub_1C6BA08(&StringLiteral_4653/*"Connection refused"*/);
    sub_1C6BA08(&StringLiteral_7258/*"HTTP/1.1 504 Gateway Timeout"*/);
    sub_1C6BA08(&StringLiteral_1403/*"401: Authorization Required"*/);
    sub_1C6BA08(&StringLiteral_21124/*"java.io.IOException"*/);
    sub_1C6BA08(&StringLiteral_9453/*"No address associated with hostname"*/);
    sub_1C6BA08(&StringLiteral_21138/*"java.net.ProtocolException"*/);
    sub_1C6BA08(&StringLiteral_2369/*"AssetBundle file download time over"*/);
    sub_1C6BA08(&StringLiteral_1408/*"408: Request Time-out"*/);
    sub_1C6BA08(&StringLiteral_14547/*"Too many redirects"*/);
    sub_1C6BA08(&StringLiteral_12926/*"Software caused connection abort"*/);
    sub_1C6BA08(&StringLiteral_2368/*"AssetBundle file check sum error"*/);
    sub_1C6BA08(&StringLiteral_21137/*"java.net.NoRouteToHostException"*/);
    sub_1C6BA08(&StringLiteral_5239/*"Destination host has an erroneous SSL certificate"*/);
    sub_1C6BA08(&StringLiteral_4655/*"Connection timed out"*/);
    sub_1C6BA08(&StringLiteral_4244/*"Cannot resolve destination host"*/);
    sub_1C6BA08(&StringLiteral_21140/*"java.net.SocketTimeoutException"*/);
    sub_1C6BA08(&StringLiteral_2372/*"AssetLoadError"*/);
    byte_4CB5254 = 1;
  }
  Instance = sub_1C6BAB0(string___TypeInfo, 37);
  if ( !Instance )
    goto LABEL_58;
  v9 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v10 = StringLiteral_9453/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9453/*"No address associated with hostname"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(Instance + 32), v10, v7, v8);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_47;
  v13 = StringLiteral_2369/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_2369/*"AssetBundle file download time over"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 40), v13, v11, v12);
  if ( *(_DWORD *)(v9 + 24) <= 2u )
    goto LABEL_47;
  v16 = StringLiteral_14104/*"The network connection was lost."*/;
  *(_QWORD *)(v9 + 48) = StringLiteral_14104/*"The network connection was lost."*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 48), v16, v14, v15);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_47;
  v19 = StringLiteral_4654/*"Connection reset by peer"*/;
  *(_QWORD *)(v9 + 56) = StringLiteral_4654/*"Connection reset by peer"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 56), v19, v17, v18);
  if ( *(_DWORD *)(v9 + 24) <= 4u )
    goto LABEL_47;
  v22 = StringLiteral_12926/*"Software caused connection abort"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_12926/*"Software caused connection abort"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 64), v22, v20, v21);
  if ( *(_DWORD *)(v9 + 24) <= 5u )
    goto LABEL_47;
  v25 = StringLiteral_4655/*"Connection timed out"*/;
  *(_QWORD *)(v9 + 72) = StringLiteral_4655/*"Connection timed out"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 72), v25, v23, v24);
  if ( *(_DWORD *)(v9 + 24) <= 6u )
    goto LABEL_47;
  v28 = StringLiteral_4653/*"Connection refused"*/;
  *(_QWORD *)(v9 + 80) = StringLiteral_4653/*"Connection refused"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 80), v28, v26, v27);
  if ( *(_DWORD *)(v9 + 24) <= 7u )
    goto LABEL_47;
  v31 = StringLiteral_14163/*"The request timed out."*/;
  *(_QWORD *)(v9 + 88) = StringLiteral_14163/*"The request timed out."*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 88), v31, v29, v30);
  if ( *(_DWORD *)(v9 + 24) <= 8u )
    goto LABEL_47;
  v34 = StringLiteral_4244/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v9 + 96) = StringLiteral_4244/*"Cannot resolve destination host"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 96), v34, v32, v33);
  if ( *(_DWORD *)(v9 + 24) <= 9u )
    goto LABEL_47;
  v37 = StringLiteral_14895/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v9 + 104) = StringLiteral_14895/*"Unable to complete SSL connection"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 104), v37, v35, v36);
  if ( *(_DWORD *)(v9 + 24) <= 0xAu )
    goto LABEL_47;
  v40 = StringLiteral_15096/*"Unknown Error"*/;
  *(_QWORD *)(v9 + 112) = StringLiteral_15096/*"Unknown Error"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 112), v40, v38, v39);
  if ( *(_DWORD *)(v9 + 24) <= 0xBu )
    goto LABEL_47;
  v43 = StringLiteral_11341/*"Request timeout"*/;
  *(_QWORD *)(v9 + 120) = StringLiteral_11341/*"Request timeout"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 120), v43, v41, v42);
  if ( *(_DWORD *)(v9 + 24) <= 0xCu )
    goto LABEL_47;
  v46 = StringLiteral_2368/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v9 + 128) = StringLiteral_2368/*"AssetBundle file check sum error"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 128), v46, v44, v45);
  if ( *(_DWORD *)(v9 + 24) <= 0xDu )
    goto LABEL_47;
  v49 = StringLiteral_12296/*"SSL CA certificate error"*/;
  *(_QWORD *)(v9 + 136) = StringLiteral_12296/*"SSL CA certificate error"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 136), v49, v47, v48);
  if ( *(_DWORD *)(v9 + 24) <= 0xEu )
    goto LABEL_47;
  v52 = StringLiteral_7257/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v9 + 144) = StringLiteral_7257/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 144), v52, v50, v51);
  if ( *(_DWORD *)(v9 + 24) <= 0xFu )
    goto LABEL_47;
  v55 = StringLiteral_7258/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v9 + 152) = StringLiteral_7258/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 152), v55, v53, v54);
  if ( *(_DWORD *)(v9 + 24) <= 0x10u )
    goto LABEL_47;
  v58 = StringLiteral_5239/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v9 + 160) = StringLiteral_5239/*"Destination host has an erroneous SSL certificate"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 160), v58, v56, v57);
  if ( *(_DWORD *)(v9 + 24) <= 0x11u )
    goto LABEL_47;
  v61 = StringLiteral_14547/*"Too many redirects"*/;
  *(_QWORD *)(v9 + 168) = StringLiteral_14547/*"Too many redirects"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 168), v61, v59, v60);
  if ( *(_DWORD *)(v9 + 24) <= 0x12u )
    goto LABEL_47;
  v64 = StringLiteral_21123/*"java.io.EOFException"*/;
  *(_QWORD *)(v9 + 176) = StringLiteral_21123/*"java.io.EOFException"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 176), v64, v62, v63);
  if ( *(_DWORD *)(v9 + 24) <= 0x13u )
    goto LABEL_47;
  v67 = StringLiteral_21139/*"java.net.SocketException"*/;
  *(_QWORD *)(v9 + 184) = StringLiteral_21139/*"java.net.SocketException"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 184), v67, v65, v66);
  if ( *(_DWORD *)(v9 + 24) <= 0x14u )
    goto LABEL_47;
  v70 = StringLiteral_21140/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v9 + 192) = StringLiteral_21140/*"java.net.SocketTimeoutException"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 192), v70, v68, v69);
  if ( *(_DWORD *)(v9 + 24) <= 0x15u )
    goto LABEL_47;
  v73 = StringLiteral_21137/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v9 + 200) = StringLiteral_21137/*"java.net.NoRouteToHostException"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 200), v73, v71, v72);
  if ( *(_DWORD *)(v9 + 24) <= 0x16u )
    goto LABEL_47;
  v76 = StringLiteral_21124/*"java.io.IOException"*/;
  *(_QWORD *)(v9 + 208) = StringLiteral_21124/*"java.io.IOException"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 208), v76, v74, v75);
  if ( *(_DWORD *)(v9 + 24) <= 0x17u )
    goto LABEL_47;
  v79 = StringLiteral_21136/*"java.net.ConnectException"*/;
  *(_QWORD *)(v9 + 216) = StringLiteral_21136/*"java.net.ConnectException"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 216), v79, v77, v78);
  if ( *(_DWORD *)(v9 + 24) <= 0x18u )
    goto LABEL_47;
  v82 = StringLiteral_18239/*"connect failed"*/;
  *(_QWORD *)(v9 + 224) = StringLiteral_18239/*"connect failed"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 224), v82, v80, v81);
  if ( *(_DWORD *)(v9 + 24) <= 0x19u )
    goto LABEL_47;
  v85 = StringLiteral_21138/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v9 + 232) = StringLiteral_21138/*"java.net.ProtocolException"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 232), v85, v83, v84);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Au )
    goto LABEL_47;
  v88 = StringLiteral_21141/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v9 + 240) = StringLiteral_21141/*"java.net.UnknownHostException"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 240), v88, v86, v87);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Bu )
    goto LABEL_47;
  v91 = StringLiteral_1401/*"400: Bad Request"*/;
  *(_QWORD *)(v9 + 248) = StringLiteral_1401/*"400: Bad Request"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 248), v91, v89, v90);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Cu )
    goto LABEL_47;
  v94 = StringLiteral_1403/*"401: Authorization Required"*/;
  *(_QWORD *)(v9 + 256) = StringLiteral_1403/*"401: Authorization Required"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 256), v94, v92, v93);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Du )
    goto LABEL_47;
  v97 = StringLiteral_1405/*"403: Forbidden"*/;
  *(_QWORD *)(v9 + 264) = StringLiteral_1405/*"403: Forbidden"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 264), v97, v95, v96);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Eu )
    goto LABEL_47;
  v100 = StringLiteral_1407/*"404: Not Found"*/;
  *(_QWORD *)(v9 + 272) = StringLiteral_1407/*"404: Not Found"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 272), v100, v98, v99);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Fu )
    goto LABEL_47;
  v103 = StringLiteral_1408/*"408: Request Time-out"*/;
  *(_QWORD *)(v9 + 280) = StringLiteral_1408/*"408: Request Time-out"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 280), v103, v101, v102);
  if ( *(_DWORD *)(v9 + 24) <= 0x20u )
    goto LABEL_47;
  v106 = StringLiteral_1415/*"500: Internal Server Error"*/;
  *(_QWORD *)(v9 + 288) = StringLiteral_1415/*"500: Internal Server Error"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 288), v106, v104, v105);
  if ( *(_DWORD *)(v9 + 24) <= 0x21u )
    goto LABEL_47;
  v109 = StringLiteral_1417/*"502:"*/;
  *(_QWORD *)(v9 + 296) = StringLiteral_1417/*"502:"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 296), v109, v107, v108);
  if ( *(_DWORD *)(v9 + 24) <= 0x22u
    || (v112 = StringLiteral_1419/*"503 Auto retry count"*/,
        *(_QWORD *)(v9 + 304) = StringLiteral_1419/*"503 Auto retry count"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 304), v112, v110, v111),
        *(_DWORD *)(v9 + 24) <= 0x23u)
    || (v115 = StringLiteral_1429/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v9 + 312) = StringLiteral_1429/*"504: Gateway Timeout"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 312), v115, v113, v114),
        *(_DWORD *)(v9 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1C6BC68(Instance);
  }
  v118 = StringLiteral_14925/*"Unable to read data"*/;
  *(_QWORD *)(v9 + 320) = StringLiteral_14925/*"Unable to read data"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 320), v118, v116, v117);
  if ( (int)*(_QWORD *)(v9 + 24) < 1 )
  {
LABEL_48:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_57;
  }
  v119 = 0;
  v120 = (unsigned int)*(_QWORD *)(v9 + 24) - 1LL;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_58;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v9 + 32 + 8 * v119), 0);
    if ( (Instance & 1) != 0 )
      break;
    if ( v120 == v119 )
      goto LABEL_48;
    if ( ++v119 >= (unsigned __int64)*(unsigned int *)(v9 + 24) )
      goto LABEL_47;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v121 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, 0), !v121) )
  {
LABEL_58:
    sub_1C6BC60(Instance, v6);
  }
  CrashReporter__AddCustomKey(v121, (System_String_o *)StringLiteral_5011/*"DLErrorAsset"*/, (System_String_o *)Instance, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v119 >= *(_DWORD *)(v9 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5012/*"DLErrorType"*/,
    *(System_String_o **)(v9 + 32 + 8 * v119),
    0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  errorCode = (System_String_o *)StringLiteral_2372/*"AssetLoadError"*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0);
}


void AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_4CB5251 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5251 = 1;
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
  UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)this, 0);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
}


bool AssetLoader__IsSame(AssetLoader_o *this, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame(data, name, 0);
  return (char)data;
}


bool AssetLoader__IsSame_40745168(AssetLoader_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_40737060(data, type, name, 0);
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

  if ( (byte_4CB5250 & 1) == 0 )
  {
    sub_1C6BA08(&AssetLoader__LoadDataCR_d__29_TypeInfo);
    byte_4CB5250 = 1;
  }
  v5 = sub_1C6BC54(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)resourceNames, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  System_Byte_array *readData; // x20
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB5252 & 1) == 0 )
  {
    sub_1C6BA08(&CatAndMouseGame_TypeInfo);
    byte_4CB5252 = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v4 = CatAndMouseGame__MouseGame4(readData, 0);
  this->fields._decData = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._decData, (int32_t)v4, v5, v6);
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
  __int64 v10; // x1

  if ( (byte_4CB5253 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CB5253 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
    this->fields.loader = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loader, 0, v6, v7);
  }
  this->fields.readData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.readData, 0, v2, v3);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4CB5247 )
  {
    sub_1C6BA08(&ManagementManager_TypeInfo);
    byte_4CB5247 = 1;
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
    UnityEngine_Application__Quit_71452840(0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v10);
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
  __int64 v7; // x1
  AssetData_o *v8; // x0
  bool IsNeedUpdateVersion; // w0
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *DataCR; // x1

  this->fields.endCallback = callbackFunc;
  p_endCallback = &this->fields.endCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callbackFunc, (int32_t)resourceNames, method);
  v8 = (AssetData_o *)*(p_endCallback - 1);
  if ( !v8 )
    sub_1C6BC60(0, v7);
  IsNeedUpdateVersion = AssetData__IsNeedUpdateVersion(v8, 0);
  this->fields.isDownload = IsNeedUpdateVersion;
  this->fields.isRequestDownload = IsNeedUpdateVersion;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, DataCR, 0);
}


void AssetLoader__abort_thread(AssetLoader_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Threading_Thread_o *threadDecrypt; // x0
  System_Threading_Thread_o **p_threadDecrypt; // x19
  __int64 v6; // x1

  p_threadDecrypt = &this->fields.threadDecrypt;
  threadDecrypt = this->fields.threadDecrypt;
  if ( threadDecrypt && !System_Threading_Thread__get_ThreadState(threadDecrypt, 0) )
  {
    if ( !*p_threadDecrypt )
      sub_1C6BC60(0, v6);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0);
  }
  *p_threadDecrypt = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_threadDecrypt, 0, v2, v3);
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

  if ( (byte_4CB524C & 1) == 0 )
  {
    sub_1C6BA08(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4CB524C = 1;
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
    v9 = sub_1CC77DC(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
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

  if ( (byte_4CB524E & 1) == 0 )
  {
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4CB524E = 1;
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
    v9 = sub_1CC77DC(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
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
    sub_1C6BC60(this, method);
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
    sub_1C6BC60(this, method);
  return data->fields.name;
}


int32_t AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(this, method);
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

  if ( (byte_4CB524D & 1) == 0 )
  {
    sub_1C6BA08(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4CB524D = 1;
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
    v9 = sub_1CC77DC(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
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

  if ( (byte_4CB524F & 1) == 0 )
  {
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4CB524F = 1;
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
    v9 = sub_1CC77DC(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1AA14F0;
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
        v11 = sub_1C6BAC0(method);
        v12 = sub_1C6C054(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1AA15EC;
          else
            v9 = sub_1AA15B0;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1AA152C;
        }
        else
        {
          v9 = sub_1AA1500;
        }
      }
      else
      {
        v9 = sub_1AA14D0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AA1488;
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
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v6, callback, object);
}


void AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1AA1300;
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
        v11 = sub_1C6BAC0(method);
        v12 = sub_1C6C054(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1AA13FC;
          else
            v9 = sub_1AA13C0;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1AA133C;
        }
        else
        {
          v9 = sub_1AA1310;
        }
      }
      else
      {
        v9 = sub_1AA12E0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AA1298;
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
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v6, callback, object);
}


void AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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
  __int64 naturalAligment; // x10
  UnityEngine_Networking_DownloadHandler_o *v22; // x8
  uint32_t klass; // w8
  AssetData_o *v24; // x20
  System_Collections_IEnumerator_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Byte_array *data; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Byte_array *readData; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  float unscaledTime; // s8
  ManagerConfig_c *v45; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v47; // x23
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x0
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int64_t v55; // x23
  int32_t v56; // w1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  CGThumbnailListItem_o *p_errorLocalizeCode_5__7; // x0
  int32_t v60; // w1
  System_String_o *Url; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_String_o *url_5__12; // x21
  struct AssetData_o *v65; // x8
  AssetLoader__LoadDataCR_d__29_o *v66; // x22
  bool v67; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__13; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v78; // s8
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  float v81; // s0
  bool v82; // zf
  float v83; // s8
  UnityEngine_Networking_DownloadHandler_o *v84; // x0
  __int64 v85; // x10
  DownloadHandlerFileWithCrcCheck_o *v86; // x22
  System_String_o *v87; // x0
  uint32_t crc; // w8
  System_String_o *v89; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct System_Exception_o *error_k__BackingField; // x0
  System_Exception_c *v95; // x8
  __int64 v96; // x10
  struct System_Exception_o *v97; // x8
  AssetLoader__LoadDataCR_d__29_o *v98; // x22
  System_String_o *v99; // x0
  System_String_o *v100; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  int32_t v103; // w1
  CGThumbnailListItem_o *p_errorCode_5__6; // x0
  System_String_o *v105; // x22
  System_String_o *v106; // x0
  System_String_o *v107; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v111; // x23
  Il2CppObject *v112; // x23
  AssetLoader__LoadDataCR_d__29_o *v113; // x23
  System_String_o *v114; // x24
  int v115; // w8
  System_String_o *v116; // x0
  System_String_o *v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  AssetLoader__LoadDataCR_d__29_o *v120; // x22
  int32_t v121; // w1
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  struct System_String_o *v124; // x1
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  int32_t v127; // w1
  struct AssetData_o *v128; // x8
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  int32_t v133; // w1
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  int32_t v138; // w1
  System_String_o *v139; // x0
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  ManagerConfig_c *v142; // x0
  struct AssetData_o *v143; // x8
  CommonUI_o *v144; // x21
  System_String_o *v145; // x22
  ErrorDialog_ClickDelegate_o *v146; // x23
  ManagementManager_c *v147; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v151; // x22
  System_String_o *v152; // x21
  System_String_o *v153; // x23
  System_String_o *v154; // x23
  ErrorDialog_ClickDelegate_o *v155; // x24
  System_String_o *v156; // x23
  System_String_o *v157; // x23
  ErrorDialog_ClickDelegate_o *v158; // x24
  UnityEngine_Networking_UnityWebRequest_o *v159; // x0
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  AssetManager_c *v164; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  System_String_o *v168; // x21
  System_String_o *UrlString; // x0
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  AssetLoader__LoadDataCR_d__29_o **v172; // x21
  float v173; // s8
  ManagerConfig_c *v174; // x0
  float v175; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v176; // x0
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  System_String_o *ResponseHeader; // x21
  uint64_t freeSize_5__11; // x21
  ManagerConfig_c *v183; // x0
  float v184; // s0
  float v185; // s9
  float v186; // s8
  float v187; // s0
  float v188; // s8
  System_String_o **v189; // x21
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  System_String_o *v192; // x0
  System_String_o *text; // x22
  System_String_o *v194; // x22
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  AssetLoader__LoadDataCR_d__29_o *v197; // x22
  int v198; // w8
  int32_t v199; // w0
  int32_t v200; // w24
  System_String_o *v201; // x23
  System_String_o *v202; // x22
  System_Byte_array *v203; // x24
  uint32_t v204; // w24
  int v205; // w8
  Il2CppObject *v206; // x8
  AssetLoader__LoadDataCR_d__29_o *v207; // x21
  int v208; // w28
  int v209; // w29
  System_String_o *v210; // x22
  Il2CppObject *v211; // x8
  AssetLoader__LoadDataCR_d__29_o *v212; // x22
  char v213; // w8
  const MethodInfo *v214; // x2
  System_String_o *v215; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v217; // x22
  System_String_o *v218; // x0
  int v219; // w23
  struct AssetData_o *v220; // x8
  ManagementManager_c *v221; // x0
  _BOOL4 v222; // w22
  Il2CppObject *v223; // x21
  System_String_o *v224; // x22
  ErrorDialog_ClickDelegate_o *v225; // x23
  ManagementManager_c *v226; // x0
  _BOOL4 v227; // w21
  Il2CppObject *v228; // x19
  __int64 *v229; // x8
  System_String_o *v230; // x21
  ErrorDialog_ClickDelegate_o *v231; // x22
  bool v232; // w0
  __int64 *v233; // x8
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v235; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v237; // x20
  int32_t v238; // w2
  const MethodInfo *v239; // x3
  System_String_o *v240; // x22
  ErrorDialog_ClickDelegate_o *v241; // x23
  int32_t v242; // w2
  const MethodInfo *v243; // x3
  int32_t v244; // w2
  const MethodInfo *v245; // x3
  Il2CppObject *_2__current; // x21
  AssetData_o *v247; // x22
  AssetLoader__LoadDataCR_d__29_o **v248; // x21
  __int64 v249; // x10
  __int64 v250; // x10
  System_Byte_array *v251; // x0
  UnityEngine_AssetBundleCreateRequest_o *v252; // x0
  int32_t v253; // w2
  const MethodInfo *v254; // x3
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  Il2CppObject *req_5__16; // x1
  int32_t v258; // w2
  const MethodInfo *v259; // x3
  AssetLoader___c_c *v260; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v262; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int32_t v264; // w2
  const MethodInfo *v265; // x3
  UnityEngine_WaitUntil_o *v266; // x21
  int32_t v267; // w2
  const MethodInfo *v268; // x3
  Il2CppObject *v269; // x1
  Il2CppObject *v270; // x1
  Il2CppObject *v271; // x1
  int32_t v272; // w2
  const MethodInfo *v273; // x3
  int32_t v274; // w2
  const MethodInfo *v275; // x3
  int32_t v276; // w1
  __int64 v277; // x1
  CGThumbnailListItem_o *v278; // x0
  System_String_o *v279; // x0
  UnityEngine_Networking_UnityWebRequest_o *v280; // x0
  int32_t v281; // w2
  const MethodInfo *v282; // x3
  ManagerConfig_c *v283; // x0
  struct AssetData_o *v284; // x8
  CommonUI_o *v285; // x22
  System_String_o *v286; // x21
  ErrorDialog_ClickDelegate_o *v287; // x23
  Il2CppObject *v288; // x1
  ManagementManager_c *v289; // x0
  _BOOL4 v290; // w22
  Il2CppObject *v291; // x21
  System_String_o *v292; // x22
  ErrorDialog_ClickDelegate_o *v293; // x23
  System_String_o *v294; // x22
  ErrorDialog_ClickDelegate_o *v295; // x23
  Il2CppObject *v296; // x1
  UnityEngine_WaitForSeconds_o *v297; // x20
  int32_t v298; // w2
  const MethodInfo *v299; // x3
  UnityEngine_Networking_DownloadHandler_o *v300; // x0
  ManagerConfig_c *v301; // x0
  struct ManagerConfig_StaticFields *v302; // x8
  Il2CppObject *wait_5__10; // x1
  CGThumbnailListItem_o *v304; // x19
  ManagerConfig_c *v305; // x0
  struct ManagerConfig_StaticFields *v306; // x8
  Il2CppObject *v307; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-B0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-B0h]
  uint64_t result; // [xsp+28h] [xbp-88h] BYREF
  __int64 v311; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-78h] BYREF

  v5 = this;
  if ( (byte_4CB5257 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetLoader_EndRebootDialog__);
    sub_1C6BA08(&Method_AssetLoader_EndRetryDialog__);
    sub_1C6BA08(&Method_AssetLoader_EndWarningDialog__);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&CatAndMouseGame_TypeInfo);
    sub_1C6BA08(&char___TypeInfo);
    sub_1C6BA08(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&CommonServicePluginScript_TypeInfo);
    sub_1C6BA08(&Crc32_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C6BA08(&DownloadHandlerDecryptFileWithCrc_TypeInfo);
    sub_1C6BA08(&DownloadHandlerFileWithCrcCheck_TypeInfo);
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&System_IO_IOException_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&Method_AssetLoader___c__LoadDataCR_b__29_0__);
    sub_1C6BA08(&AssetLoader___c_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_9239/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/);
    sub_1C6BA08(&StringLiteral_7254/*"HTTP"*/);
    sub_1C6BA08(&StringLiteral_5280/*"Disk full"*/);
    sub_1C6BA08(&StringLiteral_2386/*"AssetStorageList download time over"*/);
    sub_1C6BA08(&StringLiteral_9248/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_2373/*"AssetName : "*/);
    sub_1C6BA08(&StringLiteral_759/*")\n\n503 Auto retry count "*/);
    sub_1C6BA08(&StringLiteral_762/*")\nfile crc ("*/);
    sub_1C6BA08(&StringLiteral_1418/*"503"*/);
    sub_1C6BA08(&StringLiteral_2036/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_15922/*"[FFFF80]Download error for debug"*/);
    sub_1C6BA08(&StringLiteral_2383/*"AssetStorageList download data error"*/);
    sub_1C6BA08(&StringLiteral_4679/*"Content-Length"*/);
    sub_1C6BA08(&StringLiteral_25370/*"~"*/);
    sub_1C6BA08(&StringLiteral_12353/*"STATUS"*/);
    sub_1C6BA08(&StringLiteral_758/*")\n\n"*/);
    sub_1C6BA08(&StringLiteral_9238/*"NETWORK_ERROR_ASSET_UPDATE"*/);
    sub_1C6BA08(&StringLiteral_650/*"("*/);
    sub_1C6BA08(&StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_1C6BA08(&StringLiteral_756/*")"*/);
    sub_1C6BA08(&StringLiteral_19119/*"error "*/);
    sub_1C6BA08(&StringLiteral_1761/*"@"*/);
    sub_1C6BA08(&StringLiteral_2037/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_2384/*"AssetStorageList download error"*/);
    sub_1C6BA08(&StringLiteral_761/*")\n\nAssetBundle file download time over"*/);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5257 = 1;
  }
  v311 = 0;
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
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13, 0, (int32_t)v2, v3);
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
            v22 = downloadHandler;
          else
            v22 = 0;
          if ( (v19 & 1) != 0 )
            goto LABEL_31;
LABEL_46:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_383;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
          _4__this->fields.loader = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v32, v33);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !this )
            goto LABEL_383;
          AssetData__ResetVersion((AssetData_o *)this, 0);
          goto LABEL_58;
        }
      }
      v22 = 0;
      if ( (v19 & 1) == 0 )
        goto LABEL_46;
LABEL_31:
      if ( v22 )
      {
        klass = (uint32_t)v22[1].klass;
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
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.readData, (int32_t)data, v35, v36);
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
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v38, v39);
      _4__this->fields.readData = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v40, v41);
LABEL_58:
      while ( 1 )
      {
        _4__this->fields.readData = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
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
            sub_1C6B9AC(v9, (int32_t)LoadRequest, v10, v11);
            this = (AssetLoader__LoadDataCR_d__29_o *)v9->klass;
            if ( !v9->klass )
              goto LABEL_383;
            v12 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0);
            v5->fields.__2__current = (Il2CppObject *)v12;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C6B9AC(p__2__current, (int32_t)v12, v14, v15);
            v16 = 11;
          }
          else
          {
            v260 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v260 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v260->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v260->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v260);
                v260 = AssetLoader___c_TypeInfo;
              }
              v262 = (Il2CppObject *)v260->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(_9__29_0, v262, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v264, v265);
            }
            v266 = (UnityEngine_WaitUntil_o *)sub_1C6BC54(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v266, _9__29_0, 0);
            v5->fields.__2__current = (Il2CppObject *)v266;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C6B9AC(p__2__current, (int32_t)v266, v267, v268);
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
                                                      method);
          if ( ((unsigned __int8)this & 1) != 0 )
            continue;
        }
LABEL_310:
        v247 = _4__this->fields.data;
        if ( !v247 )
          goto LABEL_383;
        if ( v247->fields.entryCount >= 1 )
        {
          v248 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v5->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_383;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0);
            if ( !this
              || (v249 = DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.naturalAligment,
                  this->klass->_2.naturalAligment < (unsigned int)v249)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v249 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v248;
              if ( !*v248 )
                goto LABEL_383;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0);
              if ( !this )
                goto LABEL_383;
              v250 = DownloadHandlerFileWithCrcCheck_TypeInfo->_2.naturalAligment;
              if ( this->klass->_2.naturalAligment < (unsigned int)v250
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v250 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_383;
              }
            }
            v251 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
            v252 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v251, 0);
            v5->fields._req_5__16 = v252;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._req_5__16, (int32_t)v252, v253, v254);
            this = *v248;
            if ( !*v248 )
              goto LABEL_383;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
            *v248 = 0;
            sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v255, v256);
            req_5__16 = (Il2CppObject *)v5->fields._req_5__16;
            v5->fields.__2__current = req_5__16;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C6B9AC(p__2__current, (int32_t)req_5__16, v258, v259);
            v16 = 12;
            goto LABEL_370;
          }
          if ( !this )
            goto LABEL_383;
          v300 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0);
          AssetData__SetData(v247, v300, 0);
        }
LABEL_39:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
          _4__this->fields.loader = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v29, v30);
        }
        _4__this->fields.readData = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        AssetLoader__EndLoad(_4__this, v31);
        return 0;
      }
      *(_WORD *)&v5->fields._isAutoRetry_5__4 = 0;
      v5->fields._errorCode_5__6 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, 0, (int32_t)v2, v3);
      v5->fields._errorLocalizeCode_5__7 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7, 0, v42, v43);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0);
      v45 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v45 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v45->static_fields->TIMEOUT;
      v5->fields._loadProgress_5__9 = 0.0;
      v5->fields._requestTime_5__8 = unscaledTime + TIMEOUT;
      v47 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v47, 0);
      v5->fields._wait_5__10 = v47;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._wait_5__10, (int32_t)v47, v48, v49);
      Path = AssetStorageCache__GetPath(v50);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0);
      v5->fields._freeSize_5__11 = FreeSize;
      if ( FreeSize < 0 )
        goto LABEL_68;
      v55 = FreeSize;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_383;
      if ( v55 < ManagerConfig_TypeInfo->static_fields->LIMIT_FREE_SIZE + *(int *)&this->fields._isEncrypted_5__2 )
      {
LABEL_68:
        _4__this->fields.isErrorDialog = 1;
        v56 = StringLiteral_5280/*"Disk full"*/;
        v5->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5280/*"Disk full"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, v56, v53, v54);
        p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7;
        v60 = StringLiteral_9248/*"NETWORK_ERROR_DISK_FULL"*/;
        v5->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9248/*"NETWORK_ERROR_DISK_FULL"*/;
        goto LABEL_140;
      }
      Url = AssetData__get_Url((AssetData_o *)this, 0);
      v5->fields._url_5__12 = Url;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._url_5__12, (int32_t)Url, v62, v63);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_383;
      url_5__12 = v5->fields._url_5__12;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, 0);
      v65 = _4__this->fields.data;
      v66 = this;
      if ( v5->fields._isEncrypted_5__2 )
      {
        if ( !v65 )
          goto LABEL_383;
        v67 = v65->fields.entryCount > 0;
      }
      else
      {
        if ( !v65 )
          goto LABEL_383;
        v67 = 0;
      }
      Key = AssetData__get_Key(_4__this->fields.data, 0);
      v69 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__12, (System_String_o *)v66, v67, Key, 0);
      _4__this->fields.loader = v69;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)v69, v70, v71);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      v72 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      v5->fields._asyncOperater_5__13 = v72;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13, (int32_t)v72, v73, v74);
LABEL_77:
      p_asyncOperater_5__13 = (AssetLoader__LoadDataCR_d__29_o **)&v5->fields._asyncOperater_5__13;
      this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
      if ( !this )
LABEL_383:
        sub_1C6BC60(this, method);
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
        v78 = progress;
        v81 = UnityEngine_Time__get_unscaledTime(0);
        v82 = v78 == loadProgress_5__9;
        v83 = v81;
        if ( !v82 )
        {
          v301 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v301 = ManagerConfig_TypeInfo;
          }
          v302 = v301->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
          v5->fields._requestTime_5__8 = v83 + v302->TIMEOUT;
          if ( !this )
            goto LABEL_383;
          v5->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0);
LABEL_377:
          wait_5__10 = (Il2CppObject *)v5->fields._wait_5__10;
          v5->fields.__2__current = wait_5__10;
          v304 = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C6B9AC(v304, (int32_t)wait_5__10, v79, v80);
          v232 = 1;
          LODWORD(v304[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return v232;
        }
        if ( v81 < v5->fields._requestTime_5__8 )
          goto LABEL_377;
      }
      if ( !_4__this )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      v84 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
              (UnityEngine_Networking_UnityWebRequest_o *)this,
              0);
      if ( v84
        && (v85 = DownloadHandlerFileWithCrcCheck_TypeInfo->_2.naturalAligment,
            v84->klass->_2.naturalAligment >= (unsigned int)v85) )
      {
        v86 = (DownloadHandlerFileWithCrcCheck_c *)v84->klass->_2.typeHierarchy[v85 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
            ? (DownloadHandlerFileWithCrcCheck_o *)v84
            : 0LL;
      }
      else
      {
        v86 = 0;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0) )
      {
        v89 = System_String__Concat_64005056(
                (System_String_o *)StringLiteral_650/*"("*/,
                v5->fields._url_5__12,
                (System_String_o *)StringLiteral_761/*")\n\nAssetBundle file download time over"*/,
                0);
        v5->fields._errorCode_5__6 = v89;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, (int32_t)v89, v90, v91);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_383;
        UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        if ( v86 )
          DownloadHandlerFileWithCrcCheck__CloseStream(v86, 0);
        goto LABEL_139;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      v87 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      if ( System_String__IsNullOrEmpty(v87, 0) )
      {
        if ( !v86 )
        {
          crc = 0;
LABEL_126:
          HIDWORD(v311) = crc;
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
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C6BAB0(string___TypeInfo, 7);
            if ( !this )
              goto LABEL_383;
            v120 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_267;
            v121 = StringLiteral_650/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_650/*"("*/;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__4__this, v121, v118, v119);
            if ( LODWORD(v120->fields.__2__current) <= 1 )
              goto LABEL_267;
            v124 = v5->fields._url_5__12;
            v120->fields.resourceNames = (struct System_String_array *)v124;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v120->fields.resourceNames, (int32_t)v124, v122, v123);
            if ( LODWORD(v120->fields.__2__current) <= 2 )
              goto LABEL_267;
            v127 = StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v120->fields._isEncrypted_5__2 = StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v120->fields._isEncrypted_5__2, v127, v125, v126);
            v128 = _4__this->fields.data;
            if ( !v128 )
              goto LABEL_383;
            LODWORD(v311) = v128->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v311, 0);
            if ( LODWORD(v120->fields.__2__current) <= 3 )
              goto LABEL_267;
            *(_QWORD *)&v120->fields._isAutoRetry_5__4 = this;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v120->fields._isAutoRetry_5__4, (int32_t)this, v129, v130);
            if ( LODWORD(v120->fields.__2__current) <= 4 )
              goto LABEL_267;
            v133 = StringLiteral_762/*")\nfile crc ("*/;
            v120->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_762/*")\nfile crc ("*/;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v120->fields._errorCode_5__6, v133, v131, v132);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v311 + 4, 0);
            if ( LODWORD(v120->fields.__2__current) <= 5 )
              goto LABEL_267;
            v120->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v120->fields._errorLocalizeCode_5__7, (int32_t)this, v134, v135);
            if ( LODWORD(v120->fields.__2__current) <= 6 )
              goto LABEL_267;
            v138 = StringLiteral_756/*")"*/;
            *(_QWORD *)&v120->fields._requestTime_5__8 = StringLiteral_756/*")"*/;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v120->fields._requestTime_5__8, v138, v136, v137);
            v139 = System_String__Concat_64007324((System_String_array *)v120, 0);
            v5->fields._errorCode_5__6 = v139;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, (int32_t)v139, v140, v141);
            v5->fields._isCrcError_5__5 = 1;
          }
          goto LABEL_139;
        }
        if ( !v86->fields._error_k__BackingField )
        {
          crc = v86->fields.crc;
          goto LABEL_126;
        }
      }
      else if ( !v86 )
      {
LABEL_109:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_383;
        v105 = v5->fields._url_5__12;
        v106 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        v107 = System_String__Concat_64007060(
                 (System_String_o *)StringLiteral_650/*"("*/,
                 v105,
                 (System_String_o *)StringLiteral_758/*")\n\n"*/,
                 v106,
                 0);
        v5->fields._errorCode_5__6 = v107;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, (int32_t)v107, v108, v109);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_383;
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                            0);
        if ( !ResponseHeaders )
          goto LABEL_139;
        v111 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
               (const MethodInfo_34BB60C *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v111,
                (Il2CppObject *)StringLiteral_12353/*"STATUS"*/,
                &value,
                (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_139;
        }
        v112 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C6BAB0(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_383;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_267;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v112 )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_64016000(
                                                    (System_String_o *)v112,
                                                    (System_Char_array *)this,
                                                    1,
                                                    0);
        if ( !this )
          goto LABEL_383;
        v113 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_139;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_7254/*"HTTP"*/,
                                                    0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_139;
        if ( LODWORD(v113->fields.__2__current) <= 1 )
          goto LABEL_267;
        this = (AssetLoader__LoadDataCR_d__29_o *)v113->fields.resourceNames;
        if ( !this )
          goto LABEL_383;
        if ( !System_String__Equals_64002112((System_String_o *)this, (System_String_o *)StringLiteral_1418/*"503"*/, 0) )
          goto LABEL_139;
        v114 = v5->fields._url_5__12;
        v115 = v5->fields._autoRetryCount_5__3 + 1;
        v5->fields._isAutoRetry_5__4 = 1;
        v5->fields._autoRetryCount_5__3 = v115;
        v116 = System_Int32__ToString((int)v5 + 52, 0);
        v117 = System_String__Concat_64007060(
                 (System_String_o *)StringLiteral_650/*"("*/,
                 v114,
                 (System_String_o *)StringLiteral_759/*")\n\n503 Auto retry count "*/,
                 v116,
                 0);
        v103 = (int)v117;
        v5->fields._errorCode_5__6 = v117;
        p_errorCode_5__6 = (CGThumbnailListItem_o *)&v5->fields._errorCode_5__6;
        goto LABEL_108;
      }
      DownloadHandlerFileWithCrcCheck__CloseStream(v86, 0);
      error_k__BackingField = v86->fields._error_k__BackingField;
      if ( !error_k__BackingField )
        goto LABEL_109;
      v95 = error_k__BackingField->klass;
      v96 = System_IO_IOException_TypeInfo->_2.naturalAligment;
      if ( error_k__BackingField->klass->_2.naturalAligment >= (unsigned int)v96
        && (System_IO_IOException_c *)v95->_2.typeHierarchy[v96 - 1] == System_IO_IOException_TypeInfo )
      {
        _4__this->fields.isErrorDialog = 1;
        v100 = (System_String_o *)((__int64 (__fastcall *)(struct System_Exception_o *, const MethodInfo *))error_k__BackingField->klass->vtable._5_get_Message.methodPtr)(
                                    error_k__BackingField,
                                    error_k__BackingField->klass->vtable._5_get_Message.method);
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)((__int64 (*)(void))v95->vtable._3_ToString.methodPtr)();
        v97 = v86->fields._error_k__BackingField;
        if ( !v97 )
          goto LABEL_383;
        v98 = this;
        v99 = (System_String_o *)((System_String_o *(__fastcall *)(struct System_Exception_o *__return_ptr, struct System_Exception_o *, const MethodInfo *))v97->klass->vtable._5_get_Message.methodPtr)(
                                   v97,
                                   v97,
                                   v97->klass->vtable._5_get_Message.method);
        v100 = System_String__Concat_64007060(
                 (System_String_o *)StringLiteral_19119/*"error "*/,
                 (System_String_o *)v98,
                 (System_String_o *)StringLiteral_113/*" "*/,
                 v99,
                 0);
      }
      v103 = (int)v100;
      v5->fields._errorCode_5__6 = v100;
      p_errorCode_5__6 = (CGThumbnailListItem_o *)&v5->fields._errorCode_5__6;
LABEL_108:
      sub_1C6B9AC(p_errorCode_5__6, v103, v101, v102);
LABEL_139:
      v5->fields._url_5__12 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._url_5__12, 0, v92, v93);
      p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13;
      v60 = 0;
      v5->fields._asyncOperater_5__13 = 0;
LABEL_140:
      sub_1C6B9AC(p_errorLocalizeCode_5__7, v60, v57, v58);
      method = (const MethodInfo *)v5->fields._errorCode_5__6;
      if ( method )
      {
        AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
        v142 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v142 = ManagerConfig_TypeInfo;
        }
        if ( v142->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v143 = _4__this->fields.data;
          if ( !v143 )
            goto LABEL_383;
          v144 = (CommonUI_o *)this;
          v145 = System_String__Concat_64007060(
                   (System_String_o *)StringLiteral_2373/*"AssetName : "*/,
                   v143->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v5->fields._errorCode_5__6,
                   0);
          v146 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v146, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
          if ( !v144 )
            goto LABEL_383;
          v4 &= 0xFFFFFFFF00000000LL;
          LODWORD(effectDistance.fields.value.fields.y) = v4;
          *(_QWORD *)&effectDistance.fields.hasValue = 0;
          CommonUI__OpenWarningDialog(
            v144,
            (System_String_o *)StringLiteral_15922/*"[FFFF80]Download error for debug"*/,
            v145,
            v146,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0);
LABEL_147:
          if ( _4__this->fields.isErrorDialog )
          {
            v269 = (Il2CppObject *)v5->fields._wait_5__10;
            v5->fields.__2__current = v269;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C6B9AC(p__2__current, (int32_t)v269, (int32_t)v2, v3);
            v16 = 2;
            goto LABEL_370;
          }
        }
        if ( v5->fields._isAutoRetry_5__4 )
        {
          autoRetryCount_5__3 = v5->fields._autoRetryCount_5__3;
          v235 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v235 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v235->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v237 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v237, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0);
          v5->fields.__2__current = (Il2CppObject *)v237;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C6B9AC(p__2__current, (int32_t)v237, v238, v239);
          v16 = 3;
          goto LABEL_370;
        }
        if ( !v5->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          if ( !byte_4CB5247 )
          {
            sub_1C6BA08(&ManagementManager_TypeInfo);
            byte_4CB5247 = 1;
          }
          v147 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v147 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v147->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v5->fields._errorLocalizeCode_5__7;
          v151 = (CommonUI_o *)Instance;
          v152 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v153 = v5->fields._errorLocalizeCode_5__7;
            else
              v153 = (System_String_o *)StringLiteral_2036/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v154 = LocalizationManager__Get(v153, 0);
            v155 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v155, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
            if ( !v151 )
              goto LABEL_383;
            CommonUI__OpenRetryBootDialog(v151, v152, v154, v155, 1, 0);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v156 = v5->fields._errorLocalizeCode_5__7;
            else
              v156 = (System_String_o *)StringLiteral_2037/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v157 = LocalizationManager__Get(v156, 0);
            v158 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v158, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
            if ( !v151 )
              goto LABEL_383;
            CommonUI__OpenRetryDialog(v151, v152, v157, v158, 1, 0);
          }
LABEL_171:
          if ( _4__this->fields.isErrorDialog )
          {
            v270 = (Il2CppObject *)v5->fields._wait_5__10;
            v5->fields.__2__current = v270;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C6B9AC(p__2__current, (int32_t)v270, (int32_t)v2, v3);
            v16 = 4;
            goto LABEL_370;
          }
        }
      }
LABEL_172:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB16DC )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB16DC = 1;
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
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v272, v273);
        _4__this->fields.readData = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v274, v275);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v5->fields._isEncrypted_5__2 )
        goto LABEL_310;
      v159 = _4__this->fields.loader;
      if ( v159 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v159, 0);
        _4__this->fields.loader = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v160, v161);
        _4__this->fields.readData = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v162, v163);
      }
      if ( !v5->fields._isCrcError_5__5 )
      {
LABEL_303:
        v5->fields._errorCode_5__6 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, 0, (int32_t)v2, v3);
        v5->fields._errorLocalizeCode_5__7 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7, 0, v242, v243);
        v5->fields._wait_5__10 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._wait_5__10, 0, v244, v245);
        goto LABEL_304;
      }
      v164 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v164);
      v5->fields._url_5__12 = ConfigFileAddress;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._url_5__12, (int32_t)ConfigFileAddress, v166, v167);
LABEL_188:
      v168 = v5->fields._url_5__12;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v168, v7);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0);
      if ( !_4__this )
        goto LABEL_383;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v172 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)this, v170, v171);
      v173 = UnityEngine_Time__get_unscaledTime(0);
      v174 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v174 = ManagerConfig_TypeInfo;
      }
      v175 = v174->static_fields->TIMEOUT;
      v5->fields._loadProgress_5__9 = 0.0;
      *(_WORD *)&v5->fields._isSizeChecked_5__14 = 0;
      v5->fields._requestTime_5__8 = v173 + v175;
      this = *v172;
      if ( !*v172 )
        goto LABEL_383;
      v176 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      v5->fields._asyncOperater_5__13 = v176;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13, (int32_t)v176, v177, v178);
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
                             (System_String_o *)StringLiteral_4679/*"Content-Length"*/,
                             0);
          if ( !System_String__IsNullOrEmpty(ResponseHeader, 0) )
          {
            v5->fields._isSizeChecked_5__14 = 1;
            result = 0;
            System_UInt64__TryParse(ResponseHeader, &result, 0);
            freeSize_5__11 = v5->fields._freeSize_5__11;
            v183 = ManagerConfig_TypeInfo;
            if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v183 = ManagerConfig_TypeInfo;
            }
            if ( freeSize_5__11 < result + v183->static_fields->LIMIT_FREE_SIZE )
            {
              v5->fields._isDiskFull_5__15 = 1;
              goto LABEL_209;
            }
          }
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
        if ( !this )
          goto LABEL_383;
        v184 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
        v185 = v5->fields._loadProgress_5__9;
        v186 = v184;
        v187 = UnityEngine_Time__get_unscaledTime(0);
        v82 = v186 == v185;
        v188 = v187;
        if ( !v82 )
        {
          v305 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v305 = ManagerConfig_TypeInfo;
          }
          v306 = v305->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
          v5->fields._requestTime_5__8 = v188 + v306->TIMEOUT;
          if ( !this )
            goto LABEL_383;
          v5->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0);
          goto LABEL_382;
        }
        if ( v187 < v5->fields._requestTime_5__8 )
        {
LABEL_382:
          v307 = (Il2CppObject *)v5->fields._wait_5__10;
          v5->fields.__2__current = v307;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C6B9AC(p__2__current, (int32_t)v307, v179, v180);
          v16 = 5;
          goto LABEL_370;
        }
      }
LABEL_209:
      v5->fields._errorCode_5__6 = 0;
      v189 = &v5->fields._errorCode_5__6;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, 0, v179, v180);
      if ( !_4__this )
        goto LABEL_383;
      if ( v5->fields._isDiskFull_5__15 )
      {
        _4__this->fields.isErrorDialog = 1;
        v276 = StringLiteral_5280/*"Disk full"*/;
        v5->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5280/*"Disk full"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, v276, v190, v191);
        LODWORD(v277) = StringLiteral_9248/*"NETWORK_ERROR_DISK_FULL"*/;
        v5->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9248/*"NETWORK_ERROR_DISK_FULL"*/;
        v278 = (CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7;
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
        v233 = &StringLiteral_2386/*"AssetStorageList download time over"*/;
        goto LABEL_341;
      }
      v192 = UnityEngine_Networking_UnityWebRequest__get_error(_4__this->fields.loader, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v192, 0);
      if ( !_4__this->fields.loader )
        goto LABEL_383;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v279 = UnityEngine_Networking_UnityWebRequest__get_error(_4__this->fields.loader, 0);
        LODWORD(v277) = (_DWORD)v279;
        *v189 = v279;
LABEL_342:
        v278 = (CGThumbnailListItem_o *)&v5->fields._errorCode_5__6;
LABEL_343:
        sub_1C6B9AC(v278, v277, v195, v196);
        v280 = _4__this->fields.loader;
        if ( v280 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(v280, 0);
          _4__this->fields.loader = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v281, v282);
        }
        if ( !*v189 )
          goto LABEL_369;
        v283 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v283 = ManagerConfig_TypeInfo;
        }
        if ( v283->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v284 = _4__this->fields.data;
          if ( !v284 )
            goto LABEL_383;
          v285 = (CommonUI_o *)this;
          v286 = System_String__Concat_64007060(
                   (System_String_o *)StringLiteral_2373/*"AssetName : "*/,
                   v284->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v189,
                   0);
          v287 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v287, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
          if ( !v285 )
            goto LABEL_383;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v285,
            (System_String_o *)StringLiteral_15922/*"[FFFF80]Download error for debug"*/,
            v286,
            v287,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0);
LABEL_352:
          if ( _4__this->fields.isErrorDialog )
          {
            v288 = (Il2CppObject *)v5->fields._wait_5__10;
            v5->fields.__2__current = v288;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C6B9AC(p__2__current, (int32_t)v288, (int32_t)v2, v3);
            v16 = 6;
            goto LABEL_370;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4CB5247 )
        {
          sub_1C6BA08(&ManagementManager_TypeInfo);
          byte_4CB5247 = 1;
        }
        v289 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v289 = ManagementManager_TypeInfo;
        }
        v290 = v289->static_fields->isDuringStartup;
        v291 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v290 )
        {
          v292 = LocalizationManager__Get((System_String_o *)StringLiteral_2036/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
          v293 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v293, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( !v291 )
            goto LABEL_383;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v291, (System_String_o *)StringLiteral_1/*""*/, v292, v293, 0, 0);
        }
        else
        {
          v294 = LocalizationManager__Get((System_String_o *)StringLiteral_2037/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
          v295 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v295, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( !v291 )
            goto LABEL_383;
          CommonUI__OpenRetryDialog((CommonUI_o *)v291, (System_String_o *)StringLiteral_1/*""*/, v294, v295, 0, 0);
        }
LABEL_367:
        if ( _4__this->fields.isErrorDialog )
        {
          v296 = (Il2CppObject *)v5->fields._wait_5__10;
          v5->fields.__2__current = v296;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C6B9AC(p__2__current, (int32_t)v296, (int32_t)v2, v3);
          v16 = 7;
        }
        else
        {
LABEL_369:
          v297 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v297, 1.0, 0);
          v5->fields.__2__current = (Il2CppObject *)v297;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C6B9AC(p__2__current, (int32_t)v297, v298, v299);
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
      v194 = CatAndMouseGame__MouseGame3(text, 0);
      if ( System_String__IsNullOrEmpty(v194, 0) )
      {
        v233 = &StringLiteral_2384/*"AssetStorageList download error"*/;
        goto LABEL_341;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C6BAB0(char___TypeInfo, 1);
      if ( !this )
        goto LABEL_383;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_267;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v194 )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_64023356(v194, (System_Char_array *)this, 0);
      if ( !this )
        goto LABEL_383;
      v197 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25370/*"~"*/, 0) )
        goto LABEL_295;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C6BAB0(char___TypeInfo, 2);
      if ( !this )
        goto LABEL_383;
      v198 = (int)this->fields.__2__current;
      if ( !v198 )
        goto LABEL_267;
      LOWORD(this->fields.__4__this) = 13;
      if ( v198 == 1 )
        goto LABEL_267;
      WORD1(this->fields.__4__this) = 10;
      v199 = System_String__IndexOfAny((System_String_o *)v197, (System_Char_array *)this, 0);
      if ( v199 < 2 )
        goto LABEL_295;
      v200 = v199;
      v201 = System_String__Substring_64012732((System_String_o *)v197, 1, v199 - 1, 0);
      v202 = System_String__Substring((System_String_o *)v197, v200 + 1, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0);
      if ( !this )
        goto LABEL_383;
      v203 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, void *))this->klass[1]._1.properties)(
                                    this,
                                    v202,
                                    this->klass[1]._1.methods);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v204 = Crc32__Compute(v203, 0);
      if ( System_UInt32__Parse(v201, 0) != v204 )
      {
LABEL_295:
        v233 = &StringLiteral_2383/*"AssetStorageList download data error"*/;
LABEL_341:
        v277 = *v233;
        *v189 = (System_String_o *)*v233;
        goto LABEL_342;
      }
      if ( !v202 )
        goto LABEL_281;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C6BAB0(char___TypeInfo, 2);
      if ( !this )
        goto LABEL_383;
      v205 = (int)this->fields.__2__current;
      if ( !v205 || (LOWORD(this->fields.__4__this) = 13, v205 == 1) )
LABEL_267:
        sub_1C6BC68(this);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_64016000(v202, (System_Char_array *)this, 1, 0);
      if ( !this )
        goto LABEL_383;
      v206 = this->fields.__2__current;
      v207 = this;
      v208 = (_DWORD)v206 - 1;
      if ( (int)v206 < 1 )
        goto LABEL_281;
      v209 = 0;
      while ( 2 )
      {
        v210 = (System_String_o *)*((_QWORD *)&v207->fields.__4__this + v209);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C6BAB0(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_383;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_267;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v210 )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_64015884(v210, (System_Char_array *)this, 0);
        if ( !this )
          goto LABEL_383;
        v211 = this->fields.__2__current;
        v212 = this;
        if ( (int)v211 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_383;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1761/*"@"*/,
                                                      0);
          if ( !LODWORD(v212->fields.__2__current) )
            goto LABEL_267;
          v213 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v212->fields.__4__this;
          if ( !this )
            goto LABEL_383;
          if ( (v213 & 1) != 0 )
          {
            v215 = System_String__Substring((System_String_o *)this, 1, 0);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v212->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v212->fields.resourceNames;
            v217 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v215, v217, v214);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_281;
            goto LABEL_265;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_25370/*"~"*/,
                                                      0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v212->fields.__2__current) )
              goto LABEL_267;
            this = (AssetLoader__LoadDataCR_d__29_o *)v212->fields.__4__this;
            if ( !this )
              goto LABEL_383;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0);
            if ( (_DWORD)this != 1 )
            {
              v211 = v212->fields.__2__current;
              break;
            }
          }
LABEL_265:
          if ( v208 == v209 )
            goto LABEL_281;
          if ( (unsigned int)++v209 >= LODWORD(v207->fields.__2__current) )
            goto LABEL_267;
          continue;
        }
        break;
      }
      if ( (_DWORD)v211 != 5 )
        goto LABEL_281;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v212->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_383;
      v218 = System_String__Trim((System_String_o *)this, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v218, 0);
      if ( LODWORD(v212->fields.__2__current) <= 4 )
        goto LABEL_267;
      v219 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_265;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__IsSame((AssetData_o *)this, v212->fields._errorCode_5__6, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_265;
      v220 = _4__this->fields.data;
      if ( !v220 )
        goto LABEL_383;
      if ( v219 == v220->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4CB5247 )
        {
          sub_1C6BA08(&ManagementManager_TypeInfo);
          byte_4CB5247 = 1;
        }
        v221 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v221 = ManagementManager_TypeInfo;
        }
        v222 = v221->static_fields->isDuringStartup;
        v223 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v222 )
        {
          v224 = LocalizationManager__Get((System_String_o *)StringLiteral_2036/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
          v225 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v225, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( v223 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v223, (System_String_o *)StringLiteral_1/*""*/, v224, v225, 1, 0);
            goto LABEL_301;
          }
          goto LABEL_383;
        }
        v240 = LocalizationManager__Get((System_String_o *)StringLiteral_2037/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
        v241 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v241, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
        if ( !v223 )
          goto LABEL_383;
        CommonUI__OpenRetryDialog((CommonUI_o *)v223, (System_String_o *)StringLiteral_1/*""*/, v240, v241, 1, 0);
LABEL_301:
        if ( !_4__this->fields.isErrorDialog )
        {
          v5->fields._url_5__12 = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._url_5__12, 0, (int32_t)v2, v3);
          goto LABEL_303;
        }
        v271 = (Il2CppObject *)v5->fields._wait_5__10;
        v5->fields.__2__current = v271;
        p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
        sub_1C6B9AC(p__2__current, (int32_t)v271, (int32_t)v2, v3);
        v16 = 9;
        goto LABEL_370;
      }
LABEL_281:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4CB5247 )
      {
        sub_1C6BA08(&ManagementManager_TypeInfo);
        byte_4CB5247 = 1;
      }
      v226 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v226 = ManagementManager_TypeInfo;
      }
      v227 = v226->static_fields->isDuringStartup;
      v228 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v227 )
          goto LABEL_289;
LABEL_291:
        v229 = &StringLiteral_9238/*"NETWORK_ERROR_ASSET_UPDATE"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !v227 )
          goto LABEL_291;
LABEL_289:
        v229 = &StringLiteral_9239/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
      }
      v230 = LocalizationManager__Get((System_String_o *)*v229, 0);
      v231 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v231, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0);
      if ( !v228 )
        goto LABEL_383;
      CommonUI__OpenErrorDialog((CommonUI_o *)v228, (System_String_o *)StringLiteral_1/*""*/, v230, v231, 0, 0);
      return 0;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._req_5__16;
      v5->fields.__1__state = -1;
      if ( !this )
        goto LABEL_38;
      if ( !_4__this )
        goto LABEL_383;
      v24 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(
                                                  (UnityEngine_AssetBundleCreateRequest_o *)this,
                                                  0);
      if ( !v24 )
        goto LABEL_383;
      v25 = AssetData__SetAssetBundleData(v24, (UnityEngine_AssetBundle_o *)this, v5->fields.resourceNames, 0);
      v5->fields.__2__current = (Il2CppObject *)v25;
      p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
      sub_1C6B9AC(p__2__current, (int32_t)v25, v26, v27);
      v16 = 13;
      goto LABEL_370;
    case 0xD:
      v5->fields.__1__state = -1;
LABEL_38:
      v5->fields._req_5__16 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._req_5__16, 0, (int32_t)v2, v3);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB5255 & 1) == 0 )
  {
    sub_1C6BA08(&AssetLoader___c_TypeInfo);
    byte_4CB5255 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(AssetLoader___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)AssetLoader___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CB5256 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5256 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v3);
  return BYTE4(Instance[7].monitor) == 0;
}