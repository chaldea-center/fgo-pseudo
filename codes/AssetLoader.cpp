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
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9

  data = this->fields.data;
  if ( !data )
    sub_1BC3264(this, method);
  entryCount = data->fields.entryCount;
  if ( (entryCount & 0x80000000) == 0 )
    data->fields.entryCount = entryCount + 1;
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
  const MethodInfo *v48; // x1
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
  if ( (byte_4B00FF6 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_1BC3008(&string___TypeInfo, v6);
    sub_1BC3008(&StringLiteral_14030/*"The request timed out."*/, v7);
    sub_1BC3008(&StringLiteral_20854/*"java.net.SocketException"*/, v8);
    sub_1BC3008(&StringLiteral_12180/*"SSL CA certificate error"*/, v9);
    sub_1BC3008(&StringLiteral_1405/*"404: Not Found"*/, v10);
    sub_1BC3008(&StringLiteral_13971/*"The network connection was lost."*/, v11);
    sub_1BC3008(&StringLiteral_1399/*"400: Bad Request"*/, v12);
    sub_1BC3008(&StringLiteral_14764/*"Unable to complete SSL connection"*/, v13);
    sub_1BC3008(&StringLiteral_14794/*"Unable to read data"*/, v14);
    sub_1BC3008(&StringLiteral_18049/*"connect failed"*/, v15);
    sub_1BC3008(&StringLiteral_7188/*"HTTP/1.1 500 Internal Server Error"*/, v16);
    sub_1BC3008(&StringLiteral_20856/*"java.net.UnknownHostException"*/, v17);
    sub_1BC3008(&StringLiteral_1413/*"500: Internal Server Error"*/, v18);
    sub_1BC3008(&StringLiteral_1415/*"502:"*/, v19);
    sub_1BC3008(&StringLiteral_11227/*"Request timeout"*/, v20);
    sub_1BC3008(&StringLiteral_4624/*"Connection reset by peer"*/, v21);
    sub_1BC3008(&StringLiteral_4979/*"DLErrorType"*/, v22);
    sub_1BC3008(&StringLiteral_4978/*"DLErrorAsset"*/, v23);
    sub_1BC3008(&StringLiteral_1427/*"504: Gateway Timeout"*/, v24);
    sub_1BC3008(&StringLiteral_14965/*"Unknown Error"*/, v25);
    sub_1BC3008(&StringLiteral_1417/*"503 Auto retry count"*/, v26);
    sub_1BC3008(&StringLiteral_20838/*"java.io.EOFException"*/, v27);
    sub_1BC3008(&StringLiteral_20851/*"java.net.ConnectException"*/, v28);
    sub_1BC3008(&StringLiteral_1403/*"403: Forbidden"*/, v29);
    sub_1BC3008(&StringLiteral_4623/*"Connection refused"*/, v30);
    sub_1BC3008(&StringLiteral_7189/*"HTTP/1.1 504 Gateway Timeout"*/, v31);
    sub_1BC3008(&StringLiteral_1401/*"401: Authorization Required"*/, v32);
    sub_1BC3008(&StringLiteral_20839/*"java.io.IOException"*/, v33);
    sub_1BC3008(&StringLiteral_9370/*"No address associated with hostname"*/, v34);
    sub_1BC3008(&StringLiteral_20853/*"java.net.ProtocolException"*/, v35);
    sub_1BC3008(&StringLiteral_2360/*"AssetBundle file download time over"*/, v36);
    sub_1BC3008(&StringLiteral_1406/*"408: Request Time-out"*/, v37);
    sub_1BC3008(&StringLiteral_14414/*"Too many redirects"*/, v38);
    sub_1BC3008(&StringLiteral_12797/*"Software caused connection abort"*/, v39);
    sub_1BC3008(&StringLiteral_2359/*"AssetBundle file check sum error"*/, v40);
    sub_1BC3008(&StringLiteral_20852/*"java.net.NoRouteToHostException"*/, v41);
    sub_1BC3008(&StringLiteral_5206/*"Destination host has an erroneous SSL certificate"*/, v42);
    sub_1BC3008(&StringLiteral_4625/*"Connection timed out"*/, v43);
    sub_1BC3008(&StringLiteral_4213/*"Cannot resolve destination host"*/, v44);
    sub_1BC3008(&StringLiteral_20855/*"java.net.SocketTimeoutException"*/, v45);
    sub_1BC3008(&StringLiteral_2363/*"AssetLoadError"*/, v46);
    byte_4B00FF6 = 1;
  }
  Instance = sub_1BC30B0(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_58;
  v51 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v52 = StringLiteral_9370/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9370/*"No address associated with hostname"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(Instance + 32), v52, v49, v50);
  if ( *(_DWORD *)(v51 + 24) <= 1u )
    goto LABEL_47;
  v54 = StringLiteral_2360/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v51 + 40) = StringLiteral_2360/*"AssetBundle file download time over"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 40), v54, v49, v53);
  if ( *(_DWORD *)(v51 + 24) <= 2u )
    goto LABEL_47;
  v56 = StringLiteral_13971/*"The network connection was lost."*/;
  *(_QWORD *)(v51 + 48) = StringLiteral_13971/*"The network connection was lost."*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 48), v56, v49, v55);
  if ( *(_DWORD *)(v51 + 24) <= 3u )
    goto LABEL_47;
  v58 = StringLiteral_4624/*"Connection reset by peer"*/;
  *(_QWORD *)(v51 + 56) = StringLiteral_4624/*"Connection reset by peer"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 56), v58, v49, v57);
  if ( *(_DWORD *)(v51 + 24) <= 4u )
    goto LABEL_47;
  v60 = StringLiteral_12797/*"Software caused connection abort"*/;
  *(_QWORD *)(v51 + 64) = StringLiteral_12797/*"Software caused connection abort"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 64), v60, v49, v59);
  if ( *(_DWORD *)(v51 + 24) <= 5u )
    goto LABEL_47;
  v62 = StringLiteral_4625/*"Connection timed out"*/;
  *(_QWORD *)(v51 + 72) = StringLiteral_4625/*"Connection timed out"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 72), v62, v49, v61);
  if ( *(_DWORD *)(v51 + 24) <= 6u )
    goto LABEL_47;
  v64 = StringLiteral_4623/*"Connection refused"*/;
  *(_QWORD *)(v51 + 80) = StringLiteral_4623/*"Connection refused"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 80), v64, v49, v63);
  if ( *(_DWORD *)(v51 + 24) <= 7u )
    goto LABEL_47;
  v66 = StringLiteral_14030/*"The request timed out."*/;
  *(_QWORD *)(v51 + 88) = StringLiteral_14030/*"The request timed out."*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 88), v66, v49, v65);
  if ( *(_DWORD *)(v51 + 24) <= 8u )
    goto LABEL_47;
  v68 = StringLiteral_4213/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v51 + 96) = StringLiteral_4213/*"Cannot resolve destination host"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 96), v68, v49, v67);
  if ( *(_DWORD *)(v51 + 24) <= 9u )
    goto LABEL_47;
  v70 = StringLiteral_14764/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v51 + 104) = StringLiteral_14764/*"Unable to complete SSL connection"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 104), v70, v49, v69);
  if ( *(_DWORD *)(v51 + 24) <= 0xAu )
    goto LABEL_47;
  v72 = StringLiteral_14965/*"Unknown Error"*/;
  *(_QWORD *)(v51 + 112) = StringLiteral_14965/*"Unknown Error"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 112), v72, v49, v71);
  if ( *(_DWORD *)(v51 + 24) <= 0xBu )
    goto LABEL_47;
  v74 = StringLiteral_11227/*"Request timeout"*/;
  *(_QWORD *)(v51 + 120) = StringLiteral_11227/*"Request timeout"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 120), v74, v49, v73);
  if ( *(_DWORD *)(v51 + 24) <= 0xCu )
    goto LABEL_47;
  v76 = StringLiteral_2359/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v51 + 128) = StringLiteral_2359/*"AssetBundle file check sum error"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 128), v76, v49, v75);
  if ( *(_DWORD *)(v51 + 24) <= 0xDu )
    goto LABEL_47;
  v78 = StringLiteral_12180/*"SSL CA certificate error"*/;
  *(_QWORD *)(v51 + 136) = StringLiteral_12180/*"SSL CA certificate error"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 136), v78, v49, v77);
  if ( *(_DWORD *)(v51 + 24) <= 0xEu )
    goto LABEL_47;
  v80 = StringLiteral_7188/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v51 + 144) = StringLiteral_7188/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 144), v80, v49, v79);
  if ( *(_DWORD *)(v51 + 24) <= 0xFu )
    goto LABEL_47;
  v82 = StringLiteral_7189/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v51 + 152) = StringLiteral_7189/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 152), v82, v49, v81);
  if ( *(_DWORD *)(v51 + 24) <= 0x10u )
    goto LABEL_47;
  v84 = StringLiteral_5206/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v51 + 160) = StringLiteral_5206/*"Destination host has an erroneous SSL certificate"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 160), v84, v49, v83);
  if ( *(_DWORD *)(v51 + 24) <= 0x11u )
    goto LABEL_47;
  v86 = StringLiteral_14414/*"Too many redirects"*/;
  *(_QWORD *)(v51 + 168) = StringLiteral_14414/*"Too many redirects"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 168), v86, v49, v85);
  if ( *(_DWORD *)(v51 + 24) <= 0x12u )
    goto LABEL_47;
  v88 = StringLiteral_20838/*"java.io.EOFException"*/;
  *(_QWORD *)(v51 + 176) = StringLiteral_20838/*"java.io.EOFException"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 176), v88, v49, v87);
  if ( *(_DWORD *)(v51 + 24) <= 0x13u )
    goto LABEL_47;
  v90 = StringLiteral_20854/*"java.net.SocketException"*/;
  *(_QWORD *)(v51 + 184) = StringLiteral_20854/*"java.net.SocketException"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 184), v90, v49, v89);
  if ( *(_DWORD *)(v51 + 24) <= 0x14u )
    goto LABEL_47;
  v92 = StringLiteral_20855/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v51 + 192) = StringLiteral_20855/*"java.net.SocketTimeoutException"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 192), v92, v49, v91);
  if ( *(_DWORD *)(v51 + 24) <= 0x15u )
    goto LABEL_47;
  v94 = StringLiteral_20852/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v51 + 200) = StringLiteral_20852/*"java.net.NoRouteToHostException"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 200), v94, v49, v93);
  if ( *(_DWORD *)(v51 + 24) <= 0x16u )
    goto LABEL_47;
  v96 = StringLiteral_20839/*"java.io.IOException"*/;
  *(_QWORD *)(v51 + 208) = StringLiteral_20839/*"java.io.IOException"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 208), v96, v49, v95);
  if ( *(_DWORD *)(v51 + 24) <= 0x17u )
    goto LABEL_47;
  v98 = StringLiteral_20851/*"java.net.ConnectException"*/;
  *(_QWORD *)(v51 + 216) = StringLiteral_20851/*"java.net.ConnectException"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 216), v98, v49, v97);
  if ( *(_DWORD *)(v51 + 24) <= 0x18u )
    goto LABEL_47;
  v100 = StringLiteral_18049/*"connect failed"*/;
  *(_QWORD *)(v51 + 224) = StringLiteral_18049/*"connect failed"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 224), v100, v49, v99);
  if ( *(_DWORD *)(v51 + 24) <= 0x19u )
    goto LABEL_47;
  v102 = StringLiteral_20853/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v51 + 232) = StringLiteral_20853/*"java.net.ProtocolException"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 232), v102, v49, v101);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Au )
    goto LABEL_47;
  v104 = StringLiteral_20856/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v51 + 240) = StringLiteral_20856/*"java.net.UnknownHostException"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 240), v104, v49, v103);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Bu )
    goto LABEL_47;
  v106 = StringLiteral_1399/*"400: Bad Request"*/;
  *(_QWORD *)(v51 + 248) = StringLiteral_1399/*"400: Bad Request"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 248), v106, v49, v105);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Cu )
    goto LABEL_47;
  v108 = StringLiteral_1401/*"401: Authorization Required"*/;
  *(_QWORD *)(v51 + 256) = StringLiteral_1401/*"401: Authorization Required"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 256), v108, v49, v107);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Du )
    goto LABEL_47;
  v110 = StringLiteral_1403/*"403: Forbidden"*/;
  *(_QWORD *)(v51 + 264) = StringLiteral_1403/*"403: Forbidden"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 264), v110, v49, v109);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Eu )
    goto LABEL_47;
  v112 = StringLiteral_1405/*"404: Not Found"*/;
  *(_QWORD *)(v51 + 272) = StringLiteral_1405/*"404: Not Found"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 272), v112, v49, v111);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Fu )
    goto LABEL_47;
  v114 = StringLiteral_1406/*"408: Request Time-out"*/;
  *(_QWORD *)(v51 + 280) = StringLiteral_1406/*"408: Request Time-out"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 280), v114, v49, v113);
  if ( *(_DWORD *)(v51 + 24) <= 0x20u )
    goto LABEL_47;
  v116 = StringLiteral_1413/*"500: Internal Server Error"*/;
  *(_QWORD *)(v51 + 288) = StringLiteral_1413/*"500: Internal Server Error"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 288), v116, v49, v115);
  if ( *(_DWORD *)(v51 + 24) <= 0x21u )
    goto LABEL_47;
  v118 = StringLiteral_1415/*"502:"*/;
  *(_QWORD *)(v51 + 296) = StringLiteral_1415/*"502:"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 296), v118, v49, v117);
  if ( *(_DWORD *)(v51 + 24) <= 0x22u
    || (v120 = StringLiteral_1417/*"503 Auto retry count"*/,
        *(_QWORD *)(v51 + 304) = StringLiteral_1417/*"503 Auto retry count"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 304), v120, v49, v119),
        *(_DWORD *)(v51 + 24) <= 0x23u)
    || (v122 = StringLiteral_1427/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v51 + 312) = StringLiteral_1427/*"504: Gateway Timeout"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 312), v122, v49, v121),
        *(_DWORD *)(v51 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1BC326C(Instance, v48, v49);
  }
  v124 = StringLiteral_14794/*"Unable to read data"*/;
  *(_QWORD *)(v51 + 320) = StringLiteral_14794/*"Unable to read data"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v51 + 320), v124, v49, v123);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v127 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v48), !v127) )
  {
LABEL_58:
    sub_1BC3264(Instance, v48);
  }
  CrashReporter__AddCustomKey(v127, (System_String_o *)StringLiteral_4978/*"DLErrorAsset"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v125 >= *(_DWORD *)(v51 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4979/*"DLErrorType"*/,
    *(System_String_o **)(v51 + 32 + 8 * v125),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  v3 = (System_String_o *)StringLiteral_2363/*"AssetLoadError"*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)v3, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_4B00FF3 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B00FF3 = 1;
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
  UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)this, 0LL);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
}


bool __fastcall AssetLoader__IsSame(AssetLoader_o *this, System_String_o *name, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  System_String_o *v4; // x0

  data = this->fields.data;
  if ( !data )
    return 0;
  v4 = data->fields.name;
  if ( !v4 )
    sub_1BC3264(0LL, name);
  return System_String__Equals_62383952(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_39552736(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_39545180(data, type, name, method);
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

  if ( (byte_4B00FF2 & 1) == 0 )
  {
    sub_1BC3008(&AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames);
    byte_4B00FF2 = 1;
  }
  v5 = sub_1BC3254(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)resourceNames, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  System_Byte_array *readData; // x20
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B00FF4 & 1) == 0 )
  {
    sub_1BC3008(&CatAndMouseGame_TypeInfo, method);
    byte_4B00FF4 = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v4 = CatAndMouseGame__MouseGame4(readData, 0LL);
  this->fields._decData = v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._decData, (int32_t)v4, v5, v6);
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

  if ( (byte_4B00FF5 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Application_TypeInfo, method);
    sub_1BC3008(&ManagementManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6);
    byte_4B00FF5 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.loader, 0, v8, v9);
  }
  this->fields.readData = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.readData, 0, v2, v3);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4B01069 )
  {
    sub_1BC3008(&ManagementManager_TypeInfo, v10);
    byte_4B01069 = 1;
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
    UnityEngine_Application__Quit_69829232(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1BC3264(0LL, v13);
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
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x8
  bool v11; // w8
  System_Collections_IEnumerator_o *DataCR; // x1

  this->fields.endCallback = callbackFunc;
  p_endCallback = &this->fields.endCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callbackFunc, (int32_t)resourceNames, method);
  v10 = (__int64)*(p_endCallback - 1);
  if ( !v10 )
    sub_1BC3264(v7, v8);
  v11 = *(_DWORD *)(v10 + 40) != *(_DWORD *)(v10 + 44);
  this->fields.isDownload = v11;
  this->fields.isRequestDownload = v11;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
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
      sub_1BC3264(0LL, v6);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_threadDecrypt, 0, v2, v3);
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

  if ( (byte_4B00FEE & 1) == 0 )
  {
    sub_1BC3008(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_4B00FEE = 1;
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
    v9 = sub_1BFD098(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
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

  if ( (byte_4B00FF0 & 1) == 0 )
  {
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_4B00FF0 = 1;
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
    v9 = sub_1BFD098(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
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
    sub_1BC3264(this, method);
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
    sub_1BC3264(this, method);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BC3264(this, method);
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

  if ( (byte_4B00FEF & 1) == 0 )
  {
    sub_1BC3008(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_4B00FEF = 1;
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
    v9 = sub_1BFD098(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
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

  if ( (byte_4B00FF1 & 1) == 0 )
  {
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_4B00FF1 = 1;
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
    v9 = sub_1BFD098(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A0CF98;
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
        v11 = sub_1BC30C0(v6);
        v12 = sub_1BC357C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_1A0D094;
          else
            v9 = (Il2CppObject *)sub_1A0D058;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_1A0CFD4;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1A0CFA8;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1A0CF78;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0CF30;
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
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A0CDA8;
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
        v11 = sub_1BC30C0(v6);
        v12 = sub_1BC357C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_1A0CEA4;
          else
            v9 = (Il2CppObject *)sub_1A0CE68;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_1A0CDE4;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1A0CDB8;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1A0CD88;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0CD40;
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
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  bool v58; // w8
  const MethodInfo *v59; // x1
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  char v62; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Networking_DownloadHandler_o *v65; // x8
  AssetData_o *v66; // x20
  const MethodInfo *v67; // x3
  System_Collections_IEnumerator_o *v68; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int v72; // w8
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x1
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct AssetData_o *data; // x8
  System_Byte_array *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Byte_array *readData; // x22
  struct AssetData_o *v84; // x8
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  float unscaledTime; // s0
  ManagerConfig_c *v92; // x0
  float v93; // s8
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v95; // x23
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  int64_t v102; // x23
  ManagerConfig_c *v103; // x0
  int32_t v104; // w1
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  CGThumbnailListItem_o *p_errorLocalizeCode_5__7; // x0
  int32_t v108; // w1
  System_String_o *Url; // x0
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  System_String_o *url_5__11; // x21
  struct AssetData_o *v113; // x8
  AssetLoader__LoadDataCR_d__29_o *v114; // x22
  bool v115; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__12; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v126; // s8
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  float v129; // s0
  bool v130; // zf
  float v131; // s8
  UnityEngine_Networking_DownloadHandler_o *v132; // x0
  __int64 v133; // x10
  UnityEngine_Networking_DownloadHandler_o *v134; // x22
  System_String_o *v135; // x0
  const MethodInfo *v136; // x2
  const MethodInfo *v137; // x3
  int klass; // w8
  System_String_o *v139; // x0
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  UnityEngine_Networking_DownloadHandler_c *v142; // x0
  __int64 (**image)(void); // x8
  __int64 v144; // x10
  UnityEngine_Networking_DownloadHandler_c *v145; // x8
  AssetLoader__LoadDataCR_d__29_o *v146; // x22
  System_String_o *v147; // x0
  System_String_o *v148; // x0
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  int32_t v151; // w1
  CGThumbnailListItem_o *p_errorCode_5__6; // x0
  System_String_o *v153; // x22
  System_String_o *v154; // x0
  System_String_o *v155; // x0
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v159; // x23
  Il2CppObject *v160; // x23
  AssetLoader__LoadDataCR_d__29_o *v161; // x23
  System_String_o *v162; // x24
  int v163; // w8
  System_String_o *v164; // x0
  System_String_o *v165; // x0
  struct AssetData_o *v166; // x9
  const MethodInfo *v167; // x3
  AssetLoader__LoadDataCR_d__29_o *v168; // x22
  int32_t v169; // w1
  const MethodInfo *v170; // x3
  struct System_String_o *v171; // x1
  const MethodInfo *v172; // x3
  int32_t v173; // w1
  struct AssetData_o *v174; // x8
  const MethodInfo *v175; // x3
  const MethodInfo *v176; // x3
  int32_t v177; // w1
  const MethodInfo *v178; // x3
  const MethodInfo *v179; // x3
  int32_t v180; // w1
  System_String_o *v181; // x0
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  ManagerConfig_c *v184; // x0
  struct AssetData_o *v185; // x8
  CommonUI_o *v186; // x21
  System_String_o *v187; // x22
  ErrorDialog_ClickDelegate_o *v188; // x23
  ManagementManager_c *v189; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v193; // x22
  System_String_o *v194; // x21
  System_String_o *v195; // x23
  System_String_o *v196; // x23
  ErrorDialog_ClickDelegate_o *v197; // x24
  System_String_o *v198; // x23
  System_String_o *v199; // x23
  ErrorDialog_ClickDelegate_o *v200; // x24
  UnityEngine_Networking_UnityWebRequest_o *v201; // x0
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  int32_t v204; // w2
  const MethodInfo *v205; // x3
  AssetManager_c *v206; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  System_String_o *v210; // x21
  System_String_o *UrlString; // x0
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  AssetLoader__LoadDataCR_d__29_o **v214; // x21
  float v215; // s0
  ManagerConfig_c *v216; // x0
  float v217; // s8
  float v218; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v219; // x0
  int32_t v220; // w2
  const MethodInfo *v221; // x3
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  float v224; // s0
  float v225; // s9
  float v226; // s8
  float v227; // s0
  float v228; // s8
  System_String_o **v229; // x21
  UnityEngine_Networking_UnityWebRequest_o **v230; // x22
  System_String_o *v231; // x0
  System_String_o *text; // x23
  System_String_o *v233; // x23
  int32_t v234; // w2
  const MethodInfo *v235; // x3
  AssetLoader__LoadDataCR_d__29_o *v236; // x23
  int _2__current; // w8
  int32_t v238; // w0
  int32_t v239; // w25
  System_String_o *v240; // x24
  System_String_o *v241; // x23
  System_Byte_array *v242; // x25
  uint32_t v243; // w25
  int v244; // w8
  Il2CppObject *v245; // x8
  AssetLoader__LoadDataCR_d__29_o *v246; // x21
  int v247; // w25
  int v248; // w27
  System_String_o *v249; // x22
  Il2CppObject *v250; // x8
  AssetLoader__LoadDataCR_d__29_o *v251; // x22
  char v252; // w8
  const MethodInfo *v253; // x2
  System_String_o *v254; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v256; // x22
  System_String_o *v257; // x0
  int v258; // w23
  struct AssetData_o *v259; // x8
  ManagementManager_c *v260; // x0
  _BOOL4 v261; // w22
  Il2CppObject *v262; // x21
  System_String_o *v263; // x22
  ErrorDialog_ClickDelegate_o *v264; // x23
  ManagementManager_c *v265; // x0
  _BOOL4 v266; // w21
  Il2CppObject *v267; // x19
  __int64 *v268; // x8
  System_String_o *v269; // x21
  ErrorDialog_ClickDelegate_o *v270; // x22
  bool result; // w0
  __int64 *v272; // x8
  System_String_o *v273; // x22
  ErrorDialog_ClickDelegate_o *v274; // x23
  int32_t v275; // w2
  const MethodInfo *v276; // x3
  int32_t v277; // w2
  const MethodInfo *v278; // x3
  System_String_o *name; // x21
  AssetData_o *v280; // x22
  AssetLoader__LoadDataCR_d__29_o **v281; // x21
  __int64 v282; // x10
  __int64 v283; // x10
  System_Byte_array *v284; // x0
  UnityEngine_AssetBundleCreateRequest_o *v285; // x0
  int32_t v286; // w2
  const MethodInfo *v287; // x3
  int32_t v288; // w2
  const MethodInfo *v289; // x3
  Il2CppObject *req_5__13; // x1
  int32_t v291; // w2
  const MethodInfo *v292; // x3
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  CGThumbnailListItem_o *v294; // x20
  int32_t v295; // w2
  const MethodInfo *v296; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v297; // x0
  int32_t v298; // w2
  const MethodInfo *v299; // x3
  ManagerConfig_c *v300; // x0
  int autoRetryCount_5__3; // w21
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v303; // x20
  int32_t v304; // w2
  const MethodInfo *v305; // x3
  Il2CppObject *v306; // x1
  Il2CppObject *v307; // x1
  int32_t v308; // w2
  const MethodInfo *v309; // x3
  int32_t v310; // w2
  const MethodInfo *v311; // x3
  Il2CppObject *v312; // x1
  System_String_o *v313; // x1
  int32_t v314; // w2
  const MethodInfo *v315; // x3
  ManagerConfig_c *v316; // x0
  struct AssetData_o *v317; // x8
  CommonUI_o *v318; // x22
  System_String_o *v319; // x21
  ErrorDialog_ClickDelegate_o *v320; // x23
  Il2CppObject *v321; // x1
  ManagementManager_c *v322; // x0
  _BOOL4 v323; // w22
  Il2CppObject *v324; // x21
  System_String_o *v325; // x22
  ErrorDialog_ClickDelegate_o *v326; // x23
  System_String_o *v327; // x22
  ErrorDialog_ClickDelegate_o *v328; // x23
  Il2CppObject *v329; // x1
  UnityEngine_WaitForSeconds_o *v330; // x20
  int32_t v331; // w2
  const MethodInfo *v332; // x3
  AssetLoader___c_c *v333; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v335; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int32_t v337; // w2
  const MethodInfo *v338; // x3
  UnityEngine_WaitUntil_o *v339; // x21
  int32_t v340; // w2
  const MethodInfo *v341; // x3
  UnityEngine_Networking_DownloadHandler_o *v342; // x0
  const MethodInfo *v343; // x2
  ManagerConfig_c *v344; // x0
  struct ManagerConfig_StaticFields *v345; // x8
  Il2CppObject *wait_5__10; // x1
  CGThumbnailListItem_o *v347; // x19
  ManagerConfig_c *v348; // x0
  struct ManagerConfig_StaticFields *v349; // x8
  Il2CppObject *v350; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  __int64 v353; // [xsp+18h] [xbp-88h]
  __int64 v354; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-78h] BYREF

  v4 = this;
  if ( (byte_4B00FF9 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetLoader_EndRebootDialog__, method);
    sub_1BC3008(&Method_AssetLoader_EndRetryDialog__, v5);
    sub_1BC3008(&Method_AssetLoader_EndWarningDialog__, v6);
    sub_1BC3008(&AssetManager_TypeInfo, v7);
    sub_1BC3008(&CatAndMouseGame_TypeInfo, v8);
    sub_1BC3008(&char___TypeInfo, v9);
    sub_1BC3008(&ErrorDialog_ClickDelegate_TypeInfo, v10);
    sub_1BC3008(&CommonServicePluginScript_TypeInfo, v11);
    sub_1BC3008(&Crc32_TypeInfo, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v14);
    sub_1BC3008(&DownloadHandlerDecryptFileWithCrc_TypeInfo, v15);
    sub_1BC3008(&DownloadHandlerFileWithCrcCheck_TypeInfo, v16);
    sub_1BC3008(&System_Func_bool__TypeInfo, v17);
    sub_1BC3008(&System_IO_IOException_TypeInfo, v18);
    sub_1BC3008(&LocalizationManager_TypeInfo, v19);
    sub_1BC3008(&ManagementManager_TypeInfo, v20);
    sub_1BC3008(&ManagerConfig_TypeInfo, v21);
    sub_1BC3008(&NetworkManager_TypeInfo, v22);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1BC3008(&string___TypeInfo, v24);
    sub_1BC3008(&Method_AssetLoader___c__LoadDataCR_b__29_0__, v25);
    sub_1BC3008(&AssetLoader___c_TypeInfo, v26);
    sub_1BC3008(&UnityEngine_WaitForEndOfFrame_TypeInfo, v27);
    sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, v28);
    sub_1BC3008(&UnityEngine_WaitUntil_TypeInfo, v29);
    sub_1BC3008(&StringLiteral_43/*"\n"*/, v30);
    sub_1BC3008(&StringLiteral_9160/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/, v31);
    sub_1BC3008(&StringLiteral_7185/*"HTTP"*/, v32);
    sub_1BC3008(&StringLiteral_5245/*"Disk full"*/, v33);
    sub_1BC3008(&StringLiteral_2377/*"AssetStorageList download time over"*/, v34);
    sub_1BC3008(&StringLiteral_9169/*"NETWORK_ERROR_DISK_FULL"*/, v35);
    sub_1BC3008(&StringLiteral_113/*" "*/, v36);
    sub_1BC3008(&StringLiteral_2364/*"AssetName : "*/, v37);
    sub_1BC3008(&StringLiteral_757/*")\n\n503 Auto retry count "*/, v38);
    sub_1BC3008(&StringLiteral_760/*")\nfile crc ("*/, v39);
    sub_1BC3008(&StringLiteral_1416/*"503"*/, v40);
    sub_1BC3008(&StringLiteral_2031/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v41);
    sub_1BC3008(&StringLiteral_15783/*"[FFFF80]Download error for debug"*/, v42);
    sub_1BC3008(&StringLiteral_2374/*"AssetStorageList download data error"*/, v43);
    sub_1BC3008(&StringLiteral_25018/*"~"*/, v44);
    sub_1BC3008(&StringLiteral_12235/*"STATUS"*/, v45);
    sub_1BC3008(&StringLiteral_756/*")\n\n"*/, v46);
    sub_1BC3008(&StringLiteral_9159/*"NETWORK_ERROR_ASSET_UPDATE"*/, v47);
    sub_1BC3008(&StringLiteral_649/*"("*/, v48);
    sub_1BC3008(&StringLiteral_758/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v49);
    sub_1BC3008(&StringLiteral_754/*")"*/, v50);
    sub_1BC3008(&StringLiteral_18887/*"error "*/, v51);
    sub_1BC3008(&StringLiteral_1758/*"@"*/, v52);
    sub_1BC3008(&StringLiteral_2032/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v53);
    sub_1BC3008(&StringLiteral_2375/*"AssetStorageList download error"*/, v54);
    sub_1BC3008(&StringLiteral_759/*")\n\nAssetBundle file download time over"*/, v55);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BC3008(&StringLiteral_1/*""*/, v56);
    byte_4B00FF9 = 1;
  }
  v354 = 0LL;
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      if ( this->fields.__1__state )
        v58 = 0;
      else
        v58 = AssetData__GetExt((AssetData_o *)this, method) == 0LL;
      v4->fields._isEncrypted_5__2 = v58;
      v4->fields._autoRetryCount_5__3 = 0;
      goto LABEL_59;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_78;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_148;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_173;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_172;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_196;
    case 6:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_337;
    case 7:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_352;
    case 8:
      v4->fields._asyncOperater_5__12 = 0LL;
      v4->fields.__1__state = -1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12, 0, (int32_t)v2, v3);
      goto LABEL_189;
    case 9:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_289;
    case 0xA:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      goto LABEL_312;
    case 0xB:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_375;
      p_loader = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(error, 0LL);
      if ( !*p_loader )
        goto LABEL_375;
      v62 = (char)this;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
      if ( downloadHandler )
      {
        methodPtr_low = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(downloadHandler->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[methodPtr_low - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v65 = downloadHandler;
          else
            v65 = 0LL;
          if ( (v62 & 1) != 0 )
            goto LABEL_30;
LABEL_47:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_375;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v77, v78);
          data = _4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !data )
            goto LABEL_375;
          data->fields.nowVersion = 0;
          goto LABEL_59;
        }
      }
      v65 = 0LL;
      if ( (v62 & 1) == 0 )
        goto LABEL_47;
LABEL_30:
      if ( v65 )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)LODWORD(v65[1].klass);
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
        if ( !*p_loader )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                    0LL);
        if ( !this )
          goto LABEL_375;
        v80 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        _4__this->fields.readData = v80;
        sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.readData, (int32_t)v80, v81, v82);
        readData = _4__this->fields.readData;
        if ( !Crc32_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
        this = (AssetLoader__LoadDataCR_d__29_o *)Crc32__Compute(readData, 0LL);
      }
      v84 = _4__this->fields.data;
      if ( !v84 )
        goto LABEL_375;
      if ( (_DWORD)this == v84->fields.crc )
        goto LABEL_294;
      *(_WORD *)&_4__this->fields.isRequestDownload = 257;
      v84->fields.nowVersion = 0;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      _4__this->fields.loader = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v85, v86);
      _4__this->fields.readData = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v87, v88);
LABEL_59:
      while ( 1 )
      {
        _4__this->fields.readData = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        if ( _4__this->fields.isDownload )
          break;
LABEL_292:
        v84 = _4__this->fields.data;
        if ( !v84 )
          goto LABEL_375;
        if ( v84->fields.entryCount >= 1 )
        {
          if ( v4->fields._isEncrypted_5__2 )
          {
LABEL_312:
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_375;
            LoadRequest = AssetData__GetLoadRequest((AssetData_o *)this, method);
            _4__this->fields.loader = LoadRequest;
            v294 = (CGThumbnailListItem_o *)&_4__this->fields.loader;
            sub_1BC2FAC(v294, (int32_t)LoadRequest, v295, v296);
            this = (AssetLoader__LoadDataCR_d__29_o *)v294->klass;
            if ( !v294->klass )
              goto LABEL_375;
            v297 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                     0LL);
            v4->fields.__2__current = (Il2CppObject *)v297;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(p__2__current, (int32_t)v297, v298, v299);
            v72 = 11;
          }
          else
          {
            v333 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v333 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v333->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v333->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v333);
                v333 = AssetLoader___c_TypeInfo;
              }
              v335 = (Il2CppObject *)v333->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(_9__29_0, v335, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0LL);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v337, v338);
            }
            v339 = (UnityEngine_WaitUntil_o *)sub_1BC3254(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v339, _9__29_0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v339;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(p__2__current, (int32_t)v339, v340, v341);
            v72 = 10;
          }
          goto LABEL_355;
        }
LABEL_294:
        if ( _4__this->fields.isDownload )
        {
          name = v84->fields.name;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__isExistAssetStorage(name, method);
          if ( ((unsigned __int8)this & 1) != 0 )
            continue;
        }
LABEL_298:
        v280 = _4__this->fields.data;
        if ( !v280 )
          goto LABEL_375;
        if ( v280->fields.entryCount >= 1 )
        {
          v281 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v4->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0LL);
            if ( !this
              || (v282 = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v282)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v282 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v281;
              if ( !*v281 )
                goto LABEL_375;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_375;
              v283 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v283
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v283 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_375;
              }
            }
            v284 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v285 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v284, 0LL);
            v4->fields._req_5__13 = v285;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._req_5__13, (int32_t)v285, v286, v287);
            this = *v281;
            if ( !*v281 )
              goto LABEL_375;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v281 = 0LL;
            sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v288, v289);
            req_5__13 = (Il2CppObject *)v4->fields._req_5__13;
            v4->fields.__2__current = req_5__13;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(p__2__current, (int32_t)req_5__13, v291, v292);
            v72 = 12;
            goto LABEL_355;
          }
          if ( !this )
            goto LABEL_375;
          v342 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v280, v342, v343);
        }
LABEL_38:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v74, v75);
        }
        _4__this->fields.readData = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        AssetLoader__EndLoad(_4__this, v76);
        return 0;
      }
      *(_WORD *)&v4->fields._isAutoRetry_5__4 = 0;
      v4->fields._errorCode_5__6 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, 0, (int32_t)v2, v3);
      v4->fields._errorLocalizeCode_5__7 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__7, 0, v89, v90);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v92 = ManagerConfig_TypeInfo;
      v93 = unscaledTime;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v92 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v92->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__9 = 0.0;
      v4->fields._requestTime_5__8 = v93 + TIMEOUT;
      v95 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v95, 0LL);
      v4->fields._wait_5__10 = v95;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._wait_5__10, (int32_t)v95, v96, v97);
      Path = AssetStorageCache__GetPath(0LL);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v102 = FreeSize;
        v103 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v103 = ManagerConfig_TypeInfo;
        }
        if ( v102 < v103->static_fields->LIMIT_FREE_SIZE )
        {
          _4__this->fields.isErrorDialog = 1;
          v104 = StringLiteral_5245/*"Disk full"*/;
          v4->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5245/*"Disk full"*/;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, v104, v100, v101);
          p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__7;
          v108 = StringLiteral_9169/*"NETWORK_ERROR_DISK_FULL"*/;
          v4->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9169/*"NETWORK_ERROR_DISK_FULL"*/;
          goto LABEL_141;
        }
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      Url = AssetData__get_Url((AssetData_o *)this, method);
      v4->fields._url_5__11 = Url;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._url_5__11, (int32_t)Url, v110, v111);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      url_5__11 = v4->fields._url_5__11;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, method);
      v113 = _4__this->fields.data;
      v114 = this;
      if ( v4->fields._isEncrypted_5__2 )
      {
        if ( !v113 )
          goto LABEL_375;
        v115 = v113->fields.entryCount > 0;
      }
      else
      {
        if ( !v113 )
          goto LABEL_375;
        v115 = 0;
      }
      Key = AssetData__get_Key(_4__this->fields.data, method);
      v117 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, (System_String_o *)v114, v115, Key, 0LL);
      _4__this->fields.loader = v117;
      sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)v117, v118, v119);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v120 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v4->fields._asyncOperater_5__12 = v120;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12, (int32_t)v120, v121, v122);
LABEL_78:
      p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v4->fields._asyncOperater_5__12;
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
      if ( !this )
LABEL_375:
        sub_1BC3264(this, method);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AsyncOperation__get_isDone(
                                                  (UnityEngine_AsyncOperation_o *)this,
                                                  0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = *p_asyncOperater_5__12;
        if ( !*p_asyncOperater_5__12 )
          goto LABEL_375;
        progress = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        loadProgress_5__9 = v4->fields._loadProgress_5__9;
        v126 = progress;
        v129 = UnityEngine_Time__get_unscaledTime(0LL);
        v130 = v126 == loadProgress_5__9;
        v131 = v129;
        if ( !v130 )
        {
          v344 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v344 = ManagerConfig_TypeInfo;
          }
          v345 = v344->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
          v4->fields._requestTime_5__8 = v131 + v345->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v4->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
LABEL_369:
          wait_5__10 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = wait_5__10;
          v347 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(v347, (int32_t)wait_5__10, v127, v128);
          result = 1;
          LODWORD(v347[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
        if ( v129 < v4->fields._requestTime_5__8 )
          goto LABEL_369;
      }
      if ( !_4__this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v132 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      if ( v132
        && (v133 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v132->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v133) )
      {
        v134 = (DownloadHandlerFileWithCrcCheck_c *)v132->klass->_2.typeHierarchy[v133 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
             ? v132
             : 0LL;
      }
      else
      {
        v134 = 0LL;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v139 = System_String__Concat_62386896(
                 (System_String_o *)StringLiteral_649/*"("*/,
                 v4->fields._url_5__11,
                 (System_String_o *)StringLiteral_759/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        v4->fields._errorCode_5__6 = v139;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v139, v140, v141);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        if ( v134 )
          DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v134, 0LL);
        goto LABEL_140;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v135 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v135, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v134 )
        {
          klass = 0;
LABEL_127:
          HIDWORD(v354) = klass;
          v166 = _4__this->fields.data;
          if ( !v166 )
            goto LABEL_375;
          if ( klass == v166->fields.crc )
          {
            v166->fields.nowVersion = v166->fields.newVersion;
            _4__this->fields.isDownload = 0;
          }
          else
          {
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BC30B0(string___TypeInfo, 7LL);
            if ( !this )
              goto LABEL_375;
            v168 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_258;
            v169 = StringLiteral_649/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_649/*"("*/;
            sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__4__this, v169, (int32_t)v136, v167);
            if ( LODWORD(v168->fields.__2__current) <= 1 )
              goto LABEL_258;
            v171 = v4->fields._url_5__11;
            v168->fields.resourceNames = (struct System_String_array *)v171;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v168->fields.resourceNames, (int32_t)v171, (int32_t)v136, v170);
            if ( LODWORD(v168->fields.__2__current) <= 2 )
              goto LABEL_258;
            v173 = StringLiteral_758/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v168->fields._isEncrypted_5__2 = StringLiteral_758/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v168->fields._isEncrypted_5__2, v173, (int32_t)v136, v172);
            v174 = _4__this->fields.data;
            if ( !v174 )
              goto LABEL_375;
            LODWORD(v354) = v174->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v354, 0LL);
            if ( LODWORD(v168->fields.__2__current) <= 3 )
              goto LABEL_258;
            *(_QWORD *)&v168->fields._isAutoRetry_5__4 = this;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v168->fields._isAutoRetry_5__4, (int32_t)this, (int32_t)v136, v175);
            if ( LODWORD(v168->fields.__2__current) <= 4 )
              goto LABEL_258;
            v177 = StringLiteral_760/*")\nfile crc ("*/;
            v168->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_760/*")\nfile crc ("*/;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v168->fields._errorCode_5__6, v177, (int32_t)v136, v176);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v354 + 4, 0LL);
            if ( LODWORD(v168->fields.__2__current) <= 5 )
              goto LABEL_258;
            v168->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1BC2FAC(
              (CGThumbnailListItem_o *)&v168->fields._errorLocalizeCode_5__7,
              (int32_t)this,
              (int32_t)v136,
              v178);
            if ( LODWORD(v168->fields.__2__current) <= 6 )
              goto LABEL_258;
            v180 = StringLiteral_754/*")"*/;
            *(_QWORD *)&v168->fields._requestTime_5__8 = StringLiteral_754/*")"*/;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v168->fields._requestTime_5__8, v180, (int32_t)v136, v179);
            v181 = System_String__Concat_62389164((System_String_array *)v168, 0LL);
            v4->fields._errorCode_5__6 = v181;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v181, v182, v183);
            v4->fields._isCrcError_5__5 = 1;
          }
          goto LABEL_140;
        }
        if ( !v134[4].klass )
        {
          klass = (int)v134[1].klass;
          goto LABEL_127;
        }
      }
      else if ( !v134 )
      {
LABEL_110:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        v153 = v4->fields._url_5__11;
        v154 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v155 = System_String__Concat_62388900(
                 (System_String_o *)StringLiteral_649/*"("*/,
                 v153,
                 (System_String_o *)StringLiteral_756/*")\n\n"*/,
                 v154,
                 0LL);
        v4->fields._errorCode_5__6 = v155;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v155, v156, v157);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                            0LL);
        if ( !ResponseHeaders )
          goto LABEL_140;
        v159 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
               (const MethodInfo_336CCB8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v159,
                (Il2CppObject *)StringLiteral_12235/*"STATUS"*/,
                &value,
                (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_140;
        }
        v160 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BC30B0(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v160 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62397840(
                                                    (System_String_o *)v160,
                                                    (System_Char_array *)this,
                                                    1,
                                                    0LL);
        if ( !this )
          goto LABEL_375;
        v161 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_140;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_7185/*"HTTP"*/,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_140;
        if ( LODWORD(v161->fields.__2__current) <= 1 )
          goto LABEL_258;
        this = (AssetLoader__LoadDataCR_d__29_o *)v161->fields.resourceNames;
        if ( !this )
          goto LABEL_375;
        if ( !System_String__Equals_62383952((System_String_o *)this, (System_String_o *)StringLiteral_1416/*"503"*/, 0LL) )
          goto LABEL_140;
        v162 = v4->fields._url_5__11;
        v163 = v4->fields._autoRetryCount_5__3 + 1;
        v4->fields._isAutoRetry_5__4 = 1;
        v4->fields._autoRetryCount_5__3 = v163;
        v164 = System_Int32__ToString((int)v4 + 52, 0LL);
        v165 = System_String__Concat_62388900(
                 (System_String_o *)StringLiteral_649/*"("*/,
                 v162,
                 (System_String_o *)StringLiteral_757/*")\n\n503 Auto retry count "*/,
                 v164,
                 0LL);
        v151 = (int)v165;
        v4->fields._errorCode_5__6 = v165;
        p_errorCode_5__6 = (CGThumbnailListItem_o *)&v4->fields._errorCode_5__6;
        goto LABEL_109;
      }
      DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v134, 0LL);
      v142 = v134[4].klass;
      if ( !v142 )
        goto LABEL_110;
      image = (__int64 (**)(void))v142->_1.image;
      v144 = LOBYTE(System_IO_IOException_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *((unsigned __int8 *)v142->_1.image + 304) >= (unsigned int)v144
        && *((System_IO_IOException_c **)image[25] + v144 - 1) == System_IO_IOException_TypeInfo )
      {
        _4__this->fields.isErrorDialog = 1;
        v148 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v142->_1.image
                                   + 49))(
                                    v142,
                                    *((_QWORD *)v142->_1.image + 50));
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)image[45]();
        v145 = v134[4].klass;
        if ( !v145 )
          goto LABEL_375;
        v146 = this;
        v147 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v145->_1.image
                                   + 49))(
                                    v145,
                                    *((_QWORD *)v145->_1.image + 50));
        v148 = System_String__Concat_62388900(
                 (System_String_o *)StringLiteral_18887/*"error "*/,
                 (System_String_o *)v146,
                 (System_String_o *)StringLiteral_113/*" "*/,
                 v147,
                 0LL);
      }
      v151 = (int)v148;
      v4->fields._errorCode_5__6 = v148;
      p_errorCode_5__6 = (CGThumbnailListItem_o *)&v4->fields._errorCode_5__6;
LABEL_109:
      sub_1BC2FAC(p_errorCode_5__6, v151, v149, v150);
LABEL_140:
      v4->fields._url_5__11 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._url_5__11, 0, (int32_t)v136, v137);
      p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12;
      v108 = 0;
      v4->fields._asyncOperater_5__12 = 0LL;
LABEL_141:
      sub_1BC2FAC(p_errorLocalizeCode_5__7, v108, v105, v106);
      method = (const MethodInfo *)v4->fields._errorCode_5__6;
      if ( method )
      {
        AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
        v184 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v184 = ManagerConfig_TypeInfo;
        }
        if ( v184->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v185 = _4__this->fields.data;
          if ( !v185 )
            goto LABEL_375;
          v186 = (CommonUI_o *)this;
          v187 = System_String__Concat_62388900(
                   (System_String_o *)StringLiteral_2364/*"AssetName : "*/,
                   v185->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v4->fields._errorCode_5__6,
                   0LL);
          v188 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v188, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v186 )
            goto LABEL_375;
          v353 &= 0xFFFFFFFF00000000LL;
          *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
          LODWORD(effectDistance.fields.value.fields.y) = v353;
          CommonUI__OpenWarningDialog(
            v186,
            (System_String_o *)StringLiteral_15783/*"[FFFF80]Download error for debug"*/,
            v187,
            v188,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_148:
          if ( _4__this->fields.isErrorDialog )
          {
            v306 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v306;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(p__2__current, (int32_t)v306, (int32_t)v2, v3);
            v72 = 2;
            goto LABEL_355;
          }
        }
        if ( v4->fields._isAutoRetry_5__4 )
        {
          v300 = ManagerConfig_TypeInfo;
          autoRetryCount_5__3 = v4->fields._autoRetryCount_5__3;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v300 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v300->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v303 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v303, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v303;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(p__2__current, (int32_t)v303, v304, v305);
          v72 = 3;
          goto LABEL_355;
        }
        if ( !v4->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          if ( !byte_4B01069 )
          {
            sub_1BC3008(&ManagementManager_TypeInfo, method);
            byte_4B01069 = 1;
          }
          v189 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v189 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v189->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v4->fields._errorLocalizeCode_5__7;
          v193 = (CommonUI_o *)Instance;
          v194 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v195 = v4->fields._errorLocalizeCode_5__7;
            else
              v195 = (System_String_o *)StringLiteral_2031/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v196 = LocalizationManager__Get(v195, 0LL);
            v197 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v197, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v193 )
              goto LABEL_375;
            CommonUI__OpenRetryBootDialog(v193, v194, v196, v197, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v198 = v4->fields._errorLocalizeCode_5__7;
            else
              v198 = (System_String_o *)StringLiteral_2032/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v199 = LocalizationManager__Get(v198, 0LL);
            v200 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v200, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v193 )
              goto LABEL_375;
            CommonUI__OpenRetryDialog(v193, v194, v199, v200, 1, 0LL);
          }
LABEL_172:
          if ( _4__this->fields.isErrorDialog )
          {
            v307 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v307;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(p__2__current, (int32_t)v307, (int32_t)v2, v3);
            v72 = 4;
            goto LABEL_355;
          }
        }
      }
LABEL_173:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFD46F )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, method);
        byte_4AFD46F = 1;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      }
      if ( !_4__this )
        goto LABEL_375;
      if ( LOBYTE(this[1].fields._errorCode_5__6[6].klass) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v308, v309);
        _4__this->fields.readData = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v310, v311);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v4->fields._isEncrypted_5__2 )
        goto LABEL_298;
      v201 = _4__this->fields.loader;
      if ( v201 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v201, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v202, v203);
        _4__this->fields.readData = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v204, v205);
      }
      if ( !v4->fields._isCrcError_5__5 )
      {
LABEL_291:
        v4->fields._errorCode_5__6 = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, 0, (int32_t)v2, v3);
        v4->fields._errorLocalizeCode_5__7 = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__7, 0, v275, v276);
        v4->fields._wait_5__10 = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._wait_5__10, 0, v277, v278);
        goto LABEL_292;
      }
      v206 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v206);
      v4->fields._url_5__11 = ConfigFileAddress;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._url_5__11, (int32_t)ConfigFileAddress, v208, v209);
LABEL_189:
      v210 = v4->fields._url_5__11;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v210, v59);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_375;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v214 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)this, v212, v213);
      v215 = UnityEngine_Time__get_unscaledTime(0LL);
      v216 = ManagerConfig_TypeInfo;
      v217 = v215;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v216 = ManagerConfig_TypeInfo;
      }
      v218 = v216->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__9 = 0.0;
      v4->fields._requestTime_5__8 = v217 + v218;
      this = *v214;
      if ( !*v214 )
        goto LABEL_375;
      v219 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v4->fields._asyncOperater_5__12 = v219;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12, (int32_t)v219, v220, v221);
LABEL_196:
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
        if ( !this )
          goto LABEL_375;
        v224 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v225 = v4->fields._loadProgress_5__9;
        v226 = v224;
        v227 = UnityEngine_Time__get_unscaledTime(0LL);
        v130 = v226 == v225;
        v228 = v227;
        if ( !v130 )
        {
          v348 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v348 = ManagerConfig_TypeInfo;
          }
          v349 = v348->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
          v4->fields._requestTime_5__8 = v228 + v349->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v4->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_374;
        }
        if ( v227 < v4->fields._requestTime_5__8 )
        {
LABEL_374:
          v350 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = v350;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(p__2__current, (int32_t)v350, v222, v223);
          v72 = 5;
          goto LABEL_355;
        }
      }
      v4->fields._errorCode_5__6 = 0LL;
      v229 = &v4->fields._errorCode_5__6;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, 0, v222, v223);
      if ( !_4__this )
        goto LABEL_375;
      v230 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v230 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v230, 0LL);
        v272 = &StringLiteral_2377/*"AssetStorageList download time over"*/;
        goto LABEL_327;
      }
      v231 = UnityEngine_Networking_UnityWebRequest__get_error(*v230, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v231, 0LL);
      if ( !*v230 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v313 = UnityEngine_Networking_UnityWebRequest__get_error(*v230, 0LL);
        goto LABEL_328;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v230, 0LL);
      if ( !this )
        goto LABEL_375;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v233 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v233, 0LL) )
      {
        v272 = &StringLiteral_2375/*"AssetStorageList download error"*/;
        goto LABEL_327;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BC30B0(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_375;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v233 )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_62405196(v233, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_375;
      v236 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25018/*"~"*/, 0LL) )
        goto LABEL_286;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BC30B0(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_375;
      _2__current = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !_2__current )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = 13;
      if ( _2__current == 1 )
        goto LABEL_258;
      WORD1(this->fields.__4__this) = 10;
      v238 = System_String__IndexOfAny((System_String_o *)v236, (System_Char_array *)this, 0LL);
      if ( v238 < 2 )
        goto LABEL_286;
      v239 = v238;
      v240 = System_String__Substring_62394572((System_String_o *)v236, 1, v238 - 1, 0LL);
      v241 = System_String__Substring((System_String_o *)v236, v239 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_375;
      v242 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                    this,
                                    v241,
                                    this->klass[1]._1.nestedTypes);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v243 = Crc32__Compute(v242, 0LL);
      if ( System_UInt32__Parse(v240, 0LL) != v243 )
      {
LABEL_286:
        v272 = &StringLiteral_2374/*"AssetStorageList download data error"*/;
LABEL_327:
        v313 = (System_String_o *)*v272;
LABEL_328:
        *v229 = v313;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v313, v234, v235);
        if ( *v230 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v230, 0LL);
          *v230 = 0LL;
          sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v314, v315);
        }
        if ( !*v229 )
          goto LABEL_354;
        v316 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v316 = ManagerConfig_TypeInfo;
        }
        if ( v316->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v317 = _4__this->fields.data;
          if ( !v317 )
            goto LABEL_375;
          v318 = (CommonUI_o *)this;
          v319 = System_String__Concat_62388900(
                   (System_String_o *)StringLiteral_2364/*"AssetName : "*/,
                   v317->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v229,
                   0LL);
          v320 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v320, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v318 )
            goto LABEL_375;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v318,
            (System_String_o *)StringLiteral_15783/*"[FFFF80]Download error for debug"*/,
            v319,
            v320,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_337:
          if ( _4__this->fields.isErrorDialog )
          {
            v321 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v321;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(p__2__current, (int32_t)v321, (int32_t)v2, v3);
            v72 = 6;
            goto LABEL_355;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4B01069 )
        {
          sub_1BC3008(&ManagementManager_TypeInfo, method);
          byte_4B01069 = 1;
        }
        v322 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v322 = ManagementManager_TypeInfo;
        }
        v323 = v322->static_fields->isDuringStartup;
        v324 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v323 )
        {
          v325 = LocalizationManager__Get((System_String_o *)StringLiteral_2031/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v326 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v326, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v324 )
            goto LABEL_375;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v324, (System_String_o *)StringLiteral_1/*""*/, v325, v326, 0, 0LL);
        }
        else
        {
          v327 = LocalizationManager__Get((System_String_o *)StringLiteral_2032/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
          v328 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v328, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v324 )
            goto LABEL_375;
          CommonUI__OpenRetryDialog((CommonUI_o *)v324, (System_String_o *)StringLiteral_1/*""*/, v327, v328, 0, 0LL);
        }
LABEL_352:
        if ( _4__this->fields.isErrorDialog )
        {
          v329 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = v329;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(p__2__current, (int32_t)v329, (int32_t)v2, v3);
          v72 = 7;
        }
        else
        {
LABEL_354:
          v330 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v330, 1.0, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v330;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BC2FAC(p__2__current, (int32_t)v330, v331, v332);
          v72 = 8;
        }
LABEL_355:
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v72;
        return 1;
      }
      if ( !v241 )
        goto LABEL_272;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BC30B0(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_375;
      v244 = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !v244 || (LOWORD(this->fields.__4__this) = 13, v244 == 1) )
LABEL_258:
        sub_1BC326C(this, method, v136);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62397840(v241, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_375;
      v245 = this->fields.__2__current;
      v246 = this;
      v247 = (_DWORD)v245 - 1;
      if ( (int)v245 < 1 )
        goto LABEL_272;
      v248 = 0;
      while ( 2 )
      {
        v249 = (System_String_o *)*((_QWORD *)&v246->fields.__4__this + v248);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1BC30B0(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v249 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_62397724(v249, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_375;
        v250 = this->fields.__2__current;
        v251 = this;
        if ( (int)v250 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1758/*"@"*/,
                                                      0LL);
          if ( !LODWORD(v251->fields.__2__current) )
            goto LABEL_258;
          v252 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v251->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          if ( (v252 & 1) != 0 )
          {
            v254 = System_String__Substring((System_String_o *)this, 1, 0LL);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v251->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v251->fields.resourceNames;
            v256 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v254, v256, v253);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_272;
            goto LABEL_256;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_25018/*"~"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v251->fields.__2__current) )
              goto LABEL_258;
            this = (AssetLoader__LoadDataCR_d__29_o *)v251->fields.__4__this;
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v250 = v251->fields.__2__current;
              break;
            }
          }
LABEL_256:
          if ( v247 == v248 )
            goto LABEL_272;
          if ( (unsigned int)++v248 >= LODWORD(v246->fields.__2__current) )
            goto LABEL_258;
          continue;
        }
        break;
      }
      if ( (_DWORD)v250 != 5 )
        goto LABEL_272;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v251->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_375;
      v257 = System_String__Trim((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v257, 0LL);
      if ( LODWORD(v251->fields.__2__current) <= 4 )
        goto LABEL_258;
      v258 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v251->fields._errorCode_5__6, v136);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_256;
      v259 = _4__this->fields.data;
      if ( !v259 )
        goto LABEL_375;
      if ( v258 == v259->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4B01069 )
        {
          sub_1BC3008(&ManagementManager_TypeInfo, method);
          byte_4B01069 = 1;
        }
        v260 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v260 = ManagementManager_TypeInfo;
        }
        v261 = v260->static_fields->isDuringStartup;
        v262 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v261 )
        {
          v263 = LocalizationManager__Get((System_String_o *)StringLiteral_2031/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v264 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v264, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( v262 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v262, (System_String_o *)StringLiteral_1/*""*/, v263, v264, 1, 0LL);
            goto LABEL_289;
          }
          goto LABEL_375;
        }
        v273 = LocalizationManager__Get((System_String_o *)StringLiteral_2032/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v274 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v274, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( !v262 )
          goto LABEL_375;
        CommonUI__OpenRetryDialog((CommonUI_o *)v262, (System_String_o *)StringLiteral_1/*""*/, v273, v274, 1, 0LL);
LABEL_289:
        if ( !_4__this->fields.isErrorDialog )
        {
          v4->fields._url_5__11 = 0LL;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._url_5__11, 0, (int32_t)v2, v3);
          goto LABEL_291;
        }
        v312 = (Il2CppObject *)v4->fields._wait_5__10;
        v4->fields.__2__current = v312;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(p__2__current, (int32_t)v312, (int32_t)v2, v3);
        v72 = 9;
        goto LABEL_355;
      }
LABEL_272:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4B01069 )
      {
        sub_1BC3008(&ManagementManager_TypeInfo, method);
        byte_4B01069 = 1;
      }
      v265 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v265 = ManagementManager_TypeInfo;
      }
      v266 = v265->static_fields->isDuringStartup;
      v267 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v266 )
          goto LABEL_280;
LABEL_282:
        v268 = &StringLiteral_9159/*"NETWORK_ERROR_ASSET_UPDATE"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !v266 )
          goto LABEL_282;
LABEL_280:
        v268 = &StringLiteral_9160/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
      }
      v269 = LocalizationManager__Get((System_String_o *)*v268, 0LL);
      v270 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v270, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
      if ( !v267 )
        goto LABEL_375;
      CommonUI__OpenErrorDialog((CommonUI_o *)v267, (System_String_o *)StringLiteral_1/*""*/, v269, v270, 0, 0LL);
      return 0;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._req_5__13;
      v4->fields.__1__state = -1;
      if ( !this )
        goto LABEL_37;
      if ( !_4__this )
        goto LABEL_375;
      v66 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(
                                                  (UnityEngine_AssetBundleCreateRequest_o *)this,
                                                  0LL);
      if ( !v66 )
        goto LABEL_375;
      v68 = AssetData__SetAssetBundleData(v66, (UnityEngine_AssetBundle_o *)this, v4->fields.resourceNames, v67);
      v4->fields.__2__current = (Il2CppObject *)v68;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(p__2__current, (int32_t)v68, v70, v71);
      v72 = 13;
      goto LABEL_355;
    case 0xD:
      v4->fields.__1__state = -1;
LABEL_37:
      v4->fields._req_5__13 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._req_5__13, 0, (int32_t)v2, v3);
      if ( _4__this )
        goto LABEL_38;
      goto LABEL_375;
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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

  if ( (byte_4B00FF7 & 1) == 0 )
  {
    sub_1BC3008(&AssetLoader___c_TypeInfo, v1);
    byte_4B00FF7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(AssetLoader___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)AssetLoader___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B00FF8 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_4B00FF8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v3);
  return BYTE4(Instance[7].monitor) == 0;
}