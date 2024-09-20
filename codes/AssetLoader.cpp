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
    sub_1B8880C(this, method);
  entryCount = data->fields.entryCount;
  if ( (entryCount & 0x80000000) == 0 )
    data->fields.entryCount = entryCount + 1;
}


void __fastcall AssetLoader__AssetLoadLogError(
        AssetLoader_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x21
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w1
  int32_t v50; // w2
  int32_t v51; // w3
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
  __int64 v119; // x23
  __int64 v120; // x24
  CrashReporter_o *v121; // x19

  if ( (byte_4A5A200 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Debug_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_14107/*"The request timed out."*/);
    sub_1B885B0(&StringLiteral_20926/*"java.net.SocketException"*/);
    sub_1B885B0(&StringLiteral_12214/*"SSL CA certificate error"*/);
    sub_1B885B0(&StringLiteral_1502/*"404: Not Found"*/);
    sub_1B885B0(&StringLiteral_14037/*"The network connection was lost."*/);
    sub_1B885B0(&StringLiteral_1497/*"400: Bad Request"*/);
    sub_1B885B0(&StringLiteral_14883/*"Unable to complete SSL connection"*/);
    sub_1B885B0(&StringLiteral_14913/*"Unable to read data"*/);
    sub_1B885B0(&StringLiteral_18206/*"connect failed"*/);
    sub_1B885B0(&StringLiteral_7167/*"HTTP/1.1 500 Internal Server Error"*/);
    sub_1B885B0(&StringLiteral_20928/*"java.net.UnknownHostException"*/);
    sub_1B885B0(&StringLiteral_1510/*"500: Internal Server Error"*/);
    sub_1B885B0(&StringLiteral_1512/*"502:"*/);
    sub_1B885B0(&StringLiteral_11307/*"Request timeout"*/);
    sub_1B885B0(&StringLiteral_4695/*"Connection reset by peer"*/);
    sub_1B885B0(&StringLiteral_5054/*"DLErrorType"*/);
    sub_1B885B0(&StringLiteral_5053/*"DLErrorAsset"*/);
    sub_1B885B0(&StringLiteral_1524/*"504: Gateway Timeout"*/);
    sub_1B885B0(&StringLiteral_15090/*"Unknown Error"*/);
    sub_1B885B0(&StringLiteral_1514/*"503 Auto retry count"*/);
    sub_1B885B0(&StringLiteral_20909/*"java.io.EOFException"*/);
    sub_1B885B0(&StringLiteral_20923/*"java.net.ConnectException"*/);
    sub_1B885B0(&StringLiteral_1500/*"403: Forbidden"*/);
    sub_1B885B0(&StringLiteral_4694/*"Connection refused"*/);
    sub_1B885B0(&StringLiteral_7168/*"HTTP/1.1 504 Gateway Timeout"*/);
    sub_1B885B0(&StringLiteral_1499/*"401: Authorization Required"*/);
    sub_1B885B0(&StringLiteral_20910/*"java.io.IOException"*/);
    sub_1B885B0(&StringLiteral_9429/*"No address associated with hostname"*/);
    sub_1B885B0(&StringLiteral_20925/*"java.net.ProtocolException"*/);
    sub_1B885B0(&StringLiteral_2491/*"AssetBundle file download time over"*/);
    sub_1B885B0(&StringLiteral_1503/*"408: Request Time-out"*/);
    sub_1B885B0(&StringLiteral_14524/*"Too many redirects"*/);
    sub_1B885B0(&StringLiteral_12823/*"Software caused connection abort"*/);
    sub_1B885B0(&StringLiteral_2490/*"AssetBundle file check sum error"*/);
    sub_1B885B0(&StringLiteral_20924/*"java.net.NoRouteToHostException"*/);
    sub_1B885B0(&StringLiteral_5290/*"Destination host has an erroneous SSL certificate"*/);
    sub_1B885B0(&StringLiteral_4696/*"Connection timed out"*/);
    sub_1B885B0(&StringLiteral_4293/*"Cannot resolve destination host"*/);
    sub_1B885B0(&StringLiteral_20927/*"java.net.SocketTimeoutException"*/);
    sub_1B885B0(&StringLiteral_2494/*"AssetLoadError"*/);
    byte_4A5A200 = 1;
  }
  Instance = sub_1B88658(string___TypeInfo, 37LL);
  if ( !Instance )
    goto LABEL_58;
  v9 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v10 = StringLiteral_9429/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9429/*"No address associated with hostname"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(Instance + 32), v10, v7, v8);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_47;
  v13 = StringLiteral_2491/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_2491/*"AssetBundle file download time over"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), v13, v11, v12);
  if ( *(_DWORD *)(v9 + 24) <= 2u )
    goto LABEL_47;
  v16 = StringLiteral_14037/*"The network connection was lost."*/;
  *(_QWORD *)(v9 + 48) = StringLiteral_14037/*"The network connection was lost."*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 48), v16, v14, v15);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_47;
  v19 = StringLiteral_4695/*"Connection reset by peer"*/;
  *(_QWORD *)(v9 + 56) = StringLiteral_4695/*"Connection reset by peer"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 56), v19, v17, v18);
  if ( *(_DWORD *)(v9 + 24) <= 4u )
    goto LABEL_47;
  v22 = StringLiteral_12823/*"Software caused connection abort"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_12823/*"Software caused connection abort"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 64), v22, v20, v21);
  if ( *(_DWORD *)(v9 + 24) <= 5u )
    goto LABEL_47;
  v25 = StringLiteral_4696/*"Connection timed out"*/;
  *(_QWORD *)(v9 + 72) = StringLiteral_4696/*"Connection timed out"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 72), v25, v23, v24);
  if ( *(_DWORD *)(v9 + 24) <= 6u )
    goto LABEL_47;
  v28 = StringLiteral_4694/*"Connection refused"*/;
  *(_QWORD *)(v9 + 80) = StringLiteral_4694/*"Connection refused"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 80), v28, v26, v27);
  if ( *(_DWORD *)(v9 + 24) <= 7u )
    goto LABEL_47;
  v31 = StringLiteral_14107/*"The request timed out."*/;
  *(_QWORD *)(v9 + 88) = StringLiteral_14107/*"The request timed out."*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 88), v31, v29, v30);
  if ( *(_DWORD *)(v9 + 24) <= 8u )
    goto LABEL_47;
  v34 = StringLiteral_4293/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v9 + 96) = StringLiteral_4293/*"Cannot resolve destination host"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 96), v34, v32, v33);
  if ( *(_DWORD *)(v9 + 24) <= 9u )
    goto LABEL_47;
  v37 = StringLiteral_14883/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v9 + 104) = StringLiteral_14883/*"Unable to complete SSL connection"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 104), v37, v35, v36);
  if ( *(_DWORD *)(v9 + 24) <= 0xAu )
    goto LABEL_47;
  v40 = StringLiteral_15090/*"Unknown Error"*/;
  *(_QWORD *)(v9 + 112) = StringLiteral_15090/*"Unknown Error"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 112), v40, v38, v39);
  if ( *(_DWORD *)(v9 + 24) <= 0xBu )
    goto LABEL_47;
  v43 = StringLiteral_11307/*"Request timeout"*/;
  *(_QWORD *)(v9 + 120) = StringLiteral_11307/*"Request timeout"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 120), v43, v41, v42);
  if ( *(_DWORD *)(v9 + 24) <= 0xCu )
    goto LABEL_47;
  v46 = StringLiteral_2490/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v9 + 128) = StringLiteral_2490/*"AssetBundle file check sum error"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 128), v46, v44, v45);
  if ( *(_DWORD *)(v9 + 24) <= 0xDu )
    goto LABEL_47;
  v49 = StringLiteral_12214/*"SSL CA certificate error"*/;
  *(_QWORD *)(v9 + 136) = StringLiteral_12214/*"SSL CA certificate error"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 136), v49, v47, v48);
  if ( *(_DWORD *)(v9 + 24) <= 0xEu )
    goto LABEL_47;
  v52 = StringLiteral_7167/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v9 + 144) = StringLiteral_7167/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 144), v52, v50, v51);
  if ( *(_DWORD *)(v9 + 24) <= 0xFu )
    goto LABEL_47;
  v55 = StringLiteral_7168/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v9 + 152) = StringLiteral_7168/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 152), v55, v53, v54);
  if ( *(_DWORD *)(v9 + 24) <= 0x10u )
    goto LABEL_47;
  v58 = StringLiteral_5290/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v9 + 160) = StringLiteral_5290/*"Destination host has an erroneous SSL certificate"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 160), v58, v56, v57);
  if ( *(_DWORD *)(v9 + 24) <= 0x11u )
    goto LABEL_47;
  v61 = StringLiteral_14524/*"Too many redirects"*/;
  *(_QWORD *)(v9 + 168) = StringLiteral_14524/*"Too many redirects"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 168), v61, v59, v60);
  if ( *(_DWORD *)(v9 + 24) <= 0x12u )
    goto LABEL_47;
  v64 = StringLiteral_20909/*"java.io.EOFException"*/;
  *(_QWORD *)(v9 + 176) = StringLiteral_20909/*"java.io.EOFException"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 176), v64, v62, v63);
  if ( *(_DWORD *)(v9 + 24) <= 0x13u )
    goto LABEL_47;
  v67 = StringLiteral_20926/*"java.net.SocketException"*/;
  *(_QWORD *)(v9 + 184) = StringLiteral_20926/*"java.net.SocketException"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 184), v67, v65, v66);
  if ( *(_DWORD *)(v9 + 24) <= 0x14u )
    goto LABEL_47;
  v70 = StringLiteral_20927/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v9 + 192) = StringLiteral_20927/*"java.net.SocketTimeoutException"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 192), v70, v68, v69);
  if ( *(_DWORD *)(v9 + 24) <= 0x15u )
    goto LABEL_47;
  v73 = StringLiteral_20924/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v9 + 200) = StringLiteral_20924/*"java.net.NoRouteToHostException"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 200), v73, v71, v72);
  if ( *(_DWORD *)(v9 + 24) <= 0x16u )
    goto LABEL_47;
  v76 = StringLiteral_20910/*"java.io.IOException"*/;
  *(_QWORD *)(v9 + 208) = StringLiteral_20910/*"java.io.IOException"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 208), v76, v74, v75);
  if ( *(_DWORD *)(v9 + 24) <= 0x17u )
    goto LABEL_47;
  v79 = StringLiteral_20923/*"java.net.ConnectException"*/;
  *(_QWORD *)(v9 + 216) = StringLiteral_20923/*"java.net.ConnectException"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 216), v79, v77, v78);
  if ( *(_DWORD *)(v9 + 24) <= 0x18u )
    goto LABEL_47;
  v82 = StringLiteral_18206/*"connect failed"*/;
  *(_QWORD *)(v9 + 224) = StringLiteral_18206/*"connect failed"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 224), v82, v80, v81);
  if ( *(_DWORD *)(v9 + 24) <= 0x19u )
    goto LABEL_47;
  v85 = StringLiteral_20925/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v9 + 232) = StringLiteral_20925/*"java.net.ProtocolException"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 232), v85, v83, v84);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Au )
    goto LABEL_47;
  v88 = StringLiteral_20928/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v9 + 240) = StringLiteral_20928/*"java.net.UnknownHostException"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 240), v88, v86, v87);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Bu )
    goto LABEL_47;
  v91 = StringLiteral_1497/*"400: Bad Request"*/;
  *(_QWORD *)(v9 + 248) = StringLiteral_1497/*"400: Bad Request"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 248), v91, v89, v90);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Cu )
    goto LABEL_47;
  v94 = StringLiteral_1499/*"401: Authorization Required"*/;
  *(_QWORD *)(v9 + 256) = StringLiteral_1499/*"401: Authorization Required"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 256), v94, v92, v93);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Du )
    goto LABEL_47;
  v97 = StringLiteral_1500/*"403: Forbidden"*/;
  *(_QWORD *)(v9 + 264) = StringLiteral_1500/*"403: Forbidden"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 264), v97, v95, v96);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Eu )
    goto LABEL_47;
  v100 = StringLiteral_1502/*"404: Not Found"*/;
  *(_QWORD *)(v9 + 272) = StringLiteral_1502/*"404: Not Found"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 272), v100, v98, v99);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Fu )
    goto LABEL_47;
  v103 = StringLiteral_1503/*"408: Request Time-out"*/;
  *(_QWORD *)(v9 + 280) = StringLiteral_1503/*"408: Request Time-out"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 280), v103, v101, v102);
  if ( *(_DWORD *)(v9 + 24) <= 0x20u )
    goto LABEL_47;
  v106 = StringLiteral_1510/*"500: Internal Server Error"*/;
  *(_QWORD *)(v9 + 288) = StringLiteral_1510/*"500: Internal Server Error"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 288), v106, v104, v105);
  if ( *(_DWORD *)(v9 + 24) <= 0x21u )
    goto LABEL_47;
  v109 = StringLiteral_1512/*"502:"*/;
  *(_QWORD *)(v9 + 296) = StringLiteral_1512/*"502:"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 296), v109, v107, v108);
  if ( *(_DWORD *)(v9 + 24) <= 0x22u
    || (v112 = StringLiteral_1514/*"503 Auto retry count"*/,
        *(_QWORD *)(v9 + 304) = StringLiteral_1514/*"503 Auto retry count"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 304), v112, v110, v111),
        *(_DWORD *)(v9 + 24) <= 0x23u)
    || (v115 = StringLiteral_1524/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v9 + 312) = StringLiteral_1524/*"504: Gateway Timeout"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 312), v115, v113, v114),
        *(_DWORD *)(v9 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1B88814(Instance, v6);
  }
  v118 = StringLiteral_14913/*"Unable to read data"*/;
  *(_QWORD *)(v9 + 320) = StringLiteral_14913/*"Unable to read data"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 320), v118, v116, v117);
  if ( (int)*(_QWORD *)(v9 + 24) < 1 )
  {
LABEL_48:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_57;
  }
  v119 = 0LL;
  v120 = (unsigned int)*(_QWORD *)(v9 + 24) - 1LL;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_58;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v9 + 32 + 8 * v119), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( v120 == v119 )
      goto LABEL_48;
    if ( ++v119 >= (unsigned __int64)*(unsigned int *)(v9 + 24) )
      goto LABEL_47;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v121 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, v6), !v121) )
  {
LABEL_58:
    sub_1B8880C(Instance, v6);
  }
  CrashReporter__AddCustomKey(v121, (System_String_o *)StringLiteral_5053/*"DLErrorAsset"*/, (System_String_o *)Instance, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v119 >= *(_DWORD *)(v9 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5054/*"DLErrorType"*/,
    *(System_String_o **)(v9 + 32 + 8 * v119),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  errorCode = (System_String_o *)StringLiteral_2494/*"AssetLoadError"*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0LL);
}


void __fastcall AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_4A5A1FD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A1FD = 1;
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
  UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)this, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
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
    sub_1B8880C(0LL, name);
  return System_String__Equals_61715348(v4, name, 0LL);
}


bool __fastcall AssetLoader__IsSame_37771844(
        AssetLoader_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_37764288(data, type, name, method);
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

  if ( (byte_4A5A1FC & 1) == 0 )
  {
    sub_1B885B0(&AssetLoader__LoadDataCR_d__29_TypeInfo);
    byte_4A5A1FC = 1;
  }
  v5 = sub_1B887FC(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)resourceNames, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  System_Byte_array *readData; // x20
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5A1FE & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    byte_4A5A1FE = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v4 = CatAndMouseGame__MouseGame4(readData, 0LL);
  this->fields._decData = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._decData, (int32_t)v4, v5, v6);
}


void __fastcall AssetLoader__Reboot(AssetLoader_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  ManagementManager_c *v8; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4A5A1FF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&ManagementManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4A5A1FF = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
    this->fields.loader = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loader, 0, v6, v7);
  }
  this->fields.readData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.readData, 0, v2, v3);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4A5A27F )
  {
    sub_1B885B0(&ManagementManager_TypeInfo);
    byte_4A5A27F = 1;
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
    UnityEngine_Application__Quit_69253336(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v10);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endCallback,
    (int32_t)callbackFunc,
    (int32_t)resourceNames,
    (int32_t)method);
  v10 = (__int64)*(p_endCallback - 1);
  if ( !v10 )
    sub_1B8880C(v7, v8);
  v11 = *(_DWORD *)(v10 + 40) != *(_DWORD *)(v10 + 44);
  this->fields.isDownload = v11;
  this->fields.isRequestDownload = v11;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, DataCR, 0LL);
}


void __fastcall AssetLoader__abort_thread(AssetLoader_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_Threading_Thread_o *threadDecrypt; // x0
  System_Threading_Thread_o **p_threadDecrypt; // x19
  __int64 v6; // x1

  p_threadDecrypt = &this->fields.threadDecrypt;
  threadDecrypt = this->fields.threadDecrypt;
  if ( threadDecrypt && !System_Threading_Thread__get_ThreadState(threadDecrypt, 0LL) )
  {
    if ( !*p_threadDecrypt )
      sub_1B8880C(0LL, v6);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0LL);
  }
  *p_threadDecrypt = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_threadDecrypt, 0, v2, v3);
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

  if ( (byte_4A5A1F8 & 1) == 0 )
  {
    sub_1B885B0(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4A5A1F8 = 1;
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
    v9 = sub_1BC3AA0(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A5A1FA & 1) == 0 )
  {
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4A5A1FA = 1;
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
    v9 = sub_1BC3AA0(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
  return data->fields.name;
}


int32_t __fastcall AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(this, method);
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

  if ( (byte_4A5A1F9 & 1) == 0 )
  {
    sub_1B885B0(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4A5A1F9 = 1;
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
    v9 = sub_1BC3AA0(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A5A1FB & 1) == 0 )
  {
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4A5A1FB = 1;
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
    v9 = sub_1BC3AA0(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19CE1A4;
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
        v11 = sub_1B88668(v6);
        v12 = sub_1B88B24(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19CE2A0;
          else
            v9 = (Il2CppObject *)sub_19CE264;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19CE1E0;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19CE1B4;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19CE184;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CE13C;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19CDFB4;
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
        v11 = sub_1B88668(v6);
        v12 = sub_1B88B24(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19CE0B0;
          else
            v9 = (Il2CppObject *)sub_19CE074;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19CDFF0;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19CDFC4;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19CDF94;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CDF4C;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  struct AssetLoader_o *_4__this; // x20
  bool v6; // w8
  const MethodInfo *v7; // x1
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x21
  System_String_o *error; // x0
  char v10; // w22
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Networking_DownloadHandler_o *v13; // x8
  AssetData_o *v14; // x20
  const MethodInfo *v15; // x3
  System_Collections_IEnumerator_o *v16; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  int v20; // w8
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct AssetData_o *data; // x8
  System_Byte_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Byte_array *readData; // x22
  struct AssetData_o *v32; // x8
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  float unscaledTime; // s0
  ManagerConfig_c *v40; // x0
  float v41; // s8
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v43; // x23
  int32_t v44; // w2
  int32_t v45; // w3
  const MethodInfo *v46; // x0
  System_String_o *Path; // x23
  int64_t FreeSize; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  int64_t v51; // x23
  ManagerConfig_c *v52; // x0
  int32_t v53; // w1
  int32_t v54; // w2
  int32_t v55; // w3
  ServantStatusBattleListViewItem_o *p_errorLocalizeCode_5__7; // x0
  int32_t v57; // w1
  System_String_o *Url; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *url_5__11; // x21
  struct AssetData_o *v62; // x8
  AssetLoader__LoadDataCR_d__29_o *v63; // x22
  bool v64; // w23
  System_String_o *Key; // x0
  UnityEngine_Networking_UnityWebRequest_o *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  AssetLoader__LoadDataCR_d__29_o **p_asyncOperater_5__12; // x21
  float progress; // s0
  float loadProgress_5__9; // s9
  float v75; // s8
  int32_t v76; // w2
  int32_t v77; // w3
  float v78; // s0
  bool v79; // zf
  float v80; // s8
  UnityEngine_Networking_DownloadHandler_o *v81; // x0
  __int64 v82; // x10
  UnityEngine_Networking_DownloadHandler_o *v83; // x22
  System_String_o *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  int klass; // w8
  System_String_o *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  UnityEngine_Networking_DownloadHandler_c *v91; // x0
  __int64 (**image)(void); // x8
  __int64 v93; // x10
  UnityEngine_Networking_DownloadHandler_c *v94; // x8
  AssetLoader__LoadDataCR_d__29_o *v95; // x22
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  int32_t v100; // w1
  ServantStatusBattleListViewItem_o *p_errorCode_5__6; // x0
  System_String_o *v102; // x22
  System_String_o *v103; // x0
  System_String_o *v104; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v108; // x23
  Il2CppObject *v109; // x23
  AssetLoader__LoadDataCR_d__29_o *v110; // x23
  System_String_o *v111; // x24
  int v112; // w8
  System_String_o *v113; // x0
  System_String_o *v114; // x0
  struct AssetData_o *v115; // x9
  int32_t v116; // w2
  int32_t v117; // w3
  AssetLoader__LoadDataCR_d__29_o *v118; // x22
  int32_t v119; // w1
  int32_t v120; // w2
  int32_t v121; // w3
  struct System_String_o *v122; // x1
  int32_t v123; // w2
  int32_t v124; // w3
  int32_t v125; // w1
  struct AssetData_o *v126; // x8
  int32_t v127; // w2
  int32_t v128; // w3
  int32_t v129; // w2
  int32_t v130; // w3
  int32_t v131; // w1
  int32_t v132; // w2
  int32_t v133; // w3
  int32_t v134; // w2
  int32_t v135; // w3
  int32_t v136; // w1
  System_String_o *v137; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  ManagerConfig_c *v140; // x0
  struct AssetData_o *v141; // x8
  CommonUI_o *v142; // x21
  System_String_o *v143; // x22
  ErrorDialog_ClickDelegate_o *v144; // x23
  ManagementManager_c *v145; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v149; // x22
  System_String_o *v150; // x21
  System_String_o *v151; // x23
  System_String_o *v152; // x23
  ErrorDialog_ClickDelegate_o *v153; // x24
  System_String_o *v154; // x23
  System_String_o *v155; // x23
  ErrorDialog_ClickDelegate_o *v156; // x24
  UnityEngine_Networking_UnityWebRequest_o *v157; // x0
  int32_t v158; // w2
  int32_t v159; // w3
  int32_t v160; // w2
  int32_t v161; // w3
  AssetManager_c *v162; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v164; // w2
  int32_t v165; // w3
  System_String_o *v166; // x21
  System_String_o *UrlString; // x0
  int32_t v168; // w2
  int32_t v169; // w3
  AssetLoader__LoadDataCR_d__29_o **v170; // x21
  float v171; // s0
  ManagerConfig_c *v172; // x0
  float v173; // s8
  float v174; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v175; // x0
  int32_t v176; // w2
  int32_t v177; // w3
  int32_t v178; // w2
  int32_t v179; // w3
  float v180; // s0
  float v181; // s9
  float v182; // s8
  float v183; // s0
  float v184; // s8
  System_String_o **v185; // x21
  UnityEngine_Networking_UnityWebRequest_o **v186; // x22
  System_String_o *v187; // x0
  System_String_o *text; // x23
  System_String_o *v189; // x23
  int32_t v190; // w2
  int32_t v191; // w3
  AssetLoader__LoadDataCR_d__29_o *v192; // x23
  int _2__current; // w8
  int32_t v194; // w0
  int32_t v195; // w25
  System_String_o *v196; // x24
  System_String_o *v197; // x23
  System_Byte_array *v198; // x25
  uint32_t v199; // w25
  int v200; // w8
  Il2CppObject *v201; // x8
  AssetLoader__LoadDataCR_d__29_o *v202; // x21
  int v203; // w25
  int v204; // w27
  System_String_o *v205; // x22
  Il2CppObject *v206; // x8
  AssetLoader__LoadDataCR_d__29_o *v207; // x22
  char v208; // w8
  const MethodInfo *v209; // x2
  System_String_o *v210; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v212; // x22
  System_String_o *v213; // x0
  const MethodInfo *v214; // x2
  int v215; // w23
  struct AssetData_o *v216; // x8
  ManagementManager_c *v217; // x0
  _BOOL4 v218; // w22
  Il2CppObject *v219; // x21
  System_String_o *v220; // x22
  ErrorDialog_ClickDelegate_o *v221; // x23
  ManagementManager_c *v222; // x0
  _BOOL4 v223; // w21
  Il2CppObject *v224; // x19
  __int64 *v225; // x8
  System_String_o *v226; // x21
  ErrorDialog_ClickDelegate_o *v227; // x22
  bool result; // w0
  __int64 *v229; // x8
  System_String_o *v230; // x22
  ErrorDialog_ClickDelegate_o *v231; // x23
  int32_t v232; // w2
  int32_t v233; // w3
  int32_t v234; // w2
  int32_t v235; // w3
  System_String_o *name; // x21
  AssetData_o *v237; // x22
  AssetLoader__LoadDataCR_d__29_o **v238; // x21
  __int64 v239; // x10
  __int64 v240; // x10
  System_Byte_array *v241; // x0
  UnityEngine_AssetBundleCreateRequest_o *v242; // x0
  int32_t v243; // w2
  int32_t v244; // w3
  int32_t v245; // w2
  int32_t v246; // w3
  Il2CppObject *req_5__13; // x1
  int32_t v248; // w2
  int32_t v249; // w3
  UnityEngine_Networking_UnityWebRequest_o *LoadRequest; // x0
  ServantStatusBattleListViewItem_o *v251; // x20
  int32_t v252; // w2
  int32_t v253; // w3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v254; // x0
  int32_t v255; // w2
  int32_t v256; // w3
  ManagerConfig_c *v257; // x0
  int autoRetryCount_5__3; // w21
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v260; // x20
  int32_t v261; // w2
  int32_t v262; // w3
  Il2CppObject *v263; // x1
  Il2CppObject *v264; // x1
  int32_t v265; // w2
  int32_t v266; // w3
  int32_t v267; // w2
  int32_t v268; // w3
  Il2CppObject *v269; // x1
  System_String_o *v270; // x1
  int32_t v271; // w2
  int32_t v272; // w3
  ManagerConfig_c *v273; // x0
  struct AssetData_o *v274; // x8
  CommonUI_o *v275; // x22
  System_String_o *v276; // x21
  ErrorDialog_ClickDelegate_o *v277; // x23
  Il2CppObject *v278; // x1
  ManagementManager_c *v279; // x0
  _BOOL4 v280; // w22
  Il2CppObject *v281; // x21
  System_String_o *v282; // x22
  ErrorDialog_ClickDelegate_o *v283; // x23
  System_String_o *v284; // x22
  ErrorDialog_ClickDelegate_o *v285; // x23
  Il2CppObject *v286; // x1
  UnityEngine_WaitForSeconds_o *v287; // x20
  int32_t v288; // w2
  int32_t v289; // w3
  AssetLoader___c_c *v290; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v292; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int32_t v294; // w2
  int32_t v295; // w3
  UnityEngine_WaitUntil_o *v296; // x21
  int32_t v297; // w2
  int32_t v298; // w3
  UnityEngine_Networking_DownloadHandler_o *v299; // x0
  const MethodInfo *v300; // x2
  ManagerConfig_c *v301; // x0
  struct ManagerConfig_StaticFields *v302; // x8
  Il2CppObject *wait_5__10; // x1
  ServantStatusBattleListViewItem_o *v304; // x19
  ManagerConfig_c *v305; // x0
  struct ManagerConfig_StaticFields *v306; // x8
  Il2CppObject *v307; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-A0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-A0h]
  __int64 v310; // [xsp+18h] [xbp-88h]
  __int64 v311; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-78h] BYREF

  v4 = this;
  if ( (byte_4A5A203 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetLoader_EndRebootDialog__);
    sub_1B885B0(&Method_AssetLoader_EndRetryDialog__);
    sub_1B885B0(&Method_AssetLoader_EndWarningDialog__);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&char___TypeInfo);
    sub_1B885B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&CommonServicePluginScript_TypeInfo);
    sub_1B885B0(&Crc32_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1B885B0(&DownloadHandlerDecryptFileWithCrc_TypeInfo);
    sub_1B885B0(&DownloadHandlerFileWithCrcCheck_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&System_IO_IOException_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&ManagementManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&Method_AssetLoader___c__LoadDataCR_b__29_0__);
    sub_1B885B0(&AssetLoader___c_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_9217/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/);
    sub_1B885B0(&StringLiteral_7162/*"HTTP"*/);
    sub_1B885B0(&StringLiteral_5327/*"Disk full"*/);
    sub_1B885B0(&StringLiteral_2508/*"AssetStorageList download time over"*/);
    sub_1B885B0(&StringLiteral_9226/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_2495/*"AssetName : "*/);
    sub_1B885B0(&StringLiteral_817/*")\n\n503 Auto retry count "*/);
    sub_1B885B0(&StringLiteral_820/*")\nfile crc ("*/);
    sub_1B885B0(&StringLiteral_1513/*"503"*/);
    sub_1B885B0(&StringLiteral_2137/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_15938/*"[FFFF80]Download error for debug"*/);
    sub_1B885B0(&StringLiteral_2505/*"AssetStorageList download data error"*/);
    sub_1B885B0(&StringLiteral_25156/*"~"*/);
    sub_1B885B0(&StringLiteral_12260/*"STATUS"*/);
    sub_1B885B0(&StringLiteral_816/*")\n\n"*/);
    sub_1B885B0(&StringLiteral_9216/*"NETWORK_ERROR_ASSET_UPDATE"*/);
    sub_1B885B0(&StringLiteral_696/*"("*/);
    sub_1B885B0(&StringLiteral_818/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    sub_1B885B0(&StringLiteral_19053/*"error "*/);
    sub_1B885B0(&StringLiteral_1886/*"@"*/);
    sub_1B885B0(&StringLiteral_2138/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_2506/*"AssetStorageList download error"*/);
    sub_1B885B0(&StringLiteral_819/*")\n\nAssetBundle file download time over"*/);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A203 = 1;
  }
  v311 = 0LL;
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
        v6 = 0;
      else
        v6 = AssetData__GetExt((AssetData_o *)this, method) == 0LL;
      v4->fields._isEncrypted_5__2 = v6;
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._asyncOperater_5__12, 0, (int32_t)v2, v3);
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
      v10 = (char)this;
      downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
      if ( downloadHandler )
      {
        methodPtr_low = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(downloadHandler->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (DownloadHandlerDecryptFileWithCrc_c *)downloadHandler->klass->_2.typeHierarchy[methodPtr_low - 1] == DownloadHandlerDecryptFileWithCrc_TypeInfo )
            v13 = downloadHandler;
          else
            v13 = 0LL;
          if ( (v10 & 1) != 0 )
            goto LABEL_30;
LABEL_47:
          this = (AssetLoader__LoadDataCR_d__29_o *)*p_loader;
          if ( !*p_loader )
            goto LABEL_375;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v25, v26);
          data = _4__this->fields.data;
          *(_WORD *)&_4__this->fields.isRequestDownload = 257;
          if ( !data )
            goto LABEL_375;
          data->fields.nowVersion = 0;
          goto LABEL_59;
        }
      }
      v13 = 0LL;
      if ( (v10 & 1) == 0 )
        goto LABEL_47;
LABEL_30:
      if ( v13 )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)LODWORD(v13[1].klass);
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
        v28 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        _4__this->fields.readData = v28;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, (int32_t)v28, v29, v30);
        readData = _4__this->fields.readData;
        if ( !Crc32_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
        this = (AssetLoader__LoadDataCR_d__29_o *)Crc32__Compute(readData, 0LL);
      }
      v32 = _4__this->fields.data;
      if ( !v32 )
        goto LABEL_375;
      if ( (_DWORD)this == v32->fields.crc )
        goto LABEL_294;
      *(_WORD *)&_4__this->fields.isRequestDownload = 257;
      v32->fields.nowVersion = 0;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      _4__this->fields.loader = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v33, v34);
      _4__this->fields.readData = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, 0, v35, v36);
LABEL_59:
      while ( 1 )
      {
        _4__this->fields.readData = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        if ( _4__this->fields.isDownload )
          break;
LABEL_292:
        v32 = _4__this->fields.data;
        if ( !v32 )
          goto LABEL_375;
        if ( v32->fields.entryCount >= 1 )
        {
          if ( v4->fields._isEncrypted_5__2 )
          {
LABEL_312:
            this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
            if ( !this )
              goto LABEL_375;
            LoadRequest = AssetData__GetLoadRequest((AssetData_o *)this, method);
            _4__this->fields.loader = LoadRequest;
            v251 = (ServantStatusBattleListViewItem_o *)&_4__this->fields.loader;
            sub_1B88554(v251, (int32_t)LoadRequest, v252, v253);
            this = (AssetLoader__LoadDataCR_d__29_o *)v251->klass;
            if ( !v251->klass )
              goto LABEL_375;
            v254 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                     0LL);
            v4->fields.__2__current = (Il2CppObject *)v254;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(p__2__current, (int32_t)v254, v255, v256);
            v20 = 11;
          }
          else
          {
            v290 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v290 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v290->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v290->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v290);
                v290 = AssetLoader___c_TypeInfo;
              }
              v292 = (Il2CppObject *)v290->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(_9__29_0, v292, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0LL);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v294, v295);
            }
            v296 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v296, _9__29_0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v296;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(p__2__current, (int32_t)v296, v297, v298);
            v20 = 10;
          }
          goto LABEL_355;
        }
LABEL_294:
        if ( _4__this->fields.isDownload )
        {
          name = v32->fields.name;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__isExistAssetStorage(name, method);
          if ( ((unsigned __int8)this & 1) != 0 )
            continue;
        }
LABEL_298:
        v237 = _4__this->fields.data;
        if ( !v237 )
          goto LABEL_375;
        if ( v237->fields.entryCount >= 1 )
        {
          v238 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v4->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0LL);
            if ( !this
              || (v239 = LOBYTE(DownloadHandlerDecryptFileWithCrc_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v239)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v239 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v238;
              if ( !*v238 )
                goto LABEL_375;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              if ( !this )
                goto LABEL_375;
              v240 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v240
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v240 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_375;
              }
            }
            v241 = UnityEngine_Networking_DownloadHandler__get_data(
                     (UnityEngine_Networking_DownloadHandler_o *)this,
                     0LL);
            v242 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v241, 0LL);
            v4->fields._req_5__13 = v242;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._req_5__13, (int32_t)v242, v243, v244);
            this = *v238;
            if ( !*v238 )
              goto LABEL_375;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
            *v238 = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v245, v246);
            req_5__13 = (Il2CppObject *)v4->fields._req_5__13;
            v4->fields.__2__current = req_5__13;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(p__2__current, (int32_t)req_5__13, v248, v249);
            v20 = 12;
            goto LABEL_355;
          }
          if ( !this )
            goto LABEL_375;
          v299 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0LL);
          AssetData__SetData(v237, v299, v300);
        }
LABEL_38:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0LL);
          _4__this->fields.loader = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v22, v23);
        }
        _4__this->fields.readData = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        AssetLoader__EndLoad(_4__this, v24);
        return 0;
      }
      *(_WORD *)&v4->fields._isAutoRetry_5__4 = 0;
      v4->fields._errorCode_5__6 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, 0, (int32_t)v2, v3);
      v4->fields._errorLocalizeCode_5__7 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._errorLocalizeCode_5__7, 0, v37, v38);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v40 = ManagerConfig_TypeInfo;
      v41 = unscaledTime;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v40 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v40->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__9 = 0.0;
      v4->fields._requestTime_5__8 = v41 + TIMEOUT;
      v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v43, 0LL);
      v4->fields._wait_5__10 = v43;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__10, (int32_t)v43, v44, v45);
      Path = AssetStorageCache__GetPath(v46);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v51 = FreeSize;
        v52 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v52 = ManagerConfig_TypeInfo;
        }
        if ( v51 < v52->static_fields->LIMIT_FREE_SIZE )
        {
          _4__this->fields.isErrorDialog = 1;
          v53 = StringLiteral_5327/*"Disk full"*/;
          v4->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5327/*"Disk full"*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, v53, v49, v50);
          p_errorLocalizeCode_5__7 = (ServantStatusBattleListViewItem_o *)&v4->fields._errorLocalizeCode_5__7;
          v57 = StringLiteral_9226/*"NETWORK_ERROR_DISK_FULL"*/;
          v4->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9226/*"NETWORK_ERROR_DISK_FULL"*/;
          goto LABEL_141;
        }
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      Url = AssetData__get_Url((AssetData_o *)this, method);
      v4->fields._url_5__11 = Url;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._url_5__11, (int32_t)Url, v59, v60);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_375;
      url_5__11 = v4->fields._url_5__11;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__get_Path((AssetData_o *)this, method);
      v62 = _4__this->fields.data;
      v63 = this;
      if ( v4->fields._isEncrypted_5__2 )
      {
        if ( !v62 )
          goto LABEL_375;
        v64 = v62->fields.entryCount > 0;
      }
      else
      {
        if ( !v62 )
          goto LABEL_375;
        v64 = 0;
      }
      Key = AssetData__get_Key(_4__this->fields.data, method);
      v66 = UnityWebRequestFileWithCrcCheck__CreateRequest(url_5__11, (System_String_o *)v63, v64, Key, 0LL);
      _4__this->fields.loader = v66;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, (int32_t)v66, v67, v68);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v69 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
              (UnityEngine_Networking_UnityWebRequest_o *)this,
              0LL);
      v4->fields._asyncOperater_5__12 = v69;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._asyncOperater_5__12, (int32_t)v69, v70, v71);
LABEL_78:
      p_asyncOperater_5__12 = (AssetLoader__LoadDataCR_d__29_o **)&v4->fields._asyncOperater_5__12;
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
      if ( !this )
LABEL_375:
        sub_1B8880C(this, method);
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
        v75 = progress;
        v78 = UnityEngine_Time__get_unscaledTime(0LL);
        v79 = v75 == loadProgress_5__9;
        v80 = v78;
        if ( !v79 )
        {
          v301 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v301 = ManagerConfig_TypeInfo;
          }
          v302 = v301->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
          v4->fields._requestTime_5__8 = v80 + v302->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v4->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
LABEL_369:
          wait_5__10 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = wait_5__10;
          v304 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(v304, (int32_t)wait_5__10, v76, v77);
          result = 1;
          *(_DWORD *)&v304[-1].fields.isMine = 1;
          return result;
        }
        if ( v78 < v4->fields._requestTime_5__8 )
          goto LABEL_369;
      }
      if ( !_4__this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v81 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
              (UnityEngine_Networking_UnityWebRequest_o *)this,
              0LL);
      if ( v81
        && (v82 = LOBYTE(DownloadHandlerFileWithCrcCheck_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v81->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v82) )
      {
        v83 = (DownloadHandlerFileWithCrcCheck_c *)v81->klass->_2.typeHierarchy[v82 - 1] == DownloadHandlerFileWithCrcCheck_TypeInfo
            ? v81
            : 0LL;
      }
      else
      {
        v83 = 0LL;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v88 = System_String__Concat_61718292(
                (System_String_o *)StringLiteral_696/*"("*/,
                v4->fields._url_5__11,
                (System_String_o *)StringLiteral_819/*")\n\nAssetBundle file download time over"*/,
                0LL);
        v4->fields._errorCode_5__6 = v88;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, (int32_t)v88, v89, v90);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        UnityEngine_Networking_UnityWebRequest__Abort((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        if ( v83 )
          DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v83, 0LL);
        goto LABEL_140;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      v84 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v84, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v83 )
        {
          klass = 0;
LABEL_127:
          HIDWORD(v311) = klass;
          v115 = _4__this->fields.data;
          if ( !v115 )
            goto LABEL_375;
          if ( klass == v115->fields.crc )
          {
            v115->fields.nowVersion = v115->fields.newVersion;
            _4__this->fields.isDownload = 0;
          }
          else
          {
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B88658(string___TypeInfo, 7LL);
            if ( !this )
              goto LABEL_375;
            v118 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_258;
            v119 = StringLiteral_696/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_696/*"("*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__4__this, v119, v116, v117);
            if ( LODWORD(v118->fields.__2__current) <= 1 )
              goto LABEL_258;
            v122 = v4->fields._url_5__11;
            v118->fields.resourceNames = (struct System_String_array *)v122;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v118->fields.resourceNames, (int32_t)v122, v120, v121);
            if ( LODWORD(v118->fields.__2__current) <= 2 )
              goto LABEL_258;
            v125 = StringLiteral_818/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v118->fields._isEncrypted_5__2 = StringLiteral_818/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v118->fields._isEncrypted_5__2, v125, v123, v124);
            v126 = _4__this->fields.data;
            if ( !v126 )
              goto LABEL_375;
            LODWORD(v311) = v126->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v311, 0LL);
            if ( LODWORD(v118->fields.__2__current) <= 3 )
              goto LABEL_258;
            *(_QWORD *)&v118->fields._isAutoRetry_5__4 = this;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v118->fields._isAutoRetry_5__4, (int32_t)this, v127, v128);
            if ( LODWORD(v118->fields.__2__current) <= 4 )
              goto LABEL_258;
            v131 = StringLiteral_820/*")\nfile crc ("*/;
            v118->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_820/*")\nfile crc ("*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v118->fields._errorCode_5__6, v131, v129, v130);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v311 + 4, 0LL);
            if ( LODWORD(v118->fields.__2__current) <= 5 )
              goto LABEL_258;
            v118->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v118->fields._errorLocalizeCode_5__7,
              (int32_t)this,
              v132,
              v133);
            if ( LODWORD(v118->fields.__2__current) <= 6 )
              goto LABEL_258;
            v136 = StringLiteral_814/*")"*/;
            *(_QWORD *)&v118->fields._requestTime_5__8 = StringLiteral_814/*")"*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v118->fields._requestTime_5__8, v136, v134, v135);
            v137 = System_String__Concat_61720560((System_String_array *)v118, 0LL);
            v4->fields._errorCode_5__6 = v137;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, (int32_t)v137, v138, v139);
            v4->fields._isCrcError_5__5 = 1;
          }
          goto LABEL_140;
        }
        if ( !v83[4].klass )
        {
          klass = (int)v83[1].klass;
          goto LABEL_127;
        }
      }
      else if ( !v83 )
      {
LABEL_110:
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        v102 = v4->fields._url_5__11;
        v103 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v104 = System_String__Concat_61720296(
                 (System_String_o *)StringLiteral_696/*"("*/,
                 v102,
                 (System_String_o *)StringLiteral_816/*")\n\n"*/,
                 v103,
                 0LL);
        v4->fields._errorCode_5__6 = v104;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, (int32_t)v104, v105, v106);
        this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
        if ( !this )
          goto LABEL_375;
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                            0LL);
        if ( !ResponseHeaders )
          goto LABEL_140;
        v108 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
        if ( System_Collections_Generic_Dictionary_object__object___get_Count(
               (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
               (const MethodInfo_31C6E98 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v108,
                (Il2CppObject *)StringLiteral_12260/*"STATUS"*/,
                &value,
                (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_140;
        }
        v109 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B88658(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v109 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_61729424(
                                                    (System_String_o *)v109,
                                                    (System_Char_array *)this,
                                                    1,
                                                    0LL);
        if ( !this )
          goto LABEL_375;
        v110 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_140;
        this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
        if ( !this )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_7162/*"HTTP"*/,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_140;
        if ( LODWORD(v110->fields.__2__current) <= 1 )
          goto LABEL_258;
        this = (AssetLoader__LoadDataCR_d__29_o *)v110->fields.resourceNames;
        if ( !this )
          goto LABEL_375;
        if ( !System_String__Equals_61715348((System_String_o *)this, (System_String_o *)StringLiteral_1513/*"503"*/, 0LL) )
          goto LABEL_140;
        v111 = v4->fields._url_5__11;
        v112 = v4->fields._autoRetryCount_5__3 + 1;
        v4->fields._isAutoRetry_5__4 = 1;
        v4->fields._autoRetryCount_5__3 = v112;
        v113 = System_Int32__ToString((int)v4 + 52, 0LL);
        v114 = System_String__Concat_61720296(
                 (System_String_o *)StringLiteral_696/*"("*/,
                 v111,
                 (System_String_o *)StringLiteral_817/*")\n\n503 Auto retry count "*/,
                 v113,
                 0LL);
        v100 = (int)v114;
        v4->fields._errorCode_5__6 = v114;
        p_errorCode_5__6 = (ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6;
        goto LABEL_109;
      }
      DownloadHandlerFileWithCrcCheck__CloseStream((DownloadHandlerFileWithCrcCheck_o *)v83, 0LL);
      v91 = v83[4].klass;
      if ( !v91 )
        goto LABEL_110;
      image = (__int64 (**)(void))v91->_1.image;
      v93 = LOBYTE(System_IO_IOException_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *((unsigned __int8 *)v91->_1.image + 304) >= (unsigned int)v93
        && *((System_IO_IOException_c **)image[25] + v93 - 1) == System_IO_IOException_TypeInfo )
      {
        _4__this->fields.isErrorDialog = 1;
        v97 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v91->_1.image
                                  + 49))(
                                   v91,
                                   *((_QWORD *)v91->_1.image + 50));
      }
      else
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)image[45]();
        v94 = v83[4].klass;
        if ( !v94 )
          goto LABEL_375;
        v95 = this;
        v96 = (System_String_o *)(*((__int64 (__fastcall **)(UnityEngine_Networking_DownloadHandler_c *, _QWORD))v94->_1.image
                                  + 49))(
                                   v94,
                                   *((_QWORD *)v94->_1.image + 50));
        v97 = System_String__Concat_61720296(
                (System_String_o *)StringLiteral_19053/*"error "*/,
                (System_String_o *)v95,
                (System_String_o *)StringLiteral_117/*" "*/,
                v96,
                0LL);
      }
      v100 = (int)v97;
      v4->fields._errorCode_5__6 = v97;
      p_errorCode_5__6 = (ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6;
LABEL_109:
      sub_1B88554(p_errorCode_5__6, v100, v98, v99);
LABEL_140:
      v4->fields._url_5__11 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._url_5__11, 0, v85, v86);
      p_errorLocalizeCode_5__7 = (ServantStatusBattleListViewItem_o *)&v4->fields._asyncOperater_5__12;
      v57 = 0;
      v4->fields._asyncOperater_5__12 = 0LL;
LABEL_141:
      sub_1B88554(p_errorLocalizeCode_5__7, v57, v54, v55);
      method = (const MethodInfo *)v4->fields._errorCode_5__6;
      if ( method )
      {
        AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
        v140 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v140 = ManagerConfig_TypeInfo;
        }
        if ( v140->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v141 = _4__this->fields.data;
          if ( !v141 )
            goto LABEL_375;
          v142 = (CommonUI_o *)this;
          v143 = System_String__Concat_61720296(
                   (System_String_o *)StringLiteral_2495/*"AssetName : "*/,
                   v141->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v4->fields._errorCode_5__6,
                   0LL);
          v144 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v144, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v142 )
            goto LABEL_375;
          v310 &= 0xFFFFFFFF00000000LL;
          *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
          LODWORD(effectDistance.fields.value.fields.y) = v310;
          CommonUI__OpenWarningDialog(
            v142,
            (System_String_o *)StringLiteral_15938/*"[FFFF80]Download error for debug"*/,
            v143,
            v144,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_148:
          if ( _4__this->fields.isErrorDialog )
          {
            v263 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v263;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(p__2__current, (int32_t)v263, (int32_t)v2, v3);
            v20 = 2;
            goto LABEL_355;
          }
        }
        if ( v4->fields._isAutoRetry_5__4 )
        {
          v257 = ManagerConfig_TypeInfo;
          autoRetryCount_5__3 = v4->fields._autoRetryCount_5__3;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v257 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v257->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v260 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v260, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v260;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(p__2__current, (int32_t)v260, v261, v262);
          v20 = 3;
          goto LABEL_355;
        }
        if ( !v4->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          if ( !byte_4A5A27F )
          {
            sub_1B885B0(&ManagementManager_TypeInfo);
            byte_4A5A27F = 1;
          }
          v145 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v145 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v145->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v4->fields._errorLocalizeCode_5__7;
          v149 = (CommonUI_o *)Instance;
          v150 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v151 = v4->fields._errorLocalizeCode_5__7;
            else
              v151 = (System_String_o *)StringLiteral_2137/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v152 = LocalizationManager__Get(v151, 0LL);
            v153 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v153, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v149 )
              goto LABEL_375;
            CommonUI__OpenRetryBootDialog(v149, v150, v152, v153, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v154 = v4->fields._errorLocalizeCode_5__7;
            else
              v154 = (System_String_o *)StringLiteral_2138/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v155 = LocalizationManager__Get(v154, 0LL);
            v156 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v156, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
            if ( !v149 )
              goto LABEL_375;
            CommonUI__OpenRetryDialog(v149, v150, v155, v156, 1, 0LL);
          }
LABEL_172:
          if ( _4__this->fields.isErrorDialog )
          {
            v264 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v264;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(p__2__current, (int32_t)v264, (int32_t)v2, v3);
            v20 = 4;
            goto LABEL_355;
          }
        }
      }
LABEL_173:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A56A2F )
      {
        sub_1B885B0(&NetworkManager_TypeInfo);
        byte_4A56A2F = 1;
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v265, v266);
        _4__this->fields.readData = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, 0, v267, v268);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v4->fields._isEncrypted_5__2 )
        goto LABEL_298;
      v157 = _4__this->fields.loader;
      if ( v157 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v157, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v158, v159);
        _4__this->fields.readData = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.readData, 0, v160, v161);
      }
      if ( !v4->fields._isCrcError_5__5 )
      {
LABEL_291:
        v4->fields._errorCode_5__6 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, 0, (int32_t)v2, v3);
        v4->fields._errorLocalizeCode_5__7 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._errorLocalizeCode_5__7, 0, v232, v233);
        v4->fields._wait_5__10 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__10, 0, v234, v235);
        goto LABEL_292;
      }
      v162 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v162);
      v4->fields._url_5__11 = ConfigFileAddress;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._url_5__11, (int32_t)ConfigFileAddress, v164, v165);
LABEL_189:
      v166 = v4->fields._url_5__11;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v166, v7);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      if ( !_4__this )
        goto LABEL_375;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v170 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, (int32_t)this, v168, v169);
      v171 = UnityEngine_Time__get_unscaledTime(0LL);
      v172 = ManagerConfig_TypeInfo;
      v173 = v171;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v172 = ManagerConfig_TypeInfo;
      }
      v174 = v172->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__9 = 0.0;
      v4->fields._requestTime_5__8 = v173 + v174;
      this = *v170;
      if ( !*v170 )
        goto LABEL_375;
      v175 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
               (UnityEngine_Networking_UnityWebRequest_o *)this,
               0LL);
      v4->fields._asyncOperater_5__12 = v175;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._asyncOperater_5__12, (int32_t)v175, v176, v177);
LABEL_196:
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
      if ( !this )
        goto LABEL_375;
      if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
      {
        this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
        if ( !this )
          goto LABEL_375;
        v180 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0LL);
        v181 = v4->fields._loadProgress_5__9;
        v182 = v180;
        v183 = UnityEngine_Time__get_unscaledTime(0LL);
        v79 = v182 == v181;
        v184 = v183;
        if ( !v79 )
        {
          v305 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v305 = ManagerConfig_TypeInfo;
          }
          v306 = v305->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._asyncOperater_5__12;
          v4->fields._requestTime_5__8 = v184 + v306->TIMEOUT;
          if ( !this )
            goto LABEL_375;
          v4->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0LL);
          goto LABEL_374;
        }
        if ( v183 < v4->fields._requestTime_5__8 )
        {
LABEL_374:
          v307 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = v307;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(p__2__current, (int32_t)v307, v178, v179);
          v20 = 5;
          goto LABEL_355;
        }
      }
      v4->fields._errorCode_5__6 = 0LL;
      v185 = &v4->fields._errorCode_5__6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, 0, v178, v179);
      if ( !_4__this )
        goto LABEL_375;
      v186 = &_4__this->fields.loader;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                  0LL);
      if ( !*v186 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        UnityEngine_Networking_UnityWebRequest__Abort(*v186, 0LL);
        v229 = &StringLiteral_2508/*"AssetStorageList download time over"*/;
        goto LABEL_327;
      }
      v187 = UnityEngine_Networking_UnityWebRequest__get_error(*v186, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v187, 0LL);
      if ( !*v186 )
        goto LABEL_375;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v270 = UnityEngine_Networking_UnityWebRequest__get_error(*v186, 0LL);
        goto LABEL_328;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*v186, 0LL);
      if ( !this )
        goto LABEL_375;
      text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v189 = CatAndMouseGame__MouseGame3(text, 0LL);
      if ( System_String__IsNullOrEmpty(v189, 0LL) )
      {
        v229 = &StringLiteral_2506/*"AssetStorageList download error"*/;
        goto LABEL_327;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B88658(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_375;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_258;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v189 )
        goto LABEL_375;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_61736780(v189, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_375;
      v192 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25156/*"~"*/, 0LL) )
        goto LABEL_286;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B88658(char___TypeInfo, 2LL);
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
      v194 = System_String__IndexOfAny((System_String_o *)v192, (System_Char_array *)this, 0LL);
      if ( v194 < 2 )
        goto LABEL_286;
      v195 = v194;
      v196 = System_String__Substring_61726036((System_String_o *)v192, 1, v194 - 1, 0LL);
      v197 = System_String__Substring((System_String_o *)v192, v195 + 1, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0LL);
      if ( !this )
        goto LABEL_375;
      v198 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                    this,
                                    v197,
                                    this->klass[1]._1.interfaceOffsets);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v199 = Crc32__Compute(v198, 0LL);
      if ( System_UInt32__Parse(v196, 0LL) != v199 )
      {
LABEL_286:
        v229 = &StringLiteral_2505/*"AssetStorageList download data error"*/;
LABEL_327:
        v270 = (System_String_o *)*v229;
LABEL_328:
        *v185 = v270;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__6, (int32_t)v270, v190, v191);
        if ( *v186 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*v186, 0LL);
          *v186 = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v271, v272);
        }
        if ( !*v185 )
          goto LABEL_354;
        v273 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v273 = ManagerConfig_TypeInfo;
        }
        if ( v273->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v274 = _4__this->fields.data;
          if ( !v274 )
            goto LABEL_375;
          v275 = (CommonUI_o *)this;
          v276 = System_String__Concat_61720296(
                   (System_String_o *)StringLiteral_2495/*"AssetName : "*/,
                   v274->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v185,
                   0LL);
          v277 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v277, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0LL);
          if ( !v275 )
            goto LABEL_375;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v275,
            (System_String_o *)StringLiteral_15938/*"[FFFF80]Download error for debug"*/,
            v276,
            v277,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_337:
          if ( _4__this->fields.isErrorDialog )
          {
            v278 = (Il2CppObject *)v4->fields._wait_5__10;
            v4->fields.__2__current = v278;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(p__2__current, (int32_t)v278, (int32_t)v2, v3);
            v20 = 6;
            goto LABEL_355;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4A5A27F )
        {
          sub_1B885B0(&ManagementManager_TypeInfo);
          byte_4A5A27F = 1;
        }
        v279 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v279 = ManagementManager_TypeInfo;
        }
        v280 = v279->static_fields->isDuringStartup;
        v281 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v280 )
        {
          v282 = LocalizationManager__Get((System_String_o *)StringLiteral_2137/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v283 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v283, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v281 )
            goto LABEL_375;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v281, (System_String_o *)StringLiteral_1/*""*/, v282, v283, 0, 0LL);
        }
        else
        {
          v284 = LocalizationManager__Get((System_String_o *)StringLiteral_2138/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
          v285 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v285, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( !v281 )
            goto LABEL_375;
          CommonUI__OpenRetryDialog((CommonUI_o *)v281, (System_String_o *)StringLiteral_1/*""*/, v284, v285, 0, 0LL);
        }
LABEL_352:
        if ( _4__this->fields.isErrorDialog )
        {
          v286 = (Il2CppObject *)v4->fields._wait_5__10;
          v4->fields.__2__current = v286;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(p__2__current, (int32_t)v286, (int32_t)v2, v3);
          v20 = 7;
        }
        else
        {
LABEL_354:
          v287 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v287, 1.0, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v287;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(p__2__current, (int32_t)v287, v288, v289);
          v20 = 8;
        }
LABEL_355:
        *(_DWORD *)&p__2__current[-1].fields.isMine = v20;
        return 1;
      }
      if ( !v197 )
        goto LABEL_272;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B88658(char___TypeInfo, 2LL);
      if ( !this )
        goto LABEL_375;
      v200 = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !v200 || (LOWORD(this->fields.__4__this) = 13, v200 == 1) )
LABEL_258:
        sub_1B88814(this, method);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_61729424(v197, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_375;
      v201 = this->fields.__2__current;
      v202 = this;
      v203 = (_DWORD)v201 - 1;
      if ( (int)v201 < 1 )
        goto LABEL_272;
      v204 = 0;
      while ( 2 )
      {
        v205 = (System_String_o *)*((_QWORD *)&v202->fields.__4__this + v204);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1B88658(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_375;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_258;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v205 )
          goto LABEL_375;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_61729188(v205, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_375;
        v206 = this->fields.__2__current;
        v207 = this;
        if ( (int)v206 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1886/*"@"*/,
                                                      0LL);
          if ( !LODWORD(v207->fields.__2__current) )
            goto LABEL_258;
          v208 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v207->fields.__4__this;
          if ( !this )
            goto LABEL_375;
          if ( (v208 & 1) != 0 )
          {
            v210 = System_String__Substring((System_String_o *)this, 1, 0LL);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v207->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v207->fields.resourceNames;
            v212 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v210, v212, v209);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_272;
            goto LABEL_256;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_25156/*"~"*/,
                                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v207->fields.__2__current) )
              goto LABEL_258;
            this = (AssetLoader__LoadDataCR_d__29_o *)v207->fields.__4__this;
            if ( !this )
              goto LABEL_375;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0LL);
            if ( (_DWORD)this != 1 )
            {
              v206 = v207->fields.__2__current;
              break;
            }
          }
LABEL_256:
          if ( v203 == v204 )
            goto LABEL_272;
          if ( (unsigned int)++v204 >= LODWORD(v202->fields.__2__current) )
            goto LABEL_258;
          continue;
        }
        break;
      }
      if ( (_DWORD)v206 != 5 )
        goto LABEL_272;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v207->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_375;
      v213 = System_String__Trim((System_String_o *)this, 0LL);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v213, 0LL);
      if ( LODWORD(v207->fields.__2__current) <= 4 )
        goto LABEL_258;
      v215 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetLoader__IsSame(_4__this, v207->fields._errorCode_5__6, v214);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_256;
      v216 = _4__this->fields.data;
      if ( !v216 )
        goto LABEL_375;
      if ( v215 == v216->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4A5A27F )
        {
          sub_1B885B0(&ManagementManager_TypeInfo);
          byte_4A5A27F = 1;
        }
        v217 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v217 = ManagementManager_TypeInfo;
        }
        v218 = v217->static_fields->isDuringStartup;
        v219 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v218 )
        {
          v220 = LocalizationManager__Get((System_String_o *)StringLiteral_2137/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
          v221 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v221, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
          if ( v219 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v219, (System_String_o *)StringLiteral_1/*""*/, v220, v221, 1, 0LL);
            goto LABEL_289;
          }
          goto LABEL_375;
        }
        v230 = LocalizationManager__Get((System_String_o *)StringLiteral_2138/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v231 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v231, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0LL);
        if ( !v219 )
          goto LABEL_375;
        CommonUI__OpenRetryDialog((CommonUI_o *)v219, (System_String_o *)StringLiteral_1/*""*/, v230, v231, 1, 0LL);
LABEL_289:
        if ( !_4__this->fields.isErrorDialog )
        {
          v4->fields._url_5__11 = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._url_5__11, 0, (int32_t)v2, v3);
          goto LABEL_291;
        }
        v269 = (Il2CppObject *)v4->fields._wait_5__10;
        v4->fields.__2__current = v269;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(p__2__current, (int32_t)v269, (int32_t)v2, v3);
        v20 = 9;
        goto LABEL_355;
      }
LABEL_272:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4A5A27F )
      {
        sub_1B885B0(&ManagementManager_TypeInfo);
        byte_4A5A27F = 1;
      }
      v222 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v222 = ManagementManager_TypeInfo;
      }
      v223 = v222->static_fields->isDuringStartup;
      v224 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v223 )
          goto LABEL_280;
LABEL_282:
        v225 = &StringLiteral_9216/*"NETWORK_ERROR_ASSET_UPDATE"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !v223 )
          goto LABEL_282;
LABEL_280:
        v225 = &StringLiteral_9217/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
      }
      v226 = LocalizationManager__Get((System_String_o *)*v225, 0LL);
      v227 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v227, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0LL);
      if ( !v224 )
        goto LABEL_375;
      CommonUI__OpenErrorDialog((CommonUI_o *)v224, (System_String_o *)StringLiteral_1/*""*/, v226, v227, 0, 0LL);
      return 0;
    case 0xC:
      this = (AssetLoader__LoadDataCR_d__29_o *)v4->fields._req_5__13;
      v4->fields.__1__state = -1;
      if ( !this )
        goto LABEL_37;
      if ( !_4__this )
        goto LABEL_375;
      v14 = _4__this->fields.data;
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_AssetBundleCreateRequest__get_assetBundle(
                                                  (UnityEngine_AssetBundleCreateRequest_o *)this,
                                                  0LL);
      if ( !v14 )
        goto LABEL_375;
      v16 = AssetData__SetAssetBundleData(v14, (UnityEngine_AssetBundle_o *)this, v4->fields.resourceNames, v15);
      v4->fields.__2__current = (Il2CppObject *)v16;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)v16, v18, v19);
      v20 = 13;
      goto LABEL_355;
    case 0xD:
      v4->fields.__1__state = -1;
LABEL_37:
      v4->fields._req_5__13 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._req_5__13, 0, (int32_t)v2, v3);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5A201 & 1) == 0 )
  {
    sub_1B885B0(&AssetLoader___c_TypeInfo);
    byte_4A5A201 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(AssetLoader___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)AssetLoader___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5A202 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4A5A202 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  return BYTE4(Instance[7].monitor) == 0;
}