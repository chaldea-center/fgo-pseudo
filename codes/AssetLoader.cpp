void __fastcall AssetLoader___ctor(AssetLoader_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AssetLoader__AddCallback(
        AssetLoader_o *this,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  if ( callbackFunc )
    AssetLoader__add_endCallback2(this, callbackFunc, method);
}


void __fastcall AssetLoader__AddEntry(AssetLoader_o *this, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1BCB254(0LL, method);
  AssetData__AddEntry(data, 0LL);
}


void __fastcall AssetLoader__AssetLoadLogError(
        AssetLoader_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 Instance; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  const MethodInfo *v50; // x3
  __int64 v51; // x21
  int32_t v52; // w1
  const MethodInfo *v53; // x3
  int32_t v54; // w1
  const MethodInfo *v55; // x3
  int32_t v56; // w1
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  const MethodInfo *v59; // x3
  int32_t v60; // w1
  const MethodInfo *v61; // x3
  int32_t v62; // w1
  const MethodInfo *v63; // x3
  int32_t v64; // w1
  const MethodInfo *v65; // x3
  int32_t v66; // w1
  const MethodInfo *v67; // x3
  int32_t v68; // w1
  const MethodInfo *v69; // x3
  int32_t v70; // w1
  const MethodInfo *v71; // x3
  int32_t v72; // w1
  const MethodInfo *v73; // x3
  int32_t v74; // w1
  const MethodInfo *v75; // x3
  int32_t v76; // w1
  const MethodInfo *v77; // x3
  int32_t v78; // w1
  const MethodInfo *v79; // x3
  int32_t v80; // w1
  const MethodInfo *v81; // x3
  int32_t v82; // w1
  const MethodInfo *v83; // x3
  int32_t v84; // w1
  const MethodInfo *v85; // x3
  int32_t v86; // w1
  const MethodInfo *v87; // x3
  int32_t v88; // w1
  const MethodInfo *v89; // x3
  int32_t v90; // w1
  const MethodInfo *v91; // x3
  int32_t v92; // w1
  const MethodInfo *v93; // x3
  int32_t v94; // w1
  const MethodInfo *v95; // x3
  int32_t v96; // w1
  const MethodInfo *v97; // x3
  int32_t v98; // w1
  const MethodInfo *v99; // x3
  int32_t v100; // w1
  const MethodInfo *v101; // x3
  int32_t v102; // w1
  const MethodInfo *v103; // x3
  int32_t v104; // w1
  const MethodInfo *v105; // x3
  int32_t v106; // w1
  const MethodInfo *v107; // x3
  int32_t v108; // w1
  const MethodInfo *v109; // x3
  int32_t v110; // w1
  const MethodInfo *v111; // x3
  int32_t v112; // w1
  const MethodInfo *v113; // x3
  int32_t v114; // w1
  const MethodInfo *v115; // x3
  int32_t v116; // w1
  const MethodInfo *v117; // x3
  int32_t v118; // w1
  const MethodInfo *v119; // x3
  int32_t v120; // w1
  const MethodInfo *v121; // x3
  int32_t v122; // w1
  const MethodInfo *v123; // x3
  int32_t v124; // w1
  __int64 v125; // x23
  __int64 v126; // x24
  CrashReporter_o *v127; // x19

  v3 = errorCode;
  if ( (byte_4B1B4E6 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_1BCAFF8(&string___TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_14042/*"The request timed out."*/, v7);
    sub_1BCAFF8(&StringLiteral_20870/*"java.net.SocketException"*/, v8);
    sub_1BCAFF8(&StringLiteral_12192/*"SSL CA certificate error"*/, v9);
    sub_1BCAFF8(&StringLiteral_1406/*"404: Not Found"*/, v10);
    sub_1BCAFF8(&StringLiteral_13983/*"The network connection was lost."*/, v11);
    sub_1BCAFF8(&StringLiteral_1400/*"400: Bad Request"*/, v12);
    sub_1BCAFF8(&StringLiteral_14776/*"Unable to complete SSL connection"*/, v13);
    sub_1BCAFF8(&StringLiteral_14806/*"Unable to read data"*/, v14);
    sub_1BCAFF8(&StringLiteral_18060/*"connect failed"*/, v15);
    sub_1BCAFF8(&StringLiteral_7197/*"HTTP/1.1 500 Internal Server Error"*/, v16);
    sub_1BCAFF8(&StringLiteral_20872/*"java.net.UnknownHostException"*/, v17);
    sub_1BCAFF8(&StringLiteral_1414/*"500: Internal Server Error"*/, v18);
    sub_1BCAFF8(&StringLiteral_1416/*"502:"*/, v19);
    sub_1BCAFF8(&StringLiteral_11238/*"Request timeout"*/, v20);
    sub_1BCAFF8(&StringLiteral_4626/*"Connection reset by peer"*/, v21);
    sub_1BCAFF8(&StringLiteral_4981/*"DLErrorType"*/, v22);
    sub_1BCAFF8(&StringLiteral_4980/*"DLErrorAsset"*/, v23);
    sub_1BCAFF8(&StringLiteral_1428/*"504: Gateway Timeout"*/, v24);
    sub_1BCAFF8(&StringLiteral_14977/*"Unknown Error"*/, v25);
    sub_1BCAFF8(&StringLiteral_1418/*"503 Auto retry count"*/, v26);
    sub_1BCAFF8(&StringLiteral_20854/*"java.io.EOFException"*/, v27);
    sub_1BCAFF8(&StringLiteral_20867/*"java.net.ConnectException"*/, v28);
    sub_1BCAFF8(&StringLiteral_1404/*"403: Forbidden"*/, v29);
    sub_1BCAFF8(&StringLiteral_4625/*"Connection refused"*/, v30);
    sub_1BCAFF8(&StringLiteral_7198/*"HTTP/1.1 504 Gateway Timeout"*/, v31);
    sub_1BCAFF8(&StringLiteral_1402/*"401: Authorization Required"*/, v32);
    sub_1BCAFF8(&StringLiteral_20855/*"java.io.IOException"*/, v33);
    sub_1BCAFF8(&StringLiteral_9381/*"No address associated with hostname"*/, v34);
    sub_1BCAFF8(&StringLiteral_20869/*"java.net.ProtocolException"*/, v35);
    sub_1BCAFF8(&StringLiteral_2362/*"AssetBundle file download time over"*/, v36);
    sub_1BCAFF8(&StringLiteral_1407/*"408: Request Time-out"*/, v37);
    sub_1BCAFF8(&StringLiteral_14426/*"Too many redirects"*/, v38);
    sub_1BCAFF8(&StringLiteral_12809/*"Software caused connection abort"*/, v39);
    sub_1BCAFF8(&StringLiteral_2361/*"AssetBundle file check sum error"*/, v40);
    sub_1BCAFF8(&StringLiteral_20868/*"java.net.NoRouteToHostException"*/, v41);
    sub_1BCAFF8(&StringLiteral_5208/*"Destination host has an erroneous SSL certificate"*/, v42);
    sub_1BCAFF8(&StringLiteral_4627/*"Connection timed out"*/, v43);
    sub_1BCAFF8(&StringLiteral_4215/*"Cannot resolve destination host"*/, v44);
    sub_1BCAFF8(&StringLiteral_20871/*"java.net.SocketTimeoutException"*/, v45);
    sub_1BCAFF8(&StringLiteral_2365/*"AssetLoadError"*/, v46);
    byte_4B1B4E6 = 1;
  }
  Instance = sub_1BCB0A0(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_58;
  v51 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v52 = StringLiteral_9381/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9381/*"No address associated with hostname"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(Instance + 32), v52, v49, v50);
  if ( *(_DWORD *)(v51 + 24) <= 1u )
    goto LABEL_47;
  v54 = StringLiteral_2362/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v51 + 40) = StringLiteral_2362/*"AssetBundle file download time over"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 40), v54, v49, v53);
  if ( *(_DWORD *)(v51 + 24) <= 2u )
    goto LABEL_47;
  v56 = StringLiteral_13983/*"The network connection was lost."*/;
  *(_QWORD *)(v51 + 48) = StringLiteral_13983/*"The network connection was lost."*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 48), v56, v49, v55);
  if ( *(_DWORD *)(v51 + 24) <= 3u )
    goto LABEL_47;
  v58 = StringLiteral_4626/*"Connection reset by peer"*/;
  *(_QWORD *)(v51 + 56) = StringLiteral_4626/*"Connection reset by peer"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 56), v58, v49, v57);
  if ( *(_DWORD *)(v51 + 24) <= 4u )
    goto LABEL_47;
  v60 = StringLiteral_12809/*"Software caused connection abort"*/;
  *(_QWORD *)(v51 + 64) = StringLiteral_12809/*"Software caused connection abort"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 64), v60, v49, v59);
  if ( *(_DWORD *)(v51 + 24) <= 5u )
    goto LABEL_47;
  v62 = StringLiteral_4627/*"Connection timed out"*/;
  *(_QWORD *)(v51 + 72) = StringLiteral_4627/*"Connection timed out"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 72), v62, v49, v61);
  if ( *(_DWORD *)(v51 + 24) <= 6u )
    goto LABEL_47;
  v64 = StringLiteral_4625/*"Connection refused"*/;
  *(_QWORD *)(v51 + 80) = StringLiteral_4625/*"Connection refused"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 80), v64, v49, v63);
  if ( *(_DWORD *)(v51 + 24) <= 7u )
    goto LABEL_47;
  v66 = StringLiteral_14042/*"The request timed out."*/;
  *(_QWORD *)(v51 + 88) = StringLiteral_14042/*"The request timed out."*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 88), v66, v49, v65);
  if ( *(_DWORD *)(v51 + 24) <= 8u )
    goto LABEL_47;
  v68 = StringLiteral_4215/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v51 + 96) = StringLiteral_4215/*"Cannot resolve destination host"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 96), v68, v49, v67);
  if ( *(_DWORD *)(v51 + 24) <= 9u )
    goto LABEL_47;
  v70 = StringLiteral_14776/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v51 + 104) = StringLiteral_14776/*"Unable to complete SSL connection"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 104), v70, v49, v69);
  if ( *(_DWORD *)(v51 + 24) <= 0xAu )
    goto LABEL_47;
  v72 = StringLiteral_14977/*"Unknown Error"*/;
  *(_QWORD *)(v51 + 112) = StringLiteral_14977/*"Unknown Error"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 112), v72, v49, v71);
  if ( *(_DWORD *)(v51 + 24) <= 0xBu )
    goto LABEL_47;
  v74 = StringLiteral_11238/*"Request timeout"*/;
  *(_QWORD *)(v51 + 120) = StringLiteral_11238/*"Request timeout"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 120), v74, v49, v73);
  if ( *(_DWORD *)(v51 + 24) <= 0xCu )
    goto LABEL_47;
  v76 = StringLiteral_2361/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v51 + 128) = StringLiteral_2361/*"AssetBundle file check sum error"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 128), v76, v49, v75);
  if ( *(_DWORD *)(v51 + 24) <= 0xDu )
    goto LABEL_47;
  v78 = StringLiteral_12192/*"SSL CA certificate error"*/;
  *(_QWORD *)(v51 + 136) = StringLiteral_12192/*"SSL CA certificate error"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 136), v78, v49, v77);
  if ( *(_DWORD *)(v51 + 24) <= 0xEu )
    goto LABEL_47;
  v80 = StringLiteral_7197/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v51 + 144) = StringLiteral_7197/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 144), v80, v49, v79);
  if ( *(_DWORD *)(v51 + 24) <= 0xFu )
    goto LABEL_47;
  v82 = StringLiteral_7198/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v51 + 152) = StringLiteral_7198/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 152), v82, v49, v81);
  if ( *(_DWORD *)(v51 + 24) <= 0x10u )
    goto LABEL_47;
  v84 = StringLiteral_5208/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v51 + 160) = StringLiteral_5208/*"Destination host has an erroneous SSL certificate"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 160), v84, v49, v83);
  if ( *(_DWORD *)(v51 + 24) <= 0x11u )
    goto LABEL_47;
  v86 = StringLiteral_14426/*"Too many redirects"*/;
  *(_QWORD *)(v51 + 168) = StringLiteral_14426/*"Too many redirects"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 168), v86, v49, v85);
  if ( *(_DWORD *)(v51 + 24) <= 0x12u )
    goto LABEL_47;
  v88 = StringLiteral_20854/*"java.io.EOFException"*/;
  *(_QWORD *)(v51 + 176) = StringLiteral_20854/*"java.io.EOFException"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 176), v88, v49, v87);
  if ( *(_DWORD *)(v51 + 24) <= 0x13u )
    goto LABEL_47;
  v90 = StringLiteral_20870/*"java.net.SocketException"*/;
  *(_QWORD *)(v51 + 184) = StringLiteral_20870/*"java.net.SocketException"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 184), v90, v49, v89);
  if ( *(_DWORD *)(v51 + 24) <= 0x14u )
    goto LABEL_47;
  v92 = StringLiteral_20871/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v51 + 192) = StringLiteral_20871/*"java.net.SocketTimeoutException"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 192), v92, v49, v91);
  if ( *(_DWORD *)(v51 + 24) <= 0x15u )
    goto LABEL_47;
  v94 = StringLiteral_20868/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v51 + 200) = StringLiteral_20868/*"java.net.NoRouteToHostException"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 200), v94, v49, v93);
  if ( *(_DWORD *)(v51 + 24) <= 0x16u )
    goto LABEL_47;
  v96 = StringLiteral_20855/*"java.io.IOException"*/;
  *(_QWORD *)(v51 + 208) = StringLiteral_20855/*"java.io.IOException"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 208), v96, v49, v95);
  if ( *(_DWORD *)(v51 + 24) <= 0x17u )
    goto LABEL_47;
  v98 = StringLiteral_20867/*"java.net.ConnectException"*/;
  *(_QWORD *)(v51 + 216) = StringLiteral_20867/*"java.net.ConnectException"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 216), v98, v49, v97);
  if ( *(_DWORD *)(v51 + 24) <= 0x18u )
    goto LABEL_47;
  v100 = StringLiteral_18060/*"connect failed"*/;
  *(_QWORD *)(v51 + 224) = StringLiteral_18060/*"connect failed"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 224), v100, v49, v99);
  if ( *(_DWORD *)(v51 + 24) <= 0x19u )
    goto LABEL_47;
  v102 = StringLiteral_20869/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v51 + 232) = StringLiteral_20869/*"java.net.ProtocolException"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 232), v102, v49, v101);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Au )
    goto LABEL_47;
  v104 = StringLiteral_20872/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v51 + 240) = StringLiteral_20872/*"java.net.UnknownHostException"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 240), v104, v49, v103);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Bu )
    goto LABEL_47;
  v106 = StringLiteral_1400/*"400: Bad Request"*/;
  *(_QWORD *)(v51 + 248) = StringLiteral_1400/*"400: Bad Request"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 248), v106, v49, v105);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Cu )
    goto LABEL_47;
  v108 = StringLiteral_1402/*"401: Authorization Required"*/;
  *(_QWORD *)(v51 + 256) = StringLiteral_1402/*"401: Authorization Required"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 256), v108, v49, v107);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Du )
    goto LABEL_47;
  v110 = StringLiteral_1404/*"403: Forbidden"*/;
  *(_QWORD *)(v51 + 264) = StringLiteral_1404/*"403: Forbidden"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 264), v110, v49, v109);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Eu )
    goto LABEL_47;
  v112 = StringLiteral_1406/*"404: Not Found"*/;
  *(_QWORD *)(v51 + 272) = StringLiteral_1406/*"404: Not Found"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 272), v112, v49, v111);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Fu )
    goto LABEL_47;
  v114 = StringLiteral_1407/*"408: Request Time-out"*/;
  *(_QWORD *)(v51 + 280) = StringLiteral_1407/*"408: Request Time-out"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 280), v114, v49, v113);
  if ( *(_DWORD *)(v51 + 24) <= 0x20u )
    goto LABEL_47;
  v116 = StringLiteral_1414/*"500: Internal Server Error"*/;
  *(_QWORD *)(v51 + 288) = StringLiteral_1414/*"500: Internal Server Error"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 288), v116, v49, v115);
  if ( *(_DWORD *)(v51 + 24) <= 0x21u )
    goto LABEL_47;
  v118 = StringLiteral_1416/*"502:"*/;
  *(_QWORD *)(v51 + 296) = StringLiteral_1416/*"502:"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 296), v118, v49, v117);
  if ( *(_DWORD *)(v51 + 24) <= 0x22u
    || (v120 = StringLiteral_1418/*"503 Auto retry count"*/,
        *(_QWORD *)(v51 + 304) = StringLiteral_1418/*"503 Auto retry count"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 304), v120, v49, v119),
        *(_DWORD *)(v51 + 24) <= 0x23u)
    || (v122 = StringLiteral_1428/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v51 + 312) = StringLiteral_1428/*"504: Gateway Timeout"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 312), v122, v49, v121),
        *(_DWORD *)(v51 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1BCB25C(Instance, v48, v49);
  }
  v124 = StringLiteral_14806/*"Unable to read data"*/;
  *(_QWORD *)(v51 + 320) = StringLiteral_14806/*"Unable to read data"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 320), v124, v49, v123);
  if ( (int)*(_QWORD *)(v51 + 24) < 1 )
  {
LABEL_48:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_57;
  }
  v125 = 0LL;
  v126 = (unsigned int)*(_QWORD *)(v51 + 24) - 1LL;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_58;
    Instance = System_String__Contains(v3, *(System_String_o **)(v51 + 32 + 8 * v125), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( v126 == v125 )
      goto LABEL_48;
    if ( ++v125 >= (unsigned __int64)*(unsigned int *)(v51 + 24) )
      goto LABEL_47;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v127 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, 0LL), !v127) )
  {
LABEL_58:
    sub_1BCB254(Instance, v48);
  }
  CrashReporter__AddCustomKey(v127, (System_String_o *)StringLiteral_4980/*"DLErrorAsset"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v125 >= *(_DWORD *)(v51 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4981/*"DLErrorType"*/,
    *(System_String_o **)(v51 + 32 + 8 * v125),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  v3 = (System_String_o *)StringLiteral_2365/*"AssetLoadError"*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)v3, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_4B1B4E3 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1B4E3 = 1;
  }
  endCallback = this->fields.endCallback;
  this->fields.isEndLoad = 1;
  if ( endCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetLoader_o *, _QWORD))endCallback->fields.m_target)(
      endCallback->fields.original_method_info,
      this,
      *(_QWORD *)&endCallback->fields.extra_arg);
  endCallback2 = this->fields.endCallback2;
  if ( endCallback2 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct AssetData_o *, _QWORD))endCallback2->fields.m_target)(
      endCallback2->fields.original_method_info,
      this->fields.data,
      *(_QWORD *)&endCallback2->fields.extra_arg);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetLoader__EndRetryDialog(AssetLoader_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    AssetLoader__Reboot(this, (const MethodInfo *)isDecide);
}


void __fastcall AssetLoader__EndWarningDialog(AssetLoader_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void __fastcall AssetLoader__Init(AssetLoader_o *this, AssetData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.data = data;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
}


bool __fastcall AssetLoader__IsSame(AssetLoader_o *this, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame(data, name, 0LL);
  return (char)data;
}


bool __fastcall AssetLoader__IsSame_39702540(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_39695164(data, type, name, 0LL);
  return (char)data;
}


System_Collections_IEnumerator_o *__fastcall AssetLoader__LoadDataCR(
        AssetLoader_o *this,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1B4E2 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames);
    byte_4B1B4E2 = 1;
  }
  v5 = sub_1BCB244(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)resourceNames, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  System_Byte_array *readData; // x20
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1B4E4 & 1) == 0 )
  {
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, method);
    byte_4B1B4E4 = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v4 = CatAndMouseGame__MouseGame4(readData, 0LL);
  this->fields._decData = v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._decData, (int32_t)v4, v5, v6);
}


void __fastcall AssetLoader__Reboot(AssetLoader_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  ManagementManager_c *v11; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1

  if ( (byte_4B1B4E5 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, method);
    sub_1BCAFF8(&ManagementManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6);
    byte_4B1B4E5 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.loader, 0, v8, v9);
  }
  this->fields.readData = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.readData, 0, v2, v3);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4B1B4DA )
  {
    sub_1BCAFF8(&ManagementManager_TypeInfo, v10);
    byte_4B1B4DA = 1;
  }
  v11 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v11 = ManagementManager_TypeInfo;
  }
  if ( v11->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_69931008(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v13);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
  }
}


void __fastcall AssetLoader__StartLoad(
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callbackFunc, (int32_t)resourceNames, method);
  v8 = (AssetData_o *)*(p_endCallback - 1);
  if ( !v8 )
    sub_1BCB254(0LL, v7);
  IsNeedUpdateVersion = AssetData__IsNeedUpdateVersion(v8, 0LL);
  this->fields.isDownload = IsNeedUpdateVersion;
  this->fields.isRequestDownload = IsNeedUpdateVersion;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
}


void __fastcall AssetLoader__abort_thread(AssetLoader_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Threading_Thread_o *threadDecrypt; // x0
  System_Threading_Thread_o **p_threadDecrypt; // x19
  __int64 v6; // x1

  p_threadDecrypt = &this->fields.threadDecrypt;
  threadDecrypt = this->fields.threadDecrypt;
  if ( threadDecrypt && !System_Threading_Thread__get_ThreadState(threadDecrypt, 0LL) )
  {
    if ( !*p_threadDecrypt )
      sub_1BCB254(0LL, v6);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_threadDecrypt, 0, v2, v3);
}


void __fastcall AssetLoader__add_endCallback(
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
  AssetLoader_LoadEndHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B1B4DE & 1) == 0 )
  {
    sub_1BCAFF8(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_4B1B4DE = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v6 = (System_Delegate_o *)endCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndHandler_c *)v8->klass != AssetLoader_LoadEndHandler_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCB514(v8);
  AssetLoader__remove_endCallback(v11, v12, v13);
}


void __fastcall AssetLoader__add_endCallback2(
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

  if ( (byte_4B1B4E0 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_4B1B4E0 = 1;
  }
  endCallback2 = this->fields.endCallback2;
  p_endCallback2 = &this->fields.endCallback2;
  v6 = (System_Delegate_o *)endCallback2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndDataHandler_c *)v8->klass != AssetLoader_LoadEndDataHandler_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCB514(v8);
  AssetLoader__remove_endCallback2(v11, v12, v13);
}


bool __fastcall AssetLoader__get_IsRequestDownload(AssetLoader_o *this, const MethodInfo *method)
{
  return this->fields.isRequestDownload;
}


int32_t __fastcall AssetLoader__get_LoadSize(AssetLoader_o *this, const MethodInfo *method)
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
  downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(loader, 0LL);
  v5 = this->fields.data;
  if ( !v5 )
LABEL_10:
    sub_1BCB254(this, method);
  v6 = downloadProgress * (float)v5->fields.size;
  if ( v6 == INFINITY )
    LODWORD(loader) = 0x80000000;
  else
    LODWORD(loader) = (int)v6;
  return (int)loader;
}


System_String_o *__fastcall AssetLoader__get_Name(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BCB254(this, method);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BCB254(this, method);
  return data->fields.size;
}


void __fastcall AssetLoader__remove_endCallback(
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

  if ( (byte_4B1B4DF & 1) == 0 )
  {
    sub_1BCAFF8(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_4B1B4DF = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = &this->fields.endCallback;
  v6 = (System_Delegate_o *)endCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndHandler_c *)v8->klass != AssetLoader_LoadEndHandler_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCB514(v8);
  AssetLoader__add_endCallback2(v11, v12, v13);
}


void __fastcall AssetLoader__remove_endCallback2(
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

  if ( (byte_4B1B4E1 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_4B1B4E1 = 1;
  }
  endCallback2 = this->fields.endCallback2;
  p_endCallback2 = &this->fields.endCallback2;
  v6 = (System_Delegate_o *)endCallback2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetLoader_LoadEndDataHandler_c *)v8->klass != AssetLoader_LoadEndDataHandler_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCB514(v8);
  AssetLoader__get_IsRequestDownload(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetLoader_LoadEndDataHandler___ctor(
        AssetLoader_LoadEndDataHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A14E40;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1BCB0B0(v6);
        v12 = sub_1BCB56C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_1A14F3C;
          else
            v9 = (Il2CppObject *)sub_1A14F00;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_1A14E7C;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1A14E50;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1A14E20;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A14DD8;
}


System_IAsyncResult_o *__fastcall AssetLoader_LoadEndDataHandler__BeginInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        AssetData_o *data,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  AssetData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = data;
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall AssetLoader_LoadEndDataHandler__Invoke(
        AssetLoader_LoadEndDataHandler_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    data,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetLoader_LoadEndHandler___ctor(
        AssetLoader_LoadEndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A14C50;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1BCB0B0(v6);
        v12 = sub_1BCB56C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_1A14D4C;
          else
            v9 = (Il2CppObject *)sub_1A14D10;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_1A14C8C;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1A14C60;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1A14C30;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A14BE8;
}


System_IAsyncResult_o *__fastcall AssetLoader_LoadEndHandler__BeginInvoke(
        AssetLoader_LoadEndHandler_o *this,
        AssetLoader_o *loader,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  AssetLoader_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = loader;
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall AssetLoader_LoadEndHandler__Invoke(
        AssetLoader_LoadEndHandler_o *this,
        AssetLoader_o *loader,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetLoader_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    loader,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall AssetLoader__LoadDataCR_d__29___ctor(
        AssetLoader__LoadDataCR_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetLoader__LoadDataCR_d__29__MoveNext(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  AssetLoader__LoadDataCR_d__29_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  struct AssetLoader_o *_4__this; // x20
  const MethodInfo *v58; // x1
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  CGThumbnailListItem_o *v60; // x20
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v63; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int v67; // w8
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  char v70; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Networking_DownloadHandler_o *v73; // x8
  uint32_t klass; // w8
  AssetData_o *v75; // x20
  System_Collections_IEnumerator_o *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x1
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  System_Byte_array *data; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  System_Byte_array *readData; // x22
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  float unscaledTime; // s8
  ManagerConfig_c *v96; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v98; // x23
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  const MethodInfo *v101; // x0
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  int64_t v106; // x23
  ManagerConfig_c *v107; // x0
  int32_t v108; // w1
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  CGThumbnailListItem_o *p_errorLocalizeCode_5__7; // x0
  int32_t v112; // w1
  System_String_o *Url; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  System_String_o *url_5__11; // x21
  struct AssetData_o *v117; // x8
  AssetLoader__LoadDataCR_d__29_o *v118; // x22
  bool v119; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v121; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v124; // x0
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__12; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v130; // s8
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  float v133; // s0
  bool v134; // zf
  float v135; // s8
  UnityEngine_Networking_DownloadHandler_o *v136; // x0
  __int64 v137; // x10
  UnityEngine_Networking_DownloadHandler_o *v138; // x22
  System_String_o *v139; // x0
  int v140; // w8
  System_String_o *v141; // x0
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  __int64 v144; // x2
  const MethodInfo *v145; // x3
  UnityEngine_Networking_DownloadHandler_c *v146; // x0
  __int64 (**image)(void); // x8
  __int64 v148; // x10
  UnityEngine_Networking_DownloadHandler_c *v149; // x8
  AssetLoader__LoadDataCR_d__29_o *v150; // x22
  System_String_o *v151; // x0
  System_String_o *v152; // x0
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  int32_t v155; // w1
  CGThumbnailListItem_o *p_errorCode_5__6; // x0
  System_String_o *v157; // x22
  System_String_o *v158; // x0
  System_String_o *v159; // x0
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v163; // x23
  Il2CppObject *v164; // x23
  AssetLoader__LoadDataCR_d__29_o *v165; // x23
  System_String_o *v166; // x24
  int v167; // w8
  System_String_o *v168; // x0
  System_String_o *v169; // x0
  const MethodInfo *v170; // x3
  AssetLoader__LoadDataCR_d__29_o *v171; // x22
  int32_t v172; // w1
  const MethodInfo *v173; // x3
  struct System_String_o *v174; // x1
  const MethodInfo *v175; // x3
  int32_t v176; // w1
  struct AssetData_o *v177; // x8
  const MethodInfo *v178; // x3
  const MethodInfo *v179; // x3
  int32_t v180; // w1
  const MethodInfo *v181; // x3
  const MethodInfo *v182; // x3
  int32_t v183; // w1
  System_String_o *v184; // x0
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  ManagerConfig_c *v187; // x0
  struct AssetData_o *v188; // x8
  CommonUI_o *v189; // x21
  System_String_o *v190; // x22
  ErrorDialog_ClickDelegate_o *v191; // x23
  ManagementManager_c *v192; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v196; // x22
  System_String_o *v197; // x21
  System_String_o *v198; // x23
  System_String_o *v199; // x23
  ErrorDialog_ClickDelegate_o *v200; // x24
  System_String_o *v201; // x23
  System_String_o *v202; // x23
  ErrorDialog_ClickDelegate_o *v203; // x24
  UnityEngine_Networking_UnityWebRequest_o *v204; // x0
  int32_t v205; // w2
  const MethodInfo *v206; // x3
  int32_t v207; // w2
  const MethodInfo *v208; // x3
  AssetManager_c *v209; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v211; // w2
  const MethodInfo *v212; // x3
  System_String_o *v213; // x21
  System_String_o *UrlString; // x0
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  AssetLoader__LoadDataCR_d__29_o **v217; // x21
  float v218; // s8
  ManagerConfig_c *v219; // x0
  float v220; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v221; // x0
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  float v226; // s0
  float v227; // s9
  float v228; // s8
  float v229; // s0
  float v230; // s8
  System_String_o **v231; // x21
  UnityEngine_Networking_UnityWebRequest_o **v232; // x22
  System_String_o *v233; // x0
  System_String_o *text; // x23
  System_String_o *v235; // x23
  int32_t v236; // w2
  const MethodInfo *v237; // x3
  AssetLoader__LoadDataCR_d__29_o *v238; // x23
  int v239; // w8
  int32_t v240; // w0
  int32_t v241; // w25
  System_String_o *v242; // x24
  System_String_o *v243; // x23
  System_Byte_array *v244; // x25
  uint32_t v245; // w25
  int v246; // w8
  Il2CppObject *v247; // x8
  AssetLoader__LoadDataCR_d__29_o *v248; // x21
  int v249; // w25
  int v250; // w29
  System_String_o *v251; // x22
  Il2CppObject *v252; // x8
  AssetLoader__LoadDataCR_d__29_o *v253; // x22
  char v254; // w8
  const MethodInfo *v255; // x2
  System_String_o *v256; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v258; // x22
  System_String_o *v259; // x0
  int v260; // w23
  struct AssetData_o *v261; // x8
  ManagementManager_c *v262; // x0
  _BOOL4 v263; // w22
  Il2CppObject *v264; // x21
  System_String_o *v265; // x22
  ErrorDialog_ClickDelegate_o *v266; // x23
  ManagementManager_c *v267; // x0
  _BOOL4 v268; // w21
  Il2CppObject *v269; // x19
  __int64 *v270; // x8
  System_String_o *v271; // x21
  ErrorDialog_ClickDelegate_o *v272; // x22
  bool result; // w0
  __int64 *v274; // x8
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v276; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v278; // x20
  int32_t v279; // w2
  const MethodInfo *v280; // x3
  System_String_o *v281; // x22
  ErrorDialog_ClickDelegate_o *v282; // x23
  int32_t v283; // w2
  const MethodInfo *v284; // x3
  int32_t v285; // w2
  const MethodInfo *v286; // x3
  Il2CppObject *_2__current; // x21
  AssetData_o *v288; // x22
  AssetLoader__LoadDataCR_d__29_o **v289; // x21
  __int64 v290; // x10
  __int64 v291; // x10
  System_Byte_array *v292; // x0
  UnityEngine_AssetBundleCreateRequest_o *v293; // x0
  int32_t v294; // w2
  const MethodInfo *v295; // x3
  int32_t v296; // w2
  const MethodInfo *v297; // x3
  Il2CppObject *req_5__13; // x1
  int32_t v299; // w2
  const MethodInfo *v300; // x3
  AssetLoader___c_c *v301; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v303; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int32_t v305; // w2
  const MethodInfo *v306; // x3
  UnityEngine_WaitUntil_o *v307; // x21
  int32_t v308; // w2
  const MethodInfo *v309; // x3
  Il2CppObject *v310; // x1
  Il2CppObject *v311; // x1
  int32_t v312; // w2
  const MethodInfo *v313; // x3
  int32_t v314; // w2
  const MethodInfo *v315; // x3
  Il2CppObject *v316; // x1
  System_String_o *v317; // x1
  int32_t v318; // w2
  const MethodInfo *v319; // x3
  ManagerConfig_c *v320; // x0
  struct AssetData_o *v321; // x8
  CommonUI_o *v322; // x22
  System_String_o *v323; // x21
  ErrorDialog_ClickDelegate_o *v324; // x23
  Il2CppObject *v325; // x1
  ManagementManager_c *v326; // x0
  _BOOL4 v327; // w22
  Il2CppObject *v328; // x21
  System_String_o *v329; // x22
  ErrorDialog_ClickDelegate_o *v330; // x23
  System_String_o *v331; // x22
  ErrorDialog_ClickDelegate_o *v332; // x23
  Il2CppObject *v333; // x1
  UnityEngine_WaitForSeconds_o *v334; // x20
  int32_t v335; // w2
  const MethodInfo *v336; // x3
  UnityEngine_Networking_DownloadHandler_o *v337; // x0
  ManagerConfig_c *v338; // x0
  struct ManagerConfig_StaticFields *v339; // x8
  Il2CppObject *wait_5__10; // x1
  CGThumbnailListItem_o *v341; // x19
  ManagerConfig_c *v342; // x0
  struct ManagerConfig_StaticFields *v343; // x8
  Il2CppObject *v344; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  __int64 v347; // [xsp+18h] [xbp-88h]
  __int64 v348; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-78h] BYREF

  v4 = this;
  if ( (byte_4B1B4E9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetLoader_EndRebootDialog__, method);
    sub_1BCAFF8(&Method_AssetLoader_EndRetryDialog__, v5);
    sub_1BCAFF8(&Method_AssetLoader_EndWarningDialog__, v6);
    sub_1BCAFF8(&AssetManager_TypeInfo, v7);
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, v8);
    sub_1BCAFF8(&char___TypeInfo, v9);
    sub_1BCAFF8(&ErrorDialog_ClickDelegate_TypeInfo, v10);
    sub_1BCAFF8(&CommonServicePluginScript_TypeInfo, v11);
    sub_1BCAFF8(&Crc32_TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v14);
    sub_1BCAFF8(&DownloadHandlerDecryptFileWithCrc_TypeInfo, v15);
    sub_1BCAFF8(&DownloadHandlerFileWithCrcCheck_TypeInfo, v16);
    sub_1BCAFF8(&System_Func_bool__TypeInfo, v17);
    sub_1BCAFF8(&System_IO_IOException_TypeInfo, v18);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v19);
    sub_1BCAFF8(&ManagementManager_TypeInfo, v20);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v21);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v22);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1BCAFF8(&string___TypeInfo, v24);
    sub_1BCAFF8(&Method_AssetLoader___c__LoadDataCR_b__29_0__, v25);
    sub_1BCAFF8(&AssetLoader___c_TypeInfo, v26);
    sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v27);
    sub_1BCAFF8(&UnityEngine_WaitForSeconds_TypeInfo, v28);
    sub_1BCAFF8(&UnityEngine_WaitUntil_TypeInfo, v29);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v30);
    sub_1BCAFF8(&StringLiteral_9171/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/, v31);
    sub_1BCAFF8(&StringLiteral_7194/*"HTTP"*/, v32);
    sub_1BCAFF8(&StringLiteral_5248/*"Disk full"*/, v33);
    sub_1BCAFF8(&StringLiteral_2379/*"AssetStorageList download time over"*/, v34);
    sub_1BCAFF8(&StringLiteral_9180/*"NETWORK_ERROR_DISK_FULL"*/, v35);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v36);
    sub_1BCAFF8(&StringLiteral_2366/*"AssetName : "*/, v37);
    sub_1BCAFF8(&StringLiteral_757/*")\n\n503 Auto retry count "*/, v38);
    sub_1BCAFF8(&StringLiteral_760/*")\nfile crc ("*/, v39);
    sub_1BCAFF8(&StringLiteral_1417/*"503"*/, v40);
    sub_1BCAFF8(&StringLiteral_2033/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v41);
    sub_1BCAFF8(&StringLiteral_15795/*"[FFFF80]Download error for debug"*/, v42);
    sub_1BCAFF8(&StringLiteral_2376/*"AssetStorageList download data error"*/, v43);
    sub_1BCAFF8(&StringLiteral_25039/*"~"*/, v44);
    sub_1BCAFF8(&StringLiteral_12247/*"STATUS"*/, v45);
    sub_1BCAFF8(&StringLiteral_756/*")\n\n"*/, v46);
    sub_1BCAFF8(&StringLiteral_9170/*"NETWORK_ERROR_ASSET_UPDATE"*/, v47);
    sub_1BCAFF8(&StringLiteral_649/*"("*/, v48);
    sub_1BCAFF8(&StringLiteral_758/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v49);
    sub_1BCAFF8(&StringLiteral_754/*")"*/, v50);
    sub_1BCAFF8(&StringLiteral_18901/*"error "*/, v51);
    sub_1BCAFF8(&StringLiteral_1760/*"@"*/, v52);
    sub_1BCAFF8(&StringLiteral_2034/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v53);
    sub_1BCAFF8(&StringLiteral_2377/*"AssetStorageList download error"*/, v54);
    sub_1BCAFF8(&StringLiteral_759/*")\n\nAssetBundle file download time over"*/, v55);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v56);
    byte_4B1B4E9 = 1;
  }
  v348 = 0LL;
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_372;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_372;
      v4->fields._isEncrypted_5__2 = AssetData__get_IsAssetBundle((AssetData_o *)this, 0LL);
      v4->fields._autoRetryCount_5__3 = 0;
      goto LABEL_58;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_77;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_372;
      goto LABEL_147;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_172;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_372;
      goto LABEL_171;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_195;
    case 6:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_372;
      goto LABEL_341;
    case 7:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_372;
      goto LABEL_356;
    case 8:
      v4->fields._asyncOperater_5__12 = 0LL;
      v4->fields.__1__state = -1;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12, 0, (int32_t)v2, v3);
      goto LABEL_188;
    case 9:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_372;
      goto LABEL_292;
    case 0xA:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_22;
      goto LABEL_372;
    case 0xB:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_372;
      p_loader = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_372;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(error, 0LL);
      if ( !*p_loader )
        goto LABEL_372;
      v70 = (char)this;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
      if ( downloadHandler )
      {
        methodPtr_low = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(downloadHandler->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[methodPtr_low - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v73 = downloadHandler;
          else
            v73 = 0LL;
          if ( (v70 & 1) != 0 )
            goto LABEL_31;
LABEL_46:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_372;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v83, v84);
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !this )
            goto LABEL_372;
          AssetData__ResetVersion((AssetData_o *)this, 0LL);
          goto LABEL_58;
        }
      }
      v73 = 0LL;
      if ( (v70 & 1) == 0 )
        goto LABEL_46;
LABEL_31:
      if ( v73 )
      {
        klass = (uint32_t)v73[1].klass;
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
        if ( !*p_loader )
          goto LABEL_372;
        this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                    0LL);
        if ( !this )
          goto LABEL_372;
        data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        _4__this->fields.readData = data;
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.readData, (int32_t)data, v86, v87);
        readData = _4__this->fields.readData;
        if ( !Crc32_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
        klass = Crc32__Compute(readData, 0LL);
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_372;
      if ( klass == this->fields._autoRetryCount_5__3 )
        goto LABEL_297;
      *(_WORD *)&_4__this->fields.isRequestDownload = 257;
      AssetData__ResetVersion((AssetData_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_372;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      _4__this->fields.loader = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v89, v90);
      _4__this->fields.readData = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v91, v92);
LABEL_58:
      while ( 1 )
      {
        _4__this->fields.readData = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        if ( _4__this->fields.isDownload )
          break;
LABEL_295:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
        if ( !this )
          goto LABEL_372;
        if ( SLODWORD(this->fields._loadProgress_5__9) >= 1 )
        {
          if ( v4->fields._isEncrypted_5__2 )
          {
LABEL_22:
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_372;
            LoadRequest = AssetData__GetLoadRequest((AssetData_o *)this, 0LL);
            _4__this->fields.loader = LoadRequest;
            v60 = (CGThumbnailListItem_o *)&_4__this->fields.loader;
            sub_1BCAF9C(v60, (int32_t)LoadRequest, v61, v62);
            this = (AssetLoader__LoadDataCR_d__29_o *)v60->klass;
            if ( !v60->klass )
              goto LABEL_372;
            v63 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0LL);
            v4->fields.__2__current = (Il2CppObject *)v63;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BCAF9C(p__2__current, (int32_t)v63, v65, v66);
            v67 = 11;
          }
          else
          {
            v301 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v301 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v301->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v301->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v301);
                v301 = AssetLoader___c_TypeInfo;
              }
              v303 = (Il2CppObject *)v301->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(_9__29_0, v303, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0LL);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v305, v306);
            }
            v307 = (UnityEngine_WaitUntil_o *)sub_1BCB244(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v307, _9__29_0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v307;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BCAF9C(p__2__current, (int32_t)v307, v308, v309);
            v67 = 10;
          }
          goto LABEL_359;
        }
LABEL_297:
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
LABEL_301:
        v288 = _4__this->fields.data;
        if ( !v288 )
          goto LABEL_372;
        if ( v288->fields.entryCount >= 1 )
        {
          v289 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v4->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_372;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0LL);
            if ( !this
              || (v290 = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v290)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v290 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v289;
              if ( !*v289 )
                goto LABEL_372;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_372;
              v291 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v291
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v291 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_372;
              }
            }
            v292 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v293 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v292, 0LL);
            v4->fields._req_5__13 = v293;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._req_5__13, (int32_t)v293, v294, v295);
            this = *v289;
            if ( !*v289 )
              goto LABEL_372;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v289 = 0LL;
            sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v296, v297);
            req_5__13 = (Il2CppObject *)v4->fields._req_5__13;
            v4->fields.__2__current = req_5__13;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BCAF9C(p__2__current, (int32_t)req_5__13, v299, v300);
            v67 = 12;
            goto LABEL_359;
          }
          if ( !this )
            goto LABEL_372;
          v337 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v288, v337, 0LL);
        }
LABEL_39:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v80, v81);
        }
        _4__this->fields.readData = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        AssetLoader__EndLoad(_4__this, v82);
        return 0;
      }
      *(_WORD *)&v4->fields._isAutoRetry_5__4 = 0;
      v4->fields._errorCode_5__6 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, 0, (int32_t)v2, v3);
      v4->fields._errorLocalizeCode_5__7 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__7, 0, v93, v94);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v96 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v96 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v96->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__9 = 0.0;
      v4->fields._requestTime_5__8 = unscaledTime + TIMEOUT;
      v98 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v98, 0LL);
      v4->fields._wait_5__10 = v98;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._wait_5__10, (int32_t)v98, v99, v100);
      Path = AssetStorageCache__GetPath(v101);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v106 = FreeSize;
        v107 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v107 = ManagerConfig_TypeInfo;
        }
        if ( v106 < v107->static_fields->LIMIT_FREE_SIZE )
        {
          _4__this->fields.isErrorDialog = 1;
          v108 = StringLiteral_5248/*"Disk full"*/;
          v4->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5248/*"Disk full"*/;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, v108, v104, v105);
          p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__7;
          v112 = StringLiteral_9180/*"NETWORK_ERROR_DISK_FULL"*/;
          v4->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9180/*"NETWORK_ERROR_DISK_FULL"*/;
          goto LABEL_140;
        }
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_372;
      Url = AssetData__get_Url((AssetData_o *)this, 0LL);
      v4->fields._url_5__11 = Url;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._url_5__11, (int32_t)Url, v114, v115);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_372;
      url_5__11 = v4->fields._url_5__11;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, 0LL);
      v117 = _4__this->fields.data;
      v118 = this;
      if ( v4->fields._isEncrypted_5__2 )
      {
        if ( !v117 )
          goto LABEL_372;
        v119 = v117->fields.entryCount > 0;
      }
      else
      {
        if ( !v117 )
          goto LABEL_372;
        v119 = 0;
      }
      Key = AssetData__get_Key(_4__this->fields.data, 0LL);
      v121 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, (System_String_o *)v118, v119, Key, 0LL);
      _4__this->fields.loader = v121;
      sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)v121, v122, v123);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_372;
      v124 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v4->fields._asyncOperater_5__12 = v124;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12, (int32_t)v124, v125, v126);
LABEL_77:
      p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v4->fields._asyncOperater_5__12;
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
      if ( !this )
LABEL_372:
        sub_1BCB254(this, method);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                                  (UnityEngine_AsyncOperation_o *)this,
                                                  0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = *p_asyncOperater_5__12;
        if ( !*p_asyncOperater_5__12 )
          goto LABEL_372;
        progress = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        loadProgress_5__9 = v4->fields._loadProgress_5__9;
        v130 = progress;
        v133 = UnityEngine_Time__get_unscaledTime(0LL);
        v134 = v130 == loadProgress_5__9;
        v135 = v133;
        if ( !v134 )
        {
          v338 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v338 = ManagerConfig_TypeInfo;
          }
          v339 = v338->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
          v4->fields._requestTime_5__8 = v135 + v339->TIMEOUT;
          if ( !this )
            goto LABEL_372;
          v4->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
LABEL_366:
          wait_5__10 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = wait_5__10;
          v341 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BCAF9C(v341, (int32_t)wait_5__10, v131, v132);
          result = 1;
          LODWORD(v341[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
        if ( v133 < v4->fields._requestTime_5__8 )
          goto LABEL_366;
      }
      if ( !_4__this )
        goto LABEL_372;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_372;
      v136 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      if ( v136
        && (v137 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v136->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v137) )
      {
        v138 = (DownloadHandlerFileWithCrcCheck_c *)v136->klass->_2.typeHierarchy[v137 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
             ? v136
             : 0LL;
      }
      else
      {
        v138 = 0LL;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_372;
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v141 = System_String__Concat_62488672(
                 (System_String_o *)StringLiteral_649/*"("*/,
                 v4->fields._url_5__11,
                 (System_String_o *)StringLiteral_759/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        v4->fields._errorCode_5__6 = v141;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v141, v142, v143);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_372;
        UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        if ( v138 )
          DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v138, 0LL);
        goto LABEL_139;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_372;
      v139 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      if ( System_String__IsNullOrEmpty(v139, 0LL) )
      {
        if ( !v138 )
        {
          v140 = 0;
LABEL_126:
          HIDWORD(v348) = v140;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
          if ( !this )
            goto LABEL_372;
          if ( v140 == this->fields._autoRetryCount_5__3 )
          {
            AssetData__UpdateVersion((AssetData_o *)this, 0LL);
            _4__this->fields.isDownload = 0;
          }
          else
          {
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCB0A0(string___TypeInfo, 7LL);
            if ( !this )
              goto LABEL_372;
            v171 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_258;
            v172 = StringLiteral_649/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_649/*"("*/;
            sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__4__this, v172, v144, v170);
            if ( LODWORD(v171->fields.__2__current) <= 1 )
              goto LABEL_258;
            v174 = v4->fields._url_5__11;
            v171->fields.resourceNames = (struct System_String_array *)v174;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v171->fields.resourceNames, (int32_t)v174, v144, v173);
            if ( LODWORD(v171->fields.__2__current) <= 2 )
              goto LABEL_258;
            v176 = StringLiteral_758/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v171->fields._isEncrypted_5__2 = StringLiteral_758/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v171->fields._isEncrypted_5__2, v176, v144, v175);
            v177 = _4__this->fields.data;
            if ( !v177 )
              goto LABEL_372;
            LODWORD(v348) = v177->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v348, 0LL);
            if ( LODWORD(v171->fields.__2__current) <= 3 )
              goto LABEL_258;
            *(_QWORD *)&v171->fields._isAutoRetry_5__4 = this;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v171->fields._isAutoRetry_5__4, (int32_t)this, v144, v178);
            if ( LODWORD(v171->fields.__2__current) <= 4 )
              goto LABEL_258;
            v180 = StringLiteral_760/*")\nfile crc ("*/;
            v171->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_760/*")\nfile crc ("*/;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v171->fields._errorCode_5__6, v180, v144, v179);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v348 + 4, 0LL);
            if ( LODWORD(v171->fields.__2__current) <= 5 )
              goto LABEL_258;
            v171->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v171->fields._errorLocalizeCode_5__7, (int32_t)this, v144, v181);
            if ( LODWORD(v171->fields.__2__current) <= 6 )
              goto LABEL_258;
            v183 = StringLiteral_754/*")"*/;
            *(_QWORD *)&v171->fields._requestTime_5__8 = StringLiteral_754/*")"*/;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v171->fields._requestTime_5__8, v183, v144, v182);
            v184 = System_String__Concat_62490940((System_String_array *)v171, 0LL);
            v4->fields._errorCode_5__6 = v184;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v184, v185, v186);
            v4->fields._isCrcError_5__5 = 1;
          }
          goto LABEL_139;
        }
        if ( !v138[4].klass )
        {
          v140 = (int)v138[1].klass;
          goto LABEL_126;
        }
      }
      else if ( !v138 )
      {
LABEL_109:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_372;
        v157 = v4->fields._url_5__11;
        v158 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v159 = System_String__Concat_62490676(
                 (System_String_o *)StringLiteral_649/*"("*/,
                 v157,
                 (System_String_o *)StringLiteral_756/*")\n\n"*/,
                 v158,
                 0LL);
        v4->fields._errorCode_5__6 = v159;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v159, v160, v161);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_372;
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                            0LL);
        if ( !ResponseHeaders )
          goto LABEL_139;
        v163 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
               (const MethodInfo_3385A48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v163,
                (Il2CppObject *)StringLiteral_12247/*"STATUS"*/,
                &value,
                (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_139;
        }
        v164 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCB0A0(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_372;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v164 )
          goto LABEL_372;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62499616(
                                                    (System_String_o *)v164,
                                                    (System_Char_array *)this,
                                                    1,
                                                    0LL);
        if ( !this )
          goto LABEL_372;
        v165 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_139;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_372;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_7194/*"HTTP"*/,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_139;
        if ( LODWORD(v165->fields.__2__current) <= 1 )
          goto LABEL_258;
        this = (AssetLoader__LoadDataCR_d__29_o *)v165->fields.resourceNames;
        if ( !this )
          goto LABEL_372;
        if ( !System_String__Equals_62485728((System_String_o *)this, (System_String_o *)StringLiteral_1417/*"503"*/, 0LL) )
          goto LABEL_139;
        v166 = v4->fields._url_5__11;
        v167 = v4->fields._autoRetryCount_5__3 + 1;
        v4->fields._isAutoRetry_5__4 = 1;
        v4->fields._autoRetryCount_5__3 = v167;
        v168 = System_Int32__ToString((int)v4 + 52, 0LL);
        v169 = System_String__Concat_62490676(
                 (System_String_o *)StringLiteral_649/*"("*/,
                 v166,
                 (System_String_o *)StringLiteral_757/*")\n\n503 Auto retry count "*/,
                 v168,
                 0LL);
        v155 = (int)v169;
        v4->fields._errorCode_5__6 = v169;
        p_errorCode_5__6 = (CGThumbnailListItem_o *)&v4->fields._errorCode_5__6;
        goto LABEL_108;
      }
      DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v138, 0LL);
      v146 = v138[4].klass;
      if ( !v146 )
        goto LABEL_109;
      image = (__int64 (**)(void))v146->_1.image;
      v148 = LOBYTE(System_IO_IOException_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *((unsigned __int8 *)v146->_1.image + 304) >= (unsigned int)v148
        && *((System_IO_IOException_c **)image[25] + v148 - 1) == System_IO_IOException_TypeInfo )
      {
        _4__this->fields.isErrorDialog = 1;
        v152 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v146->_1.image
                                   + 49))(
                                    v146,
                                    *((_QWORD *)v146->_1.image + 50));
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)image[45]();
        v149 = v138[4].klass;
        if ( !v149 )
          goto LABEL_372;
        v150 = this;
        v151 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v149->_1.image
                                   + 49))(
                                    v149,
                                    *((_QWORD *)v149->_1.image + 50));
        v152 = System_String__Concat_62490676(
                 (System_String_o *)StringLiteral_18901/*"error "*/,
                 (System_String_o *)v150,
                 (System_String_o *)StringLiteral_113/*" "*/,
                 v151,
                 0LL);
      }
      v155 = (int)v152;
      v4->fields._errorCode_5__6 = v152;
      p_errorCode_5__6 = (CGThumbnailListItem_o *)&v4->fields._errorCode_5__6;
LABEL_108:
      sub_1BCAF9C(p_errorCode_5__6, v155, v153, v154);
LABEL_139:
      v4->fields._url_5__11 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._url_5__11, 0, v144, v145);
      p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12;
      v112 = 0;
      v4->fields._asyncOperater_5__12 = 0LL;
LABEL_140:
      sub_1BCAF9C(p_errorLocalizeCode_5__7, v112, v109, v110);
      method = (const MethodInfo *)v4->fields._errorCode_5__6;
      if ( method )
      {
        AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
        v187 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v187 = ManagerConfig_TypeInfo;
        }
        if ( v187->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v188 = _4__this->fields.data;
          if ( !v188 )
            goto LABEL_372;
          v189 = (CommonUI_o *)this;
          v190 = System_String__Concat_62490676(
                   (System_String_o *)StringLiteral_2366/*"AssetName : "*/,
                   v188->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v4->fields._errorCode_5__6,
                   0LL);
          v191 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v191, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v189 )
            goto LABEL_372;
          v347 &= 0xFFFFFFFF00000000LL;
          *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
          LODWORD(effectDistance.fields.value.fields.y) = v347;
          CommonUI__OpenWarningDialog(
            v189,
            (System_String_o *)StringLiteral_15795/*"[FFFF80]Download error for debug"*/,
            v190,
            v191,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_147:
          if ( _4__this->fields.isErrorDialog )
          {
            v310 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v310;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BCAF9C(p__2__current, (int32_t)v310, (int32_t)v2, v3);
            v67 = 2;
            goto LABEL_359;
          }
        }
        if ( v4->fields._isAutoRetry_5__4 )
        {
          autoRetryCount_5__3 = v4->fields._autoRetryCount_5__3;
          v276 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v276 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v276->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v278 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v278, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v278;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BCAF9C(p__2__current, (int32_t)v278, v279, v280);
          v67 = 3;
          goto LABEL_359;
        }
        if ( !v4->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          if ( !byte_4B1B4DA )
          {
            sub_1BCAFF8(&ManagementManager_TypeInfo, method);
            byte_4B1B4DA = 1;
          }
          v192 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v192 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v192->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v4->fields._errorLocalizeCode_5__7;
          v196 = (CommonUI_o *)Instance;
          v197 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v198 = v4->fields._errorLocalizeCode_5__7;
            else
              v198 = (System_String_o *)StringLiteral_2033/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v199 = LocalizationManager__Get(v198, 0LL);
            v200 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v200, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v196 )
              goto LABEL_372;
            CommonUI__OpenRetryBootDialog(v196, v197, v199, v200, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v201 = v4->fields._errorLocalizeCode_5__7;
            else
              v201 = (System_String_o *)StringLiteral_2034/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v202 = LocalizationManager__Get(v201, 0LL);
            v203 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v203, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v196 )
              goto LABEL_372;
            CommonUI__OpenRetryDialog(v196, v197, v202, v203, 1, 0LL);
          }
LABEL_171:
          if ( _4__this->fields.isErrorDialog )
          {
            v311 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v311;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BCAF9C(p__2__current, (int32_t)v311, (int32_t)v2, v3);
            v67 = 4;
            goto LABEL_359;
          }
        }
      }
LABEL_172:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B17950 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, method);
        byte_4B17950 = 1;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      }
      if ( !_4__this )
        goto LABEL_372;
      if ( LOBYTE(this[1].fields._errorCode_5__6[6].klass) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_372;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v312, v313);
        _4__this->fields.readData = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v314, v315);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v4->fields._isEncrypted_5__2 )
        goto LABEL_301;
      v204 = _4__this->fields.loader;
      if ( v204 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v204, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v205, v206);
        _4__this->fields.readData = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v207, v208);
      }
      if ( !v4->fields._isCrcError_5__5 )
      {
LABEL_294:
        v4->fields._errorCode_5__6 = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, 0, (int32_t)v2, v3);
        v4->fields._errorLocalizeCode_5__7 = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__7, 0, v283, v284);
        v4->fields._wait_5__10 = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._wait_5__10, 0, v285, v286);
        goto LABEL_295;
      }
      v209 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v209);
      v4->fields._url_5__11 = ConfigFileAddress;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._url_5__11, (int32_t)ConfigFileAddress, v211, v212);
LABEL_188:
      v213 = v4->fields._url_5__11;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v213, v58);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_372;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v217 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)this, v215, v216);
      v218 = UnityEngine_Time__get_unscaledTime(0LL);
      v219 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v219 = ManagerConfig_TypeInfo;
      }
      v220 = v219->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__9 = 0.0;
      v4->fields._requestTime_5__8 = v218 + v220;
      this = *v217;
      if ( !*v217 )
        goto LABEL_372;
      v221 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v4->fields._asyncOperater_5__12 = v221;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12, (int32_t)v221, v222, v223);
LABEL_195:
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
      if ( !this )
        goto LABEL_372;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
        if ( !this )
          goto LABEL_372;
        v226 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v227 = v4->fields._loadProgress_5__9;
        v228 = v226;
        v229 = UnityEngine_Time__get_unscaledTime(0LL);
        v134 = v228 == v227;
        v230 = v229;
        if ( !v134 )
        {
          v342 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v342 = ManagerConfig_TypeInfo;
          }
          v343 = v342->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
          v4->fields._requestTime_5__8 = v230 + v343->TIMEOUT;
          if ( !this )
            goto LABEL_372;
          v4->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_371;
        }
        if ( v229 < v4->fields._requestTime_5__8 )
        {
LABEL_371:
          v344 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = v344;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BCAF9C(p__2__current, (int32_t)v344, v224, v225);
          v67 = 5;
          goto LABEL_359;
        }
      }
      v4->fields._errorCode_5__6 = 0LL;
      v231 = &v4->fields._errorCode_5__6;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, 0, v224, v225);
      if ( !_4__this )
        goto LABEL_372;
      v232 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_372;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v232 )
        goto LABEL_372;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v232, 0LL);
        v274 = &StringLiteral_2379/*"AssetStorageList download time over"*/;
        goto LABEL_331;
      }
      v233 = UnityEngine_Networking_UnityWebRequest__get_error(*v232, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v233, 0LL);
      if ( !*v232 )
        goto LABEL_372;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v317 = UnityEngine_Networking_UnityWebRequest__get_error(*v232, 0LL);
        goto LABEL_332;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v232, 0LL);
      if ( !this )
        goto LABEL_372;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v235 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v235, 0LL) )
      {
        v274 = &StringLiteral_2377/*"AssetStorageList download error"*/;
        goto LABEL_331;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCB0A0(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_372;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v235 )
        goto LABEL_372;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_62506972(v235, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_372;
      v238 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25039/*"~"*/, 0LL) )
        goto LABEL_286;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCB0A0(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_372;
      v239 = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !v239 )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = 13;
      if ( v239 == 1 )
        goto LABEL_258;
      WORD1(this->fields.__4__this) = 10;
      v240 = System_String__IndexOfAny((System_String_o *)v238, (System_Char_array *)this, 0LL);
      if ( v240 < 2 )
        goto LABEL_286;
      v241 = v240;
      v242 = System_String__Substring_62496348((System_String_o *)v238, 1, v240 - 1, 0LL);
      v243 = System_String__Substring((System_String_o *)v238, v241 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_372;
      v244 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                    this,
                                    v243,
                                    this->klass[1]._1.nestedTypes);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v245 = Crc32__Compute(v244, 0LL);
      if ( System_UInt32__Parse(v242, 0LL) != v245 )
      {
LABEL_286:
        v274 = &StringLiteral_2376/*"AssetStorageList download data error"*/;
LABEL_331:
        v317 = (System_String_o *)*v274;
LABEL_332:
        *v231 = v317;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v317, v236, v237);
        if ( *v232 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v232, 0LL);
          *v232 = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v318, v319);
        }
        if ( !*v231 )
          goto LABEL_358;
        v320 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v320 = ManagerConfig_TypeInfo;
        }
        if ( v320->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v321 = _4__this->fields.data;
          if ( !v321 )
            goto LABEL_372;
          v322 = (CommonUI_o *)this;
          v323 = System_String__Concat_62490676(
                   (System_String_o *)StringLiteral_2366/*"AssetName : "*/,
                   v321->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v231,
                   0LL);
          v324 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v324, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v322 )
            goto LABEL_372;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v322,
            (System_String_o *)StringLiteral_15795/*"[FFFF80]Download error for debug"*/,
            v323,
            v324,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_341:
          if ( _4__this->fields.isErrorDialog )
          {
            v325 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v325;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BCAF9C(p__2__current, (int32_t)v325, (int32_t)v2, v3);
            v67 = 6;
            goto LABEL_359;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4B1B4DA )
        {
          sub_1BCAFF8(&ManagementManager_TypeInfo, method);
          byte_4B1B4DA = 1;
        }
        v326 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v326 = ManagementManager_TypeInfo;
        }
        v327 = v326->static_fields->isDuringStartup;
        v328 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v327 )
        {
          v329 = LocalizationManager__Get((System_String_o *)StringLiteral_2033/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v330 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v330, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v328 )
            goto LABEL_372;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v328, (System_String_o *)StringLiteral_1/*""*/, v329, v330, 0, 0LL);
        }
        else
        {
          v331 = LocalizationManager__Get((System_String_o *)StringLiteral_2034/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
          v332 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v332, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v328 )
            goto LABEL_372;
          CommonUI__OpenRetryDialog((CommonUI_o *)v328, (System_String_o *)StringLiteral_1/*""*/, v331, v332, 0, 0LL);
        }
LABEL_356:
        if ( _4__this->fields.isErrorDialog )
        {
          v333 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = v333;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BCAF9C(p__2__current, (int32_t)v333, (int32_t)v2, v3);
          v67 = 7;
        }
        else
        {
LABEL_358:
          v334 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v334, 1.0, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v334;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BCAF9C(p__2__current, (int32_t)v334, v335, v336);
          v67 = 8;
        }
LABEL_359:
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v67;
        return 1;
      }
      if ( !v243 )
        goto LABEL_272;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCB0A0(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_372;
      v246 = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !v246 || (LOWORD(this->fields.__4__this) = 13, v246 == 1) )
LABEL_258:
        sub_1BCB25C(this, method, v144);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62499616(v243, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_372;
      v247 = this->fields.__2__current;
      v248 = this;
      v249 = (_DWORD)v247 - 1;
      if ( (int)v247 < 1 )
        goto LABEL_272;
      v250 = 0;
      while ( 2 )
      {
        v251 = (System_String_o *)*((_QWORD *)&v248->fields.__4__this + v250);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BCB0A0(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_372;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v251 )
          goto LABEL_372;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62499500(v251, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_372;
        v252 = this->fields.__2__current;
        v253 = this;
        if ( (int)v252 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_372;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1760/*"@"*/,
                                                      0LL);
          if ( !LODWORD(v253->fields.__2__current) )
            goto LABEL_258;
          v254 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v253->fields.__4__this;
          if ( !this )
            goto LABEL_372;
          if ( (v254 & 1) != 0 )
          {
            v256 = System_String__Substring((System_String_o *)this, 1, 0LL);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v253->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v253->fields.resourceNames;
            v258 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v256, v258, v255);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_272;
            goto LABEL_256;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_25039/*"~"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v253->fields.__2__current) )
              goto LABEL_258;
            this = (AssetLoader__LoadDataCR_d__29_o *)v253->fields.__4__this;
            if ( !this )
              goto LABEL_372;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v252 = v253->fields.__2__current;
              break;
            }
          }
LABEL_256:
          if ( v249 == v250 )
            goto LABEL_272;
          if ( (unsigned int)++v250 >= LODWORD(v248->fields.__2__current) )
            goto LABEL_258;
          continue;
        }
        break;
      }
      if ( (_DWORD)v252 != 5 )
        goto LABEL_272;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v253->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_372;
      v259 = System_String__Trim((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v259, 0LL);
      if ( LODWORD(v253->fields.__2__current) <= 4 )
        goto LABEL_258;
      v260 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_256;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__IsSame(
                                                  (AssetData_o *)this,
                                                  v253->fields._errorCode_5__6,
                                                  0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_256;
      v261 = _4__this->fields.data;
      if ( !v261 )
        goto LABEL_372;
      if ( v260 == v261->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4B1B4DA )
        {
          sub_1BCAFF8(&ManagementManager_TypeInfo, method);
          byte_4B1B4DA = 1;
        }
        v262 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v262 = ManagementManager_TypeInfo;
        }
        v263 = v262->static_fields->isDuringStartup;
        v264 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v263 )
        {
          v265 = LocalizationManager__Get((System_String_o *)StringLiteral_2033/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v266 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v266, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( v264 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v264, (System_String_o *)StringLiteral_1/*""*/, v265, v266, 1, 0LL);
            goto LABEL_292;
          }
          goto LABEL_372;
        }
        v281 = LocalizationManager__Get((System_String_o *)StringLiteral_2034/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v282 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v282, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( !v264 )
          goto LABEL_372;
        CommonUI__OpenRetryDialog((CommonUI_o *)v264, (System_String_o *)StringLiteral_1/*""*/, v281, v282, 1, 0LL);
LABEL_292:
        if ( !_4__this->fields.isErrorDialog )
        {
          v4->fields._url_5__11 = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._url_5__11, 0, (int32_t)v2, v3);
          goto LABEL_294;
        }
        v316 = (Il2CppObject *)v4->fields._wait_5__10;
        v4->fields.__2__current = v316;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BCAF9C(p__2__current, (int32_t)v316, (int32_t)v2, v3);
        v67 = 9;
        goto LABEL_359;
      }
LABEL_272:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4B1B4DA )
      {
        sub_1BCAFF8(&ManagementManager_TypeInfo, method);
        byte_4B1B4DA = 1;
      }
      v267 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v267 = ManagementManager_TypeInfo;
      }
      v268 = v267->static_fields->isDuringStartup;
      v269 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v268 )
          goto LABEL_280;
LABEL_282:
        v270 = &StringLiteral_9170/*"NETWORK_ERROR_ASSET_UPDATE"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !v268 )
          goto LABEL_282;
LABEL_280:
        v270 = &StringLiteral_9171/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
      }
      v271 = LocalizationManager__Get((System_String_o *)*v270, 0LL);
      v272 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v272, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
      if ( !v269 )
        goto LABEL_372;
      CommonUI__OpenErrorDialog((CommonUI_o *)v269, (System_String_o *)StringLiteral_1/*""*/, v271, v272, 0, 0LL);
      return 0;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._req_5__13;
      v4->fields.__1__state = -1;
      if ( !this )
        goto LABEL_38;
      if ( !_4__this )
        goto LABEL_372;
      v75 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(
                                                  (UnityEngine_AssetBundleCreateRequest_o *)this,
                                                  0LL);
      if ( !v75 )
        goto LABEL_372;
      v76 = AssetData__SetAssetBundleData(v75, (UnityEngine_AssetBundle_o *)this, v4->fields.resourceNames, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v76;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(p__2__current, (int32_t)v76, v77, v78);
      v67 = 13;
      goto LABEL_359;
    case 0xD:
      v4->fields.__1__state = -1;
LABEL_38:
      v4->fields._req_5__13 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._req_5__13, 0, (int32_t)v2, v3);
      if ( _4__this )
        goto LABEL_39;
      goto LABEL_372;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AssetLoader__LoadDataCR_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetLoader__LoadDataCR_d__29__System_Collections_IEnumerator_Reset(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall AssetLoader__LoadDataCR_d__29__System_Collections_IEnumerator_get_Current(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetLoader__LoadDataCR_d__29__System_IDisposable_Dispose(
        AssetLoader__LoadDataCR_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetLoader___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1B4E7 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetLoader___c_TypeInfo, v1);
    byte_4B1B4E7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(AssetLoader___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)AssetLoader___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B1B4E8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_4B1B4E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
  return BYTE4(Instance[7].monitor) == 0;
}