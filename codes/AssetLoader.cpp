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
    sub_1B64324(this);
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
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x21
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w1
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w1
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w1
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w1
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w1
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w1
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w1
  int32_t v77; // w2
  int32_t v78; // w3
  int32_t v79; // w1
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w1
  int32_t v83; // w2
  int32_t v84; // w3
  int32_t v85; // w1
  int32_t v86; // w2
  int32_t v87; // w3
  int32_t v88; // w1
  int32_t v89; // w2
  int32_t v90; // w3
  int32_t v91; // w1
  int32_t v92; // w2
  int32_t v93; // w3
  int32_t v94; // w1
  int32_t v95; // w2
  int32_t v96; // w3
  int32_t v97; // w1
  int32_t v98; // w2
  int32_t v99; // w3
  int32_t v100; // w1
  int32_t v101; // w2
  int32_t v102; // w3
  int32_t v103; // w1
  int32_t v104; // w2
  int32_t v105; // w3
  int32_t v106; // w1
  int32_t v107; // w2
  int32_t v108; // w3
  int32_t v109; // w1
  int32_t v110; // w2
  int32_t v111; // w3
  int32_t v112; // w1
  int32_t v113; // w2
  int32_t v114; // w3
  int32_t v115; // w1
  int32_t v116; // w2
  int32_t v117; // w3
  int32_t v118; // w1
  int32_t v119; // w2
  int32_t v120; // w3
  int32_t v121; // w1
  int32_t v122; // w2
  int32_t v123; // w3
  int32_t v124; // w1
  int32_t v125; // w2
  int32_t v126; // w3
  int32_t v127; // w1
  int32_t v128; // w2
  int32_t v129; // w3
  int32_t v130; // w1
  int32_t v131; // w2
  int32_t v132; // w3
  int32_t v133; // w1
  int32_t v134; // w2
  int32_t v135; // w3
  int32_t v136; // w1
  int32_t v137; // w2
  int32_t v138; // w3
  int32_t v139; // w1
  int32_t v140; // w2
  int32_t v141; // w3
  int32_t v142; // w1
  int32_t v143; // w2
  int32_t v144; // w3
  int32_t v145; // w1
  int32_t v146; // w2
  int32_t v147; // w3
  int32_t v148; // w1
  int32_t v149; // w2
  int32_t v150; // w3
  int32_t v151; // w1
  int32_t v152; // w2
  int32_t v153; // w3
  int32_t v154; // w1
  int32_t v155; // w2
  int32_t v156; // w3
  int32_t v157; // w1
  int32_t v158; // w2
  int32_t v159; // w3
  int32_t v160; // w1
  __int64 v161; // x23
  __int64 v162; // x24
  const MethodInfo *v163; // x1
  CrashReporter_o *v164; // x19

  v3 = errorCode;
  if ( (byte_49FB4CD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_1B640C8(&string___TypeInfo, v6);
    sub_1B640C8(&StringLiteral_14037/*"The request timed out."*/, v7);
    sub_1B640C8(&StringLiteral_20844/*"java.net.SocketException"*/, v8);
    sub_1B640C8(&StringLiteral_12159/*"SSL CA certificate error"*/, v9);
    sub_1B640C8(&StringLiteral_1503/*"404: Not Found"*/, v10);
    sub_1B640C8(&StringLiteral_13967/*"The network connection was lost."*/, v11);
    sub_1B640C8(&StringLiteral_1498/*"400: Bad Request"*/, v12);
    sub_1B640C8(&StringLiteral_14812/*"Unable to complete SSL connection"*/, v13);
    sub_1B640C8(&StringLiteral_14842/*"Unable to read data"*/, v14);
    sub_1B640C8(&StringLiteral_18135/*"connect failed"*/, v15);
    sub_1B640C8(&StringLiteral_7139/*"HTTP/1.1 500 Internal Server Error"*/, v16);
    sub_1B640C8(&StringLiteral_20846/*"java.net.UnknownHostException"*/, v17);
    sub_1B640C8(&StringLiteral_1512/*"500: Internal Server Error"*/, v18);
    sub_1B640C8(&StringLiteral_1514/*"502:"*/, v19);
    sub_1B640C8(&StringLiteral_11253/*"Request timeout"*/, v20);
    sub_1B640C8(&StringLiteral_4672/*"Connection reset by peer"*/, v21);
    sub_1B640C8(&StringLiteral_5031/*"DLErrorType"*/, v22);
    sub_1B640C8(&StringLiteral_5030/*"DLErrorAsset"*/, v23);
    sub_1B640C8(&StringLiteral_1526/*"504: Gateway Timeout"*/, v24);
    sub_1B640C8(&StringLiteral_15019/*"Unknown Error"*/, v25);
    sub_1B640C8(&StringLiteral_1516/*"503 Auto retry count"*/, v26);
    sub_1B640C8(&StringLiteral_20827/*"java.io.EOFException"*/, v27);
    sub_1B640C8(&StringLiteral_20841/*"java.net.ConnectException"*/, v28);
    sub_1B640C8(&StringLiteral_1501/*"403: Forbidden"*/, v29);
    sub_1B640C8(&StringLiteral_4671/*"Connection refused"*/, v30);
    sub_1B640C8(&StringLiteral_7140/*"HTTP/1.1 504 Gateway Timeout"*/, v31);
    sub_1B640C8(&StringLiteral_1500/*"401: Authorization Required"*/, v32);
    sub_1B640C8(&StringLiteral_20828/*"java.io.IOException"*/, v33);
    sub_1B640C8(&StringLiteral_9386/*"No address associated with hostname"*/, v34);
    sub_1B640C8(&StringLiteral_20843/*"java.net.ProtocolException"*/, v35);
    sub_1B640C8(&StringLiteral_2488/*"AssetBundle file download time over"*/, v36);
    sub_1B640C8(&StringLiteral_1504/*"408: Request Time-out"*/, v37);
    sub_1B640C8(&StringLiteral_14453/*"Too many redirects"*/, v38);
    sub_1B640C8(&StringLiteral_12759/*"Software caused connection abort"*/, v39);
    sub_1B640C8(&StringLiteral_2487/*"AssetBundle file check sum error"*/, v40);
    sub_1B640C8(&StringLiteral_20842/*"java.net.NoRouteToHostException"*/, v41);
    sub_1B640C8(&StringLiteral_5267/*"Destination host has an erroneous SSL certificate"*/, v42);
    sub_1B640C8(&StringLiteral_4673/*"Connection timed out"*/, v43);
    sub_1B640C8(&StringLiteral_4270/*"Cannot resolve destination host"*/, v44);
    sub_1B640C8(&StringLiteral_20845/*"java.net.SocketTimeoutException"*/, v45);
    sub_1B640C8(&StringLiteral_2491/*"AssetLoadError"*/, v46);
    byte_49FB4CD = 1;
  }
  Instance = sub_1B64170(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_58;
  v51 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v52 = StringLiteral_9386/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9386/*"No address associated with hostname"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(Instance + 32), v52, v49, v50);
  if ( *(_DWORD *)(v51 + 24) <= 1u )
    goto LABEL_47;
  v55 = StringLiteral_2488/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v51 + 40) = StringLiteral_2488/*"AssetBundle file download time over"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 40), v55, v53, v54);
  if ( *(_DWORD *)(v51 + 24) <= 2u )
    goto LABEL_47;
  v58 = StringLiteral_13967/*"The network connection was lost."*/;
  *(_QWORD *)(v51 + 48) = StringLiteral_13967/*"The network connection was lost."*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 48), v58, v56, v57);
  if ( *(_DWORD *)(v51 + 24) <= 3u )
    goto LABEL_47;
  v61 = StringLiteral_4672/*"Connection reset by peer"*/;
  *(_QWORD *)(v51 + 56) = StringLiteral_4672/*"Connection reset by peer"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 56), v61, v59, v60);
  if ( *(_DWORD *)(v51 + 24) <= 4u )
    goto LABEL_47;
  v64 = StringLiteral_12759/*"Software caused connection abort"*/;
  *(_QWORD *)(v51 + 64) = StringLiteral_12759/*"Software caused connection abort"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 64), v64, v62, v63);
  if ( *(_DWORD *)(v51 + 24) <= 5u )
    goto LABEL_47;
  v67 = StringLiteral_4673/*"Connection timed out"*/;
  *(_QWORD *)(v51 + 72) = StringLiteral_4673/*"Connection timed out"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 72), v67, v65, v66);
  if ( *(_DWORD *)(v51 + 24) <= 6u )
    goto LABEL_47;
  v70 = StringLiteral_4671/*"Connection refused"*/;
  *(_QWORD *)(v51 + 80) = StringLiteral_4671/*"Connection refused"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 80), v70, v68, v69);
  if ( *(_DWORD *)(v51 + 24) <= 7u )
    goto LABEL_47;
  v73 = StringLiteral_14037/*"The request timed out."*/;
  *(_QWORD *)(v51 + 88) = StringLiteral_14037/*"The request timed out."*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 88), v73, v71, v72);
  if ( *(_DWORD *)(v51 + 24) <= 8u )
    goto LABEL_47;
  v76 = StringLiteral_4270/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v51 + 96) = StringLiteral_4270/*"Cannot resolve destination host"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 96), v76, v74, v75);
  if ( *(_DWORD *)(v51 + 24) <= 9u )
    goto LABEL_47;
  v79 = StringLiteral_14812/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v51 + 104) = StringLiteral_14812/*"Unable to complete SSL connection"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 104), v79, v77, v78);
  if ( *(_DWORD *)(v51 + 24) <= 0xAu )
    goto LABEL_47;
  v82 = StringLiteral_15019/*"Unknown Error"*/;
  *(_QWORD *)(v51 + 112) = StringLiteral_15019/*"Unknown Error"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 112), v82, v80, v81);
  if ( *(_DWORD *)(v51 + 24) <= 0xBu )
    goto LABEL_47;
  v85 = StringLiteral_11253/*"Request timeout"*/;
  *(_QWORD *)(v51 + 120) = StringLiteral_11253/*"Request timeout"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 120), v85, v83, v84);
  if ( *(_DWORD *)(v51 + 24) <= 0xCu )
    goto LABEL_47;
  v88 = StringLiteral_2487/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v51 + 128) = StringLiteral_2487/*"AssetBundle file check sum error"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 128), v88, v86, v87);
  if ( *(_DWORD *)(v51 + 24) <= 0xDu )
    goto LABEL_47;
  v91 = StringLiteral_12159/*"SSL CA certificate error"*/;
  *(_QWORD *)(v51 + 136) = StringLiteral_12159/*"SSL CA certificate error"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 136), v91, v89, v90);
  if ( *(_DWORD *)(v51 + 24) <= 0xEu )
    goto LABEL_47;
  v94 = StringLiteral_7139/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v51 + 144) = StringLiteral_7139/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 144), v94, v92, v93);
  if ( *(_DWORD *)(v51 + 24) <= 0xFu )
    goto LABEL_47;
  v97 = StringLiteral_7140/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v51 + 152) = StringLiteral_7140/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 152), v97, v95, v96);
  if ( *(_DWORD *)(v51 + 24) <= 0x10u )
    goto LABEL_47;
  v100 = StringLiteral_5267/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v51 + 160) = StringLiteral_5267/*"Destination host has an erroneous SSL certificate"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 160), v100, v98, v99);
  if ( *(_DWORD *)(v51 + 24) <= 0x11u )
    goto LABEL_47;
  v103 = StringLiteral_14453/*"Too many redirects"*/;
  *(_QWORD *)(v51 + 168) = StringLiteral_14453/*"Too many redirects"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 168), v103, v101, v102);
  if ( *(_DWORD *)(v51 + 24) <= 0x12u )
    goto LABEL_47;
  v106 = StringLiteral_20827/*"java.io.EOFException"*/;
  *(_QWORD *)(v51 + 176) = StringLiteral_20827/*"java.io.EOFException"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 176), v106, v104, v105);
  if ( *(_DWORD *)(v51 + 24) <= 0x13u )
    goto LABEL_47;
  v109 = StringLiteral_20844/*"java.net.SocketException"*/;
  *(_QWORD *)(v51 + 184) = StringLiteral_20844/*"java.net.SocketException"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 184), v109, v107, v108);
  if ( *(_DWORD *)(v51 + 24) <= 0x14u )
    goto LABEL_47;
  v112 = StringLiteral_20845/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v51 + 192) = StringLiteral_20845/*"java.net.SocketTimeoutException"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 192), v112, v110, v111);
  if ( *(_DWORD *)(v51 + 24) <= 0x15u )
    goto LABEL_47;
  v115 = StringLiteral_20842/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v51 + 200) = StringLiteral_20842/*"java.net.NoRouteToHostException"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 200), v115, v113, v114);
  if ( *(_DWORD *)(v51 + 24) <= 0x16u )
    goto LABEL_47;
  v118 = StringLiteral_20828/*"java.io.IOException"*/;
  *(_QWORD *)(v51 + 208) = StringLiteral_20828/*"java.io.IOException"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 208), v118, v116, v117);
  if ( *(_DWORD *)(v51 + 24) <= 0x17u )
    goto LABEL_47;
  v121 = StringLiteral_20841/*"java.net.ConnectException"*/;
  *(_QWORD *)(v51 + 216) = StringLiteral_20841/*"java.net.ConnectException"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 216), v121, v119, v120);
  if ( *(_DWORD *)(v51 + 24) <= 0x18u )
    goto LABEL_47;
  v124 = StringLiteral_18135/*"connect failed"*/;
  *(_QWORD *)(v51 + 224) = StringLiteral_18135/*"connect failed"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 224), v124, v122, v123);
  if ( *(_DWORD *)(v51 + 24) <= 0x19u )
    goto LABEL_47;
  v127 = StringLiteral_20843/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v51 + 232) = StringLiteral_20843/*"java.net.ProtocolException"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 232), v127, v125, v126);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Au )
    goto LABEL_47;
  v130 = StringLiteral_20846/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v51 + 240) = StringLiteral_20846/*"java.net.UnknownHostException"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 240), v130, v128, v129);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Bu )
    goto LABEL_47;
  v133 = StringLiteral_1498/*"400: Bad Request"*/;
  *(_QWORD *)(v51 + 248) = StringLiteral_1498/*"400: Bad Request"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 248), v133, v131, v132);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Cu )
    goto LABEL_47;
  v136 = StringLiteral_1500/*"401: Authorization Required"*/;
  *(_QWORD *)(v51 + 256) = StringLiteral_1500/*"401: Authorization Required"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 256), v136, v134, v135);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Du )
    goto LABEL_47;
  v139 = StringLiteral_1501/*"403: Forbidden"*/;
  *(_QWORD *)(v51 + 264) = StringLiteral_1501/*"403: Forbidden"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 264), v139, v137, v138);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Eu )
    goto LABEL_47;
  v142 = StringLiteral_1503/*"404: Not Found"*/;
  *(_QWORD *)(v51 + 272) = StringLiteral_1503/*"404: Not Found"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 272), v142, v140, v141);
  if ( *(_DWORD *)(v51 + 24) <= 0x1Fu )
    goto LABEL_47;
  v145 = StringLiteral_1504/*"408: Request Time-out"*/;
  *(_QWORD *)(v51 + 280) = StringLiteral_1504/*"408: Request Time-out"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 280), v145, v143, v144);
  if ( *(_DWORD *)(v51 + 24) <= 0x20u )
    goto LABEL_47;
  v148 = StringLiteral_1512/*"500: Internal Server Error"*/;
  *(_QWORD *)(v51 + 288) = StringLiteral_1512/*"500: Internal Server Error"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 288), v148, v146, v147);
  if ( *(_DWORD *)(v51 + 24) <= 0x21u )
    goto LABEL_47;
  v151 = StringLiteral_1514/*"502:"*/;
  *(_QWORD *)(v51 + 296) = StringLiteral_1514/*"502:"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 296), v151, v149, v150);
  if ( *(_DWORD *)(v51 + 24) <= 0x22u
    || (v154 = StringLiteral_1516/*"503 Auto retry count"*/,
        *(_QWORD *)(v51 + 304) = StringLiteral_1516/*"503 Auto retry count"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 304), v154, v152, v153),
        *(_DWORD *)(v51 + 24) <= 0x23u)
    || (v157 = StringLiteral_1526/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v51 + 312) = StringLiteral_1526/*"504: Gateway Timeout"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 312), v157, v155, v156),
        *(_DWORD *)(v51 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1B6432C(Instance, v48);
  }
  v160 = StringLiteral_14842/*"Unable to read data"*/;
  *(_QWORD *)(v51 + 320) = StringLiteral_14842/*"Unable to read data"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 320), v160, v158, v159);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v164 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v163), !v164) )
  {
LABEL_58:
    sub_1B64324(Instance);
  }
  CrashReporter__AddCustomKey(v164, (System_String_o *)StringLiteral_5030/*"DLErrorAsset"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v161 >= *(_DWORD *)(v51 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5031/*"DLErrorType"*/,
    *(System_String_o **)(v51 + 32 + 8 * v161),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  v3 = (System_String_o *)StringLiteral_2491/*"AssetLoadError"*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)v3, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_49FB4CA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB4CA = 1;
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
  UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)this, 0LL);
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
  int32_t v3; // w3

  this->fields.data = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
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
    sub_1B64324(0LL);
  return System_String__Equals_61383712(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_37458652(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_37451096(data, type, name, method);
  return (char)data;
}


System_Collections_IEnumerator_o *__fastcall AssetLoader__LoadDataCR(
        AssetLoader_o *this,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FB4C9 & 1) == 0 )
  {
    sub_1B640C8(&AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames);
    byte_49FB4C9 = 1;
  }
  v5 = sub_1B64314(AssetLoader__LoadDataCR_d__29_TypeInfo, resourceNames, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)resourceNames, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  System_Byte_array *readData; // x20
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB4CB & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, method);
    byte_49FB4CB = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v4 = CatAndMouseGame__MouseGame4(readData, 0LL);
  this->fields._decData = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._decData, (int32_t)v4, v5, v6);
}


void __fastcall AssetLoader__Reboot(AssetLoader_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  ManagementManager_c *v11; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_49FB4CC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&ManagementManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6);
    byte_49FB4CC = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loader, 0, v8, v9);
  }
  this->fields.readData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.readData, 0, v2, v3);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_49FB4AB )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, v10);
    byte_49FB4AB = 1;
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
    UnityEngine_Application__Quit_68921692(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
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
  const MethodInfo *v8; // x2
  __int64 v9; // x8
  bool v10; // w8
  System_Collections_IEnumerator_o *DataCR; // x1

  this->fields.endCallback = callbackFunc;
  p_endCallback = &this->fields.endCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.endCallback,
    (int32_t)callbackFunc,
    (int32_t)resourceNames,
    (int32_t)method);
  v9 = (__int64)*(p_endCallback - 1);
  if ( !v9 )
    sub_1B64324(v7);
  v10 = *(_DWORD *)(v9 + 40) != *(_DWORD *)(v9 + 44);
  this->fields.isDownload = v10;
  this->fields.isRequestDownload = v10;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
}


void __fastcall AssetLoader__abort_thread(AssetLoader_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_Threading_Thread_o *threadDecrypt; // x0
  System_Threading_Thread_o **p_threadDecrypt; // x19

  p_threadDecrypt = &this->fields.threadDecrypt;
  threadDecrypt = this->fields.threadDecrypt;
  if ( threadDecrypt && !System_Threading_Thread__get_ThreadState(threadDecrypt, 0LL) )
  {
    if ( !*p_threadDecrypt )
      sub_1B64324(0LL);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_threadDecrypt, 0, v2, v3);
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

  if ( (byte_49FB4C5 & 1) == 0 )
  {
    sub_1B640C8(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_49FB4C5 = 1;
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
    v9 = sub_1B9F5B8(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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

  if ( (byte_49FB4C7 & 1) == 0 )
  {
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_49FB4C7 = 1;
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
    v9 = sub_1B9F5B8(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B64324(this);
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

  if ( (byte_49FB4C6 & 1) == 0 )
  {
    sub_1B640C8(&AssetLoader_LoadEndHandler_TypeInfo, value);
    byte_49FB4C6 = 1;
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
    v9 = sub_1B9F5B8(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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

  if ( (byte_49FB4C8 & 1) == 0 )
  {
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, value);
    byte_49FB4C8 = 1;
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
    v9 = sub_1B9F5B8(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AB9B0;
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
        v11 = sub_1B64180(v6);
        v12 = sub_1B6463C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19ABAAC;
          else
            v9 = (Il2CppObject *)sub_19ABA70;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19AB9EC;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19AB9C0;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19AB990;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AB948;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AB7C0;
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
        v11 = sub_1B64180(v6);
        v12 = sub_1B6463C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19AB8BC;
          else
            v9 = (Il2CppObject *)sub_19AB880;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19AB7FC;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19AB7D0;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19AB7A0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AB758;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  int32_t v3; // w3
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v70; // w2
  int32_t v71; // w3
  int v72; // w8
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  const MethodInfo *v76; // x1
  int32_t v77; // w2
  int32_t v78; // w3
  struct AssetData_o *data; // x8
  System_Byte_array *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  System_Byte_array *readData; // x22
  struct AssetData_o *v84; // x8
  int32_t v85; // w2
  int32_t v86; // w3
  int32_t v87; // w2
  int32_t v88; // w3
  int32_t v89; // w2
  int32_t v90; // w3
  __int64 v91; // x1
  __int64 v92; // x2
  float unscaledTime; // s0
  ManagerConfig_c *v94; // x0
  float v95; // s8
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v97; // x23
  int32_t v98; // w2
  int32_t v99; // w3
  const MethodInfo *v100; // x0
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  const MethodInfo *v103; // x1
  int32_t v104; // w2
  int32_t v105; // w3
  int64_t v106; // x23
  ManagerConfig_c *v107; // x0
  int32_t v108; // w1
  int32_t v109; // w2
  int32_t v110; // w3
  ServantStatusBattleListViewItem_o *p_errorLocalizeCode_5__7; // x0
  int32_t v112; // w1
  System_String_o *Url; // x0
  int32_t v114; // w2
  int32_t v115; // w3
  const MethodInfo *v116; // x1
  System_String_o *url_5__11; // x21
  const MethodInfo *v118; // x1
  struct AssetData_o *v119; // x8
  AssetLoader__LoadDataCR_d__29_o *v120; // x22
  bool v121; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v126; // x0
  int32_t v127; // w2
  int32_t v128; // w3
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__12; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v132; // s8
  int32_t v133; // w2
  int32_t v134; // w3
  float v135; // s0
  bool v136; // zf
  float v137; // s8
  UnityEngine_Networking_DownloadHandler_o *v138; // x0
  __int64 v139; // x10
  UnityEngine_Networking_DownloadHandler_o *v140; // x22
  System_String_o *v141; // x0
  int32_t v142; // w2
  int32_t v143; // w3
  int klass; // w8
  System_String_o *v145; // x0
  int32_t v146; // w2
  int32_t v147; // w3
  UnityEngine_Networking_DownloadHandler_c *v148; // x0
  __int64 (**image)(void); // x8
  __int64 v150; // x10
  UnityEngine_Networking_DownloadHandler_c *v151; // x8
  AssetLoader__LoadDataCR_d__29_o *v152; // x22
  System_String_o *v153; // x0
  System_String_o *v154; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  int32_t v157; // w1
  ServantStatusBattleListViewItem_o *p_errorCode_5__6; // x0
  System_String_o *v159; // x22
  System_String_o *v160; // x0
  System_String_o *v161; // x0
  int32_t v162; // w2
  int32_t v163; // w3
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v165; // x23
  Il2CppObject *v166; // x23
  AssetLoader__LoadDataCR_d__29_o *v167; // x1
  AssetLoader__LoadDataCR_d__29_o *v168; // x23
  System_String_o *v169; // x24
  int v170; // w8
  System_String_o *v171; // x0
  System_String_o *v172; // x0
  struct AssetData_o *v173; // x9
  int32_t v174; // w2
  int32_t v175; // w3
  AssetLoader__LoadDataCR_d__29_o *v176; // x22
  int32_t v177; // w1
  int32_t v178; // w2
  int32_t v179; // w3
  struct System_String_o *v180; // x1
  int32_t v181; // w2
  int32_t v182; // w3
  int32_t v183; // w1
  struct AssetData_o *v184; // x8
  int32_t v185; // w2
  int32_t v186; // w3
  int32_t v187; // w2
  int32_t v188; // w3
  int32_t v189; // w1
  int32_t v190; // w2
  int32_t v191; // w3
  int32_t v192; // w2
  int32_t v193; // w3
  int32_t v194; // w1
  System_String_o *v195; // x0
  int32_t v196; // w2
  int32_t v197; // w3
  ManagerConfig_c *v198; // x0
  struct AssetData_o *v199; // x8
  CommonUI_o *v200; // x21
  System_String_o *v201; // x22
  __int64 v202; // x1
  __int64 v203; // x2
  ErrorDialog_ClickDelegate_o *v204; // x23
  ManagementManager_c *v205; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v209; // x22
  System_String_o *v210; // x21
  System_String_o *v211; // x23
  System_String_o *v212; // x23
  __int64 v213; // x1
  __int64 v214; // x2
  ErrorDialog_ClickDelegate_o *v215; // x24
  System_String_o *v216; // x23
  System_String_o *v217; // x23
  __int64 v218; // x1
  __int64 v219; // x2
  ErrorDialog_ClickDelegate_o *v220; // x24
  UnityEngine_Networking_UnityWebRequest_o *v221; // x0
  int32_t v222; // w2
  int32_t v223; // w3
  int32_t v224; // w2
  int32_t v225; // w3
  AssetManager_c *v226; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v228; // w2
  int32_t v229; // w3
  System_String_o *v230; // x21
  System_String_o *UrlString; // x0
  int32_t v232; // w2
  int32_t v233; // w3
  AssetLoader__LoadDataCR_d__29_o **v234; // x21
  float v235; // s0
  ManagerConfig_c *v236; // x0
  float v237; // s8
  float v238; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v239; // x0
  int32_t v240; // w2
  int32_t v241; // w3
  int32_t v242; // w2
  int32_t v243; // w3
  float v244; // s0
  float v245; // s9
  float v246; // s8
  float v247; // s0
  float v248; // s8
  System_String_o **v249; // x21
  UnityEngine_Networking_UnityWebRequest_o **v250; // x22
  System_String_o *v251; // x0
  System_String_o *text; // x23
  System_String_o *v253; // x23
  int32_t v254; // w2
  int32_t v255; // w3
  AssetLoader__LoadDataCR_d__29_o *v256; // x23
  int _2__current; // w8
  int32_t v258; // w0
  int32_t v259; // w25
  System_String_o *v260; // x24
  System_String_o *v261; // x23
  System_Byte_array *v262; // x25
  uint32_t v263; // w25
  int v264; // w8
  Il2CppObject *v265; // x8
  AssetLoader__LoadDataCR_d__29_o *v266; // x21
  int v267; // w25
  int v268; // w27
  System_String_o *v269; // x22
  Il2CppObject *v270; // x8
  AssetLoader__LoadDataCR_d__29_o *v271; // x22
  char v272; // w8
  const MethodInfo *v273; // x2
  System_String_o *v274; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v276; // x22
  System_String_o *v277; // x0
  const MethodInfo *v278; // x2
  int v279; // w23
  struct AssetData_o *v280; // x8
  ManagementManager_c *v281; // x0
  _BOOL4 v282; // w22
  Il2CppObject *v283; // x21
  System_String_o *v284; // x22
  __int64 v285; // x1
  __int64 v286; // x2
  ErrorDialog_ClickDelegate_o *v287; // x23
  ManagementManager_c *v288; // x0
  _BOOL4 v289; // w21
  Il2CppObject *v290; // x19
  __int64 *v291; // x8
  System_String_o *v292; // x21
  __int64 v293; // x1
  __int64 v294; // x2
  ErrorDialog_ClickDelegate_o *v295; // x22
  bool result; // w0
  __int64 *v297; // x8
  System_String_o *v298; // x22
  __int64 v299; // x1
  __int64 v300; // x2
  ErrorDialog_ClickDelegate_o *v301; // x23
  int32_t v302; // w2
  int32_t v303; // w3
  int32_t v304; // w2
  int32_t v305; // w3
  System_String_o *name; // x21
  AssetData_o *v307; // x22
  AssetLoader__LoadDataCR_d__29_o **v308; // x21
  __int64 v309; // x10
  __int64 v310; // x10
  System_Byte_array *v311; // x0
  UnityEngine_AssetBundleCreateRequest_o *v312; // x0
  int32_t v313; // w2
  int32_t v314; // w3
  int32_t v315; // w2
  int32_t v316; // w3
  Il2CppObject *req_5__13; // x1
  int32_t v318; // w2
  int32_t v319; // w3
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  ServantStatusBattleListViewItem_o *v321; // x20
  int32_t v322; // w2
  int32_t v323; // w3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v324; // x0
  int32_t v325; // w2
  int32_t v326; // w3
  ManagerConfig_c *v327; // x0
  int autoRetryCount_5__3; // w21
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v330; // x20
  int32_t v331; // w2
  int32_t v332; // w3
  Il2CppObject *v333; // x1
  Il2CppObject *v334; // x1
  int32_t v335; // w2
  int32_t v336; // w3
  int32_t v337; // w2
  int32_t v338; // w3
  Il2CppObject *v339; // x1
  System_String_o *v340; // x1
  int32_t v341; // w2
  int32_t v342; // w3
  ManagerConfig_c *v343; // x0
  struct AssetData_o *v344; // x8
  CommonUI_o *v345; // x22
  System_String_o *v346; // x21
  __int64 v347; // x1
  __int64 v348; // x2
  ErrorDialog_ClickDelegate_o *v349; // x23
  Il2CppObject *v350; // x1
  ManagementManager_c *v351; // x0
  _BOOL4 v352; // w22
  Il2CppObject *v353; // x21
  System_String_o *v354; // x22
  __int64 v355; // x1
  __int64 v356; // x2
  ErrorDialog_ClickDelegate_o *v357; // x23
  System_String_o *v358; // x22
  __int64 v359; // x1
  __int64 v360; // x2
  ErrorDialog_ClickDelegate_o *v361; // x23
  Il2CppObject *v362; // x1
  UnityEngine_WaitForSeconds_o *v363; // x20
  int32_t v364; // w2
  int32_t v365; // w3
  AssetLoader___c_c *v366; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v368; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int32_t v370; // w2
  int32_t v371; // w3
  UnityEngine_WaitUntil_o *v372; // x21
  int32_t v373; // w2
  int32_t v374; // w3
  UnityEngine_Networking_DownloadHandler_o *v375; // x0
  const MethodInfo *v376; // x2
  ManagerConfig_c *v377; // x0
  struct ManagerConfig_StaticFields *v378; // x8
  Il2CppObject *wait_5__10; // x1
  ServantStatusBattleListViewItem_o *v380; // x19
  ManagerConfig_c *v381; // x0
  struct ManagerConfig_StaticFields *v382; // x8
  Il2CppObject *v383; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  __int64 v386; // [xsp+18h] [xbp-88h]
  __int64 v387; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-78h] BYREF

  v4 = this;
  if ( (byte_49FB4D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetLoader_EndRebootDialog__, method);
    sub_1B640C8(&Method_AssetLoader_EndRetryDialog__, v5);
    sub_1B640C8(&Method_AssetLoader_EndWarningDialog__, v6);
    sub_1B640C8(&AssetManager_TypeInfo, v7);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v8);
    sub_1B640C8(&char___TypeInfo, v9);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v10);
    sub_1B640C8(&CommonServicePluginScript_TypeInfo, v11);
    sub_1B640C8(&Crc32_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v14);
    sub_1B640C8(&DownloadHandlerDecryptFileWithCrc_TypeInfo, v15);
    sub_1B640C8(&DownloadHandlerFileWithCrcCheck_TypeInfo, v16);
    sub_1B640C8(&System_Func_bool__TypeInfo, v17);
    sub_1B640C8(&System_IO_IOException_TypeInfo, v18);
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    sub_1B640C8(&ManagementManager_TypeInfo, v20);
    sub_1B640C8(&ManagerConfig_TypeInfo, v21);
    sub_1B640C8(&NetworkManager_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1B640C8(&string___TypeInfo, v24);
    sub_1B640C8(&Method_AssetLoader___c__LoadDataCR_b__29_0__, v25);
    sub_1B640C8(&AssetLoader___c_TypeInfo, v26);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v27);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v28);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v29);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v30);
    sub_1B640C8(&StringLiteral_9175/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/, v31);
    sub_1B640C8(&StringLiteral_7134/*"HTTP"*/, v32);
    sub_1B640C8(&StringLiteral_5302/*"Disk full"*/, v33);
    sub_1B640C8(&StringLiteral_2505/*"AssetStorageList download time over"*/, v34);
    sub_1B640C8(&StringLiteral_9184/*"NETWORK_ERROR_DISK_FULL"*/, v35);
    sub_1B640C8(&StringLiteral_117/*" "*/, v36);
    sub_1B640C8(&StringLiteral_2492/*"AssetName : "*/, v37);
    sub_1B640C8(&StringLiteral_818/*")\n\n503 Auto retry count "*/, v38);
    sub_1B640C8(&StringLiteral_821/*")\nfile crc ("*/, v39);
    sub_1B640C8(&StringLiteral_1515/*"503"*/, v40);
    sub_1B640C8(&StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v41);
    sub_1B640C8(&StringLiteral_15870/*"[FFFF80]Download error for debug"*/, v42);
    sub_1B640C8(&StringLiteral_2502/*"AssetStorageList download data error"*/, v43);
    sub_1B640C8(&StringLiteral_25054/*"~"*/, v44);
    sub_1B640C8(&StringLiteral_12205/*"STATUS"*/, v45);
    sub_1B640C8(&StringLiteral_817/*")\n\n"*/, v46);
    sub_1B640C8(&StringLiteral_9174/*"NETWORK_ERROR_ASSET_UPDATE"*/, v47);
    sub_1B640C8(&StringLiteral_697/*"("*/, v48);
    sub_1B640C8(&StringLiteral_819/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v49);
    sub_1B640C8(&StringLiteral_815/*")"*/, v50);
    sub_1B640C8(&StringLiteral_18980/*"error "*/, v51);
    sub_1B640C8(&StringLiteral_1888/*"@"*/, v52);
    sub_1B640C8(&StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v53);
    sub_1B640C8(&StringLiteral_2503/*"AssetStorageList download error"*/, v54);
    sub_1B640C8(&StringLiteral_820/*")\n\nAssetBundle file download time over"*/, v55);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B640C8(&StringLiteral_1/*""*/, v56);
    byte_49FB4D0 = 1;
  }
  v387 = 0LL;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._asyncOperater_5__12, 0, (int32_t)v2, v3);
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
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v77, v78);
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, (int32_t)v80, v81, v82);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v85, v86);
      _4__this->fields.readData = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, 0, v87, v88);
LABEL_59:
      while ( 1 )
      {
        _4__this->fields.readData = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
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
            v321 = (ServantStatusBattleListViewItem_o *)&_4__this->fields.loader;
            sub_1B6406C(v321, (int32_t)LoadRequest, v322, v323);
            this = (AssetLoader__LoadDataCR_d__29_o *)v321->klass;
            if ( !v321->klass )
              goto LABEL_375;
            v324 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                     0LL);
            v4->fields.__2__current = (Il2CppObject *)v324;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)v324, v325, v326);
            v72 = 11;
          }
          else
          {
            v366 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v366 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v366->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v366->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v366);
                v366 = AssetLoader___c_TypeInfo;
              }
              v368 = (Il2CppObject *)v366->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, method, v2);
              System_Func_bool____ctor(_9__29_0, v368, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0LL);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v370, v371);
            }
            v372 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, method, v2);
            UnityEngine_WaitUntil___ctor(v372, _9__29_0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v372;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)v372, v373, v374);
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
        v307 = _4__this->fields.data;
        if ( !v307 )
          goto LABEL_375;
        if ( v307->fields.entryCount >= 1 )
        {
          v308 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v4->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0LL);
            if ( !this
              || (v309 = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v309)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v309 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v308;
              if ( !*v308 )
                goto LABEL_375;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_375;
              v310 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v310
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v310 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_375;
              }
            }
            v311 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v312 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v311, 0LL);
            v4->fields._req_5__13 = v312;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._req_5__13, (int32_t)v312, v313, v314);
            this = *v308;
            if ( !*v308 )
              goto LABEL_375;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v308 = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v315, v316);
            req_5__13 = (Il2CppObject *)v4->fields._req_5__13;
            v4->fields.__2__current = req_5__13;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)req_5__13, v318, v319);
            v72 = 12;
            goto LABEL_355;
          }
          if ( !this )
            goto LABEL_375;
          v375 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v307, v375, v376);
        }
LABEL_38:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v74, v75);
        }
        _4__this->fields.readData = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        AssetLoader__EndLoad(_4__this, v76);
        return 0;
      }
      *(_WORD *)&v4->fields._isAutoRetry_5__4 = 0;
      v4->fields._errorCode_5__6 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, 0, (int32_t)v2, v3);
      v4->fields._errorLocalizeCode_5__7 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorLocalizeCode_5__7, 0, v89, v90);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v94 = ManagerConfig_TypeInfo;
      v95 = unscaledTime;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v94 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v94->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__9 = 0.0;
      v4->fields._requestTime_5__8 = v95 + TIMEOUT;
      v97 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v91, v92);
      UnityEngine_WaitForEndOfFrame___ctor(v97, 0LL);
      v4->fields._wait_5__10 = v97;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__10, (int32_t)v97, v98, v99);
      Path = AssetStorageCache__GetPath(v100);
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
          v108 = StringLiteral_5302/*"Disk full"*/;
          v4->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5302/*"Disk full"*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, v108, v104, v105);
          p_errorLocalizeCode_5__7 = (ServantStatusBattleListViewItem_o *)&v4->fields._errorLocalizeCode_5__7;
          v112 = StringLiteral_9184/*"NETWORK_ERROR_DISK_FULL"*/;
          v4->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9184/*"NETWORK_ERROR_DISK_FULL"*/;
          goto LABEL_141;
        }
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      Url = AssetData__get_Url((AssetData_o *)this, v103);
      v4->fields._url_5__11 = Url;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._url_5__11, (int32_t)Url, v114, v115);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      url_5__11 = v4->fields._url_5__11;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, v116);
      v119 = _4__this->fields.data;
      v120 = this;
      if ( v4->fields._isEncrypted_5__2 )
      {
        if ( !v119 )
          goto LABEL_375;
        v121 = v119->fields.entryCount > 0;
      }
      else
      {
        if ( !v119 )
          goto LABEL_375;
        v121 = 0;
      }
      Key = AssetData__get_Key(_4__this->fields.data, v118);
      v123 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, (System_String_o *)v120, v121, Key, 0LL);
      _4__this->fields.loader = v123;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, (int32_t)v123, v124, v125);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v126 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v4->fields._asyncOperater_5__12 = v126;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._asyncOperater_5__12, (int32_t)v126, v127, v128);
LABEL_78:
      p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v4->fields._asyncOperater_5__12;
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
      if ( !this )
LABEL_375:
        sub_1B64324(this);
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
        v132 = progress;
        v135 = UnityEngine_Time__get_unscaledTime(0LL);
        v136 = v132 == loadProgress_5__9;
        v137 = v135;
        if ( !v136 )
        {
          v377 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v377 = ManagerConfig_TypeInfo;
          }
          v378 = v377->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
          v4->fields._requestTime_5__8 = v137 + v378->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v4->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
LABEL_369:
          wait_5__10 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = wait_5__10;
          v380 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(v380, (int32_t)wait_5__10, v133, v134);
          result = 1;
          *(_DWORD *)&v380[-1].fields.isMine = 1;
          return result;
        }
        if ( v135 < v4->fields._requestTime_5__8 )
          goto LABEL_369;
      }
      if ( !_4__this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v138 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      if ( v138
        && (v139 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v138->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v139) )
      {
        v140 = (DownloadHandlerFileWithCrcCheck_c *)v138->klass->_2.typeHierarchy[v139 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
             ? v138
             : 0LL;
      }
      else
      {
        v140 = 0LL;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v145 = System_String__Concat_61386656(
                 (System_String_o *)StringLiteral_697/*"("*/,
                 v4->fields._url_5__11,
                 (System_String_o *)StringLiteral_820/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        v4->fields._errorCode_5__6 = v145;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, (int32_t)v145, v146, v147);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        if ( v140 )
          DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v140, 0LL);
        goto LABEL_140;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v141 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v141, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v140 )
        {
          klass = 0;
LABEL_127:
          HIDWORD(v387) = klass;
          v173 = _4__this->fields.data;
          if ( !v173 )
            goto LABEL_375;
          if ( klass == v173->fields.crc )
          {
            v173->fields.nowVersion = v173->fields.newVersion;
            _4__this->fields.isDownload = 0;
          }
          else
          {
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B64170(string___TypeInfo, 7LL);
            if ( !this )
              goto LABEL_375;
            v176 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_258;
            v177 = StringLiteral_697/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_697/*"("*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__4__this, v177, v174, v175);
            if ( LODWORD(v176->fields.__2__current) <= 1 )
              goto LABEL_258;
            v180 = v4->fields._url_5__11;
            v176->fields.resourceNames = (struct System_String_array *)v180;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v176->fields.resourceNames, (int32_t)v180, v178, v179);
            if ( LODWORD(v176->fields.__2__current) <= 2 )
              goto LABEL_258;
            v183 = StringLiteral_819/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v176->fields._isEncrypted_5__2 = StringLiteral_819/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v176->fields._isEncrypted_5__2, v183, v181, v182);
            v184 = _4__this->fields.data;
            if ( !v184 )
              goto LABEL_375;
            LODWORD(v387) = v184->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v387, 0LL);
            if ( LODWORD(v176->fields.__2__current) <= 3 )
              goto LABEL_258;
            *(_QWORD *)&v176->fields._isAutoRetry_5__4 = this;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v176->fields._isAutoRetry_5__4, (int32_t)this, v185, v186);
            if ( LODWORD(v176->fields.__2__current) <= 4 )
              goto LABEL_258;
            v189 = StringLiteral_821/*")\nfile crc ("*/;
            v176->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_821/*")\nfile crc ("*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v176->fields._errorCode_5__6, v189, v187, v188);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v387 + 4, 0LL);
            if ( LODWORD(v176->fields.__2__current) <= 5 )
              goto LABEL_258;
            v176->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v176->fields._errorLocalizeCode_5__7,
              (int32_t)this,
              v190,
              v191);
            if ( LODWORD(v176->fields.__2__current) <= 6 )
              goto LABEL_258;
            v194 = StringLiteral_815/*")"*/;
            *(_QWORD *)&v176->fields._requestTime_5__8 = StringLiteral_815/*")"*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v176->fields._requestTime_5__8, v194, v192, v193);
            v195 = System_String__Concat_61388924((System_String_array *)v176, 0LL);
            v4->fields._errorCode_5__6 = v195;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, (int32_t)v195, v196, v197);
            v4->fields._isCrcError_5__5 = 1;
          }
          goto LABEL_140;
        }
        if ( !v140[4].klass )
        {
          klass = (int)v140[1].klass;
          goto LABEL_127;
        }
      }
      else if ( !v140 )
      {
LABEL_110:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        v159 = v4->fields._url_5__11;
        v160 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v161 = System_String__Concat_61388660(
                 (System_String_o *)StringLiteral_697/*"("*/,
                 v159,
                 (System_String_o *)StringLiteral_817/*")\n\n"*/,
                 v160,
                 0LL);
        v4->fields._errorCode_5__6 = v161;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, (int32_t)v161, v162, v163);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                            0LL);
        if ( !ResponseHeaders )
          goto LABEL_140;
        v165 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
               (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v165,
                (Il2CppObject *)StringLiteral_12205/*"STATUS"*/,
                &value,
                (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_140;
        }
        v166 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B64170(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        v167 = this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v166 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_61397780(
                                                    (System_String_o *)v166,
                                                    (System_Char_array *)this,
                                                    1,
                                                    0LL);
        if ( !this )
          goto LABEL_375;
        v168 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_140;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_7134/*"HTTP"*/,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_140;
        if ( LODWORD(v168->fields.__2__current) <= 1 )
          goto LABEL_258;
        this = (AssetLoader__LoadDataCR_d__29_o *)v168->fields.resourceNames;
        if ( !this )
          goto LABEL_375;
        if ( !System_String__Equals_61383712((System_String_o *)this, (System_String_o *)StringLiteral_1515/*"503"*/, 0LL) )
          goto LABEL_140;
        v169 = v4->fields._url_5__11;
        v170 = v4->fields._autoRetryCount_5__3 + 1;
        v4->fields._isAutoRetry_5__4 = 1;
        v4->fields._autoRetryCount_5__3 = v170;
        v171 = System_Int32__ToString((int)v4 + 52, 0LL);
        v172 = System_String__Concat_61388660(
                 (System_String_o *)StringLiteral_697/*"("*/,
                 v169,
                 (System_String_o *)StringLiteral_818/*")\n\n503 Auto retry count "*/,
                 v171,
                 0LL);
        v157 = (int)v172;
        v4->fields._errorCode_5__6 = v172;
        p_errorCode_5__6 = (ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6;
        goto LABEL_109;
      }
      DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v140, 0LL);
      v148 = v140[4].klass;
      if ( !v148 )
        goto LABEL_110;
      image = (__int64 (**)(void))v148->_1.image;
      v150 = LOBYTE(System_IO_IOException_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *((unsigned __int8 *)v148->_1.image + 304) >= (unsigned int)v150
        && *((System_IO_IOException_c **)image[25] + v150 - 1) == System_IO_IOException_TypeInfo )
      {
        _4__this->fields.isErrorDialog = 1;
        v154 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v148->_1.image
                                   + 49))(
                                    v148,
                                    *((_QWORD *)v148->_1.image + 50));
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)image[45]();
        v151 = v140[4].klass;
        if ( !v151 )
          goto LABEL_375;
        v152 = this;
        v153 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v151->_1.image
                                   + 49))(
                                    v151,
                                    *((_QWORD *)v151->_1.image + 50));
        v154 = System_String__Concat_61388660(
                 (System_String_o *)StringLiteral_18980/*"error "*/,
                 (System_String_o *)v152,
                 (System_String_o *)StringLiteral_117/*" "*/,
                 v153,
                 0LL);
      }
      v157 = (int)v154;
      v4->fields._errorCode_5__6 = v154;
      p_errorCode_5__6 = (ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6;
LABEL_109:
      sub_1B6406C(p_errorCode_5__6, v157, v155, v156);
LABEL_140:
      v4->fields._url_5__11 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._url_5__11, 0, v142, v143);
      p_errorLocalizeCode_5__7 = (ServantStatusBattleListViewItem_o *)&v4->fields._asyncOperater_5__12;
      v112 = 0;
      v4->fields._asyncOperater_5__12 = 0LL;
LABEL_141:
      sub_1B6406C(p_errorLocalizeCode_5__7, v112, v109, v110);
      method = (const MethodInfo *)v4->fields._errorCode_5__6;
      if ( method )
      {
        AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
        v198 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v198 = ManagerConfig_TypeInfo;
        }
        if ( v198->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v199 = _4__this->fields.data;
          if ( !v199 )
            goto LABEL_375;
          v200 = (CommonUI_o *)this;
          v201 = System_String__Concat_61388660(
                   (System_String_o *)StringLiteral_2492/*"AssetName : "*/,
                   v199->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v4->fields._errorCode_5__6,
                   0LL);
          v204 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v202, v203);
          ErrorDialog_ClickDelegate___ctor(v204, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v200 )
            goto LABEL_375;
          v386 &= 0xFFFFFFFF00000000LL;
          *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
          LODWORD(effectDistance.fields.value.fields.y) = v386;
          CommonUI__OpenWarningDialog(
            v200,
            (System_String_o *)StringLiteral_15870/*"[FFFF80]Download error for debug"*/,
            v201,
            v204,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_148:
          if ( _4__this->fields.isErrorDialog )
          {
            v333 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v333;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)v333, (int32_t)v2, v3);
            v72 = 2;
            goto LABEL_355;
          }
        }
        if ( v4->fields._isAutoRetry_5__4 )
        {
          v327 = ManagerConfig_TypeInfo;
          autoRetryCount_5__3 = v4->fields._autoRetryCount_5__3;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v327 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v327->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v330 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
          UnityEngine_WaitForSeconds___ctor(v330, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v330;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(p__2__current, (int32_t)v330, v331, v332);
          v72 = 3;
          goto LABEL_355;
        }
        if ( !v4->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          if ( !byte_49FB4AB )
          {
            sub_1B640C8(&ManagementManager_TypeInfo, method);
            byte_49FB4AB = 1;
          }
          v205 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v205 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v205->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v4->fields._errorLocalizeCode_5__7;
          v209 = (CommonUI_o *)Instance;
          v210 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v211 = v4->fields._errorLocalizeCode_5__7;
            else
              v211 = (System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v212 = LocalizationManager__Get(v211, 0LL);
            v215 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v213, v214);
            ErrorDialog_ClickDelegate___ctor(v215, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v209 )
              goto LABEL_375;
            CommonUI__OpenRetryBootDialog(v209, v210, v212, v215, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v216 = v4->fields._errorLocalizeCode_5__7;
            else
              v216 = (System_String_o *)StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v217 = LocalizationManager__Get(v216, 0LL);
            v220 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v218, v219);
            ErrorDialog_ClickDelegate___ctor(v220, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v209 )
              goto LABEL_375;
            CommonUI__OpenRetryDialog(v209, v210, v217, v220, 1, 0LL);
          }
LABEL_172:
          if ( _4__this->fields.isErrorDialog )
          {
            v334 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v334;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)v334, (int32_t)v2, v3);
            v72 = 4;
            goto LABEL_355;
          }
        }
      }
LABEL_173:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_49F7D6C )
      {
        sub_1B640C8(&NetworkManager_TypeInfo, method);
        byte_49F7D6C = 1;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (AssetLoader__LoadDataCR_d__29_o *)NetworkManager_TypeInfo;
      }
      if ( !_4__this )
        goto LABEL_375;
      if ( LOBYTE(this[1].fields._errorCode_5__6[5].fields._stringLength) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v335, v336);
        _4__this->fields.readData = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, 0, v337, v338);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v4->fields._isEncrypted_5__2 )
        goto LABEL_298;
      v221 = _4__this->fields.loader;
      if ( v221 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v221, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v222, v223);
        _4__this->fields.readData = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, 0, v224, v225);
      }
      if ( !v4->fields._isCrcError_5__5 )
      {
LABEL_291:
        v4->fields._errorCode_5__6 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, 0, (int32_t)v2, v3);
        v4->fields._errorLocalizeCode_5__7 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorLocalizeCode_5__7, 0, v302, v303);
        v4->fields._wait_5__10 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__10, 0, v304, v305);
        goto LABEL_292;
      }
      v226 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v226);
      v4->fields._url_5__11 = ConfigFileAddress;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._url_5__11, (int32_t)ConfigFileAddress, v228, v229);
LABEL_189:
      v230 = v4->fields._url_5__11;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v230, v59);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_375;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v234 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, (int32_t)this, v232, v233);
      v235 = UnityEngine_Time__get_unscaledTime(0LL);
      v236 = ManagerConfig_TypeInfo;
      v237 = v235;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v236 = ManagerConfig_TypeInfo;
      }
      v238 = v236->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__9 = 0.0;
      v4->fields._requestTime_5__8 = v237 + v238;
      this = *v234;
      if ( !*v234 )
        goto LABEL_375;
      v239 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v4->fields._asyncOperater_5__12 = v239;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._asyncOperater_5__12, (int32_t)v239, v240, v241);
LABEL_196:
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
        if ( !this )
          goto LABEL_375;
        v244 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v245 = v4->fields._loadProgress_5__9;
        v246 = v244;
        v247 = UnityEngine_Time__get_unscaledTime(0LL);
        v136 = v246 == v245;
        v248 = v247;
        if ( !v136 )
        {
          v381 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v381 = ManagerConfig_TypeInfo;
          }
          v382 = v381->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
          v4->fields._requestTime_5__8 = v248 + v382->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v4->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_374;
        }
        if ( v247 < v4->fields._requestTime_5__8 )
        {
LABEL_374:
          v383 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = v383;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(p__2__current, (int32_t)v383, v242, v243);
          v72 = 5;
          goto LABEL_355;
        }
      }
      v4->fields._errorCode_5__6 = 0LL;
      v249 = &v4->fields._errorCode_5__6;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, 0, v242, v243);
      if ( !_4__this )
        goto LABEL_375;
      v250 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v250 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v250, 0LL);
        v297 = &StringLiteral_2505/*"AssetStorageList download time over"*/;
        goto LABEL_327;
      }
      v251 = UnityEngine_Networking_UnityWebRequest__get_error(*v250, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v251, 0LL);
      if ( !*v250 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v340 = UnityEngine_Networking_UnityWebRequest__get_error(*v250, 0LL);
        goto LABEL_328;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v250, 0LL);
      if ( !this )
        goto LABEL_375;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v253 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v253, 0LL) )
      {
        v297 = &StringLiteral_2503/*"AssetStorageList download error"*/;
        goto LABEL_327;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B64170(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_375;
      v167 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v253 )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_61405136(v253, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_375;
      v256 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25054/*"~"*/, 0LL) )
        goto LABEL_286;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B64170(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_375;
      _2__current = (int)this->fields.__2__current;
      v167 = this;
      if ( !_2__current )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = 13;
      if ( _2__current == 1 )
        goto LABEL_258;
      WORD1(this->fields.__4__this) = 10;
      v258 = System_String__IndexOfAny((System_String_o *)v256, (System_Char_array *)this, 0LL);
      if ( v258 < 2 )
        goto LABEL_286;
      v259 = v258;
      v260 = System_String__Substring_61394392((System_String_o *)v256, 1, v258 - 1, 0LL);
      v261 = System_String__Substring((System_String_o *)v256, v259 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_375;
      v262 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                    this,
                                    v261,
                                    this->klass[1]._1.interfaceOffsets);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v263 = Crc32__Compute(v262, 0LL);
      if ( System_UInt32__Parse(v260, 0LL) != v263 )
      {
LABEL_286:
        v297 = &StringLiteral_2502/*"AssetStorageList download data error"*/;
LABEL_327:
        v340 = (System_String_o *)*v297;
LABEL_328:
        *v249 = v340;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, (int32_t)v340, v254, v255);
        if ( *v250 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v250, 0LL);
          *v250 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v341, v342);
        }
        if ( !*v249 )
          goto LABEL_354;
        v343 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v343 = ManagerConfig_TypeInfo;
        }
        if ( v343->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v344 = _4__this->fields.data;
          if ( !v344 )
            goto LABEL_375;
          v345 = (CommonUI_o *)this;
          v346 = System_String__Concat_61388660(
                   (System_String_o *)StringLiteral_2492/*"AssetName : "*/,
                   v344->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v249,
                   0LL);
          v349 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v347, v348);
          ErrorDialog_ClickDelegate___ctor(v349, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v345 )
            goto LABEL_375;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v345,
            (System_String_o *)StringLiteral_15870/*"[FFFF80]Download error for debug"*/,
            v346,
            v349,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_337:
          if ( _4__this->fields.isErrorDialog )
          {
            v350 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v350;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)v350, (int32_t)v2, v3);
            v72 = 6;
            goto LABEL_355;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_49FB4AB )
        {
          sub_1B640C8(&ManagementManager_TypeInfo, method);
          byte_49FB4AB = 1;
        }
        v351 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v351 = ManagementManager_TypeInfo;
        }
        v352 = v351->static_fields->isDuringStartup;
        v353 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v352 )
        {
          v354 = LocalizationManager__Get((System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v357 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v355, v356);
          ErrorDialog_ClickDelegate___ctor(v357, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v353 )
            goto LABEL_375;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v353, (System_String_o *)StringLiteral_1/*""*/, v354, v357, 0, 0LL);
        }
        else
        {
          v358 = LocalizationManager__Get((System_String_o *)StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
          v361 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v359, v360);
          ErrorDialog_ClickDelegate___ctor(v361, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v353 )
            goto LABEL_375;
          CommonUI__OpenRetryDialog((CommonUI_o *)v353, (System_String_o *)StringLiteral_1/*""*/, v358, v361, 0, 0LL);
        }
LABEL_352:
        if ( _4__this->fields.isErrorDialog )
        {
          v362 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = v362;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(p__2__current, (int32_t)v362, (int32_t)v2, v3);
          v72 = 7;
        }
        else
        {
LABEL_354:
          v363 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
          UnityEngine_WaitForSeconds___ctor(v363, 1.0, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v363;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(p__2__current, (int32_t)v363, v364, v365);
          v72 = 8;
        }
LABEL_355:
        *(_DWORD *)&p__2__current[-1].fields.isMine = v72;
        return 1;
      }
      if ( !v261 )
        goto LABEL_272;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B64170(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_375;
      v264 = (int)this->fields.__2__current;
      v167 = this;
      if ( !v264 || (LOWORD(this->fields.__4__this) = 13, v264 == 1) )
LABEL_258:
        sub_1B6432C(this, v167);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_61397780(v261, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_375;
      v265 = this->fields.__2__current;
      v266 = this;
      v267 = (_DWORD)v265 - 1;
      if ( (int)v265 < 1 )
        goto LABEL_272;
      v268 = 0;
      while ( 2 )
      {
        v269 = (System_String_o *)*((_QWORD *)&v266->fields.__4__this + v268);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B64170(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        v167 = this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v269 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_61397544(v269, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_375;
        v270 = this->fields.__2__current;
        v271 = this;
        if ( (int)v270 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1888/*"@"*/,
                                                      0LL);
          if ( !LODWORD(v271->fields.__2__current) )
            goto LABEL_258;
          v272 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v271->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          if ( (v272 & 1) != 0 )
          {
            v274 = System_String__Substring((System_String_o *)this, 1, 0LL);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v271->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v271->fields.resourceNames;
            v276 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v274, v276, v273);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_272;
            goto LABEL_256;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_25054/*"~"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v271->fields.__2__current) )
              goto LABEL_258;
            this = (AssetLoader__LoadDataCR_d__29_o *)v271->fields.__4__this;
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v270 = v271->fields.__2__current;
              break;
            }
          }
LABEL_256:
          if ( v267 == v268 )
            goto LABEL_272;
          if ( (unsigned int)++v268 >= LODWORD(v266->fields.__2__current) )
            goto LABEL_258;
          continue;
        }
        break;
      }
      if ( (_DWORD)v270 != 5 )
        goto LABEL_272;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v271->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_375;
      v277 = System_String__Trim((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v277, 0LL);
      if ( LODWORD(v271->fields.__2__current) <= 4 )
        goto LABEL_258;
      v279 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v271->fields._errorCode_5__6, v278);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_256;
      v280 = _4__this->fields.data;
      if ( !v280 )
        goto LABEL_375;
      if ( v279 == v280->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_49FB4AB )
        {
          sub_1B640C8(&ManagementManager_TypeInfo, v167);
          byte_49FB4AB = 1;
        }
        v281 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v281 = ManagementManager_TypeInfo;
        }
        v282 = v281->static_fields->isDuringStartup;
        v283 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v282 )
        {
          v284 = LocalizationManager__Get((System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v287 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v285, v286);
          ErrorDialog_ClickDelegate___ctor(v287, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( v283 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v283, (System_String_o *)StringLiteral_1/*""*/, v284, v287, 1, 0LL);
            goto LABEL_289;
          }
          goto LABEL_375;
        }
        v298 = LocalizationManager__Get((System_String_o *)StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v301 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v299, v300);
        ErrorDialog_ClickDelegate___ctor(v301, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( !v283 )
          goto LABEL_375;
        CommonUI__OpenRetryDialog((CommonUI_o *)v283, (System_String_o *)StringLiteral_1/*""*/, v298, v301, 1, 0LL);
LABEL_289:
        if ( !_4__this->fields.isErrorDialog )
        {
          v4->fields._url_5__11 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._url_5__11, 0, (int32_t)v2, v3);
          goto LABEL_291;
        }
        v339 = (Il2CppObject *)v4->fields._wait_5__10;
        v4->fields.__2__current = v339;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)v339, (int32_t)v2, v3);
        v72 = 9;
        goto LABEL_355;
      }
LABEL_272:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_49FB4AB )
      {
        sub_1B640C8(&ManagementManager_TypeInfo, v167);
        byte_49FB4AB = 1;
      }
      v288 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v288 = ManagementManager_TypeInfo;
      }
      v289 = v288->static_fields->isDuringStartup;
      v290 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v289 )
          goto LABEL_280;
LABEL_282:
        v291 = &StringLiteral_9174/*"NETWORK_ERROR_ASSET_UPDATE"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !v289 )
          goto LABEL_282;
LABEL_280:
        v291 = &StringLiteral_9175/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
      }
      v292 = LocalizationManager__Get((System_String_o *)*v291, 0LL);
      v295 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v293, v294);
      ErrorDialog_ClickDelegate___ctor(v295, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
      if ( !v290 )
        goto LABEL_375;
      CommonUI__OpenErrorDialog((CommonUI_o *)v290, (System_String_o *)StringLiteral_1/*""*/, v292, v295, 0, 0LL);
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
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v68, v70, v71);
      v72 = 13;
      goto LABEL_355;
    case 0xD:
      v4->fields.__1__state = -1;
LABEL_37:
      v4->fields._req_5__13 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._req_5__13, 0, (int32_t)v2, v3);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB4CE & 1) == 0 )
  {
    sub_1B640C8(&AssetLoader___c_TypeInfo, v1);
    byte_49FB4CE = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(AssetLoader___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)AssetLoader___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FB4CF & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_49FB4CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return BYTE4(Instance[7].monitor) == 0;
}