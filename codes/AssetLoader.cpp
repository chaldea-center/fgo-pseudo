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
    sub_1B86614(this, method);
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
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x21
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
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  int32_t v121; // w1
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  int32_t v124; // w1
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  int32_t v127; // w1
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  int32_t v130; // w1
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  int32_t v133; // w1
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  int32_t v136; // w1
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  int32_t v139; // w1
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  int32_t v142; // w1
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  int32_t v145; // w1
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  int32_t v148; // w1
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  int32_t v151; // w1
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  int32_t v154; // w1
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  int32_t v157; // w1
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  int32_t v160; // w1
  __int64 v161; // x23
  __int64 v162; // x24
  CrashReporter_o *v163; // x19

  v3 = errorCode;
  if ( (byte_4A4D4E3 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_1B863B8(&string___TypeInfo, v6);
    sub_1B863B8(&StringLiteral_13932/*"The request timed out."*/, v7);
    sub_1B863B8(&StringLiteral_20742/*"java.net.SocketException"*/, v8);
    sub_1B863B8(&StringLiteral_12084/*"SSL CA certificate error"*/, v9);
    sub_1B863B8(&StringLiteral_1426/*"404: Not Found"*/, v10);
    sub_1B863B8(&StringLiteral_13873/*"The network connection was lost."*/, v11);
    sub_1B863B8(&StringLiteral_1420/*"400: Bad Request"*/, v12);
    sub_1B863B8(&StringLiteral_14667/*"Unable to complete SSL connection"*/, v13);
    sub_1B863B8(&StringLiteral_14697/*"Unable to read data"*/, v14);
    sub_1B863B8(&StringLiteral_17981/*"connect failed"*/, v15);
    sub_1B863B8(&StringLiteral_7123/*"HTTP/1.1 500 Internal Server Error"*/, v16);
    sub_1B863B8(&StringLiteral_20744/*"java.net.UnknownHostException"*/, v17);
    sub_1B863B8(&StringLiteral_1434/*"500: Internal Server Error"*/, v18);
    sub_1B863B8(&StringLiteral_1436/*"502:"*/, v19);
    sub_1B863B8(&StringLiteral_11146/*"Request timeout"*/, v20);
    sub_1B863B8(&StringLiteral_4633/*"Connection reset by peer"*/, v21);
    sub_1B863B8(&StringLiteral_4990/*"DLErrorType"*/, v22);
    sub_1B863B8(&StringLiteral_4989/*"DLErrorAsset"*/, v23);
    sub_1B863B8(&StringLiteral_1448/*"504: Gateway Timeout"*/, v24);
    sub_1B863B8(&StringLiteral_14871/*"Unknown Error"*/, v25);
    sub_1B863B8(&StringLiteral_1438/*"503 Auto retry count"*/, v26);
    sub_1B863B8(&StringLiteral_20725/*"java.io.EOFException"*/, v27);
    sub_1B863B8(&StringLiteral_20739/*"java.net.ConnectException"*/, v28);
    sub_1B863B8(&StringLiteral_1424/*"403: Forbidden"*/, v29);
    sub_1B863B8(&StringLiteral_4632/*"Connection refused"*/, v30);
    sub_1B863B8(&StringLiteral_7124/*"HTTP/1.1 504 Gateway Timeout"*/, v31);
    sub_1B863B8(&StringLiteral_1422/*"401: Authorization Required"*/, v32);
    sub_1B863B8(&StringLiteral_20726/*"java.io.IOException"*/, v33);
    sub_1B863B8(&StringLiteral_9301/*"No address associated with hostname"*/, v34);
    sub_1B863B8(&StringLiteral_20741/*"java.net.ProtocolException"*/, v35);
    sub_1B863B8(&StringLiteral_2392/*"AssetBundle file download time over"*/, v36);
    sub_1B863B8(&StringLiteral_1427/*"408: Request Time-out"*/, v37);
    sub_1B863B8(&StringLiteral_14317/*"Too many redirects"*/, v38);
    sub_1B863B8(&StringLiteral_12702/*"Software caused connection abort"*/, v39);
    sub_1B863B8(&StringLiteral_2391/*"AssetBundle file check sum error"*/, v40);
    sub_1B863B8(&StringLiteral_20740/*"java.net.NoRouteToHostException"*/, v41);
    sub_1B863B8(&StringLiteral_5218/*"Destination host has an erroneous SSL certificate"*/, v42);
    sub_1B863B8(&StringLiteral_4634/*"Connection timed out"*/, v43);
    sub_1B863B8(&StringLiteral_4243/*"Cannot resolve destination host"*/, v44);
    sub_1B863B8(&StringLiteral_20743/*"java.net.SocketTimeoutException"*/, v45);
    sub_1B863B8(&StringLiteral_2395/*"AssetLoadError"*/, v46);
    byte_4A4D4E3 = 1;
  }
  Instance = sub_1B86460(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_58;
  v51 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v52 = StringLiteral_9301/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9301/*"No address associated with hostname"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(Instance + 32), v52, v49, v50);
  if ( *(_DWORD *)(v51 + 24) <= 1u )
    goto LABEL_47;
  v55 = StringLiteral_2392/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v51 + 40) = StringLiteral_2392/*"AssetBundle file download time over"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 40), v55, v53, v54);
  if ( *(_DWORD *)(v51 + 24) <= 2u )
    goto LABEL_47;
  v58 = StringLiteral_13873/*"The network connection was lost."*/;
  *(_QWORD *)(v51 + 48) = StringLiteral_13873/*"The network connection was lost."*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 48), v58, v56, v57);
  if ( *(_DWORD *)(v51 + 24) <= 3u )
    goto LABEL_47;
  v61 = StringLiteral_4633/*"Connection reset by peer"*/;
  *(_QWORD *)(v51 + 56) = StringLiteral_4633/*"Connection reset by peer"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 56), v61, v59, v60);
  if ( *(_DWORD *)(v51 + 24) <= 4u )
    goto LABEL_47;
  v64 = StringLiteral_12702/*"Software caused connection abort"*/;
  *(_QWORD *)(v51 + 64) = StringLiteral_12702/*"Software caused connection abort"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 64), v64, v62, v63);
  if ( *(_DWORD *)(v51 + 24) <= 5u )
    goto LABEL_47;
  v67 = StringLiteral_4634/*"Connection timed out"*/;
  *(_QWORD *)(v51 + 72) = StringLiteral_4634/*"Connection timed out"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 72), v67, v65, v66);
  if ( *(_DWORD *)(v51 + 24) <= 6u )
    goto LABEL_47;
  v70 = StringLiteral_4632/*"Connection refused"*/;
  *(_QWORD *)(v51 + 80) = StringLiteral_4632/*"Connection refused"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 80), v70, v68, v69);
  if ( *(_DWORD *)(v51 + 24) <= 7u )
    goto LABEL_47;
  v73 = StringLiteral_13932/*"The request timed out."*/;
  *(_QWORD *)(v51 + 88) = StringLiteral_13932/*"The request timed out."*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 88), v73, v71, v72);
  if ( *(_DWORD *)(v51 + 24) <= 8u )
    goto LABEL_47;
  v76 = StringLiteral_4243/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v51 + 96) = StringLiteral_4243/*"Cannot resolve destination host"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 96), v76, v74, v75);
  if ( *(_DWORD *)(v51 + 24) <= 9u )
    goto LABEL_47;
  v79 = StringLiteral_14667/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v51 + 104) = StringLiteral_14667/*"Unable to complete SSL connection"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 104), v79, v77, v78);
  if ( *(_DWORD *)(v51 + 24) <= 0xAu )
    goto LABEL_47;
  v82 = StringLiteral_14871/*"Unknown Error"*/;
  *(_QWORD *)(v51 + 112) = StringLiteral_14871/*"Unknown Error"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 112), v82, v80, v81);
  if ( *(_DWORD *)(v51 + 24) <= 0xBu )
    goto LABEL_47;
  v85 = StringLiteral_11146/*"Request timeout"*/;
  *(_QWORD *)(v51 + 120) = StringLiteral_11146/*"Request timeout"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 120), v85, v83, v84);
  if ( *(_DWORD *)(v51 + 24) <= 0xCu )
    goto LABEL_47;
  v88 = StringLiteral_2391/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v51 + 128) = StringLiteral_2391/*"AssetBundle file check sum error"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 128), v88, v86, v87);
  if ( *(_DWORD *)(v51 + 24) <= 0xDu )
    goto LABEL_47;
  v91 = StringLiteral_12084/*"SSL CA certificate error"*/;
  *(_QWORD *)(v51 + 136) = StringLiteral_12084/*"SSL CA certificate error"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 136), v91, v89, v90);
  if ( *(_DWORD *)(v51 + 24) <= 0xEu )
    goto LABEL_47;
  v94 = StringLiteral_7123/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v51 + 144) = StringLiteral_7123/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 144), v94, v92, v93);
  if ( *(_DWORD *)(v51 + 24) <= 0xFu )
    goto LABEL_47;
  v97 = StringLiteral_7124/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v51 + 152) = StringLiteral_7124/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 152), v97, v95, v96);
  if ( *(_DWORD *)(v51 + 24) <= 0x10u )
    goto LABEL_47;
  v100 = StringLiteral_5218/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v51 + 160) = StringLiteral_5218/*"Destination host has an erroneous SSL certificate"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 160), v100, v98, v99);
  if ( *(_DWORD *)(v51 + 24) <= 0x11u )
    goto LABEL_47;
  v103 = StringLiteral_14317/*"Too many redirects"*/;
  *(_QWORD *)(v51 + 168) = StringLiteral_14317/*"Too many redirects"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 168), v103, v101, v102);
  if ( *(_DWORD *)(v51 + 24) <= 0x12u )
    goto LABEL_47;
  v106 = StringLiteral_20725/*"java.io.EOFException"*/;
  *(_QWORD *)(v51 + 176) = StringLiteral_20725/*"java.io.EOFException"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 176), v106, v104, v105);
  if ( *(_DWORD *)(v51 + 24) <= 0x13u )
    goto LABEL_47;
  v109 = StringLiteral_20742/*"java.net.SocketException"*/;
  *(_QWORD *)(v51 + 184) = StringLiteral_20742/*"java.net.SocketException"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 184), v109, v107, v108);
  if ( *(_DWORD *)(v51 + 24) <= 0x14u )
    goto LABEL_47;
  v112 = StringLiteral_20743/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v51 + 192) = StringLiteral_20743/*"java.net.SocketTimeoutException"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 192), v112, v110, v111);
  if ( *(_DWORD *)(v51 + 24) <= 0x15u )
    goto LABEL_47;
  v115 = StringLiteral_20740/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v51 + 200) = StringLiteral_20740/*"java.net.NoRouteToHostException"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 200), v115, v113, v114);
  if ( *(_DWORD *)(v51 + 24) <= 0x16u )
    goto LABEL_47;
  v118 = StringLiteral_20726/*"java.io.IOException"*/;
  *(_QWORD *)(v51 + 208) = StringLiteral_20726/*"java.io.IOException"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 208), v118, v116, v117);
  if ( *(_DWORD *)(v51 + 24) <= 0x17u )
    goto LABEL_47;
  v121 = StringLiteral_20739/*"java.net.ConnectException"*/;
  *(_QWORD *)(v51 + 216) = StringLiteral_20739/*"java.net.ConnectException"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 216), v121, v119, v120);
  if ( *(_DWORD *)(v51 + 24) <= 0x18u )
    goto LABEL_47;
  v124 = StringLiteral_17981/*"connect failed"*/;
  *(_QWORD *)(v51 + 224) = StringLiteral_17981/*"connect failed"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 224), v124, v122, v123);
  if ( *(_DWORD *)(v51 + 24) <= 0x19u )
    goto LABEL_47;
  v127 = StringLiteral_20741/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v51 + 232) = StringLiteral_20741/*"java.net.ProtocolException"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 232), v127, v125, v126);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Au )
    goto LABEL_47;
  v130 = StringLiteral_20744/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v51 + 240) = StringLiteral_20744/*"java.net.UnknownHostException"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 240), v130, v128, v129);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Bu )
    goto LABEL_47;
  v133 = StringLiteral_1420/*"400: Bad Request"*/;
  *(_QWORD *)(v51 + 248) = StringLiteral_1420/*"400: Bad Request"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 248), v133, v131, v132);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Cu )
    goto LABEL_47;
  v136 = StringLiteral_1422/*"401: Authorization Required"*/;
  *(_QWORD *)(v51 + 256) = StringLiteral_1422/*"401: Authorization Required"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 256), v136, v134, v135);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Du )
    goto LABEL_47;
  v139 = StringLiteral_1424/*"403: Forbidden"*/;
  *(_QWORD *)(v51 + 264) = StringLiteral_1424/*"403: Forbidden"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 264), v139, v137, v138);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Eu )
    goto LABEL_47;
  v142 = StringLiteral_1426/*"404: Not Found"*/;
  *(_QWORD *)(v51 + 272) = StringLiteral_1426/*"404: Not Found"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 272), v142, v140, v141);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Fu )
    goto LABEL_47;
  v145 = StringLiteral_1427/*"408: Request Time-out"*/;
  *(_QWORD *)(v51 + 280) = StringLiteral_1427/*"408: Request Time-out"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 280), v145, v143, v144);
  if ( *(_DWORD *)(v51 + 24) <= 0x20u )
    goto LABEL_47;
  v148 = StringLiteral_1434/*"500: Internal Server Error"*/;
  *(_QWORD *)(v51 + 288) = StringLiteral_1434/*"500: Internal Server Error"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 288), v148, v146, v147);
  if ( *(_DWORD *)(v51 + 24) <= 0x21u )
    goto LABEL_47;
  v151 = StringLiteral_1436/*"502:"*/;
  *(_QWORD *)(v51 + 296) = StringLiteral_1436/*"502:"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 296), v151, v149, v150);
  if ( *(_DWORD *)(v51 + 24) <= 0x22u
    || (v154 = StringLiteral_1438/*"503 Auto retry count"*/,
        *(_QWORD *)(v51 + 304) = StringLiteral_1438/*"503 Auto retry count"*/,
        sub_1B8635C((CGThumbnailListItem_o *)(v51 + 304), v154, v152, v153),
        *(_DWORD *)(v51 + 24) <= 0x23u)
    || (v157 = StringLiteral_1448/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v51 + 312) = StringLiteral_1448/*"504: Gateway Timeout"*/,
        sub_1B8635C((CGThumbnailListItem_o *)(v51 + 312), v157, v155, v156),
        *(_DWORD *)(v51 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1B8661C(Instance, v48);
  }
  v160 = StringLiteral_14697/*"Unable to read data"*/;
  *(_QWORD *)(v51 + 320) = StringLiteral_14697/*"Unable to read data"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v51 + 320), v160, v158, v159);
  if ( (int)*(_QWORD *)(v51 + 24) < 1 )
  {
LABEL_48:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_57;
  }
  v161 = 0LL;
  v162 = (unsigned int)*(_QWORD *)(v51 + 24) - 1LL;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_58;
    Instance = System_String__Contains(v3, *(System_String_o **)(v51 + 32 + 8 * v161), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( v162 == v161 )
      goto LABEL_48;
    if ( ++v161 >= (unsigned __int64)*(unsigned int *)(v51 + 24) )
      goto LABEL_47;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v163 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v48), !v163) )
  {
LABEL_58:
    sub_1B86614(Instance, v48);
  }
  CrashReporter__AddCustomKey(v163, (System_String_o *)StringLiteral_4989/*"DLErrorAsset"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v161 >= *(_DWORD *)(v51 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4990/*"DLErrorType"*/,
    *(System_String_o **)(v51 + 32 + 8 * v161),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  v3 = (System_String_o *)StringLiteral_2395/*"AssetLoadError"*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)v3, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_4A4D4E0 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4D4E0 = 1;
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
  UnityEngine_Object__Destroy_69356292((UnityEngine_Object_o *)this, 0LL);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
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
    sub_1B86614(0LL, name);
  return System_String__Equals_61680480(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_38726360(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_38718804(data, type, name, method);
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

  if ( (byte_4A4D4DF & 1) == 0 )
  {
    sub_1B863B8(&AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames);
    byte_4A4D4DF = 1;
  }
  v5 = sub_1B86604(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)resourceNames, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  System_Byte_array *readData; // x20
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A4D4E1 & 1) == 0 )
  {
    sub_1B863B8(&CatAndMouseGame_TypeInfo, method);
    byte_4A4D4E1 = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v4 = CatAndMouseGame__MouseGame4(readData, 0LL);
  this->fields._decData = v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._decData, (int32_t)v4, v5, v6);
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

  if ( (byte_4A4D4E2 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, method);
    sub_1B863B8(&ManagementManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6);
    byte_4A4D4E2 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.loader, 0, v8, v9);
  }
  this->fields.readData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.readData, 0, v2, v3);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4A4D556 )
  {
    sub_1B863B8(&ManagementManager_TypeInfo, v10);
    byte_4A4D556 = 1;
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
    UnityEngine_Application__Quit_69149480(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v13);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callbackFunc, (int32_t)resourceNames, method);
  v10 = (__int64)*(p_endCallback - 1);
  if ( !v10 )
    sub_1B86614(v7, v8);
  v11 = *(_DWORD *)(v10 + 40) != *(_DWORD *)(v10 + 44);
  this->fields.isDownload = v11;
  this->fields.isRequestDownload = v11;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
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
      sub_1B86614(0LL, v6);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)p_threadDecrypt, 0, v2, v3);
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

  if ( (byte_4A4D4DB & 1) == 0 )
  {
    sub_1B863B8(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_4A4D4DB = 1;
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
    v9 = sub_1BC0674(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B868D4(v8);
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

  if ( (byte_4A4D4DD & 1) == 0 )
  {
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_4A4D4DD = 1;
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
    v9 = sub_1BC0674(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B868D4(v8);
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
    sub_1B86614(this, method);
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
    sub_1B86614(this, method);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B86614(this, method);
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

  if ( (byte_4A4D4DC & 1) == 0 )
  {
    sub_1B863B8(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_4A4D4DC = 1;
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
    v9 = sub_1BC0674(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B868D4(v8);
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

  if ( (byte_4A4D4DE & 1) == 0 )
  {
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_4A4D4DE = 1;
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
    v9 = sub_1BC0674(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B868D4(v8);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D23EC;
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
        v11 = sub_1B86470(v6);
        v12 = sub_1B8692C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19D24E8;
          else
            v9 = (Il2CppObject *)sub_19D24AC;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19D2428;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19D23FC;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19D23CC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2384;
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
  return (System_IAsyncResult_o *)sub_1B8636C(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D21FC;
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
        v11 = sub_1B86470(v6);
        v12 = sub_1B8692C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19D22F8;
          else
            v9 = (Il2CppObject *)sub_19D22BC;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19D2238;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19D220C;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19D21DC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2194;
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
  return (System_IAsyncResult_o *)sub_1B8636C(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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
  int32_t v136; // w2
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
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  AssetLoader__LoadDataCR_d__29_o *v169; // x22
  int32_t v170; // w1
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  struct System_String_o *v173; // x1
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  int32_t v176; // w1
  struct AssetData_o *v177; // x8
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  int32_t v182; // w1
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  int32_t v187; // w1
  System_String_o *v188; // x0
  int32_t v189; // w2
  const MethodInfo *v190; // x3
  ManagerConfig_c *v191; // x0
  struct AssetData_o *v192; // x8
  CommonUI_o *v193; // x21
  System_String_o *v194; // x22
  ErrorDialog_ClickDelegate_o *v195; // x23
  ManagementManager_c *v196; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v200; // x22
  System_String_o *v201; // x21
  System_String_o *v202; // x23
  System_String_o *v203; // x23
  ErrorDialog_ClickDelegate_o *v204; // x24
  System_String_o *v205; // x23
  System_String_o *v206; // x23
  ErrorDialog_ClickDelegate_o *v207; // x24
  UnityEngine_Networking_UnityWebRequest_o *v208; // x0
  int32_t v209; // w2
  const MethodInfo *v210; // x3
  int32_t v211; // w2
  const MethodInfo *v212; // x3
  AssetManager_c *v213; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  System_String_o *v217; // x21
  System_String_o *UrlString; // x0
  int32_t v219; // w2
  const MethodInfo *v220; // x3
  AssetLoader__LoadDataCR_d__29_o **v221; // x21
  float v222; // s0
  ManagerConfig_c *v223; // x0
  float v224; // s8
  float v225; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v226; // x0
  int32_t v227; // w2
  const MethodInfo *v228; // x3
  int32_t v229; // w2
  const MethodInfo *v230; // x3
  float v231; // s0
  float v232; // s9
  float v233; // s8
  float v234; // s0
  float v235; // s8
  System_String_o **v236; // x21
  UnityEngine_Networking_UnityWebRequest_o **v237; // x22
  System_String_o *v238; // x0
  System_String_o *text; // x23
  System_String_o *v240; // x23
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  AssetLoader__LoadDataCR_d__29_o *v243; // x23
  int _2__current; // w8
  int32_t v245; // w0
  int32_t v246; // w25
  System_String_o *v247; // x24
  System_String_o *v248; // x23
  System_Byte_array *v249; // x25
  uint32_t v250; // w25
  int v251; // w8
  Il2CppObject *v252; // x8
  AssetLoader__LoadDataCR_d__29_o *v253; // x21
  int v254; // w25
  int v255; // w27
  System_String_o *v256; // x22
  Il2CppObject *v257; // x8
  AssetLoader__LoadDataCR_d__29_o *v258; // x22
  char v259; // w8
  const MethodInfo *v260; // x2
  System_String_o *v261; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v263; // x22
  System_String_o *v264; // x0
  const MethodInfo *v265; // x2
  int v266; // w23
  struct AssetData_o *v267; // x8
  ManagementManager_c *v268; // x0
  _BOOL4 v269; // w22
  Il2CppObject *v270; // x21
  System_String_o *v271; // x22
  ErrorDialog_ClickDelegate_o *v272; // x23
  ManagementManager_c *v273; // x0
  _BOOL4 v274; // w21
  Il2CppObject *v275; // x19
  __int64 *v276; // x8
  System_String_o *v277; // x21
  ErrorDialog_ClickDelegate_o *v278; // x22
  bool result; // w0
  __int64 *v280; // x8
  System_String_o *v281; // x22
  ErrorDialog_ClickDelegate_o *v282; // x23
  int32_t v283; // w2
  const MethodInfo *v284; // x3
  int32_t v285; // w2
  const MethodInfo *v286; // x3
  System_String_o *name; // x21
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
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  CGThumbnailListItem_o *v302; // x20
  int32_t v303; // w2
  const MethodInfo *v304; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v305; // x0
  int32_t v306; // w2
  const MethodInfo *v307; // x3
  ManagerConfig_c *v308; // x0
  int autoRetryCount_5__3; // w21
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v311; // x20
  int32_t v312; // w2
  const MethodInfo *v313; // x3
  Il2CppObject *v314; // x1
  Il2CppObject *v315; // x1
  int32_t v316; // w2
  const MethodInfo *v317; // x3
  int32_t v318; // w2
  const MethodInfo *v319; // x3
  Il2CppObject *v320; // x1
  System_String_o *v321; // x1
  int32_t v322; // w2
  const MethodInfo *v323; // x3
  ManagerConfig_c *v324; // x0
  struct AssetData_o *v325; // x8
  CommonUI_o *v326; // x22
  System_String_o *v327; // x21
  ErrorDialog_ClickDelegate_o *v328; // x23
  Il2CppObject *v329; // x1
  ManagementManager_c *v330; // x0
  _BOOL4 v331; // w22
  Il2CppObject *v332; // x21
  System_String_o *v333; // x22
  ErrorDialog_ClickDelegate_o *v334; // x23
  System_String_o *v335; // x22
  ErrorDialog_ClickDelegate_o *v336; // x23
  Il2CppObject *v337; // x1
  UnityEngine_WaitForSeconds_o *v338; // x20
  int32_t v339; // w2
  const MethodInfo *v340; // x3
  AssetLoader___c_c *v341; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v343; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int32_t v345; // w2
  const MethodInfo *v346; // x3
  UnityEngine_WaitUntil_o *v347; // x21
  int32_t v348; // w2
  const MethodInfo *v349; // x3
  UnityEngine_Networking_DownloadHandler_o *v350; // x0
  const MethodInfo *v351; // x2
  ManagerConfig_c *v352; // x0
  struct ManagerConfig_StaticFields *v353; // x8
  Il2CppObject *wait_5__10; // x1
  CGThumbnailListItem_o *v355; // x19
  ManagerConfig_c *v356; // x0
  struct ManagerConfig_StaticFields *v357; // x8
  Il2CppObject *v358; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  __int64 v361; // [xsp+18h] [xbp-88h]
  __int64 v362; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-78h] BYREF

  v4 = this;
  if ( (byte_4A4D4E6 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetLoader_EndRebootDialog__, method);
    sub_1B863B8(&Method_AssetLoader_EndRetryDialog__, v5);
    sub_1B863B8(&Method_AssetLoader_EndWarningDialog__, v6);
    sub_1B863B8(&AssetManager_TypeInfo, v7);
    sub_1B863B8(&CatAndMouseGame_TypeInfo, v8);
    sub_1B863B8(&char___TypeInfo, v9);
    sub_1B863B8(&ErrorDialog_ClickDelegate_TypeInfo, v10);
    sub_1B863B8(&CommonServicePluginScript_TypeInfo, v11);
    sub_1B863B8(&Crc32_TypeInfo, v12);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v14);
    sub_1B863B8(&DownloadHandlerDecryptFileWithCrc_TypeInfo, v15);
    sub_1B863B8(&DownloadHandlerFileWithCrcCheck_TypeInfo, v16);
    sub_1B863B8(&System_Func_bool__TypeInfo, v17);
    sub_1B863B8(&System_IO_IOException_TypeInfo, v18);
    sub_1B863B8(&LocalizationManager_TypeInfo, v19);
    sub_1B863B8(&ManagementManager_TypeInfo, v20);
    sub_1B863B8(&ManagerConfig_TypeInfo, v21);
    sub_1B863B8(&NetworkManager_TypeInfo, v22);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1B863B8(&string___TypeInfo, v24);
    sub_1B863B8(&Method_AssetLoader___c__LoadDataCR_b__29_0__, v25);
    sub_1B863B8(&AssetLoader___c_TypeInfo, v26);
    sub_1B863B8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v27);
    sub_1B863B8(&UnityEngine_WaitForSeconds_TypeInfo, v28);
    sub_1B863B8(&UnityEngine_WaitUntil_TypeInfo, v29);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v30);
    sub_1B863B8(&StringLiteral_9094/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/, v31);
    sub_1B863B8(&StringLiteral_7120/*"HTTP"*/, v32);
    sub_1B863B8(&StringLiteral_5258/*"Disk full"*/, v33);
    sub_1B863B8(&StringLiteral_2409/*"AssetStorageList download time over"*/, v34);
    sub_1B863B8(&StringLiteral_9103/*"NETWORK_ERROR_DISK_FULL"*/, v35);
    sub_1B863B8(&StringLiteral_115/*" "*/, v36);
    sub_1B863B8(&StringLiteral_2396/*"AssetName : "*/, v37);
    sub_1B863B8(&StringLiteral_767/*")\n\n503 Auto retry count "*/, v38);
    sub_1B863B8(&StringLiteral_770/*")\nfile crc ("*/, v39);
    sub_1B863B8(&StringLiteral_1437/*"503"*/, v40);
    sub_1B863B8(&StringLiteral_2056/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v41);
    sub_1B863B8(&StringLiteral_15706/*"[FFFF80]Download error for debug"*/, v42);
    sub_1B863B8(&StringLiteral_2406/*"AssetStorageList download data error"*/, v43);
    sub_1B863B8(&StringLiteral_24989/*"~"*/, v44);
    sub_1B863B8(&StringLiteral_12132/*"STATUS"*/, v45);
    sub_1B863B8(&StringLiteral_766/*")\n\n"*/, v46);
    sub_1B863B8(&StringLiteral_9093/*"NETWORK_ERROR_ASSET_UPDATE"*/, v47);
    sub_1B863B8(&StringLiteral_652/*"("*/, v48);
    sub_1B863B8(&StringLiteral_768/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v49);
    sub_1B863B8(&StringLiteral_764/*")"*/, v50);
    sub_1B863B8(&StringLiteral_18830/*"error "*/, v51);
    sub_1B863B8(&StringLiteral_1781/*"@"*/, v52);
    sub_1B863B8(&StringLiteral_2057/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v53);
    sub_1B863B8(&StringLiteral_2407/*"AssetStorageList download error"*/, v54);
    sub_1B863B8(&StringLiteral_769/*")\n\nAssetBundle file download time over"*/, v55);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B863B8(&StringLiteral_1/*""*/, v56);
    byte_4A4D4E6 = 1;
  }
  v362 = 0LL;
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
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12, 0, (int32_t)v2, v3);
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
          sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v77, v78);
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
        sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.readData, (int32_t)v80, v81, v82);
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
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v85, v86);
      _4__this->fields.readData = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v87, v88);
LABEL_59:
      while ( 1 )
      {
        _4__this->fields.readData = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
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
            v302 = (CGThumbnailListItem_o *)&_4__this->fields.loader;
            sub_1B8635C(v302, (int32_t)LoadRequest, v303, v304);
            this = (AssetLoader__LoadDataCR_d__29_o *)v302->klass;
            if ( !v302->klass )
              goto LABEL_375;
            v305 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                     0LL);
            v4->fields.__2__current = (Il2CppObject *)v305;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1B8635C(p__2__current, (int32_t)v305, v306, v307);
            v72 = 11;
          }
          else
          {
            v341 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v341 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v341->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v341->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v341);
                v341 = AssetLoader___c_TypeInfo;
              }
              v343 = (Il2CppObject *)v341->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(_9__29_0, v343, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0LL);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v345, v346);
            }
            v347 = (UnityEngine_WaitUntil_o *)sub_1B86604(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v347, _9__29_0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v347;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1B8635C(p__2__current, (int32_t)v347, v348, v349);
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
        v288 = _4__this->fields.data;
        if ( !v288 )
          goto LABEL_375;
        if ( v288->fields.entryCount >= 1 )
        {
          v289 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v4->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_375;
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
                goto LABEL_375;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_375;
              v291 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v291
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v291 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_375;
              }
            }
            v292 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v293 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v292, 0LL);
            v4->fields._req_5__13 = v293;
            sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._req_5__13, (int32_t)v293, v294, v295);
            this = *v289;
            if ( !*v289 )
              goto LABEL_375;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v289 = 0LL;
            sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v296, v297);
            req_5__13 = (Il2CppObject *)v4->fields._req_5__13;
            v4->fields.__2__current = req_5__13;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1B8635C(p__2__current, (int32_t)req_5__13, v299, v300);
            v72 = 12;
            goto LABEL_355;
          }
          if ( !this )
            goto LABEL_375;
          v350 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v288, v350, v351);
        }
LABEL_38:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v74, v75);
        }
        _4__this->fields.readData = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        AssetLoader__EndLoad(_4__this, v76);
        return 0;
      }
      *(_WORD *)&v4->fields._isAutoRetry_5__4 = 0;
      v4->fields._errorCode_5__6 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, 0, (int32_t)v2, v3);
      v4->fields._errorLocalizeCode_5__7 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__7, 0, v89, v90);
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
      v95 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v95, 0LL);
      v4->fields._wait_5__10 = v95;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._wait_5__10, (int32_t)v95, v96, v97);
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
          v104 = StringLiteral_5258/*"Disk full"*/;
          v4->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5258/*"Disk full"*/;
          sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, v104, v100, v101);
          p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__7;
          v108 = StringLiteral_9103/*"NETWORK_ERROR_DISK_FULL"*/;
          v4->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9103/*"NETWORK_ERROR_DISK_FULL"*/;
          goto LABEL_141;
        }
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      Url = AssetData__get_Url((AssetData_o *)this, method);
      v4->fields._url_5__11 = Url;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._url_5__11, (int32_t)Url, v110, v111);
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
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)v117, v118, v119);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v120 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v4->fields._asyncOperater_5__12 = v120;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12, (int32_t)v120, v121, v122);
LABEL_78:
      p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v4->fields._asyncOperater_5__12;
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
      if ( !this )
LABEL_375:
        sub_1B86614(this, method);
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
          v352 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v352 = ManagerConfig_TypeInfo;
          }
          v353 = v352->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
          v4->fields._requestTime_5__8 = v131 + v353->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v4->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
LABEL_369:
          wait_5__10 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = wait_5__10;
          v355 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B8635C(v355, (int32_t)wait_5__10, v127, v128);
          result = 1;
          LODWORD(v355[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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
        v139 = System_String__Concat_61683424(
                 (System_String_o *)StringLiteral_652/*"("*/,
                 v4->fields._url_5__11,
                 (System_String_o *)StringLiteral_769/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        v4->fields._errorCode_5__6 = v139;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v139, v140, v141);
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
          HIDWORD(v362) = klass;
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
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B86460(string___TypeInfo, 7LL);
            if ( !this )
              goto LABEL_375;
            v169 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_258;
            v170 = StringLiteral_652/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_652/*"("*/;
            sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__4__this, v170, v167, v168);
            if ( LODWORD(v169->fields.__2__current) <= 1 )
              goto LABEL_258;
            v173 = v4->fields._url_5__11;
            v169->fields.resourceNames = (struct System_String_array *)v173;
            sub_1B8635C((CGThumbnailListItem_o *)&v169->fields.resourceNames, (int32_t)v173, v171, v172);
            if ( LODWORD(v169->fields.__2__current) <= 2 )
              goto LABEL_258;
            v176 = StringLiteral_768/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v169->fields._isEncrypted_5__2 = StringLiteral_768/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1B8635C((CGThumbnailListItem_o *)&v169->fields._isEncrypted_5__2, v176, v174, v175);
            v177 = _4__this->fields.data;
            if ( !v177 )
              goto LABEL_375;
            LODWORD(v362) = v177->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v362, 0LL);
            if ( LODWORD(v169->fields.__2__current) <= 3 )
              goto LABEL_258;
            *(_QWORD *)&v169->fields._isAutoRetry_5__4 = this;
            sub_1B8635C((CGThumbnailListItem_o *)&v169->fields._isAutoRetry_5__4, (int32_t)this, v178, v179);
            if ( LODWORD(v169->fields.__2__current) <= 4 )
              goto LABEL_258;
            v182 = StringLiteral_770/*")\nfile crc ("*/;
            v169->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_770/*")\nfile crc ("*/;
            sub_1B8635C((CGThumbnailListItem_o *)&v169->fields._errorCode_5__6, v182, v180, v181);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v362 + 4, 0LL);
            if ( LODWORD(v169->fields.__2__current) <= 5 )
              goto LABEL_258;
            v169->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1B8635C((CGThumbnailListItem_o *)&v169->fields._errorLocalizeCode_5__7, (int32_t)this, v183, v184);
            if ( LODWORD(v169->fields.__2__current) <= 6 )
              goto LABEL_258;
            v187 = StringLiteral_764/*")"*/;
            *(_QWORD *)&v169->fields._requestTime_5__8 = StringLiteral_764/*")"*/;
            sub_1B8635C((CGThumbnailListItem_o *)&v169->fields._requestTime_5__8, v187, v185, v186);
            v188 = System_String__Concat_61685692((System_String_array *)v169, 0LL);
            v4->fields._errorCode_5__6 = v188;
            sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v188, v189, v190);
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
        v155 = System_String__Concat_61685428(
                 (System_String_o *)StringLiteral_652/*"("*/,
                 v153,
                 (System_String_o *)StringLiteral_766/*")\n\n"*/,
                 v154,
                 0LL);
        v4->fields._errorCode_5__6 = v155;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v155, v156, v157);
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
               (const MethodInfo_32CE3B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v159,
                (Il2CppObject *)StringLiteral_12132/*"STATUS"*/,
                &value,
                (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_140;
        }
        v160 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B86460(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v160 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_61694488(
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
                                                    (System_String_o *)StringLiteral_7120/*"HTTP"*/,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_140;
        if ( LODWORD(v161->fields.__2__current) <= 1 )
          goto LABEL_258;
        this = (AssetLoader__LoadDataCR_d__29_o *)v161->fields.resourceNames;
        if ( !this )
          goto LABEL_375;
        if ( !System_String__Equals_61680480((System_String_o *)this, (System_String_o *)StringLiteral_1437/*"503"*/, 0LL) )
          goto LABEL_140;
        v162 = v4->fields._url_5__11;
        v163 = v4->fields._autoRetryCount_5__3 + 1;
        v4->fields._isAutoRetry_5__4 = 1;
        v4->fields._autoRetryCount_5__3 = v163;
        v164 = System_Int32__ToString((int)v4 + 52, 0LL);
        v165 = System_String__Concat_61685428(
                 (System_String_o *)StringLiteral_652/*"("*/,
                 v162,
                 (System_String_o *)StringLiteral_767/*")\n\n503 Auto retry count "*/,
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
        v148 = System_String__Concat_61685428(
                 (System_String_o *)StringLiteral_18830/*"error "*/,
                 (System_String_o *)v146,
                 (System_String_o *)StringLiteral_115/*" "*/,
                 v147,
                 0LL);
      }
      v151 = (int)v148;
      v4->fields._errorCode_5__6 = v148;
      p_errorCode_5__6 = (CGThumbnailListItem_o *)&v4->fields._errorCode_5__6;
LABEL_109:
      sub_1B8635C(p_errorCode_5__6, v151, v149, v150);
LABEL_140:
      v4->fields._url_5__11 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._url_5__11, 0, v136, v137);
      p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12;
      v108 = 0;
      v4->fields._asyncOperater_5__12 = 0LL;
LABEL_141:
      sub_1B8635C(p_errorLocalizeCode_5__7, v108, v105, v106);
      method = (const MethodInfo *)v4->fields._errorCode_5__6;
      if ( method )
      {
        AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
        v191 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v191 = ManagerConfig_TypeInfo;
        }
        if ( v191->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v192 = _4__this->fields.data;
          if ( !v192 )
            goto LABEL_375;
          v193 = (CommonUI_o *)this;
          v194 = System_String__Concat_61685428(
                   (System_String_o *)StringLiteral_2396/*"AssetName : "*/,
                   v192->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v4->fields._errorCode_5__6,
                   0LL);
          v195 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v195, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v193 )
            goto LABEL_375;
          v361 &= 0xFFFFFFFF00000000LL;
          *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
          LODWORD(effectDistance.fields.value.fields.y) = v361;
          CommonUI__OpenWarningDialog(
            v193,
            (System_String_o *)StringLiteral_15706/*"[FFFF80]Download error for debug"*/,
            v194,
            v195,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_148:
          if ( _4__this->fields.isErrorDialog )
          {
            v314 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v314;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1B8635C(p__2__current, (int32_t)v314, (int32_t)v2, v3);
            v72 = 2;
            goto LABEL_355;
          }
        }
        if ( v4->fields._isAutoRetry_5__4 )
        {
          v308 = ManagerConfig_TypeInfo;
          autoRetryCount_5__3 = v4->fields._autoRetryCount_5__3;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v308 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v308->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v311 = (UnityEngine_WaitForSeconds_o *)sub_1B86604(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v311, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v311;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B8635C(p__2__current, (int32_t)v311, v312, v313);
          v72 = 3;
          goto LABEL_355;
        }
        if ( !v4->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          if ( !byte_4A4D556 )
          {
            sub_1B863B8(&ManagementManager_TypeInfo, method);
            byte_4A4D556 = 1;
          }
          v196 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v196 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v196->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v4->fields._errorLocalizeCode_5__7;
          v200 = (CommonUI_o *)Instance;
          v201 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v202 = v4->fields._errorLocalizeCode_5__7;
            else
              v202 = (System_String_o *)StringLiteral_2056/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v203 = LocalizationManager__Get(v202, 0LL);
            v204 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v204, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v200 )
              goto LABEL_375;
            CommonUI__OpenRetryBootDialog(v200, v201, v203, v204, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v205 = v4->fields._errorLocalizeCode_5__7;
            else
              v205 = (System_String_o *)StringLiteral_2057/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v206 = LocalizationManager__Get(v205, 0LL);
            v207 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v207, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v200 )
              goto LABEL_375;
            CommonUI__OpenRetryDialog(v200, v201, v206, v207, 1, 0LL);
          }
LABEL_172:
          if ( _4__this->fields.isErrorDialog )
          {
            v315 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v315;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1B8635C(p__2__current, (int32_t)v315, (int32_t)v2, v3);
            v72 = 4;
            goto LABEL_355;
          }
        }
      }
LABEL_173:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A49A45 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, method);
        byte_4A49A45 = 1;
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
        sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v316, v317);
        _4__this->fields.readData = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v318, v319);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v4->fields._isEncrypted_5__2 )
        goto LABEL_298;
      v208 = _4__this->fields.loader;
      if ( v208 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v208, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v209, v210);
        _4__this->fields.readData = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v211, v212);
      }
      if ( !v4->fields._isCrcError_5__5 )
      {
LABEL_291:
        v4->fields._errorCode_5__6 = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, 0, (int32_t)v2, v3);
        v4->fields._errorLocalizeCode_5__7 = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__7, 0, v283, v284);
        v4->fields._wait_5__10 = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._wait_5__10, 0, v285, v286);
        goto LABEL_292;
      }
      v213 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v213);
      v4->fields._url_5__11 = ConfigFileAddress;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._url_5__11, (int32_t)ConfigFileAddress, v215, v216);
LABEL_189:
      v217 = v4->fields._url_5__11;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v217, v59);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_375;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v221 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)this, v219, v220);
      v222 = UnityEngine_Time__get_unscaledTime(0LL);
      v223 = ManagerConfig_TypeInfo;
      v224 = v222;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v223 = ManagerConfig_TypeInfo;
      }
      v225 = v223->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__9 = 0.0;
      v4->fields._requestTime_5__8 = v224 + v225;
      this = *v221;
      if ( !*v221 )
        goto LABEL_375;
      v226 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v4->fields._asyncOperater_5__12 = v226;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._asyncOperater_5__12, (int32_t)v226, v227, v228);
LABEL_196:
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
        if ( !this )
          goto LABEL_375;
        v231 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v232 = v4->fields._loadProgress_5__9;
        v233 = v231;
        v234 = UnityEngine_Time__get_unscaledTime(0LL);
        v130 = v233 == v232;
        v235 = v234;
        if ( !v130 )
        {
          v356 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v356 = ManagerConfig_TypeInfo;
          }
          v357 = v356->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
          v4->fields._requestTime_5__8 = v235 + v357->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v4->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_374;
        }
        if ( v234 < v4->fields._requestTime_5__8 )
        {
LABEL_374:
          v358 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = v358;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B8635C(p__2__current, (int32_t)v358, v229, v230);
          v72 = 5;
          goto LABEL_355;
        }
      }
      v4->fields._errorCode_5__6 = 0LL;
      v236 = &v4->fields._errorCode_5__6;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, 0, v229, v230);
      if ( !_4__this )
        goto LABEL_375;
      v237 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v237 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v237, 0LL);
        v280 = &StringLiteral_2409/*"AssetStorageList download time over"*/;
        goto LABEL_327;
      }
      v238 = UnityEngine_Networking_UnityWebRequest__get_error(*v237, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v238, 0LL);
      if ( !*v237 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v321 = UnityEngine_Networking_UnityWebRequest__get_error(*v237, 0LL);
        goto LABEL_328;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v237, 0LL);
      if ( !this )
        goto LABEL_375;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v240 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v240, 0LL) )
      {
        v280 = &StringLiteral_2407/*"AssetStorageList download error"*/;
        goto LABEL_327;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B86460(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_375;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v240 )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_61701844(v240, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_375;
      v243 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_24989/*"~"*/, 0LL) )
        goto LABEL_286;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B86460(char___TypeInfo, 2LL);
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
      v245 = System_String__IndexOfAny((System_String_o *)v243, (System_Char_array *)this, 0LL);
      if ( v245 < 2 )
        goto LABEL_286;
      v246 = v245;
      v247 = System_String__Substring_61691100((System_String_o *)v243, 1, v245 - 1, 0LL);
      v248 = System_String__Substring((System_String_o *)v243, v246 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_375;
      v249 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                    this,
                                    v248,
                                    this->klass[1]._1.nestedTypes);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v250 = Crc32__Compute(v249, 0LL);
      if ( System_UInt32__Parse(v247, 0LL) != v250 )
      {
LABEL_286:
        v280 = &StringLiteral_2406/*"AssetStorageList download data error"*/;
LABEL_327:
        v321 = (System_String_o *)*v280;
LABEL_328:
        *v236 = v321;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__6, (int32_t)v321, v241, v242);
        if ( *v237 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v237, 0LL);
          *v237 = 0LL;
          sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v322, v323);
        }
        if ( !*v236 )
          goto LABEL_354;
        v324 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v324 = ManagerConfig_TypeInfo;
        }
        if ( v324->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v325 = _4__this->fields.data;
          if ( !v325 )
            goto LABEL_375;
          v326 = (CommonUI_o *)this;
          v327 = System_String__Concat_61685428(
                   (System_String_o *)StringLiteral_2396/*"AssetName : "*/,
                   v325->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v236,
                   0LL);
          v328 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v328, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v326 )
            goto LABEL_375;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v326,
            (System_String_o *)StringLiteral_15706/*"[FFFF80]Download error for debug"*/,
            v327,
            v328,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_337:
          if ( _4__this->fields.isErrorDialog )
          {
            v329 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v329;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1B8635C(p__2__current, (int32_t)v329, (int32_t)v2, v3);
            v72 = 6;
            goto LABEL_355;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4A4D556 )
        {
          sub_1B863B8(&ManagementManager_TypeInfo, method);
          byte_4A4D556 = 1;
        }
        v330 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v330 = ManagementManager_TypeInfo;
        }
        v331 = v330->static_fields->isDuringStartup;
        v332 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v331 )
        {
          v333 = LocalizationManager__Get((System_String_o *)StringLiteral_2056/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v334 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v334, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v332 )
            goto LABEL_375;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v332, (System_String_o *)StringLiteral_1/*""*/, v333, v334, 0, 0LL);
        }
        else
        {
          v335 = LocalizationManager__Get((System_String_o *)StringLiteral_2057/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
          v336 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v336, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v332 )
            goto LABEL_375;
          CommonUI__OpenRetryDialog((CommonUI_o *)v332, (System_String_o *)StringLiteral_1/*""*/, v335, v336, 0, 0LL);
        }
LABEL_352:
        if ( _4__this->fields.isErrorDialog )
        {
          v337 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = v337;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B8635C(p__2__current, (int32_t)v337, (int32_t)v2, v3);
          v72 = 7;
        }
        else
        {
LABEL_354:
          v338 = (UnityEngine_WaitForSeconds_o *)sub_1B86604(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v338, 1.0, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v338;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B8635C(p__2__current, (int32_t)v338, v339, v340);
          v72 = 8;
        }
LABEL_355:
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v72;
        return 1;
      }
      if ( !v248 )
        goto LABEL_272;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B86460(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_375;
      v251 = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !v251 || (LOWORD(this->fields.__4__this) = 13, v251 == 1) )
LABEL_258:
        sub_1B8661C(this, method);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_61694488(v248, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_375;
      v252 = this->fields.__2__current;
      v253 = this;
      v254 = (_DWORD)v252 - 1;
      if ( (int)v252 < 1 )
        goto LABEL_272;
      v255 = 0;
      while ( 2 )
      {
        v256 = (System_String_o *)*((_QWORD *)&v253->fields.__4__this + v255);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B86460(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v256 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_61694252(v256, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_375;
        v257 = this->fields.__2__current;
        v258 = this;
        if ( (int)v257 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1781/*"@"*/,
                                                      0LL);
          if ( !LODWORD(v258->fields.__2__current) )
            goto LABEL_258;
          v259 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v258->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          if ( (v259 & 1) != 0 )
          {
            v261 = System_String__Substring((System_String_o *)this, 1, 0LL);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v258->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v258->fields.resourceNames;
            v263 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v261, v263, v260);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_272;
            goto LABEL_256;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_24989/*"~"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v258->fields.__2__current) )
              goto LABEL_258;
            this = (AssetLoader__LoadDataCR_d__29_o *)v258->fields.__4__this;
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v257 = v258->fields.__2__current;
              break;
            }
          }
LABEL_256:
          if ( v254 == v255 )
            goto LABEL_272;
          if ( (unsigned int)++v255 >= LODWORD(v253->fields.__2__current) )
            goto LABEL_258;
          continue;
        }
        break;
      }
      if ( (_DWORD)v257 != 5 )
        goto LABEL_272;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v258->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_375;
      v264 = System_String__Trim((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v264, 0LL);
      if ( LODWORD(v258->fields.__2__current) <= 4 )
        goto LABEL_258;
      v266 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v258->fields._errorCode_5__6, v265);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_256;
      v267 = _4__this->fields.data;
      if ( !v267 )
        goto LABEL_375;
      if ( v266 == v267->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4A4D556 )
        {
          sub_1B863B8(&ManagementManager_TypeInfo, method);
          byte_4A4D556 = 1;
        }
        v268 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v268 = ManagementManager_TypeInfo;
        }
        v269 = v268->static_fields->isDuringStartup;
        v270 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v269 )
        {
          v271 = LocalizationManager__Get((System_String_o *)StringLiteral_2056/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v272 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v272, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( v270 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v270, (System_String_o *)StringLiteral_1/*""*/, v271, v272, 1, 0LL);
            goto LABEL_289;
          }
          goto LABEL_375;
        }
        v281 = LocalizationManager__Get((System_String_o *)StringLiteral_2057/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v282 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v282, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( !v270 )
          goto LABEL_375;
        CommonUI__OpenRetryDialog((CommonUI_o *)v270, (System_String_o *)StringLiteral_1/*""*/, v281, v282, 1, 0LL);
LABEL_289:
        if ( !_4__this->fields.isErrorDialog )
        {
          v4->fields._url_5__11 = 0LL;
          sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._url_5__11, 0, (int32_t)v2, v3);
          goto LABEL_291;
        }
        v320 = (Il2CppObject *)v4->fields._wait_5__10;
        v4->fields.__2__current = v320;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(p__2__current, (int32_t)v320, (int32_t)v2, v3);
        v72 = 9;
        goto LABEL_355;
      }
LABEL_272:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4A4D556 )
      {
        sub_1B863B8(&ManagementManager_TypeInfo, method);
        byte_4A4D556 = 1;
      }
      v273 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v273 = ManagementManager_TypeInfo;
      }
      v274 = v273->static_fields->isDuringStartup;
      v275 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v274 )
          goto LABEL_280;
LABEL_282:
        v276 = &StringLiteral_9093/*"NETWORK_ERROR_ASSET_UPDATE"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !v274 )
          goto LABEL_282;
LABEL_280:
        v276 = &StringLiteral_9094/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
      }
      v277 = LocalizationManager__Get((System_String_o *)*v276, 0LL);
      v278 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v278, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
      if ( !v275 )
        goto LABEL_375;
      CommonUI__OpenErrorDialog((CommonUI_o *)v275, (System_String_o *)StringLiteral_1/*""*/, v277, v278, 0, 0LL);
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
      sub_1B8635C(p__2__current, (int32_t)v68, v70, v71);
      v72 = 13;
      goto LABEL_355;
    case 0xD:
      v4->fields.__1__state = -1;
LABEL_37:
      v4->fields._req_5__13 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._req_5__13, 0, (int32_t)v2, v3);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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

  if ( (byte_4A4D4E4 & 1) == 0 )
  {
    sub_1B863B8(&AssetLoader___c_TypeInfo, v1);
    byte_4A4D4E4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(AssetLoader___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)AssetLoader___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A4D4E5 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_4A4D4E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  return BYTE4(Instance[7].monitor) == 0;
}