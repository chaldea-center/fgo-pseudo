void __fastcall NetworkManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CGThumbnailListItem_o *static_fields; // x0
  __int64 v10; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct NetworkManager_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct NetworkManager_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct NetworkManager_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct NetworkManager_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct NetworkManager_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CGThumbnailListItem_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct NetworkManager_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct NetworkManager_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct NetworkManager_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  struct NetworkManager_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct NetworkManager_StaticFields *v44; // x0
  int32_t v45; // w1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  struct NetworkManager_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  struct NetworkManager_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w1
  struct NetworkManager_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct NetworkManager_StaticFields *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct NetworkManager_StaticFields *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct NetworkManager_StaticFields *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct NetworkManager_StaticFields *v69; // x8
  int32_t v70; // w1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w1
  CGThumbnailListItem_o *p_dataServerAddress; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w1
  CGThumbnailListItem_o *p_webServerAddress; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  int32_t v81; // w1
  CGThumbnailListItem_o *p_webViewBaseURL; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  System_Collections_Generic_Dictionary_object__object__o *v85; // x19
  CGThumbnailListItem_o *p_webViewAddress; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  int32_t v89; // w1
  CGThumbnailListItem_o *p_AUTHMD5_KEY_TYPE; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w1
  CGThumbnailListItem_o *p_errorDialogResponseData; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  __int64 v97; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v98; // 0:x0.8

  if ( (byte_4A4DCC4 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v1);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v4);
    sub_1B863B8(&NetworkManager_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_14119/*"TheCheckKey"*/, v6);
    sub_1B863B8(&StringLiteral_19201/*"file://"*/, v7);
    sub_1B863B8(&StringLiteral_1/*""*/, v8);
    byte_4A4DCC4 = 1;
  }
  NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME = (struct System_String_o *)StringLiteral_19201/*"file://"*/;
  sub_1B8635C((CGThumbnailListItem_o *)NetworkManager_TypeInfo->static_fields, StringLiteral_19201/*"file://"*/, v2, v3);
  v98.fields._dateData = (uint64_t)&v97;
  NetworkManager_TypeInfo->static_fields->WebCacheTime = 300LL;
  v97 = 0LL;
  System_DateTime___ctor_63035160(v98, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  static_fields = (CGThumbnailListItem_o *)NetworkManager_TypeInfo->static_fields;
  v10 = v97;
  static_fields->fields.sortValue2 = 0LL;
  static_fields = (CGThumbnailListItem_o *)((char *)static_fields + 72);
  *(_QWORD *)&static_fields[-1].fields.isTermination = 0LL;
  *(_QWORD *)&static_fields[-1].fields.basePosition.fields.y = 0LL;
  static_fields[-1].fields.sortValue2B = v10;
  LOBYTE(static_fields[-1].fields.viewObject) = 0;
  *(_QWORD *)&static_fields[-1].fields._Id_k__BackingField = 0LL;
  *(_QWORD *)&static_fields[-1].fields._Type_k__BackingField = -1LL;
  static_fields[-1].fields._ThumbnailSpritePath_k__BackingField = (struct System_String_o *)-1LL;
  sub_1B8635C(static_fields, 0, v11, v12);
  v13 = NetworkManager_TypeInfo->static_fields;
  v13->userCreateServer = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v13->userCreateServer, 0, v14, v15);
  v16 = NetworkManager_TypeInfo->static_fields;
  v16->userId = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v16->userId, 0, v17, v18);
  v19 = NetworkManager_TypeInfo->static_fields;
  v19->authKey = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->authKey, 0, v20, v21);
  v22 = NetworkManager_TypeInfo->static_fields;
  v22->secretKey = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v22->secretKey, 0, v23, v24);
  v25 = NetworkManager_TypeInfo->static_fields;
  v25->userName = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->userName, 0, v26, v27);
  v28 = (CGThumbnailListItem_o *)NetworkManager_TypeInfo->static_fields;
  v28[1].klass = 0LL;
  ++v28;
  *(_QWORD *)&v28[-1].fields._Type_k__BackingField = 0LL;
  LODWORD(v28[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  sub_1B8635C(v28, 0, v29, v30);
  v31 = NetworkManager_TypeInfo->static_fields;
  v31->friendCode = 0LL;
  v31 = (struct NetworkManager_StaticFields *)((char *)v31 + 152);
  LOWORD(v31[-1].errorDialogResponseData) = 1;
  sub_1B8635C((CGThumbnailListItem_o *)v31, 0, v32, v33);
  v34 = NetworkManager_TypeInfo->static_fields;
  v34->registrationVersion = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v34->registrationVersion, 0, v35, v36);
  v37 = NetworkManager_TypeInfo->static_fields;
  v37->registrationId = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v37->registrationId, 0, v38, v39);
  v40 = (int)StringLiteral_1/*""*/;
  v41 = NetworkManager_TypeInfo->static_fields;
  v41->serverSettingType = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v41->serverSettingType, v40, v42, v43);
  v44 = NetworkManager_TypeInfo->static_fields;
  v44->serverSettingSecurity = 0;
  v45 = (int)StringLiteral_1/*""*/;
  v44->gameServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v44->gameServerSettingAddress, v45, v46, v47);
  v48 = (int)StringLiteral_1/*""*/;
  v49 = NetworkManager_TypeInfo->static_fields;
  v49->dataServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v49->dataServerSettingAddress, v48, v50, v51);
  v52 = (int)StringLiteral_1/*""*/;
  v53 = NetworkManager_TypeInfo->static_fields;
  v53->webServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v53->webServerSettingAddress, v52, v54, v55);
  v56 = (int)StringLiteral_1/*""*/;
  v57 = NetworkManager_TypeInfo->static_fields;
  v57->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v57->dataServerFolder, v56, v58, v59);
  v60 = NetworkManager_TypeInfo->static_fields;
  v60->gameServerRedirectAddress = 0LL;
  v60 = (struct NetworkManager_StaticFields *)((char *)v60 + 232);
  LOBYTE(v60[-1].errorDialogResponseData) = 0;
  sub_1B8635C((CGThumbnailListItem_o *)v60, 0, v61, v62);
  v63 = NetworkManager_TypeInfo->static_fields;
  v63->dataServerRedirectAddress = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v63->dataServerRedirectAddress, 0, v64, v65);
  v66 = NetworkManager_TypeInfo->static_fields;
  v66->webServerRedirectAddress = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v66->webServerRedirectAddress, 0, v67, v68);
  v69 = NetworkManager_TypeInfo->static_fields;
  v69->serverSecurity = 0;
  v70 = (int)StringLiteral_1/*""*/;
  v69->gameServerAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v69->gameServerAddress, v70, v71, v72);
  v73 = (int)StringLiteral_1/*""*/;
  p_dataServerAddress = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->dataServerAddress;
  p_dataServerAddress->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1B8635C(p_dataServerAddress, v73, v75, v76);
  v77 = (int)StringLiteral_1/*""*/;
  p_webServerAddress = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->webServerAddress;
  p_webServerAddress->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1B8635C(p_webServerAddress, v77, v79, v80);
  v81 = (int)StringLiteral_1/*""*/;
  p_webViewBaseURL = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1B8635C(p_webViewBaseURL, v81, v83, v84);
  v85 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v85,
    (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  p_webViewAddress = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->webViewAddress;
  p_webViewAddress->klass = (CGThumbnailListItem_c *)v85;
  sub_1B8635C(p_webViewAddress, (int32_t)v85, v87, v88);
  v89 = StringLiteral_14119/*"TheCheckKey"*/;
  p_AUTHMD5_KEY_TYPE = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->AUTHMD5_KEY_TYPE;
  p_AUTHMD5_KEY_TYPE->klass = (CGThumbnailListItem_c *)StringLiteral_14119/*"TheCheckKey"*/;
  sub_1B8635C(p_AUTHMD5_KEY_TYPE, v89, v91, v92);
  v93 = (int)StringLiteral_1/*""*/;
  p_errorDialogResponseData = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->errorDialogResponseData;
  p_errorDialogResponseData->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1B8635C(p_errorDialogResponseData, v93, v95, v96);
}


void __fastcall NetworkManager___ctor(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
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
  System_Collections_Generic_Queue_T__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4A4DD45 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Queue_RequestBase___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_Queue_RequestBase__TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_NetworkManager___ctor__, v6);
    sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A4DD45 = 1;
  }
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.mAndroidApiKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mAndroidApiKey, v8, v2, v3);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.mAndroidProjectId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mAndroidProjectId, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.mIosApplicationId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mIosApplicationId, v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.mMk = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mMk, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.mCv = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mCv, v18, v19, v20);
  v21 = (int)StringLiteral_1/*""*/;
  this->fields.mAuGameServerPublicKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mAuGameServerPublicKey, v21, v22, v23);
  v24 = (System_Collections_Generic_Queue_T__o *)sub_1B86604(System_Collections_Generic_Queue_RequestBase__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v24,
    (const MethodInfo_377128C *)Method_System_Collections_Generic_Queue_RequestBase___ctor__);
  this->fields.communicationWaitList = (struct System_Collections_Generic_Queue_RequestBase__o *)v24;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationWaitList, (int32_t)v24, v25, v26);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3839A98 *)Method_SingletonMonoBehaviour_NetworkManager___ctor__);
}


void __fastcall NetworkManager__AddWaitStatus(NetworkManager_o *this, RequestBase_o *request, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Queue_T__o *communicationWaitList; // x0
  System_Collections_Generic_Queue_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4DD37 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__, request);
    sub_1B863B8(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Queue_RequestBase__Enqueue__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__, v8);
    byte_4A4DD37 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( this->fields.communicationWork != request )
  {
    communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
    if ( !communicationWaitList )
      goto LABEL_12;
    System_Collections_Generic_Queue_object___GetEnumerator(
      &v10,
      communicationWaitList,
      (const MethodInfo_377190C *)Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__);
    while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3398A40 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__) )
    {
      if ( System_Collections_Generic_Queue_Enumerator_object___get_Current(
             &v10,
             (const MethodInfo_3398B30 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__) == (Il2CppObject *)request )
      {
        System_Collections_Generic_Queue_Enumerator_object___Dispose(
          &v10,
          (const MethodInfo_3398A30 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
        return;
      }
    }
    System_Collections_Generic_Queue_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3398A30 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
    communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
    if ( !communicationWaitList )
LABEL_12:
      sub_1B86614(communicationWaitList, request);
    System_Collections_Generic_Queue_object___Enqueue(
      communicationWaitList,
      (Il2CppObject *)request,
      (const MethodInfo_3771854 *)Method_System_Collections_Generic_Queue_RequestBase__Enqueue__);
  }
}


bool __fastcall NetworkManager__CheckServerLimitTime(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_c *v9; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  int64_t Time; // x0
  NetworkManager_c *v12; // x8
  __int64 v13; // x21
  BalanceConfig_c *v14; // x0
  struct NetworkManager_StaticFields *v15; // x8
  System_String_o *v16; // x20
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x5

  if ( (byte_4A4DCD6 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&BalanceConfig_TypeInfo, v3);
    sub_1B863B8(&LocalizationManager_TypeInfo, v4);
    sub_1B863B8(&Method_NetworkManager_OnClickErrorReboot__, v5);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_12357/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v7);
    sub_1B863B8(&StringLiteral_1/*""*/, v8);
    byte_4A4DCD6 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( static_fields->isErrorServerTimeLimitOver )
    return 0;
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = NetworkManager_TypeInfo;
    static_fields = NetworkManager_TypeInfo->static_fields;
  }
  if ( static_fields->isLogin )
  {
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    Time = NetworkManager__getTime((const MethodInfo *)v9);
    v12 = NetworkManager_TypeInfo;
    v13 = Time - NetworkManager_TypeInfo->static_fields->serverTime;
    if ( v13 < 0 )
      goto LABEL_16;
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    if ( v13 > v14->static_fields->ServerTimeOverLimit )
    {
      v12 = NetworkManager_TypeInfo;
LABEL_16:
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = NetworkManager_TypeInfo;
      }
      v15 = v12->static_fields;
      v15->isErrorServerTimeLimitOver = 1;
      v15->isRebootBlock = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12357/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, 0LL);
      v17 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
      NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v16, 0LL, v17, v18);
      return 0;
    }
  }
  return 1;
}


bool __fastcall NetworkManager__CheckUserCreateServer(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  __int64 v3; // x1
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *gameServerAddress; // x0

  if ( (byte_4A4DCBE & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCBE = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v2->static_fields->userCreateServer, 0LL) )
    return 1;
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  gameServerAddress = static_fields->gameServerAddress;
  if ( !gameServerAddress )
    sub_1B86614(0LL, v3);
  return System_String__Equals_61680480(gameServerAddress, static_fields->userCreateServer, 0LL);
}


bool __fastcall NetworkManager__CheckUserCreateServerByPrefix(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  NetworkManager_c *v3; // x0
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  System_String_array *gameServerAddress; // x0
  System_String_o *userCreateServer; // x8
  System_String_array *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x9
  System_String_o *v11; // x8

  if ( (byte_4A4DCBF & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCBF = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  if ( !System_String__IsNullOrEmpty(v2->static_fields->gameServerAddress, 0LL) )
  {
    v3 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v3 = NetworkManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v3->static_fields->userCreateServer, 0LL) )
    {
      v5 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v5 = NetworkManager_TypeInfo;
      }
      gameServerAddress = (System_String_array *)v5->static_fields->gameServerAddress;
      if ( !gameServerAddress )
        goto LABEL_22;
      gameServerAddress = System_String__Split((System_String_o *)gameServerAddress, 0x2Du, 0, 0LL);
      userCreateServer = NetworkManager_TypeInfo->static_fields->userCreateServer;
      if ( !userCreateServer )
        goto LABEL_22;
      v8 = gameServerAddress;
      gameServerAddress = System_String__Split(userCreateServer, 0x2Du, 0, 0LL);
      if ( !v8 )
        goto LABEL_22;
      v9 = *(_QWORD *)&v8->max_length;
      if ( v9 )
      {
        if ( !gameServerAddress )
          goto LABEL_22;
        v10 = *(_QWORD *)&gameServerAddress->max_length;
        if ( v10 )
        {
          if ( !(_DWORD)v9 || !(_DWORD)v10 )
            sub_1B8661C(gameServerAddress, v4);
          v11 = v8->m_Items[0];
          if ( v11 )
            return System_String__Equals_61680480(v11, gameServerAddress->m_Items[0], 0LL);
LABEL_22:
          sub_1B86614(gameServerAddress, v4);
        }
      }
    }
  }
  return 0;
}


void __fastcall NetworkManager__ClearAuth(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct System_String_o *userId; // t1
  struct NetworkManager_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A4DCDC & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&SignedData_TypeInfo, v4);
    byte_4A4DCDC = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  userId = static_fields->userId;
  static_fields = (struct NetworkManager_StaticFields *)((char *)static_fields + 88);
  static_fields->FILE_URL_SCHEME = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)static_fields, 0, v2, v3);
  v8 = NetworkManager_TypeInfo->static_fields;
  v8->userCreateServer = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v8->userCreateServer, 0, v9, v10);
  NetworkManager_TypeInfo->static_fields->userIdNumber = -1LL;
  if ( userId )
  {
    if ( !SignedData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    SignedData__RefreshSigningData(3, 0LL);
  }
}


void __fastcall NetworkManager__ClearTopLoginResult(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.loginResponseResult = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.loginResponseResult, 0, v2, v3);
}


bool __fastcall NetworkManager__CommunicationIsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A4DCC5 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v1);
    byte_4A4DCC5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  return Instance[6].monitor != 0LL;
}


bool __fastcall NetworkManager__CommunicationStart(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *communicationWaitList; // x0
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *v10; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4A4DD38 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Queue_RequestBase__Dequeue__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v3);
    byte_4A4DD38 = 1;
  }
  communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
  if ( !communicationWaitList )
    sub_1B86614(0LL, method);
  if ( communicationWaitList->fields._size < 1 || this->fields.communicationWork )
    return 0;
  v6 = System_Collections_Generic_Queue_object___Dequeue(
         communicationWaitList,
         (const MethodInfo_37719E4 *)Method_System_Collections_Generic_Queue_RequestBase__Dequeue__);
  this->fields.communicationWork = (struct RequestBase_o *)v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationWork, (int32_t)v6, v7, v8);
  v10 = NetworkManager__RequestCR(this, this->fields.communicationWork, 0.0, v9);
  started = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  this->fields.communicationCoroutine = started;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v12, v13);
  return 1;
}


void __fastcall NetworkManager__DeleteAuth(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  System_String_o *OldAuthFileName; // x21
  const MethodInfo *v4; // x1
  System_String_o *AuthFileName; // x20
  const MethodInfo *v6; // x1
  System_String_o *v7; // x19

  if ( (byte_4A4DD09 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD09 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  OldAuthFileName = NetworkManager__getOldAuthFileName((const MethodInfo *)v2);
  AuthFileName = NetworkManager__getAuthFileName(0, v4);
  v7 = NetworkManager__getAuthFileName(1, v6);
  if ( System_IO_File__Exists(OldAuthFileName, 0LL) )
    System_IO_File__Delete(OldAuthFileName, 0LL);
  if ( System_IO_File__Exists(AuthFileName, 0LL) )
    System_IO_File__Delete(AuthFileName, 0LL);
  if ( System_IO_File__Exists(v7, 0LL) )
    System_IO_File__Delete(v7, 0LL);
}


void __fastcall NetworkManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4A4DD08 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD08 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__DeleteAuth((const MethodInfo *)v2);
  NetworkManager__DeleteSignupData(v3);
}


void __fastcall NetworkManager__DeleteSignupData(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  System_String_o *OldSignupFileName; // x21
  System_String_o *SignupFileName; // x20
  System_String_o *FriendCodeFileName; // x19

  if ( (byte_4A4DD0A & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD0A = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  OldSignupFileName = NetworkManager__getOldSignupFileName((const MethodInfo *)v2);
  SignupFileName = NetworkManager__getSignupFileName((const MethodInfo *)OldSignupFileName);
  FriendCodeFileName = NetworkManager__getFriendCodeFileName((const MethodInfo *)SignupFileName);
  if ( System_IO_File__Exists(OldSignupFileName, 0LL) )
    System_IO_File__Delete(OldSignupFileName, 0LL);
  if ( System_IO_File__Exists(SignupFileName, 0LL) )
    System_IO_File__Delete(SignupFileName, 0LL);
  if ( System_IO_File__Exists(FriendCodeFileName, 0LL) )
    System_IO_File__Delete(FriendCodeFileName, 0LL);
}


void __fastcall NetworkManager__EndCloseUserDelete(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  NetworkManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4A4DCFE & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v2);
    byte_4A4DCFE = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->isRebootBlock = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v5);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v6);
}


void __fastcall NetworkManager__EndErrorWebView(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_errorCallbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *errorCallbackFunc; // t1

  errorCallbackFunc = this->fields.errorCallbackFunc;
  p_errorCallbackFunc = (CGThumbnailListItem_o *)&this->fields.errorCallbackFunc;
  v5 = errorCallbackFunc;
  if ( errorCallbackFunc )
  {
    p_errorCallbackFunc->klass = 0LL;
    sub_1B8635C(p_errorCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall NetworkManager__EndGetStoreUrl(NetworkManager_o *this, System_String_o *url, const MethodInfo *method)
{
  if ( (byte_4A4DD00 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, url);
    byte_4A4DD00 = 1;
  }
  if ( url )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__OpenURL(url, 0LL);
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69149480(0LL);
}


void __fastcall NetworkManager__EndLockSync(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4A4DD41 & 1) == 0 )
  {
    sub_1B863B8(&UserServantLockManager_TypeInfo, result);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v5);
    byte_4A4DD41 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22061/*"ok"*/, 0LL) )
  {
    if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    UserServantLockManager__DeleteSaveData(0LL);
    UserServantLockManager__ClearSaveDataList(0LL);
  }
  NetworkManager__OptionSync(this, v6);
}


void __fastcall NetworkManager__EndLogin(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_loginCallbackFunc; // x19
  struct NetworkManager_LoginCallbackFunc_o *v6; // x21
  struct NetworkManager_LoginCallbackFunc_o *loginCallbackFunc; // t1
  NetworkManager_c *v8; // x0
  void *monitor; // x20

  if ( (byte_4A4DD44 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4DD44 = 1;
  }
  loginCallbackFunc = this->fields.loginCallbackFunc;
  p_loginCallbackFunc = (CGThumbnailListItem_o *)&this->fields.loginCallbackFunc;
  v6 = loginCallbackFunc;
  v8 = NetworkManager_TypeInfo;
  monitor = p_loginCallbackFunc->monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  v8->static_fields->isLogin = 1;
  if ( v6 )
  {
    p_loginCallbackFunc->klass = 0LL;
    sub_1B8635C(p_loginCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      monitor,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall NetworkManager__EndOptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A4DD43 & 1) == 0 )
  {
    sub_1B863B8(&OptionManager_TypeInfo, method);
    byte_4A4DD43 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__DeleteOldLocal((const MethodInfo *)v3);
  NetworkManager__EndLogin(this, v4);
}


void __fastcall NetworkManager__EndTopLogin(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  NetworkManager_o *v19; // x0
  const MethodInfo *v20; // x2
  System_Int64_array *Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  Il2CppObject *Request_object; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  System_Int64_array *v29; // x20
  NetworkManager_ResultCallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-50h] BYREF
  int32_t resulta; // [xsp+4Ch] [xbp-24h] BYREF

  if ( (byte_4A4DD40 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_string___, result);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_1B863B8(&Method_NetworkManager_EndLockSync__, v10);
    sub_1B863B8(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___, v11);
    sub_1B863B8(&Method_NetworkManager_getRequest_CardLockSyncRequest___, v12);
    sub_1B863B8(&NetworkManager_TypeInfo, v13);
    sub_1B863B8(&PurchaseBehaviour_TypeInfo, v14);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v16);
    sub_1B863B8(&UserServantLockManager_TypeInfo, v17);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v18);
    byte_4A4DD40 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  resulta = 0;
  this->fields.loginResponseResult = result;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.loginResponseResult, (int32_t)result, (int32_t)method, v3);
  NetworkManager__SetupObfuscatedAccountId(v19, this->fields.loginResponseResult, v20);
  Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  ManagementManager__BuildInfoDisp((ManagementManager_o *)Instance, 1, v23);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0LL);
  Instance = (System_Int64_array *)System_Linq_Enumerable__Any_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)PreparePurchaseShopIdsFromPlayerPrefs,
                                     (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_string___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !PreparePurchaseShopIdsFromPlayerPrefs )
      goto LABEL_31;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v33 = v32;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      if ( System_Int32__TryParse((System_String_o *)v33.fields._current, &resulta, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Request_object = NetworkManager__getRequest_object_(
                           0LL,
                           (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
        if ( !Request_object )
          sub_1B86614(0LL, v26);
        CancelPurchaseByBankRequest__beginRequest((CancelPurchaseByBankRequest_o *)Request_object, resulta, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  if ( UserServantLockManager__ReadData(0LL) )
  {
    if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    Instance = UserServantLockManager__GetLockList(0LL);
    if ( !Instance )
      goto LABEL_31;
    v29 = Instance;
    if ( *(_QWORD *)&Instance->max_length )
    {
      v30 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v30, (Il2CppObject *)this, Method_NetworkManager_EndLockSync__, v31);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (System_Int64_array *)NetworkManager__getRequest_object_(
                                         v30,
                                         (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CardLockSyncRequest___);
      if ( Instance )
      {
        CardLockSyncRequest__beginRequest((CardLockSyncRequest_o *)Instance, v29, 0LL, 0, 0LL);
        return;
      }
LABEL_31:
      sub_1B86614(Instance, v22);
    }
    NetworkManager__EndLockSync(this, (System_String_o *)StringLiteral_22061/*"ok"*/, v28);
  }
  else
  {
    NetworkManager__OptionSync(this, v27);
  }
}


void __fastcall NetworkManager__ErrorDialog(
        NetworkManager_o *this,
        System_String_o *errorTitle,
        System_String_o *errorDetail,
        System_String_o *errorUrl,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Action_o *v16; // x20
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4A4DCF5 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, errorTitle);
    sub_1B863B8(&ErrorDialog_ClickDelegate_TypeInfo, v11);
    sub_1B863B8(&Method_NetworkManager_EndErrorDialog__, v12);
    sub_1B863B8(&Method_NetworkManager_EndErrorWebView__, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B863B8(&WebViewManager_TypeInfo, v15);
    byte_4A4DCF5 = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.errorCallbackFunc,
    (int32_t)callback,
    (int32_t)errorDetail,
    (const MethodInfo *)errorUrl);
  if ( errorUrl )
  {
    v16 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(errorTitle, errorUrl, v16, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v18, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_1B86614(v19, v20);
    CommonUI__OpenErrorDialog((CommonUI_o *)Instance, errorTitle, errorDetail, v18, 0, 0LL);
  }
}


int32_t __fastcall NetworkManager__ExecuteCommand(ResponseData_o *data, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x0
  Il2CppObject *Item; // x0
  __int64 v8; // x1

  if ( (byte_4A4DD36 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v3);
    byte_4A4DD36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v5);
  if ( !data )
    sub_1B86614(Instance, v5);
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)Instance[5].monitor;
  if ( !monitor )
    sub_1B86614(0LL, v5);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           monitor,
           (Il2CppObject *)data->fields.nid,
           (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__);
  if ( !Item )
    sub_1B86614(0LL, v8);
  return ((__int64 (__fastcall *)(Il2CppObject *, ResponseData_o *, Il2CppMethodPointer))Item->klass->vtable[5].method)(
           Item,
           data,
           Item->klass->vtable[6].methodPtr);
}


System_String_o *__fastcall NetworkManager__GetApiCode(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *klass; // x19

  if ( (byte_4A4DD20 & 1) == 0 )
  {
    sub_1B863B8(&CatAndMouseGame_TypeInfo, v1);
    sub_1B863B8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_1B863B8(&StringLiteral_1/*""*/, v3);
    byte_4A4DD20 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v5);
  klass = (System_String_o *)Instance[2].klass;
  if ( System_String__IsNullOrEmpty(klass, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__MouseGame1(klass, 0, 0LL);
}


System_String_o *__fastcall NetworkManager__GetAuthCode(
        System_Collections_Generic_SortedDictionary_string__string__o *headers,
        const MethodInfo *method)
{
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
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
  System_String_o *v17; // x20
  System_String_o *v18; // x19
  System_Collections_Generic_KeyValuePair_TKey__TValue__o Current; // kr00_16
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  NetworkManager_c *v43; // x0
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v44; // x20
  System_Text_UTF8Encoding_o *v45; // x21
  NetworkManager_c *v46; // x0
  System_Byte_array *v47; // x19
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v49; // [xsp+0h] [xbp-C0h] BYREF
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v50; // [xsp+30h] [xbp-90h] BYREF

  v2 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)headers;
  if ( (byte_4A4DCDB & 1) == 0 )
  {
    sub_1B863B8(&System_Convert_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    sub_1B863B8(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__, v10);
    sub_1B863B8(&string___TypeInfo, v11);
    sub_1B863B8(&System_Text_UTF8Encoding_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_1756/*"="*/, v13);
    sub_1B863B8(&StringLiteral_1468/*":"*/, v14);
    sub_1B863B8(&StringLiteral_502/*"&"*/, v15);
    headers = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_1B863B8(&StringLiteral_1/*""*/, v16);
    byte_4A4DCDB = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !v2 )
    goto LABEL_33;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_SortedDictionary_object__object___GetEnumerator(
    &v49,
    v2,
    (const MethodInfo_383A514 *)Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__);
  v50 = v49;
  while ( 1 )
  {
    v18 = v17;
    if ( !System_Collections_Generic_SortedDictionary_Enumerator_object__object___MoveNext(
            &v50,
            (const MethodInfo_33C9EFC *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__) )
      break;
    Current = System_Collections_Generic_SortedDictionary_Enumerator_object__object___get_Current(
                &v50,
                (const MethodInfo_33C9FDC *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__);
    if ( System_String__op_Inequality(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v20 = sub_1B86460(string___TypeInfo, 5LL);
      v24 = v20;
      if ( !v20 )
        sub_1B86614(0LL, v21);
      if ( !*(_DWORD *)(v20 + 24) )
        sub_1B8661C(v20, v21);
      *(_QWORD *)(v20 + 32) = v17;
      sub_1B8635C((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v17, v22, v23);
      if ( *(_DWORD *)(v24 + 24) <= 1u )
        sub_1B8661C(v25, v26);
      v29 = StringLiteral_502/*"&"*/;
      *(_QWORD *)(v24 + 40) = StringLiteral_502/*"&"*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v24 + 40), v29, v27, v28);
      if ( *(_DWORD *)(v24 + 24) <= 2u )
        sub_1B8661C(v30, v31);
      *(_QWORD *)(v24 + 48) = Current.fields.key;
      sub_1B8635C((CGThumbnailListItem_o *)(v24 + 48), (int32_t)Current.fields.key, v32, v33);
      if ( *(_DWORD *)(v24 + 24) <= 3u )
        sub_1B8661C(v34, v35);
      v38 = StringLiteral_1756/*"="*/;
      *(_QWORD *)(v24 + 56) = StringLiteral_1756/*"="*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v24 + 56), v38, v36, v37);
      if ( *(_DWORD *)(v24 + 24) <= 4u )
        sub_1B8661C(v39, v40);
      *(_QWORD *)(v24 + 64) = Current.fields.value;
      sub_1B8635C((CGThumbnailListItem_o *)(v24 + 64), (int32_t)Current.fields.value, v41, v42);
      v17 = System_String__Concat_61685692((System_String_array *)v24, 0LL);
    }
    else
    {
      v17 = System_String__Concat_61685428(
              v17,
              (System_String_o *)Current.fields.key,
              (System_String_o *)StringLiteral_1756/*"="*/,
              (System_String_o *)Current.fields.value,
              0LL);
    }
  }
  System_Collections_Generic_SortedDictionary_Enumerator_object__object___Dispose(
    &v50,
    (const MethodInfo_33C9F6C *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__);
  v43 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v43 = NetworkManager_TypeInfo;
  }
  if ( !v43->static_fields->secretKey )
    return 0LL;
  v44 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1B86604(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v44, 0LL);
  v45 = (System_Text_UTF8Encoding_o *)sub_1B86604(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v45, 0LL);
  v46 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v46 = NetworkManager_TypeInfo;
  }
  headers = (System_Collections_Generic_SortedDictionary_string__string__o *)System_String__Concat_61683424(
                                                                               v18,
                                                                               (System_String_o *)StringLiteral_1468/*":"*/,
                                                                               v46->static_fields->secretKey,
                                                                               0LL);
  if ( !v45
    || (headers = (System_Collections_Generic_SortedDictionary_string__string__o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_Collections_Generic_SortedDictionary_string__string__o *, Il2CppMethodPointer))v45->klass->vtable._18_GetBytes.method)(
                                                                                     v45,
                                                                                     headers,
                                                                                     v45->klass->vtable._19_GetBytes.methodPtr),
        !v44) )
  {
LABEL_33:
    sub_1B86614(headers, method);
  }
  v47 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
          (System_Security_Cryptography_HashAlgorithm_o *)v44,
          (System_Byte_array *)headers,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v44, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v47, 0LL);
}


System_String_o *__fastcall NetworkManager__GetCv(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *klass; // x19

  if ( (byte_4A4DD22 & 1) == 0 )
  {
    sub_1B863B8(&CatAndMouseGame_TypeInfo, v1);
    sub_1B863B8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_1B863B8(&StringLiteral_1/*""*/, v3);
    byte_4A4DD22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v5);
  klass = (System_String_o *)Instance[4].klass;
  if ( System_String__IsNullOrEmpty(klass, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__MouseGame1(klass, 0, 0LL);
}


System_String_o *__fastcall NetworkManager__GetDataServerFolderName(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DD0B & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD0B = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->dataServerFolder;
}


System_String_o *__fastcall NetworkManager__GetDataServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DD16 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD16 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->dataServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetDataServerSetting_39530180(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4A4DD17 & 1) == 0 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, method);
    byte_4A4DD17 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseDataServerAddress;
}


bool __fastcall NetworkManager__GetDebugSlowConnect(const MethodInfo *method)
{
  return 0;
}


System_String_o *__fastcall NetworkManager__GetDispFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  NetworkManager_c *v3; // x0
  System_String_o *friendCode; // x19

  if ( (byte_4A4DCD5 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v2);
    byte_4A4DCD5 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  friendCode = v3->static_fields->friendCode;
  if ( !friendCode )
    return 0LL;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    friendCode = NetworkManager_TypeInfo->static_fields->friendCode;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetNumberFormat_39433948(friendCode, 0LL);
}


System_String_o *__fastcall NetworkManager__GetFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DCD4 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4DCD4 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->friendCode;
}


System_String_o *__fastcall NetworkManager__GetGameServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DD14 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD14 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->gameServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetGameServerSetting_39530004(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4A4DD15 & 1) == 0 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, method);
    byte_4A4DD15 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseGameServerAddress;
}


int64_t __fastcall NetworkManager__GetLastServerTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DCD7 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCD7 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->serverTime;
}


System_String_o *__fastcall NetworkManager__GetMk(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *monitor; // x19

  if ( (byte_4A4DD21 & 1) == 0 )
  {
    sub_1B863B8(&CatAndMouseGame_TypeInfo, v1);
    sub_1B863B8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_1B863B8(&StringLiteral_1/*""*/, v3);
    byte_4A4DD21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v5);
  monitor = (System_String_o *)Instance[3].monitor;
  if ( System_String__IsNullOrEmpty(monitor, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__MouseGame1(monitor, 0, 0LL);
}


bool __fastcall NetworkManager__GetSecurityServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DD11 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD11 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->serverSettingSecurity;
}


bool __fastcall NetworkManager__GetSecurityServerSetting_39529828(System_String_o *type, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4A4DD13 & 1) == 0 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, method);
    byte_4A4DD13 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseNetworkSecurity;
}


System_String_o *__fastcall NetworkManager__GetServerNumber(System_String_o *serverName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 *v13; // x20

  v2 = serverName;
  if ( (byte_4A4DD2E & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_4954/*"DEV"*/, method);
    sub_1B863B8(&StringLiteral_12092/*"STAGING"*/, v3);
    sub_1B863B8(&StringLiteral_12141/*"STG"*/, v4);
    sub_1B863B8(&StringLiteral_15013/*"VERUP"*/, v5);
    sub_1B863B8(&StringLiteral_4952/*"DESIGN"*/, v6);
    sub_1B863B8(&StringLiteral_7339/*"IPADDRESS"*/, v7);
    sub_1B863B8(&StringLiteral_10650/*"QA"*/, v8);
    sub_1B863B8(&StringLiteral_10229/*"PLAN"*/, v9);
    sub_1B863B8(&StringLiteral_8112/*"LIMIT"*/, v10);
    sub_1B863B8(&StringLiteral_10230/*"PLAY"*/, v11);
    serverName = (System_String_o *)sub_1B863B8(&StringLiteral_1/*""*/, v12);
    byte_4A4DD2E = 1;
  }
  if ( !v2 )
    sub_1B86614(serverName, method);
  v13 = &StringLiteral_10650/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10650/*"QA"*/, 0LL) )
    return System_String__Replace_61691724(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_10229/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10229/*"PLAN"*/, 0LL) )
    return System_String__Replace_61691724(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_4954/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4954/*"DEV"*/, 0LL) )
    return System_String__Replace_61691724(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_8112/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8112/*"LIMIT"*/, 0LL) )
    return System_String__Replace_61691724(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_10230/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10230/*"PLAY"*/, 0LL) )
    return System_String__Replace_61691724(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_4952/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4952/*"DESIGN"*/, 0LL) )
    return System_String__Replace_61691724(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_15013/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15013/*"VERUP"*/, 0LL) )
    return System_String__Replace_61691724(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_12141/*"STG"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12141/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12092/*"STAGING"*/, 0LL) )
  {
    return System_String__Replace_61691724(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v13 = &StringLiteral_7339/*"IPADDRESS"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7339/*"IPADDRESS"*/, 0LL) )
    return System_String__Replace_61691724(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall NetworkManager__GetServerSettingType(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DD10 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD10 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->serverSettingType;
}


int64_t __fastcall NetworkManager__GetServerTimeChkMovie(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DCD9 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCD9 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->serverTimeChkMovie;
}


System_String_o *__fastcall NetworkManager__GetServerType(System_String_o *serverName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 *v12; // x20

  v2 = serverName;
  if ( (byte_4A4DD2D & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_4954/*"DEV"*/, method);
    sub_1B863B8(&StringLiteral_12092/*"STAGING"*/, v3);
    sub_1B863B8(&StringLiteral_12141/*"STG"*/, v4);
    sub_1B863B8(&StringLiteral_15013/*"VERUP"*/, v5);
    sub_1B863B8(&StringLiteral_4952/*"DESIGN"*/, v6);
    sub_1B863B8(&StringLiteral_7339/*"IPADDRESS"*/, v7);
    sub_1B863B8(&StringLiteral_10650/*"QA"*/, v8);
    sub_1B863B8(&StringLiteral_10229/*"PLAN"*/, v9);
    sub_1B863B8(&StringLiteral_8112/*"LIMIT"*/, v10);
    serverName = (System_String_o *)sub_1B863B8(&StringLiteral_10230/*"PLAY"*/, v11);
    byte_4A4DD2D = 1;
  }
  if ( !v2 )
    sub_1B86614(serverName, method);
  v12 = &StringLiteral_10650/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10650/*"QA"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10229/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10229/*"PLAN"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4954/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4954/*"DEV"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_8112/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8112/*"LIMIT"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10230/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10230/*"PLAY"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4952/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4952/*"DESIGN"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_15013/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15013/*"VERUP"*/, 0LL) )
    return (System_String_o *)*v12;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12141/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12092/*"STAGING"*/, 0LL) )
  {
    v12 = &StringLiteral_12141/*"STG"*/;
    return (System_String_o *)*v12;
  }
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7339/*"IPADDRESS"*/, 0LL) )
    return (System_String_o *)StringLiteral_7339/*"IPADDRESS"*/;
  else
    return v2;
}


void __fastcall NetworkManager__GetSignup(
        NetworkManager_o *this,
        System_String_o **userName,
        int32_t *genderType,
        int32_t *month,
        int32_t *day,
        const MethodInfo *method)
{
  NetworkManager_c *v10; // x0
  System_String_o *v11; // x1
  struct NetworkManager_StaticFields *static_fields; // x8

  if ( (byte_4A4DCCD & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, userName);
    byte_4A4DCCD = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  v11 = v10->static_fields->userName;
  *userName = v11;
  sub_1B8635C((CGThumbnailListItem_o *)userName, (int32_t)v11, (int32_t)genderType, (const MethodInfo *)month);
  static_fields = NetworkManager_TypeInfo->static_fields;
  *genderType = static_fields->genderType;
  *month = static_fields->month;
  *day = static_fields->day;
}


void __fastcall NetworkManager__GetStoreUrl(
        NetworkManager_o *this,
        System_String_o *storeName,
        System_String_o *id,
        NetworkManager_StoreCallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *updated; // x1

  updated = NetworkManager__RequestApplicationUpdateCR(this, storeName, id, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


int32_t __fastcall NetworkManager__GetTerminalDispState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4A4DCC6 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v2);
    byte_4A4DCC6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 9, 0LL) )
    return 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B073 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    byte_4A4B073 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  return v7->static_fields->_DispState_k__BackingField != 2;
}


System_String_o *__fastcall NetworkManager__GetTopLoginResult(NetworkManager_o *this, const MethodInfo *method)
{
  return this->fields.loginResponseResult;
}


System_String_o *__fastcall NetworkManager__GetWarBoardRuleUrl(int32_t stageId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *BaseUrl; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4DD2C & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_24516/*"webview/warBoard?stageId="*/, v4);
    byte_4A4DD2C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = (Il2CppObject *)NetworkManager__getBaseUrl(0, method);
  v11 = stageId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v6, v7, v8);
  return System_String__Concat_61683176(BaseUrl, (Il2CppObject *)StringLiteral_24516/*"webview/warBoard?stageId="*/, v9, 0LL);
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DD18 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD18 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->webServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting_39530356(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4A4DD19 & 1) == 0 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, method);
    byte_4A4DD19 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseWebServerAddress;
}


void __fastcall NetworkManager__GoToTitleDialog(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_c *v8; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *v10; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x5

  if ( (byte_4A4DCF4 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&LocalizationManager_TypeInfo, v3);
    sub_1B863B8(&Method_NetworkManager_OnClickErrorReboot__, v4);
    sub_1B863B8(&NetworkManager_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_12357/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v6);
    sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A4DCF4 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( !static_fields->isRebootBlock )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = NetworkManager_TypeInfo->static_fields;
    }
    static_fields->isRebootBlock = 1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12357/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, 0LL);
    v11 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
    NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v10, 0LL, v11, v12);
  }
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__Initialize(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4A4DCC8 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager__Initialize_d__83_TypeInfo, method);
    byte_4A4DCC8 = 1;
  }
  v3 = sub_1B86604(NetworkManager__Initialize_d__83_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall NetworkManager__InitializeUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_o *UserAgentString; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  NetworkManager_c *v6; // x8
  System_String_o *v7; // x19
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A4DCC9 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4DCC9 = 1;
  }
  this->fields._isWaitUserAgent_k__BackingField = 0;
  UserAgentString = NetworkServicePluginScript__GetUserAgentString(0LL);
  v6 = NetworkManager_TypeInfo;
  v7 = UserAgentString;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->userAgent = v7;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->userAgent, (int32_t)v7, v4, v5);
}


System_String_o *__fastcall NetworkManager__LoadAuthMd5(
        NetworkManager_o *this,
        System_String_o *fname,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x21
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0

  if ( (byte_4A4DCE0 & 1) == 0 )
  {
    sub_1B863B8(&System_IO_BinaryReader_TypeInfo, fname);
    sub_1B863B8(&EncryptedPlayerPrefs_TypeInfo, v4);
    sub_1B863B8(&System_IDisposable_TypeInfo, v5);
    byte_4A4DCE0 = 1;
  }
  v6 = 0LL;
  if ( System_IO_File__Exists(fname, 0LL) )
  {
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(fname, 0LL);
    v8 = (System_IO_BinaryReader_o *)sub_1B86604(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v8, v7, 0LL);
    if ( !v8 )
      sub_1B86614(v9, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                               v8,
                               v8->klass->vtable._23_ReadChars.methodPtr);
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v6 = EncryptedPlayerPrefs__Md5(v11, 0LL);
    klass = v8->klass;
    v13 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_11;
      }
      v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_11:
      v15 = sub_1BD6B4C(v8, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v15)(v8, *(_QWORD *)(v15 + 8));
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnApplicationPause(NetworkManager_o *this, bool isPause, const MethodInfo *method)
{
  if ( !isPause )
    NetworkManager__CheckServerLimitTime(this, (const MethodInfo *)isPause);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall NetworkManager__OnBackgroundErrorCommunication(
        NetworkManager_o *this,
        RequestBase_o *requestWork,
        System_String_o *errorCode,
        bool forceCommunication,
        const MethodInfo *method)
{
  NetworkManager_o *v8; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  char v11; // w22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  v8 = this;
  if ( (byte_4A4DD3B & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B863B8(&StringLiteral_4588/*"CommunicationStart"*/, requestWork);
    byte_4A4DD3B = 1;
  }
  if ( !requestWork )
    sub_1B86614(this, requestWork);
  v11 = ((__int64 (__fastcall *)(RequestBase_o *, System_String_o *, Il2CppMethodPointer, bool, const MethodInfo *))requestWork->klass->vtable._11_backgroundErrorRequest.method)(
          requestWork,
          errorCode,
          requestWork->klass->vtable._12_backgroundErrorRetry.methodPtr,
          forceCommunication,
          method) | forceCommunication;
  if ( (v11 & 1) != 0 )
  {
    if ( v8->fields.communicationWork == requestWork )
    {
      v8->fields.communicationWorkResponseList = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v8->fields.communicationWorkResponseList, 0, v9, v10);
      v8->fields.communicationWork = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v8->fields.communicationWork, 0, v12, v13);
      v8->fields.communicationCoroutine = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v8->fields.communicationCoroutine, 0, v14, v15);
      if ( v8->fields.cacheRefreshWork )
      {
        v8->fields.cacheRefreshWork = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v8->fields.cacheRefreshWork, 0, v16, v17);
        v8->fields.cacheRefreshWorkResponseList = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v8->fields.cacheRefreshWorkResponseList, 0, v18, v19);
      }
    }
    ((void (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))requestWork->klass->vtable._12_backgroundErrorRetry.method)(
      requestWork,
      requestWork->klass->vtable._13_isAutoRetryRequest.methodPtr);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v8,
      (System_String_o *)StringLiteral_4588/*"CommunicationStart"*/,
      0.0,
      0LL);
  }
  return v11 & 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickErrorDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4A4DD01 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4A4DD01 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69149480(0LL);
}


void __fastcall NetworkManager__OnClickErrorReboot(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagementManager_c *v5; // x0
  NetworkManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A4DCF9 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, method);
    sub_1B863B8(&ManagementManager_TypeInfo, v2);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v4);
    byte_4A4DCF9 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4A4D556 )
  {
    sub_1B863B8(&ManagementManager_TypeInfo, method);
    byte_4A4D556 = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  if ( v5->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_69149480(0LL);
  }
  else
  {
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    v6->static_fields->isRebootBlock = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v8);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickErrorRetryDialog(
        NetworkManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *v11; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ManagementManager_c *v15; // x0
  NetworkManager_c *v16; // x0
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3

  if ( (byte_4A4DCF6 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1B863B8(&ManagementManager_TypeInfo, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v8);
    byte_4A4DCF6 = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationWorkResponseList, 0, (int32_t)method, v3);
  if ( isDecide )
  {
    v11 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v10);
    started = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
    this->fields.communicationCoroutine = started;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v13, v14);
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_4A4D556 )
    {
      sub_1B863B8(&ManagementManager_TypeInfo, v9);
      byte_4A4D556 = 1;
    }
    v15 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v15 = ManagementManager_TypeInfo;
    }
    if ( v15->static_fields->isDuringStartup )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_69149480(0LL);
    }
    else
    {
      v16 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v16 = NetworkManager_TypeInfo;
      }
      v16->static_fields->isRebootBlock = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1B86614(0LL, v18);
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v19);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickErrorRetryDialog_UnityIap(
        NetworkManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  CGThumbnailListItem_o *p_communicationCoroutine; // x0
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3

  if ( (byte_4A4DCF7 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A4DCF7 = 1;
  }
  if ( isDecide )
  {
    this->fields.communicationWorkResponseList = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationWorkResponseList, 0, (int32_t)method, v3);
    v7 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v6);
    started = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
    this->fields.communicationCoroutine = started;
    v11 = (int)started;
    p_communicationCoroutine = (CGThumbnailListItem_o *)&this->fields.communicationCoroutine;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v14);
    CommonUI__CloseRetryDialog((CommonUI_o *)Instance, 0LL);
    NetworkManager__OnEndCommunication(
      this,
      this->fields.communicationWork,
      this->fields.communicationWorkResponseList,
      v15);
    p_communicationCoroutine = (CGThumbnailListItem_o *)&this->fields.communicationWorkResponseList;
    v11 = 0;
    this->fields.communicationWorkResponseList = 0LL;
  }
  sub_1B8635C(p_communicationCoroutine, v11, v9, v10);
}


void __fastcall NetworkManager__OnClickErrorStay(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  NetworkManager__OnEndCommunication(
    this,
    this->fields.communicationWork,
    this->fields.communicationWorkResponseList,
    v2);
}


void __fastcall NetworkManager__OnClickErrorTerminal(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagementManager_c *v5; // x0
  NetworkManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A4DCFA & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, method);
    sub_1B863B8(&ManagementManager_TypeInfo, v2);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v4);
    byte_4A4DCFA = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4A4D556 )
  {
    sub_1B863B8(&ManagementManager_TypeInfo, method);
    byte_4A4D556 = 1;
  }
  v5 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v5 = ManagementManager_TypeInfo;
  }
  if ( v5->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_69149480(0LL);
  }
  else
  {
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    v6->static_fields->isRebootBlock = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v8);
    ManagementManager__reboot((ManagementManager_o *)Instance, 1, 1, v9);
  }
}


void __fastcall NetworkManager__OnClickRefreshTerminal(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Coroutine_o *communicationCoroutine; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4A4DCFB & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_13484/*"TerminalStart"*/, method);
    byte_4A4DCFB = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationWorkResponseList, 0, v2, v3);
  communicationCoroutine = this->fields.communicationCoroutine;
  if ( communicationCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_69342076((UnityEngine_MonoBehaviour_o *)this, communicationCoroutine, 0LL);
  this->fields.communicationWork = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationWork, 0, v5, v6);
  this->fields.communicationCoroutine = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationCoroutine, 0, v8, v9);
  if ( this->fields.cacheRefreshWork )
  {
    this->fields.cacheRefreshWork = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cacheRefreshWork, 0, v10, v11);
    this->fields.cacheRefreshWorkResponseList = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cacheRefreshWorkResponseList, 0, v12, v13);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13484/*"TerminalStart"*/,
    0.0,
    0LL);
}


void __fastcall NetworkManager__OnClickReloadCache(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  struct RequestBase_o *communicationWork; // x1
  RequestBase_o **p_communicationWork; // x20
  struct ResponseData_array *communicationWorkResponseList; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Request_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_IEnumerator_o *v18; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4A4DCF8 & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_TopRefreshRequest___, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v5);
    byte_4A4DCF8 = 1;
  }
  p_communicationWork = &this->fields.communicationWork;
  communicationWork = this->fields.communicationWork;
  this->fields.cacheRefreshWork = communicationWork;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cacheRefreshWork, (int32_t)communicationWork, v2, v3);
  communicationWorkResponseList = this->fields.communicationWorkResponseList;
  this->fields.cacheRefreshWorkResponseList = communicationWorkResponseList;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.cacheRefreshWorkResponseList,
    (int32_t)communicationWorkResponseList,
    v9,
    v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_TopRefreshRequest___);
  *p_communicationWork = (RequestBase_o *)Request_object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationWork, (int32_t)Request_object, v12, v13);
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationWorkResponseList, 0, v14, v15);
  if ( !*p_communicationWork )
    sub_1B86614(0LL, v16);
  RequestBase__addBaseField(*p_communicationWork, 0LL);
  v18 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v17);
  started = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
  this->fields.communicationCoroutine = started;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v20, v21);
}


void __fastcall NetworkManager__OnClickStore(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0

  if ( (byte_4A4DCFF & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, method);
    sub_1B863B8(&ManagerConfig_TypeInfo, v2);
    byte_4A4DCFF = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  WebViewPluginScript__LaunchStore(v3->static_fields->AndroidPackageName, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69149480(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickUserDelete(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  OptionManager_c *v8; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A4DCFD & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&Method_NetworkManager_EndCloseUserDelete__, v5);
    sub_1B863B8(&OptionManager_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4A4DCFD = 1;
  }
  if ( isDecide )
  {
    UserSaveData__DeleteSaveData(1, 0LL);
    v8 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__Initialize((const MethodInfo *)v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_NetworkManager_EndCloseUserDelete__, 0LL);
  if ( !Instance )
    sub_1B86614(v11, v12);
  CommonUI__CloseConfirmDialog_30483660((CommonUI_o *)Instance, v10, 0LL);
}


void __fastcall NetworkManager__OnClickWaitDebugDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isWaitDebugDialog = 0;
}


void __fastcall NetworkManager__OnEndCommunication(
        NetworkManager_o *this,
        RequestBase_o *requestWork,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_array *cacheRefreshWorkResponseList; // x20
  RequestBase_o *v5; // x21
  NetworkManager_o *v6; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  RequestBase_o *cacheRefreshWork; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  cacheRefreshWorkResponseList = responseList;
  v5 = requestWork;
  v6 = this;
  if ( (byte_4A4DD3A & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B863B8(&StringLiteral_4588/*"CommunicationStart"*/, requestWork);
    byte_4A4DD3A = 1;
  }
  if ( v6->fields.communicationWork != v5 )
    goto LABEL_4;
  v6->fields.communicationWorkResponseList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.communicationWorkResponseList, 0, (int32_t)responseList, method);
  v6->fields.communicationWork = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.communicationWork, 0, v7, v8);
  v6->fields.communicationCoroutine = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.communicationCoroutine, 0, v9, v10);
  this = (NetworkManager_o *)&v6->fields.cacheRefreshWork;
  cacheRefreshWork = v6->fields.cacheRefreshWork;
  if ( cacheRefreshWork )
  {
    cacheRefreshWorkResponseList = v6->fields.cacheRefreshWorkResponseList;
    v6->fields.cacheRefreshWork = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)this, 0, v11, v12);
    v6->fields.cacheRefreshWorkResponseList = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.cacheRefreshWorkResponseList, 0, v14, v15);
    v5 = cacheRefreshWork;
  }
  else
  {
LABEL_4:
    if ( !v5 )
      sub_1B86614(this, requestWork);
  }
  ((void (__fastcall *)(RequestBase_o *, ResponseData_array *, Il2CppMethodPointer))v5->klass->vtable._10_requestCompleted.method)(
    v5,
    cacheRefreshWorkResponseList,
    v5->klass->vtable._11_backgroundErrorRequest.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v6, (System_String_o *)StringLiteral_4588/*"CommunicationStart"*/, 0.0, 0LL);
}


bool __fastcall NetworkManager__OnErrorCommunication(
        NetworkManager_o *this,
        RequestBase_o *requestWork,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  NetworkManager_o *v6; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  char v9; // w21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  v6 = this;
  if ( (byte_4A4DD3C & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B863B8(&StringLiteral_4588/*"CommunicationStart"*/, requestWork);
    byte_4A4DD3C = 1;
  }
  if ( !requestWork )
    sub_1B86614(this, requestWork);
  v9 = ((__int64 (__fastcall *)(RequestBase_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))requestWork->klass->vtable._14_errorRequest.method)(
         requestWork,
         errorCode,
         requestWork->klass->vtable._15_errorRetry.methodPtr,
         method);
  if ( (v9 & 1) != 0 )
  {
    if ( v6->fields.communicationWork == requestWork )
    {
      v6->fields.communicationWorkResponseList = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.communicationWorkResponseList, 0, v7, v8);
      v6->fields.communicationWork = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.communicationWork, 0, v10, v11);
      v6->fields.communicationCoroutine = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.communicationCoroutine, 0, v12, v13);
      if ( v6->fields.cacheRefreshWork )
      {
        v6->fields.cacheRefreshWork = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.cacheRefreshWork, 0, v14, v15);
        v6->fields.cacheRefreshWorkResponseList = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.cacheRefreshWorkResponseList, 0, v16, v17);
      }
    }
    ((void (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))requestWork->klass->vtable._15_errorRetry.method)(
      requestWork,
      requestWork->klass->vtable._16_getParameterFileName.methodPtr);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v6,
      (System_String_o *)StringLiteral_4588/*"CommunicationStart"*/,
      0.0,
      0LL);
  }
  return v9 & 1;
}


void __fastcall NetworkManager__OptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  OptionManager_c *v5; // x0
  const MethodInfo *v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4A4DD42 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_NetworkManager_EndOptionSync__, v3);
    sub_1B863B8(&OptionManager_TypeInfo, v4);
    byte_4A4DD42 = 1;
  }
  v5 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__CheckOldLocal((const MethodInfo *)v5) )
  {
    v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_NetworkManager_EndOptionSync__, 0LL);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SaveData(v7, v8);
  }
  else
  {
    NetworkManager__EndLogin(this, v6);
  }
}


System_Collections_Generic_Dictionary_string__string__o *__fastcall NetworkManager__ParseQueryString(
        System_String_o *url,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x19
  void *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w0
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w21

  if ( (byte_4A4DCDA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v3);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v4);
    byte_4A4DCDA = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !url )
    goto LABEL_17;
  v8 = System_String__IndexOf(url, 0x3Fu, 0LL);
  if ( v8 != -1 )
  {
    v6 = System_String__Substring(url, v8 + 1, 0LL);
    if ( !v6 )
      goto LABEL_17;
    v6 = System_String__Split((System_String_o *)v6, 0x26u, 0, 0LL);
    if ( !v6 )
      goto LABEL_17;
    v9 = *((_DWORD *)v6 + 6);
    v10 = v6;
    if ( v9 >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= v9 )
          sub_1B8661C(v6, v7);
        v6 = (void *)*((_QWORD *)v10 + (int)v11 + 4);
        if ( !v6 )
          break;
        v6 = System_String__Split((System_String_o *)v6, 0x3Du, 0, 0LL);
        if ( !v6 )
          break;
        if ( *((_DWORD *)v6 + 6) == 2 )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v5,
            *((Il2CppObject **)v6 + 4),
            *((Il2CppObject **)v6 + 5),
            (const MethodInfo_32CE6CC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
        }
        v9 = *((_DWORD *)v10 + 6);
        if ( (int)++v11 >= v9 )
          return (System_Collections_Generic_Dictionary_string__string__o *)v5;
      }
LABEL_17:
      sub_1B86614(v6, v7);
    }
  }
  return (System_Collections_Generic_Dictionary_string__string__o *)v5;
}


int32_t __fastcall NetworkManager__ReadAuth(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  ManagerConfig_c *v15; // x0
  int32_t v16; // w8
  NetworkManager_o *v17; // x0
  const MethodInfo *v18; // x1
  int v19; // w25
  int v20; // w26
  int32_t v21; // w19
  System_String_o *AuthFileName; // x21
  System_IO_Stream_o *v23; // x22
  System_IO_BinaryReader_o *v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  NetworkManager_c *v29; // x0
  System_String_o *String; // x1
  int v31; // w23
  char v32; // w20
  System_String_o *v33; // x22
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v35; // x1
  System_Collections_Generic_Dictionary_object__object__o *v36; // x22
  Il2CppObject *Item; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x23
  NetworkManager_c *v42; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  struct NetworkManager_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  struct NetworkManager_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x1
  struct NetworkManager_StaticFields *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_IO_BinaryReader_c *klass; // x8
  __int64 v63; // x9
  int32_t *p_offset; // x10
  __int64 v65; // x0

  if ( (byte_4A4DCDD & 1) == 0 )
  {
    sub_1B863B8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B863B8(&CatAndMouseGame_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B863B8(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_1B863B8(&System_IDisposable_TypeInfo, v6);
    sub_1B863B8(&JsonManager_TypeInfo, v7);
    sub_1B863B8(&ManagerConfig_TypeInfo, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&SignedData_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_24217/*"userCreateServer"*/, v11);
    sub_1B863B8(&StringLiteral_16731/*"authKey"*/, v12);
    sub_1B863B8(&StringLiteral_22927/*"secretKey"*/, v13);
    sub_1B863B8(&StringLiteral_24261/*"userId"*/, v14);
    byte_4A4DCDD = 1;
  }
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( v15->static_fields->UseMock )
    return 1;
  v17 = (NetworkManager_o *)NetworkManager__SyncAuth(this, method);
  if ( (_DWORD)v17 == 2 )
    return 6;
  v19 = 0;
  v20 = 5;
  v21 = 1;
  while ( v20 > 0 )
  {
    --v20;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    AuthFileName = NetworkManager__getAuthFileName(v19 & 1, v18);
    v19 ^= 1u;
    v17 = (NetworkManager_o *)System_IO_File__Exists(AuthFileName, 0LL);
    if ( ((unsigned __int8)v17 & 1) != 0 )
    {
      v23 = (System_IO_Stream_o *)System_IO_File__OpenRead(AuthFileName, 0LL);
      v24 = (System_IO_BinaryReader_o *)sub_1B86604(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v24, v23, 0LL);
      if ( !v24 )
        sub_1B86614(v25, v26);
      v27 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._22_ReadString.method)(
                                 v24,
                                 v24->klass->vtable._23_ReadChars.methodPtr);
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      v28 = EncryptedPlayerPrefs__Md5(v27, 0LL);
      v29 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v29 = NetworkManager_TypeInfo;
      }
      String = UnityEngine_PlayerPrefs__GetString(v29->static_fields->AUTHMD5_KEY_TYPE, v28, 0LL);
      if ( System_String__op_Inequality(v28, String, 0LL) )
      {
        v31 = 4;
        v32 = 1;
        v21 = 2;
      }
      else
      {
        if ( !v27 )
          goto LABEL_37;
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        v33 = CatAndMouseGame__MouseGame1(v27, 0, 0LL);
        if ( v33 )
        {
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          Dictionary = JsonManager__getDictionary(v33, 0LL);
          v36 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
          if ( !Dictionary )
            sub_1B86614(0LL, v35);
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                   (Il2CppObject *)StringLiteral_24217/*"userCreateServer"*/,
                   (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            sub_1B86614(0LL, v38);
          v41 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                  Item,
                  Item->klass->vtable[4].methodPtr);
          v42 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v42 = NetworkManager_TypeInfo;
          }
          static_fields = v42->static_fields;
          static_fields->userCreateServer = (struct System_String_o *)v41;
          sub_1B8635C((CGThumbnailListItem_o *)&static_fields->userCreateServer, v41, v39, v40);
          v44 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v36,
                  (Il2CppObject *)StringLiteral_24261/*"userId"*/,
                  (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v44 )
            sub_1B86614(0LL, v45);
          v46 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v44->klass->vtable[3].method)(
                  v44,
                  v44->klass->vtable[4].methodPtr);
          v47 = NetworkManager_TypeInfo->static_fields;
          v47->userId = (struct System_String_o *)v46;
          sub_1B8635C((CGThumbnailListItem_o *)&v47->userId, v46, v48, v49);
          v50 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v36,
                  (Il2CppObject *)StringLiteral_16731/*"authKey"*/,
                  (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v50 )
            sub_1B86614(0LL, v51);
          v52 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v50->klass->vtable[3].method)(
                  v50,
                  v50->klass->vtable[4].methodPtr);
          v53 = NetworkManager_TypeInfo->static_fields;
          v53->authKey = (struct System_String_o *)v52;
          sub_1B8635C((CGThumbnailListItem_o *)&v53->authKey, v52, v54, v55);
          v56 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v36,
                  (Il2CppObject *)StringLiteral_22927/*"secretKey"*/,
                  (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v56 )
            sub_1B86614(0LL, v57);
          v58 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v56->klass->vtable[3].method)(
                  v56,
                  v56->klass->vtable[4].methodPtr);
          v59 = NetworkManager_TypeInfo->static_fields;
          v59->secretKey = (struct System_String_o *)v58;
          sub_1B8635C((CGThumbnailListItem_o *)&v59->secretKey, v58, v60, v61);
          NetworkManager_TypeInfo->static_fields->userIdNumber = System_Int64__Parse(
                                                                   NetworkManager_TypeInfo->static_fields->userId,
                                                                   0LL);
          if ( !SignedData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
          SignedData__RefreshSigningData(3, 0LL);
          v32 = 0;
          v31 = 16;
        }
        else
        {
LABEL_37:
          v31 = 4;
          v32 = 1;
        }
      }
      klass = v24->klass;
      v63 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v63;
          p_offset += 4;
          if ( !v63 )
            goto LABEL_42;
        }
        v65 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_42:
        v65 = sub_1BD6B4C(v24, System_IDisposable_TypeInfo, 0LL);
      }
      v17 = (NetworkManager_o *)(*(__int64 (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v65)(
                                  v24,
                                  *(_QWORD *)(v65 + 8));
      if ( v31 == 16 )
      {
        v16 = 0;
        if ( (v32 & 1) == 0 )
          return v16;
      }
    }
  }
  NetworkManager__ClearAuth(v17, v18);
  return v21;
}


bool __fastcall NetworkManager__ReadFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  NetworkManager_c *v6; // x0
  System_String_o *FriendCodeFileName; // x19
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x20
  NetworkManager_c *v15; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v17; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_4A4DCD1 & 1) == 0 )
  {
    sub_1B863B8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B863B8(&System_IDisposable_TypeInfo, v2);
    sub_1B863B8(&ManagerConfig_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    byte_4A4DCD1 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  FriendCodeFileName = NetworkManager__getFriendCodeFileName((const MethodInfo *)v6);
  if ( !System_IO_File__Exists(FriendCodeFileName, 0LL) )
    return 0;
  v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(FriendCodeFileName, 0LL);
  v9 = (System_IO_BinaryReader_o *)sub_1B86604(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0LL);
  if ( !v9 )
    sub_1B86614(v10, v11);
  v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._22_ReadString.method)(
          v9,
          v9->klass->vtable._23_ReadChars.methodPtr);
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->friendCode = (struct System_String_o *)v14;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->friendCode, v14, v12, v13);
  v17 = 1;
  klass = v9->klass;
  v19 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_16;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v21 = sub_1BD6B4C(v9, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v21)(v9, *(_QWORD *)(v21 + 8));
  return v17;
}


bool __fastcall NetworkManager__ReadOldSignup(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  NetworkManager_c *v6; // x0
  System_String_o *OldSignupFileName; // x19
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x20
  NetworkManager_c *v15; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v17; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_4A4DCCB & 1) == 0 )
  {
    sub_1B863B8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B863B8(&System_IDisposable_TypeInfo, v2);
    sub_1B863B8(&ManagerConfig_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    byte_4A4DCCB = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  OldSignupFileName = NetworkManager__getOldSignupFileName((const MethodInfo *)v6);
  if ( !System_IO_File__Exists(OldSignupFileName, 0LL) )
    return 0;
  v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(OldSignupFileName, 0LL);
  v9 = (System_IO_BinaryReader_o *)sub_1B86604(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0LL);
  if ( !v9 )
    sub_1B86614(v10, v11);
  v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._22_ReadString.method)(
          v9,
          v9->klass->vtable._23_ReadChars.methodPtr);
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->userName = (struct System_String_o *)v14;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->userName, v14, v12, v13);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                         v9,
                                                         v9->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                    v9,
                                                    v9->klass->vtable._16_ReadUInt32.methodPtr);
  v17 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                  v9,
                                                  v9->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v9->klass;
  v19 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_16;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v21 = sub_1BD6B4C(v9, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v21)(v9, *(_QWORD *)(v21 + 8));
  return v17;
}


bool __fastcall NetworkManager__ReadServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  __int64 v4; // x1

  if ( (byte_4A4DD23 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_4943/*"DEFAULT"*/, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4DD23 = 1;
  }
  NetworkManager__SetServerSetting(
    this,
    (System_String_o *)StringLiteral_4943/*"DEFAULT"*/,
    0,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v2);
  return 0;
}


bool __fastcall NetworkManager__ReadSignup(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  NetworkManager_c *v6; // x0
  System_String_o *SignupFileName; // x19
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x20
  NetworkManager_c *v15; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v17; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_4A4DCCC & 1) == 0 )
  {
    sub_1B863B8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B863B8(&System_IDisposable_TypeInfo, v2);
    sub_1B863B8(&ManagerConfig_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    byte_4A4DCCC = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  SignupFileName = NetworkManager__getSignupFileName((const MethodInfo *)v6);
  if ( !System_IO_File__Exists(SignupFileName, 0LL) )
    return 0;
  v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(SignupFileName, 0LL);
  v9 = (System_IO_BinaryReader_o *)sub_1B86604(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0LL);
  if ( !v9 )
    sub_1B86614(v10, v11);
  v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._22_ReadString.method)(
          v9,
          v9->klass->vtable._23_ReadChars.methodPtr);
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->userName = (struct System_String_o *)v14;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->userName, v14, v12, v13);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                         v9,
                                                         v9->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                    v9,
                                                    v9->klass->vtable._16_ReadUInt32.methodPtr);
  v17 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                                                  v9,
                                                  v9->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v9->klass;
  v19 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_16;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v21 = sub_1BD6B4C(v9, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v21)(v9, *(_QWORD *)(v21 + 8));
  return v17;
}


void __fastcall NetworkManager__ReleseService(NetworkManager_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__ReplaceBaseField(RequestBase_o *request, bool isRefreshTime, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *Instance; // x0
  DataManager_c *v13; // x0
  DataManager_c *v14; // x0
  NetworkManager_c *v15; // x0
  int64_t Time; // x0
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  System_Guid_o v19; // [xsp+0h] [xbp-40h] BYREF
  System_Guid_o v20; // 0:x0.16

  if ( (byte_4A4DD33 & 1) == 0 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, isRefreshTime);
    sub_1B863B8(&NetworkManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B863B8(&StringLiteral_18258/*"dateVer"*/, v7);
    sub_1B863B8(&StringLiteral_18245/*"dataVer"*/, v8);
    sub_1B863B8(&StringLiteral_16580/*"appVer"*/, v9);
    sub_1B863B8(&StringLiteral_19995/*"idempotencyKey"*/, v10);
    sub_1B863B8(&StringLiteral_20854/*"lastAccessTime"*/, v11);
    byte_4A4DD33 = 1;
  }
  Instance = ManagerConfig_TypeInfo;
  v19 = (System_Guid_o)0LL;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !request )
    goto LABEL_21;
  RequestBase__replaceField_42289036(
    request,
    (System_String_o *)StringLiteral_16580/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( !byte_4A4BAD6 )
  {
    sub_1B863B8(&DataManager_TypeInfo, isRefreshTime);
    byte_4A4BAD6 = 1;
  }
  v13 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v13 = DataManager_TypeInfo;
  }
  RequestBase__replaceField(request, (System_String_o *)StringLiteral_18245/*"dataVer"*/, v13->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1B86614(Instance, isRefreshTime);
  if ( !byte_4A4BAD7 )
  {
    sub_1B863B8(&DataManager_TypeInfo, isRefreshTime);
    byte_4A4BAD7 = 1;
  }
  v14 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = DataManager_TypeInfo;
  }
  RequestBase__replaceField_42288580(
    request,
    (System_String_o *)StringLiteral_18258/*"dateVer"*/,
    v14->static_fields->dateVersion,
    0LL);
  if ( isRefreshTime )
  {
    v15 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime((const MethodInfo *)v15);
    RequestBase__replaceField_42288580(request, (System_String_o *)StringLiteral_20854/*"lastAccessTime"*/, Time, 0LL);
    v19 = System_Guid__NewGuid(0LL);
    *(_QWORD *)&v20.fields._a = &v19;
    *(_QWORD *)&v20.fields._d = 0LL;
    v18 = System_Guid__ToString(v20, v17);
    RequestBase__replaceField_42289036(request, (System_String_o *)StringLiteral_19995/*"idempotencyKey"*/, v18, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__RequestApplicationUpdateCR(
        NetworkManager_o *this,
        System_String_o *storeName,
        System_String_o *id,
        NetworkManager_StoreCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4A4DD3D & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager__RequestApplicationUpdateCR_d__219_TypeInfo, storeName);
    byte_4A4DD3D = 1;
  }
  v8 = sub_1B86604(NetworkManager__RequestApplicationUpdateCR_d__219_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = storeName;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 32), (int32_t)storeName, v9, v10);
  *(_QWORD *)(v8 + 40) = id;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 40), (int32_t)id, v11, v12);
  *(_QWORD *)(v8 + 48) = callback;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 48), (int32_t)callback, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__RequestCR(
        NetworkManager_o *this,
        RequestBase_o *work,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4DD39 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager__RequestCR_d__214_TypeInfo, work);
    byte_4A4DD39 = 1;
  }
  v7 = sub_1B86604(NetworkManager__RequestCR_d__214_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = work;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)work, v10, v11);
  *(float *)(v7 + 48) = delay;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall NetworkManager__RequestLogin(
        NetworkManager_o *this,
        NetworkManager_LoginCallbackFunc_o *callback,
        bool isEnforce,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  Il2CppObject *Request_object; // x0
  __int64 v13; // x1
  TopLoginRequest_o *v14; // x21
  const MethodInfo *v15; // x1

  if ( (byte_4A4DD3E & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_EndTopLogin__, callback);
    sub_1B863B8(&Method_NetworkManager_getRequest_TopLoginRequest___, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_4A4DD3E = 1;
  }
  this->fields.loginCallbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.loginCallbackFunc, (int32_t)callback, isEnforce, method);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_NetworkManager_EndTopLogin__, v11);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_TopLoginRequest___);
  v14 = (TopLoginRequest_o *)Request_object;
  if ( isEnforce )
  {
    if ( !Request_object )
LABEL_12:
      sub_1B86614(Request_object, v13);
  }
  else
  {
    if ( !Request_object )
      goto LABEL_12;
    if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Request_object->klass->vtable[7].method)(
            Request_object,
            Request_object->klass->vtable[8].methodPtr) & 1) != 0 )
    {
      NetworkManager__EndLogin(this, v15);
      return;
    }
  }
  TopLoginRequest__beginRequest(v14, 0LL);
}


void __fastcall NetworkManager__RequestStart(RequestBase_o *request, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A4DD35 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method);
    byte_4A4DD35 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, v4) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
    {
      NetworkManager__AddWaitStatus((NetworkManager_o *)Instance, request, v5);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( Instance )
      {
        NetworkManager__CommunicationStart((NetworkManager_o *)Instance, v4);
        return;
      }
    }
LABEL_9:
    sub_1B86614(Instance, v4);
  }
}


void __fastcall NetworkManager__SetAuth(
        NetworkManager_o *this,
        System_String_o *userId,
        System_String_o *authKey,
        System_String_o *secretKey,
        const MethodInfo *method)
{
  __int64 v8; // x1
  NetworkManager_c *v9; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct NetworkManager_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4A4DCDE & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, userId);
    sub_1B863B8(&SignedData_TypeInfo, v8);
    byte_4A4DCDE = 1;
  }
  if ( userId )
  {
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->userId = userId;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&static_fields->userId,
      (int32_t)userId,
      (int32_t)authKey,
      (const MethodInfo *)secretKey);
    v11 = NetworkManager_TypeInfo->static_fields;
    v11->authKey = authKey;
    sub_1B8635C((CGThumbnailListItem_o *)&v11->authKey, (int32_t)authKey, v12, v13);
    v14 = NetworkManager_TypeInfo->static_fields;
    v14->secretKey = secretKey;
    sub_1B8635C((CGThumbnailListItem_o *)&v14->secretKey, (int32_t)secretKey, v15, v16);
    NetworkManager_TypeInfo->static_fields->userIdNumber = System_Int64__Parse(
                                                             NetworkManager_TypeInfo->static_fields->userId,
                                                             0LL);
    if ( !SignedData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    SignedData__RefreshSigningData(3, 0LL);
  }
}


void __fastcall NetworkManager__SetBaseField(RequestBase_o *request, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  _DWORD *Instance; // x0
  DataManager_c *v14; // x0
  DataManager_c *v15; // x0
  NetworkManager_c *v16; // x0
  int64_t Time; // x0
  const MethodInfo *v18; // x2
  System_String_o *v19; // x0
  System_Guid_o v20; // [xsp+0h] [xbp-50h] BYREF
  System_Guid_o v21; // 0:x0.16

  if ( (byte_4A4DD31 & 1) == 0 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B863B8(&StringLiteral_18258/*"dateVer"*/, v5);
    sub_1B863B8(&StringLiteral_18245/*"dataVer"*/, v6);
    sub_1B863B8(&StringLiteral_24357/*"verCode"*/, v7);
    sub_1B863B8(&StringLiteral_16580/*"appVer"*/, v8);
    sub_1B863B8(&StringLiteral_19995/*"idempotencyKey"*/, v9);
    sub_1B863B8(&StringLiteral_16731/*"authKey"*/, v10);
    sub_1B863B8(&StringLiteral_24261/*"userId"*/, v11);
    sub_1B863B8(&StringLiteral_20854/*"lastAccessTime"*/, v12);
    byte_4A4DD31 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  v20 = (System_Guid_o)0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( *(_QWORD *)(*((_QWORD *)Instance + 23) + 88LL) )
  {
    if ( !Instance[56] )
      j_il2cpp_runtime_class_init_0(Instance);
    if ( !request )
LABEL_26:
      sub_1B86614(Instance, method);
    RequestBase__addField_42282000(
      request,
      (System_String_o *)StringLiteral_24261/*"userId"*/,
      NetworkManager_TypeInfo->static_fields->userId,
      0LL);
    RequestBase__addField_42282000(
      request,
      (System_String_o *)StringLiteral_16731/*"authKey"*/,
      NetworkManager_TypeInfo->static_fields->authKey,
      0LL);
  }
  Instance = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !request )
    goto LABEL_26;
  RequestBase__addField_42282000(
    request,
    (System_String_o *)StringLiteral_16580/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  if ( !byte_4A4BAD6 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    byte_4A4BAD6 = 1;
  }
  v14 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = DataManager_TypeInfo;
  }
  RequestBase__addField(request, (System_String_o *)StringLiteral_18245/*"dataVer"*/, v14->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  if ( !byte_4A4BAD7 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    byte_4A4BAD7 = 1;
  }
  v15 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = DataManager_TypeInfo;
  }
  RequestBase__addField_42287768(request, (System_String_o *)StringLiteral_18258/*"dateVer"*/, v15->static_fields->dateVersion, 0LL);
  v16 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime((const MethodInfo *)v16);
  RequestBase__addField_42287768(request, (System_String_o *)StringLiteral_20854/*"lastAccessTime"*/, Time, 0LL);
  RequestBase__addField_42282000(
    request,
    (System_String_o *)StringLiteral_24357/*"verCode"*/,
    ManagerConfig_TypeInfo->static_fields->verCode,
    0LL);
  v20 = System_Guid__NewGuid(0LL);
  *(_QWORD *)&v21.fields._a = &v20;
  *(_QWORD *)&v21.fields._d = 0LL;
  v19 = System_Guid__ToString(v21, v18);
  RequestBase__addField_42282000(request, (System_String_o *)StringLiteral_19995/*"idempotencyKey"*/, v19, 0LL);
}


void __fastcall NetworkManager__SetDataServerFolderName(System_String_o *folderName, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  NetworkManager_c *v6; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A4DD0C & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A4DD0C = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !folderName )
    folderName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->dataServerFolder = folderName;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->dataServerFolder, (int32_t)folderName, v2, v3);
}


void __fastcall NetworkManager__SetDataServerRedirect(System_String_o *address, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A4DD0E & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4DD0E = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->dataServerRedirectAddress = address;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->dataServerRedirectAddress, (int32_t)address, v2, v3);
}


void __fastcall NetworkManager__SetDebugSlowConnect(bool flag, const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__SetDeviceInfoField(RequestBase_o *request, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *deviceModel; // x20
  Il2CppObject *operatingSystem; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4A4DD34 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_18383/*"deviceInfo"*/, method);
    sub_1B863B8(&StringLiteral_24829/*"{0} / {1}"*/, v3);
    byte_4A4DD34 = 1;
  }
  deviceModel = (Il2CppObject *)UnityEngine_SystemInfo__get_deviceModel(0LL);
  operatingSystem = (Il2CppObject *)UnityEngine_SystemInfo__get_operatingSystem(0LL);
  v6 = System_String__Format_61686468((System_String_o *)StringLiteral_24829/*"{0} / {1}"*/, deviceModel, operatingSystem, 0LL);
  if ( !request )
    sub_1B86614(v6, v7);
  RequestBase__addField_42282000(request, (System_String_o *)StringLiteral_18383/*"deviceInfo"*/, v6, 0LL);
}


void __fastcall NetworkManager__SetFriendCode(
        NetworkManager_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A4DCD2 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, friendCode);
    byte_4A4DCD2 = 1;
  }
  if ( friendCode )
  {
    v5 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v5 = NetworkManager_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->friendCode = friendCode;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->friendCode, (int32_t)friendCode, (int32_t)method, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__SetGameServerRedirect(
        System_String_o *address,
        bool isSecurity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  NetworkManager_c *v6; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A4DD0D & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, isSecurity);
    byte_4A4DD0D = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->gameServerRedirectAddress = address;
  static_fields = (struct NetworkManager_StaticFields *)((char *)static_fields + 232);
  LOBYTE(static_fields[-1].errorDialogResponseData) = isSecurity;
  sub_1B8635C((CGThumbnailListItem_o *)static_fields, (int32_t)address, (int32_t)method, v3);
}


void __fastcall NetworkManager__SetSecurityServerSetting(bool security, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4A4DD12 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4DD12 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->serverSettingSecurity = security;
}


void __fastcall NetworkManager__SetServerSetting(
        NetworkManager_o *this,
        System_String_o *type,
        bool isSecuritey,
        System_String_o *gameAddress,
        System_String_o *dataAddress,
        System_String_o *webAddress,
        const MethodInfo *method)
{
  NetworkManager_c *v13; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *v15; // x0
  char v16; // w2
  const MethodInfo *v17; // x3
  struct NetworkManager_StaticFields *v18; // x0
  char v19; // w2
  const MethodInfo *v20; // x3
  struct NetworkManager_StaticFields *v21; // x0
  char v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1

  if ( (byte_4A4DD24 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, type);
    byte_4A4DD24 = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->serverSettingType = type;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->serverSettingType,
    (int32_t)type,
    isSecuritey,
    (const MethodInfo *)gameAddress);
  v15 = (CGThumbnailListItem_o *)NetworkManager_TypeInfo->static_fields;
  v15[1].fields.sortStr1 = gameAddress;
  v15 = (CGThumbnailListItem_o *)((char *)v15 + 192);
  LOBYTE(v15[-1].fields._ThumbnailSpritePath_k__BackingField) = isSecuritey;
  sub_1B8635C(v15, (int32_t)gameAddress, v16, v17);
  v18 = NetworkManager_TypeInfo->static_fields;
  v18->dataServerSettingAddress = dataAddress;
  sub_1B8635C((CGThumbnailListItem_o *)&v18->dataServerSettingAddress, (int32_t)dataAddress, v19, v20);
  v21 = NetworkManager_TypeInfo->static_fields;
  v21->webServerSettingAddress = webAddress;
  sub_1B8635C((CGThumbnailListItem_o *)&v21->webServerSettingAddress, (int32_t)webAddress, v22, v23);
  NetworkManager__SetServerSetting_39498476(this, v24);
}


void __fastcall NetworkManager__SetServerSetting_39498476(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  struct NetworkManager_StaticFields *static_fields; // x8
  struct System_String_o *gameServerRedirectAddress; // x19
  System_String_o **p_gameServerRedirectAddress; // x8
  ManagerConfig_c *v7; // x0
  System_String_o *v8; // x1
  CGThumbnailListItem_o *p_gameServerAddress; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  NetworkManager_c *IsOnline; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w1
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct NetworkManager_StaticFields *v18; // x8
  struct System_String_o *webServerRedirectAddress; // x19
  struct System_String_o **p_webServerRedirectAddress; // x9
  ManagerConfig_c *v21; // x0
  struct System_String_o *v22; // x1

  if ( (byte_4A4DD25 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v3);
    byte_4A4DD25 = 1;
  }
  if ( NetworkManager_TypeInfo->_2.cctor_finished )
  {
    static_fields = NetworkManager_TypeInfo->static_fields;
    if ( !static_fields->gameServerRedirectAddress )
      goto LABEL_12;
LABEL_11:
    static_fields->serverSecurity = static_fields->serverRedirectSecurity;
    p_gameServerRedirectAddress = &static_fields->gameServerRedirectAddress;
    goto LABEL_21;
  }
  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  static_fields = NetworkManager_TypeInfo->static_fields;
  gameServerRedirectAddress = static_fields->gameServerRedirectAddress;
  if ( NetworkManager_TypeInfo->_2.cctor_finished )
  {
    if ( !gameServerRedirectAddress )
      goto LABEL_12;
    goto LABEL_11;
  }
  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( gameServerRedirectAddress )
  {
    static_fields = NetworkManager_TypeInfo->static_fields;
    goto LABEL_11;
  }
LABEL_12:
  if ( !byte_4A4BBDF )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, method);
    byte_4A4BBDF = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  NetworkManager_TypeInfo->static_fields->serverSecurity = v7->static_fields->ReleaseNetworkSecurity;
  if ( !byte_4A4BBE0 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, method);
    v7 = ManagerConfig_TypeInfo;
    byte_4A4BBE0 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = ManagerConfig_TypeInfo;
  }
  p_gameServerRedirectAddress = &v7->static_fields->ReleaseGameServerAddress;
LABEL_21:
  v8 = System_String__Concat_61645176(*p_gameServerRedirectAddress, (System_String_o *)StringLiteral_1058/*"/"*/, 0LL);
  p_gameServerAddress = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->gameServerAddress;
  p_gameServerAddress->klass = (CGThumbnailListItem_c *)v8;
  sub_1B8635C(p_gameServerAddress, (int32_t)v8, v10, v11);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  IsOnline = (NetworkManager_c *)AssetManager__get_IsOnline(0LL);
  if ( ((unsigned __int8)IsOnline & 1) != 0 )
  {
    IsOnline = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      IsOnline = NetworkManager_TypeInfo;
    }
    if ( IsOnline->static_fields->dataServerRedirectAddress )
      v14 = 3;
    else
      v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  NetworkManager__setupDataServerAddress((NetworkManager_o *)IsOnline, v14, v13);
  if ( NetworkManager_TypeInfo->_2.cctor_finished )
  {
    v18 = NetworkManager_TypeInfo->static_fields;
    if ( !v18->webServerRedirectAddress )
      goto LABEL_39;
LABEL_38:
    p_webServerRedirectAddress = &v18->webServerRedirectAddress;
    goto LABEL_44;
  }
  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v18 = NetworkManager_TypeInfo->static_fields;
  webServerRedirectAddress = v18->webServerRedirectAddress;
  if ( NetworkManager_TypeInfo->_2.cctor_finished )
  {
    if ( !webServerRedirectAddress )
      goto LABEL_39;
    goto LABEL_38;
  }
  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( webServerRedirectAddress )
  {
    v18 = NetworkManager_TypeInfo->static_fields;
    goto LABEL_38;
  }
LABEL_39:
  if ( !byte_4A4BBE2 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, v15);
    byte_4A4BBE2 = 1;
  }
  v21 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v21 = ManagerConfig_TypeInfo;
  }
  v18 = NetworkManager_TypeInfo->static_fields;
  p_webServerRedirectAddress = &v21->static_fields->ReleaseWebServerAddress;
LABEL_44:
  v22 = *p_webServerRedirectAddress;
  v18->webServerAddress = *p_webServerRedirectAddress;
  sub_1B8635C((CGThumbnailListItem_o *)&v18->webServerAddress, (int32_t)v22, v16, v17);
}


void __fastcall NetworkManager__SetServerTimeChkMovie(int64_t serverTimeChkMovie, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4A4DCD8 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4DCD8 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->serverTimeChkMovie = serverTimeChkMovie;
}


void __fastcall NetworkManager__SetSignatureField(RequestBase_o *request, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *SignedPackData; // x0
  __int64 v7; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *key; // x20
  System_String_o *v9; // x0
  SignedData_SignedPackData_o *outData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4DD32 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    sub_1B863B8(&SignedData_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_19995/*"idempotencyKey"*/, v4);
    sub_1B863B8(&StringLiteral_19996/*"idempotencyKeySignature"*/, v5);
    byte_4A4DD32 = 1;
  }
  outData = 0LL;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedPackData = (System_String_o *)SignedData__GetSignedPackData(&outData, 0LL);
  if ( ((unsigned __int8)SignedPackData & 1) != 0 )
    goto LABEL_19;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(1, 0LL);
  SignedPackData = (System_String_o *)SignedData__GetSignedPackData(&outData, 0LL);
  if ( ((unsigned __int8)SignedPackData & 1) != 0 )
  {
LABEL_19:
    if ( !outData )
      goto LABEL_16;
    key = outData->fields.key;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    SignedPackData = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47470088(key, 0LL);
    if ( !request
      || (RequestBase__replaceField_42289036(request, (System_String_o *)StringLiteral_19995/*"idempotencyKey"*/, SignedPackData, 0LL),
          !outData) )
    {
LABEL_16:
      sub_1B86614(SignedPackData, v7);
    }
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47470088(outData->fields.value, 0LL);
    RequestBase__addField_42282000(request, (System_String_o *)StringLiteral_19996/*"idempotencyKeySignature"*/, v9, 0LL);
  }
}


void __fastcall NetworkManager__SetSignup(
        NetworkManager_o *this,
        System_String_o *userName,
        int32_t genderType,
        const MethodInfo *method)
{
  NetworkManager_c *v6; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A4DCCE & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, userName);
    byte_4A4DCCE = 1;
  }
  if ( userName )
  {
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->userName = userName;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->userName, (int32_t)userName, genderType, method);
    NetworkManager_TypeInfo->static_fields->genderType = genderType;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__SetSignup_39512564(
        NetworkManager_o *this,
        System_String_o *userName,
        int32_t genderType,
        int32_t month,
        int32_t day,
        const MethodInfo *method)
{
  NetworkManager_c *v10; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v12; // x8

  if ( (byte_4A4DCCF & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, userName);
    byte_4A4DCCF = 1;
  }
  if ( userName )
  {
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->userName = userName;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&static_fields->userName,
      (int32_t)userName,
      genderType,
      *(const MethodInfo **)&month);
    v12 = NetworkManager_TypeInfo->static_fields;
    v12->genderType = genderType;
    v12->month = month;
    v12->day = day;
  }
}


void __fastcall NetworkManager__SetUserAgent(
        NetworkManager_o *this,
        System_String_o *userAgent,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  NetworkManager_c *v6; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A4DCCA & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, userAgent);
    byte_4A4DCCA = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->userAgent = userAgent;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->userAgent, (int32_t)userAgent, (int32_t)method, v3);
  this->fields._isWaitUserAgent_k__BackingField = 0;
}


void __fastcall NetworkManager__SetWebServerRedirect(System_String_o *address, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A4DD0F & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4DD0F = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webServerRedirectAddress = address;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->webServerRedirectAddress, (int32_t)address, v2, v3);
}


void __fastcall NetworkManager__SetupObfuscatedAccountId(
        NetworkManager_o *this,
        System_String_o *loginResultStr,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  bool IsObfuscatedAccountIdCached; // w0
  Il2CppObject *v7; // x0
  System_String_o *monitor; // x19

  if ( (byte_4A4DD3F & 1) == 0 )
  {
    sub_1B863B8(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, loginResultStr);
    sub_1B863B8(&JsonManager_TypeInfo, v4);
    sub_1B863B8(&PurchaseBehaviour_TypeInfo, v5);
    byte_4A4DD3F = 1;
  }
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  IsObfuscatedAccountIdCached = PurchaseBehaviour__IsObfuscatedAccountIdCached(0LL);
  if ( loginResultStr && !IsObfuscatedAccountIdCached )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = JsonManager__Deserialize_object_(
           (Il2CppObject *)loginResultStr,
           (const MethodInfo_2FD86EC *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    if ( v7 )
    {
      monitor = (System_String_o *)v7[7].monitor;
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      PurchaseBehaviour__SetCachedObfuscatedAccountId(monitor, 0LL);
    }
  }
}


void __fastcall NetworkManager__Start(NetworkManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = NetworkManager__TimeUpdate(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall NetworkManager__SwitchingDebugSlowConnect(const MethodInfo *method)
{
  ;
}


int32_t __fastcall NetworkManager__SyncAuth(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int v8; // w23
  NetworkManager_c *v9; // x0
  System_String_o *String; // x24
  const MethodInfo *v11; // x1
  NetworkManager_o *AuthFileName; // x0
  const MethodInfo *v13; // x2
  System_String_o *AuthMd5; // x26
  const MethodInfo *v15; // x1
  NetworkManager_o *v16; // x0
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  const MethodInfo *v19; // x1
  System_String_o *v20; // x25
  System_String_o *v21; // x25
  const MethodInfo *v22; // x1
  System_String_o *v23; // x0
  const MethodInfo *v24; // x1
  NetworkManager_o *v25; // x0
  const MethodInfo *v26; // x2
  NetworkManager_c *v27; // x0
  const MethodInfo *v28; // x1
  System_String_o *v29; // x24
  const MethodInfo *v30; // x1
  System_String_o *v31; // x0
  NetworkManager_c *v32; // x0
  NetworkManager_o *OldAuthFileName; // x0
  const MethodInfo *v34; // x2
  NetworkManager_c *v35; // x0
  System_String_o *v36; // x24
  const MethodInfo *v37; // x1
  System_String_o *v38; // x0
  NetworkManager_o *v39; // x0
  const MethodInfo *v40; // x1
  _BOOL8 OldSignup; // x0
  const MethodInfo *v42; // x1
  NetworkManager_c *v43; // x0
  System_String_o *OldSignupFileName; // x0
  Il2CppObject *Instance; // x0
  __int64 v46; // x1
  Il2CppObject *v47; // x0
  __int64 v48; // x1
  System_String_o *OldPaymentFileName; // x0
  System_String_o *OldUnityPersistentDataPath; // x0
  System_String_o *v51; // x26
  System_String_o *FileNameNotConverted; // x1
  NetworkManager_o *v53; // x0
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  System_String_o *v57; // x24
  const MethodInfo *v58; // x1
  System_String_o *v59; // x0
  System_String_o *v61; // x26
  const MethodInfo *v62; // x1
  System_String_o *v63; // x0
  const MethodInfo *v64; // x1
  NetworkManager_o *v65; // x0
  const MethodInfo *v66; // x2

  if ( (byte_4A4DCDF & 1) == 0 )
  {
    sub_1B863B8(&AccountingManager_TypeInfo, method);
    sub_1B863B8(&AndroidUtil_TypeInfo, v2);
    sub_1B863B8(&DatFileName_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AccountingManager__get_Instance__, v5);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v6);
    sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A4DCDF = 1;
  }
  v8 = -10;
  while ( 1 )
  {
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v9->static_fields->AUTHMD5_KEY_TYPE,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
    AuthFileName = (NetworkManager_o *)NetworkManager__getAuthFileName(0, v11);
    AuthMd5 = NetworkManager__LoadAuthMd5(AuthFileName, (System_String_o *)AuthFileName, v13);
    v16 = (NetworkManager_o *)NetworkManager__getAuthFileName(1, v15);
    v18 = NetworkManager__LoadAuthMd5(v16, (System_String_o *)v16, v17);
    v20 = v18;
    if ( AuthMd5 )
    {
      if ( !v18 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v21 = NetworkManager__getAuthFileName(0, v19);
        v23 = NetworkManager__getAuthFileName(1, v22);
        System_IO_File__Copy_62511964(v21, v23, 1, 0LL);
        v25 = (NetworkManager_o *)NetworkManager__getAuthFileName(1, v24);
        v20 = NetworkManager__LoadAuthMd5(v25, (System_String_o *)v25, v26);
      }
      goto LABEL_11;
    }
    v32 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    OldAuthFileName = (NetworkManager_o *)NetworkManager__getOldAuthFileName((const MethodInfo *)v32);
    if ( NetworkManager__LoadAuthMd5(OldAuthFileName, (System_String_o *)OldAuthFileName, v34) )
    {
      v35 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v36 = NetworkManager__getOldAuthFileName((const MethodInfo *)v35);
      v38 = NetworkManager__getAuthFileName(0, v37);
      System_IO_File__Copy_62511964(v36, v38, 1, 0LL);
      OldSignup = NetworkManager__ReadOldSignup(v39, v40);
      if ( OldSignup )
      {
        NetworkManager__WriteSignup((NetworkManager_o *)OldSignup, v42);
        v43 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        OldSignupFileName = NetworkManager__getOldSignupFileName((const MethodInfo *)v43);
        System_IO_File__Delete(OldSignupFileName, 0LL);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
      if ( !Instance )
        sub_1B86614(0LL, v46);
      if ( AccountingManager__ReadOldPayment((AccountingManager_o *)Instance, 0LL) )
      {
        v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
        if ( !v47 )
          sub_1B86614(0LL, v48);
        AccountingManager__WritePayment((AccountingManager_o *)v47, 0LL);
        if ( !AccountingManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
        OldPaymentFileName = AccountingManager__GetOldPaymentFileName(0LL);
        System_IO_File__Delete(OldPaymentFileName, 0LL);
      }
      goto LABEL_50;
    }
    if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
    OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
    v51 = System_String__Concat_61645176(OldUnityPersistentDataPath, (System_String_o *)StringLiteral_1058/*"/"*/, 0LL);
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    FileNameNotConverted = DatFileName__getFileNameNotConverted(16, 0LL);
    v53 = (NetworkManager_o *)System_String__Concat_61645176(v51, FileNameNotConverted, 0LL);
    if ( NetworkManager__LoadAuthMd5(v53, (System_String_o *)v53, v54) )
    {
      if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
      AndroidUtil__TransitionDatFile(16, 0LL);
      AndroidUtil__TransitionDatFile(18, 0LL);
      AndroidUtil__TransitionDatFile(21, 0LL);
      goto LABEL_50;
    }
    if ( !v20 )
      return 1;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v61 = NetworkManager__getAuthFileName(1, v55);
    v63 = NetworkManager__getAuthFileName(0, v62);
    System_IO_File__Copy_62511964(v61, v63, 1, 0LL);
    v65 = (NetworkManager_o *)NetworkManager__getAuthFileName(0, v64);
    AuthMd5 = NetworkManager__LoadAuthMd5(v65, (System_String_o *)v65, v66);
LABEL_11:
    if ( System_String__op_Equality(AuthMd5, v20, 0LL) && System_String__op_Equality(AuthMd5, String, 0LL) )
      return 0;
    if ( System_String__op_Equality(AuthMd5, v20, 0LL) && System_String__op_Inequality(AuthMd5, String, 0LL) )
    {
      v27 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v27 = NetworkManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v27->static_fields->AUTHMD5_KEY_TYPE, AuthMd5, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    else if ( System_String__op_Inequality(AuthMd5, v20, 0LL) )
    {
      if ( System_String__op_Equality(AuthMd5, String, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v29 = NetworkManager__getAuthFileName(0, v28);
        v31 = NetworkManager__getAuthFileName(1, v30);
        System_IO_File__Copy_62511964(v29, v31, 1, 0LL);
      }
      else
      {
        if ( !System_String__op_Equality(v20, String, 0LL) )
          return 2;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v57 = NetworkManager__getAuthFileName(1, v56);
        v59 = NetworkManager__getAuthFileName(0, v58);
        System_IO_File__Copy_62511964(v57, v59, 1, 0LL);
      }
    }
LABEL_50:
    if ( __CFADD__(v8++, 1) )
      return 0;
  }
}


void __fastcall NetworkManager__TerminalStart(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  bool IsDispConnectMask; // w19

  if ( (byte_4A4DCFC & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4A4DCFC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (IsDispConnectMask = CommonUI__IsDispConnectMask((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__InitConnect((CommonUI_o *)Instance, 0LL),
        TopHomeRequest__clearExpirationDate(0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B86614(Instance, v4);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, IsDispConnectMask, 0LL);
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__TimeUpdate(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4A4DCC7 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager__TimeUpdate_d__82_TypeInfo, method);
    byte_4A4DCC7 = 1;
  }
  v2 = sub_1B86604(NetworkManager__TimeUpdate_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void __fastcall NetworkManager__WarningDialog(
        NetworkManager_o *this,
        System_String_o *errorTitle,
        System_String_o *errorDetail,
        System_String_o *errorUrl,
        int32_t errorType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Action_o *v18; // x20
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v20; // x24
  __int64 v21; // x0
  __int64 v22; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]

  if ( (byte_4A4DCF3 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, errorTitle);
    sub_1B863B8(&ErrorDialog_ClickDelegate_TypeInfo, v13);
    sub_1B863B8(&Method_NetworkManager_EndErrorDialog__, v14);
    sub_1B863B8(&Method_NetworkManager_EndErrorWebView__, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B863B8(&WebViewManager_TypeInfo, v17);
    byte_4A4DCF3 = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.errorCallbackFunc,
    (int32_t)callback,
    (int32_t)errorDetail,
    (const MethodInfo *)errorUrl);
  if ( errorUrl )
  {
    v18 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(errorTitle, errorUrl, v18, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v20, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_1B86614(v21, v22);
    *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
    effectDistance.fields.value.fields.y = 0.0;
    CommonUI__OpenWarningDialog(
      (CommonUI_o *)Instance,
      errorTitle,
      errorDetail,
      v20,
      errorType != 1,
      0,
      -1.0,
      1,
      effectDistance,
      0LL);
  }
}


void __fastcall NetworkManager__WriteAuth(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  NetworkManager_c *v4; // x0
  NetworkManager_o *AuthFileName; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  NetworkManager_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4A4DCE1 & 1) == 0 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v2);
    byte_4A4DCE1 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v4 = NetworkManager_TypeInfo;
    }
    if ( v4->static_fields->userId )
    {
      if ( !v4->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v4);
      AuthFileName = (NetworkManager_o *)NetworkManager__getAuthFileName(0, method);
      NetworkManager__WriteAuthFile(AuthFileName, (System_String_o *)AuthFileName, v6);
      v8 = (NetworkManager_o *)NetworkManager__getAuthFileName(1, v7);
      NetworkManager__WriteAuthFile(v8, (System_String_o *)v8, v9);
    }
  }
}


bool __fastcall NetworkManager__WriteAuthFile(NetworkManager_o *this, System_String_o *fname, const MethodInfo *method)
{
  __int64 v4; // x1
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
  System_IO_Stream_o *v19; // x23
  System_IO_BinaryWriter_o *v20; // x21
  System_Collections_Generic_Dictionary_object__object__o *v21; // x23
  __int64 v22; // x1
  ManagerConfig_c *v23; // x0
  NetworkManager_c *v24; // x0
  System_String_o *v25; // x23
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x24
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  System_String_o *v33; // x21
  NetworkManager_c *v34; // x0

  if ( (byte_4A4DCE2 & 1) == 0 )
  {
    sub_1B863B8(&System_IO_BinaryWriter_TypeInfo, fname);
    sub_1B863B8(&CatAndMouseGame_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B863B8(&EncryptedPlayerPrefs_TypeInfo, v8);
    sub_1B863B8(&System_IDisposable_TypeInfo, v9);
    sub_1B863B8(&JsonManager_TypeInfo, v10);
    sub_1B863B8(&ManagerConfig_TypeInfo, v11);
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_24217/*"userCreateServer"*/, v13);
    sub_1B863B8(&StringLiteral_12380/*"SaveDataVer"*/, v14);
    sub_1B863B8(&StringLiteral_16731/*"authKey"*/, v15);
    sub_1B863B8(&StringLiteral_22927/*"secretKey"*/, v16);
    sub_1B863B8(&StringLiteral_24261/*"userId"*/, v17);
    sub_1B863B8(&StringLiteral_1/*""*/, v18);
    byte_4A4DCE2 = 1;
  }
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(fname, 0LL);
  v20 = (System_IO_BinaryWriter_o *)sub_1B86604(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_62558896(v20, v19, 0LL);
  v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v21,
    (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v23 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !v21 )
    sub_1B86614(v23, v22);
  System_Collections_Generic_Dictionary_object__object___Add(
    v21,
    (Il2CppObject *)StringLiteral_12380/*"SaveDataVer"*/,
    (Il2CppObject *)ManagerConfig_TypeInfo->static_fields->SaveDataVer,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v24 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v24 = NetworkManager_TypeInfo;
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v21,
    (Il2CppObject *)StringLiteral_24217/*"userCreateServer"*/,
    (Il2CppObject *)v24->static_fields->gameServerAddress,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v21,
    (Il2CppObject *)StringLiteral_24261/*"userId"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->userId,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v21,
    (Il2CppObject *)StringLiteral_16731/*"authKey"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->authKey,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v21,
    (Il2CppObject *)StringLiteral_22927/*"secretKey"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->secretKey,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson((Il2CppObject *)v21, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v26 = CatAndMouseGame__CatGame1(v25, 0, 0LL);
  v28 = v26;
  if ( !v20 )
    sub_1B86614(v26, v27);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v20->klass->vtable._22_Write.method)(
    v20,
    v26,
    v20->klass[1]._1.image);
  klass = v20->klass;
  v30 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_17;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v32 = sub_1BD6B4C(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v20, *(_QWORD *)(v32 + 8));
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  v33 = EncryptedPlayerPrefs__Md5(v28, 0LL);
  v34 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v34 = NetworkManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v34->static_fields->AUTHMD5_KEY_TYPE, v33, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  return 1;
}


void __fastcall NetworkManager__WriteFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  NetworkManager_c *v6; // x0
  System_String_o *FriendCodeFileName; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryWriter_o *v9; // x19
  __int64 v10; // x1
  long double inited; // q0
  NetworkManager_c *v12; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0

  if ( (byte_4A4DCD3 & 1) == 0 )
  {
    sub_1B863B8(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1B863B8(&System_IDisposable_TypeInfo, v2);
    sub_1B863B8(&ManagerConfig_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    byte_4A4DCD3 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    if ( v6->static_fields->userId )
    {
      if ( !v6->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v6);
      FriendCodeFileName = NetworkManager__getFriendCodeFileName((const MethodInfo *)v6);
      v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FriendCodeFileName, 0LL);
      v9 = (System_IO_BinaryWriter_o *)sub_1B86604(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_62558896(v9, v8, 0LL);
      v12 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !v9 )
        sub_1B86614(v12, v10);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v9->klass->vtable._22_Write.method)(
        v9,
        NetworkManager_TypeInfo->static_fields->friendCode,
        v9->klass[1]._1.image,
        inited);
      klass = v9->klass;
      v14 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v14;
          p_offset += 4;
          if ( !v14 )
            goto LABEL_18;
        }
        v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_18:
        v16 = sub_1BD6B4C(v9, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v16)(v9, *(_QWORD *)(v16 + 8));
    }
  }
}


void __fastcall NetworkManager__WriteServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__WriteSignup(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  NetworkManager_c *v6; // x0
  System_String_o *SignupFileName; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryWriter_o *v9; // x19
  __int64 v10; // x1
  long double inited; // q0
  NetworkManager_c *v12; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0

  if ( (byte_4A4DCD0 & 1) == 0 )
  {
    sub_1B863B8(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1B863B8(&System_IDisposable_TypeInfo, v2);
    sub_1B863B8(&ManagerConfig_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    byte_4A4DCD0 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    if ( v6->static_fields->userId )
    {
      if ( !v6->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v6);
      SignupFileName = NetworkManager__getSignupFileName((const MethodInfo *)v6);
      v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SignupFileName, 0LL);
      v9 = (System_IO_BinaryWriter_o *)sub_1B86604(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_62558896(v9, v8, 0LL);
      v12 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !v9 )
        sub_1B86614(v12, v10);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v9->klass->vtable._22_Write.method)(
        v9,
        NetworkManager_TypeInfo->static_fields->userName,
        v9->klass[1]._1.image,
        inited);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
        v9,
        (unsigned int)NetworkManager_TypeInfo->static_fields->genderType,
        v9->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
        v9,
        (unsigned int)NetworkManager_TypeInfo->static_fields->month,
        v9->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
        v9,
        (unsigned int)NetworkManager_TypeInfo->static_fields->day,
        v9->klass->vtable._18_Write.methodPtr);
      klass = v9->klass;
      v14 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v14;
          p_offset += 4;
          if ( !v14 )
            goto LABEL_18;
        }
        v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_18:
        v16 = sub_1BD6B4C(v9, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v16)(v9, *(_QWORD *)(v16 + 8));
    }
  }
}


void __fastcall NetworkManager___RequestCR_b__214_0(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  NetworkManager__OnBackgroundErrorCommunication(this, this->fields.communicationWork, 0LL, 1, v2);
}


System_String_o *__fastcall NetworkManager__getAuthFileName(bool isSlave, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *DatFileSavePath; // x20
  int32_t v6; // w0
  System_String_o *FileName; // x2

  if ( (byte_4A4DD03 & 1) == 0 )
  {
    sub_1B863B8(&AndroidUtil_TypeInfo, method);
    sub_1B863B8(&DatFileName_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v4);
    byte_4A4DD03 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  if ( isSlave )
    v6 = 17;
  else
    v6 = 16;
  FileName = DatFileName__getFileName(v6, 0LL);
  return System_String__Concat_61683424(DatFileSavePath, (System_String_o *)StringLiteral_1058/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getBaseMockUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DD1B & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD1B = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->gameServerAddress;
}


System_String_o *__fastcall NetworkManager__getBaseUrl(bool isSecurity, const MethodInfo *method)
{
  __int64 v2; // x1
  NetworkManager_c *v3; // x0

  if ( (byte_4A4DD1A & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_19813/*"https://"*/, v2);
    byte_4A4DD1A = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_61645176(
           (System_String_o *)StringLiteral_19813/*"https://"*/,
           v3->static_fields->gameServerAddress,
           0LL);
}


System_String_o *__fastcall NetworkManager__getDataUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DD1C & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD1C = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->dataServerAddress;
}


System_DateTime_o __fastcall NetworkManager__getDateTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_DateTime_o v3; // x0
  NetworkManager_c *v4; // x8
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v7; // 0:x0.8
  System_DateTime_o v8; // 0:x0.8

  if ( (byte_4A4DCE7 & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, v1);
    sub_1B863B8(&NetworkManager_TypeInfo, v2);
    byte_4A4DCE7 = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0LL).fields._dateData;
  v7.fields._dateData = (uint64_t)&dateData;
  v3.fields._dateData = System_DateTime__ToUniversalTime(v7, 0LL).fields._dateData;
  v4 = NetworkManager_TypeInfo;
  dateData = v3.fields._dateData;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  v8.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__AddSeconds(v8, (double)v4->static_fields->serverOffsetTime, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getDateTime_39522640(int64_t t, const MethodInfo *method)
{
  __int64 v3; // x1
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_4A4DCE8 & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    byte_4A4DCE8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v6.fields._dateData = (uint64_t)&NetworkManager_TypeInfo->static_fields->dtUnixEpoch;
  dateData = System_DateTime__AddSeconds(v6, (double)t, 0LL).fields._dateData;
  v7.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__ToUniversalTime(v7, 0LL);
}


System_String_o *__fastcall NetworkManager__getFriendCodeFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A4DD07 & 1) == 0 )
  {
    sub_1B863B8(&AndroidUtil_TypeInfo, v1);
    sub_1B863B8(&DatFileName_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v3);
    byte_4A4DD07 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(20, 0LL);
  return System_String__Concat_61683424(DatFileSavePath, (System_String_o *)StringLiteral_1058/*"/"*/, FileName, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getLocalDateTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_DateTime_o v3; // x0
  NetworkManager_c *v4; // x8
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_4A4DCE9 & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, v1);
    sub_1B863B8(&NetworkManager_TypeInfo, v2);
    byte_4A4DCE9 = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = System_DateTime__get_Now(0LL).fields._dateData;
  v4 = NetworkManager_TypeInfo;
  dateData = v3.fields._dateData;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  v7.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__AddSeconds(v7, (double)v4->static_fields->serverOffsetTime, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getLocalDateTime_39522804(int64_t t, const MethodInfo *method)
{
  __int64 v3; // x1
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_4A4DCEA & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    byte_4A4DCEA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v6.fields._dateData = (uint64_t)&NetworkManager_TypeInfo->static_fields->dtUnixEpoch;
  dateData = System_DateTime__AddSeconds(v6, (double)t, 0LL).fields._dateData;
  v7.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__ToLocalTime(v7, 0LL);
}


int64_t __fastcall NetworkManager__getLocalTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  const MethodInfo *v3; // x1
  System_DateTime_o v5; // 0:x0.8

  if ( (byte_4A4DCE5 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCE5 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v5.fields._dateData = NetworkManager__getLocalDateTime((const MethodInfo *)v2).fields._dateData;
  return NetworkManager__getTime_39521860(v5, v3);
}


System_String_o *__fastcall NetworkManager__getMockFile(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  UnityEngine_Object_o *v6; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o *text; // x20

  if ( (byte_4A4DD1F & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&UnityEngine_TextAsset_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_8980/*"Mock/"*/, v4);
    byte_4A4DD1F = 1;
  }
  if ( !path )
    return 0LL;
  v5 = System_String__Concat_61645176((System_String_o *)StringLiteral_8980/*"Mock/"*/, path, 0LL);
  v6 = UnityEngine_Resources__Load(v5, 0LL);
  if ( v6
    && (methodPtr_low = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v6->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    v8 = (UnityEngine_TextAsset_c *)v6->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_TextAsset_TypeInfo
       ? v6
       : 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( !v9 )
    return 0LL;
  if ( !v8 )
    sub_1B86614(v9, v10);
  text = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v8, 0LL);
  UnityEngine_Resources__UnloadAsset(v8, 0LL);
  return text;
}


int64_t __fastcall NetworkManager__getNextDayStartTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x0
  int64_t Time; // x19
  int32_t Hour; // w20
  int32_t Minute; // w21
  const MethodInfo *dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x0.8
  System_DateTime_o v11; // 0:x0.8

  if ( (byte_4A4DCF0 & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, v1);
    sub_1B863B8(&NetworkManager_TypeInfo, v2);
    byte_4A4DCF0 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v3).fields._dateData;
  Time = NetworkManager__getTime(dateData);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v9.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v9, 0LL);
  v10.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v10, 0LL);
  v11.fields._dateData = (uint64_t)&dateData;
  return Time - (System_DateTime__get_Second(v11, 0LL) + 60 * (Minute + 60 * Hour)) + 86400;
}


int64_t __fastcall NetworkManager__getNextDayTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x0
  int32_t Year; // w19
  int Month; // w20
  int v6; // w21
  const MethodInfo *v7; // x1
  System_DateTime_o dateTime; // [xsp+8h] [xbp-38h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8

  if ( (byte_4A4DCEE & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, v1);
    sub_1B863B8(&NetworkManager_TypeInfo, v2);
    byte_4A4DCEE = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime((const MethodInfo *)v3).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v11.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v11, 0LL);
  v12.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v12, 0LL);
  v13.fields._dateData = (uint64_t)&dateData;
  v6 = System_DateTime__get_Day(v13, 0LL) + 1;
  if ( v6 > System_DateTime__DaysInMonth(Year, Month, 0LL) )
  {
    if ( Month >= 12 )
    {
      ++Year;
      v6 = 1;
      Month = 1;
    }
    else
    {
      ++Month;
      v6 = 1;
    }
  }
  v14.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0LL;
  System_DateTime___ctor_63035160(v14, Year, Month, v6, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v15.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_39521860(v15, v7);
}


int64_t __fastcall NetworkManager__getNextDayTime_39523668(int32_t hour, const MethodInfo *method)
{
  __int64 v3; // x1
  NetworkManager_c *v4; // x0
  int64_t Time; // x20
  int32_t v6; // w21
  int64_t v7; // x22
  int32_t v8; // w20
  int32_t Minute; // w21
  const MethodInfo *dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8

  if ( (byte_4A4DCEF & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    byte_4A4DCEF = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v4).fields._dateData;
  Time = NetworkManager__getTime(dateData);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v12.fields._dateData = (uint64_t)&dateData;
  v6 = System_DateTime__get_Hour(v12, 0LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v13.fields._dateData = (uint64_t)&dateData;
  if ( v6 >= hour )
    v7 = Time + 86400;
  else
    v7 = Time;
  v8 = System_DateTime__get_Hour(v13, 0LL);
  v14.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v14, 0LL);
  v15.fields._dateData = (uint64_t)&dateData;
  return v7 - (System_DateTime__get_Second(v15, 0LL) + 60 * (Minute + 60 * (v8 - hour)));
}


int64_t __fastcall NetworkManager__getNextMonthTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x0
  int32_t Year; // w19
  int32_t Month; // w0
  int32_t v6; // w2
  int32_t v7; // w1
  const MethodInfo *v8; // x1
  System_DateTime_o dateTime; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8

  if ( (byte_4A4DCF1 & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, v1);
    sub_1B863B8(&NetworkManager_TypeInfo, v2);
    byte_4A4DCF1 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime((const MethodInfo *)v3).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v12.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v12, 0LL);
  v13.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v13, 0LL);
  if ( Month < 12 )
    v6 = Month + 1;
  else
    v6 = 1;
  if ( Month <= 11 )
    v7 = Year;
  else
    v7 = Year + 1;
  v14.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0LL;
  System_DateTime___ctor_63035160(v14, v7, v6, 1, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v15.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_39521860(v15, v8);
}


int64_t __fastcall NetworkManager__getNextMonthTime_39524380(int32_t day, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t Year; // w20
  int Month; // w21
  const MethodInfo *v6; // x1
  System_DateTime_o dateTime; // [xsp+8h] [xbp-38h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v10; // 0:x0.8
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8

  if ( (byte_4A4DCF2 & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    byte_4A4DCF2 = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0LL).fields._dateData;
  v10.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v10, 0LL);
  v11.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v11, 0LL);
  v12.fields._dateData = (uint64_t)&dateData;
  if ( System_DateTime__get_Day(v12, 0LL) < day )
  {
    if ( Month >= 12 )
    {
      ++Year;
      Month = 1;
    }
    else
    {
      ++Month;
    }
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  if ( System_DateTime__DaysInMonth(Year, Month, 0LL) < day )
  {
    if ( Month >= 12 )
    {
      ++Year;
      Month = 1;
    }
    else
    {
      ++Month;
    }
    day = 1;
  }
  v13.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0LL;
  System_DateTime___ctor_63035160(v13, Year, Month, day, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v14.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_39521860(v14, v6);
}


System_String_o *__fastcall NetworkManager__getOldAuthFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A4DD02 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, v1);
    sub_1B863B8(&DatFileName_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v3);
    byte_4A4DD02 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(16, 0LL);
  return System_String__Concat_61683424(temporaryCachePath, (System_String_o *)StringLiteral_1058/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getOldSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A4DD04 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, v1);
    sub_1B863B8(&DatFileName_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v3);
    byte_4A4DD04 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_61683424(temporaryCachePath, (System_String_o *)StringLiteral_1058/*"/"*/, FileName, 0LL);
}


Il2CppObject *__fastcall NetworkManager__getRequest_object_(
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo_2FF4AF4 *method)
{
  const MethodInfo_2EC0EE0 **rgctx_data; // x8
  Il2CppObject *Instance_object; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  CGThumbnailListItem_o *v8; // x21
  System_Delegate_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Delegate_o *v12; // x8
  NetworkManager_ResultCallbackFunc_c *v13; // x1

  rgctx_data = (const MethodInfo_2EC0EE0 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, method);
    rgctx_data = (const MethodInfo_2EC0EE0 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BD6AA4();
      rgctx_data = (const MethodInfo_2EC0EE0 **)method->rgctx_data;
    }
  }
  Instance_object = System_Activator__CreateInstance_object_(*rgctx_data);
  if ( !Instance_object )
    sub_1B86614(0LL, v6);
  v7 = Instance_object;
  v8 = (CGThumbnailListItem_o *)&Instance_object[1];
  v9 = System_Delegate__Combine((System_Delegate_o *)Instance_object[1].klass, (System_Delegate_o *)func, 0LL);
  v12 = v9;
  if ( !v9 )
    goto LABEL_9;
  v13 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( (NetworkManager_ResultCallbackFunc_c *)v9->klass != NetworkManager_ResultCallbackFunc_TypeInfo
    || (v8->klass = (CGThumbnailListItem_c *)v9, (NetworkManager_ResultCallbackFunc_c *)v9->klass != v13) )
  {
    sub_1B868D4(v9);
LABEL_9:
    v8->klass = (CGThumbnailListItem_c *)v12;
  }
  sub_1B8635C(v8, (int32_t)v12, v10, v11);
  return v7;
}


System_DateTime_o __fastcall NetworkManager__getServerDateTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_DateTime_o v3; // x0
  NetworkManager_c *v4; // x8
  System_TimeSpan_o value; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_TimeSpan_o v10; // 0:x0.8
  System_DateTime_o v11; // 0:x0.8
  System_TimeSpan_o v13; // 0:x1.8

  if ( (byte_4A4DCEB & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, v1);
    sub_1B863B8(&NetworkManager_TypeInfo, v2);
    byte_4A4DCEB = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0LL).fields._dateData;
  v8.fields._dateData = (uint64_t)&dateData;
  v3.fields._dateData = System_DateTime__ToUniversalTime(v8, 0LL).fields._dateData;
  v4 = NetworkManager_TypeInfo;
  dateData = v3.fields._dateData;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  v9.fields._dateData = (uint64_t)&dateData;
  dateData = System_DateTime__AddSeconds(v9, (double)v4->static_fields->serverOffsetTime, 0LL).fields._dateData;
  v10.fields._ticks = (int64_t)&value;
  value.fields._ticks = 0LL;
  System_TimeSpan___ctor_63261472(v10, 9, 0, 0, 0LL);
  v13.fields._ticks = value.fields._ticks;
  v11.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v11, v13, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getServerDateTime_39522968(int64_t t, const MethodInfo *method)
{
  __int64 v3; // x1
  System_TimeSpan_o value; // [xsp+0h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v7; // 0:x0.8
  System_TimeSpan_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_TimeSpan_o v11; // 0:x1.8

  if ( (byte_4A4DCEC & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    byte_4A4DCEC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v7.fields._dateData = (uint64_t)&NetworkManager_TypeInfo->static_fields->dtUnixEpoch;
  value.fields._ticks = 0LL;
  dateData = System_DateTime__AddSeconds(v7, (double)t, 0LL).fields._dateData;
  v8.fields._ticks = (int64_t)&value;
  System_TimeSpan___ctor_63261472(v8, 9, 0, 0, 0LL);
  v11.fields._ticks = value.fields._ticks;
  v9.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v9, v11, 0LL);
}


System_String_o *__fastcall NetworkManager__getServerSettingFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A4DD06 & 1) == 0 )
  {
    sub_1B863B8(&AndroidUtil_TypeInfo, v1);
    sub_1B863B8(&DatFileName_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v3);
    byte_4A4DD06 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(19, 0LL);
  return System_String__Concat_61683424(DatFileSavePath, (System_String_o *)StringLiteral_1058/*"/"*/, FileName, 0LL);
}


int64_t __fastcall NetworkManager__getServerTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  const MethodInfo *v3; // x1
  System_DateTime_o v5; // 0:x0.8

  if ( (byte_4A4DCE6 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCE6 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v5.fields._dateData = NetworkManager__getServerDateTime((const MethodInfo *)v2).fields._dateData;
  return NetworkManager__getTime_39521860(v5, v3);
}


System_String_o *__fastcall NetworkManager__getSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A4DD05 & 1) == 0 )
  {
    sub_1B863B8(&AndroidUtil_TypeInfo, v1);
    sub_1B863B8(&DatFileName_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v3);
    byte_4A4DD05 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_61683424(DatFileSavePath, (System_String_o *)StringLiteral_1058/*"/"*/, FileName, 0LL);
}


void __fastcall NetworkManager__getStoreUrl(
        System_String_o *storeName,
        System_String_o *id,
        NetworkManager_StoreCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  UnityEngine_MonoBehaviour_o *v10; // x22
  System_Collections_IEnumerator_o *updated; // x1

  if ( (byte_4A4DD1E & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, id);
    byte_4A4DD1E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  v10 = (UnityEngine_MonoBehaviour_o *)Instance;
  updated = NetworkManager__RequestApplicationUpdateCR((NetworkManager_o *)Instance, storeName, id, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456(v10, updated, 0LL);
}


System_String_o *__fastcall NetworkManager__getSummonDetailUrl(int32_t gachaId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_Object_array *v9; // x20
  System_String_o *BaseUrl; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  NetworkManager_c *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x19
  __int64 v34; // x0
  int32_t v35; // [xsp+4h] [xbp-3Ch] BYREF
  int64_t userIdNumber; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4DD2B & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    sub_1B863B8(&long_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&object___TypeInfo, v5);
    sub_1B863B8(&StringLiteral_515/*"&gachaId="*/, v6);
    sub_1B863B8(&StringLiteral_24515/*"webview/summonDetail?userId="*/, v7);
    byte_4A4DD2B = 1;
  }
  v9 = (System_Object_array *)sub_1B86460(object___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(0, v8);
  if ( !v9 )
    sub_1B86614(BaseUrl, v11);
  v14 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B864F4(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_31;
  }
  if ( !v9->max_length )
    goto LABEL_30;
  v9->m_Items[0] = v14;
  sub_1B8635C((CGThumbnailListItem_o *)v9->m_Items, (int32_t)v14, v12, v13);
  BaseUrl = (System_String_o *)StringLiteral_24515/*"webview/summonDetail?userId="*/;
  if ( StringLiteral_24515/*"webview/summonDetail?userId="*/ )
  {
    BaseUrl = (System_String_o *)sub_1B864F4(StringLiteral_24515/*"webview/summonDetail?userId="*/, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_31;
    v11 = StringLiteral_24515/*"webview/summonDetail?userId="*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_30;
  v9->m_Items[1] = (Il2CppObject *)v11;
  sub_1B8635C((CGThumbnailListItem_o *)&v9->m_Items[1], v11, v15, v16);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v17);
    byte_4A48C25 = 1;
  }
  v21 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v21 = NetworkManager_TypeInfo;
  }
  userIdNumber = v21->static_fields->userIdNumber;
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &userIdNumber, v18, v19, v20);
  v24 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B864F4(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_31;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_30;
  v9->m_Items[2] = v24;
  sub_1B8635C((CGThumbnailListItem_o *)&v9->m_Items[2], (int32_t)v24, v22, v23);
  BaseUrl = (System_String_o *)StringLiteral_515/*"&gachaId="*/;
  if ( StringLiteral_515/*"&gachaId="*/ )
  {
    BaseUrl = (System_String_o *)sub_1B864F4(StringLiteral_515/*"&gachaId="*/, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_31;
    v11 = StringLiteral_515/*"&gachaId="*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_30;
  v9->m_Items[3] = (Il2CppObject *)v11;
  sub_1B8635C((CGThumbnailListItem_o *)&v9->m_Items[3], v11, v25, v26);
  v35 = gachaId;
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v27, v28, v29);
  v32 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B864F4(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
    {
LABEL_31:
      v34 = sub_1B86638(BaseUrl);
      sub_1B864E0(v34, 0LL);
    }
  }
  if ( v9->max_length <= 4 )
LABEL_30:
    sub_1B8661C(BaseUrl, v11);
  v9->m_Items[4] = v32;
  sub_1B8635C((CGThumbnailListItem_o *)&v9->m_Items[4], (int32_t)v32, v30, v31);
  return System_String__Concat_61683616(v9, 0LL);
}


int64_t __fastcall NetworkManager__getTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x8
  const MethodInfo *v3; // x1
  int64_t Time_39521860; // x0
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_4A4DCE3 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCE3 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  if ( (v2->static_fields->nowTime & 0x8000000000000000LL) != 0 )
  {
    if ( !v2->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v2);
    v6.fields._dateData = NetworkManager__getDateTime(method).fields._dateData;
    Time_39521860 = NetworkManager__getTime_39521860(v6, v3);
    v2 = NetworkManager_TypeInfo;
    NetworkManager_TypeInfo->static_fields->nowTime = Time_39521860;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->nowTime;
}


int64_t __fastcall NetworkManager__getTime_39521860(System_DateTime_o dateTime, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  NetworkManager_c *v4; // x0
  uint64_t v5; // x19
  double TotalSeconds; // d0
  int64_t ticks; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v10; // 0:x0.8
  System_TimeSpan_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x1.8

  dateData = dateTime.fields._dateData;
  if ( (byte_4A4DCE4 & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v2);
    sub_1B863B8(&System_TimeSpan_TypeInfo, v3);
    byte_4A4DCE4 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  ticks = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  v5 = v4->static_fields->dtUnixEpoch.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v10.fields._dateData = (uint64_t)&dateData;
  v12.fields._dateData = v5;
  ticks = System_DateTime__Subtract(v10, v12, 0LL).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v11.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v11, 0LL);
  if ( TotalSeconds == INFINITY )
    return 0x8000000000000000LL;
  else
    return (__int64)TotalSeconds;
}


int64_t __fastcall NetworkManager__getTodayStartTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  NetworkManager_c *v3; // x0
  int64_t Time; // x19
  int32_t Hour; // w20
  int32_t Minute; // w21
  const MethodInfo *dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x0.8
  System_DateTime_o v11; // 0:x0.8

  if ( (byte_4A4DCED & 1) == 0 )
  {
    sub_1B863B8(&System_DateTime_TypeInfo, v1);
    sub_1B863B8(&NetworkManager_TypeInfo, v2);
    byte_4A4DCED = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v3).fields._dateData;
  Time = NetworkManager__getTime(dateData);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v9.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v9, 0LL);
  v10.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v10, 0LL);
  v11.fields._dateData = (uint64_t)&dateData;
  return Time - (System_DateTime__get_Second(v11, 0LL) + 60 * (Minute + 60 * Hour));
}


System_String_o *__fastcall NetworkManager__getUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  return NetworkServicePluginScript__GetUserAgentString(0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NetworkManager__getWebUrl(
        System_String_o *path,
        bool isSecurity,
        bool isWebView,
        const MethodInfo *method)
{
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
  ManagerConfig_c *v21; // x0
  NetworkManager_c *v22; // x0
  _BOOL4 serverSettingSecurity; // w8
  NetworkManager_c *v24; // x0
  _BOOL4 v25; // w21
  System_String_o *v26; // x0
  __int64 v27; // x1
  __int64 *v28; // x8
  NetworkManager_c *v29; // x0
  System_String_o *v30; // x21
  System_String_o **v31; // x9
  __int64 *v32; // x8
  NetworkManager_c *v33; // x0
  System_String_o *v34; // x19
  System_String_o **v35; // x9
  NetworkManager_c *v36; // x0
  int64_t Time; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  int32_t v39; // w21
  int32_t v40; // w20
  System_String_o *v41; // x2
  __int64 *v42; // x8
  System_String_o *v43; // x0
  __int64 *v44; // x8
  System_String_o *v45; // x1
  int64_t v47; // [xsp+0h] [xbp-40h] BYREF
  int64_t v48; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4DD1D & 1) == 0 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, isSecurity);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_20855/*"lastAccessTime="*/, v8);
    sub_1B863B8(&StringLiteral_524/*"&v="*/, v9);
    sub_1B863B8(&StringLiteral_19778/*"http://"*/, v10);
    sub_1B863B8(&StringLiteral_1138/*"/webview/"*/, v11);
    sub_1B863B8(&StringLiteral_1768/*"?"*/, v12);
    sub_1B863B8(&StringLiteral_1776/*"?lastAccessTime="*/, v13);
    sub_1B863B8(&StringLiteral_19812/*"https:"*/, v14);
    sub_1B863B8(&StringLiteral_518/*"&lastAccessTime="*/, v15);
    sub_1B863B8(&StringLiteral_19199/*"file:"*/, v16);
    sub_1B863B8(&StringLiteral_19813/*"https://"*/, v17);
    sub_1B863B8(&StringLiteral_1/*""*/, v18);
    sub_1B863B8(&StringLiteral_1779/*"?v="*/, v19);
    sub_1B863B8(&StringLiteral_19777/*"http:"*/, v20);
    byte_4A4DD1D = 1;
  }
  v21 = ManagerConfig_TypeInfo;
  v47 = 0LL;
  v48 = 0LL;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v21 = ManagerConfig_TypeInfo;
  }
  if ( v21->static_fields->UseDebugCommand )
  {
    if ( isSecurity )
    {
      v22 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v22 = NetworkManager_TypeInfo;
      }
      serverSettingSecurity = v22->static_fields->serverSettingSecurity;
      goto LABEL_14;
    }
  }
  else if ( isSecurity )
  {
    v24 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v24 = NetworkManager_TypeInfo;
    }
    serverSettingSecurity = v24->static_fields->serverSecurity;
LABEL_14:
    v25 = serverSettingSecurity;
    if ( path )
      goto LABEL_15;
LABEL_26:
    v32 = &StringLiteral_19813/*"https://"*/;
    v33 = NetworkManager_TypeInfo;
    if ( !v25 )
      v32 = &StringLiteral_19778/*"http://"*/;
    v34 = (System_String_o *)*v32;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v33 = NetworkManager_TypeInfo;
    }
    v35 = (System_String_o **)&StringLiteral_1138/*"/webview/"*/;
    if ( !isWebView )
      v35 = (System_String_o **)&StringLiteral_1/*""*/;
    v26 = System_String__Concat_61683424(v34, v33->static_fields->webServerAddress, *v35, 0LL);
    goto LABEL_33;
  }
  v25 = 0;
  if ( !path )
    goto LABEL_26;
LABEL_15:
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19199/*"file:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_34;
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19777/*"http:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_34;
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19812/*"https:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_34;
  v28 = &StringLiteral_19813/*"https://"*/;
  v29 = NetworkManager_TypeInfo;
  if ( !v25 )
    v28 = &StringLiteral_19778/*"http://"*/;
  v30 = (System_String_o *)*v28;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v29 = NetworkManager_TypeInfo;
  }
  v31 = (System_String_o **)&StringLiteral_1138/*"/webview/"*/;
  if ( !isWebView )
    v31 = (System_String_o **)&StringLiteral_1/*""*/;
  v26 = System_String__Concat_61685428(v30, v29->static_fields->webServerAddress, *v31, path, 0LL);
LABEL_33:
  path = v26;
LABEL_34:
  if ( isWebView )
  {
    if ( !path )
      sub_1B86614(v26, v27);
    if ( System_String__StartsWith(path, (System_String_o *)StringLiteral_19777/*"http:"*/, 0LL)
      || System_String__StartsWith(path, (System_String_o *)StringLiteral_19812/*"https:"*/, 0LL) )
    {
      v36 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime((const MethodInfo *)v36);
      static_fields = NetworkManager_TypeInfo->static_fields;
      v47 = Time / static_fields->WebCacheTime;
      v48 = Time;
      v39 = System_String__IndexOf_61703672(path, static_fields->webServerAddress, 0LL);
      v40 = System_String__IndexOf_61703672(path, (System_String_o *)StringLiteral_1768/*"?"*/, 0LL);
      if ( (v39 & 0x80000000) == 0 )
      {
        v41 = System_Int64__ToString((int64_t)&v47, 0LL);
        if ( (v40 & 0x80000000) != 0 )
          v42 = &StringLiteral_1779/*"?v="*/;
        else
          v42 = &StringLiteral_524/*"&v="*/;
        v45 = (System_String_o *)*v42;
        return System_String__Concat_61683424(path, v45, v41, 0LL);
      }
      if ( (v40 & 0x80000000) != 0 )
      {
        v43 = System_Int64__ToString((int64_t)&v48, 0LL);
        v44 = &StringLiteral_1776/*"?lastAccessTime="*/;
        goto LABEL_49;
      }
      if ( (System_String__IndexOf_61703672(path, (System_String_o *)StringLiteral_20855/*"lastAccessTime="*/, 0LL) & 0x80000000) != 0 )
      {
        v43 = System_Int64__ToString((int64_t)&v48, 0LL);
        v44 = &StringLiteral_518/*"&lastAccessTime="*/;
LABEL_49:
        v45 = (System_String_o *)*v44;
        v41 = v43;
        return System_String__Concat_61683424(path, v45, v41, 0LL);
      }
    }
  }
  return path;
}


System_String_o *__fastcall NetworkManager__getWebViewAddress(System_String_o *path, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4A4DD28 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4DD28 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_61645176(v3->static_fields->webViewBaseURL, path, 0LL);
}


System_String_o *__fastcall NetworkManager__getWebViewAddress_39535152(int32_t addressType, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 *v21; // x8
  BalanceConfig_c *v22; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *v25; // x19
  NetworkManager_c *v26; // x0
  System_Collections_Generic_Dictionary_object__object__o *webViewAddress; // x0
  NetworkManager_c *v28; // x0

  if ( (byte_4A4DD2A & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v4);
    sub_1B863B8(&NetworkManager_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_22791/*"rights"*/, v6);
    sub_1B863B8(&StringLiteral_23512/*"summonDetail"*/, v7);
    sub_1B863B8(&StringLiteral_18210/*"dBanner"*/, v8);
    sub_1B863B8(&StringLiteral_23729/*"terms"*/, v9);
    sub_1B863B8(&StringLiteral_17149/*"boxGacha"*/, v10);
    sub_1B863B8(&StringLiteral_21885/*"news"*/, v11);
    sub_1B863B8(&StringLiteral_18101/*"credit"*/, v12);
    sub_1B863B8(&StringLiteral_19688/*"help"*/, v13);
    sub_1B863B8(&StringLiteral_23265/*"spdeal"*/, v14);
    sub_1B863B8(&StringLiteral_17993/*"contact"*/, v15);
    sub_1B863B8(&StringLiteral_23664/*"tBanner"*/, v16);
    sub_1B863B8(&StringLiteral_18331/*"deleteAccount"*/, v17);
    sub_1B863B8(&StringLiteral_1/*""*/, v18);
    sub_1B863B8(&StringLiteral_24447/*"warBoard"*/, v19);
    sub_1B863B8(&StringLiteral_22454/*"privacyPolicy"*/, v20);
    byte_4A4DD2A = 1;
  }
  v21 = &StringLiteral_19688/*"help"*/;
  switch ( addressType )
  {
    case 0:
      v22 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v22 = BalanceConfig_TypeInfo;
      }
      static_fields = v22->static_fields;
      if ( !static_fields->IsIOS_Examination )
      {
        v21 = &StringLiteral_21885/*"news"*/;
LABEL_23:
        v25 = (Il2CppObject *)*v21;
        v26 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v26 = NetworkManager_TypeInfo;
        }
        webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)v26->static_fields->webViewAddress;
        if ( webViewAddress )
        {
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  webViewAddress,
                  v25,
                  (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
            return (System_String_o *)StringLiteral_1/*""*/;
          v28 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v28 = NetworkManager_TypeInfo;
          }
          webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)v28->static_fields->webViewAddress;
          if ( webViewAddress )
            return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        webViewAddress,
                                        v25,
                                        (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        }
        sub_1B86614(webViewAddress, method);
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->IOS_ExaminationNewsUrl;
    case 1:
      v21 = &StringLiteral_23512/*"summonDetail"*/;
      goto LABEL_23;
    case 2:
      goto LABEL_23;
    case 3:
      v21 = &StringLiteral_17993/*"contact"*/;
      goto LABEL_23;
    case 4:
      v21 = &StringLiteral_23729/*"terms"*/;
      goto LABEL_23;
    case 5:
      v21 = &StringLiteral_18101/*"credit"*/;
      goto LABEL_23;
    case 6:
      v21 = &StringLiteral_22791/*"rights"*/;
      goto LABEL_23;
    case 7:
      v21 = &StringLiteral_23664/*"tBanner"*/;
      goto LABEL_23;
    case 8:
      v21 = &StringLiteral_23265/*"spdeal"*/;
      goto LABEL_23;
    case 9:
      v21 = &StringLiteral_17149/*"boxGacha"*/;
      goto LABEL_23;
    case 10:
      v21 = &StringLiteral_18210/*"dBanner"*/;
      goto LABEL_23;
    case 11:
      v21 = &StringLiteral_22454/*"privacyPolicy"*/;
      goto LABEL_23;
    case 12:
      v21 = &StringLiteral_18331/*"deleteAccount"*/;
      goto LABEL_23;
    case 13:
      v21 = &StringLiteral_24447/*"warBoard"*/;
      goto LABEL_23;
    default:
      return (System_String_o *)StringLiteral_1/*""*/;
  }
}


System_String_o *__fastcall NetworkManager__getWebViewFullAddress(System_String_o *path, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  v2 = path;
  if ( (byte_4A4DD29 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_19812/*"https:"*/, v3);
    path = (System_String_o *)sub_1B863B8(&StringLiteral_19777/*"http:"*/, v4);
    byte_4A4DD29 = 1;
  }
  if ( !v2 )
    sub_1B86614(path, method);
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_19777/*"http:"*/, 0LL)
    || System_String__StartsWith(v2, (System_String_o *)StringLiteral_19812/*"https:"*/, 0LL) )
  {
    return v2;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getWebViewAddress(v2, v5);
}


System_String_o *__fastcall NetworkManager__get_ErrorDialogResponseData(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DD2F & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DD2F = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->errorDialogResponseData;
}


int64_t __fastcall NetworkManager__get_FriendCode(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  int64_t result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A4DCC3 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCC3 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  result = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  if ( System_Int64__TryParse(v2->static_fields->friendCode, &result, 0LL) )
    return result;
  else
    return -1LL;
}


bool __fastcall NetworkManager__get_IsLogin(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DCC1 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCC1 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->isLogin;
}


bool __fastcall NetworkManager__get_IsRebootBlock(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DCBD & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCBD = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->isRebootBlock;
}


System_String_o *__fastcall NetworkManager__get_UserCreateServer(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DCC0 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCC0 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->userCreateServer;
}


int64_t __fastcall NetworkManager__get_UserId(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A4DCC2 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v1);
    byte_4A4DCC2 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->userIdNumber;
}


bool __fastcall NetworkManager__get_isWaitUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  return this->fields._isWaitUserAgent_k__BackingField;
}


void __fastcall NetworkManager__set_ErrorDialogResponseData(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x8

  if ( (byte_4A4DD30 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4DD30 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->errorDialogResponseData = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->errorDialogResponseData, (int32_t)value, v2, v3);
}


void __fastcall NetworkManager__set_isWaitUserAgent(NetworkManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._isWaitUserAgent_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__setupDataServerAddress(
        NetworkManager_o *this,
        int32_t addressType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *streamingAssetsPath; // x19
  ManagerConfig_c *v11; // x8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *v14; // x19
  NetworkManager_c *v15; // x8
  CGThumbnailListItem_o *p_dataServerAddress; // x0
  __int64 v17; // x1
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *dataServerAddress; // x0
  NetworkManager_c *v20; // x0
  struct NetworkManager_StaticFields *v21; // x8
  System_String_o *v22; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x19
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_String_o *dataServerFolder; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  struct ManagerConfig_StaticFields *v39; // x8
  System_String_o *ReleaseDataServerAddress; // x19
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  NetworkManager_c *v43; // x8
  struct System_String_o *dataServerRedirectAddress; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_String_o *v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x1
  System_String_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  NetworkManager_c *v57; // x8
  CGThumbnailListItem_c *v58; // x1
  CGThumbnailListItem_o *v59; // x0
  NetworkManager_c *v60; // x0

  if ( (byte_4A4DD26 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, *(_QWORD *)&addressType);
    sub_1B863B8(&ManagerConfig_TypeInfo, v4);
    sub_1B863B8(&NetworkManager_TypeInfo, v5);
    sub_1B863B8(&string___TypeInfo, v6);
    sub_1B863B8(&StringLiteral_1072/*"/AssetStorages/"*/, v7);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v8);
    sub_1B863B8(&StringLiteral_20723/*"jar:"*/, v9);
    byte_4A4DD26 = 1;
  }
  switch ( addressType )
  {
    case 0:
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      streamingAssetsPath = UnityEngine_Application__get_streamingAssetsPath(0LL);
      v11 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v11 = ManagerConfig_TypeInfo;
      }
      v14 = System_String__Concat_61685428(
              streamingAssetsPath,
              (System_String_o *)StringLiteral_1072/*"/AssetStorages/"*/,
              v11->static_fields->PlatformName,
              (System_String_o *)StringLiteral_1058/*"/"*/,
              0LL);
      v15 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v15 = NetworkManager_TypeInfo;
      }
      p_dataServerAddress = (CGThumbnailListItem_o *)&v15->static_fields->dataServerAddress;
      p_dataServerAddress->klass = (CGThumbnailListItem_c *)v14;
      sub_1B8635C(p_dataServerAddress, (int32_t)v14, v12, v13);
      static_fields = NetworkManager_TypeInfo->static_fields;
      dataServerAddress = static_fields->dataServerAddress;
      if ( !dataServerAddress )
        goto LABEL_59;
      if ( System_String__StartsWith(dataServerAddress, static_fields->FILE_URL_SCHEME, 0LL) )
        return;
      v20 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v20 = NetworkManager_TypeInfo;
      }
      v21 = v20->static_fields;
      v22 = v21->dataServerAddress;
      dataServerAddress = System_String__Concat_61645176(
                            (System_String_o *)StringLiteral_20723/*"jar:"*/,
                            v21->FILE_URL_SCHEME,
                            0LL);
      if ( !v22 )
LABEL_59:
        sub_1B86614(dataServerAddress, v17);
      if ( System_String__StartsWith(v22, dataServerAddress, 0LL) )
        return;
      v60 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v60 = NetworkManager_TypeInfo;
      }
      v54 = System_String__Concat_61645176(
              v60->static_fields->FILE_URL_SCHEME,
              v60->static_fields->dataServerAddress,
              0LL);
LABEL_53:
      v57 = NetworkManager_TypeInfo;
      goto LABEL_54;
    case 1:
      v25 = sub_1B86460(string___TypeInfo, 5LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A4BBE1 )
      {
        sub_1B863B8(&ManagerConfig_TypeInfo, v17);
        byte_4A4BBE1 = 1;
      }
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( !v25 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v25 + 24) )
        goto LABEL_58;
      v26 = *(_QWORD *)(*(_QWORD *)&dataServerAddress[7].fields + 152LL);
      *(_QWORD *)(v25 + 32) = v26;
      sub_1B8635C((CGThumbnailListItem_o *)(v25 + 32), v26, v23, v24);
      if ( *(_DWORD *)(v25 + 24) <= 1u )
        goto LABEL_58;
      v29 = StringLiteral_1058/*"/"*/;
      *(_QWORD *)(v25 + 40) = StringLiteral_1058/*"/"*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v25 + 40), v29, v27, v28);
      if ( *(_DWORD *)(v25 + 24) <= 2u )
        goto LABEL_58;
      dataServerFolder = NetworkManager_TypeInfo->static_fields->dataServerFolder;
      *(_QWORD *)(v25 + 48) = dataServerFolder;
      sub_1B8635C((CGThumbnailListItem_o *)(v25 + 48), (int32_t)dataServerFolder, v30, v31);
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( *(_DWORD *)(v25 + 24) <= 3u )
        goto LABEL_58;
      v35 = *(_QWORD *)(*(_QWORD *)&dataServerAddress[7].fields + 128LL);
      *(_QWORD *)(v25 + 56) = v35;
      sub_1B8635C((CGThumbnailListItem_o *)(v25 + 56), v35, v33, v34);
      if ( *(_DWORD *)(v25 + 24) <= 4u )
        goto LABEL_58;
      v38 = StringLiteral_1058/*"/"*/;
      goto LABEL_49;
    case 2:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A4BBE1 )
      {
        sub_1B863B8(&ManagerConfig_TypeInfo, *(_QWORD *)&addressType);
        byte_4A4BBE1 = 1;
      }
      if ( ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        v39 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v39->ReleaseDataServerAddress;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v39 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v39->ReleaseDataServerAddress;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v39 = ManagerConfig_TypeInfo->static_fields;
        }
      }
      v54 = System_String__Concat_61685428(
              ReleaseDataServerAddress,
              (System_String_o *)StringLiteral_1058/*"/"*/,
              v39->PlatformName,
              (System_String_o *)StringLiteral_1058/*"/"*/,
              0LL);
      goto LABEL_53;
    case 3:
      dataServerAddress = (System_String_o *)sub_1B86460(string___TypeInfo, 5LL);
      v25 = (__int64)dataServerAddress;
      v43 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v43 = NetworkManager_TypeInfo;
      }
      if ( !v25 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v25 + 24) )
        goto LABEL_58;
      dataServerRedirectAddress = v43->static_fields->dataServerRedirectAddress;
      *(_QWORD *)(v25 + 32) = dataServerRedirectAddress;
      sub_1B8635C((CGThumbnailListItem_o *)(v25 + 32), (int32_t)dataServerRedirectAddress, v41, v42);
      if ( *(_DWORD *)(v25 + 24) <= 1u )
        goto LABEL_58;
      v47 = StringLiteral_1058/*"/"*/;
      *(_QWORD *)(v25 + 40) = StringLiteral_1058/*"/"*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v25 + 40), v47, v45, v46);
      if ( *(_DWORD *)(v25 + 24) <= 2u )
        goto LABEL_58;
      v50 = NetworkManager_TypeInfo->static_fields->dataServerFolder;
      *(_QWORD *)(v25 + 48) = v50;
      sub_1B8635C((CGThumbnailListItem_o *)(v25 + 48), (int32_t)v50, v48, v49);
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( *(_DWORD *)(v25 + 24) <= 3u
        || (v53 = *(_QWORD *)(*(_QWORD *)&dataServerAddress[7].fields + 128LL),
            *(_QWORD *)(v25 + 56) = v53,
            sub_1B8635C((CGThumbnailListItem_o *)(v25 + 56), v53, v51, v52),
            *(_DWORD *)(v25 + 24) <= 4u) )
      {
LABEL_58:
        sub_1B8661C(dataServerAddress, v17);
      }
      v38 = StringLiteral_1058/*"/"*/;
LABEL_49:
      *(_QWORD *)(v25 + 64) = v38;
      sub_1B8635C((CGThumbnailListItem_o *)(v25 + 64), v38, v36, v37);
      v54 = System_String__Concat_61685692((System_String_array *)v25, 0LL);
      v57 = NetworkManager_TypeInfo;
LABEL_54:
      v58 = (CGThumbnailListItem_c *)v54;
      v59 = (CGThumbnailListItem_o *)&v57->static_fields->dataServerAddress;
      v59->klass = v58;
      sub_1B8635C(v59, (int32_t)v58, v55, v56);
      return;
    default:
      return;
  }
}


void __fastcall NetworkManager__setupWebViewAddress(
        System_String_o *baseURL,
        System_String_o *contactURL,
        System_Collections_Generic_Dictionary_string__object__o *filePassInfo,
        const MethodInfo *method)
{
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
  NetworkManager_c *v18; // x0
  CGThumbnailListItem_o *p_webViewBaseURL; // x0
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_object__object__o *webViewAddress; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *currentKey; // x21
  Il2CppObject *Item; // x0
  __int64 v26; // x1
  System_String_o *v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x22
  NetworkManager_c *v30; // x0
  System_Collections_Generic_Dictionary_object__object__o *v31; // x0
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A4DD27 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, contactURL);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__, v10);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__,
      v11);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__, v12);
    sub_1B863B8(&NetworkManager_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_17993/*"contact"*/, v14);
    sub_1B863B8(&StringLiteral_18331/*"deleteAccount"*/, v15);
    sub_1B863B8(&StringLiteral_1/*""*/, v16);
    sub_1B863B8(&StringLiteral_22454/*"privacyPolicy"*/, v17);
    byte_4A4DD27 = 1;
  }
  v18 = NetworkManager_TypeInfo;
  memset(&v36, 0, sizeof(v36));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v18 = NetworkManager_TypeInfo;
  }
  p_webViewBaseURL = (CGThumbnailListItem_o *)&v18->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (CGThumbnailListItem_c *)baseURL;
  sub_1B8635C(p_webViewBaseURL, (int32_t)baseURL, (int32_t)filePassInfo, method);
  webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)NetworkManager_TypeInfo->static_fields->webViewAddress;
  if ( !webViewAddress
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          webViewAddress,
          (const MethodInfo_32CE868 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        !filePassInfo)
    || (webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
                                                                                      (const MethodInfo_32CE3C0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__)) == 0LL )
  {
    sub_1B86614(webViewAddress, v20);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)webViewAddress,
    (const MethodInfo_352A2F4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v36,
            (const MethodInfo_33CA630 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    if ( !v22 )
      break;
    currentKey = v36.fields._currentKey;
    if ( !v36.fields._currentKey )
      sub_1B86614(v22, v23);
    if ( System_String__Equals_61680480(
           (System_String_o *)v36.fields._currentKey,
           (System_String_o *)StringLiteral_17993/*"contact"*/,
           0LL)
      || System_String__Equals_61680480((System_String_o *)currentKey, (System_String_o *)StringLiteral_22454/*"privacyPolicy"*/, 0LL)
      || System_String__Equals_61680480((System_String_o *)currentKey, (System_String_o *)StringLiteral_18331/*"deleteAccount"*/, 0LL) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
               currentKey,
               (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        sub_1B86614(0LL, v26);
      v27 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    else
    {
      v32 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
              currentKey,
              (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v32 )
        sub_1B86614(0LL, v33);
      v34 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v32->klass->vtable[3].method)(
                                 v32,
                                 v32->klass->vtable[4].methodPtr);
      v27 = System_String__Concat_61645176(baseURL, v34, 0LL);
    }
    v29 = (Il2CppObject *)v27;
    v30 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v30 = NetworkManager_TypeInfo;
    }
    v31 = (System_Collections_Generic_Dictionary_object__object__o *)v30->static_fields->webViewAddress;
    if ( !v31 )
      sub_1B86614(0LL, v28);
    System_Collections_Generic_Dictionary_object__object___Add(
      v31,
      currentKey,
      v29,
      (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v36,
    (const MethodInfo_33CA62C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager_LoginCallbackFunc___ctor(
        NetworkManager_LoginCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

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
      v9 = (Il2CppObject *)sub_19D3044;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D3024;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2FDC;
}


System_IAsyncResult_o *__fastcall NetworkManager_LoginCallbackFunc__BeginInvoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1B8636C(this, &v6, callback, object);
}


void __fastcall NetworkManager_LoginCallbackFunc__EndInvoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall NetworkManager_LoginCallbackFunc__Invoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager_ResultCallbackFunc___ctor(
        NetworkManager_ResultCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

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
      v9 = (Il2CppObject *)sub_19D2FA0;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D2F80;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2F38;
}


System_IAsyncResult_o *__fastcall NetworkManager_ResultCallbackFunc__BeginInvoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1B8636C(this, &v6, callback, object);
}


void __fastcall NetworkManager_ResultCallbackFunc__EndInvoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall NetworkManager_ResultCallbackFunc__Invoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager_StoreCallbackFunc___ctor(
        NetworkManager_StoreCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

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
      v9 = (Il2CppObject *)sub_19D30E8;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D30C8;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3080;
}


System_IAsyncResult_o *__fastcall NetworkManager_StoreCallbackFunc__BeginInvoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_String_o *url,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = url;
  return (System_IAsyncResult_o *)sub_1B8636C(this, &v6, callback, object);
}


void __fastcall NetworkManager_StoreCallbackFunc__EndInvoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall NetworkManager_StoreCallbackFunc__Invoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_String_o *url,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    url,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall NetworkManager__Initialize_d__83___ctor(
        NetworkManager__Initialize_d__83_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__Initialize_d__83__MoveNext(
        NetworkManager__Initialize_d__83_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager__Initialize_d__83_o *v4; // x20
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
  int32_t _1__state; // w8
  struct NetworkManager_o *_4__this; // x19
  const MethodInfo *v24; // x1
  struct ResponseCommandBase_array **p_commandList; // x21
  CGThumbnailListItem_o *p__2__current; // x20
  bool result; // w0
  ManagerConfig_c *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UnityEngine_Coroutine_o *communicationCoroutine; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  NetworkManager_c *v42; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v44; // x0
  int32_t v45; // w1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  long double v48; // q0
  __int64 v49; // x0
  __int64 v50; // x0
  UnityEngine_Object_o *v51; // x20
  System_Collections_Generic_List_object__o *v52; // x22
  PurchaseByBankResponseCommand_o *v53; // x23
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  MissionNotifyResponseCommand_o *v60; // x23
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  System_Object_array *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  System_Collections_Generic_Dictionary_object__object__o *v70; // x23
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct ResponseCommandBase_array *commandList; // x8
  __int64 v74; // x25
  int max_length; // w9
  __int64 v76; // x8
  Il2CppObject *v77; // x23
  System_Collections_Generic_Dictionary_object__object__o *commandLookup; // x24

  v4 = this;
  if ( (byte_4A4DD48 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__, v5);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo, v6);
    sub_1B863B8(&Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ResponseCommandBase__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ResponseCommandBase___ctor__, v10);
    sub_1B863B8(&System_Collections_Generic_List_ResponseCommandBase__TypeInfo, v11);
    sub_1B863B8(&ManagerConfig_TypeInfo, v12);
    sub_1B863B8(&MissionNotifyResponseCommand_TypeInfo, v13);
    sub_1B863B8(&NetworkManager_TypeInfo, v14);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B863B8(&PurchaseByBankResponseCommand_TypeInfo, v16);
    sub_1B863B8(&Method_System_Collections_Generic_Queue_RequestBase__Clear__, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__, v19);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    this = (NetworkManager__Initialize_d__83_o *)sub_1B863B8(&StringLiteral_1/*""*/, v21);
    byte_4A4DD48 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_49;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_49;
    NetworkManager__ClearAuth((NetworkManager_o *)this, method);
    NetworkManager__ReadServerSetting(_4__this, v24);
    p_commandList = &_4__this->fields.commandList;
    if ( !_4__this->fields.commandList )
    {
      v52 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ResponseCommandBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v52,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ResponseCommandBase___ctor__);
      v53 = (PurchaseByBankResponseCommand_o *)sub_1B86604(PurchaseByBankResponseCommand_TypeInfo);
      PurchaseByBankResponseCommand___ctor(v53, 0LL);
      if ( !v52 )
        goto LABEL_49;
      items = v52->fields._items;
      v57 = Method_System_Collections_Generic_List_ResponseCommandBase__Add__;
      ++v52->fields._version;
      if ( !items )
        goto LABEL_49;
      size = v52->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)v53,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &items->obj.klass + size;
        v52->fields._size = size + 1;
        v59[4] = (Il2CppClass *)v53;
        sub_1B8635C((CGThumbnailListItem_o *)(v59 + 4), (int32_t)v53, v54, v55);
      }
      v60 = (MissionNotifyResponseCommand_o *)sub_1B86604(MissionNotifyResponseCommand_TypeInfo);
      MissionNotifyResponseCommand___ctor(v60, 0LL);
      v63 = v52->fields._items;
      v64 = Method_System_Collections_Generic_List_ResponseCommandBase__Add__;
      ++v52->fields._version;
      if ( !v63 )
        goto LABEL_49;
      v65 = v52->fields._size;
      if ( (unsigned int)v65 >= v63->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)v60,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = &v63->obj.klass + v65;
        v52->fields._size = v65 + 1;
        v66[4] = (Il2CppClass *)v60;
        sub_1B8635C((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v60, v61, v62);
      }
      v67 = System_Collections_Generic_List_object___ToArray(
              v52,
              (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__);
      _4__this->fields.commandList = (struct ResponseCommandBase_array *)v67;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.commandList, (int32_t)v67, v68, v69);
      v70 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v70,
        (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__);
      _4__this->fields.commandLookup = (struct System_Collections_Generic_Dictionary_string__ResponseCommandBase__o *)v70;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.commandLookup, (int32_t)v70, v71, v72);
      commandList = _4__this->fields.commandList;
      if ( !commandList )
        goto LABEL_49;
      v74 = 0LL;
      while ( 1 )
      {
        max_length = commandList->max_length;
        if ( (int)v74 >= max_length )
          break;
        if ( (unsigned int)v74 >= max_length )
          sub_1B8661C(this, method);
        v76 = (__int64)commandList + 8 * v74;
        v77 = *(Il2CppObject **)(v76 + 32);
        if ( v77 )
        {
          commandLookup = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.commandLookup;
          this = (NetworkManager__Initialize_d__83_o *)ResponseCommandBase__GetCommandName(
                                                         *(ResponseCommandBase_o **)(v76 + 32),
                                                         0LL);
          if ( commandLookup )
          {
            System_Collections_Generic_Dictionary_object__object___Add(
              commandLookup,
              (Il2CppObject *)this,
              v77,
              (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__);
            commandList = *p_commandList;
            ++v74;
            if ( *p_commandList )
              continue;
          }
        }
        goto LABEL_49;
      }
    }
    NetworkManager__InitializeUserAgent(_4__this, method);
LABEL_9:
    if ( _4__this->fields._isWaitUserAgent_k__BackingField )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(p__2__current, 0, v2, v3);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    v28 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v28 = ManagerConfig_TypeInfo;
    }
    if ( v28->static_fields->UseAppServer )
      NetworkServicePluginScript__CheckService(0LL);
    this = (NetworkManager__Initialize_d__83_o *)_4__this->fields.communicationWaitList;
    if ( this )
    {
      System_Collections_Generic_Queue_object___Clear(
        (System_Collections_Generic_Queue_T__o *)this,
        (const MethodInfo_3771514 *)Method_System_Collections_Generic_Queue_RequestBase__Clear__);
      communicationCoroutine = _4__this->fields.communicationCoroutine;
      if ( communicationCoroutine )
        UnityEngine_MonoBehaviour__StopCoroutine_69342076(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          communicationCoroutine,
          0LL);
      _4__this->fields.communicationWork = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.communicationWork, 0, v29, v30);
      _4__this->fields.communicationCoroutine = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.communicationCoroutine, 0, v32, v33);
      _4__this->fields.communicationWorkResponseList = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.communicationWorkResponseList, 0, v34, v35);
      _4__this->fields.cacheRefreshWork = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.cacheRefreshWork, 0, v36, v37);
      _4__this->fields.cacheRefreshWorkResponseList = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.cacheRefreshWorkResponseList, 0, v38, v39);
      v42 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v42 = NetworkManager_TypeInfo;
      }
      static_fields = v42->static_fields;
      static_fields->sessionId = 0LL;
      static_fields = (struct NetworkManager_StaticFields *)((char *)static_fields + 136);
      static_fields[-1].serverRedirectSecurity = 0;
      LOWORD(static_fields->WebCacheTime) = 0;
      sub_1B8635C((CGThumbnailListItem_o *)static_fields, 0, v40, v41);
      v44 = NetworkManager_TypeInfo->static_fields;
      v45 = (int)StringLiteral_1/*""*/;
      v44->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1B8635C((CGThumbnailListItem_o *)&v44->dataServerFolder, v45, v46, v47);
      v49 = *((_QWORD *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__ + 4);
      if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
        v49 = sub_1BD6A48(v48);
      v50 = *(_QWORD *)(*(_QWORD *)(v49 + 192) + 16LL);
      if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
        v50 = sub_1BD6A48(v48);
      v51 = **(UnityEngine_Object_o ***)(v50 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v51, 0LL, 0LL) )
      {
        this = (NetworkManager__Initialize_d__83_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)_4__this,
                                                       0LL);
        if ( !this )
          goto LABEL_49;
        UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2FC0D08 *)Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___);
      }
      this = (NetworkManager__Initialize_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        DataManager__Initialize((DataManager_o *)this, 0LL);
        this = (NetworkManager__Initialize_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
        if ( this )
        {
          AvalonNotificationManager__Initialize((AvalonNotificationManager_o *)this, 0LL);
          return 0;
        }
      }
    }
LABEL_49:
    sub_1B86614(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall NetworkManager__Initialize_d__83__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__Initialize_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__Initialize_d__83__System_Collections_IEnumerator_Reset(
        NetworkManager__Initialize_d__83_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_NetworkManager__Initialize_d__83_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall NetworkManager__Initialize_d__83__System_Collections_IEnumerator_get_Current(
        NetworkManager__Initialize_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__Initialize_d__83__System_IDisposable_Dispose(
        NetworkManager__Initialize_d__83_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__RequestApplicationUpdateCR_d__219___ctor(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__RequestApplicationUpdateCR_d__219__MoveNext(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager__RequestApplicationUpdateCR_d__219_o *v4; // x19
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
  struct System_String_o *storeName; // x8
  System_String_o **p_storeName; // x21
  int32_t v20; // w1
  ManagerConfig_c *v21; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  CGThumbnailListItem_o *p_id; // x0
  struct System_String_o *iOSApplicationID; // x1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v25; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v26; // x8
  NetworkManager__RequestApplicationUpdateCR_d__219_o *v27; // x20
  NetworkManager__RequestApplicationUpdateCR_d__219_o *v28; // x20
  Il2CppObject *Item; // x20
  System_Object_array *v30; // x0
  __int64 v31; // x8
  System_Object_array *v32; // x20
  System_Collections_Generic_Dictionary_object__object__o *v33; // x0
  __int64 v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  CGThumbnailListItem_o *p_url_5__2; // x0
  System_String_o *v39; // x20
  DelightWorks_Network_UnityWebRequestWWW_o *v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *www_5__3; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  bool result; // w0
  struct NetworkManager_StoreCallbackFunc_o *callback; // x8
  UnityEngine_WaitForSeconds_o *v49; // x20
  CGThumbnailListItem_o *v50; // x19
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int v53; // w8
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_String_o *id; // x1
  System_String_o **v57; // x21
  ManagerConfig_c *v58; // x0
  struct System_String_o *AndroidPackageName; // x1
  System_String_o *v60; // x0
  UnityEngine_WaitForSeconds_o *v61; // x20
  int32_t v62; // w2
  const MethodInfo *v63; // x3

  v4 = this;
  if ( (byte_4A4DD49 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B863B8(&Method_JsonManager_DeserializeArray_Dictionary_string__object____, v6);
    sub_1B863B8(&JsonManager_TypeInfo, v7);
    sub_1B863B8(&ManagerConfig_TypeInfo, v8);
    sub_1B863B8(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v9);
    sub_1B863B8(&UnityEngine_WaitForSeconds_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_23864/*"trackViewUrl"*/, v11);
    sub_1B863B8(&StringLiteral_512/*"&country=jp"*/, v12);
    sub_1B863B8(&StringLiteral_19818/*"https://play.google.com/store/apps/details?id="*/, v13);
    sub_1B863B8(&StringLiteral_2274/*"Android"*/, v14);
    sub_1B863B8(&StringLiteral_22758/*"results"*/, v15);
    sub_1B863B8(&StringLiteral_19816/*"https://itunes.apple.com/lookup?id="*/, v16);
    this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)sub_1B863B8(&StringLiteral_19834/*"iOS"*/, v17);
    byte_4A4DD49 = 1;
  }
  switch ( v4->fields.__1__state )
  {
    case 0:
      p_storeName = &v4->fields.storeName;
      storeName = v4->fields.storeName;
      v4->fields.__1__state = -1;
      if ( !storeName )
      {
        v20 = StringLiteral_2274/*"Android"*/;
        *p_storeName = (System_String_o *)StringLiteral_2274/*"Android"*/;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.storeName, v20, v2, v3);
      }
      v4->fields._url_5__2 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._url_5__2, 0, v2, v3);
      if ( System_String__op_Equality(v4->fields.storeName, (System_String_o *)StringLiteral_19834/*"iOS"*/, 0LL) )
      {
        if ( !v4->fields.id )
        {
          v21 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v21 = ManagerConfig_TypeInfo;
          }
          static_fields = v21->static_fields;
          p_id = (CGThumbnailListItem_o *)&v4->fields.id;
          iOSApplicationID = static_fields->iOSApplicationID;
          v4->fields.id = iOSApplicationID;
LABEL_33:
          sub_1B8635C(p_id, (int32_t)iOSApplicationID, v2, v3);
        }
        v39 = System_String__Concat_61683424(
                (System_String_o *)StringLiteral_19816/*"https://itunes.apple.com/lookup?id="*/,
                v4->fields.id,
                (System_String_o *)StringLiteral_512/*"&country=jp"*/,
                0LL);
        v40 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B86604(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
        DelightWorks_Network_UnityWebRequestWWW___ctor(v40, v39, 0LL);
        v4->fields._www_5__3 = v40;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._www_5__3, (int32_t)v40, v41, v42);
        www_5__3 = (Il2CppObject *)v4->fields._www_5__3;
        v4->fields.__2__current = www_5__3;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(p__2__current, (int32_t)www_5__3, v45, v46);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      if ( !System_String__op_Equality(*p_storeName, (System_String_o *)StringLiteral_2274/*"Android"*/, 0LL) )
        goto LABEL_47;
      v57 = &v4->fields.id;
      id = v4->fields.id;
      if ( !id )
      {
        v58 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v58 = ManagerConfig_TypeInfo;
        }
        AndroidPackageName = v58->static_fields->AndroidPackageName;
        *v57 = AndroidPackageName;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.id, (int32_t)AndroidPackageName, v54, v55);
        id = *v57;
      }
      v60 = System_String__Concat_61645176((System_String_o *)StringLiteral_19818/*"https://play.google.com/store/apps/details?id="*/, id, 0LL);
      v37 = (int)v60;
      v4->fields._url_5__2 = v60;
      p_url_5__2 = (CGThumbnailListItem_o *)&v4->fields._url_5__2;
      goto LABEL_46;
    case 1:
      v25 = v4->fields._www_5__3;
      v4->fields.__1__state = -1;
      if ( !v25 )
        goto LABEL_49;
      this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)System_String__IsNullOrEmpty(
                                                                      v25->fields._error_k__BackingField,
                                                                      0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_38;
      v26 = v4->fields._www_5__3;
      if ( !v26 )
        goto LABEL_49;
      if ( System_String__IsNullOrEmpty(v26->fields._error_k__BackingField, 0LL) )
      {
        this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)v4->fields._www_5__3;
        if ( !this )
          goto LABEL_49;
        this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)DelightWorks_Network_UnityWebRequestWWW__get_text(
                                                                        (DelightWorks_Network_UnityWebRequestWWW_o *)this,
                                                                        0LL);
        if ( !v4->fields._www_5__3 )
          goto LABEL_49;
        v27 = this;
        DelightWorks_Network_UnityWebRequestWWW__Dispose(v4->fields._www_5__3, 0LL);
        if ( !JsonManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)JsonManager__getDictionary(
                                                                        (System_String_o *)v27,
                                                                        0LL);
        if ( !this )
          goto LABEL_49;
        v28 = this;
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)this,
               (Il2CppObject *)StringLiteral_22758/*"results"*/,
               (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)v28,
                   (Il2CppObject *)StringLiteral_22758/*"results"*/,
                   (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v30 = JsonManager__DeserializeArray_object_(
                  Item,
                  (const MethodInfo_2FD883C *)Method_JsonManager_DeserializeArray_Dictionary_string__object____);
          if ( v30 )
          {
            v31 = *(_QWORD *)&v30->max_length;
            v32 = v30;
            if ( v31 )
            {
              if ( !(_DWORD)v31 )
                goto LABEL_50;
              v33 = (System_Collections_Generic_Dictionary_object__object__o *)v30->m_Items[0];
              if ( v33 )
              {
                v30 = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                               v33,
                                               (Il2CppObject *)StringLiteral_23864/*"trackViewUrl"*/,
                                               (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)v30 & 1) != 0 )
                {
                  if ( v32->max_length )
                  {
                    this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)v32->m_Items[0];
                    if ( this )
                    {
                      this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                      (Il2CppObject *)StringLiteral_23864/*"trackViewUrl"*/,
                                                                                      (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                      if ( this )
                      {
                        v34 = ((__int64 (__fastcall *)(NetworkManager__RequestApplicationUpdateCR_d__219_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                this,
                                this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                        v37 = v34;
                        v4->fields._url_5__2 = (struct System_String_o *)v34;
                        p_url_5__2 = (CGThumbnailListItem_o *)&v4->fields._url_5__2;
LABEL_46:
                        sub_1B8635C(p_url_5__2, v37, v35, v36);
                        goto LABEL_47;
                      }
                    }
LABEL_49:
                    sub_1B86614(this, method);
                  }
LABEL_50:
                  sub_1B8661C(v30, method);
                }
              }
            }
          }
        }
LABEL_47:
        v61 = (UnityEngine_WaitForSeconds_o *)sub_1B86604(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v61, 0.5, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v61;
        v50 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(v50, (int32_t)v61, v62, v63);
        v53 = 3;
        goto LABEL_48;
      }
LABEL_38:
      this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)v4->fields._www_5__3;
      if ( !this )
        goto LABEL_49;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v49 = (UnityEngine_WaitForSeconds_o *)sub_1B86604(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v49, 1.0, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v49;
      v50 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(v50, (int32_t)v49, v51, v52);
      v53 = 2;
LABEL_48:
      LODWORD(v50[-1].fields._ThumbnailSpritePath_k__BackingField) = v53;
      return 1;
    case 2:
      v4->fields._www_5__3 = 0LL;
      p_id = (CGThumbnailListItem_o *)&v4->fields._www_5__3;
      v4->fields.__1__state = -1;
      LODWORD(iOSApplicationID) = 0;
      goto LABEL_33;
    case 3:
      callback = v4->fields.callback;
      v4->fields.__1__state = -1;
      if ( callback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))callback->fields.m_target)(
          callback->fields.original_method_info,
          v4->fields._url_5__2,
          *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall NetworkManager__RequestApplicationUpdateCR_d__219__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__RequestApplicationUpdateCR_d__219__System_Collections_IEnumerator_Reset(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_NetworkManager__RequestApplicationUpdateCR_d__219_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall NetworkManager__RequestApplicationUpdateCR_d__219__System_Collections_IEnumerator_get_Current(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__RequestApplicationUpdateCR_d__219__System_IDisposable_Dispose(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__RequestCR_d__214___ctor(
        NetworkManager__RequestCR_d__214_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__RequestCR_d__214__MoveNext(
        NetworkManager__RequestCR_d__214_o *this,
        const MethodInfo *method)
{
  NetworkManager__RequestCR_d__214_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x1
  __int64 v104; // x1
  __int64 v105; // x1
  __int64 v106; // x1
  __int64 v107; // x1
  __int64 v108; // x1
  __int64 v109; // x1
  __int64 v110; // x1
  __int64 v111; // x1
  __int64 v112; // x1
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  __int64 v117; // x1
  __int64 v118; // x1
  __int64 v119; // x1
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x1
  __int64 v123; // x1
  __int64 v124; // x1
  __int64 v125; // x1
  __int64 v126; // x1
  __int64 v127; // x1
  __int64 v128; // x1
  struct NetworkManager_o *_4__this; // x20
  struct RequestBase_o *work; // x8
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  System_String_o *v133; // x21
  System_String_o *v134; // x22
  System_String_o *v135; // x23
  struct RequestBase_o *v136; // x8
  NetworkManager__RequestCR_d__214_o *v137; // x19
  System_Action_o *v138; // x19
  const MethodInfo *v139; // x6
  struct DelightWorks_Network_UnityWebRequestWWW_o *www_5__10; // x8
  DelightWorks_Network_UnityWebRequestWWW_o **p_www_5__10; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v142; // x8
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  DelightWorks_Network_UnityWebRequestWWW_o *v145; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v146; // x8
  NetworkManager__RequestCR_d__214_o **v147; // x21
  System_String_o *v148; // x0
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v154; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  int v158; // w8
  const MethodInfo *v159; // x1
  uint64_t v160; // x21
  struct RequestBase_o *v161; // x8
  __int64 methodPtr_low; // x11
  ManagerConfig_c *v163; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  __int64 v165; // x0
  System_String_o *v166; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v167; // x20
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  Il2CppObject *v170; // x1
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  System_String_o **p_data_5__2; // x21
  __int64 v174; // x0
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  const MethodInfo *v177; // x3
  UnityEngine_WWWForm_o *WWWForm; // x21
  System_Collections_Generic_Dictionary_object__object__o *v179; // x22
  Il2CppObject *v180; // x23
  Il2CppObject *key; // x24
  Il2CppObject *v182; // x24
  Il2CppObject *v183; // x0
  __int64 v184; // x1
  struct System_Collections_Generic_Queue_RequestBase__o *communicationWaitList; // x8
  float progress_k__BackingField; // s8
  float loadProgress_5__13; // s9
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  float v190; // s0
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  struct System_Collections_Generic_Queue_RequestBase__o *v193; // x8
  int32_t v194; // w1
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  __int64 *v197; // x8
  struct System_String_o *error_k__BackingField; // x1
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  NetworkManager_c *v201; // x0
  NetworkManager_c *v202; // x0
  int32_t v203; // w1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v204; // x8
  Il2CppObject *v205; // x24
  NetworkManager__RequestCR_d__214_o *v206; // x24
  System_String_o *v207; // x24
  uint32_t v208; // w0
  __int64 *v209; // x8
  int32_t v210; // w1
  __int64 v211; // x1
  CGThumbnailListItem_o *p_errorAction_5__5; // x0
  System_Collections_Generic_Dictionary_object__object__o *responseHeaders_k__BackingField; // x0
  System_String_o *v214; // x0
  int64_t v215; // x22
  NetworkManager_c *v216; // x8
  struct NetworkManager_StaticFields *v217; // x8
  int64_t startTime_5__8; // x9
  int32_t v219; // w2
  const MethodInfo *v220; // x3
  int32_t v221; // w2
  const MethodInfo *v222; // x3
  System_String_o **p_errorCode_5__3; // x24
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  int32_t v226; // w1
  int32_t v227; // w1
  int32_t v228; // w2
  const MethodInfo *v229; // x3
  int32_t v230; // w1
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  CGThumbnailListItem_o *v235; // x0
  int32_t v236; // w1
  int32_t v237; // w2
  const MethodInfo *v238; // x3
  int32_t v239; // w1
  int32_t v240; // w1
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  bool v243; // w25
  int32_t v244; // w2
  const MethodInfo *v245; // x3
  int32_t v246; // w2
  const MethodInfo *v247; // x3
  System_String_o **v248; // x22
  System_String_o *errorLocalizeCode_5__4; // x26
  System_String_o *title; // x22
  __int64 v251; // x1
  System_String_o *errorAction_5__5; // x23
  int32_t v253; // w2
  const MethodInfo *v254; // x3
  __int64 *v255; // x8
  System_String_o *data_5__2; // x21
  NetworkManager__RequestCR_d__214_o *v257; // x21
  int32_t v258; // w2
  const MethodInfo *v259; // x3
  Il2CppObject *v260; // x22
  System_Object_array *v261; // x0
  ResponseData_array **p_responseList_5__7; // x22
  int32_t v263; // w2
  const MethodInfo *v264; // x3
  struct ResponseData_array *responseList_5__7; // x8
  __int64 v266; // x25
  int v267; // w9
  Il2CppClass **v268; // x8
  ResponseData_o *v269; // x23
  System_Collections_Generic_SortedDictionary_string__string__o *v270; // x23
  System_String_o *AuthCode; // x0
  NetworkManager_c *v272; // x8
  System_String_o *v273; // x23
  int32_t v274; // w8
  NetworkManager_c *v275; // x0
  __int64 *v276; // x8
  System_String_o *v277; // x24
  bool isNoRedirect_5__9; // w24
  DelightWorks_Network_UnityWebRequestWWW_o *v279; // x25
  int32_t v280; // w2
  const MethodInfo *v281; // x3
  struct RequestBase_o *v282; // x8
  __int64 v283; // x11
  struct RequestBase_o *v284; // x21
  __int64 v285; // x1
  ManagementManager_c *v286; // x0
  _BOOL4 isDuringStartup; // w8
  __int64 *v288; // x9
  __int64 *v289; // x10
  __int64 v290; // x1
  System_String_o *detail; // x23
  struct ResponseFailData_o *failData_5__6; // x8
  struct ResponseFailData_o *v293; // x8
  System_String_o *url; // x26
  struct ResponseFailData_o *v295; // x8
  struct ResponseFailData_o *v296; // x8
  struct ResponseFailData_o *v297; // x8
  System_String_o *v298; // x0
  struct ResponseFailData_o *v299; // x8
  System_String_o *v300; // x27
  const MethodInfo *v301; // x4
  bool v302; // w8
  bool result; // w0
  System_String_o *v304; // x27
  uint32_t v305; // w0
  const MethodInfo *v306; // x3
  ManagementManager_c *v307; // x0
  NetworkManager_c *v308; // x0
  struct ResponseFailData_o *v309; // x8
  int32_t errorType; // w24
  __int64 v311; // x1
  TerminalPramsManager_c *v312; // x0
  int32_t v313; // w2
  const MethodInfo *v314; // x3
  __int64 v315; // x1
  const MethodInfo *v316; // x3
  NetworkManager_c *v317; // x0
  NetworkManager_c *v318; // x0
  int32_t v319; // w1
  int32_t v320; // w1
  int32_t v321; // w2
  const MethodInfo *v322; // x3
  int32_t v323; // w1
  int32_t v324; // w2
  const MethodInfo *v325; // x3
  Il2CppObject *v326; // x22
  struct ResponseData_array *v327; // x8
  unsigned __int64 v328; // x22
  unsigned __int64 v329; // x9
  ResponseData_o *v330; // x21
  Il2CppObject *Instance; // x24
  ErrorDialog_ClickDelegate_o *v332; // x25
  struct DelightWorks_Network_UnityWebRequestWWW_o *v333; // x8
  Il2CppObject *wait_5__14; // x1
  System_String_o *text; // x0
  int32_t v336; // w2
  const MethodInfo *v337; // x3
  struct RequestBase_o *v338; // x8
  __int64 v339; // x10
  Il2CppObject *Item; // x22
  int _2__current; // w8
  System_String_array *v342; // x0
  int32_t v343; // w2
  const MethodInfo *v344; // x3
  NetworkManager_c *v345; // x8
  System_String_array *v346; // x22
  CGThumbnailListItem_o *v347; // x0
  int32_t v348; // w1
  int max_length; // w8
  unsigned int v350; // w25
  Il2CppClass **v351; // x8
  System_String_o *v352; // x23
  NetworkManager_c *v353; // x0
  System_String_o *v354; // x0
  CGThumbnailListItem_o *v355; // x8
  int32_t v356; // w2
  const MethodInfo *v357; // x3
  NetworkManager_c *v358; // x0
  System_Action_o *v359; // x24
  const MethodInfo *v360; // x5
  struct ResponseFailData_o *v361; // x8
  System_Action_o *v362; // x0
  __int64 *v363; // x8
  ManagementManager_c *v364; // x0
  struct ResponseFailData_o *v365; // x8
  ManagerConfig_c *v366; // x0
  __int64 v367; // x9
  float unscaledTime; // s0
  float timeout_5__11; // s1
  UnityEngine_WaitForEndOfFrame_o *v370; // x21
  int32_t v371; // w2
  const MethodInfo *v372; // x3
  int32_t v373; // w2
  const MethodInfo *v374; // x3
  NetworkManager__RequestCR_d__214_o *v375; // x25
  int32_t v376; // w1
  int32_t v377; // w2
  const MethodInfo *v378; // x3
  struct NetworkManager_o *nid; // x1
  int32_t v380; // w2
  const MethodInfo *v381; // x3
  int32_t v382; // w1
  int32_t v383; // w2
  const MethodInfo *v384; // x3
  struct System_String_o *resCode; // x1
  int32_t v386; // w2
  const MethodInfo *v387; // x3
  int32_t v388; // w1
  System_String_o *v389; // x0
  int32_t v390; // w2
  const MethodInfo *v391; // x3
  ResponseFailData_o *v392; // x26
  struct ResponseFailData_o **p_failData_5__6; // x25
  int32_t v394; // w2
  const MethodInfo *v395; // x3
  int32_t v396; // w2
  const MethodInfo *v397; // x3
  __int64 *p_action; // x8
  __int64 v399; // x1
  struct RequestBase_o *v400; // x8
  PurchaseByBank_UnityIap_Request_c *v401; // x9
  __int64 v402; // x11
  RequestBase_c *klass; // x8
  __int64 v404; // x10
  ResponseData_array *v405; // x22
  ResponseData_o *v406; // x0
  System_Collections_Generic_Dictionary_object__object__o *fail; // x0
  System_String_o *v408; // x22
  int32_t v409; // w2
  const MethodInfo *v410; // x3
  int32_t v411; // w1
  TitleRootComponent_c *v412; // x0
  Il2CppObject *v413; // x24
  AvalonSceneManager_c *v414; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x25
  Il2CppObject *v417; // x26
  struct NetworkManager___c_StaticFields *v418; // x0
  int32_t v419; // w2
  const MethodInfo *v420; // x3
  Il2CppObject *v421; // x24
  System_String_o *v422; // x25
  System_String_o *v423; // x26
  CommonConfirmDialog_ClickDelegate_o *v424; // x27
  const MethodInfo *v425; // x2
  struct ResponseFailData_o *v426; // x8
  System_String_o *sandboxDomain; // x22
  _BOOL4 sandboxSeurity; // w24
  int32_t v429; // w2
  const MethodInfo *v430; // x3
  struct ResponseFailData_o *v431; // x8
  struct System_String_o *sandboxAssetsDomain; // x22
  NetworkManager_c *v433; // x0
  struct NetworkManager_StaticFields *v434; // x0
  int32_t v435; // w2
  const MethodInfo *v436; // x3
  struct ResponseFailData_o *v437; // x8
  struct System_String_o *sandboxWebviewDomain; // x22
  NetworkManager_c *v439; // x0
  struct NetworkManager_StaticFields *v440; // x0
  const MethodInfo *v441; // x1
  NetworkManager_c *v442; // x0
  struct ResponseFailData_o *v443; // x8
  Il2CppObject *v444; // x24
  ErrorDialog_ClickDelegate_o *v445; // x25
  System_String_o *v446; // x0
  int32_t v447; // w2
  const MethodInfo *v448; // x3
  ResponseFailData_o *v449; // x22
  struct ResponseFailData_o **v450; // x21
  int32_t v451; // w2
  const MethodInfo *v452; // x3
  int32_t v453; // w2
  const MethodInfo *v454; // x3
  __int64 *v455; // x8
  ManagementManager_c *v456; // x0
  __int64 v457; // x1
  struct ResponseFailData_o *v458; // x8
  struct ResponseFailData_o *v459; // x8
  System_Action_o *v460; // x25
  const MethodInfo *v461; // x6
  int32_t v462; // w2
  const MethodInfo *v463; // x3
  int32_t v464; // w2
  const MethodInfo *v465; // x3
  int32_t v466; // w2
  const MethodInfo *v467; // x3
  int32_t v468; // w2
  const MethodInfo *v469; // x3
  int32_t v470; // w2
  const MethodInfo *v471; // x3
  UnityEngine_WaitForEndOfFrame_o *v472; // x20
  CGThumbnailListItem_o *v473; // x19
  int32_t v474; // w2
  const MethodInfo *v475; // x3
  CGThumbnailListItem_c *v476; // x19
  NetworkManager_c *v477; // x0
  CGThumbnailListItem_o *p_errorDialogResponseData; // x0
  ManagementManager_c *v479; // x0
  _BOOL4 v480; // w26
  Il2CppObject *v481; // x24
  ErrorDialog_ClickDelegate_o *v482; // x25
  __int64 *v483; // x8
  bool v484; // w0
  __int64 *v485; // x8
  System_String_o *v486; // x25
  System_String_o *v487; // x26
  ErrorDialog_ClickDelegate_o *v488; // x27
  ErrorDialog_ClickDelegate_o *v489; // x25
  __int64 v490; // x1
  struct System_String_o **p_errorLocalizeCode_5__4; // x23
  __int64 *v492; // x8
  __int64 v493; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v494; // [xsp+10h] [xbp-E0h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v496; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_SortedDictionary_string__string__o *authParams; // [xsp+70h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+78h] [xbp-78h] BYREF
  System_DateTime_o v499; // 0:x0.8
  System_DateTime_o v500; // 0:x0.8

  v2 = this;
  if ( (byte_4A4DD4A & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Application_TypeInfo, v3);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B863B8(&BattleData_TypeInfo, v5);
    sub_1B863B8(&char___TypeInfo, v6);
    sub_1B863B8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_1B863B8(&ErrorDialog_ClickDelegate_TypeInfo, v8);
    sub_1B863B8(&System_Convert_TypeInfo, v9);
    sub_1B863B8(&DataManager_TypeInfo, v10);
    sub_1B863B8(&System_DateTime_TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v20);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v21);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v24);
    sub_1B863B8(&Method_JsonManager_DeserializeArray_ResponseData___, v25);
    sub_1B863B8(&JsonManager_TypeInfo, v26);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v28);
    sub_1B863B8(&LocalizationManager_TypeInfo, v29);
    sub_1B863B8(&ManagementManager_TypeInfo, v30);
    sub_1B863B8(&ManagerConfig_TypeInfo, v31);
    sub_1B863B8(&Method_NetworkManager_OnClickErrorDialog__, v32);
    sub_1B863B8(&Method_NetworkManager_OnClickErrorReboot__, v33);
    sub_1B863B8(&Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__, v34);
    sub_1B863B8(&Method_NetworkManager_OnClickErrorRetryDialog__, v35);
    sub_1B863B8(&Method_NetworkManager_OnClickErrorStay__, v36);
    sub_1B863B8(&Method_NetworkManager_OnClickErrorTerminal__, v37);
    sub_1B863B8(&Method_NetworkManager_OnClickRefreshTerminal__, v38);
    sub_1B863B8(&Method_NetworkManager_OnClickReloadCache__, v39);
    sub_1B863B8(&Method_NetworkManager_OnClickStore__, v40);
    sub_1B863B8(&Method_NetworkManager_OnClickUserDelete__, v41);
    sub_1B863B8(&Method_NetworkManager__RequestCR_b__214_0__, v42);
    sub_1B863B8(&NetworkManager_TypeInfo, v43);
    sub_1B863B8(&PurchaseByBank_UnityIap_Request_TypeInfo, v44);
    sub_1B863B8(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v45);
    sub_1B863B8(&ResponseCommandKind_TypeInfo, v46);
    sub_1B863B8(&ResponseFailData_TypeInfo, v47);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v48);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v50);
    sub_1B863B8(&string___TypeInfo, v51);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v52);
    sub_1B863B8(&TitleRootComponent_TypeInfo, v53);
    sub_1B863B8(&TopGameDataRequest_TypeInfo, v54);
    sub_1B863B8(&TopLoginRequest_TypeInfo, v55);
    sub_1B863B8(&Method_NetworkManager___c__RequestCR_b__214_1__, v56);
    sub_1B863B8(&NetworkManager___c_TypeInfo, v57);
    sub_1B863B8(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v58);
    sub_1B863B8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v59);
    sub_1B863B8(&UnityEngine_WaitForSeconds_TypeInfo, v60);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v61);
    sub_1B863B8(&StringLiteral_15474/*"X-SERVER-TIME"*/, v62);
    sub_1B863B8(&StringLiteral_18246/*"data_update"*/, v63);
    sub_1B863B8(&StringLiteral_9107/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/, v64);
    sub_1B863B8(&StringLiteral_20556/*"invalid_battle"*/, v65);
    sub_1B863B8(&StringLiteral_22702/*"reload_cache"*/, v66);
    sub_1B863B8(&StringLiteral_7120/*"HTTP"*/, v67);
    sub_1B863B8(&StringLiteral_1419/*"400"*/, v68);
    sub_1B863B8(&StringLiteral_22751/*"result"*/, v69);
    sub_1B863B8(&StringLiteral_9106/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/, v70);
    sub_1B863B8(&StringLiteral_19622/*"goto_login_access"*/, v71);
    sub_1B863B8(&StringLiteral_20516/*"internal server error"*/, v72);
    sub_1B863B8(&StringLiteral_22743/*"response error "*/, v73);
    sub_1B863B8(&StringLiteral_22742/*"response"*/, v74);
    sub_1B863B8(&StringLiteral_23377/*"stay"*/, v75);
    sub_1B863B8(&StringLiteral_1421/*"401"*/, v76);
    sub_1B863B8(&StringLiteral_1423/*"403"*/, v77);
    sub_1B863B8(&StringLiteral_9095/*"NETWORK_ERROR_BOOT_MESSAGE"*/, v78);
    sub_1B863B8(&StringLiteral_7580/*"Internal Server Error"*/, v79);
    sub_1B863B8(&StringLiteral_14993/*"User-Agent"*/, v80);
    sub_1B863B8(&StringLiteral_22763/*"retry"*/, v81);
    sub_1B863B8(&StringLiteral_9110/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/, v82);
    sub_1B863B8(&StringLiteral_9108/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/, v83);
    sub_1B863B8(&StringLiteral_16788/*"background cancel"*/, v84);
    sub_1B863B8(&StringLiteral_1433/*"500"*/, v85);
    sub_1B863B8(&StringLiteral_9099/*"NETWORK_ERROR_CSID_CODE"*/, v86);
    sub_1B863B8(&StringLiteral_22744/*"response execute error "*/, v87);
    sub_1B863B8(&StringLiteral_17501/*"canceled_purchase_error"*/, v88);
    sub_1B863B8(&StringLiteral_1435/*"502"*/, v89);
    sub_1B863B8(&StringLiteral_1437/*"503"*/, v90);
    sub_1B863B8(&StringLiteral_4691/*"Cookie"*/, v91);
    sub_1B863B8(&StringLiteral_9114/*"NETWORK_USER_DELETE_DECIDE"*/, v92);
    sub_1B863B8(&StringLiteral_20557/*"invalid_user"*/, v93);
    sub_1B863B8(&StringLiteral_9096/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, v94);
    sub_1B863B8(&StringLiteral_16583/*"app_version_up"*/, v95);
    sub_1B863B8(&StringLiteral_1768/*"?"*/, v96);
    sub_1B863B8(&StringLiteral_9109/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/, v97);
    sub_1B863B8(&StringLiteral_21949/*"none data"*/, v98);
    sub_1B863B8(&StringLiteral_9098/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, v99);
    sub_1B863B8(&StringLiteral_22327/*"path="*/, v100);
    sub_1B863B8(&StringLiteral_16730/*"authCode"*/, v101);
    sub_1B863B8(&StringLiteral_502/*"&"*/, v102);
    sub_1B863B8(&StringLiteral_22685/*"refresh_terminal"*/, v103);
    sub_1B863B8(&StringLiteral_19623/*"goto_title"*/, v104);
    sub_1B863B8(&StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, v105);
    sub_1B863B8(&StringLiteral_1503/*";"*/, v106);
    sub_1B863B8(&StringLiteral_17982/*"connect time over"*/, v107);
    sub_1B863B8(&StringLiteral_22661/*"reconnection"*/, v108);
    sub_1B863B8(&StringLiteral_12132/*"STATUS"*/, v109);
    sub_1B863B8(&StringLiteral_16367/*"_userId="*/, v110);
    sub_1B863B8(&StringLiteral_18429/*"do_signup"*/, v111);
    sub_1B863B8(&StringLiteral_9113/*"NETWORK_USER_DELETE_CANCEL"*/, v112);
    sub_1B863B8(&StringLiteral_17463/*"cache"*/, v113);
    sub_1B863B8(&StringLiteral_764/*")"*/, v114);
    sub_1B863B8(&StringLiteral_3681/*"COMMON_CONFIRM_RETRY"*/, v115);
    sub_1B863B8(&StringLiteral_23388/*"stay_no_dialog"*/, v116);
    sub_1B863B8(&StringLiteral_9111/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v117);
    sub_1B863B8(&StringLiteral_1425/*"404"*/, v118);
    sub_1B863B8(&StringLiteral_21950/*"none response data"*/, v119);
    sub_1B863B8(&StringLiteral_21083/*"maint"*/, v120);
    sub_1B863B8(&StringLiteral_22345/*"pending_purchase_error"*/, v121);
    sub_1B863B8(&StringLiteral_131/*" ("*/, v122);
    sub_1B863B8(&StringLiteral_1/*""*/, v123);
    sub_1B863B8(&StringLiteral_9097/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, v124);
    sub_1B863B8(&StringLiteral_11809/*"SET-COOKIE"*/, v125);
    sub_1B863B8(&StringLiteral_1402/*"302"*/, v126);
    sub_1B863B8(&StringLiteral_9112/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v127);
    this = (NetworkManager__RequestCR_d__214_o *)sub_1B863B8(&StringLiteral_1387/*"200"*/, v128);
    byte_4A4DD4A = 1;
  }
  authParams = 0LL;
  dateData = 0LL;
  memset(&v496, 0, sizeof(v496));
  value = 0LL;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      work = v2->fields.work;
      v2->fields.__1__state = -1;
      if ( !work )
        return 0;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      if ( UnityEngine_Application__get_internetReachability(0LL) )
        goto LABEL_486;
      v133 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v134 = LocalizationManager__Get((System_String_o *)StringLiteral_9098/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
      v135 = LocalizationManager__Get((System_String_o *)StringLiteral_9097/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, 0LL);
      this = (NetworkManager__RequestCR_d__214_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9096/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, 0LL);
      v136 = v2->fields.work;
      if ( !v136 )
        goto LABEL_548;
      v137 = this;
      if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v136->klass->vtable._8_isBackgroundRequest.method)(
              v136,
              v136->klass->vtable._9_isShowConnect.methodPtr) & 1) != 0 )
      {
        v138 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(v138, (Il2CppObject *)_4__this, Method_NetworkManager__RequestCR_b__214_0__, 0LL);
        if ( _4__this )
        {
          NetworkManager__WarningDialog(_4__this, v133, v134, 0LL, 1, v138, v139);
          return 0;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v332 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v332,
          (Il2CppObject *)_4__this,
          Method_NetworkManager_OnClickErrorRetryDialog__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenRetryDialog_30482476(
            (CommonUI_o *)Instance,
            v133,
            v134,
            v135,
            (System_String_o *)v137,
            v332,
            0,
            0LL);
          return 0;
        }
      }
      goto LABEL_548;
    case 1:
      delay = v2->fields.delay;
      v2->fields.__1__state = -1;
      if ( delay <= 0.0 )
        goto LABEL_32;
      v154 = (UnityEngine_WaitForSeconds_o *)sub_1B86604(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v154, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v154;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1B8635C(p__2__current, (int32_t)v154, v156, v157);
      v158 = 2;
      goto LABEL_331;
    case 2:
      v2->fields.__1__state = -1;
LABEL_32:
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      dateData = System_DateTime__get_Now(0LL).fields._dateData;
      v499.fields._dateData = (uint64_t)&dateData;
      v160 = System_DateTime__ToUniversalTime(v499, 0LL).fields._dateData;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v500.fields._dateData = v160;
      v2->fields._startTime_5__8 = NetworkManager__getTime_39521860(v500, v159);
      v161 = v2->fields.work;
      if ( v161 )
      {
        methodPtr_low = LOBYTE(TopGameDataRequest_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v161->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TopGameDataRequest_c *)v161->klass->_2.typeHierarchy[methodPtr_low - 1] == TopGameDataRequest_TypeInfo )
        {
          LOBYTE(v161) = v161[1].klass;
        }
        else
        {
          LOBYTE(v161) = 0;
        }
      }
      v2->fields._isNoRedirect_5__9 = (char)v161;
      v163 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v163 = ManagerConfig_TypeInfo;
      }
      static_fields = v163->static_fields;
      if ( !static_fields->UseMock )
      {
        if ( v2->fields._data_5__2 )
          goto LABEL_140;
        this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
        if ( !this )
          goto LABEL_548;
        WWWForm = RequestBase__getWWWForm((RequestBase_o *)this, &authParams, 0LL);
        v179 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__string__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v179,
          (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
        if ( !WWWForm )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)UnityEngine_WWWForm__get_headers(WWWForm, 0LL);
        if ( !this )
          goto LABEL_548;
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v494,
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (const MethodInfo_32CEB10 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
        v496 = v494;
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v496,
                  (const MethodInfo_33C9A8C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
        {
          key = v496.fields._current.fields.key;
          v180 = v496.fields._current.fields.value;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v182 = (Il2CppObject *)System_Convert__ToString_62726432((System_String_o *)key, 0LL);
          v183 = (Il2CppObject *)System_Convert__ToString_62726432((System_String_o *)v180, 0LL);
          if ( !v179 )
            sub_1B86614(v183, v184);
          System_Collections_Generic_Dictionary_object__object___Add(
            v179,
            v182,
            v183,
            (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v496,
          (const MethodInfo_33C9BAC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
        this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
        }
        if ( this[1].fields.work[1].fields.paramString )
        {
          if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
            j_il2cpp_runtime_class_init_0(this);
          if ( !v179 )
            goto LABEL_548;
          System_Collections_Generic_Dictionary_object__object___Add(
            v179,
            (Il2CppObject *)StringLiteral_14993/*"User-Agent"*/,
            (Il2CppObject *)NetworkManager_TypeInfo->static_fields->userAgent,
            (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
        }
        if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
        }
        if ( this[1].fields.work[3].fields.CallBack )
        {
          if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
            j_il2cpp_runtime_class_init_0(this);
          if ( !v179 )
            goto LABEL_548;
          System_Collections_Generic_Dictionary_object__object___Add(
            v179,
            (Il2CppObject *)StringLiteral_4691/*"Cookie"*/,
            (Il2CppObject *)NetworkManager_TypeInfo->static_fields->sessionId,
            (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
        }
        v270 = authParams;
        if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
          j_il2cpp_runtime_class_init_0(this);
        AuthCode = NetworkManager__GetAuthCode(v270, method);
        if ( AuthCode )
          UnityEngine_WWWForm__AddField(WWWForm, (System_String_o *)StringLiteral_16730/*"authCode"*/, AuthCode, 0LL);
        this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
        if ( !this )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                       this,
                                                       this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
        v272 = NetworkManager_TypeInfo;
        v273 = (System_String_o *)this;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v272 = NetworkManager_TypeInfo;
        }
        if ( v272->static_fields->userId )
        {
          if ( !v273 )
            goto LABEL_548;
          v274 = System_String__IndexOf_61703672(v273, (System_String_o *)StringLiteral_1768/*"?"*/, 0LL);
          v275 = NetworkManager_TypeInfo;
          if ( v274 >= 0 )
            v276 = &StringLiteral_502/*"&"*/;
          else
            v276 = &StringLiteral_1768/*"?"*/;
          v277 = (System_String_o *)*v276;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v275 = NetworkManager_TypeInfo;
          }
          v273 = System_String__Concat_61685428(
                   v273,
                   v277,
                   (System_String_o *)StringLiteral_16367/*"_userId="*/,
                   v275->static_fields->userId,
                   0LL);
        }
        UnityEngine_WWWForm__get_data(WWWForm, 0LL);
        isNoRedirect_5__9 = v2->fields._isNoRedirect_5__9;
        v279 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B86604(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
        DelightWorks_Network_UnityWebRequestWWW___ctor_37870740(
          v279,
          v273,
          WWWForm,
          (System_Collections_Generic_Dictionary_string__string__o *)v179,
          isNoRedirect_5__9,
          0LL);
        v2->fields._www_5__10 = v279;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._www_5__10, (int32_t)v279, v280, v281);
        v282 = v2->fields.work;
        if ( v282
          && (v283 = LOBYTE(TopGameDataRequest_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v282->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v283) )
        {
          if ( (TopGameDataRequest_c *)v282->klass->_2.typeHierarchy[v283 - 1] == TopGameDataRequest_TypeInfo )
            v284 = v2->fields.work;
          else
            v284 = 0LL;
        }
        else
        {
          v284 = 0LL;
        }
        v366 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v366 = ManagerConfig_TypeInfo;
        }
        v367 = 44LL;
        if ( !v284 )
          v367 = 40LL;
        v2->fields._timeout_5__11 = *(float *)((char *)&v366->static_fields->AppVer + v367);
        unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
        timeout_5__11 = v2->fields._timeout_5__11;
        v2->fields._loadProgress_5__13 = 0.0;
        v2->fields._requestTime_5__12 = unscaledTime + timeout_5__11;
        v370 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v370, 0LL);
        v2->fields._wait_5__14 = v370;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._wait_5__14, (int32_t)v370, v371, v372);
LABEL_15:
        p_www_5__10 = &v2->fields._www_5__10;
        www_5__10 = v2->fields._www_5__10;
        if ( !www_5__10 )
          goto LABEL_548;
        if ( !www_5__10->fields._isDone_k__BackingField )
        {
          this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
          if ( !this )
            goto LABEL_548;
          this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                         this,
                                                         this->klass[1]._1.image);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_75;
          if ( !_4__this )
            goto LABEL_548;
          communicationWaitList = _4__this->fields.communicationWaitList;
          if ( !communicationWaitList )
            goto LABEL_548;
          if ( communicationWaitList->fields._size <= 0 )
          {
LABEL_75:
            if ( !*p_www_5__10 )
              goto LABEL_548;
            progress_k__BackingField = (*p_www_5__10)->fields._progress_k__BackingField;
            loadProgress_5__13 = v2->fields._loadProgress_5__13;
            v190 = UnityEngine_Time__get_unscaledTime(0LL);
            if ( progress_k__BackingField != loadProgress_5__13 )
            {
              v333 = v2->fields._www_5__10;
              v2->fields._requestTime_5__12 = v190 + v2->fields._timeout_5__11;
              if ( !v333 )
                goto LABEL_548;
              v2->fields._loadProgress_5__13 = v333->fields._progress_k__BackingField;
LABEL_330:
              wait_5__14 = (Il2CppObject *)v2->fields._wait_5__14;
              v2->fields.__2__current = wait_5__14;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1B8635C(p__2__current, (int32_t)wait_5__14, v188, v189);
              v158 = 4;
              goto LABEL_331;
            }
            if ( v190 < v2->fields._requestTime_5__12 )
              goto LABEL_330;
          }
        }
        v142 = *p_www_5__10;
        if ( !*p_www_5__10 )
          goto LABEL_548;
        if ( !v142->fields._isDone_k__BackingField )
        {
          this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
          if ( !this )
            goto LABEL_548;
          this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                         this,
                                                         this->klass[1]._1.image);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_123;
          if ( !_4__this )
            goto LABEL_548;
          v193 = _4__this->fields.communicationWaitList;
          if ( !v193 )
            goto LABEL_548;
          if ( v193->fields._size >= 1 )
          {
            v194 = StringLiteral_16788/*"background cancel"*/;
            v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_16788/*"background cancel"*/;
            sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, v194, v191, v192);
            v197 = &StringLiteral_23377/*"stay"*/;
          }
          else
          {
LABEL_123:
            v210 = StringLiteral_17982/*"connect time over"*/;
            v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_17982/*"connect time over"*/;
            sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, v210, v191, v192);
            v197 = &StringLiteral_22763/*"retry"*/;
          }
          v211 = *v197;
          v2->fields._errorAction_5__5 = (struct System_String_o *)*v197;
          p_errorAction_5__5 = (CGThumbnailListItem_o *)&v2->fields._errorAction_5__5;
          goto LABEL_125;
        }
        this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(
                                                       v142->fields._error_k__BackingField,
                                                       0LL);
        v145 = *p_www_5__10;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v145 )
            goto LABEL_548;
          if ( v2->fields._isNoRedirect_5__9 )
          {
            DelightWorks_Network_UnityWebRequestWWW__Dispose(*p_www_5__10, 0LL);
          }
          else
          {
            text = DelightWorks_Network_UnityWebRequestWWW__get_text(*p_www_5__10, 0LL);
            v2->fields._data_5__2 = text;
            sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._data_5__2, (int32_t)text, v336, v337);
            this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
            }
            if ( !this[1].fields.work[3].fields.CallBack )
            {
              v338 = v2->fields.work;
              if ( v338 )
              {
                v339 = LOBYTE(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(v338->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v339
                  && (TopLoginRequest_c *)v338->klass->_2.typeHierarchy[v339 - 1] == TopLoginRequest_TypeInfo )
                {
                  if ( !*p_www_5__10 )
                    goto LABEL_548;
                  this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                  if ( !this )
                    goto LABEL_548;
                  this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                 (const MethodInfo_32CE3B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
                  if ( (int)this >= 1 )
                  {
                    if ( !*p_www_5__10 )
                      goto LABEL_548;
                    this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                    if ( !this )
                      goto LABEL_548;
                    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
                      &v494,
                      (System_Collections_Generic_Dictionary_object__object__o *)this,
                      (const MethodInfo_32CEB10 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
                    v496 = v494;
                    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                              &v496,
                              (const MethodInfo_33C9A8C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
                      ;
                    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                      &v496,
                      (const MethodInfo_33C9BAC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
                    if ( !*p_www_5__10 )
                      goto LABEL_548;
                    this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                    if ( !this )
                      goto LABEL_548;
                    this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                   (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                   (Il2CppObject *)StringLiteral_11809/*"SET-COOKIE"*/,
                                                                   (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      if ( !*p_www_5__10 )
                        goto LABEL_548;
                      this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                      if ( !this )
                        goto LABEL_548;
                      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                               (Il2CppObject *)StringLiteral_11809/*"SET-COOKIE"*/,
                               (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
                      this = (NetworkManager__RequestCR_d__214_o *)sub_1B86460(char___TypeInfo, 2LL);
                      if ( !this )
                        goto LABEL_548;
                      _2__current = (int)this->fields.__2__current;
                      method = (const MethodInfo *)this;
                      if ( !_2__current )
                        goto LABEL_550;
                      LOWORD(this->fields.work) = 32;
                      if ( _2__current == 1 )
                        goto LABEL_550;
                      WORD1(this->fields.work) = 59;
                      if ( !Item )
                        goto LABEL_548;
                      v342 = System_String__Split_61694488((System_String_o *)Item, (System_Char_array *)this, 1, 0LL);
                      v345 = NetworkManager_TypeInfo;
                      v346 = v342;
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v345 = NetworkManager_TypeInfo;
                      }
                      v347 = (CGThumbnailListItem_o *)v345->static_fields;
                      v348 = (int)StringLiteral_1/*""*/;
                      v347[1].klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
                      sub_1B8635C(v347 + 1, v348, v343, v344);
                      if ( !v346 )
                        goto LABEL_548;
                      max_length = v346->max_length;
                      if ( max_length >= 1 )
                      {
                        v350 = 0;
                        while ( v350 < max_length )
                        {
                          v351 = &v346->obj.klass + (int)v350;
                          v352 = (System_String_o *)v351[4];
                          if ( !v352 )
                            goto LABEL_548;
                          this = (NetworkManager__RequestCR_d__214_o *)System_String__StartsWith(
                                                                         (System_String_o *)v351[4],
                                                                         (System_String_o *)StringLiteral_22327/*"path="*/,
                                                                         0LL);
                          if ( ((unsigned __int8)this & 1) == 0 )
                          {
                            v353 = NetworkManager_TypeInfo;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              v353 = NetworkManager_TypeInfo;
                            }
                            v354 = System_String__Concat_61683424(
                                     v353->static_fields->sessionId,
                                     v352,
                                     (System_String_o *)StringLiteral_1503/*";"*/,
                                     0LL);
                            v355 = (CGThumbnailListItem_o *)NetworkManager_TypeInfo->static_fields;
                            v355[1].klass = (CGThumbnailListItem_c *)v354;
                            sub_1B8635C(v355 + 1, (int32_t)v354, v356, v357);
                            max_length = v346->max_length;
                            if ( (int)++v350 < max_length )
                              continue;
                          }
                          goto LABEL_126;
                        }
                        goto LABEL_550;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_126;
        }
        if ( !v145 )
          goto LABEL_548;
        error_k__BackingField = v145->fields._error_k__BackingField;
        v2->fields._errorCode_5__3 = error_k__BackingField;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, (int32_t)error_k__BackingField, v143, v144);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4A48C25 )
        {
          sub_1B863B8(&NetworkManager_TypeInfo, method);
          byte_4A48C25 = 1;
        }
        v201 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v201 = NetworkManager_TypeInfo;
        }
        if ( v201->static_fields->userIdNumber >= 1 )
        {
          if ( !v201->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v201);
          if ( !byte_4A48C25 )
          {
            sub_1B863B8(&NetworkManager_TypeInfo, method);
            byte_4A48C25 = 1;
          }
          v202 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v202 = NetworkManager_TypeInfo;
          }
          if ( v202->static_fields->userIdNumber % 10 == 1 )
          {
            this = (NetworkManager__RequestCR_d__214_o *)*p_www_5__10;
            if ( !*p_www_5__10 )
              goto LABEL_548;
            DelightWorks_Network_UnityWebRequestWWW__ExceptionLog(
              (DelightWorks_Network_UnityWebRequestWWW_o *)this,
              0LL);
          }
        }
        v203 = StringLiteral_22763/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22763/*"retry"*/;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v203, v199, v200);
        v204 = v2->fields._www_5__10;
        if ( !v204 )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)v204->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                       (const MethodInfo_32CE3B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
        if ( (int)this < 1 )
          goto LABEL_126;
        if ( !*p_www_5__10 )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                       (Il2CppObject *)StringLiteral_12132/*"STATUS"*/,
                                                       (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_126;
        if ( !*p_www_5__10 )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_548;
        v205 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)StringLiteral_12132/*"STATUS"*/,
                 (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        this = (NetworkManager__RequestCR_d__214_o *)sub_1B86460(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_548;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_550;
        LOWORD(this->fields.work) = 32;
        if ( !v205 )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)System_String__Split_61694488(
                                                       (System_String_o *)v205,
                                                       (System_Char_array *)this,
                                                       1,
                                                       0LL);
        if ( !this )
          goto LABEL_548;
        v206 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_126;
        this = (NetworkManager__RequestCR_d__214_o *)this->fields.work;
        if ( !this )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)System_String__StartsWith(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_7120/*"HTTP"*/,
                                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_126;
        if ( LODWORD(v206->fields.__2__current) <= 1 )
          goto LABEL_550;
        v207 = (System_String_o *)v206->fields.__4__this;
        v208 = PrivateImplementationDetails___ComputeStringHash(v207, 0LL);
        if ( v208 > 0x434FEE0C )
        {
          if ( v208 <= 0xAA3008DB )
          {
            if ( v208 == -1456470200 )
            {
              if ( !System_String__op_Equality(v207, (System_String_o *)StringLiteral_1421/*"401"*/, 0LL) )
                goto LABEL_541;
              v483 = &StringLiteral_9106/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/;
            }
            else
            {
              if ( v208 != -1439692581 || !System_String__op_Equality(v207, (System_String_o *)StringLiteral_1419/*"400"*/, 0LL) )
                goto LABEL_541;
              v483 = &StringLiteral_9111/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/;
            }
            v490 = *v483;
            v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v483;
            p_errorLocalizeCode_5__4 = &v2->fields._errorLocalizeCode_5__4;
            sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, v490, v195, v196);
            v211 = StringLiteral_19623/*"goto_title"*/;
LABEL_543:
            p_errorAction_5__5 = (CGThumbnailListItem_o *)&v2->fields._errorAction_5__5;
            p_errorLocalizeCode_5__4[1] = (struct System_String_o *)v211;
            goto LABEL_125;
          }
          if ( v208 == -1422914962 )
          {
            this = (NetworkManager__RequestCR_d__214_o *)System_String__op_Equality(
                                                           v207,
                                                           (System_String_o *)StringLiteral_1423/*"403"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_126;
            goto LABEL_541;
          }
          if ( v208 == -1372582105 )
          {
            if ( System_String__op_Equality(v207, (System_String_o *)StringLiteral_1425/*"404"*/, 0LL) )
            {
              v492 = &StringLiteral_9110/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/;
              goto LABEL_542;
            }
            goto LABEL_541;
          }
          if ( v208 != -1008248995 )
            goto LABEL_541;
          v485 = &StringLiteral_1387/*"200"*/;
        }
        else
        {
          if ( v208 <= 0x2D98A5D6 )
          {
            if ( v208 == 731423408 )
            {
              v209 = &StringLiteral_1433/*"500"*/;
              goto LABEL_540;
            }
            if ( v208 == 764978646 )
            {
              v209 = &StringLiteral_1435/*"502"*/;
LABEL_540:
              System_String__op_Equality(v207, (System_String_o *)*v209, 0LL);
            }
LABEL_541:
            v492 = &StringLiteral_9107/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
LABEL_542:
            v493 = *v492;
            v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v492;
            p_errorLocalizeCode_5__4 = &v2->fields._errorLocalizeCode_5__4;
            sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, v493, v195, v196);
            v211 = StringLiteral_22763/*"retry"*/;
            goto LABEL_543;
          }
          if ( v208 == 781756265 )
          {
            v209 = &StringLiteral_1437/*"503"*/;
            goto LABEL_540;
          }
          if ( v208 != 1129311756 )
            goto LABEL_541;
          v485 = &StringLiteral_1402/*"302"*/;
        }
        if ( System_String__op_Equality(v207, (System_String_o *)*v485, 0LL) )
        {
          p_errorAction_5__5 = (CGThumbnailListItem_o *)&v2->fields._errorCode_5__3;
          LODWORD(v211) = 0;
          v2->fields._errorCode_5__3 = 0LL;
LABEL_125:
          sub_1B8635C(p_errorAction_5__5, v211, v195, v196);
LABEL_126:
          if ( !*p_www_5__10 )
            goto LABEL_548;
          responseHeaders_k__BackingField = (System_Collections_Generic_Dictionary_object__object__o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
          if ( responseHeaders_k__BackingField )
          {
            this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                           responseHeaders_k__BackingField,
                                                           (const MethodInfo_32CE3B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
            if ( (int)this >= 1 )
            {
              if ( !*p_www_5__10 )
                goto LABEL_548;
              this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
              if ( !this )
                goto LABEL_548;
              this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             (Il2CppObject *)StringLiteral_15474/*"X-SERVER-TIME"*/,
                                                             (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !*p_www_5__10 )
                  goto LABEL_548;
                this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                if ( !this )
                  goto LABEL_548;
                this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                               (Il2CppObject *)StringLiteral_15474/*"X-SERVER-TIME"*/,
                                                               (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
                if ( !this )
                  goto LABEL_548;
                v214 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                            this,
                                            this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                v215 = System_Int64__Parse(v214, 0LL);
                v216 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v216 = NetworkManager_TypeInfo;
                }
                v217 = v216->static_fields;
                v217->serverTime = v215;
                startTime_5__8 = v2->fields._startTime_5__8;
                v217->nowTime = -1LL;
                v217->serverOffsetTime = v215 - startTime_5__8;
              }
            }
          }
          this = (NetworkManager__RequestCR_d__214_o *)*p_www_5__10;
          if ( !*p_www_5__10 )
            goto LABEL_548;
          DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
          v2->fields._www_5__10 = 0LL;
          sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._www_5__10, 0, v219, v220);
          v2->fields._wait_5__14 = 0LL;
          sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._wait_5__14, 0, v221, v222);
          goto LABEL_140;
        }
        goto LABEL_541;
      }
      if ( !v163->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v163);
        static_fields = ManagerConfig_TypeInfo->static_fields;
      }
      if ( static_fields->IsNetworkMock )
      {
        this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
        if ( !this )
          goto LABEL_548;
        v165 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                 this,
                 this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        if ( v165 )
        {
          v166 = (System_String_o *)v165;
          v167 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B86604(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
          DelightWorks_Network_UnityWebRequestWWW___ctor(v167, v166, 0LL);
          v2->fields._www_5__10 = v167;
          sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._www_5__10, (int32_t)v167, v168, v169);
          v170 = (Il2CppObject *)v2->fields._www_5__10;
          v2->fields.__2__current = v170;
          p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1B8635C(p__2__current, (int32_t)v170, v171, v172);
          v158 = 3;
LABEL_331:
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v158;
          return 1;
        }
      }
LABEL_49:
      p_data_5__2 = &v2->fields._data_5__2;
      if ( !v2->fields._data_5__2 )
      {
        this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
        if ( !this )
          goto LABEL_548;
        v174 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                 this,
                 this->klass->vtable._6_MoveNext.methodPtr);
        *p_data_5__2 = (System_String_o *)v174;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._data_5__2, v174, v175, v176);
        if ( System_String__op_Equality(*p_data_5__2, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
        {
          this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
          if ( !this )
            goto LABEL_548;
          this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                         this,
                                                         this->klass[1]._1.image);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
            if ( !this )
              goto LABEL_548;
            this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const char *))this->klass[1]._1.gc_desc)(
                                                           this,
                                                           this->klass[1]._1.name);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__214_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !this )
                goto LABEL_548;
              CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
            }
          }
          if ( _4__this )
          {
            NetworkManager__OnEndCommunication(_4__this, v2->fields.work, 0LL, v177);
            return 0;
          }
          goto LABEL_548;
        }
      }
LABEL_140:
      p_errorCode_5__3 = &v2->fields._errorCode_5__3;
      if ( v2->fields._errorCode_5__3 )
        goto LABEL_147;
      if ( System_String__IsNullOrEmpty(v2->fields._data_5__2, 0LL) )
      {
        v226 = StringLiteral_21949/*"none data"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_21949/*"none data"*/;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, v226, v224, v225);
        v227 = StringLiteral_9109/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9109/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, v227, v228, v229);
        v230 = StringLiteral_19623/*"goto_title"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_19623/*"goto_title"*/;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v230, v231, v232);
        if ( v2->fields._isNoRedirect_5__9 )
        {
          v235 = (CGThumbnailListItem_o *)&v2->fields._errorCode_5__3;
          v236 = 0;
          *p_errorCode_5__3 = 0LL;
LABEL_146:
          sub_1B8635C(v235, v236, v233, v234);
        }
LABEL_147:
        v243 = 0;
        goto LABEL_148;
      }
      if ( System_String__op_Equality(v2->fields._data_5__2, (System_String_o *)StringLiteral_7580/*"Internal Server Error"*/, 0LL) )
      {
        v239 = StringLiteral_20516/*"internal server error"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_20516/*"internal server error"*/;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, v239, v237, v238);
        v240 = StringLiteral_9107/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9107/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, v240, v241, v242);
        v236 = StringLiteral_22763/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22763/*"retry"*/;
        v235 = (CGThumbnailListItem_o *)&v2->fields._errorAction_5__5;
        goto LABEL_146;
      }
      data_5__2 = v2->fields._data_5__2;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      this = (NetworkManager__RequestCR_d__214_o *)JsonManager__getDictionary(data_5__2, 0LL);
      if ( !this )
        goto LABEL_548;
      v257 = this;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_22742/*"response"*/,
              (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v319 = StringLiteral_21950/*"none response data"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_21950/*"none response data"*/;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, v319, v258, v259);
        v320 = StringLiteral_9107/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9107/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, v320, v321, v322);
        v323 = StringLiteral_22763/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22763/*"retry"*/;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v323, v324, v325);
LABEL_312:
        v243 = 0;
        goto LABEL_313;
      }
      v260 = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v257,
               (Il2CppObject *)StringLiteral_22742/*"response"*/,
               (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v261 = JsonManager__DeserializeArray_object_(
               v260,
               (const MethodInfo_2FD883C *)Method_JsonManager_DeserializeArray_ResponseData___);
      v2->fields._responseList_5__7 = (struct ResponseData_array *)v261;
      p_responseList_5__7 = &v2->fields._responseList_5__7;
      sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._responseList_5__7, (int32_t)v261, v263, v264);
      responseList_5__7 = v2->fields._responseList_5__7;
      if ( !responseList_5__7 )
        goto LABEL_548;
      v266 = 0LL;
      while ( 1 )
      {
        v267 = responseList_5__7->max_length;
        if ( (int)v266 >= v267 )
          goto LABEL_312;
        if ( (unsigned int)v266 >= v267 )
          goto LABEL_550;
        v268 = &responseList_5__7->obj.klass + v266;
        v269 = (ResponseData_o *)v268[4];
        if ( !v269 )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)ResponseData__checkError_42282948((ResponseData_o *)v268[4], 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        responseList_5__7 = *p_responseList_5__7;
        ++v266;
        if ( !*p_responseList_5__7 )
          goto LABEL_548;
      }
      this = (NetworkManager__RequestCR_d__214_o *)sub_1B86460(string___TypeInfo, 5LL);
      if ( !this )
        goto LABEL_548;
      v375 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_550;
      v376 = StringLiteral_22743/*"response error "*/;
      this->fields.work = (struct RequestBase_o *)StringLiteral_22743/*"response error "*/;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.work, v376, v373, v374);
      if ( LODWORD(v375->fields.__2__current) <= 1 )
        goto LABEL_550;
      nid = (struct NetworkManager_o *)v269->fields.nid;
      v375->fields.__4__this = nid;
      sub_1B8635C((CGThumbnailListItem_o *)&v375->fields.__4__this, (int32_t)nid, v377, v378);
      if ( LODWORD(v375->fields.__2__current) <= 2
        || (v382 = StringLiteral_131/*" ("*/,
            *(_QWORD *)&v375->fields.delay = StringLiteral_131/*" ("*/,
            sub_1B8635C((CGThumbnailListItem_o *)&v375->fields.delay, v382, v380, v381),
            LODWORD(v375->fields.__2__current) <= 3)
        || (resCode = v269->fields.resCode,
            v375->fields._data_5__2 = resCode,
            sub_1B8635C((CGThumbnailListItem_o *)&v375->fields._data_5__2, (int32_t)resCode, v383, v384),
            LODWORD(v375->fields.__2__current) <= 4) )
      {
LABEL_550:
        sub_1B8661C(this, method);
      }
      v388 = StringLiteral_764/*")"*/;
      v375->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_764/*")"*/;
      sub_1B8635C((CGThumbnailListItem_o *)&v375->fields._errorCode_5__3, v388, v386, v387);
      v389 = System_String__Concat_61685692((System_String_array *)v375, 0LL);
      v2->fields._errorCode_5__3 = v389;
      sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, (int32_t)v389, v390, v391);
      v392 = (ResponseFailData_o *)sub_1B86604(ResponseFailData_TypeInfo);
      ResponseFailData___ctor(v392, v269, 0LL);
      v2->fields._failData_5__6 = v392;
      p_failData_5__6 = &v2->fields._failData_5__6;
      sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._failData_5__6, (int32_t)v392, v394, v395);
      if ( !v2->fields._failData_5__6 )
        goto LABEL_548;
      this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(
                                                     v2->fields._failData_5__6->fields.action,
                                                     0LL);
      p_action = &StringLiteral_22763/*"retry"*/;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !*p_failData_5__6 )
          goto LABEL_548;
        p_action = (__int64 *)&(*p_failData_5__6)->fields.action;
      }
      v399 = *p_action;
      v2->fields._errorAction_5__5 = (struct System_String_o *)*p_action;
      sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v399, v396, v397);
      v400 = v2->fields.work;
      if ( !v400 )
        goto LABEL_312;
      v401 = PurchaseByBank_UnityIap_Request_TypeInfo;
      v402 = LOBYTE(PurchaseByBank_UnityIap_Request_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v400->klass->vtable._0_Equals.methodPtr) < (unsigned int)v402
        || (PurchaseByBank_UnityIap_Request_c *)v400->klass->_2.typeHierarchy[v402 - 1] != PurchaseByBank_UnityIap_Request_TypeInfo )
      {
        v243 = 0;
        goto LABEL_405;
      }
      if ( !*p_failData_5__6 )
        goto LABEL_548;
      v484 = System_String__op_Equality((*p_failData_5__6)->fields.action, (System_String_o *)StringLiteral_22763/*"retry"*/, 0LL);
      v400 = v2->fields.work;
      v243 = v484;
      if ( v400 )
      {
        v401 = PurchaseByBank_UnityIap_Request_TypeInfo;
LABEL_405:
        klass = v400->klass;
        v404 = LOBYTE(v401->vtable._0_Equals.methodPtr);
        if ( LOBYTE(klass->vtable._0_Equals.methodPtr) >= (unsigned int)v404
          && (PurchaseByBank_UnityIap_Request_c *)klass->_2.typeHierarchy[v404 - 1] == v401 )
        {
          v405 = *p_responseList_5__7;
          if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
          v406 = ResponseCommandKind__SearchData(11, v405, 0LL);
          if ( v406 )
          {
            fail = (System_Collections_Generic_Dictionary_object__object__o *)v406->fields.fail;
            if ( fail )
            {
              if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
                     fail,
                     (Il2CppObject *)StringLiteral_22751/*"result"*/,
                     &value,
                     (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
              {
                this = (NetworkManager__RequestCR_d__214_o *)value;
                if ( !value )
                  goto LABEL_548;
                v408 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                            value,
                                            value->klass->vtable[4].methodPtr);
                if ( System_String__op_Equality(v408, (System_String_o *)StringLiteral_22345/*"pending_purchase_error"*/, 0LL)
                  || System_String__op_Equality(v408, (System_String_o *)StringLiteral_17501/*"canceled_purchase_error"*/, 0LL) )
                {
                  v411 = StringLiteral_23388/*"stay_no_dialog"*/;
                  v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_23388/*"stay_no_dialog"*/;
                  sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v411, v409, v410);
                }
              }
            }
          }
        }
      }
LABEL_313:
      if ( *p_errorCode_5__3 )
        goto LABEL_148;
      this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)v257,
                                                     (Il2CppObject *)StringLiteral_17463/*"cache"*/,
                                                     (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v326 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)v257,
                                                       (Il2CppObject *)StringLiteral_17463/*"cache"*/,
                                                       (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v326 )
          goto LABEL_548;
        DataManager__updateJsonData((DataManager_o *)v326, (Il2CppObject *)this, 0LL);
      }
      v327 = v2->fields._responseList_5__7;
      if ( !v327 )
        goto LABEL_548;
      v328 = 0LL;
      while ( 1 )
      {
        v329 = v327->max_length;
        if ( (__int64)v328 >= (int)v329 )
          goto LABEL_148;
        if ( v328 >= v329 )
          goto LABEL_550;
        v330 = v327->m_Items[v328];
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (NetworkManager__RequestCR_d__214_o *)NetworkManager__ExecuteCommand(v330, method);
        if ( (_DWORD)this )
          break;
        v327 = v2->fields._responseList_5__7;
        ++v328;
        if ( !v327 )
          goto LABEL_548;
      }
      if ( !v330 )
        goto LABEL_548;
      v446 = System_String__Concat_61645176((System_String_o *)StringLiteral_22744/*"response execute error "*/, v330->fields.nid, 0LL);
      v2->fields._errorCode_5__3 = v446;
      sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, (int32_t)v446, v447, v448);
      v449 = (ResponseFailData_o *)sub_1B86604(ResponseFailData_TypeInfo);
      ResponseFailData___ctor(v449, v330, 0LL);
      v2->fields._failData_5__6 = v449;
      v450 = &v2->fields._failData_5__6;
      sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._failData_5__6, (int32_t)v449, v451, v452);
      if ( !v2->fields._failData_5__6 )
LABEL_548:
        sub_1B86614(this, method);
      this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(
                                                     v2->fields._failData_5__6->fields.action,
                                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v455 = &StringLiteral_22763/*"retry"*/;
      }
      else
      {
        if ( !*v450 )
          goto LABEL_548;
        v455 = (__int64 *)&(*v450)->fields.action;
      }
      v457 = *v455;
      v2->fields._errorAction_5__5 = (struct System_String_o *)*v455;
      sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v457, v453, v454);
LABEL_148:
      this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
      if ( !this )
        goto LABEL_548;
      this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                     this,
                                                     this->klass[1]._1.image);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
        if ( !this )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const char *))this->klass[1]._1.gc_desc)(
                                                       this,
                                                       this->klass[1]._1.name);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (NetworkManager__RequestCR_d__214_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_548;
          CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
        }
      }
      if ( !*p_errorCode_5__3 )
      {
        if ( !_4__this )
          goto LABEL_548;
        NetworkManager__OnEndCommunication(_4__this, v2->fields.work, v2->fields._responseList_5__7, v245);
        goto LABEL_493;
      }
      method = (const MethodInfo *)v2->fields._responseList_5__7;
      if ( !_4__this )
        goto LABEL_548;
      _4__this->fields.communicationWorkResponseList = (struct ResponseData_array *)method;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.communicationWorkResponseList, (int32_t)method, v244, v245);
      v2->fields._responseList_5__7 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._responseList_5__7, 0, v246, v247);
      v248 = &v2->fields._errorLocalizeCode_5__4;
      errorLocalizeCode_5__4 = v2->fields._errorLocalizeCode_5__4;
      if ( !errorLocalizeCode_5__4 )
      {
        errorAction_5__5 = v2->fields._errorAction_5__5;
        if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23377/*"stay"*/, 0LL)
          || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23388/*"stay_no_dialog"*/, 0LL) )
        {
          v255 = &StringLiteral_9108/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/;
        }
        else
        {
          if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22763/*"retry"*/, 0LL)
            || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22702/*"reload_cache"*/, 0LL) )
          {
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            if ( !byte_4A4D556 )
            {
              sub_1B863B8(&ManagementManager_TypeInfo, v285);
              byte_4A4D556 = 1;
            }
            v286 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v286 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v286->static_fields->isDuringStartup;
            v288 = &StringLiteral_9112/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/;
            v289 = &StringLiteral_9098/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/;
          }
          else
          {
            if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_19622/*"goto_login_access"*/, 0LL)
              || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22685/*"refresh_terminal"*/, 0LL) )
            {
LABEL_223:
              errorLocalizeCode_5__4 = *v248;
              title = (System_String_o *)StringLiteral_1/*""*/;
              detail = (System_String_o *)StringLiteral_1/*""*/;
              if ( !errorLocalizeCode_5__4 )
                goto LABEL_227;
              goto LABEL_224;
            }
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            if ( !byte_4A4D556 )
            {
              sub_1B863B8(&ManagementManager_TypeInfo, method);
              byte_4A4D556 = 1;
            }
            v456 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v456 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v456->static_fields->isDuringStartup;
            v288 = &StringLiteral_9109/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
            v289 = (__int64 *)&StringLiteral_9095/*"NETWORK_ERROR_BOOT_MESSAGE"*/;
          }
          if ( isDuringStartup )
            v255 = v289;
          else
            v255 = v288;
        }
        v290 = *v255;
        *v248 = (System_String_o *)*v255;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, v290, v253, v254);
        goto LABEL_223;
      }
      title = (System_String_o *)StringLiteral_1/*""*/;
LABEL_224:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      detail = LocalizationManager__Get(errorLocalizeCode_5__4, 0LL);
LABEL_227:
      failData_5__6 = v2->fields._failData_5__6;
      if ( failData_5__6 )
      {
        this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(failData_5__6->fields.title, 0LL);
        v293 = v2->fields._failData_5__6;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v293 )
            goto LABEL_548;
        }
        else
        {
          if ( !v293 )
            goto LABEL_548;
          title = v293->fields.title;
        }
        this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(v293->fields.detail, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v295 = v2->fields._failData_5__6;
          if ( !v295 )
            goto LABEL_548;
          detail = v295->fields.detail;
        }
        this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(detail, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v296 = v2->fields._failData_5__6;
          if ( !v296 )
            goto LABEL_548;
          if ( v296->fields.csId )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__214_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9099/*"NETWORK_ERROR_CSID_CODE"*/,
                                                           0LL);
            v297 = v2->fields._failData_5__6;
            if ( !v297 )
              goto LABEL_548;
            v298 = System_String__Format((System_String_o *)this, (Il2CppObject *)v297->fields.csId, 0LL);
            this = (NetworkManager__RequestCR_d__214_o *)System_String__Concat_61683424(
                                                           detail,
                                                           (System_String_o *)StringLiteral_43/*"\n"*/,
                                                           v298,
                                                           0LL);
            detail = (System_String_o *)this;
          }
        }
        v299 = v2->fields._failData_5__6;
        if ( !v299 )
          goto LABEL_548;
        url = v299->fields.url;
      }
      else
      {
        url = 0LL;
      }
      this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
      if ( !this )
        goto LABEL_548;
      if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
              this,
              this->klass[1]._1.image) & 1) == 0
        || (v300 = v2->fields._errorAction_5__5,
            !System_String__op_Equality(v300, (System_String_o *)StringLiteral_23377/*"stay"*/, 0LL))
        && !System_String__op_Equality(v300, (System_String_o *)StringLiteral_23388/*"stay_no_dialog"*/, 0LL)
        && !System_String__op_Equality(v300, (System_String_o *)StringLiteral_22763/*"retry"*/, 0LL)
        && !System_String__op_Equality(v300, (System_String_o *)StringLiteral_22702/*"reload_cache"*/, 0LL)
        || (v302 = NetworkManager__OnBackgroundErrorCommunication(
                     _4__this,
                     _4__this->fields.communicationWork,
                     *p_errorCode_5__3,
                     0,
                     v301),
            result = 0,
            !v302) )
      {
        v304 = v2->fields._errorAction_5__5;
        v305 = PrivateImplementationDetails___ComputeStringHash(v304, 0LL);
        if ( v305 <= 0xA56F89EB )
        {
          if ( v305 <= 0x43CDBBC3 )
          {
            if ( v305 != 1019014393 )
            {
              if ( v305 != 1062826843 )
              {
                if ( v305 != 1137556419
                  || !System_String__op_Equality(v304, (System_String_o *)StringLiteral_23388/*"stay_no_dialog"*/, 0LL) )
                {
                  goto LABEL_460;
                }
LABEL_459:
                NetworkManager__OnEndCommunication(
                  _4__this,
                  _4__this->fields.communicationWork,
                  _4__this->fields.communicationWorkResponseList,
                  v306);
                goto LABEL_485;
              }
              if ( System_String__op_Equality(v304, (System_String_o *)StringLiteral_19623/*"goto_title"*/, 0LL) )
              {
                v358 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v358 = NetworkManager_TypeInfo;
                }
                v358->static_fields->isRebootBlock = 1;
                v359 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                System_Action___ctor(v359, (Il2CppObject *)_4__this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
                NetworkManager__ErrorDialog(_4__this, title, detail, url, v359, v360);
                goto LABEL_485;
              }
              goto LABEL_460;
            }
            this = (NetworkManager__RequestCR_d__214_o *)System_String__op_Equality(
                                                           v304,
                                                           (System_String_o *)StringLiteral_22702/*"reload_cache"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_460;
            v361 = v2->fields._failData_5__6;
            if ( !v361 )
              goto LABEL_548;
            errorType = v361->fields.errorType;
            v362 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            v363 = &Method_NetworkManager_OnClickReloadCache__;
LABEL_484:
            v460 = v362;
            System_Action___ctor(v362, (Il2CppObject *)_4__this, *v363, 0LL);
            NetworkManager__WarningDialog(_4__this, title, detail, url, errorType, v460, v461);
            goto LABEL_485;
          }
          if ( v305 <= 0x9918C6CA )
          {
            if ( v305 == -1726429494 )
            {
              if ( System_String__op_Equality(v304, (System_String_o *)StringLiteral_20557/*"invalid_user"*/, 0LL) )
              {
                v412 = TitleRootComponent_TypeInfo;
                if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
                  v412 = TitleRootComponent_TypeInfo;
                }
                if ( v412->static_fields->shouldFadeInOnError )
                {
                  v413 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v414 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v414 = AvalonSceneManager_TypeInfo;
                  }
                  this = (NetworkManager__RequestCR_d__214_o *)NetworkManager___c_TypeInfo;
                  DEFAULT_FADE_TIME = v414->static_fields->DEFAULT_FADE_TIME;
                  if ( !NetworkManager___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager___c_TypeInfo);
                    this = (NetworkManager__RequestCR_d__214_o *)NetworkManager___c_TypeInfo;
                  }
                  monitor = (System_Action_o *)this[1].fields.work->monitor;
                  if ( !monitor )
                  {
                    if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
                    {
                      j_il2cpp_runtime_class_init_0(this);
                      this = (NetworkManager__RequestCR_d__214_o *)NetworkManager___c_TypeInfo;
                    }
                    v417 = (Il2CppObject *)this[1].fields.work->klass;
                    monitor = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                    System_Action___ctor(monitor, v417, Method_NetworkManager___c__RequestCR_b__214_1__, 0LL);
                    v418 = NetworkManager___c_TypeInfo->static_fields;
                    v418->__9__214_1 = monitor;
                    sub_1B8635C((CGThumbnailListItem_o *)&v418->__9__214_1, (int32_t)monitor, v419, v420);
                  }
                  if ( !v413 )
                    goto LABEL_548;
                  CommonUI__maskFadein((CommonUI_o *)v413, DEFAULT_FADE_TIME, monitor, 0LL);
                }
                v421 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v422 = LocalizationManager__Get((System_String_o *)StringLiteral_9114/*"NETWORK_USER_DELETE_DECIDE"*/, 0LL);
                v423 = LocalizationManager__Get((System_String_o *)StringLiteral_9113/*"NETWORK_USER_DELETE_CANCEL"*/, 0LL);
                v424 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B86604(CommonConfirmDialog_ClickDelegate_TypeInfo);
                CommonConfirmDialog_ClickDelegate___ctor(
                  v424,
                  (Il2CppObject *)_4__this,
                  Method_NetworkManager_OnClickUserDelete__,
                  0LL);
                if ( !v421 )
                  goto LABEL_548;
                CommonUI__OpenConfirmDialog_30482992((CommonUI_o *)v421, title, detail, v422, v423, v424, 0, 0, 0, 0LL);
                goto LABEL_485;
              }
              goto LABEL_460;
            }
            if ( v305 != 2106643173 || !System_String__op_Equality(v304, (System_String_o *)StringLiteral_22685/*"refresh_terminal"*/, 0LL) )
              goto LABEL_460;
            if ( !BattleData_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
            BattleData__deleteSaveData(0LL);
            BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
            this = (NetworkManager__RequestCR_d__214_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
            if ( !this )
              goto LABEL_548;
            ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)this, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A4B58D )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, v311);
              byte_4A4B58D = 1;
            }
            v312 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v312 = TerminalPramsManager_TypeInfo;
            }
            v312->static_fields->_IsErrorDialogReturnTerminal_k__BackingField = 1;
            this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(detail, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(url, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                NetworkManager__OnClickRefreshTerminal(_4__this, method);
                goto LABEL_485;
              }
            }
            v459 = v2->fields._failData_5__6;
            if ( !v459 )
              goto LABEL_548;
            errorType = v459->fields.errorType;
            v362 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            v363 = &Method_NetworkManager_OnClickRefreshTerminal__;
            goto LABEL_484;
          }
          if ( v305 != -1577396083 )
          {
            if ( v305 != -1519416853 || !System_String__op_Equality(v304, (System_String_o *)StringLiteral_19622/*"goto_login_access"*/, 0LL) )
              goto LABEL_460;
            v317 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v317 = NetworkManager_TypeInfo;
            }
            v317->static_fields->isRebootBlock = 1;
            this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(detail, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(url, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                NetworkManager__OnClickErrorTerminal((NetworkManager_o *)this, method);
                goto LABEL_485;
              }
            }
            v458 = v2->fields._failData_5__6;
            if ( !v458 )
              goto LABEL_548;
            errorType = v458->fields.errorType;
            v362 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            v363 = &Method_NetworkManager_OnClickErrorTerminal__;
            goto LABEL_484;
          }
          if ( !System_String__op_Equality(v304, (System_String_o *)StringLiteral_18429/*"do_signup"*/, 0LL) )
            goto LABEL_460;
          v442 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          NetworkManager__DeleteSignupData((const MethodInfo *)v442);
LABEL_453:
          v443 = v2->fields._failData_5__6;
          if ( !v443 )
            goto LABEL_548;
          errorType = v443->fields.errorType;
          v362 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          v363 = &Method_NetworkManager_OnClickErrorStay__;
          goto LABEL_484;
        }
        if ( v305 > 0xCC10A7C9 )
        {
          if ( v305 <= 0xDA79AAB9 )
          {
            if ( v305 == -809642680 )
            {
              this = (NetworkManager__RequestCR_d__214_o *)System_String__op_Equality(
                                                             v304,
                                                             (System_String_o *)StringLiteral_22661/*"reconnection"*/,
                                                             0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v426 = v2->fields._failData_5__6;
                if ( !v426 )
                  goto LABEL_548;
                sandboxDomain = v426->fields.sandboxDomain;
                sandboxSeurity = v426->fields.sandboxSeurity;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                NetworkManager__SetGameServerRedirect(sandboxDomain, sandboxSeurity, v425);
                v431 = v2->fields._failData_5__6;
                if ( !v431 )
                  goto LABEL_548;
                sandboxAssetsDomain = v431->fields.sandboxAssetsDomain;
                if ( !byte_4A4DDB5 )
                {
                  sub_1B863B8(&NetworkManager_TypeInfo, method);
                  byte_4A4DDB5 = 1;
                }
                v433 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v433 = NetworkManager_TypeInfo;
                }
                v434 = v433->static_fields;
                v434->dataServerRedirectAddress = sandboxAssetsDomain;
                sub_1B8635C(
                  (CGThumbnailListItem_o *)&v434->dataServerRedirectAddress,
                  (int32_t)sandboxAssetsDomain,
                  v429,
                  v430);
                v437 = v2->fields._failData_5__6;
                if ( !v437 )
                  goto LABEL_548;
                sandboxWebviewDomain = v437->fields.sandboxWebviewDomain;
                if ( !byte_4A4DDB6 )
                {
                  sub_1B863B8(&NetworkManager_TypeInfo, method);
                  byte_4A4DDB6 = 1;
                }
                v439 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v439 = NetworkManager_TypeInfo;
                }
                v440 = v439->static_fields;
                v440->webServerRedirectAddress = sandboxWebviewDomain;
                sub_1B8635C(
                  (CGThumbnailListItem_o *)&v440->webServerRedirectAddress,
                  (int32_t)sandboxWebviewDomain,
                  v435,
                  v436);
                NetworkManager__SetServerSetting_39498476(_4__this, v441);
                goto LABEL_485;
              }
            }
            else if ( v305 == -629560647
                   && System_String__op_Equality(v304, (System_String_o *)StringLiteral_22763/*"retry"*/, 0LL) )
            {
              this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
              if ( !this )
                goto LABEL_548;
              if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                      this,
                      this->klass[1]._1.declaringType) & 1) != 0 )
              {
                if ( NetworkManager__OnErrorCommunication(
                       _4__this,
                       _4__this->fields.communicationWork,
                       *p_errorCode_5__3,
                       v316) )
                {
                  return 0;
                }
              }
              else
              {
                if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                if ( !byte_4A4D556 )
                {
                  sub_1B863B8(&ManagementManager_TypeInfo, v315);
                  byte_4A4D556 = 1;
                }
                v479 = ManagementManager_TypeInfo;
                if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                  v479 = ManagementManager_TypeInfo;
                }
                v480 = v479->static_fields->isDuringStartup;
                v481 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( v480 )
                {
                  v482 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v482,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0LL);
                  if ( !v481 )
                    goto LABEL_548;
                  CommonUI__OpenRetryBootDialog((CommonUI_o *)v481, title, detail, v482, 0, 0LL);
                }
                else if ( v243 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v486 = LocalizationManager__Get((System_String_o *)StringLiteral_3681/*"COMMON_CONFIRM_RETRY"*/, 0LL);
                  v487 = LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
                  v488 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v488,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__,
                    0LL);
                  if ( !v481 )
                    goto LABEL_548;
                  CommonUI__OpenRetryDialog_30482476((CommonUI_o *)v481, title, detail, v486, v487, v488, 0, 0LL);
                }
                else
                {
                  v489 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v489,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0LL);
                  if ( !v481 )
                    goto LABEL_548;
                  CommonUI__OpenRetryDialog((CommonUI_o *)v481, title, detail, v489, 0, 0LL);
                }
              }
              goto LABEL_485;
            }
            goto LABEL_460;
          }
          if ( v305 == -258062273 )
          {
            if ( System_String__op_Equality(v304, (System_String_o *)StringLiteral_20556/*"invalid_battle"*/, 0LL) )
            {
              if ( !BattleData_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              BattleData__deleteSaveData(0LL);
              goto LABEL_459;
            }
LABEL_460:
            v444 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v445 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v445,
              (Il2CppObject *)_4__this,
              Method_NetworkManager_OnClickErrorDialog__,
              0LL);
            if ( !v444 )
              goto LABEL_548;
            CommonUI__OpenErrorDialog((CommonUI_o *)v444, title, detail, v445, 0, 0LL);
LABEL_485:
            v2->fields._responseList_5__7 = 0LL;
            sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._responseList_5__7, 0, v313, v314);
            if ( System_String__op_Equality(v2->fields._errorAction_5__5, (System_String_o *)StringLiteral_22661/*"reconnection"*/, 0LL) )
            {
LABEL_486:
              v2->fields._data_5__2 = 0LL;
              sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._data_5__2, 0, v131, v132);
              v2->fields._errorCode_5__3 = 0LL;
              sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, 0, v462, v463);
              v2->fields._errorLocalizeCode_5__4 = 0LL;
              sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, 0, v464, v465);
              v2->fields._errorAction_5__5 = 0LL;
              sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, 0, v466, v467);
              v2->fields._failData_5__6 = 0LL;
              sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._failData_5__6, 0, v468, v469);
              v2->fields._responseList_5__7 = 0LL;
              sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._responseList_5__7, 0, v470, v471);
              this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
              if ( !this )
                goto LABEL_548;
              if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                      this,
                      this->klass[1]._1.image) & 1) == 0 )
              {
                this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
                if ( !this )
                  goto LABEL_548;
                if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const char *))this->klass[1]._1.gc_desc)(
                        this,
                        this->klass[1]._1.name) & 1) != 0 )
                {
                  this = (NetworkManager__RequestCR_d__214_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !this )
                    goto LABEL_548;
                  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
                }
              }
              v472 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v472, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v472;
              v473 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1B8635C(v473, (int32_t)v472, v474, v475);
              result = 1;
              LODWORD(v473[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
LABEL_493:
            v476 = (CGThumbnailListItem_c *)v2->fields._data_5__2;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4A4DDB7 )
            {
              sub_1B863B8(&NetworkManager_TypeInfo, v251);
              byte_4A4DDB7 = 1;
            }
            v477 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v477 = NetworkManager_TypeInfo;
            }
            p_errorDialogResponseData = (CGThumbnailListItem_o *)&v477->static_fields->errorDialogResponseData;
            p_errorDialogResponseData->klass = v476;
            sub_1B8635C(p_errorDialogResponseData, (int32_t)v476, v131, v132);
            return 0;
          }
          if ( v305 != -193734025 || !System_String__op_Equality(v304, (System_String_o *)StringLiteral_18246/*"data_update"*/, 0LL) )
            goto LABEL_460;
          v318 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v318 = NetworkManager_TypeInfo;
          }
          v318->static_fields->isRebootBlock = 1;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          DataManager__ClearCacheAll(0LL);
        }
        else
        {
          if ( v305 != -1105950412 )
          {
            if ( v305 != -969204192 )
            {
              if ( v305 != -871323703 || !System_String__op_Equality(v304, (System_String_o *)StringLiteral_16583/*"app_version_up"*/, 0LL) )
                goto LABEL_460;
              v307 = ManagementManager_TypeInfo;
              if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              ManagementManager__RebootCacheClear((const MethodInfo *)v307);
              v308 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v308 = NetworkManager_TypeInfo;
              }
              v308->static_fields->isRebootBlock = 1;
              v309 = v2->fields._failData_5__6;
              if ( v309 )
                errorType = v309->fields.errorType;
              else
                errorType = 0;
              v362 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
              v363 = &Method_NetworkManager_OnClickStore__;
              goto LABEL_484;
            }
            this = (NetworkManager__RequestCR_d__214_o *)System_String__op_Equality(
                                                           v304,
                                                           (System_String_o *)StringLiteral_23377/*"stay"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_460;
            goto LABEL_453;
          }
          if ( !System_String__op_Equality(v304, (System_String_o *)StringLiteral_21083/*"maint"*/, 0LL) )
            goto LABEL_460;
          v364 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v364);
          this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
          }
          LOBYTE(this[1].fields.work[3].fields.paramInteger) = 1;
        }
        v365 = v2->fields._failData_5__6;
        if ( !v365 )
          goto LABEL_548;
        errorType = v365->fields.errorType;
        v362 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        v363 = &Method_NetworkManager_OnClickErrorReboot__;
        goto LABEL_484;
      }
      return result;
    case 3:
      v147 = (NetworkManager__RequestCR_d__214_o **)&v2->fields._www_5__10;
      v146 = v2->fields._www_5__10;
      v2->fields.__1__state = -1;
      if ( !v146 )
        goto LABEL_548;
      if ( !System_String__IsNullOrEmpty(v146->fields._error_k__BackingField, 0LL) )
        goto LABEL_28;
      this = *v147;
      if ( !*v147 )
        goto LABEL_548;
      v148 = DelightWorks_Network_UnityWebRequestWWW__get_text((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v2->fields._data_5__2 = v148;
      sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._data_5__2, (int32_t)v148, v149, v150);
LABEL_28:
      this = *v147;
      if ( !*v147 )
        goto LABEL_548;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      *v147 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._www_5__10, 0, v151, v152);
      goto LABEL_49;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_15;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall NetworkManager__RequestCR_d__214__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__RequestCR_d__214_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__RequestCR_d__214__System_Collections_IEnumerator_Reset(
        NetworkManager__RequestCR_d__214_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_NetworkManager__RequestCR_d__214_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall NetworkManager__RequestCR_d__214__System_Collections_IEnumerator_get_Current(
        NetworkManager__RequestCR_d__214_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__RequestCR_d__214__System_IDisposable_Dispose(
        NetworkManager__RequestCR_d__214_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__TimeUpdate_d__82___ctor(
        NetworkManager__TimeUpdate_d__82_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__TimeUpdate_d__82__MoveNext(
        NetworkManager__TimeUpdate_d__82_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t _1__state; // w8
  NetworkManager_c *v5; // x0
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0

  if ( (byte_4A4DD4B & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4A4DD4B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v5 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v5 = NetworkManager_TypeInfo;
    }
    v5->static_fields->nowTime = -1LL;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
LABEL_9:
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    p__2__current = &this->fields.__2__current;
    sub_1B8635C((CGThumbnailListItem_o *)p__2__current, (int32_t)v6, v8, v9);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall NetworkManager__TimeUpdate_d__82__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__TimeUpdate_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__TimeUpdate_d__82__System_Collections_IEnumerator_Reset(
        NetworkManager__TimeUpdate_d__82_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_NetworkManager__TimeUpdate_d__82_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall NetworkManager__TimeUpdate_d__82__System_Collections_IEnumerator_get_Current(
        NetworkManager__TimeUpdate_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__TimeUpdate_d__82__System_IDisposable_Dispose(
        NetworkManager__TimeUpdate_d__82_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4DD46 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager___c_TypeInfo, v1);
    byte_4A4DD46 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(NetworkManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  NetworkManager___c_TypeInfo->static_fields->__9 = (struct NetworkManager___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)NetworkManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall NetworkManager___c___ctor(NetworkManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NetworkManager___c___RequestCR_b__214_1(NetworkManager___c_o *this, const MethodInfo *method)
{
  TitleRootComponent_c *v2; // x0

  if ( (byte_4A4DD47 & 1) == 0 )
  {
    sub_1B863B8(&TitleRootComponent_TypeInfo, method);
    byte_4A4DD47 = 1;
  }
  v2 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v2 = TitleRootComponent_TypeInfo;
  }
  v2->static_fields->shouldFadeInOnError = 0;
}