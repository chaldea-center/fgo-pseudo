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
    sub_1C2D6EC(0, method);
  AssetData__AddEntry(data, 0);
}


void AssetLoader__AssetLoadLogError(AssetLoader_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  __int64 v9; // x21
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  const MethodInfo *v49; // x3
  int32_t v50; // w1
  const MethodInfo *v51; // x3
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
  __int64 v83; // x23
  __int64 v84; // x24
  CrashReporter_o *v85; // x19

  if ( (byte_4C26285 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Debug_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_14159/*"The request timed out."*/);
    sub_1C2D490(&StringLiteral_21047/*"java.net.SocketException"*/);
    sub_1C2D490(&StringLiteral_12290/*"SSL CA certificate error"*/);
    sub_1C2D490(&StringLiteral_1414/*"404: Not Found"*/);
    sub_1C2D490(&StringLiteral_14100/*"The network connection was lost."*/);
    sub_1C2D490(&StringLiteral_1408/*"400: Bad Request"*/);
    sub_1C2D490(&StringLiteral_14893/*"Unable to complete SSL connection"*/);
    sub_1C2D490(&StringLiteral_14923/*"Unable to read data"*/);
    sub_1C2D490(&StringLiteral_18209/*"connect failed"*/);
    sub_1C2D490(&StringLiteral_7258/*"HTTP/1.1 500 Internal Server Error"*/);
    sub_1C2D490(&StringLiteral_21049/*"java.net.UnknownHostException"*/);
    sub_1C2D490(&StringLiteral_1422/*"500: Internal Server Error"*/);
    sub_1C2D490(&StringLiteral_1424/*"502:"*/);
    sub_1C2D490(&StringLiteral_11335/*"Request timeout"*/);
    sub_1C2D490(&StringLiteral_4656/*"Connection reset by peer"*/);
    sub_1C2D490(&StringLiteral_5016/*"DLErrorType"*/);
    sub_1C2D490(&StringLiteral_5015/*"DLErrorAsset"*/);
    sub_1C2D490(&StringLiteral_1436/*"504: Gateway Timeout"*/);
    sub_1C2D490(&StringLiteral_15094/*"Unknown Error"*/);
    sub_1C2D490(&StringLiteral_1426/*"503 Auto retry count"*/);
    sub_1C2D490(&StringLiteral_21031/*"java.io.EOFException"*/);
    sub_1C2D490(&StringLiteral_21044/*"java.net.ConnectException"*/);
    sub_1C2D490(&StringLiteral_1412/*"403: Forbidden"*/);
    sub_1C2D490(&StringLiteral_4655/*"Connection refused"*/);
    sub_1C2D490(&StringLiteral_7259/*"HTTP/1.1 504 Gateway Timeout"*/);
    sub_1C2D490(&StringLiteral_1410/*"401: Authorization Required"*/);
    sub_1C2D490(&StringLiteral_21032/*"java.io.IOException"*/);
    sub_1C2D490(&StringLiteral_9449/*"No address associated with hostname"*/);
    sub_1C2D490(&StringLiteral_21046/*"java.net.ProtocolException"*/);
    sub_1C2D490(&StringLiteral_2374/*"AssetBundle file download time over"*/);
    sub_1C2D490(&StringLiteral_1415/*"408: Request Time-out"*/);
    sub_1C2D490(&StringLiteral_14543/*"Too many redirects"*/);
    sub_1C2D490(&StringLiteral_12918/*"Software caused connection abort"*/);
    sub_1C2D490(&StringLiteral_2373/*"AssetBundle file check sum error"*/);
    sub_1C2D490(&StringLiteral_21045/*"java.net.NoRouteToHostException"*/);
    sub_1C2D490(&StringLiteral_5243/*"Destination host has an erroneous SSL certificate"*/);
    sub_1C2D490(&StringLiteral_4657/*"Connection timed out"*/);
    sub_1C2D490(&StringLiteral_4246/*"Cannot resolve destination host"*/);
    sub_1C2D490(&StringLiteral_21048/*"java.net.SocketTimeoutException"*/);
    sub_1C2D490(&StringLiteral_2377/*"AssetLoadError"*/);
    byte_4C26285 = 1;
  }
  Instance = sub_1C2D538(string___TypeInfo, 37);
  if ( !Instance )
    goto LABEL_58;
  v9 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_47;
  v10 = StringLiteral_9449/*"No address associated with hostname"*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_9449/*"No address associated with hostname"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(Instance + 32), v10, v7, v8);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_47;
  v12 = StringLiteral_2374/*"AssetBundle file download time over"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_2374/*"AssetBundle file download time over"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 40), v12, v7, v11);
  if ( *(_DWORD *)(v9 + 24) <= 2u )
    goto LABEL_47;
  v14 = StringLiteral_14100/*"The network connection was lost."*/;
  *(_QWORD *)(v9 + 48) = StringLiteral_14100/*"The network connection was lost."*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 48), v14, v7, v13);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_47;
  v16 = StringLiteral_4656/*"Connection reset by peer"*/;
  *(_QWORD *)(v9 + 56) = StringLiteral_4656/*"Connection reset by peer"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 56), v16, v7, v15);
  if ( *(_DWORD *)(v9 + 24) <= 4u )
    goto LABEL_47;
  v18 = StringLiteral_12918/*"Software caused connection abort"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_12918/*"Software caused connection abort"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 64), v18, v7, v17);
  if ( *(_DWORD *)(v9 + 24) <= 5u )
    goto LABEL_47;
  v20 = StringLiteral_4657/*"Connection timed out"*/;
  *(_QWORD *)(v9 + 72) = StringLiteral_4657/*"Connection timed out"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 72), v20, v7, v19);
  if ( *(_DWORD *)(v9 + 24) <= 6u )
    goto LABEL_47;
  v22 = StringLiteral_4655/*"Connection refused"*/;
  *(_QWORD *)(v9 + 80) = StringLiteral_4655/*"Connection refused"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 80), v22, v7, v21);
  if ( *(_DWORD *)(v9 + 24) <= 7u )
    goto LABEL_47;
  v24 = StringLiteral_14159/*"The request timed out."*/;
  *(_QWORD *)(v9 + 88) = StringLiteral_14159/*"The request timed out."*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 88), v24, v7, v23);
  if ( *(_DWORD *)(v9 + 24) <= 8u )
    goto LABEL_47;
  v26 = StringLiteral_4246/*"Cannot resolve destination host"*/;
  *(_QWORD *)(v9 + 96) = StringLiteral_4246/*"Cannot resolve destination host"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 96), v26, v7, v25);
  if ( *(_DWORD *)(v9 + 24) <= 9u )
    goto LABEL_47;
  v28 = StringLiteral_14893/*"Unable to complete SSL connection"*/;
  *(_QWORD *)(v9 + 104) = StringLiteral_14893/*"Unable to complete SSL connection"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 104), v28, v7, v27);
  if ( *(_DWORD *)(v9 + 24) <= 0xAu )
    goto LABEL_47;
  v30 = StringLiteral_15094/*"Unknown Error"*/;
  *(_QWORD *)(v9 + 112) = StringLiteral_15094/*"Unknown Error"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 112), v30, v7, v29);
  if ( *(_DWORD *)(v9 + 24) <= 0xBu )
    goto LABEL_47;
  v32 = StringLiteral_11335/*"Request timeout"*/;
  *(_QWORD *)(v9 + 120) = StringLiteral_11335/*"Request timeout"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 120), v32, v7, v31);
  if ( *(_DWORD *)(v9 + 24) <= 0xCu )
    goto LABEL_47;
  v34 = StringLiteral_2373/*"AssetBundle file check sum error"*/;
  *(_QWORD *)(v9 + 128) = StringLiteral_2373/*"AssetBundle file check sum error"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 128), v34, v7, v33);
  if ( *(_DWORD *)(v9 + 24) <= 0xDu )
    goto LABEL_47;
  v36 = StringLiteral_12290/*"SSL CA certificate error"*/;
  *(_QWORD *)(v9 + 136) = StringLiteral_12290/*"SSL CA certificate error"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 136), v36, v7, v35);
  if ( *(_DWORD *)(v9 + 24) <= 0xEu )
    goto LABEL_47;
  v38 = StringLiteral_7258/*"HTTP/1.1 500 Internal Server Error"*/;
  *(_QWORD *)(v9 + 144) = StringLiteral_7258/*"HTTP/1.1 500 Internal Server Error"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 144), v38, v7, v37);
  if ( *(_DWORD *)(v9 + 24) <= 0xFu )
    goto LABEL_47;
  v40 = StringLiteral_7259/*"HTTP/1.1 504 Gateway Timeout"*/;
  *(_QWORD *)(v9 + 152) = StringLiteral_7259/*"HTTP/1.1 504 Gateway Timeout"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 152), v40, v7, v39);
  if ( *(_DWORD *)(v9 + 24) <= 0x10u )
    goto LABEL_47;
  v42 = StringLiteral_5243/*"Destination host has an erroneous SSL certificate"*/;
  *(_QWORD *)(v9 + 160) = StringLiteral_5243/*"Destination host has an erroneous SSL certificate"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 160), v42, v7, v41);
  if ( *(_DWORD *)(v9 + 24) <= 0x11u )
    goto LABEL_47;
  v44 = StringLiteral_14543/*"Too many redirects"*/;
  *(_QWORD *)(v9 + 168) = StringLiteral_14543/*"Too many redirects"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 168), v44, v7, v43);
  if ( *(_DWORD *)(v9 + 24) <= 0x12u )
    goto LABEL_47;
  v46 = StringLiteral_21031/*"java.io.EOFException"*/;
  *(_QWORD *)(v9 + 176) = StringLiteral_21031/*"java.io.EOFException"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 176), v46, v7, v45);
  if ( *(_DWORD *)(v9 + 24) <= 0x13u )
    goto LABEL_47;
  v48 = StringLiteral_21047/*"java.net.SocketException"*/;
  *(_QWORD *)(v9 + 184) = StringLiteral_21047/*"java.net.SocketException"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 184), v48, v7, v47);
  if ( *(_DWORD *)(v9 + 24) <= 0x14u )
    goto LABEL_47;
  v50 = StringLiteral_21048/*"java.net.SocketTimeoutException"*/;
  *(_QWORD *)(v9 + 192) = StringLiteral_21048/*"java.net.SocketTimeoutException"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 192), v50, v7, v49);
  if ( *(_DWORD *)(v9 + 24) <= 0x15u )
    goto LABEL_47;
  v52 = StringLiteral_21045/*"java.net.NoRouteToHostException"*/;
  *(_QWORD *)(v9 + 200) = StringLiteral_21045/*"java.net.NoRouteToHostException"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 200), v52, v7, v51);
  if ( *(_DWORD *)(v9 + 24) <= 0x16u )
    goto LABEL_47;
  v54 = StringLiteral_21032/*"java.io.IOException"*/;
  *(_QWORD *)(v9 + 208) = StringLiteral_21032/*"java.io.IOException"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 208), v54, v7, v53);
  if ( *(_DWORD *)(v9 + 24) <= 0x17u )
    goto LABEL_47;
  v56 = StringLiteral_21044/*"java.net.ConnectException"*/;
  *(_QWORD *)(v9 + 216) = StringLiteral_21044/*"java.net.ConnectException"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 216), v56, v7, v55);
  if ( *(_DWORD *)(v9 + 24) <= 0x18u )
    goto LABEL_47;
  v58 = StringLiteral_18209/*"connect failed"*/;
  *(_QWORD *)(v9 + 224) = StringLiteral_18209/*"connect failed"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 224), v58, v7, v57);
  if ( *(_DWORD *)(v9 + 24) <= 0x19u )
    goto LABEL_47;
  v60 = StringLiteral_21046/*"java.net.ProtocolException"*/;
  *(_QWORD *)(v9 + 232) = StringLiteral_21046/*"java.net.ProtocolException"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 232), v60, v7, v59);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Au )
    goto LABEL_47;
  v62 = StringLiteral_21049/*"java.net.UnknownHostException"*/;
  *(_QWORD *)(v9 + 240) = StringLiteral_21049/*"java.net.UnknownHostException"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 240), v62, v7, v61);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Bu )
    goto LABEL_47;
  v64 = StringLiteral_1408/*"400: Bad Request"*/;
  *(_QWORD *)(v9 + 248) = StringLiteral_1408/*"400: Bad Request"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 248), v64, v7, v63);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Cu )
    goto LABEL_47;
  v66 = StringLiteral_1410/*"401: Authorization Required"*/;
  *(_QWORD *)(v9 + 256) = StringLiteral_1410/*"401: Authorization Required"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 256), v66, v7, v65);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Du )
    goto LABEL_47;
  v68 = StringLiteral_1412/*"403: Forbidden"*/;
  *(_QWORD *)(v9 + 264) = StringLiteral_1412/*"403: Forbidden"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 264), v68, v7, v67);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Eu )
    goto LABEL_47;
  v70 = StringLiteral_1414/*"404: Not Found"*/;
  *(_QWORD *)(v9 + 272) = StringLiteral_1414/*"404: Not Found"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 272), v70, v7, v69);
  if ( *(_DWORD *)(v9 + 24) <= 0x1Fu )
    goto LABEL_47;
  v72 = StringLiteral_1415/*"408: Request Time-out"*/;
  *(_QWORD *)(v9 + 280) = StringLiteral_1415/*"408: Request Time-out"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 280), v72, v7, v71);
  if ( *(_DWORD *)(v9 + 24) <= 0x20u )
    goto LABEL_47;
  v74 = StringLiteral_1422/*"500: Internal Server Error"*/;
  *(_QWORD *)(v9 + 288) = StringLiteral_1422/*"500: Internal Server Error"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 288), v74, v7, v73);
  if ( *(_DWORD *)(v9 + 24) <= 0x21u )
    goto LABEL_47;
  v76 = StringLiteral_1424/*"502:"*/;
  *(_QWORD *)(v9 + 296) = StringLiteral_1424/*"502:"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 296), v76, v7, v75);
  if ( *(_DWORD *)(v9 + 24) <= 0x22u
    || (v78 = StringLiteral_1426/*"503 Auto retry count"*/,
        *(_QWORD *)(v9 + 304) = StringLiteral_1426/*"503 Auto retry count"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v9 + 304), v78, v7, v77),
        *(_DWORD *)(v9 + 24) <= 0x23u)
    || (v80 = StringLiteral_1436/*"504: Gateway Timeout"*/,
        *(_QWORD *)(v9 + 312) = StringLiteral_1436/*"504: Gateway Timeout"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v9 + 312), v80, v7, v79),
        *(_DWORD *)(v9 + 24) <= 0x24u) )
  {
LABEL_47:
    sub_1C2D6F4(Instance, v6, v7);
  }
  v82 = StringLiteral_14923/*"Unable to read data"*/;
  *(_QWORD *)(v9 + 320) = StringLiteral_14923/*"Unable to read data"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 320), v82, v7, v81);
  if ( (int)*(_QWORD *)(v9 + 24) < 1 )
  {
LABEL_48:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_57;
  }
  v83 = 0;
  v84 = (unsigned int)*(_QWORD *)(v9 + 24) - 1LL;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_58;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v9 + 32 + 8 * v83), 0);
    if ( (Instance & 1) != 0 )
      break;
    if ( v84 == v83 )
      goto LABEL_48;
    if ( ++v83 >= (unsigned __int64)*(unsigned int *)(v9 + 24) )
      goto LABEL_47;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !this->fields.data
    || (v85 = (CrashReporter_o *)Instance, Instance = (__int64)AssetData__get_CacheName(this->fields.data, 0), !v85) )
  {
LABEL_58:
    sub_1C2D6EC(Instance, v6);
  }
  CrashReporter__AddCustomKey(v85, (System_String_o *)StringLiteral_5015/*"DLErrorAsset"*/, (System_String_o *)Instance, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v83 >= *(_DWORD *)(v9 + 24) )
    goto LABEL_47;
  if ( !Instance )
    goto LABEL_58;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5016/*"DLErrorType"*/,
    *(System_String_o **)(v9 + 32 + 8 * v83),
    0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  errorCode = (System_String_o *)StringLiteral_2377/*"AssetLoadError"*/;
LABEL_57:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0);
}


void AssetLoader__EndLoad(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetLoader_LoadEndHandler_o *endCallback; // x8
  struct AssetLoader_LoadEndDataHandler_o *endCallback2; // x8

  if ( (byte_4C26282 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C26282 = 1;
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
  UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)this, 0);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
}


bool AssetLoader__IsSame(AssetLoader_o *this, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame(data, name, 0);
  return (char)data;
}


bool AssetLoader__IsSame_40292736(AssetLoader_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_40284628(data, type, name, 0);
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

  if ( (byte_4C26281 & 1) == 0 )
  {
    sub_1C2D490(&AssetLoader__LoadDataCR_d__29_TypeInfo);
    byte_4C26281 = 1;
  }
  v5 = sub_1C2D6DC(AssetLoader__LoadDataCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = resourceNames;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)resourceNames, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void AssetLoader__LoadUseThread(AssetLoader_o *this, const MethodInfo *method)
{
  System_Byte_array *readData; // x20
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C26283 & 1) == 0 )
  {
    sub_1C2D490(&CatAndMouseGame_TypeInfo);
    byte_4C26283 = 1;
  }
  readData = this->fields.readData;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v4 = CatAndMouseGame__MouseGame4(readData, 0);
  this->fields._decData = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._decData, (int32_t)v4, v5, v6);
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

  if ( (byte_4C26284 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&ManagementManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C26284 = 1;
  }
  loader = this->fields.loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
    this->fields.loader = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loader, 0, v6, v7);
  }
  this->fields.readData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.readData, 0, v2, v3);
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4C26278 )
  {
    sub_1C2D490(&ManagementManager_TypeInfo);
    byte_4C26278 = 1;
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
    UnityEngine_Application__Quit_70958636(0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v10);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callbackFunc, (int32_t)resourceNames, method);
  v8 = (AssetData_o *)*(p_endCallback - 1);
  if ( !v8 )
    sub_1C2D6EC(0, v7);
  IsNeedUpdateVersion = AssetData__IsNeedUpdateVersion(v8, 0);
  this->fields.isDownload = IsNeedUpdateVersion;
  this->fields.isRequestDownload = IsNeedUpdateVersion;
  DataCR = AssetLoader__LoadDataCR(this, resourceNames, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, DataCR, 0);
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
      sub_1C2D6EC(0, v6);
    System_Threading_Thread__Abort(*p_threadDecrypt, 0);
  }
  *p_threadDecrypt = 0;
  sub_1C2D434((CGThumbnailListItem_o *)p_threadDecrypt, 0, v2, v3);
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

  if ( (byte_4C2627D & 1) == 0 )
  {
    sub_1C2D490(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4C2627D = 1;
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
    v9 = sub_1C676E8(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
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

  if ( (byte_4C2627F & 1) == 0 )
  {
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C2627F = 1;
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
    v9 = sub_1C676E8(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
  return data->fields.name;
}


int32_t AssetLoader__get_Size(AssetLoader_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C2627E & 1) == 0 )
  {
    sub_1C2D490(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4C2627E = 1;
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
    v9 = sub_1C676E8(p_endCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
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

  if ( (byte_4C26280 & 1) == 0 )
  {
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C26280 = 1;
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
    v9 = sub_1C676E8(p_endCallback2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A71768;
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
        v11 = sub_1C2D548(method);
        v12 = sub_1C2DA04(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A71864;
          else
            v9 = sub_1A71828;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A717A4;
        }
        else
        {
          v9 = sub_1A71778;
        }
      }
      else
      {
        v9 = sub_1A71748;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A71700;
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
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v6, callback, object);
}


void AssetLoader_LoadEndDataHandler__EndInvoke(
        AssetLoader_LoadEndDataHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A71578;
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
        v11 = sub_1C2D548(method);
        v12 = sub_1C2DA04(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A71674;
          else
            v9 = sub_1A71638;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A715B4;
        }
        else
        {
          v9 = sub_1A71588;
        }
      }
      else
      {
        v9 = sub_1A71558;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A71510;
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
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v6, callback, object);
}


void AssetLoader_LoadEndHandler__EndInvoke(
        AssetLoader_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  __int64 v92; // x2
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
  const MethodInfo *v118; // x3
  AssetLoader__LoadDataCR_d__29_o *v119; // x22
  int32_t v120; // w1
  const MethodInfo *v121; // x3
  struct System_String_o *v122; // x1
  const MethodInfo *v123; // x3
  int32_t v124; // w1
  struct AssetData_o *v125; // x8
  const MethodInfo *v126; // x3
  const MethodInfo *v127; // x3
  int32_t v128; // w1
  const MethodInfo *v129; // x3
  const MethodInfo *v130; // x3
  int32_t v131; // w1
  System_String_o *v132; // x0
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  ManagerConfig_c *v135; // x0
  struct AssetData_o *v136; // x8
  CommonUI_o *v137; // x21
  System_String_o *v138; // x22
  ErrorDialog_ClickDelegate_o *v139; // x23
  ManagementManager_c *v140; // x0
  _BOOL4 isDuringStartup; // w23
  Il2CppObject *Instance; // x0
  struct System_String_o *errorLocalizeCode_5__7; // x8
  CommonUI_o *v144; // x22
  System_String_o *v145; // x21
  System_String_o *v146; // x23
  System_String_o *v147; // x23
  ErrorDialog_ClickDelegate_o *v148; // x24
  System_String_o *v149; // x23
  System_String_o *v150; // x23
  ErrorDialog_ClickDelegate_o *v151; // x24
  UnityEngine_Networking_UnityWebRequest_o *v152; // x0
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  AssetManager_c *v157; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  System_String_o *v161; // x21
  System_String_o *UrlString; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  AssetLoader__LoadDataCR_d__29_o **v165; // x21
  float v166; // s8
  ManagerConfig_c *v167; // x0
  float v168; // s0
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v169; // x0
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  System_String_o *ResponseHeader; // x21
  uint64_t freeSize_5__11; // x21
  ManagerConfig_c *v176; // x0
  float v177; // s0
  float v178; // s9
  float v179; // s8
  float v180; // s0
  float v181; // s8
  System_String_o **v182; // x21
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  System_String_o *v185; // x0
  System_String_o *text; // x22
  System_String_o *v187; // x22
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  AssetLoader__LoadDataCR_d__29_o *v190; // x22
  int v191; // w8
  int32_t v192; // w0
  int32_t v193; // w24
  System_String_o *v194; // x23
  System_String_o *v195; // x22
  System_Byte_array *v196; // x24
  uint32_t v197; // w24
  int v198; // w8
  Il2CppObject *v199; // x8
  AssetLoader__LoadDataCR_d__29_o *v200; // x21
  int v201; // w28
  int v202; // w29
  System_String_o *v203; // x22
  Il2CppObject *v204; // x8
  AssetLoader__LoadDataCR_d__29_o *v205; // x22
  char v206; // w8
  const MethodInfo *v207; // x2
  System_String_o *v208; // x23
  System_String_o **p_resourceNames; // x9
  System_String_o *v210; // x22
  System_String_o *v211; // x0
  int v212; // w23
  struct AssetData_o *v213; // x8
  ManagementManager_c *v214; // x0
  _BOOL4 v215; // w22
  Il2CppObject *v216; // x21
  System_String_o *v217; // x22
  ErrorDialog_ClickDelegate_o *v218; // x23
  ManagementManager_c *v219; // x0
  _BOOL4 v220; // w21
  Il2CppObject *v221; // x19
  __int64 *v222; // x8
  System_String_o *v223; // x21
  ErrorDialog_ClickDelegate_o *v224; // x22
  bool v225; // w0
  __int64 *v226; // x8
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v228; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v230; // x20
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  System_String_o *v233; // x22
  ErrorDialog_ClickDelegate_o *v234; // x23
  int32_t v235; // w2
  const MethodInfo *v236; // x3
  int32_t v237; // w2
  const MethodInfo *v238; // x3
  Il2CppObject *_2__current; // x21
  AssetData_o *v240; // x22
  AssetLoader__LoadDataCR_d__29_o **v241; // x21
  __int64 v242; // x10
  __int64 v243; // x10
  System_Byte_array *v244; // x0
  UnityEngine_AssetBundleCreateRequest_o *v245; // x0
  int32_t v246; // w2
  const MethodInfo *v247; // x3
  int32_t v248; // w2
  const MethodInfo *v249; // x3
  Il2CppObject *req_5__16; // x1
  int32_t v251; // w2
  const MethodInfo *v252; // x3
  AssetLoader___c_c *v253; // x0
  System_Func_bool__o *_9__29_0; // x20
  Il2CppObject *v255; // x21
  struct AssetLoader___c_StaticFields *static_fields; // x0
  int32_t v257; // w2
  const MethodInfo *v258; // x3
  UnityEngine_WaitUntil_o *v259; // x21
  int32_t v260; // w2
  const MethodInfo *v261; // x3
  Il2CppObject *v262; // x1
  Il2CppObject *v263; // x1
  Il2CppObject *v264; // x1
  int32_t v265; // w2
  const MethodInfo *v266; // x3
  int32_t v267; // w2
  const MethodInfo *v268; // x3
  int32_t v269; // w1
  __int64 v270; // x1
  CGThumbnailListItem_o *v271; // x0
  System_String_o *v272; // x0
  UnityEngine_Networking_UnityWebRequest_o *v273; // x0
  int32_t v274; // w2
  const MethodInfo *v275; // x3
  ManagerConfig_c *v276; // x0
  struct AssetData_o *v277; // x8
  CommonUI_o *v278; // x22
  System_String_o *v279; // x21
  ErrorDialog_ClickDelegate_o *v280; // x23
  Il2CppObject *v281; // x1
  ManagementManager_c *v282; // x0
  _BOOL4 v283; // w22
  Il2CppObject *v284; // x21
  System_String_o *v285; // x22
  ErrorDialog_ClickDelegate_o *v286; // x23
  System_String_o *v287; // x22
  ErrorDialog_ClickDelegate_o *v288; // x23
  Il2CppObject *v289; // x1
  UnityEngine_WaitForSeconds_o *v290; // x20
  int32_t v291; // w2
  const MethodInfo *v292; // x3
  UnityEngine_Networking_DownloadHandler_o *v293; // x0
  ManagerConfig_c *v294; // x0
  struct ManagerConfig_StaticFields *v295; // x8
  Il2CppObject *wait_5__10; // x1
  CGThumbnailListItem_o *v297; // x19
  ManagerConfig_c *v298; // x0
  struct ManagerConfig_StaticFields *v299; // x8
  Il2CppObject *v300; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-B0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-B0h]
  uint64_t result; // [xsp+28h] [xbp-88h] BYREF
  __int64 v304; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-78h] BYREF

  v5 = this;
  if ( (byte_4C26288 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetLoader_EndRebootDialog__);
    sub_1C2D490(&Method_AssetLoader_EndRetryDialog__);
    sub_1C2D490(&Method_AssetLoader_EndWarningDialog__);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&CatAndMouseGame_TypeInfo);
    sub_1C2D490(&char___TypeInfo);
    sub_1C2D490(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&CommonServicePluginScript_TypeInfo);
    sub_1C2D490(&Crc32_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C2D490(&DownloadHandlerDecryptFileWithCrc_TypeInfo);
    sub_1C2D490(&DownloadHandlerFileWithCrcCheck_TypeInfo);
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&System_IO_IOException_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&ManagementManager_TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&Method_AssetLoader___c__LoadDataCR_b__29_0__);
    sub_1C2D490(&AssetLoader___c_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_9235/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/);
    sub_1C2D490(&StringLiteral_7255/*"HTTP"*/);
    sub_1C2D490(&StringLiteral_5283/*"Disk full"*/);
    sub_1C2D490(&StringLiteral_2391/*"AssetStorageList download time over"*/);
    sub_1C2D490(&StringLiteral_9244/*"NETWORK_ERROR_DISK_FULL"*/);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_2378/*"AssetName : "*/);
    sub_1C2D490(&StringLiteral_762/*")\n\n503 Auto retry count "*/);
    sub_1C2D490(&StringLiteral_765/*")\nfile crc ("*/);
    sub_1C2D490(&StringLiteral_1425/*"503"*/);
    sub_1C2D490(&StringLiteral_2041/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15926/*"[FFFF80]Download error for debug"*/);
    sub_1C2D490(&StringLiteral_2388/*"AssetStorageList download data error"*/);
    sub_1C2D490(&StringLiteral_4681/*"Content-Length"*/);
    sub_1C2D490(&StringLiteral_25237/*"~"*/);
    sub_1C2D490(&StringLiteral_12347/*"STATUS"*/);
    sub_1C2D490(&StringLiteral_761/*")\n\n"*/);
    sub_1C2D490(&StringLiteral_9234/*"NETWORK_ERROR_ASSET_UPDATE"*/);
    sub_1C2D490(&StringLiteral_654/*"("*/);
    sub_1C2D490(&StringLiteral_763/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_1C2D490(&StringLiteral_759/*")"*/);
    sub_1C2D490(&StringLiteral_19057/*"error "*/);
    sub_1C2D490(&StringLiteral_1768/*"@"*/);
    sub_1C2D490(&StringLiteral_2042/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_2389/*"AssetStorageList download error"*/);
    sub_1C2D490(&StringLiteral_764/*")\n\nAssetBundle file download time over"*/);
    this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C26288 = 1;
  }
  v304 = 0;
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
      sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13, 0, (int32_t)v2, v3);
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
          sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v32, v33);
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
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.readData, (int32_t)data, v35, v36);
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
      sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v38, v39);
      _4__this->fields.readData = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v40, v41);
LABEL_58:
      while ( 1 )
      {
        _4__this->fields.readData = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
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
            sub_1C2D434(v9, (int32_t)LoadRequest, v10, v11);
            this = (AssetLoader__LoadDataCR_d__29_o *)v9->klass;
            if ( !v9->klass )
              goto LABEL_383;
            v12 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0);
            v5->fields.__2__current = (Il2CppObject *)v12;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)v12, v14, v15);
            v16 = 11;
          }
          else
          {
            v253 = AssetLoader___c_TypeInfo;
            if ( !AssetLoader___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetLoader___c_TypeInfo);
              v253 = AssetLoader___c_TypeInfo;
            }
            _9__29_0 = v253->static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !v253->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v253);
                v253 = AssetLoader___c_TypeInfo;
              }
              v255 = (Il2CppObject *)v253->static_fields->__9;
              _9__29_0 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(_9__29_0, v255, Method_AssetLoader___c__LoadDataCR_b__29_0__, 0);
              static_fields = AssetLoader___c_TypeInfo->static_fields;
              static_fields->__9__29_0 = _9__29_0;
              sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v257, v258);
            }
            v259 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v259, _9__29_0, 0);
            v5->fields.__2__current = (Il2CppObject *)v259;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)v259, v260, v261);
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
        v240 = _4__this->fields.data;
        if ( !v240 )
          goto LABEL_383;
        if ( v240->fields.entryCount >= 1 )
        {
          v241 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
          this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
          if ( v5->fields._isEncrypted_5__2 )
          {
            if ( !this )
              goto LABEL_383;
            this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                        (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                        0);
            if ( !this
              || (v242 = DownloadHandlerDecryptFileWithCrc_TypeInfo->_2.naturalAligment,
                  this->klass->_2.naturalAligment < (unsigned int)v242)
              || (DownloadHandlerDecryptFileWithCrc_c *)this->klass->_2.typeHierarchy[v242 - 1] != DownloadHandlerDecryptFileWithCrc_TypeInfo )
            {
              this = *v241;
              if ( !*v241 )
                goto LABEL_383;
              this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0);
              if ( !this )
                goto LABEL_383;
              v243 = DownloadHandlerFileWithCrcCheck_TypeInfo->_2.naturalAligment;
              if ( this->klass->_2.naturalAligment < (unsigned int)v243
                || (DownloadHandlerFileWithCrcCheck_c *)this->klass->_2.typeHierarchy[v243 - 1] != DownloadHandlerFileWithCrcCheck_TypeInfo )
              {
                goto LABEL_383;
              }
            }
            v244 = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
            v245 = UnityEngine_AssetBundle__LoadFromMemoryAsync(v244, 0);
            v5->fields._req_5__16 = v245;
            sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._req_5__16, (int32_t)v245, v246, v247);
            this = *v241;
            if ( !*v241 )
              goto LABEL_383;
            UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
            *v241 = 0;
            sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v248, v249);
            req_5__16 = (Il2CppObject *)v5->fields._req_5__16;
            v5->fields.__2__current = req_5__16;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)req_5__16, v251, v252);
            v16 = 12;
            goto LABEL_370;
          }
          if ( !this )
            goto LABEL_383;
          v293 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                   (UnityEngine_Networking_UnityWebRequest_o *)this,
                   0);
          AssetData__SetData(v240, v293, 0);
        }
LABEL_39:
        loader = _4__this->fields.loader;
        if ( loader )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(loader, 0);
          _4__this->fields.loader = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v29, v30);
        }
        _4__this->fields.readData = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, (int32_t)v2, v3);
        AssetLoader__EndLoad(_4__this, v31);
        return 0;
      }
      *(_WORD *)&v5->fields._isAutoRetry_5__4 = 0;
      v5->fields._errorCode_5__6 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, 0, (int32_t)v2, v3);
      v5->fields._errorLocalizeCode_5__7 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7, 0, v42, v43);
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
      v47 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v47, 0);
      v5->fields._wait_5__10 = v47;
      sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._wait_5__10, (int32_t)v47, v48, v49);
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
        v56 = StringLiteral_5283/*"Disk full"*/;
        v5->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5283/*"Disk full"*/;
        sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, v56, v53, v54);
        p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7;
        v60 = StringLiteral_9244/*"NETWORK_ERROR_DISK_FULL"*/;
        v5->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9244/*"NETWORK_ERROR_DISK_FULL"*/;
        goto LABEL_140;
      }
      Url = AssetData__get_Url((AssetData_o *)this, 0);
      v5->fields._url_5__12 = Url;
      sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._url_5__12, (int32_t)Url, v62, v63);
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
      sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)v69, v70, v71);
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_383;
      v72 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      v5->fields._asyncOperater_5__13 = v72;
      sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13, (int32_t)v72, v73, v74);
LABEL_77:
      p_asyncOperater_5__13 = (AssetLoader__LoadDataCR_d__29_o **)&v5->fields._asyncOperater_5__13;
      this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
      if ( !this )
LABEL_383:
        sub_1C2D6EC(this, method);
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
          v294 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v294 = ManagerConfig_TypeInfo;
          }
          v295 = v294->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
          v5->fields._requestTime_5__8 = v83 + v295->TIMEOUT;
          if ( !this )
            goto LABEL_383;
          v5->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0);
LABEL_377:
          wait_5__10 = (Il2CppObject *)v5->fields._wait_5__10;
          v5->fields.__2__current = wait_5__10;
          v297 = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C2D434(v297, (int32_t)wait_5__10, v79, v80);
          v225 = 1;
          LODWORD(v297[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return v225;
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
        v89 = System_String__Concat_63496112(
                (System_String_o *)StringLiteral_654/*"("*/,
                v5->fields._url_5__12,
                (System_String_o *)StringLiteral_764/*")\n\nAssetBundle file download time over"*/,
                0);
        v5->fields._errorCode_5__6 = v89;
        sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, (int32_t)v89, v90, v91);
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
          HIDWORD(v304) = crc;
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
            this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C2D538(string___TypeInfo, 7);
            if ( !this )
              goto LABEL_383;
            v119 = this;
            if ( !LODWORD(this->fields.__2__current) )
              goto LABEL_267;
            v120 = StringLiteral_654/*"("*/;
            this->fields.__4__this = (struct AssetLoader_o *)StringLiteral_654/*"("*/;
            sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__4__this, v120, v92, v118);
            if ( LODWORD(v119->fields.__2__current) <= 1 )
              goto LABEL_267;
            v122 = v5->fields._url_5__12;
            v119->fields.resourceNames = (struct System_String_array *)v122;
            sub_1C2D434((CGThumbnailListItem_o *)&v119->fields.resourceNames, (int32_t)v122, v92, v121);
            if ( LODWORD(v119->fields.__2__current) <= 2 )
              goto LABEL_267;
            v124 = StringLiteral_763/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            *(_QWORD *)&v119->fields._isEncrypted_5__2 = StringLiteral_763/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
            sub_1C2D434((CGThumbnailListItem_o *)&v119->fields._isEncrypted_5__2, v124, v92, v123);
            v125 = _4__this->fields.data;
            if ( !v125 )
              goto LABEL_383;
            LODWORD(v304) = v125->fields.crc;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v304, 0);
            if ( LODWORD(v119->fields.__2__current) <= 3 )
              goto LABEL_267;
            *(_QWORD *)&v119->fields._isAutoRetry_5__4 = this;
            sub_1C2D434((CGThumbnailListItem_o *)&v119->fields._isAutoRetry_5__4, (int32_t)this, v92, v126);
            if ( LODWORD(v119->fields.__2__current) <= 4 )
              goto LABEL_267;
            v128 = StringLiteral_765/*")\nfile crc ("*/;
            v119->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_765/*")\nfile crc ("*/;
            sub_1C2D434((CGThumbnailListItem_o *)&v119->fields._errorCode_5__6, v128, v92, v127);
            this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__ToString((uint32_t)&v304 + 4, 0);
            if ( LODWORD(v119->fields.__2__current) <= 5 )
              goto LABEL_267;
            v119->fields._errorLocalizeCode_5__7 = (struct System_String_o *)this;
            sub_1C2D434((CGThumbnailListItem_o *)&v119->fields._errorLocalizeCode_5__7, (int32_t)this, v92, v129);
            if ( LODWORD(v119->fields.__2__current) <= 6 )
              goto LABEL_267;
            v131 = StringLiteral_759/*")"*/;
            *(_QWORD *)&v119->fields._requestTime_5__8 = StringLiteral_759/*")"*/;
            sub_1C2D434((CGThumbnailListItem_o *)&v119->fields._requestTime_5__8, v131, v92, v130);
            v132 = System_String__Concat_63498380((System_String_array *)v119, 0);
            v5->fields._errorCode_5__6 = v132;
            sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, (int32_t)v132, v133, v134);
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
        v107 = System_String__Concat_63498116(
                 (System_String_o *)StringLiteral_654/*"("*/,
                 v105,
                 (System_String_o *)StringLiteral_761/*")\n\n"*/,
                 v106,
                 0);
        v5->fields._errorCode_5__6 = v107;
        sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, (int32_t)v107, v108, v109);
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
               (const MethodInfo_3449FF8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
          || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                v111,
                (Il2CppObject *)StringLiteral_12347/*"STATUS"*/,
                &value,
                (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          goto LABEL_139;
        }
        v112 = value;
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C2D538(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_383;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_267;
        LOWORD(this->fields.__4__this) = 32;
        if ( !v112 )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_63507056(
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
                                                    (System_String_o *)StringLiteral_7255/*"HTTP"*/,
                                                    0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_139;
        if ( LODWORD(v113->fields.__2__current) <= 1 )
          goto LABEL_267;
        this = (AssetLoader__LoadDataCR_d__29_o *)v113->fields.resourceNames;
        if ( !this )
          goto LABEL_383;
        if ( !System_String__Equals_63493168((System_String_o *)this, (System_String_o *)StringLiteral_1425/*"503"*/, 0) )
          goto LABEL_139;
        v114 = v5->fields._url_5__12;
        v115 = v5->fields._autoRetryCount_5__3 + 1;
        v5->fields._isAutoRetry_5__4 = 1;
        v5->fields._autoRetryCount_5__3 = v115;
        v116 = System_Int32__ToString((int)v5 + 52, 0);
        v117 = System_String__Concat_63498116(
                 (System_String_o *)StringLiteral_654/*"("*/,
                 v114,
                 (System_String_o *)StringLiteral_762/*")\n\n503 Auto retry count "*/,
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
        v100 = System_String__Concat_63498116(
                 (System_String_o *)StringLiteral_19057/*"error "*/,
                 (System_String_o *)v98,
                 (System_String_o *)StringLiteral_113/*" "*/,
                 v99,
                 0);
      }
      v103 = (int)v100;
      v5->fields._errorCode_5__6 = v100;
      p_errorCode_5__6 = (CGThumbnailListItem_o *)&v5->fields._errorCode_5__6;
LABEL_108:
      sub_1C2D434(p_errorCode_5__6, v103, v101, v102);
LABEL_139:
      v5->fields._url_5__12 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._url_5__12, 0, v92, v93);
      p_errorLocalizeCode_5__7 = (CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13;
      v60 = 0;
      v5->fields._asyncOperater_5__13 = 0;
LABEL_140:
      sub_1C2D434(p_errorLocalizeCode_5__7, v60, v57, v58);
      method = (const MethodInfo *)v5->fields._errorCode_5__6;
      if ( method )
      {
        AssetLoader__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
        v135 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v135 = ManagerConfig_TypeInfo;
        }
        if ( v135->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v136 = _4__this->fields.data;
          if ( !v136 )
            goto LABEL_383;
          v137 = (CommonUI_o *)this;
          v138 = System_String__Concat_63498116(
                   (System_String_o *)StringLiteral_2378/*"AssetName : "*/,
                   v136->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   v5->fields._errorCode_5__6,
                   0);
          v139 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v139, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
          if ( !v137 )
            goto LABEL_383;
          v4 &= 0xFFFFFFFF00000000LL;
          LODWORD(effectDistance.fields.value.fields.y) = v4;
          *(_QWORD *)&effectDistance.fields.hasValue = 0;
          CommonUI__OpenWarningDialog(
            v137,
            (System_String_o *)StringLiteral_15926/*"[FFFF80]Download error for debug"*/,
            v138,
            v139,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0);
LABEL_147:
          if ( _4__this->fields.isErrorDialog )
          {
            v262 = (Il2CppObject *)v5->fields._wait_5__10;
            v5->fields.__2__current = v262;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)v262, (int32_t)v2, v3);
            v16 = 2;
            goto LABEL_370;
          }
        }
        if ( v5->fields._isAutoRetry_5__4 )
        {
          autoRetryCount_5__3 = v5->fields._autoRetryCount_5__3;
          v228 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v228 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v228->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v230 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v230, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0);
          v5->fields.__2__current = (Il2CppObject *)v230;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C2D434(p__2__current, (int32_t)v230, v231, v232);
          v16 = 3;
          goto LABEL_370;
        }
        if ( !v5->fields._isCrcError_5__5 )
        {
          _4__this->fields.isErrorDialog = 1;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          if ( !byte_4C26278 )
          {
            sub_1C2D490(&ManagementManager_TypeInfo);
            byte_4C26278 = 1;
          }
          v140 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v140 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v140->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__7 = v5->fields._errorLocalizeCode_5__7;
          v144 = (CommonUI_o *)Instance;
          v145 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__7 )
              v146 = v5->fields._errorLocalizeCode_5__7;
            else
              v146 = (System_String_o *)StringLiteral_2041/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v147 = LocalizationManager__Get(v146, 0);
            v148 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v148, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
            if ( !v144 )
              goto LABEL_383;
            CommonUI__OpenRetryBootDialog(v144, v145, v147, v148, 1, 0);
          }
          else
          {
            if ( errorLocalizeCode_5__7 )
              v149 = v5->fields._errorLocalizeCode_5__7;
            else
              v149 = (System_String_o *)StringLiteral_2042/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v150 = LocalizationManager__Get(v149, 0);
            v151 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v151, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
            if ( !v144 )
              goto LABEL_383;
            CommonUI__OpenRetryDialog(v144, v145, v150, v151, 1, 0);
          }
LABEL_171:
          if ( _4__this->fields.isErrorDialog )
          {
            v263 = (Il2CppObject *)v5->fields._wait_5__10;
            v5->fields.__2__current = v263;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)v263, (int32_t)v2, v3);
            v16 = 4;
            goto LABEL_370;
          }
        }
      }
LABEL_172:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C2267F )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C2267F = 1;
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
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v265, v266);
        _4__this->fields.readData = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v267, v268);
        return 0;
      }
      if ( !_4__this->fields.isDownload && !v5->fields._isEncrypted_5__2 )
        goto LABEL_310;
      v152 = _4__this->fields.loader;
      if ( v152 )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v152, 0);
        _4__this->fields.loader = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v153, v154);
        _4__this->fields.readData = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.readData, 0, v155, v156);
      }
      if ( !v5->fields._isCrcError_5__5 )
      {
LABEL_303:
        v5->fields._errorCode_5__6 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, 0, (int32_t)v2, v3);
        v5->fields._errorLocalizeCode_5__7 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7, 0, v235, v236);
        v5->fields._wait_5__10 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._wait_5__10, 0, v237, v238);
        goto LABEL_304;
      }
      v157 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v157);
      v5->fields._url_5__12 = ConfigFileAddress;
      sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._url_5__12, (int32_t)ConfigFileAddress, v159, v160);
LABEL_188:
      v161 = v5->fields._url_5__12;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v161, v7);
      this = (AssetLoader__LoadDataCR_d__29_o *)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0);
      if ( !_4__this )
        goto LABEL_383;
      _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)this;
      v165 = (AssetLoader__LoadDataCR_d__29_o **)&_4__this->fields.loader;
      sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.loader, (int32_t)this, v163, v164);
      v166 = UnityEngine_Time__get_unscaledTime(0);
      v167 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v167 = ManagerConfig_TypeInfo;
      }
      v168 = v167->static_fields->TIMEOUT;
      v5->fields._loadProgress_5__9 = 0.0;
      *(_WORD *)&v5->fields._isSizeChecked_5__14 = 0;
      v5->fields._requestTime_5__8 = v166 + v168;
      this = *v165;
      if ( !*v165 )
        goto LABEL_383;
      v169 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      v5->fields._asyncOperater_5__13 = v169;
      sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._asyncOperater_5__13, (int32_t)v169, v170, v171);
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
                             (System_String_o *)StringLiteral_4681/*"Content-Length"*/,
                             0);
          if ( !System_String__IsNullOrEmpty(ResponseHeader, 0) )
          {
            v5->fields._isSizeChecked_5__14 = 1;
            result = 0;
            System_UInt64__TryParse(ResponseHeader, &result, 0);
            freeSize_5__11 = v5->fields._freeSize_5__11;
            v176 = ManagerConfig_TypeInfo;
            if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
              v176 = ManagerConfig_TypeInfo;
            }
            if ( freeSize_5__11 < result + v176->static_fields->LIMIT_FREE_SIZE )
            {
              v5->fields._isDiskFull_5__15 = 1;
              goto LABEL_209;
            }
          }
        }
        this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
        if ( !this )
          goto LABEL_383;
        v177 = UnityEngine_AsyncOperation__get_progress((UnityEngine_AsyncOperation_o *)this, 0);
        v178 = v5->fields._loadProgress_5__9;
        v179 = v177;
        v180 = UnityEngine_Time__get_unscaledTime(0);
        v82 = v179 == v178;
        v181 = v180;
        if ( !v82 )
        {
          v298 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v298 = ManagerConfig_TypeInfo;
          }
          v299 = v298->static_fields;
          this = (AssetLoader__LoadDataCR_d__29_o *)v5->fields._asyncOperater_5__13;
          v5->fields._requestTime_5__8 = v181 + v299->TIMEOUT;
          if ( !this )
            goto LABEL_383;
          v5->fields._loadProgress_5__9 = UnityEngine_AsyncOperation__get_progress(
                                            (UnityEngine_AsyncOperation_o *)this,
                                            0);
          goto LABEL_382;
        }
        if ( v180 < v5->fields._requestTime_5__8 )
        {
LABEL_382:
          v300 = (Il2CppObject *)v5->fields._wait_5__10;
          v5->fields.__2__current = v300;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C2D434(p__2__current, (int32_t)v300, v172, v173);
          v16 = 5;
          goto LABEL_370;
        }
      }
LABEL_209:
      v5->fields._errorCode_5__6 = 0;
      v182 = &v5->fields._errorCode_5__6;
      sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, 0, v172, v173);
      if ( !_4__this )
        goto LABEL_383;
      if ( v5->fields._isDiskFull_5__15 )
      {
        _4__this->fields.isErrorDialog = 1;
        v269 = StringLiteral_5283/*"Disk full"*/;
        v5->fields._errorCode_5__6 = (struct System_String_o *)StringLiteral_5283/*"Disk full"*/;
        sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._errorCode_5__6, v269, v183, v184);
        LODWORD(v270) = StringLiteral_9244/*"NETWORK_ERROR_DISK_FULL"*/;
        v5->fields._errorLocalizeCode_5__7 = (struct System_String_o *)StringLiteral_9244/*"NETWORK_ERROR_DISK_FULL"*/;
        v271 = (CGThumbnailListItem_o *)&v5->fields._errorLocalizeCode_5__7;
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
        v226 = &StringLiteral_2391/*"AssetStorageList download time over"*/;
        goto LABEL_341;
      }
      v185 = UnityEngine_Networking_UnityWebRequest__get_error(_4__this->fields.loader, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IsNullOrEmpty(v185, 0);
      if ( !_4__this->fields.loader )
        goto LABEL_383;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v272 = UnityEngine_Networking_UnityWebRequest__get_error(_4__this->fields.loader, 0);
        LODWORD(v270) = (_DWORD)v272;
        *v182 = v272;
LABEL_342:
        v271 = (CGThumbnailListItem_o *)&v5->fields._errorCode_5__6;
LABEL_343:
        sub_1C2D434(v271, v270, v188, v189);
        v273 = _4__this->fields.loader;
        if ( v273 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(v273, 0);
          _4__this->fields.loader = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v274, v275);
        }
        if ( !*v182 )
          goto LABEL_369;
        v276 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v276 = ManagerConfig_TypeInfo;
        }
        if ( v276->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          this = (AssetLoader__LoadDataCR_d__29_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v277 = _4__this->fields.data;
          if ( !v277 )
            goto LABEL_383;
          v278 = (CommonUI_o *)this;
          v279 = System_String__Concat_63498116(
                   (System_String_o *)StringLiteral_2378/*"AssetName : "*/,
                   v277->fields.name,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *v182,
                   0);
          v280 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v280, (Il2CppObject *)_4__this, Method_AssetLoader_EndWarningDialog__, 0);
          if ( !v278 )
            goto LABEL_383;
          *(_QWORD *)&effectDistancea.fields.hasValue = 0;
          effectDistancea.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            v278,
            (System_String_o *)StringLiteral_15926/*"[FFFF80]Download error for debug"*/,
            v279,
            v280,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0);
LABEL_352:
          if ( _4__this->fields.isErrorDialog )
          {
            v281 = (Il2CppObject *)v5->fields._wait_5__10;
            v5->fields.__2__current = v281;
            p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)v281, (int32_t)v2, v3);
            v16 = 6;
            goto LABEL_370;
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4C26278 )
        {
          sub_1C2D490(&ManagementManager_TypeInfo);
          byte_4C26278 = 1;
        }
        v282 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v282 = ManagementManager_TypeInfo;
        }
        v283 = v282->static_fields->isDuringStartup;
        v284 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v283 )
        {
          v285 = LocalizationManager__Get((System_String_o *)StringLiteral_2041/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
          v286 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v286, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( !v284 )
            goto LABEL_383;
          CommonUI__OpenRetryBootDialog((CommonUI_o *)v284, (System_String_o *)StringLiteral_1/*""*/, v285, v286, 0, 0);
        }
        else
        {
          v287 = LocalizationManager__Get((System_String_o *)StringLiteral_2042/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
          v288 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v288, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( !v284 )
            goto LABEL_383;
          CommonUI__OpenRetryDialog((CommonUI_o *)v284, (System_String_o *)StringLiteral_1/*""*/, v287, v288, 0, 0);
        }
LABEL_367:
        if ( _4__this->fields.isErrorDialog )
        {
          v289 = (Il2CppObject *)v5->fields._wait_5__10;
          v5->fields.__2__current = v289;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C2D434(p__2__current, (int32_t)v289, (int32_t)v2, v3);
          v16 = 7;
        }
        else
        {
LABEL_369:
          v290 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v290, 1.0, 0);
          v5->fields.__2__current = (Il2CppObject *)v290;
          p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1C2D434(p__2__current, (int32_t)v290, v291, v292);
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
      v187 = CatAndMouseGame__MouseGame3(text, 0);
      if ( System_String__IsNullOrEmpty(v187, 0) )
      {
        v226 = &StringLiteral_2389/*"AssetStorageList download error"*/;
        goto LABEL_341;
      }
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C2D538(char___TypeInfo, 1);
      if ( !this )
        goto LABEL_383;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_267;
      LOWORD(this->fields.__4__this) = -257;
      if ( !v187 )
        goto LABEL_383;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Trim_63514412(v187, (System_Char_array *)this, 0);
      if ( !this )
        goto LABEL_383;
      v190 = this;
      if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25237/*"~"*/, 0) )
        goto LABEL_295;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C2D538(char___TypeInfo, 2);
      if ( !this )
        goto LABEL_383;
      v191 = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !v191 )
        goto LABEL_267;
      LOWORD(this->fields.__4__this) = 13;
      if ( v191 == 1 )
        goto LABEL_267;
      WORD1(this->fields.__4__this) = 10;
      v192 = System_String__IndexOfAny((System_String_o *)v190, (System_Char_array *)this, 0);
      if ( v192 < 2 )
        goto LABEL_295;
      v193 = v192;
      v194 = System_String__Substring_63503788((System_String_o *)v190, 1, v192 - 1, 0);
      v195 = System_String__Substring((System_String_o *)v190, v193 + 1, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_Text_Encoding__get_UTF8(0);
      if ( !this )
        goto LABEL_383;
      v196 = (System_Byte_array *)((__int64 (__fastcall *)(AssetLoader__LoadDataCR_d__29_o *, System_String_o *, void *))this->klass[1]._1.properties)(
                                    this,
                                    v195,
                                    this->klass[1]._1.methods);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v197 = Crc32__Compute(v196, 0);
      if ( System_UInt32__Parse(v194, 0) != v197 )
      {
LABEL_295:
        v226 = &StringLiteral_2388/*"AssetStorageList download data error"*/;
LABEL_341:
        v270 = *v226;
        *v182 = (System_String_o *)*v226;
        goto LABEL_342;
      }
      if ( !v195 )
        goto LABEL_281;
      this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C2D538(char___TypeInfo, 2);
      if ( !this )
        goto LABEL_383;
      v198 = (int)this->fields.__2__current;
      method = (const MethodInfo *)this;
      if ( !v198 || (LOWORD(this->fields.__4__this) = 13, v198 == 1) )
LABEL_267:
        sub_1C2D6F4(this, method, v92);
      WORD1(this->fields.__4__this) = 10;
      this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_63507056(v195, (System_Char_array *)this, 1, 0);
      if ( !this )
        goto LABEL_383;
      v199 = this->fields.__2__current;
      v200 = this;
      v201 = (_DWORD)v199 - 1;
      if ( (int)v199 < 1 )
        goto LABEL_281;
      v202 = 0;
      while ( 2 )
      {
        v203 = (System_String_o *)*((_QWORD *)&v200->fields.__4__this + v202);
        this = (AssetLoader__LoadDataCR_d__29_o *)sub_1C2D538(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_383;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_267;
        LOWORD(this->fields.__4__this) = 44;
        if ( !v203 )
          goto LABEL_383;
        this = (AssetLoader__LoadDataCR_d__29_o *)System_String__Split_63506940(v203, (System_Char_array *)this, 0);
        if ( !this )
          goto LABEL_383;
        v204 = this->fields.__2__current;
        v205 = this;
        if ( (int)v204 >= 1 )
        {
          this = (AssetLoader__LoadDataCR_d__29_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_383;
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_1768/*"@"*/,
                                                      0);
          if ( !LODWORD(v205->fields.__2__current) )
            goto LABEL_267;
          v206 = (char)this;
          this = (AssetLoader__LoadDataCR_d__29_o *)v205->fields.__4__this;
          if ( !this )
            goto LABEL_383;
          if ( (v206 & 1) != 0 )
          {
            v208 = System_String__Substring((System_String_o *)this, 1, 0);
            p_resourceNames = (System_String_o **)&StringLiteral_1/*""*/;
            if ( SLODWORD(v205->fields.__2__current) > 1 )
              p_resourceNames = (System_String_o **)&v205->fields.resourceNames;
            v210 = *p_resourceNames;
            if ( !AssetManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            this = (AssetLoader__LoadDataCR_d__29_o *)AssetManager__CheckVersion(v208, v210, v207);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_281;
            goto LABEL_265;
          }
          this = (AssetLoader__LoadDataCR_d__29_o *)System_String__StartsWith(
                                                      (System_String_o *)this,
                                                      (System_String_o *)StringLiteral_25237/*"~"*/,
                                                      0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !LODWORD(v205->fields.__2__current) )
              goto LABEL_267;
            this = (AssetLoader__LoadDataCR_d__29_o *)v205->fields.__4__this;
            if ( !this )
              goto LABEL_383;
            this = (AssetLoader__LoadDataCR_d__29_o *)System_String__IndexOf((System_String_o *)this, 0x7Eu, 0);
            if ( (_DWORD)this != 1 )
            {
              v204 = v205->fields.__2__current;
              break;
            }
          }
LABEL_265:
          if ( v201 == v202 )
            goto LABEL_281;
          if ( (unsigned int)++v202 >= LODWORD(v200->fields.__2__current) )
            goto LABEL_267;
          continue;
        }
        break;
      }
      if ( (_DWORD)v204 != 5 )
        goto LABEL_281;
      this = *(AssetLoader__LoadDataCR_d__29_o **)&v205->fields._isAutoRetry_5__4;
      if ( !this )
        goto LABEL_383;
      v211 = System_String__Trim((System_String_o *)this, 0);
      this = (AssetLoader__LoadDataCR_d__29_o *)System_UInt32__Parse(v211, 0);
      if ( LODWORD(v205->fields.__2__current) <= 4 )
        goto LABEL_267;
      v212 = (int)this;
      this = (AssetLoader__LoadDataCR_d__29_o *)_4__this->fields.data;
      if ( !this )
        goto LABEL_265;
      this = (AssetLoader__LoadDataCR_d__29_o *)AssetData__IsSame((AssetData_o *)this, v205->fields._errorCode_5__6, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_265;
      v213 = _4__this->fields.data;
      if ( !v213 )
        goto LABEL_383;
      if ( v212 == v213->fields.crc )
      {
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4C26278 )
        {
          sub_1C2D490(&ManagementManager_TypeInfo);
          byte_4C26278 = 1;
        }
        v214 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v214 = ManagementManager_TypeInfo;
        }
        v215 = v214->static_fields->isDuringStartup;
        v216 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v215 )
        {
          v217 = LocalizationManager__Get((System_String_o *)StringLiteral_2041/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
          v218 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v218, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
          if ( v216 )
          {
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v216, (System_String_o *)StringLiteral_1/*""*/, v217, v218, 1, 0);
            goto LABEL_301;
          }
          goto LABEL_383;
        }
        v233 = LocalizationManager__Get((System_String_o *)StringLiteral_2042/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
        v234 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v234, (Il2CppObject *)_4__this, Method_AssetLoader_EndRetryDialog__, 0);
        if ( !v216 )
          goto LABEL_383;
        CommonUI__OpenRetryDialog((CommonUI_o *)v216, (System_String_o *)StringLiteral_1/*""*/, v233, v234, 1, 0);
LABEL_301:
        if ( !_4__this->fields.isErrorDialog )
        {
          v5->fields._url_5__12 = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._url_5__12, 0, (int32_t)v2, v3);
          goto LABEL_303;
        }
        v264 = (Il2CppObject *)v5->fields._wait_5__10;
        v5->fields.__2__current = v264;
        p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
        sub_1C2D434(p__2__current, (int32_t)v264, (int32_t)v2, v3);
        v16 = 9;
        goto LABEL_370;
      }
LABEL_281:
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4C26278 )
      {
        sub_1C2D490(&ManagementManager_TypeInfo);
        byte_4C26278 = 1;
      }
      v219 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v219 = ManagementManager_TypeInfo;
      }
      v220 = v219->static_fields->isDuringStartup;
      v221 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v220 )
          goto LABEL_289;
LABEL_291:
        v222 = &StringLiteral_9234/*"NETWORK_ERROR_ASSET_UPDATE"*/;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( !v220 )
          goto LABEL_291;
LABEL_289:
        v222 = &StringLiteral_9235/*"NETWORK_ERROR_ASSET_UPDATE_BOOT"*/;
      }
      v223 = LocalizationManager__Get((System_String_o *)*v222, 0);
      v224 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v224, (Il2CppObject *)_4__this, Method_AssetLoader_EndRebootDialog__, 0);
      if ( !v221 )
        goto LABEL_383;
      CommonUI__OpenErrorDialog((CommonUI_o *)v221, (System_String_o *)StringLiteral_1/*""*/, v223, v224, 0, 0);
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
      sub_1C2D434(p__2__current, (int32_t)v25, v26, v27);
      v16 = 13;
      goto LABEL_370;
    case 0xD:
      v5->fields.__1__state = -1;
LABEL_38:
      v5->fields._req_5__16 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v5->fields._req_5__16, 0, (int32_t)v2, v3);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_AssetLoader__LoadDataCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C26286 & 1) == 0 )
  {
    sub_1C2D490(&AssetLoader___c_TypeInfo);
    byte_4C26286 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(AssetLoader___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetLoader___c_TypeInfo->static_fields->__9 = (struct AssetLoader___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)AssetLoader___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AssetLoader___c___ctor(AssetLoader___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetLoader___c___LoadDataCR_b__29_0(AssetLoader___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C26287 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4C26287 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  return BYTE4(Instance[7].monitor) == 0;
}