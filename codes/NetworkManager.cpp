void NetworkManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_DateTime_o v3; // x0
  CGThumbnailListItem_o *static_fields; // x0
  int64_t v5; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct NetworkManager_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct NetworkManager_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct NetworkManager_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct NetworkManager_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct NetworkManager_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  CGThumbnailListItem_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  CGThumbnailListItem_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct NetworkManager_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct NetworkManager_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  struct NetworkManager_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct NetworkManager_StaticFields *v39; // x0
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  struct NetworkManager_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  struct NetworkManager_StaticFields *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  struct NetworkManager_StaticFields *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  CGThumbnailListItem_o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct NetworkManager_StaticFields *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct NetworkManager_StaticFields *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct NetworkManager_StaticFields *v64; // x8
  int32_t v65; // w1
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w1
  CGThumbnailListItem_o *p_dataServerAddress; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w1
  CGThumbnailListItem_o *p_webServerAddress; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int32_t v76; // w1
  CGThumbnailListItem_o *p_webViewBaseURL; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Collections_Generic_Dictionary_object__object__o *v80; // x19
  CGThumbnailListItem_o *p_webViewAddress; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w1
  CGThumbnailListItem_o *p_AUTHMD5_KEY_TYPE; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  int32_t v88; // w1
  CGThumbnailListItem_o *p_errorDialogResponseData; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  int64_t v92; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C4276F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_14350/*"TheCheckKey"*/);
    sub_1C37058(&StringLiteral_19439/*"file://"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4276F = 1;
  }
  NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME = (struct System_String_o *)StringLiteral_19439/*"file://"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)NetworkManager_TypeInfo->static_fields, StringLiteral_19439/*"file://"*/, v1, v2);
  v3.fields._dateData = (uint64_t)&v92;
  NetworkManager_TypeInfo->static_fields->WebCacheTime = 300;
  v92 = 0;
  System_DateTime___ctor_64948384(v3, 1970, 1, 1, 0, 0, 0, 1, 0);
  static_fields = (CGThumbnailListItem_o *)NetworkManager_TypeInfo->static_fields;
  v5 = v92;
  static_fields->fields.sortValue2 = 0;
  static_fields = (CGThumbnailListItem_o *)((char *)static_fields + 72);
  *(_QWORD *)&static_fields[-1].fields.isTermination = 0;
  *(_QWORD *)&static_fields[-1].fields.basePosition.fields.y = 0;
  static_fields[-1].fields.sortValueLast = v5;
  LOBYTE(static_fields[-1].fields.viewObject) = 0;
  *(_QWORD *)&static_fields[-1].fields._Id_k__BackingField = 0;
  *(_QWORD *)&static_fields[-1].fields._Type_k__BackingField = -1;
  static_fields[-1].fields._ThumbnailSpritePath_k__BackingField = (struct System_String_o *)-1LL;
  sub_1C36FFC(static_fields, 0, v6, v7);
  v8 = NetworkManager_TypeInfo->static_fields;
  v8->userCreateServer = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->userCreateServer, 0, v9, v10);
  v11 = NetworkManager_TypeInfo->static_fields;
  v11->userId = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11->userId, 0, v12, v13);
  v14 = NetworkManager_TypeInfo->static_fields;
  v14->authKey = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->authKey, 0, v15, v16);
  v17 = NetworkManager_TypeInfo->static_fields;
  v17->secretKey = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->secretKey, 0, v18, v19);
  v20 = NetworkManager_TypeInfo->static_fields;
  v20->userName = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v20->userName, 0, v21, v22);
  v23 = (CGThumbnailListItem_o *)NetworkManager_TypeInfo->static_fields;
  v23->fields._ThumbnailSpritePath_k__BackingField = 0;
  v23 = (CGThumbnailListItem_o *)((char *)v23 + 136);
  *(_QWORD *)&v23[-1].fields._Type_k__BackingField = 0;
  LODWORD(v23[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  sub_1C36FFC(v23, 0, v24, v25);
  v26 = (CGThumbnailListItem_o *)NetworkManager_TypeInfo->static_fields;
  v26[1].monitor = 0;
  v26 = (CGThumbnailListItem_o *)((char *)v26 + 152);
  LOWORD(v26[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  sub_1C36FFC(v26, 0, v27, v28);
  v29 = NetworkManager_TypeInfo->static_fields;
  v29->registrationVersion = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->registrationVersion, 0, v30, v31);
  v32 = NetworkManager_TypeInfo->static_fields;
  v32->registrationId = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v32->registrationId, 0, v33, v34);
  v35 = StringLiteral_1/*""*/;
  v36 = NetworkManager_TypeInfo->static_fields;
  v36->serverSettingType = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v36->serverSettingType, v35, v37, v38);
  v39 = NetworkManager_TypeInfo->static_fields;
  v39->serverSettingSecurity = 0;
  v40 = StringLiteral_1/*""*/;
  v39->gameServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v39->gameServerSettingAddress, v40, v41, v42);
  v43 = StringLiteral_1/*""*/;
  v44 = NetworkManager_TypeInfo->static_fields;
  v44->dataServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v44->dataServerSettingAddress, v43, v45, v46);
  v47 = StringLiteral_1/*""*/;
  v48 = NetworkManager_TypeInfo->static_fields;
  v48->webServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v48->webServerSettingAddress, v47, v49, v50);
  v51 = StringLiteral_1/*""*/;
  v52 = NetworkManager_TypeInfo->static_fields;
  v52->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v52->dataServerFolder, v51, v53, v54);
  v55 = (CGThumbnailListItem_o *)NetworkManager_TypeInfo->static_fields;
  v55[1].fields.sortValueLast = 0;
  v55 = (CGThumbnailListItem_o *)((char *)v55 + 232);
  LOBYTE(v55[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  sub_1C36FFC(v55, 0, v56, v57);
  v58 = NetworkManager_TypeInfo->static_fields;
  v58->dataServerRedirectAddress = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v58->dataServerRedirectAddress, 0, v59, v60);
  v61 = NetworkManager_TypeInfo->static_fields;
  v61->webServerRedirectAddress = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v61->webServerRedirectAddress, 0, v62, v63);
  v64 = NetworkManager_TypeInfo->static_fields;
  v64->serverSecurity = 0;
  v65 = StringLiteral_1/*""*/;
  v64->gameServerAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v64->gameServerAddress, v65, v66, v67);
  v68 = StringLiteral_1/*""*/;
  p_dataServerAddress = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->dataServerAddress;
  p_dataServerAddress->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1C36FFC(p_dataServerAddress, v68, v70, v71);
  v72 = StringLiteral_1/*""*/;
  p_webServerAddress = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->webServerAddress;
  p_webServerAddress->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1C36FFC(p_webServerAddress, v72, v74, v75);
  v76 = StringLiteral_1/*""*/;
  p_webViewBaseURL = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1C36FFC(p_webViewBaseURL, v76, v78, v79);
  v80 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v80,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  p_webViewAddress = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->webViewAddress;
  p_webViewAddress->klass = (CGThumbnailListItem_c *)v80;
  sub_1C36FFC(p_webViewAddress, (int32_t)v80, v82, v83);
  v84 = StringLiteral_14350/*"TheCheckKey"*/;
  p_AUTHMD5_KEY_TYPE = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->AUTHMD5_KEY_TYPE;
  p_AUTHMD5_KEY_TYPE->klass = (CGThumbnailListItem_c *)StringLiteral_14350/*"TheCheckKey"*/;
  sub_1C36FFC(p_AUTHMD5_KEY_TYPE, v84, v86, v87);
  v88 = StringLiteral_1/*""*/;
  p_errorDialogResponseData = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->errorDialogResponseData;
  p_errorDialogResponseData->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1C36FFC(p_errorDialogResponseData, v88, v90, v91);
}


void NetworkManager___ctor(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
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
  System_Collections_Generic_Queue_T__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C427F0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Queue_RequestBase___ctor__);
    sub_1C37058(&System_Collections_Generic_Queue_RequestBase__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager___ctor__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C427F0 = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.mAndroidApiKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mAndroidApiKey, v5, v2, v3);
  v6 = StringLiteral_1/*""*/;
  this->fields.mAndroidProjectId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mAndroidProjectId, v6, v7, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields.mIosApplicationId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mIosApplicationId, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields.mMk = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMk, v12, v13, v14);
  v15 = StringLiteral_1/*""*/;
  this->fields.mCv = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mCv, v15, v16, v17);
  v18 = StringLiteral_1/*""*/;
  this->fields.mAuGameServerPublicKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mAuGameServerPublicKey, v18, v19, v20);
  v21 = (System_Collections_Generic_Queue_T__o *)sub_1C372A4(System_Collections_Generic_Queue_RequestBase__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v21,
    (const MethodInfo_3949C40 *)Method_System_Collections_Generic_Queue_RequestBase___ctor__);
  this->fields.communicationWaitList = (struct System_Collections_Generic_Queue_RequestBase__o *)v21;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationWaitList, (int32_t)v21, v22, v23);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_NetworkManager___ctor__);
}


void NetworkManager__AddWaitStatus(NetworkManager_o *this, RequestBase_o *request, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *communicationWaitList; // x0
  System_Collections_Generic_Queue_Enumerator_T__o v6; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C427E2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Queue_RequestBase__Enqueue__);
    sub_1C37058(&Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__);
    byte_4C427E2 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( this->fields.communicationWork != request )
  {
    communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
    if ( !communicationWaitList )
      goto LABEL_12;
    System_Collections_Generic_Queue_object___GetEnumerator(
      &v6,
      communicationWaitList,
      (const MethodInfo_394A2C0 *)Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__);
    while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
              &v6,
              (const MethodInfo_352DC1C *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__) )
    {
      if ( System_Collections_Generic_Queue_Enumerator_object___get_Current(
             &v6,
             (const MethodInfo_352DD0C *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__) == (Il2CppObject *)request )
      {
        System_Collections_Generic_Queue_Enumerator_object___Dispose(
          &v6,
          (const MethodInfo_352DC0C *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
        return;
      }
    }
    System_Collections_Generic_Queue_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_352DC0C *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
    communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
    if ( !communicationWaitList )
LABEL_12:
      sub_1C372B4(communicationWaitList);
    System_Collections_Generic_Queue_object___Enqueue(
      communicationWaitList,
      (Il2CppObject *)request,
      (const MethodInfo_394A208 *)Method_System_Collections_Generic_Queue_RequestBase__Enqueue__);
  }
}


bool NetworkManager__CheckServerLimitTime(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  int64_t Time; // x0
  NetworkManager_c *v6; // x8
  __int64 v7; // x21
  BalanceConfig_c *v8; // x0
  struct NetworkManager_StaticFields *v9; // x8
  System_String_o *v10; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x5

  if ( (byte_4C42781 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_NetworkManager_OnClickErrorReboot__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_12583/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42781 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->isErrorServerTimeLimitOver )
    return 0;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = NetworkManager_TypeInfo;
    static_fields = NetworkManager_TypeInfo->static_fields;
  }
  if ( static_fields->isLogin )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    Time = NetworkManager__getTime((const MethodInfo *)v3);
    v6 = NetworkManager_TypeInfo;
    v7 = Time - NetworkManager_TypeInfo->static_fields->serverTime;
    if ( v7 < 0 )
      goto LABEL_16;
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( v7 > v8->static_fields->ServerTimeOverLimit )
    {
      v6 = NetworkManager_TypeInfo;
LABEL_16:
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = NetworkManager_TypeInfo;
      }
      v9 = v6->static_fields;
      v9->isErrorServerTimeLimitOver = 1;
      v9->isRebootBlock = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12583/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, 0);
      v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0);
      NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v10, 0, v11, v12);
      return 0;
    }
  }
  return 1;
}


bool NetworkManager__CheckUserCreateServer(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  NetworkManager_c *v3; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *gameServerAddress; // x0

  if ( (byte_4C42769 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42769 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v1->static_fields->userCreateServer, 0) )
    return 1;
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  gameServerAddress = static_fields->gameServerAddress;
  if ( !gameServerAddress )
    sub_1C372B4(0);
  return System_String__Equals_63596960(gameServerAddress, static_fields->userCreateServer, 0);
}


bool NetworkManager__CheckUserCreateServerByPrefix(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  NetworkManager_c *v2; // x0
  NetworkManager_c *v3; // x0
  System_String_array *gameServerAddress; // x0
  System_String_o *userCreateServer; // x8
  System_String_array *v6; // x19
  il2cpp_array_size_t max_length; // x8
  il2cpp_array_size_t v8; // x9
  System_String_o *v9; // x8

  if ( (byte_4C4276A & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4276A = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  if ( !System_String__IsNullOrEmpty(v1->static_fields->gameServerAddress, 0) )
  {
    v2 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v2 = NetworkManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v2->static_fields->userCreateServer, 0) )
    {
      v3 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v3 = NetworkManager_TypeInfo;
      }
      gameServerAddress = (System_String_array *)v3->static_fields->gameServerAddress;
      if ( !gameServerAddress )
        goto LABEL_22;
      gameServerAddress = System_String__Split((System_String_o *)gameServerAddress, 0x2Du, 0, 0);
      userCreateServer = NetworkManager_TypeInfo->static_fields->userCreateServer;
      if ( !userCreateServer )
        goto LABEL_22;
      v6 = gameServerAddress;
      gameServerAddress = System_String__Split(userCreateServer, 0x2Du, 0, 0);
      if ( !v6 )
        goto LABEL_22;
      max_length = v6->max_length;
      if ( max_length )
      {
        if ( !gameServerAddress )
          goto LABEL_22;
        v8 = gameServerAddress->max_length;
        if ( v8 )
        {
          if ( !(_DWORD)max_length || !(_DWORD)v8 )
            sub_1C372BC(gameServerAddress);
          v9 = v6->m_Items[0];
          if ( v9 )
            return System_String__Equals_63596960(v9, gameServerAddress->m_Items[0], 0);
LABEL_22:
          sub_1C372B4(gameServerAddress);
        }
      }
    }
  }
  return 0;
}


void NetworkManager__ClearAuth(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager_c *v4; // x0
  CGThumbnailListItem_o *static_fields; // x0
  int64_t sortValueLast; // t1
  struct NetworkManager_StaticFields *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C42787 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&SignedData_TypeInfo);
    byte_4C42787 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  static_fields = (CGThumbnailListItem_o *)v4->static_fields;
  sortValueLast = static_fields->fields.sortValueLast;
  static_fields = (CGThumbnailListItem_o *)((char *)static_fields + 88);
  static_fields->klass = 0;
  sub_1C36FFC(static_fields, 0, v2, v3);
  v7 = NetworkManager_TypeInfo->static_fields;
  v7->userCreateServer = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->userCreateServer, 0, v8, v9);
  NetworkManager_TypeInfo->static_fields->userIdNumber = -1;
  if ( sortValueLast )
  {
    if ( !SignedData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    SignedData__RefreshSigningData(3, 0);
  }
}


void NetworkManager__ClearTopLoginResult(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.loginResponseResult = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loginResponseResult, 0, v2, v3);
}


bool NetworkManager__CommunicationIsBusy(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C42770 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4C42770 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return Instance[6].monitor != 0;
}


bool NetworkManager__CommunicationStart(NetworkManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *communicationWaitList; // x0
  Il2CppObject *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  System_Collections_IEnumerator_o *v9; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C427E3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Queue_RequestBase__Dequeue__);
    sub_1C37058(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__);
    byte_4C427E3 = 1;
  }
  communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
  if ( !communicationWaitList )
    sub_1C372B4(0);
  if ( communicationWaitList->fields._size < 1 || this->fields.communicationWork )
    return 0;
  v5 = System_Collections_Generic_Queue_object___Dequeue(
         communicationWaitList,
         (const MethodInfo_394A398 *)Method_System_Collections_Generic_Queue_RequestBase__Dequeue__);
  this->fields.communicationWork = (struct RequestBase_o *)v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationWork, (int32_t)v5, v6, v7);
  v9 = NetworkManager__RequestCR(this, this->fields.communicationWork, 0.0, v8);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v9, 0);
  this->fields.communicationCoroutine = started;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v11, v12);
  return 1;
}


void NetworkManager__DeleteAuth(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  System_String_o *OldAuthFileName; // x21
  const MethodInfo *v3; // x1
  System_String_o *AuthFileName; // x20
  const MethodInfo *v5; // x1
  System_String_o *v6; // x19

  if ( (byte_4C427B4 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427B4 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  OldAuthFileName = NetworkManager__getOldAuthFileName((const MethodInfo *)v1);
  AuthFileName = NetworkManager__getAuthFileName(0, v3);
  v6 = NetworkManager__getAuthFileName(1, v5);
  if ( System_IO_File__Exists(OldAuthFileName, 0) )
    System_IO_File__Delete(OldAuthFileName, 0);
  if ( System_IO_File__Exists(AuthFileName, 0) )
    System_IO_File__Delete(AuthFileName, 0);
  if ( System_IO_File__Exists(v6, 0) )
    System_IO_File__Delete(v6, 0);
}


void NetworkManager__DeleteSaveData(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4C427B3 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427B3 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__DeleteAuth((const MethodInfo *)v1);
  NetworkManager__DeleteSignupData(v2);
}


void NetworkManager__DeleteSignupData(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  System_String_o *OldSignupFileName; // x21
  System_String_o *SignupFileName; // x20
  System_String_o *FriendCodeFileName; // x19

  if ( (byte_4C427B5 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427B5 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  OldSignupFileName = NetworkManager__getOldSignupFileName((const MethodInfo *)v1);
  SignupFileName = NetworkManager__getSignupFileName((const MethodInfo *)OldSignupFileName);
  FriendCodeFileName = NetworkManager__getFriendCodeFileName((const MethodInfo *)SignupFileName);
  if ( System_IO_File__Exists(OldSignupFileName, 0) )
    System_IO_File__Delete(OldSignupFileName, 0);
  if ( System_IO_File__Exists(SignupFileName, 0) )
    System_IO_File__Delete(SignupFileName, 0);
  if ( System_IO_File__Exists(FriendCodeFileName, 0) )
    System_IO_File__Delete(FriendCodeFileName, 0);
}


void NetworkManager__EndCloseUserDelete(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4C427A9 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C427A9 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  v2->static_fields->isRebootBlock = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v4);
}


void NetworkManager__EndErrorWebView(NetworkManager_o *this, const MethodInfo *method)
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
    p_errorCallbackFunc->klass = 0;
    sub_1C36FFC(p_errorCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void NetworkManager__EndGetStoreUrl(NetworkManager_o *this, System_String_o *url, const MethodInfo *method)
{
  if ( (byte_4C427AB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    byte_4C427AB = 1;
  }
  if ( url )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__OpenURL(url, 0);
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71061684(0);
}


void NetworkManager__EndLockSync(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4C427EC & 1) == 0 )
  {
    sub_1C37058(&UserServantLockManager_TypeInfo);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    byte_4C427EC = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22382/*"ok"*/, 0) )
  {
    if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    UserServantLockManager__DeleteSaveData(0);
    UserServantLockManager__ClearSaveDataList(0);
  }
  NetworkManager__OptionSync(this, v5);
}


void NetworkManager__EndLogin(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_loginCallbackFunc; // x19
  struct NetworkManager_LoginCallbackFunc_o *v6; // x21
  struct NetworkManager_LoginCallbackFunc_o *loginCallbackFunc; // t1
  NetworkManager_c *v8; // x0
  void *monitor; // x20

  if ( (byte_4C427EF & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427EF = 1;
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
    p_loginCallbackFunc->klass = 0;
    sub_1C36FFC(p_loginCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, void *, intptr_t))v6->fields.invoke_impl)(
      v6->fields.method_code,
      monitor,
      v6->fields.method);
  }
}


void NetworkManager__EndOptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C427EE & 1) == 0 )
  {
    sub_1C37058(&OptionManager_TypeInfo);
    byte_4C427EE = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__DeleteOldLocal((const MethodInfo *)v3);
  NetworkManager__EndLogin(this, v4);
}


void NetworkManager__EndTopLogin(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  NetworkManager_o *v6; // x0
  const MethodInfo *v7; // x2
  System_Int64_array *Instance; // x0
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  Il2CppObject *Request_object; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  System_Int64_array *v14; // x20
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF
  int32_t resulta; // [xsp+4Ch] [xbp-24h] BYREF

  if ( (byte_4C427EB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_string___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C37058(&Method_NetworkManager_EndLockSync__);
    sub_1C37058(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    sub_1C37058(&Method_NetworkManager_getRequest_CardLockSyncRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&PurchaseBehaviour_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_1C37058(&UserServantLockManager_TypeInfo);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    byte_4C427EB = 1;
  }
  memset(&v18, 0, sizeof(v18));
  resulta = 0;
  this->fields.loginResponseResult = result;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loginResponseResult, (int32_t)result, (int32_t)method, v3);
  NetworkManager__SetupObfuscatedAccountId(v6, this->fields.loginResponseResult, v7);
  Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  ManagementManager__BuildInfoDisp((ManagementManager_o *)Instance, 1, v9);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0);
  Instance = (System_Int64_array *)System_Linq_Enumerable__Any_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)PreparePurchaseShopIdsFromPlayerPrefs,
                                     (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_string___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !PreparePurchaseShopIdsFromPlayerPrefs )
      goto LABEL_31;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v18 = v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      if ( System_Int32__TryParse((System_String_o *)v18.fields._current, &resulta, 0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Request_object = NetworkManager__getRequest_object_(
                           0,
                           (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
        if ( !Request_object )
          sub_1C372B4(0);
        CancelPurchaseByBankRequest__beginRequest((CancelPurchaseByBankRequest_o *)Request_object, resulta, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  if ( UserServantLockManager__ReadData(0) )
  {
    if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    Instance = UserServantLockManager__GetLockList(0);
    if ( !Instance )
      goto LABEL_31;
    v14 = Instance;
    if ( Instance->max_length )
    {
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v15, (Il2CppObject *)this, Method_NetworkManager_EndLockSync__, v16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (System_Int64_array *)NetworkManager__getRequest_object_(
                                         v15,
                                         (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardLockSyncRequest___);
      if ( Instance )
      {
        CardLockSyncRequest__beginRequest((CardLockSyncRequest_o *)Instance, v14, 0, 0, 0);
        return;
      }
LABEL_31:
      sub_1C372B4(Instance);
    }
    NetworkManager__EndLockSync(this, (System_String_o *)StringLiteral_22382/*"ok"*/, v13);
  }
  else
  {
    NetworkManager__OptionSync(this, v12);
  }
}


void NetworkManager__ErrorDialog(
        NetworkManager_o *this,
        System_String_o *errorTitle,
        System_String_o *errorDetail,
        System_String_o *errorUrl,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v11; // x20
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v13; // x23
  __int64 v14; // x0

  if ( (byte_4C427A0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_NetworkManager_EndErrorDialog__);
    sub_1C37058(&Method_NetworkManager_EndErrorWebView__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&WebViewManager_TypeInfo);
    byte_4C427A0 = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.errorCallbackFunc,
    (int32_t)callback,
    (int32_t)errorDetail,
    (const MethodInfo *)errorUrl);
  if ( errorUrl )
  {
    v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(errorTitle, errorUrl, v11, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v13, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0);
    if ( !Instance )
      sub_1C372B4(v14);
    CommonUI__OpenErrorDialog((CommonUI_o *)Instance, errorTitle, errorDetail, v13, 0, 0);
  }
}


int32_t NetworkManager__ExecuteCommand(ResponseData_o *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x0
  Il2CppObject *Item; // x0

  if ( (byte_4C427E1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4C427E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  if ( !data )
    sub_1C372B4(Instance);
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)Instance[5].monitor;
  if ( !monitor )
    sub_1C372B4(0);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           monitor,
           (Il2CppObject *)data->fields.nid,
           (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__);
  if ( !Item )
    sub_1C372B4(0);
  return ((__int64 (__fastcall *)(Il2CppObject *, ResponseData_o *, const MethodInfo *))Item->klass->vtable[5].methodPtr)(
           Item,
           data,
           Item->klass->vtable[5].method);
}


System_String_o *NetworkManager__GetApiCode(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *klass; // x19

  if ( (byte_4C427CB & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C427CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  klass = (System_String_o *)Instance[2].klass;
  if ( System_String__IsNullOrEmpty(klass, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__MouseGame1(klass, 0, 0);
}


System_String_o *NetworkManager__GetAuthCode(
        System_Collections_Generic_SortedDictionary_string__string__o *headers,
        const MethodInfo *method)
{
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v2; // x19
  System_String_o *v3; // x20
  System_String_o *v4; // x19
  System_Collections_Generic_KeyValuePair_TKey__TValue__o Current; // kr00_16
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  NetworkManager_c *v24; // x0
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v25; // x20
  System_Text_UTF8Encoding_o *v26; // x21
  NetworkManager_c *v27; // x0
  System_Byte_array *v28; // x19
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v30; // [xsp+0h] [xbp-C0h] BYREF
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v31; // [xsp+30h] [xbp-90h] BYREF

  v2 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)headers;
  if ( (byte_4C42786 & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&System_Text_UTF8Encoding_TypeInfo);
    sub_1C37058(&StringLiteral_1744/*"="*/);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    sub_1C37058(&StringLiteral_501/*"&"*/);
    headers = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42786 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !v2 )
    goto LABEL_33;
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_SortedDictionary_object__object___GetEnumerator(
    &v30,
    v2,
    (const MethodInfo_39EE0D0 *)Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v4 = v3;
    if ( !System_Collections_Generic_SortedDictionary_Enumerator_object__object___MoveNext(
            &v31,
            (const MethodInfo_356054C *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__) )
      break;
    Current = System_Collections_Generic_SortedDictionary_Enumerator_object__object___get_Current(
                &v31,
                (const MethodInfo_356062C *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__);
    if ( System_String__op_Inequality(v3, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      v6 = sub_1C37100(string___TypeInfo, 5);
      v9 = v6;
      if ( !v6 )
        sub_1C372B4(0);
      if ( !*(_DWORD *)(v6 + 24) )
        sub_1C372BC(v6);
      *(_QWORD *)(v6 + 32) = v3;
      sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v3, v7, v8);
      if ( *(_DWORD *)(v9 + 24) <= 1u )
        sub_1C372BC(v10);
      v13 = StringLiteral_501/*"&"*/;
      *(_QWORD *)(v9 + 40) = StringLiteral_501/*"&"*/;
      sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), v13, v11, v12);
      if ( *(_DWORD *)(v9 + 24) <= 2u )
        sub_1C372BC(v14);
      *(_QWORD *)(v9 + 48) = Current.fields.key;
      sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)Current.fields.key, v15, v16);
      if ( *(_DWORD *)(v9 + 24) <= 3u )
        sub_1C372BC(v17);
      v20 = StringLiteral_1744/*"="*/;
      *(_QWORD *)(v9 + 56) = StringLiteral_1744/*"="*/;
      sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 56), v20, v18, v19);
      if ( *(_DWORD *)(v9 + 24) <= 4u )
        sub_1C372BC(v21);
      *(_QWORD *)(v9 + 64) = Current.fields.value;
      sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 64), (int32_t)Current.fields.value, v22, v23);
      v3 = System_String__Concat_63602172((System_String_array *)v9, 0);
    }
    else
    {
      v3 = System_String__Concat_63601908(
             v3,
             (System_String_o *)Current.fields.key,
             (System_String_o *)StringLiteral_1744/*"="*/,
             (System_String_o *)Current.fields.value,
             0);
    }
  }
  System_Collections_Generic_SortedDictionary_Enumerator_object__object___Dispose(
    &v31,
    (const MethodInfo_35605BC *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__);
  v24 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v24 = NetworkManager_TypeInfo;
  }
  if ( !v24->static_fields->secretKey )
    return 0;
  v25 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1C372A4(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v25, 0);
  v26 = (System_Text_UTF8Encoding_o *)sub_1C372A4(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v26, 0);
  v27 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v27 = NetworkManager_TypeInfo;
  }
  headers = (System_Collections_Generic_SortedDictionary_string__string__o *)System_String__Concat_63599904(
                                                                               v4,
                                                                               (System_String_o *)StringLiteral_1457/*":"*/,
                                                                               v27->static_fields->secretKey,
                                                                               0);
  if ( !v26
    || (headers = (System_Collections_Generic_SortedDictionary_string__string__o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_Collections_Generic_SortedDictionary_string__string__o *, const MethodInfo *))v26->klass->vtable._18_GetBytes.methodPtr)(
                                                                                     v26,
                                                                                     headers,
                                                                                     v26->klass->vtable._18_GetBytes.method),
        !v25) )
  {
LABEL_33:
    sub_1C372B4(headers);
  }
  v28 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
          (System_Security_Cryptography_HashAlgorithm_o *)v25,
          (System_Byte_array *)headers,
          0);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v25, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v28, 0);
}


System_String_o *NetworkManager__GetCv(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *klass; // x19

  if ( (byte_4C427CD & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C427CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  klass = (System_String_o *)Instance[4].klass;
  if ( System_String__IsNullOrEmpty(klass, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__MouseGame1(klass, 0, 0);
}


System_String_o *NetworkManager__GetDataServerFolderName(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C427B6 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427B6 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->dataServerFolder;
}


System_String_o *NetworkManager__GetDataServerSetting(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C427C1 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427C1 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->dataServerSettingAddress;
}


System_String_o *NetworkManager__GetDataServerSetting_41374688(System_String_o *type, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4C427C2 & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C427C2 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseDataServerAddress;
}


bool NetworkManager__GetDebugSlowConnect(const MethodInfo *method)
{
  return 0;
}


System_String_o *NetworkManager__GetDispFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  System_String_o *friendCode; // x19

  if ( (byte_4C42780 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42780 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  friendCode = v2->static_fields->friendCode;
  if ( !friendCode )
    return 0;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    friendCode = NetworkManager_TypeInfo->static_fields->friendCode;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetNumberFormat_41274664(friendCode, 0);
}


System_String_o *NetworkManager__GetFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_4C4277F & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4277F = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->friendCode;
}


System_String_o *NetworkManager__GetGameServerSetting(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C427BF & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427BF = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->gameServerSettingAddress;
}


System_String_o *NetworkManager__GetGameServerSetting_41374512(System_String_o *type, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4C427C0 & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C427C0 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseGameServerAddress;
}


int64_t NetworkManager__GetLastServerTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C42782 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42782 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->serverTime;
}


System_String_o *NetworkManager__GetMk(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *monitor; // x19

  if ( (byte_4C427CC & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C427CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  monitor = (System_String_o *)Instance[3].monitor;
  if ( System_String__IsNullOrEmpty(monitor, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__MouseGame1(monitor, 0, 0);
}


bool NetworkManager__GetSecurityServerSetting(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C427BC & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427BC = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->serverSettingSecurity;
}


bool NetworkManager__GetSecurityServerSetting_41374336(System_String_o *type, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4C427BE & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C427BE = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseNetworkSecurity;
}


System_String_o *NetworkManager__GetServerNumber(System_String_o *serverName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 *v3; // x20

  v2 = serverName;
  if ( (byte_4C427D9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4988/*"DEV"*/);
    sub_1C37058(&StringLiteral_12302/*"STAGING"*/);
    sub_1C37058(&StringLiteral_12361/*"STG"*/);
    sub_1C37058(&StringLiteral_15242/*"VERUP"*/);
    sub_1C37058(&StringLiteral_4986/*"DESIGN"*/);
    sub_1C37058(&StringLiteral_7485/*"IPADDRESS"*/);
    sub_1C37058(&StringLiteral_10810/*"QA"*/);
    sub_1C37058(&StringLiteral_10383/*"PLAN"*/);
    sub_1C37058(&StringLiteral_8264/*"LIMIT"*/);
    sub_1C37058(&StringLiteral_2053/*"AUTOTEST"*/);
    sub_1C37058(&StringLiteral_10384/*"PLAY"*/);
    serverName = (System_String_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C427D9 = 1;
  }
  if ( !v2 )
    sub_1C372B4(serverName);
  v3 = &StringLiteral_10810/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10810/*"QA"*/, 0) )
    return System_String__Replace_63608204(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  v3 = &StringLiteral_10383/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10383/*"PLAN"*/, 0) )
    return System_String__Replace_63608204(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  v3 = &StringLiteral_4988/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4988/*"DEV"*/, 0) )
    return System_String__Replace_63608204(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  v3 = &StringLiteral_8264/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8264/*"LIMIT"*/, 0) )
    return System_String__Replace_63608204(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  v3 = &StringLiteral_10384/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10384/*"PLAY"*/, 0) )
    return System_String__Replace_63608204(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  v3 = &StringLiteral_4986/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4986/*"DESIGN"*/, 0) )
    return System_String__Replace_63608204(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  v3 = &StringLiteral_15242/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15242/*"VERUP"*/, 0) )
    return System_String__Replace_63608204(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  v3 = &StringLiteral_2053/*"AUTOTEST"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_2053/*"AUTOTEST"*/, 0) )
    return System_String__Replace_63608204(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  v3 = &StringLiteral_12361/*"STG"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12361/*"STG"*/, 0)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12302/*"STAGING"*/, 0) )
  {
    return System_String__Replace_63608204(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v3 = &StringLiteral_7485/*"IPADDRESS"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7485/*"IPADDRESS"*/, 0) )
    return System_String__Replace_63608204(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *NetworkManager__GetServerSettingType(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C427BB & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427BB = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->serverSettingType;
}


int64_t NetworkManager__GetServerTimeChkMovie(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C42784 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42784 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->serverTimeChkMovie;
}


System_String_o *NetworkManager__GetServerType(System_String_o *serverName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 *v3; // x20

  v2 = serverName;
  if ( (byte_4C427D8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4988/*"DEV"*/);
    sub_1C37058(&StringLiteral_12302/*"STAGING"*/);
    sub_1C37058(&StringLiteral_12361/*"STG"*/);
    sub_1C37058(&StringLiteral_15242/*"VERUP"*/);
    sub_1C37058(&StringLiteral_4986/*"DESIGN"*/);
    sub_1C37058(&StringLiteral_7485/*"IPADDRESS"*/);
    sub_1C37058(&StringLiteral_10810/*"QA"*/);
    sub_1C37058(&StringLiteral_10383/*"PLAN"*/);
    sub_1C37058(&StringLiteral_8264/*"LIMIT"*/);
    sub_1C37058(&StringLiteral_2053/*"AUTOTEST"*/);
    serverName = (System_String_o *)sub_1C37058(&StringLiteral_10384/*"PLAY"*/);
    byte_4C427D8 = 1;
  }
  if ( !v2 )
    sub_1C372B4(serverName);
  v3 = &StringLiteral_10810/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10810/*"QA"*/, 0) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_10383/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10383/*"PLAN"*/, 0) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_4988/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4988/*"DEV"*/, 0) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_8264/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8264/*"LIMIT"*/, 0) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_10384/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10384/*"PLAY"*/, 0) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_4986/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4986/*"DESIGN"*/, 0) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_15242/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15242/*"VERUP"*/, 0) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_2053/*"AUTOTEST"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_2053/*"AUTOTEST"*/, 0) )
    return (System_String_o *)*v3;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12361/*"STG"*/, 0)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12302/*"STAGING"*/, 0) )
  {
    v3 = &StringLiteral_12361/*"STG"*/;
    return (System_String_o *)*v3;
  }
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7485/*"IPADDRESS"*/, 0) )
    return (System_String_o *)StringLiteral_7485/*"IPADDRESS"*/;
  else
    return v2;
}


void NetworkManager__GetSignup(
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

  if ( (byte_4C42778 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42778 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  v11 = v10->static_fields->userName;
  *userName = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)userName, (int32_t)v11, (int32_t)genderType, (const MethodInfo *)month);
  static_fields = NetworkManager_TypeInfo->static_fields;
  *genderType = static_fields->genderType;
  *month = static_fields->month;
  *day = static_fields->day;
}


void NetworkManager__GetStoreUrl(
        NetworkManager_o *this,
        System_String_o *storeName,
        System_String_o *id,
        NetworkManager_StoreCallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *updated; // x1

  updated = NetworkManager__RequestApplicationUpdateCR(this, storeName, id, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, updated, 0);
}


int32_t NetworkManager__GetTerminalDispState(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4C42771 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C42771 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 9, 0) )
    return 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FA9A )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_DispState_k__BackingField != 2;
}


System_String_o *NetworkManager__GetTopLoginResult(NetworkManager_o *this, const MethodInfo *method)
{
  return this->fields.loginResponseResult;
}


System_String_o *NetworkManager__GetWarBoardRuleUrl(int32_t stageId, const MethodInfo *method)
{
  Il2CppObject *BaseUrl; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C427D7 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_24800/*"webview/warBoard?stageId="*/);
    byte_4C427D7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = (Il2CppObject *)NetworkManager__getBaseUrl(0, method);
  v12 = stageId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Concat_63599656(BaseUrl, (Il2CppObject *)StringLiteral_24800/*"webview/warBoard?stageId="*/, v10, 0);
}


System_String_o *NetworkManager__GetWebServerSetting(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C427C3 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427C3 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->webServerSettingAddress;
}


System_String_o *NetworkManager__GetWebServerSetting_41374864(System_String_o *type, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4C427C4 & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C427C4 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  return v2->static_fields->ReleaseWebServerAddress;
}


void NetworkManager__GoToTitleDialog(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *v5; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x5

  if ( (byte_4C4279F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_NetworkManager_OnClickErrorReboot__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_12583/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4279F = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( !static_fields->isRebootBlock )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = NetworkManager_TypeInfo->static_fields;
    }
    static_fields->isRebootBlock = 1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12583/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, 0);
    v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0);
    NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v5, 0, v6, v7);
  }
}


System_Collections_IEnumerator_o *NetworkManager__Initialize(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C42773 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager__Initialize_d__83_TypeInfo);
    byte_4C42773 = 1;
  }
  v3 = sub_1C372A4(NetworkManager__Initialize_d__83_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void NetworkManager__InitializeUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_o *UserAgentString; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  NetworkManager_c *v6; // x8
  System_String_o *v7; // x19
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4C42774 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42774 = 1;
  }
  this->fields._isWaitUserAgent_k__BackingField = 0;
  UserAgentString = NetworkServicePluginScript__GetUserAgentString(0);
  v6 = NetworkManager_TypeInfo;
  v7 = UserAgentString;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->userAgent = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->userAgent, (int32_t)v7, v4, v5);
}


System_String_o *NetworkManager__LoadAuthMd5(NetworkManager_o *this, System_String_o *fname, const MethodInfo *method)
{
  System_String_o *v4; // x21
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryReader_o *v6; // x19
  __int64 v7; // x0
  System_String_o *v8; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0

  if ( (byte_4C4278B & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    byte_4C4278B = 1;
  }
  v4 = 0;
  if ( System_IO_File__Exists(fname, 0) )
  {
    v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(fname, 0);
    v6 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v6, v5, 0);
    if ( !v6 )
      sub_1C372B4(v7);
    v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._22_ReadString.methodPtr)(
                              v6,
                              v6->klass->vtable._22_ReadString.method);
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v4 = EncryptedPlayerPrefs__Md5(v8, 0);
    klass = v6->klass;
    v10 = *(unsigned __int16 *)&v6->klass->_2.rank;
    if ( *(_WORD *)&v6->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_11:
      v12 = sub_1C87870(v6, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v12)(v6, *(_QWORD *)(v12 + 8));
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
void NetworkManager__OnApplicationPause(NetworkManager_o *this, bool isPause, const MethodInfo *method)
{
  if ( !isPause )
    NetworkManager__CheckServerLimitTime(this, (const MethodInfo *)isPause);
}


// local variable allocation has failed, the output may be wrong!
bool NetworkManager__OnBackgroundErrorCommunication(
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
  if ( (byte_4C427E6 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1C37058(&StringLiteral_4616/*"CommunicationStart"*/);
    byte_4C427E6 = 1;
  }
  if ( !requestWork )
    sub_1C372B4(this);
  v11 = ((__int64 (__fastcall *)(RequestBase_o *, System_String_o *, const MethodInfo *, bool, const MethodInfo *))requestWork->klass->vtable._11_backgroundErrorRequest.methodPtr)(
          requestWork,
          errorCode,
          requestWork->klass->vtable._11_backgroundErrorRequest.method,
          forceCommunication,
          method)
      | forceCommunication;
  if ( (v11 & 1) != 0 )
  {
    if ( v8->fields.communicationWork == requestWork )
    {
      v8->fields.communicationWorkResponseList = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v8->fields.communicationWorkResponseList, 0, v9, v10);
      v8->fields.communicationWork = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v8->fields.communicationWork, 0, v12, v13);
      v8->fields.communicationCoroutine = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v8->fields.communicationCoroutine, 0, v14, v15);
      if ( v8->fields.cacheRefreshWork )
      {
        v8->fields.cacheRefreshWork = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v8->fields.cacheRefreshWork, 0, v16, v17);
        v8->fields.cacheRefreshWorkResponseList = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v8->fields.cacheRefreshWorkResponseList, 0, v18, v19);
      }
    }
    ((void (__fastcall *)(RequestBase_o *, const MethodInfo *))requestWork->klass->vtable._12_backgroundErrorRetry.methodPtr)(
      requestWork,
      requestWork->klass->vtable._12_backgroundErrorRetry.method);
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v8, (System_String_o *)StringLiteral_4616/*"CommunicationStart"*/, 0.0, 0);
  }
  return v11 & 1;
}


void NetworkManager__OnClickErrorDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4C427AC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    byte_4C427AC = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71061684(0);
}


void NetworkManager__OnClickErrorReboot(NetworkManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0
  NetworkManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4C427A4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&ManagementManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C427A4 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4C41F40 )
  {
    sub_1C37058(&ManagementManager_TypeInfo);
    byte_4C41F40 = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v2 = ManagementManager_TypeInfo;
  }
  if ( v2->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71061684(0);
  }
  else
  {
    v3 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v3 = NetworkManager_TypeInfo;
    }
    v3->static_fields->isRebootBlock = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v5);
  }
}


void NetworkManager__OnClickErrorRetryDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ManagementManager_c *v11; // x0
  NetworkManager_c *v12; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x3

  if ( (byte_4C427A1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&ManagementManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C427A1 = 1;
  }
  this->fields.communicationWorkResponseList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationWorkResponseList, 0, (int32_t)method, v3);
  if ( isDecide )
  {
    v7 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v6);
    started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v7, 0);
    this->fields.communicationCoroutine = started;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v9, v10);
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_4C41F40 )
    {
      sub_1C37058(&ManagementManager_TypeInfo);
      byte_4C41F40 = 1;
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
      UnityEngine_Application__Quit_71061684(0);
    }
    else
    {
      v12 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v12 = NetworkManager_TypeInfo;
      }
      v12->static_fields->isRebootBlock = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1C372B4(0);
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v14);
    }
  }
}


void NetworkManager__OnClickErrorRetryDialog_UnityIap(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
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
  const MethodInfo *v14; // x3

  if ( (byte_4C427A2 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C427A2 = 1;
  }
  if ( isDecide )
  {
    this->fields.communicationWorkResponseList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationWorkResponseList, 0, (int32_t)method, v3);
    v7 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v6);
    started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v7, 0);
    this->fields.communicationCoroutine = started;
    v11 = (int)started;
    p_communicationCoroutine = (CGThumbnailListItem_o *)&this->fields.communicationCoroutine;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    CommonUI__CloseRetryDialog((CommonUI_o *)Instance, 0);
    NetworkManager__OnEndCommunication(
      this,
      this->fields.communicationWork,
      this->fields.communicationWorkResponseList,
      v14);
    p_communicationCoroutine = (CGThumbnailListItem_o *)&this->fields.communicationWorkResponseList;
    v11 = 0;
    this->fields.communicationWorkResponseList = 0;
  }
  sub_1C36FFC(p_communicationCoroutine, v11, v9, v10);
}


void NetworkManager__OnClickErrorStay(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  NetworkManager__OnEndCommunication(
    this,
    this->fields.communicationWork,
    this->fields.communicationWorkResponseList,
    v2);
}


void NetworkManager__OnClickErrorTerminal(NetworkManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0
  NetworkManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4C427A5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&ManagementManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C427A5 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4C41F40 )
  {
    sub_1C37058(&ManagementManager_TypeInfo);
    byte_4C41F40 = 1;
  }
  v2 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v2 = ManagementManager_TypeInfo;
  }
  if ( v2->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71061684(0);
  }
  else
  {
    v3 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v3 = NetworkManager_TypeInfo;
    }
    v3->static_fields->isRebootBlock = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    ManagementManager__reboot((ManagementManager_o *)Instance, 1, 1, v5);
  }
}


void NetworkManager__OnClickRefreshTerminal(NetworkManager_o *this, const MethodInfo *method)
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

  if ( (byte_4C427A6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_13713/*"TerminalStart"*/);
    byte_4C427A6 = 1;
  }
  this->fields.communicationWorkResponseList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationWorkResponseList, 0, v2, v3);
  communicationCoroutine = this->fields.communicationCoroutine;
  if ( communicationCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_71252944((UnityEngine_MonoBehaviour_o *)this, communicationCoroutine, 0);
  this->fields.communicationWork = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationWork, 0, v5, v6);
  this->fields.communicationCoroutine = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationCoroutine, 0, v8, v9);
  if ( this->fields.cacheRefreshWork )
  {
    this->fields.cacheRefreshWork = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cacheRefreshWork, 0, v10, v11);
    this->fields.cacheRefreshWorkResponseList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cacheRefreshWorkResponseList, 0, v12, v13);
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13713/*"TerminalStart"*/, 0.0, 0);
}


void NetworkManager__OnClickReloadCache(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct RequestBase_o *communicationWork; // x1
  RequestBase_o **p_communicationWork; // x20
  struct ResponseData_array *communicationWorkResponseList; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Request_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  System_Collections_IEnumerator_o *v16; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C427A3 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_TopRefreshRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427A3 = 1;
  }
  p_communicationWork = &this->fields.communicationWork;
  communicationWork = this->fields.communicationWork;
  this->fields.cacheRefreshWork = communicationWork;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cacheRefreshWork, (int32_t)communicationWork, v2, v3);
  communicationWorkResponseList = this->fields.communicationWorkResponseList;
  this->fields.cacheRefreshWorkResponseList = communicationWorkResponseList;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.cacheRefreshWorkResponseList,
    (int32_t)communicationWorkResponseList,
    v8,
    v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TopRefreshRequest___);
  *p_communicationWork = (RequestBase_o *)Request_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationWork, (int32_t)Request_object, v11, v12);
  this->fields.communicationWorkResponseList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationWorkResponseList, 0, v13, v14);
  if ( !*p_communicationWork )
    sub_1C372B4(0);
  RequestBase__addBaseField(*p_communicationWork, 0);
  v16 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v15);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v16, 0);
  this->fields.communicationCoroutine = started;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v18, v19);
}


void NetworkManager__OnClickStore(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4C427AA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C427AA = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  WebViewPluginScript__LaunchStore(v2->static_fields->AndroidPackageName, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_71061684(0);
}


void NetworkManager__OnClickUserDelete(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  OptionManager_c *v5; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4C427A8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_NetworkManager_EndCloseUserDelete__);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C427A8 = 1;
  }
  if ( isDecide )
  {
    UserSaveData__DeleteSaveData(1, 0);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__Initialize((const MethodInfo *)v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_NetworkManager_EndCloseUserDelete__, 0);
  if ( !Instance )
    sub_1C372B4(v8);
  CommonUI__CloseConfirmDialog_31208544((CommonUI_o *)Instance, v7, 0);
}


void NetworkManager__OnClickWaitDebugDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isWaitDebugDialog = 0;
}


void NetworkManager__OnEndCommunication(
        NetworkManager_o *this,
        RequestBase_o *requestWork,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_array *cacheRefreshWorkResponseList; // x20
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
  v6 = this;
  if ( (byte_4C427E5 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1C37058(&StringLiteral_4616/*"CommunicationStart"*/);
    byte_4C427E5 = 1;
  }
  if ( v6->fields.communicationWork != requestWork )
    goto LABEL_4;
  v6->fields.communicationWorkResponseList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.communicationWorkResponseList, 0, (int32_t)responseList, method);
  v6->fields.communicationWork = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.communicationWork, 0, v7, v8);
  v6->fields.communicationCoroutine = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.communicationCoroutine, 0, v9, v10);
  this = (NetworkManager_o *)&v6->fields.cacheRefreshWork;
  cacheRefreshWork = v6->fields.cacheRefreshWork;
  if ( cacheRefreshWork )
  {
    cacheRefreshWorkResponseList = v6->fields.cacheRefreshWorkResponseList;
    v6->fields.cacheRefreshWork = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)this, 0, v11, v12);
    v6->fields.cacheRefreshWorkResponseList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.cacheRefreshWorkResponseList, 0, v14, v15);
    requestWork = cacheRefreshWork;
  }
  else
  {
LABEL_4:
    if ( !requestWork )
      sub_1C372B4(this);
  }
  ((void (__fastcall *)(RequestBase_o *, ResponseData_array *, const MethodInfo *))requestWork->klass->vtable._10_requestCompleted.methodPtr)(
    requestWork,
    cacheRefreshWorkResponseList,
    requestWork->klass->vtable._10_requestCompleted.method);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v6, (System_String_o *)StringLiteral_4616/*"CommunicationStart"*/, 0.0, 0);
}


bool NetworkManager__OnErrorCommunication(
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
  if ( (byte_4C427E7 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1C37058(&StringLiteral_4616/*"CommunicationStart"*/);
    byte_4C427E7 = 1;
  }
  if ( !requestWork )
    sub_1C372B4(this);
  v9 = ((__int64 (__fastcall *)(RequestBase_o *, System_String_o *, const MethodInfo *, const MethodInfo *))requestWork->klass->vtable._14_errorRequest.methodPtr)(
         requestWork,
         errorCode,
         requestWork->klass->vtable._14_errorRequest.method,
         method);
  if ( (v9 & 1) != 0 )
  {
    if ( v6->fields.communicationWork == requestWork )
    {
      v6->fields.communicationWorkResponseList = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.communicationWorkResponseList, 0, v7, v8);
      v6->fields.communicationWork = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.communicationWork, 0, v10, v11);
      v6->fields.communicationCoroutine = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.communicationCoroutine, 0, v12, v13);
      if ( v6->fields.cacheRefreshWork )
      {
        v6->fields.cacheRefreshWork = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.cacheRefreshWork, 0, v14, v15);
        v6->fields.cacheRefreshWorkResponseList = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.cacheRefreshWorkResponseList, 0, v16, v17);
      }
    }
    ((void (__fastcall *)(RequestBase_o *, const MethodInfo *))requestWork->klass->vtable._15_errorRetry.methodPtr)(
      requestWork,
      requestWork->klass->vtable._15_errorRetry.method);
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v6, (System_String_o *)StringLiteral_4616/*"CommunicationStart"*/, 0.0, 0);
  }
  return v9 & 1;
}


void NetworkManager__OptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  const MethodInfo *v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4C427ED & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_NetworkManager_EndOptionSync__);
    sub_1C37058(&OptionManager_TypeInfo);
    byte_4C427ED = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__CheckOldLocal((const MethodInfo *)v3) )
  {
    v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_NetworkManager_EndOptionSync__, 0);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SaveData(v5, v6);
  }
  else
  {
    NetworkManager__EndLogin(this, v4);
  }
}


System_Collections_Generic_Dictionary_string__string__o *NetworkManager__ParseQueryString(
        System_String_o *url,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x19
  void *v4; // x0
  int32_t v5; // w0
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w21

  if ( (byte_4C42785 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    byte_4C42785 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !url )
    goto LABEL_17;
  v5 = System_String__IndexOf(url, 0x3Fu, 0);
  if ( v5 != -1 )
  {
    v4 = System_String__Substring(url, v5 + 1, 0);
    if ( !v4 )
      goto LABEL_17;
    v4 = System_String__Split((System_String_o *)v4, 0x26u, 0, 0);
    if ( !v4 )
      goto LABEL_17;
    v6 = *((_DWORD *)v4 + 6);
    v7 = v4;
    if ( v6 >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= v6 )
          sub_1C372BC(v4);
        v4 = (void *)*((_QWORD *)v7 + (int)v8 + 4);
        if ( !v4 )
          break;
        v4 = System_String__Split((System_String_o *)v4, 0x3Du, 0, 0);
        if ( !v4 )
          break;
        if ( *((_DWORD *)v4 + 6) == 2 )
        {
          if ( !v3 )
            break;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v3,
            *((Il2CppObject **)v4 + 4),
            *((Il2CppObject **)v4 + 5),
            (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
        }
        v6 = *((_DWORD *)v7 + 6);
        if ( (int)++v8 >= v6 )
          return (System_Collections_Generic_Dictionary_string__string__o *)v3;
      }
LABEL_17:
      sub_1C372B4(v4);
    }
  }
  return (System_Collections_Generic_Dictionary_string__string__o *)v3;
}


int32_t NetworkManager__ReadAuth(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  int32_t v4; // w8
  NetworkManager_o *v5; // x0
  const MethodInfo *v6; // x1
  int v7; // w25
  int v8; // w26
  int32_t v9; // w19
  System_String_o *AuthFileName; // x21
  System_IO_Stream_o *v11; // x22
  System_IO_BinaryReader_o *v12; // x21
  __int64 v13; // x0
  System_String_o *v14; // x22
  System_String_o *v15; // x23
  NetworkManager_c *v16; // x0
  System_String_o *String; // x1
  int v18; // w23
  char v19; // w20
  System_String_o *v20; // x22
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_object__object__o *v22; // x22
  Il2CppObject *Item; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x23
  NetworkManager_c *v27; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  struct NetworkManager_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  struct NetworkManager_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  struct NetworkManager_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_IO_BinaryReader_c *klass; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 v47; // x0

  if ( (byte_4C42788 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&SignedData_TypeInfo);
    sub_1C37058(&StringLiteral_24510/*"userCreateServer"*/);
    sub_1C37058(&StringLiteral_16946/*"authKey"*/);
    sub_1C37058(&StringLiteral_23249/*"secretKey"*/);
    sub_1C37058(&StringLiteral_24554/*"userId"*/);
    byte_4C42788 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v5 = (NetworkManager_o *)NetworkManager__SyncAuth(this, method);
  if ( (_DWORD)v5 == 2 )
    return 6;
  v7 = 0;
  v8 = 5;
  v9 = 1;
  while ( v8 > 0 )
  {
    --v8;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    AuthFileName = NetworkManager__getAuthFileName(v7 & 1, v6);
    v7 ^= 1u;
    v5 = (NetworkManager_o *)System_IO_File__Exists(AuthFileName, 0);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v11 = (System_IO_Stream_o *)System_IO_File__OpenRead(AuthFileName, 0);
      v12 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v12, v11, 0);
      if ( !v12 )
        sub_1C372B4(v13);
      v14 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v12->klass->vtable._22_ReadString.methodPtr)(
                                 v12,
                                 v12->klass->vtable._22_ReadString.method);
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      v15 = EncryptedPlayerPrefs__Md5(v14, 0);
      v16 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v16 = NetworkManager_TypeInfo;
      }
      String = UnityEngine_PlayerPrefs__GetString(v16->static_fields->AUTHMD5_KEY_TYPE, v15, 0);
      if ( System_String__op_Inequality(v15, String, 0) )
      {
        v18 = 4;
        v19 = 1;
        v9 = 2;
      }
      else
      {
        if ( !v14 )
          goto LABEL_37;
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        v20 = CatAndMouseGame__MouseGame1(v14, 0, 0);
        if ( v20 )
        {
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          Dictionary = JsonManager__getDictionary(v20, 0);
          v22 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
          if ( !Dictionary )
            sub_1C372B4(0);
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                   (Il2CppObject *)StringLiteral_24510/*"userCreateServer"*/,
                   (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            sub_1C372B4(0);
          v26 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                  Item,
                  Item->klass->vtable[3].method);
          v27 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v27 = NetworkManager_TypeInfo;
          }
          static_fields = v27->static_fields;
          static_fields->userCreateServer = (struct System_String_o *)v26;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->userCreateServer, v26, v24, v25);
          v29 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v22,
                  (Il2CppObject *)StringLiteral_24554/*"userId"*/,
                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v29 )
            sub_1C372B4(0);
          v30 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v29->klass->vtable[3].methodPtr)(
                  v29,
                  v29->klass->vtable[3].method);
          v31 = NetworkManager_TypeInfo->static_fields;
          v31->userId = (struct System_String_o *)v30;
          sub_1C36FFC((CGThumbnailListItem_o *)&v31->userId, v30, v32, v33);
          v34 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v22,
                  (Il2CppObject *)StringLiteral_16946/*"authKey"*/,
                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v34 )
            sub_1C372B4(0);
          v35 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v34->klass->vtable[3].methodPtr)(
                  v34,
                  v34->klass->vtable[3].method);
          v36 = NetworkManager_TypeInfo->static_fields;
          v36->authKey = (struct System_String_o *)v35;
          sub_1C36FFC((CGThumbnailListItem_o *)&v36->authKey, v35, v37, v38);
          v39 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v22,
                  (Il2CppObject *)StringLiteral_23249/*"secretKey"*/,
                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v39 )
            sub_1C372B4(0);
          v40 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v39->klass->vtable[3].methodPtr)(
                  v39,
                  v39->klass->vtable[3].method);
          v41 = NetworkManager_TypeInfo->static_fields;
          v41->secretKey = (struct System_String_o *)v40;
          sub_1C36FFC((CGThumbnailListItem_o *)&v41->secretKey, v40, v42, v43);
          NetworkManager_TypeInfo->static_fields->userIdNumber = System_Int64__Parse(
                                                                   NetworkManager_TypeInfo->static_fields->userId,
                                                                   0);
          if ( !SignedData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
          SignedData__RefreshSigningData(3, 0);
          v19 = 0;
          v18 = 16;
        }
        else
        {
LABEL_37:
          v18 = 4;
          v19 = 1;
        }
      }
      klass = v12->klass;
      v45 = *(unsigned __int16 *)&v12->klass->_2.rank;
      if ( *(_WORD *)&v12->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v45;
          p_offset += 4;
          if ( !v45 )
            goto LABEL_42;
        }
        v47 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_42:
        v47 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
      }
      v5 = (NetworkManager_o *)(*(__int64 (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v47)(
                                 v12,
                                 *(_QWORD *)(v47 + 8));
      if ( v18 == 16 )
      {
        v4 = 0;
        if ( (v19 & 1) == 0 )
          return v4;
      }
    }
  }
  NetworkManager__ClearAuth(v5, v6);
  return v9;
}


bool NetworkManager__ReadFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  System_String_o *FriendCodeFileName; // x19
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryReader_o *v6; // x19
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x20
  NetworkManager_c *v11; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v13; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0

  if ( (byte_4C4277C & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4277C = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 0;
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  FriendCodeFileName = NetworkManager__getFriendCodeFileName((const MethodInfo *)v3);
  if ( !System_IO_File__Exists(FriendCodeFileName, 0) )
    return 0;
  v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(FriendCodeFileName, 0);
  v6 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v6, v5, 0);
  if ( !v6 )
    sub_1C372B4(v7);
  v10 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._22_ReadString.methodPtr)(
          v6,
          v6->klass->vtable._22_ReadString.method);
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->friendCode = (struct System_String_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->friendCode, v10, v8, v9);
  v13 = 1;
  klass = v6->klass;
  v15 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_16;
    }
    v17 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_16:
    v17 = sub_1C87870(v6, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v17)(v6, *(_QWORD *)(v17 + 8));
  return v13;
}


bool NetworkManager__ReadOldSignup(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  System_String_o *OldSignupFileName; // x19
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryReader_o *v6; // x19
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x20
  NetworkManager_c *v11; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v13; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0

  if ( (byte_4C42776 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42776 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 0;
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  OldSignupFileName = NetworkManager__getOldSignupFileName((const MethodInfo *)v3);
  if ( !System_IO_File__Exists(OldSignupFileName, 0) )
    return 0;
  v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(OldSignupFileName, 0);
  v6 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v6, v5, 0);
  if ( !v6 )
    sub_1C372B4(v7);
  v10 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._22_ReadString.methodPtr)(
          v6,
          v6->klass->vtable._22_ReadString.method);
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->userName = (struct System_String_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->userName, v10, v8, v9);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                                                         v6,
                                                         v6->klass->vtable._15_ReadInt32.method);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                                                    v6,
                                                    v6->klass->vtable._15_ReadInt32.method);
  v13 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                                                  v6,
                                                  v6->klass->vtable._15_ReadInt32.method);
  klass = v6->klass;
  v15 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_16;
    }
    v17 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_16:
    v17 = sub_1C87870(v6, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v17)(v6, *(_QWORD *)(v17 + 8));
  return v13;
}


bool NetworkManager__ReadServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  if ( (byte_4C427CE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4977/*"DEFAULT"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C427CE = 1;
  }
  NetworkManager__SetServerSetting(
    this,
    (System_String_o *)StringLiteral_4977/*"DEFAULT"*/,
    0,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v2);
  return 0;
}


bool NetworkManager__ReadSignup(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  System_String_o *SignupFileName; // x19
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryReader_o *v6; // x19
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x20
  NetworkManager_c *v11; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v13; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0

  if ( (byte_4C42777 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42777 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 0;
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  SignupFileName = NetworkManager__getSignupFileName((const MethodInfo *)v3);
  if ( !System_IO_File__Exists(SignupFileName, 0) )
    return 0;
  v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(SignupFileName, 0);
  v6 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v6, v5, 0);
  if ( !v6 )
    sub_1C372B4(v7);
  v10 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._22_ReadString.methodPtr)(
          v6,
          v6->klass->vtable._22_ReadString.method);
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->userName = (struct System_String_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->userName, v10, v8, v9);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                                                         v6,
                                                         v6->klass->vtable._15_ReadInt32.method);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                                                    v6,
                                                    v6->klass->vtable._15_ReadInt32.method);
  v13 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                                                  v6,
                                                  v6->klass->vtable._15_ReadInt32.method);
  klass = v6->klass;
  v15 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_16;
    }
    v17 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_16:
    v17 = sub_1C87870(v6, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v17)(v6, *(_QWORD *)(v17 + 8));
  return v13;
}


void NetworkManager__ReleseService(NetworkManager_o *this, const MethodInfo *method)
{
  ;
}


void NetworkManager__ReplaceBaseField(RequestBase_o *request, bool isRefreshTime, const MethodInfo *method)
{
  void *Instance; // x0
  DataManager_c *v6; // x0
  DataManager_c *v7; // x0
  NetworkManager_c *v8; // x0
  int64_t Time; // x0
  const MethodInfo *v10; // x2
  System_String_o *v11; // x0
  System_Guid_o v12; // [xsp+0h] [xbp-40h] BYREF
  System_Guid_o v13; // 0:x0.16

  if ( (byte_4C427DE & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_18491/*"dateVer"*/);
    sub_1C37058(&StringLiteral_18478/*"dataVer"*/);
    sub_1C37058(&StringLiteral_16815/*"appVer"*/);
    sub_1C37058(&StringLiteral_20260/*"idempotencyKey"*/);
    sub_1C37058(&StringLiteral_21171/*"lastAccessTime"*/);
    byte_4C427DE = 1;
  }
  Instance = ManagerConfig_TypeInfo;
  *(_QWORD *)&v12.fields._a = 0;
  *(_QWORD *)&v12.fields._d = 0;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !request )
    goto LABEL_21;
  RequestBase__replaceField_44248216(
    request,
    (System_String_o *)StringLiteral_16815/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( !byte_4C4052D )
  {
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C4052D = 1;
  }
  v6 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v6 = DataManager_TypeInfo;
  }
  RequestBase__replaceField(request, (System_String_o *)StringLiteral_18478/*"dataVer"*/, v6->static_fields->dataVersion, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1C372B4(Instance);
  if ( !byte_4C4052E )
  {
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C4052E = 1;
  }
  v7 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v7 = DataManager_TypeInfo;
  }
  RequestBase__replaceField_44247760(request, (System_String_o *)StringLiteral_18491/*"dateVer"*/, v7->static_fields->dateVersion, 0);
  if ( isRefreshTime )
  {
    v8 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime((const MethodInfo *)v8);
    RequestBase__replaceField_44247760(request, (System_String_o *)StringLiteral_21171/*"lastAccessTime"*/, Time, 0);
    v12 = System_Guid__NewGuid(0);
    *(_QWORD *)&v13.fields._a = &v12;
    *(_QWORD *)&v13.fields._d = 0;
    v11 = System_Guid__ToString(v13, v10);
    RequestBase__replaceField_44248216(request, (System_String_o *)StringLiteral_20260/*"idempotencyKey"*/, v11, 0);
  }
}


System_Collections_IEnumerator_o *NetworkManager__RequestApplicationUpdateCR(
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

  if ( (byte_4C427E8 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager__RequestApplicationUpdateCR_d__219_TypeInfo);
    byte_4C427E8 = 1;
  }
  v8 = sub_1C372A4(NetworkManager__RequestApplicationUpdateCR_d__219_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = storeName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 32), (int32_t)storeName, v9, v10);
  *(_QWORD *)(v8 + 40) = id;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 40), (int32_t)id, v11, v12);
  *(_QWORD *)(v8 + 48) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 48), (int32_t)callback, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


System_Collections_IEnumerator_o *NetworkManager__RequestCR(
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

  if ( (byte_4C427E4 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager__RequestCR_d__214_TypeInfo);
    byte_4C427E4 = 1;
  }
  v7 = sub_1C372A4(NetworkManager__RequestCR_d__214_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = work;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)work, v10, v11);
  *(float *)(v7 + 48) = delay;
  return (System_Collections_IEnumerator_o *)v7;
}


void NetworkManager__RequestLogin(
        NetworkManager_o *this,
        NetworkManager_LoginCallbackFunc_o *callback,
        bool isEnforce,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  Il2CppObject *Request_object; // x0
  TopLoginRequest_o *v10; // x21
  const MethodInfo *v11; // x1

  if ( (byte_4C427E9 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_EndTopLogin__);
    sub_1C37058(&Method_NetworkManager_getRequest_TopLoginRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C427E9 = 1;
  }
  this->fields.loginCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loginCallbackFunc, (int32_t)callback, isEnforce, method);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_NetworkManager_EndTopLogin__, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TopLoginRequest___);
  v10 = (TopLoginRequest_o *)Request_object;
  if ( isEnforce )
  {
    if ( !Request_object )
LABEL_12:
      sub_1C372B4(Request_object);
  }
  else
  {
    if ( !Request_object )
      goto LABEL_12;
    if ( (((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Request_object->klass->vtable[7].methodPtr)(
            Request_object,
            Request_object->klass->vtable[7].method)
        & 1) != 0 )
    {
      NetworkManager__EndLogin(this, v11);
      return;
    }
  }
  TopLoginRequest__beginRequest(v10, 0);
}


void NetworkManager__RequestStart(RequestBase_o *request, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4C427E0 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4C427E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, v4) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
    {
      NetworkManager__AddWaitStatus((NetworkManager_o *)Instance, request, v5);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( Instance )
      {
        NetworkManager__CommunicationStart((NetworkManager_o *)Instance, v6);
        return;
      }
    }
LABEL_9:
    sub_1C372B4(Instance);
  }
}


void NetworkManager__SetAuth(
        NetworkManager_o *this,
        System_String_o *userId,
        System_String_o *authKey,
        System_String_o *secretKey,
        const MethodInfo *method)
{
  NetworkManager_c *v8; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct NetworkManager_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C42789 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&SignedData_TypeInfo);
    byte_4C42789 = 1;
  }
  if ( userId )
  {
    v8 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->userId = userId;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&static_fields->userId,
      (int32_t)userId,
      (int32_t)authKey,
      (const MethodInfo *)secretKey);
    v10 = NetworkManager_TypeInfo->static_fields;
    v10->authKey = authKey;
    sub_1C36FFC((CGThumbnailListItem_o *)&v10->authKey, (int32_t)authKey, v11, v12);
    v13 = NetworkManager_TypeInfo->static_fields;
    v13->secretKey = secretKey;
    sub_1C36FFC((CGThumbnailListItem_o *)&v13->secretKey, (int32_t)secretKey, v14, v15);
    NetworkManager_TypeInfo->static_fields->userIdNumber = System_Int64__Parse(
                                                             NetworkManager_TypeInfo->static_fields->userId,
                                                             0);
    if ( !SignedData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    SignedData__RefreshSigningData(3, 0);
  }
}


void NetworkManager__SetBaseField(RequestBase_o *request, const MethodInfo *method)
{
  _DWORD *Instance; // x0
  DataManager_c *v4; // x0
  DataManager_c *v5; // x0
  NetworkManager_c *v6; // x0
  int64_t Time; // x0
  const MethodInfo *v8; // x2
  System_String_o *v9; // x0
  System_Guid_o v10; // [xsp+0h] [xbp-50h] BYREF
  System_Guid_o v11; // 0:x0.16

  if ( (byte_4C427DC & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_18491/*"dateVer"*/);
    sub_1C37058(&StringLiteral_18478/*"dataVer"*/);
    sub_1C37058(&StringLiteral_24653/*"verCode"*/);
    sub_1C37058(&StringLiteral_16815/*"appVer"*/);
    sub_1C37058(&StringLiteral_20260/*"idempotencyKey"*/);
    sub_1C37058(&StringLiteral_16946/*"authKey"*/);
    sub_1C37058(&StringLiteral_24554/*"userId"*/);
    sub_1C37058(&StringLiteral_21171/*"lastAccessTime"*/);
    byte_4C427DC = 1;
  }
  Instance = NetworkManager_TypeInfo;
  *(_QWORD *)&v10.fields._a = 0;
  *(_QWORD *)&v10.fields._d = 0;
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
      sub_1C372B4(Instance);
    RequestBase__addField_44247300(
      request,
      (System_String_o *)StringLiteral_24554/*"userId"*/,
      NetworkManager_TypeInfo->static_fields->userId,
      0);
    RequestBase__addField_44247300(
      request,
      (System_String_o *)StringLiteral_16946/*"authKey"*/,
      NetworkManager_TypeInfo->static_fields->authKey,
      0);
  }
  Instance = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !request )
    goto LABEL_26;
  RequestBase__addField_44247300(
    request,
    (System_String_o *)StringLiteral_16815/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  if ( !byte_4C4052D )
  {
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C4052D = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v4 = DataManager_TypeInfo;
  }
  RequestBase__addField(request, (System_String_o *)StringLiteral_18478/*"dataVer"*/, v4->static_fields->dataVersion, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  if ( !byte_4C4052E )
  {
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C4052E = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  RequestBase__addField_44246844(request, (System_String_o *)StringLiteral_18491/*"dateVer"*/, v5->static_fields->dateVersion, 0);
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime((const MethodInfo *)v6);
  RequestBase__addField_44246844(request, (System_String_o *)StringLiteral_21171/*"lastAccessTime"*/, Time, 0);
  RequestBase__addField_44247300(
    request,
    (System_String_o *)StringLiteral_24653/*"verCode"*/,
    ManagerConfig_TypeInfo->static_fields->verCode,
    0);
  v10 = System_Guid__NewGuid(0);
  *(_QWORD *)&v11.fields._a = &v10;
  *(_QWORD *)&v11.fields._d = 0;
  v9 = System_Guid__ToString(v11, v8);
  RequestBase__addField_44247300(request, (System_String_o *)StringLiteral_20260/*"idempotencyKey"*/, v9, 0);
}


void NetworkManager__SetDataServerFolderName(System_String_o *folderName, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4C427B7 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C427B7 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !folderName )
    folderName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->dataServerFolder = folderName;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->dataServerFolder, (int32_t)folderName, v2, v3);
}


void NetworkManager__SetDataServerRedirect(System_String_o *address, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4C427B9 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427B9 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->dataServerRedirectAddress = address;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->dataServerRedirectAddress, (int32_t)address, v2, v3);
}


void NetworkManager__SetDebugSlowConnect(bool flag, const MethodInfo *method)
{
  ;
}


void NetworkManager__SetDeviceInfoField(RequestBase_o *request, const MethodInfo *method)
{
  Il2CppObject *deviceModel; // x20
  Il2CppObject *operatingSystem; // x0
  System_String_o *v5; // x0

  if ( (byte_4C427DF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18610/*"deviceInfo"*/);
    sub_1C37058(&StringLiteral_25112/*"{0} / {1}"*/);
    byte_4C427DF = 1;
  }
  deviceModel = (Il2CppObject *)UnityEngine_SystemInfo__get_deviceModel(0);
  operatingSystem = (Il2CppObject *)UnityEngine_SystemInfo__get_operatingSystem(0);
  v5 = System_String__Format_63602948((System_String_o *)StringLiteral_25112/*"{0} / {1}"*/, deviceModel, operatingSystem, 0);
  if ( !request )
    sub_1C372B4(v5);
  RequestBase__addField_44247300(request, (System_String_o *)StringLiteral_18610/*"deviceInfo"*/, v5, 0);
}


void NetworkManager__SetFriendCode(NetworkManager_o *this, System_String_o *friendCode, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4C4277D & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4277D = 1;
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
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->friendCode, (int32_t)friendCode, (int32_t)method, v3);
  }
}


void NetworkManager__SetGameServerRedirect(System_String_o *address, bool isSecurity, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  NetworkManager_c *v6; // x0
  CGThumbnailListItem_o *static_fields; // x0

  if ( (byte_4C427B8 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427B8 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = (CGThumbnailListItem_o *)v6->static_fields;
  static_fields[1].fields.sortValueLast = (int64_t)address;
  static_fields = (CGThumbnailListItem_o *)((char *)static_fields + 232);
  LOBYTE(static_fields[-1].fields._ThumbnailSpritePath_k__BackingField) = isSecurity;
  sub_1C36FFC(static_fields, (int32_t)address, (int32_t)method, v3);
}


void NetworkManager__SetSecurityServerSetting(bool security, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4C427BD & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427BD = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->serverSettingSecurity = security;
}


void NetworkManager__SetServerSetting(
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

  if ( (byte_4C427CF & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427CF = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->serverSettingType = type;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&static_fields->serverSettingType,
    (int32_t)type,
    isSecuritey,
    (const MethodInfo *)gameAddress);
  v15 = (CGThumbnailListItem_o *)NetworkManager_TypeInfo->static_fields;
  v15[1].fields.sortValue1 = (int64_t)gameAddress;
  v15 = (CGThumbnailListItem_o *)((char *)v15 + 192);
  LOBYTE(v15[-1].fields._ThumbnailSpritePath_k__BackingField) = isSecuritey;
  sub_1C36FFC(v15, (int32_t)gameAddress, v16, v17);
  v18 = NetworkManager_TypeInfo->static_fields;
  v18->dataServerSettingAddress = dataAddress;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->dataServerSettingAddress, (int32_t)dataAddress, v19, v20);
  v21 = NetworkManager_TypeInfo->static_fields;
  v21->webServerSettingAddress = webAddress;
  sub_1C36FFC((CGThumbnailListItem_o *)&v21->webServerSettingAddress, (int32_t)webAddress, v22, v23);
  NetworkManager__SetServerSetting_41343040(this, v24);
}


void NetworkManager__SetServerSetting_41343040(NetworkManager_o *this, const MethodInfo *method)
{
  struct NetworkManager_StaticFields *static_fields; // x8
  struct System_String_o *gameServerRedirectAddress; // x19
  System_String_o **p_gameServerRedirectAddress; // x8
  ManagerConfig_c *v5; // x0
  System_String_o *v6; // x1
  CGThumbnailListItem_o *p_gameServerAddress; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  NetworkManager_c *IsOnline; // x0
  const MethodInfo *v11; // x2
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct NetworkManager_StaticFields *v15; // x8
  struct System_String_o *webServerRedirectAddress; // x19
  struct System_String_o **p_webServerRedirectAddress; // x9
  ManagerConfig_c *v18; // x0
  struct System_String_o *v19; // x1

  if ( (byte_4C427D0 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C427D0 = 1;
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
  if ( !byte_4C40635 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C40635 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  NetworkManager_TypeInfo->static_fields->serverSecurity = v5->static_fields->ReleaseNetworkSecurity;
  if ( !byte_4C40636 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
    byte_4C40636 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = ManagerConfig_TypeInfo;
  }
  p_gameServerRedirectAddress = &v5->static_fields->ReleaseGameServerAddress;
LABEL_21:
  v6 = System_String__Concat_63561656(*p_gameServerRedirectAddress, (System_String_o *)StringLiteral_1048/*"/"*/, 0);
  p_gameServerAddress = (CGThumbnailListItem_o *)&NetworkManager_TypeInfo->static_fields->gameServerAddress;
  p_gameServerAddress->klass = (CGThumbnailListItem_c *)v6;
  sub_1C36FFC(p_gameServerAddress, (int32_t)v6, v8, v9);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  IsOnline = (NetworkManager_c *)AssetManager__get_IsOnline(0);
  if ( ((unsigned __int8)IsOnline & 1) != 0 )
  {
    IsOnline = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      IsOnline = NetworkManager_TypeInfo;
    }
    if ( IsOnline->static_fields->dataServerRedirectAddress )
      v12 = 3;
    else
      v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  NetworkManager__setupDataServerAddress((NetworkManager_o *)IsOnline, v12, v11);
  if ( NetworkManager_TypeInfo->_2.cctor_finished )
  {
    v15 = NetworkManager_TypeInfo->static_fields;
    if ( !v15->webServerRedirectAddress )
      goto LABEL_39;
LABEL_38:
    p_webServerRedirectAddress = &v15->webServerRedirectAddress;
    goto LABEL_44;
  }
  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v15 = NetworkManager_TypeInfo->static_fields;
  webServerRedirectAddress = v15->webServerRedirectAddress;
  if ( NetworkManager_TypeInfo->_2.cctor_finished )
  {
    if ( !webServerRedirectAddress )
      goto LABEL_39;
    goto LABEL_38;
  }
  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( webServerRedirectAddress )
  {
    v15 = NetworkManager_TypeInfo->static_fields;
    goto LABEL_38;
  }
LABEL_39:
  if ( !byte_4C40638 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C40638 = 1;
  }
  v18 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v18 = ManagerConfig_TypeInfo;
  }
  v15 = NetworkManager_TypeInfo->static_fields;
  p_webServerRedirectAddress = &v18->static_fields->ReleaseWebServerAddress;
LABEL_44:
  v19 = *p_webServerRedirectAddress;
  v15->webServerAddress = *p_webServerRedirectAddress;
  sub_1C36FFC((CGThumbnailListItem_o *)&v15->webServerAddress, (int32_t)v19, v13, v14);
}


void NetworkManager__SetServerTimeChkMovie(int64_t serverTimeChkMovie, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4C42783 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42783 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->serverTimeChkMovie = serverTimeChkMovie;
}


void NetworkManager__SetSignatureField(RequestBase_o *request, const MethodInfo *method)
{
  System_String_o *SignedPackData; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *key; // x20
  System_String_o *v5; // x0
  SignedData_SignedPackData_o *outData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C427DD & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C37058(&SignedData_TypeInfo);
    sub_1C37058(&StringLiteral_20260/*"idempotencyKey"*/);
    sub_1C37058(&StringLiteral_20261/*"idempotencyKeySignature"*/);
    byte_4C427DD = 1;
  }
  outData = 0;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedPackData = (System_String_o *)SignedData__GetSignedPackData(&outData, 0);
  if ( ((unsigned __int8)SignedPackData & 1) != 0 )
    goto LABEL_19;
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__CreateSignedPackData(1, 0);
  SignedPackData = (System_String_o *)SignedData__GetSignedPackData(&outData, 0);
  if ( ((unsigned __int8)SignedPackData & 1) != 0 )
  {
LABEL_19:
    if ( !outData )
      goto LABEL_16;
    key = outData->fields.key;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    SignedPackData = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48966740(key, 0);
    if ( !request
      || (RequestBase__replaceField_44248216(request, (System_String_o *)StringLiteral_20260/*"idempotencyKey"*/, SignedPackData, 0),
          !outData) )
    {
LABEL_16:
      sub_1C372B4(SignedPackData);
    }
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48966740(outData->fields.value, 0);
    RequestBase__addField_44247300(request, (System_String_o *)StringLiteral_20261/*"idempotencyKeySignature"*/, v5, 0);
  }
}


void NetworkManager__SetSignup(
        NetworkManager_o *this,
        System_String_o *userName,
        int32_t genderType,
        const MethodInfo *method)
{
  NetworkManager_c *v6; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4C42779 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42779 = 1;
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
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->userName, (int32_t)userName, genderType, method);
    NetworkManager_TypeInfo->static_fields->genderType = genderType;
  }
}


// local variable allocation has failed, the output may be wrong!
void NetworkManager__SetSignup_41357072(
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

  if ( (byte_4C4277A & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4277A = 1;
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
    sub_1C36FFC(
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


void NetworkManager__SetUserAgent(NetworkManager_o *this, System_String_o *userAgent, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  NetworkManager_c *v6; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4C42775 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42775 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->userAgent = userAgent;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->userAgent, (int32_t)userAgent, (int32_t)method, v3);
  this->fields._isWaitUserAgent_k__BackingField = 0;
}


void NetworkManager__SetWebServerRedirect(System_String_o *address, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4C427BA & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427BA = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webServerRedirectAddress = address;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->webServerRedirectAddress, (int32_t)address, v2, v3);
}


void NetworkManager__SetupObfuscatedAccountId(
        NetworkManager_o *this,
        System_String_o *loginResultStr,
        const MethodInfo *method)
{
  bool IsObfuscatedAccountIdCached; // w0
  Il2CppObject *v5; // x0
  System_String_o *klass; // x19

  if ( (byte_4C427EA & 1) == 0 )
  {
    sub_1C37058(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&PurchaseBehaviour_TypeInfo);
    byte_4C427EA = 1;
  }
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  IsObfuscatedAccountIdCached = PurchaseBehaviour__IsObfuscatedAccountIdCached(0);
  if ( loginResultStr && !IsObfuscatedAccountIdCached )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v5 = JsonManager__Deserialize_object_(
           (Il2CppObject *)loginResultStr,
           (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    if ( v5 )
    {
      klass = (System_String_o *)v5[8].klass;
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      PurchaseBehaviour__SetCachedObfuscatedAccountId(klass, 0);
    }
  }
}


void NetworkManager__Start(NetworkManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = NetworkManager__TimeUpdate(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void NetworkManager__SwitchingDebugSlowConnect(const MethodInfo *method)
{
  ;
}


int32_t NetworkManager__SyncAuth(NetworkManager_o *this, const MethodInfo *method)
{
  int v2; // w23
  NetworkManager_c *v3; // x0
  System_String_o *String; // x24
  const MethodInfo *v5; // x1
  NetworkManager_o *AuthFileName; // x0
  const MethodInfo *v7; // x2
  System_String_o *AuthMd5; // x26
  const MethodInfo *v9; // x1
  NetworkManager_o *v10; // x0
  const MethodInfo *v11; // x2
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_String_o *v14; // x25
  System_String_o *v15; // x25
  const MethodInfo *v16; // x1
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  NetworkManager_o *v19; // x0
  const MethodInfo *v20; // x2
  NetworkManager_c *v21; // x0
  const MethodInfo *v22; // x1
  System_String_o *v23; // x24
  const MethodInfo *v24; // x1
  System_String_o *v25; // x0
  NetworkManager_c *v26; // x0
  NetworkManager_o *OldAuthFileName; // x0
  const MethodInfo *v28; // x2
  NetworkManager_c *v29; // x0
  System_String_o *v30; // x24
  const MethodInfo *v31; // x1
  System_String_o *v32; // x0
  NetworkManager_o *v33; // x0
  const MethodInfo *v34; // x1
  _BOOL8 OldSignup; // x0
  const MethodInfo *v36; // x1
  NetworkManager_c *v37; // x0
  System_String_o *OldSignupFileName; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *v40; // x0
  System_String_o *OldPaymentFileName; // x0
  System_String_o *OldUnityPersistentDataPath; // x0
  System_String_o *v43; // x26
  System_String_o *FileNameNotConverted; // x1
  NetworkManager_o *v45; // x0
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  System_String_o *v49; // x24
  const MethodInfo *v50; // x1
  System_String_o *v51; // x0
  System_String_o *v53; // x26
  const MethodInfo *v54; // x1
  System_String_o *v55; // x0
  const MethodInfo *v56; // x1
  NetworkManager_o *v57; // x0
  const MethodInfo *v58; // x2

  if ( (byte_4C4278A & 1) == 0 )
  {
    sub_1C37058(&AccountingManager_TypeInfo);
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4278A = 1;
  }
  v2 = -10;
  while ( 1 )
  {
    v3 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v3 = NetworkManager_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v3->static_fields->AUTHMD5_KEY_TYPE,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
    AuthFileName = (NetworkManager_o *)NetworkManager__getAuthFileName(0, v5);
    AuthMd5 = NetworkManager__LoadAuthMd5(AuthFileName, (System_String_o *)AuthFileName, v7);
    v10 = (NetworkManager_o *)NetworkManager__getAuthFileName(1, v9);
    v12 = NetworkManager__LoadAuthMd5(v10, (System_String_o *)v10, v11);
    v14 = v12;
    if ( AuthMd5 )
    {
      if ( !v12 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v15 = NetworkManager__getAuthFileName(0, v13);
        v17 = NetworkManager__getAuthFileName(1, v16);
        System_IO_File__Copy(v15, v17, 1, 0);
        v19 = (NetworkManager_o *)NetworkManager__getAuthFileName(1, v18);
        v14 = NetworkManager__LoadAuthMd5(v19, (System_String_o *)v19, v20);
      }
      goto LABEL_11;
    }
    v26 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    OldAuthFileName = (NetworkManager_o *)NetworkManager__getOldAuthFileName((const MethodInfo *)v26);
    if ( NetworkManager__LoadAuthMd5(OldAuthFileName, (System_String_o *)OldAuthFileName, v28) )
    {
      v29 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v30 = NetworkManager__getOldAuthFileName((const MethodInfo *)v29);
      v32 = NetworkManager__getAuthFileName(0, v31);
      System_IO_File__Copy(v30, v32, 1, 0);
      OldSignup = NetworkManager__ReadOldSignup(v33, v34);
      if ( OldSignup )
      {
        NetworkManager__WriteSignup((NetworkManager_o *)OldSignup, v36);
        v37 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        OldSignupFileName = NetworkManager__getOldSignupFileName((const MethodInfo *)v37);
        System_IO_File__Delete(OldSignupFileName, 0);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
      if ( !Instance )
        sub_1C372B4(0);
      if ( AccountingManager__ReadOldPayment((AccountingManager_o *)Instance, 0) )
      {
        v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
        if ( !v40 )
          sub_1C372B4(0);
        AccountingManager__WritePayment((AccountingManager_o *)v40, 0);
        if ( !AccountingManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
        OldPaymentFileName = AccountingManager__GetOldPaymentFileName(0);
        System_IO_File__Delete(OldPaymentFileName, 0);
      }
      goto LABEL_50;
    }
    if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
    OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0);
    v43 = System_String__Concat_63561656(OldUnityPersistentDataPath, (System_String_o *)StringLiteral_1048/*"/"*/, 0);
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    FileNameNotConverted = DatFileName__getFileNameNotConverted(16, 0);
    v45 = (NetworkManager_o *)System_String__Concat_63561656(v43, FileNameNotConverted, 0);
    if ( NetworkManager__LoadAuthMd5(v45, (System_String_o *)v45, v46) )
    {
      if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
      AndroidUtil__TransitionDatFile(16, 0);
      AndroidUtil__TransitionDatFile(18, 0);
      AndroidUtil__TransitionDatFile(21, 0);
      goto LABEL_50;
    }
    if ( !v14 )
      return 1;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v53 = NetworkManager__getAuthFileName(1, v47);
    v55 = NetworkManager__getAuthFileName(0, v54);
    System_IO_File__Copy(v53, v55, 1, 0);
    v57 = (NetworkManager_o *)NetworkManager__getAuthFileName(0, v56);
    AuthMd5 = NetworkManager__LoadAuthMd5(v57, (System_String_o *)v57, v58);
LABEL_11:
    if ( System_String__op_Equality(AuthMd5, v14, 0) && System_String__op_Equality(AuthMd5, String, 0) )
      return 0;
    if ( System_String__op_Equality(AuthMd5, v14, 0) && System_String__op_Inequality(AuthMd5, String, 0) )
    {
      v21 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v21 = NetworkManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v21->static_fields->AUTHMD5_KEY_TYPE, AuthMd5, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    else if ( System_String__op_Inequality(AuthMd5, v14, 0) )
    {
      if ( System_String__op_Equality(AuthMd5, String, 0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v23 = NetworkManager__getAuthFileName(0, v22);
        v25 = NetworkManager__getAuthFileName(1, v24);
        System_IO_File__Copy(v23, v25, 1, 0);
      }
      else
      {
        if ( !System_String__op_Equality(v14, String, 0) )
          return 2;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v49 = NetworkManager__getAuthFileName(1, v48);
        v51 = NetworkManager__getAuthFileName(0, v50);
        System_IO_File__Copy(v49, v51, 1, 0);
      }
    }
LABEL_50:
    if ( __CFADD__(v2++, 1) )
      return 0;
  }
}


void NetworkManager__TerminalStart(NetworkManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  bool IsDispConnectMask; // w19

  if ( (byte_4C427A7 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C427A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (IsDispConnectMask = CommonUI__IsDispConnectMask((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__InitConnect((CommonUI_o *)Instance, 0),
        TopHomeRequest__clearExpirationDate(0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, IsDispConnectMask, 0);
}


System_Collections_IEnumerator_o *NetworkManager__TimeUpdate(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4C42772 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager__TimeUpdate_d__82_TypeInfo);
    byte_4C42772 = 1;
  }
  v2 = sub_1C372A4(NetworkManager__TimeUpdate_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void NetworkManager__WarningDialog(
        NetworkManager_o *this,
        System_String_o *errorTitle,
        System_String_o *errorDetail,
        System_String_o *errorUrl,
        int32_t errorType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v13; // x20
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v15; // x24
  __int64 v16; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]

  if ( (byte_4C4279E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_NetworkManager_EndErrorDialog__);
    sub_1C37058(&Method_NetworkManager_EndErrorWebView__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&WebViewManager_TypeInfo);
    byte_4C4279E = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.errorCallbackFunc,
    (int32_t)callback,
    (int32_t)errorDetail,
    (const MethodInfo *)errorUrl);
  if ( errorUrl )
  {
    v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(errorTitle, errorUrl, v13, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v15, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0);
    if ( !Instance )
      sub_1C372B4(v16);
    *(_QWORD *)&effectDistance.fields.hasValue = 0;
    effectDistance.fields.value.fields.y = 0.0;
    CommonUI__OpenWarningDialog(
      (CommonUI_o *)Instance,
      errorTitle,
      errorDetail,
      v15,
      errorType != 1,
      0,
      -1.0,
      1,
      effectDistance,
      0);
  }
}


void NetworkManager__WriteAuth(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  NetworkManager_o *AuthFileName; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  NetworkManager_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C4278C & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4278C = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v3 = NetworkManager_TypeInfo;
    }
    if ( v3->static_fields->userId )
    {
      if ( !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      AuthFileName = (NetworkManager_o *)NetworkManager__getAuthFileName(0, method);
      NetworkManager__WriteAuthFile(AuthFileName, (System_String_o *)AuthFileName, v5);
      v7 = (NetworkManager_o *)NetworkManager__getAuthFileName(1, v6);
      NetworkManager__WriteAuthFile(v7, (System_String_o *)v7, v8);
    }
  }
}


bool NetworkManager__WriteAuthFile(NetworkManager_o *this, System_String_o *fname, const MethodInfo *method)
{
  System_IO_Stream_o *v4; // x23
  System_IO_BinaryWriter_o *v5; // x21
  System_Collections_Generic_Dictionary_object__object__o *v6; // x23
  ManagerConfig_c *v7; // x0
  NetworkManager_c *v8; // x0
  System_String_o *v9; // x23
  System_String_o *v10; // x0
  System_String_o *v11; // x24
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_String_o *v16; // x21
  NetworkManager_c *v17; // x0

  if ( (byte_4C4278D & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_24510/*"userCreateServer"*/);
    sub_1C37058(&StringLiteral_12605/*"SaveDataVer"*/);
    sub_1C37058(&StringLiteral_16946/*"authKey"*/);
    sub_1C37058(&StringLiteral_23249/*"secretKey"*/);
    sub_1C37058(&StringLiteral_24554/*"userId"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4278D = 1;
  }
  v4 = (System_IO_Stream_o *)System_IO_File__OpenWrite(fname, 0);
  v5 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64472960(v5, v4, 0);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !v6 )
    sub_1C372B4(v7);
  System_Collections_Generic_Dictionary_object__object___Add(
    v6,
    (Il2CppObject *)StringLiteral_12605/*"SaveDataVer"*/,
    (Il2CppObject *)ManagerConfig_TypeInfo->static_fields->SaveDataVer,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v6,
    (Il2CppObject *)StringLiteral_24510/*"userCreateServer"*/,
    (Il2CppObject *)v8->static_fields->gameServerAddress,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v6,
    (Il2CppObject *)StringLiteral_24554/*"userId"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->userId,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v6,
    (Il2CppObject *)StringLiteral_16946/*"authKey"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->authKey,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v6,
    (Il2CppObject *)StringLiteral_23249/*"secretKey"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->secretKey,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__toJson((Il2CppObject *)v6, 0, 0, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v10 = CatAndMouseGame__CatGame1(v9, 0, 0);
  v11 = v10;
  if ( !v5 )
    sub_1C372B4(v10);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, const MethodInfo *))v5->klass->vtable._22_Write.methodPtr)(
    v5,
    v10,
    v5->klass->vtable._22_Write.method);
  klass = v5->klass;
  v13 = *(unsigned __int16 *)&v5->klass->_2.rank;
  if ( *(_WORD *)&v5->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_17;
    }
    v15 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_17:
    v15 = sub_1C87870(v5, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v15)(v5, *(_QWORD *)(v15 + 8));
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  v16 = EncryptedPlayerPrefs__Md5(v11, 0);
  v17 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v17 = NetworkManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v17->static_fields->AUTHMD5_KEY_TYPE, v16, 0);
  UnityEngine_PlayerPrefs__Save(0);
  return 1;
}


void NetworkManager__WriteFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  System_String_o *FriendCodeFileName; // x0
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryWriter_o *v6; // x19
  long double inited; // q0
  NetworkManager_c *v8; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0

  if ( (byte_4C4277E & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4277E = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v3 = NetworkManager_TypeInfo;
    }
    if ( v3->static_fields->userId )
    {
      if ( !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      FriendCodeFileName = NetworkManager__getFriendCodeFileName((const MethodInfo *)v3);
      v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FriendCodeFileName, 0);
      v6 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_64472960(v6, v5, 0);
      v8 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !v6 )
        sub_1C372B4(v8);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *, long double))v6->klass->vtable._22_Write.methodPtr)(
        v6,
        NetworkManager_TypeInfo->static_fields->friendCode,
        v6->klass->vtable._22_Write.method,
        inited);
      klass = v6->klass;
      v10 = *(unsigned __int16 *)&v6->klass->_2.rank;
      if ( *(_WORD *)&v6->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_18;
        }
        v12 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_18:
        v12 = sub_1C87870(v6, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v12)(v6, *(_QWORD *)(v12 + 8));
    }
  }
}


void NetworkManager__WriteServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  ;
}


void NetworkManager__WriteSignup(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  System_String_o *SignupFileName; // x0
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryWriter_o *v6; // x19
  long double inited; // q0
  NetworkManager_c *v8; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0

  if ( (byte_4C4277B & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4277B = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v3 = NetworkManager_TypeInfo;
    }
    if ( v3->static_fields->userId )
    {
      if ( !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      SignupFileName = NetworkManager__getSignupFileName((const MethodInfo *)v3);
      v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SignupFileName, 0);
      v6 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_64472960(v6, v5, 0);
      v8 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !v6 )
        sub_1C372B4(v8);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *, long double))v6->klass->vtable._22_Write.methodPtr)(
        v6,
        NetworkManager_TypeInfo->static_fields->userName,
        v6->klass->vtable._22_Write.method,
        inited);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
        v6,
        (unsigned int)NetworkManager_TypeInfo->static_fields->genderType,
        v6->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
        v6,
        (unsigned int)NetworkManager_TypeInfo->static_fields->month,
        v6->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
        v6,
        (unsigned int)NetworkManager_TypeInfo->static_fields->day,
        v6->klass->vtable._17_Write.method);
      klass = v6->klass;
      v10 = *(unsigned __int16 *)&v6->klass->_2.rank;
      if ( *(_WORD *)&v6->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_18;
        }
        v12 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_18:
        v12 = sub_1C87870(v6, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v12)(v6, *(_QWORD *)(v12 + 8));
    }
  }
}


void NetworkManager___RequestCR_b__214_0(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  NetworkManager__OnBackgroundErrorCommunication(this, this->fields.communicationWork, 0, 1, v2);
}


System_String_o *NetworkManager__getAuthFileName(bool isSlave, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x20
  int32_t v4; // w0
  System_String_o *FileName; // x2

  if ( (byte_4C427AE & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C427AE = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  if ( isSlave )
    v4 = 17;
  else
    v4 = 16;
  FileName = DatFileName__getFileName(v4, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


System_String_o *NetworkManager__getBaseMockUrl(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C427C6 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427C6 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->gameServerAddress;
}


System_String_o *NetworkManager__getBaseUrl(bool isSecurity, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_4C427C5 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_20078/*"https://"*/);
    byte_4C427C5 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_63561656((System_String_o *)StringLiteral_20078/*"https://"*/, v2->static_fields->gameServerAddress, 0);
}


System_String_o *NetworkManager__getDataUrl(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C427C7 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427C7 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->dataServerAddress;
}


System_DateTime_o NetworkManager__getDateTime(const MethodInfo *method)
{
  System_DateTime_o v1; // x0
  System_DateTime_o v2; // x0
  NetworkManager_c *v3; // x8
  System_DateTime_o v4; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C42792 & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42792 = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0).fields._dateData;
  v1.fields._dateData = (uint64_t)&dateData;
  v2.fields._dateData = System_DateTime__ToUniversalTime(v1, 0).fields._dateData;
  v3 = NetworkManager_TypeInfo;
  dateData = v2.fields._dateData;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v4.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__AddSeconds(v4, (double)v3->static_fields->serverOffsetTime, 0);
}


System_DateTime_o NetworkManager__getDateTime_41367148(int64_t t, const MethodInfo *method)
{
  System_DateTime_o v3; // x0
  System_DateTime_o v4; // x0
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42793 & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42793 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&NetworkManager_TypeInfo->static_fields->dtUnixEpoch;
  dateData = System_DateTime__AddSeconds(v3, (double)t, 0).fields._dateData;
  v4.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__ToUniversalTime(v4, 0);
}


System_String_o *NetworkManager__getFriendCodeFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C427B2 & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C427B2 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(20, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


System_DateTime_o NetworkManager__getLocalDateTime(const MethodInfo *method)
{
  System_DateTime_o v1; // x0
  NetworkManager_c *v2; // x8
  System_DateTime_o v3; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C42794 & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42794 = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v1.fields._dateData = System_DateTime__get_Now(0).fields._dateData;
  v2 = NetworkManager_TypeInfo;
  dateData = v1.fields._dateData;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  v3.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__AddSeconds(v3, (double)v2->static_fields->serverOffsetTime, 0);
}


System_DateTime_o NetworkManager__getLocalDateTime_41367312(int64_t t, const MethodInfo *method)
{
  System_DateTime_o v3; // x0
  System_DateTime_o v4; // x0
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42795 & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42795 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&NetworkManager_TypeInfo->static_fields->dtUnixEpoch;
  dateData = System_DateTime__AddSeconds(v3, (double)t, 0).fields._dateData;
  v4.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__ToLocalTime(v4, 0);
}


int64_t NetworkManager__getLocalTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  System_DateTime_o v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C42790 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42790 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v2.fields._dateData = NetworkManager__getLocalDateTime((const MethodInfo *)v1).fields._dateData;
  return NetworkManager__getTime_41366368(v2, v3);
}


System_String_o *NetworkManager__getMockFile(System_String_o *path, const MethodInfo *method)
{
  System_String_o *v3; // x0
  UnityEngine_Object_o *v4; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v6; // x19
  _BOOL8 v7; // x0
  System_String_o *text; // x20

  if ( (byte_4C427CA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_TextAsset_TypeInfo);
    sub_1C37058(&StringLiteral_9128/*"Mock/"*/);
    byte_4C427CA = 1;
  }
  if ( !path )
    return 0;
  v3 = System_String__Concat_63561656((System_String_o *)StringLiteral_9128/*"Mock/"*/, path, 0);
  v4 = UnityEngine_Resources__Load(v3, 0);
  if ( v4
    && (naturalAligment = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment,
        v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    v6 = (UnityEngine_TextAsset_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_TextAsset_TypeInfo
       ? v4
       : 0LL;
  }
  else
  {
    v6 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(v6, 0, 0);
  if ( !v7 )
    return 0;
  if ( !v6 )
    sub_1C372B4(v7);
  text = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v6, 0);
  UnityEngine_Resources__UnloadAsset(v6, 0);
  return text;
}


int64_t NetworkManager__getNextDayStartTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  int64_t Time; // x19
  System_DateTime_o v3; // x0
  int32_t Hour; // w20
  System_DateTime_o v5; // x0
  int32_t Minute; // w21
  System_DateTime_o v7; // x0
  const MethodInfo *dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4279B & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4279B = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v1).fields._dateData;
  Time = NetworkManager__getTime(dateData);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v3, 0);
  v5.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v5, 0);
  v7.fields._dateData = (uint64_t)&dateData;
  return Time - (System_DateTime__get_Second(v7, 0) + 60 * (Minute + 60 * Hour)) + 86400;
}


int64_t NetworkManager__getNextDayTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  System_DateTime_o v2; // x0
  int32_t Year; // w19
  System_DateTime_o v4; // x0
  int Month; // w20
  System_DateTime_o v6; // x0
  int v7; // w21
  System_DateTime_o v8; // x0
  const MethodInfo *v9; // x1
  System_DateTime_o v10; // x0
  System_DateTime_o dateTime; // [xsp+8h] [xbp-38h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C42799 & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42799 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime((const MethodInfo *)v1).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v2.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v2, 0);
  v4.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v4, 0);
  v6.fields._dateData = (uint64_t)&dateData;
  v7 = System_DateTime__get_Day(v6, 0) + 1;
  if ( v7 > System_DateTime__DaysInMonth(Year, Month, 0) )
  {
    if ( Month >= 12 )
    {
      ++Year;
      v7 = 1;
      Month = 1;
    }
    else
    {
      ++Month;
      v7 = 1;
    }
  }
  v8.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0;
  System_DateTime___ctor_64948384(v8, Year, Month, v7, 0, 0, 0, 1, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v10.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_41366368(v10, v9);
}


int64_t NetworkManager__getNextDayTime_41368176(int32_t hour, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int64_t Time; // x20
  System_DateTime_o v5; // x0
  int32_t v6; // w21
  System_DateTime_o v7; // x0
  int64_t v8; // x22
  int32_t v9; // w20
  System_DateTime_o v10; // x0
  int32_t Minute; // w21
  System_DateTime_o v12; // x0
  const MethodInfo *dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4279A & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4279A = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v3).fields._dateData;
  Time = NetworkManager__getTime(dateData);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v5.fields._dateData = (uint64_t)&dateData;
  v6 = System_DateTime__get_Hour(v5, 0);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v7.fields._dateData = (uint64_t)&dateData;
  if ( v6 >= hour )
    v8 = Time + 86400;
  else
    v8 = Time;
  v9 = System_DateTime__get_Hour(v7, 0);
  v10.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v10, 0);
  v12.fields._dateData = (uint64_t)&dateData;
  return v8 - (System_DateTime__get_Second(v12, 0) + 60 * (Minute + 60 * (v9 - hour)));
}


int64_t NetworkManager__getNextMonthTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  System_DateTime_o v2; // x0
  int32_t Year; // w19
  System_DateTime_o v4; // x0
  int32_t Month; // w0
  int32_t v6; // w2
  int32_t v7; // w1
  System_DateTime_o v8; // x0
  const MethodInfo *v9; // x1
  System_DateTime_o v10; // x0
  System_DateTime_o dateTime; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4C4279C & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4279C = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime((const MethodInfo *)v1).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v2.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v2, 0);
  v4.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v4, 0);
  if ( Month < 12 )
    v6 = Month + 1;
  else
    v6 = 1;
  if ( Month <= 11 )
    v7 = Year;
  else
    v7 = Year + 1;
  v8.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0;
  System_DateTime___ctor_64948384(v8, v7, v6, 1, 0, 0, 0, 1, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v10.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_41366368(v10, v9);
}


int64_t NetworkManager__getNextMonthTime_41368888(int32_t day, const MethodInfo *method)
{
  System_DateTime_o v3; // x0
  int32_t Year; // w20
  System_DateTime_o v5; // x0
  int Month; // w21
  System_DateTime_o v7; // x0
  System_DateTime_o v8; // x0
  const MethodInfo *v9; // x1
  System_DateTime_o v10; // x0
  System_DateTime_o dateTime; // [xsp+8h] [xbp-38h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C4279D & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4279D = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0).fields._dateData;
  v3.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v3, 0);
  v5.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v5, 0);
  v7.fields._dateData = (uint64_t)&dateData;
  if ( System_DateTime__get_Day(v7, 0) < day )
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
  if ( System_DateTime__DaysInMonth(Year, Month, 0) < day )
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
  v8.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0;
  System_DateTime___ctor_64948384(v8, Year, Month, day, 0, 0, 0, 1, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v10.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_41366368(v10, v9);
}


System_String_o *NetworkManager__getOldAuthFileName(const MethodInfo *method)
{
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C427AD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C427AD = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(16, 0);
  return System_String__Concat_63599904(temporaryCachePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


System_String_o *NetworkManager__getOldSignupFileName(const MethodInfo *method)
{
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C427AF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C427AF = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0);
  return System_String__Concat_63599904(temporaryCachePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


Il2CppObject *NetworkManager__getRequest_object_(
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo_3172CF0 *method)
{
  const MethodInfo_3035844 **rgctx_data; // x8
  Il2CppObject *Instance_object; // x0
  Il2CppObject *v6; // x19
  CGThumbnailListItem_o *v7; // x21
  System_Delegate_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Delegate_o *v11; // x8
  NetworkManager_ResultCallbackFunc_c *v12; // x1

  rgctx_data = (const MethodInfo_3035844 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    rgctx_data = (const MethodInfo_3035844 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8();
      rgctx_data = (const MethodInfo_3035844 **)method->rgctx_data;
    }
  }
  Instance_object = System_Activator__CreateInstance_object_(*rgctx_data);
  if ( !Instance_object )
    sub_1C372B4(0);
  v6 = Instance_object;
  v7 = (CGThumbnailListItem_o *)&Instance_object[1];
  v8 = System_Delegate__Combine((System_Delegate_o *)Instance_object[1].klass, (System_Delegate_o *)func, 0);
  v11 = v8;
  if ( !v8 )
    goto LABEL_9;
  v12 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( (NetworkManager_ResultCallbackFunc_c *)v8->klass != NetworkManager_ResultCallbackFunc_TypeInfo
    || (v7->klass = (CGThumbnailListItem_c *)v8, (NetworkManager_ResultCallbackFunc_c *)v8->klass != v12) )
  {
    sub_1C37574(v8);
LABEL_9:
    v7->klass = (CGThumbnailListItem_c *)v11;
  }
  sub_1C36FFC(v7, (int32_t)v11, v9, v10);
  return v6;
}


System_DateTime_o NetworkManager__getServerDateTime(const MethodInfo *method)
{
  System_DateTime_o v1; // x0
  System_DateTime_o v2; // x0
  NetworkManager_c *v3; // x8
  System_DateTime_o v4; // x0
  System_TimeSpan_o v5; // x0
  System_TimeSpan_o v6; // x1
  System_DateTime_o v7; // x0
  System_TimeSpan_o value; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4C42796 & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42796 = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0).fields._dateData;
  v1.fields._dateData = (uint64_t)&dateData;
  v2.fields._dateData = System_DateTime__ToUniversalTime(v1, 0).fields._dateData;
  v3 = NetworkManager_TypeInfo;
  dateData = v2.fields._dateData;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v4.fields._dateData = (uint64_t)&dateData;
  dateData = System_DateTime__AddSeconds(v4, (double)v3->static_fields->serverOffsetTime, 0).fields._dateData;
  v5.fields._ticks = (int64_t)&value;
  value.fields._ticks = 0;
  System_TimeSpan___ctor_65173584(v5, 9, 0, 0, 0);
  v6.fields._ticks = value.fields._ticks;
  v7.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v7, v6, 0);
}


System_DateTime_o NetworkManager__getServerDateTime_41367476(int64_t t, const MethodInfo *method)
{
  System_DateTime_o v3; // x0
  System_TimeSpan_o v4; // x0
  System_TimeSpan_o v5; // x1
  System_DateTime_o v6; // x0
  System_TimeSpan_o value; // [xsp+0h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42797 & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42797 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&NetworkManager_TypeInfo->static_fields->dtUnixEpoch;
  value.fields._ticks = 0;
  dateData = System_DateTime__AddSeconds(v3, (double)t, 0).fields._dateData;
  v4.fields._ticks = (int64_t)&value;
  System_TimeSpan___ctor_65173584(v4, 9, 0, 0, 0);
  v5.fields._ticks = value.fields._ticks;
  v6.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v6, v5, 0);
}


System_String_o *NetworkManager__getServerSettingFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C427B1 & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C427B1 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(19, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


int64_t NetworkManager__getServerTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  System_DateTime_o v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C42791 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42791 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v2.fields._dateData = NetworkManager__getServerDateTime((const MethodInfo *)v1).fields._dateData;
  return NetworkManager__getTime_41366368(v2, v3);
}


System_String_o *NetworkManager__getSignupFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C427B0 & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C427B0 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void NetworkManager__getStoreUrl(
        System_String_o *storeName,
        System_String_o *id,
        NetworkManager_StoreCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4
  UnityEngine_MonoBehaviour_o *v9; // x22
  System_Collections_IEnumerator_o *updated; // x1

  if ( (byte_4C427C9 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4C427C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  v9 = (UnityEngine_MonoBehaviour_o *)Instance;
  updated = NetworkManager__RequestApplicationUpdateCR((NetworkManager_o *)Instance, storeName, id, callback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324(v9, updated, 0);
}


System_String_o *NetworkManager__getSummonDetailUrl(int32_t gachaId, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Object_array *v4; // x20
  __int64 BaseUrl; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  NetworkManager_c *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x19
  __int64 v35; // x0
  int32_t v36; // [xsp+4h] [xbp-3Ch] BYREF
  int64_t userIdNumber; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C427D6 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&StringLiteral_514/*"&gachaId="*/);
    sub_1C37058(&StringLiteral_24799/*"webview/summonDetail?userId="*/);
    byte_4C427D6 = 1;
  }
  v4 = (System_Object_array *)sub_1C37100(object___TypeInfo, 5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = (__int64)NetworkManager__getBaseUrl(0, v3);
  if ( !v4 )
    sub_1C372B4(BaseUrl);
  v8 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = sub_1C37194(BaseUrl, v4->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_31;
  }
  if ( !LODWORD(v4->max_length) )
    goto LABEL_30;
  v4->m_Items[0] = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)v4->m_Items, (int32_t)v8, v6, v7);
  BaseUrl = StringLiteral_24799/*"webview/summonDetail?userId="*/;
  if ( StringLiteral_24799/*"webview/summonDetail?userId="*/ )
  {
    BaseUrl = sub_1C37194(StringLiteral_24799/*"webview/summonDetail?userId="*/, v4->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_31;
    v11 = StringLiteral_24799/*"webview/summonDetail?userId="*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v4->max_length) <= 1 )
    goto LABEL_30;
  v4->m_Items[1] = (Il2CppObject *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->m_Items[1], v11, v9, v10);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  v18 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v18 = NetworkManager_TypeInfo;
  }
  userIdNumber = v18->static_fields->userIdNumber;
  BaseUrl = j_il2cpp_value_box_0(long_TypeInfo, &userIdNumber, v12, v13, v14, v15, v16, v17);
  v21 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = sub_1C37194(BaseUrl, v4->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_31;
  }
  if ( LODWORD(v4->max_length) <= 2 )
    goto LABEL_30;
  v4->m_Items[2] = v21;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->m_Items[2], (int32_t)v21, v19, v20);
  BaseUrl = StringLiteral_514/*"&gachaId="*/;
  if ( StringLiteral_514/*"&gachaId="*/ )
  {
    BaseUrl = sub_1C37194(StringLiteral_514/*"&gachaId="*/, v4->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_31;
    v24 = StringLiteral_514/*"&gachaId="*/;
  }
  else
  {
    v24 = 0;
  }
  if ( LODWORD(v4->max_length) <= 3 )
    goto LABEL_30;
  v4->m_Items[3] = (Il2CppObject *)v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->m_Items[3], v24, v22, v23);
  v36 = gachaId;
  BaseUrl = j_il2cpp_value_box_0(int_TypeInfo, &v36, v25, v26, v27, v28, v29, v30);
  v33 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = sub_1C37194(BaseUrl, v4->obj.klass->_1.element_class);
    if ( !BaseUrl )
    {
LABEL_31:
      v35 = sub_1C372D8(BaseUrl);
      sub_1C37180(v35, 0);
    }
  }
  if ( LODWORD(v4->max_length) <= 4 )
LABEL_30:
    sub_1C372BC(BaseUrl);
  v4->m_Items[4] = v33;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->m_Items[4], (int32_t)v33, v31, v32);
  return System_String__Concat_63600096(v4, 0);
}


int64_t NetworkManager__getTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x8
  System_DateTime_o v2; // x0
  const MethodInfo *v3; // x1
  int64_t Time_41366368; // x0

  if ( (byte_4C4278E & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4278E = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  if ( v1->static_fields->nowTime < 0 )
  {
    if ( !v1->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v1);
    v2.fields._dateData = NetworkManager__getDateTime(method).fields._dateData;
    Time_41366368 = NetworkManager__getTime_41366368(v2, v3);
    v1 = NetworkManager_TypeInfo;
    NetworkManager_TypeInfo->static_fields->nowTime = Time_41366368;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->nowTime;
}


int64_t NetworkManager__getTime_41366368(System_DateTime_o dateTime, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  uint64_t v3; // x19
  System_DateTime_o v4; // x0
  System_DateTime_o v5; // x1
  System_TimeSpan_o v6; // x0
  double TotalSeconds; // d0
  int64_t ticks; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF

  dateData = dateTime.fields._dateData;
  if ( (byte_4C4278F & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&System_TimeSpan_TypeInfo);
    byte_4C4278F = 1;
  }
  v2 = NetworkManager_TypeInfo;
  ticks = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  v3 = v2->static_fields->dtUnixEpoch.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v4.fields._dateData = (uint64_t)&dateData;
  v5.fields._dateData = v3;
  ticks = System_DateTime__Subtract(v4, v5, 0).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v6.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v6, 0);
  if ( TotalSeconds == INFINITY )
    return 0x8000000000000000LL;
  else
    return (__int64)TotalSeconds;
}


int64_t NetworkManager__getTodayStartTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  int64_t Time; // x19
  System_DateTime_o v3; // x0
  int32_t Hour; // w20
  System_DateTime_o v5; // x0
  int32_t Minute; // w21
  System_DateTime_o v7; // x0
  const MethodInfo *dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42798 & 1) == 0 )
  {
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42798 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v1).fields._dateData;
  Time = NetworkManager__getTime(dateData);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v3, 0);
  v5.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v5, 0);
  v7.fields._dateData = (uint64_t)&dateData;
  return Time - (System_DateTime__get_Second(v7, 0) + 60 * (Minute + 60 * Hour));
}


System_String_o *NetworkManager__getUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  return NetworkServicePluginScript__GetUserAgentString(0);
}


System_String_o *NetworkManager__getWebUrl(
        System_String_o *path,
        bool isSecurity,
        bool isWebView,
        const MethodInfo *method)
{
  ManagerConfig_c *v7; // x0
  NetworkManager_c *v8; // x0
  _BOOL4 serverSettingSecurity; // w8
  NetworkManager_c *v10; // x0
  _BOOL4 v11; // w21
  System_String_o *v12; // x0
  __int64 *v13; // x8
  NetworkManager_c *v14; // x0
  System_String_o *v15; // x21
  System_String_o **v16; // x9
  __int64 *v17; // x8
  NetworkManager_c *v18; // x0
  System_String_o *v19; // x19
  System_String_o **v20; // x9
  NetworkManager_c *v21; // x0
  int64_t Time; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  int32_t v24; // w21
  int32_t v25; // w20
  System_String_o *v26; // x2
  __int64 *v27; // x8
  System_String_o *v28; // x0
  __int64 *v29; // x8
  System_String_o *v30; // x1
  __int64 v32; // [xsp+0h] [xbp-40h] BYREF
  int64_t v33; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C427C8 & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_21172/*"lastAccessTime="*/);
    sub_1C37058(&StringLiteral_523/*"&v="*/);
    sub_1C37058(&StringLiteral_20043/*"http://"*/);
    sub_1C37058(&StringLiteral_1121/*"/webview/"*/);
    sub_1C37058(&StringLiteral_1756/*"?"*/);
    sub_1C37058(&StringLiteral_1764/*"?lastAccessTime="*/);
    sub_1C37058(&StringLiteral_20077/*"https:"*/);
    sub_1C37058(&StringLiteral_517/*"&lastAccessTime="*/);
    sub_1C37058(&StringLiteral_19437/*"file:"*/);
    sub_1C37058(&StringLiteral_20078/*"https://"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_1767/*"?v="*/);
    sub_1C37058(&StringLiteral_20042/*"http:"*/);
    byte_4C427C8 = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  v32 = 0;
  v33 = 0;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseDebugCommand )
  {
    if ( isSecurity )
    {
      v8 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v8 = NetworkManager_TypeInfo;
      }
      serverSettingSecurity = v8->static_fields->serverSettingSecurity;
      goto LABEL_14;
    }
  }
  else if ( isSecurity )
  {
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    serverSettingSecurity = v10->static_fields->serverSecurity;
LABEL_14:
    v11 = serverSettingSecurity;
    if ( path )
      goto LABEL_15;
LABEL_26:
    v17 = &StringLiteral_20078/*"https://"*/;
    v18 = NetworkManager_TypeInfo;
    if ( !v11 )
      v17 = &StringLiteral_20043/*"http://"*/;
    v19 = (System_String_o *)*v17;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v18 = NetworkManager_TypeInfo;
    }
    v20 = (System_String_o **)&StringLiteral_1121/*"/webview/"*/;
    if ( !isWebView )
      v20 = (System_String_o **)&StringLiteral_1/*""*/;
    v12 = System_String__Concat_63599904(v19, v18->static_fields->webServerAddress, *v20, 0);
    goto LABEL_33;
  }
  v11 = 0;
  if ( !path )
    goto LABEL_26;
LABEL_15:
  v12 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19437/*"file:"*/, 0);
  if ( ((unsigned __int8)v12 & 1) != 0 )
    goto LABEL_34;
  v12 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_20042/*"http:"*/, 0);
  if ( ((unsigned __int8)v12 & 1) != 0 )
    goto LABEL_34;
  v12 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_20077/*"https:"*/, 0);
  if ( ((unsigned __int8)v12 & 1) != 0 )
    goto LABEL_34;
  v13 = &StringLiteral_20078/*"https://"*/;
  v14 = NetworkManager_TypeInfo;
  if ( !v11 )
    v13 = &StringLiteral_20043/*"http://"*/;
  v15 = (System_String_o *)*v13;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v14 = NetworkManager_TypeInfo;
  }
  v16 = (System_String_o **)&StringLiteral_1121/*"/webview/"*/;
  if ( !isWebView )
    v16 = (System_String_o **)&StringLiteral_1/*""*/;
  v12 = System_String__Concat_63601908(v15, v14->static_fields->webServerAddress, *v16, path, 0);
LABEL_33:
  path = v12;
LABEL_34:
  if ( isWebView )
  {
    if ( !path )
      sub_1C372B4(v12);
    if ( System_String__StartsWith(path, (System_String_o *)StringLiteral_20042/*"http:"*/, 0)
      || System_String__StartsWith(path, (System_String_o *)StringLiteral_20077/*"https:"*/, 0) )
    {
      v21 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime((const MethodInfo *)v21);
      static_fields = NetworkManager_TypeInfo->static_fields;
      v32 = Time / static_fields->WebCacheTime;
      v33 = Time;
      v24 = System_String__IndexOf_63620032(path, static_fields->webServerAddress, 0);
      v25 = System_String__IndexOf_63620032(path, (System_String_o *)StringLiteral_1756/*"?"*/, 0);
      if ( (v24 & 0x80000000) == 0 )
      {
        v26 = System_Int64__ToString((int64_t)&v32, 0);
        if ( v25 < 0 )
          v27 = &StringLiteral_1767/*"?v="*/;
        else
          v27 = &StringLiteral_523/*"&v="*/;
        v30 = (System_String_o *)*v27;
        return System_String__Concat_63599904(path, v30, v26, 0);
      }
      if ( v25 < 0 )
      {
        v28 = System_Int64__ToString((int64_t)&v33, 0);
        v29 = &StringLiteral_1764/*"?lastAccessTime="*/;
        goto LABEL_49;
      }
      if ( System_String__IndexOf_63620032(path, (System_String_o *)StringLiteral_21172/*"lastAccessTime="*/, 0) < 0 )
      {
        v28 = System_Int64__ToString((int64_t)&v33, 0);
        v29 = &StringLiteral_517/*"&lastAccessTime="*/;
LABEL_49:
        v30 = (System_String_o *)*v29;
        v26 = v28;
        return System_String__Concat_63599904(path, v30, v26, 0);
      }
    }
  }
  return path;
}


System_String_o *NetworkManager__getWebViewAddress(System_String_o *path, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4C427D3 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427D3 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_63561656(v3->static_fields->webViewBaseURL, path, 0);
}


System_String_o *NetworkManager__getWebViewAddress_41379660(int32_t addressType, const MethodInfo *method)
{
  __int64 *v3; // x8
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *v7; // x19
  NetworkManager_c *v8; // x0
  System_Collections_Generic_Dictionary_object__object__o *webViewAddress; // x0
  NetworkManager_c *v10; // x0

  if ( (byte_4C427D5 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_23119/*"rights"*/);
    sub_1C37058(&StringLiteral_23832/*"summonDetail"*/);
    sub_1C37058(&StringLiteral_18443/*"dBanner"*/);
    sub_1C37058(&StringLiteral_24033/*"terms"*/);
    sub_1C37058(&StringLiteral_17362/*"boxGacha"*/);
    sub_1C37058(&StringLiteral_22207/*"news"*/);
    sub_1C37058(&StringLiteral_18331/*"credit"*/);
    sub_1C37058(&StringLiteral_19954/*"help"*/);
    sub_1C37058(&StringLiteral_23586/*"spdeal"*/);
    sub_1C37058(&StringLiteral_18228/*"contact"*/);
    sub_1C37058(&StringLiteral_23966/*"tBanner"*/);
    sub_1C37058(&StringLiteral_18565/*"deleteAccount"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_24728/*"warBoard"*/);
    sub_1C37058(&StringLiteral_22779/*"privacyPolicy"*/);
    byte_4C427D5 = 1;
  }
  v3 = &StringLiteral_19954/*"help"*/;
  switch ( addressType )
  {
    case 0:
      v4 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v4 = BalanceConfig_TypeInfo;
      }
      static_fields = v4->static_fields;
      if ( !static_fields->IsIOS_Examination )
      {
        v3 = &StringLiteral_22207/*"news"*/;
LABEL_23:
        v7 = (Il2CppObject *)*v3;
        v8 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v8 = NetworkManager_TypeInfo;
        }
        webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)v8->static_fields->webViewAddress;
        if ( webViewAddress )
        {
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  webViewAddress,
                  v7,
                  (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
            return (System_String_o *)StringLiteral_1/*""*/;
          v10 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v10 = NetworkManager_TypeInfo;
          }
          webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)v10->static_fields->webViewAddress;
          if ( webViewAddress )
            return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        webViewAddress,
                                        v7,
                                        (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        }
        sub_1C372B4(webViewAddress);
      }
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->IOS_ExaminationNewsUrl;
    case 1:
      v3 = &StringLiteral_23832/*"summonDetail"*/;
      goto LABEL_23;
    case 2:
      goto LABEL_23;
    case 3:
      v3 = &StringLiteral_18228/*"contact"*/;
      goto LABEL_23;
    case 4:
      v3 = &StringLiteral_24033/*"terms"*/;
      goto LABEL_23;
    case 5:
      v3 = &StringLiteral_18331/*"credit"*/;
      goto LABEL_23;
    case 6:
      v3 = &StringLiteral_23119/*"rights"*/;
      goto LABEL_23;
    case 7:
      v3 = &StringLiteral_23966/*"tBanner"*/;
      goto LABEL_23;
    case 8:
      v3 = &StringLiteral_23586/*"spdeal"*/;
      goto LABEL_23;
    case 9:
      v3 = &StringLiteral_17362/*"boxGacha"*/;
      goto LABEL_23;
    case 10:
      v3 = &StringLiteral_18443/*"dBanner"*/;
      goto LABEL_23;
    case 11:
      v3 = &StringLiteral_22779/*"privacyPolicy"*/;
      goto LABEL_23;
    case 12:
      v3 = &StringLiteral_18565/*"deleteAccount"*/;
      goto LABEL_23;
    case 13:
      v3 = &StringLiteral_24728/*"warBoard"*/;
      goto LABEL_23;
    default:
      return (System_String_o *)StringLiteral_1/*""*/;
  }
}


System_String_o *NetworkManager__getWebViewFullAddress(System_String_o *path, const MethodInfo *method)
{
  System_String_o *v2; // x19
  const MethodInfo *v3; // x1

  v2 = path;
  if ( (byte_4C427D4 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_20077/*"https:"*/);
    path = (System_String_o *)sub_1C37058(&StringLiteral_20042/*"http:"*/);
    byte_4C427D4 = 1;
  }
  if ( !v2 )
    sub_1C372B4(path);
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_20042/*"http:"*/, 0)
    || System_String__StartsWith(v2, (System_String_o *)StringLiteral_20077/*"https:"*/, 0) )
  {
    return v2;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getWebViewAddress(v2, v3);
}


System_String_o *NetworkManager__get_ErrorDialogResponseData(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C427DA & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427DA = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->errorDialogResponseData;
}


int64_t NetworkManager__get_FriendCode(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  int64_t result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C4276E & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4276E = 1;
  }
  v1 = NetworkManager_TypeInfo;
  result = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  if ( System_Int64__TryParse(v1->static_fields->friendCode, &result, 0) )
    return result;
  else
    return -1;
}


bool NetworkManager__get_IsLogin(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C4276C & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4276C = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->isLogin;
}


bool NetworkManager__get_IsRebootBlock(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C42768 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42768 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->isRebootBlock;
}


System_String_o *NetworkManager__get_UserCreateServer(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C4276B & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4276B = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->userCreateServer;
}


int64_t NetworkManager__get_UserId(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4C4276D & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4276D = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->userIdNumber;
}


bool NetworkManager__get_isWaitUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  return this->fields._isWaitUserAgent_k__BackingField;
}


void NetworkManager__set_ErrorDialogResponseData(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x8

  if ( (byte_4C427DB & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C427DB = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->errorDialogResponseData = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->errorDialogResponseData, (int32_t)value, v2, v3);
}


void NetworkManager__set_isWaitUserAgent(NetworkManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._isWaitUserAgent_k__BackingField = value;
}


void NetworkManager__setupDataServerAddress(NetworkManager_o *this, int32_t addressType, const MethodInfo *method)
{
  System_String_o *streamingAssetsPath; // x19
  ManagerConfig_c *v5; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *v8; // x19
  NetworkManager_c *v9; // x8
  CGThumbnailListItem_o *p_dataServerAddress; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *dataServerAddress; // x0
  NetworkManager_c *v13; // x0
  struct NetworkManager_StaticFields *v14; // x8
  System_String_o *v15; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x19
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_String_o *dataServerFolder; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  struct ManagerConfig_StaticFields *v32; // x8
  System_String_o *ReleaseDataServerAddress; // x19
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  NetworkManager_c *v36; // x8
  struct System_String_o *dataServerRedirectAddress; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_String_o *v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  System_String_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  NetworkManager_c *v50; // x8
  CGThumbnailListItem_c *v51; // x1
  CGThumbnailListItem_o *v52; // x0
  NetworkManager_c *v53; // x0

  if ( (byte_4C427D1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_1062/*"/AssetStorages/"*/);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    sub_1C37058(&StringLiteral_21045/*"jar:"*/);
    byte_4C427D1 = 1;
  }
  switch ( addressType )
  {
    case 0:
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      streamingAssetsPath = UnityEngine_Application__get_streamingAssetsPath(0);
      v5 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v5 = ManagerConfig_TypeInfo;
      }
      v8 = System_String__Concat_63601908(
             streamingAssetsPath,
             (System_String_o *)StringLiteral_1062/*"/AssetStorages/"*/,
             v5->static_fields->PlatformName,
             (System_String_o *)StringLiteral_1048/*"/"*/,
             0);
      v9 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v9 = NetworkManager_TypeInfo;
      }
      p_dataServerAddress = (CGThumbnailListItem_o *)&v9->static_fields->dataServerAddress;
      p_dataServerAddress->klass = (CGThumbnailListItem_c *)v8;
      sub_1C36FFC(p_dataServerAddress, (int32_t)v8, v6, v7);
      static_fields = NetworkManager_TypeInfo->static_fields;
      dataServerAddress = static_fields->dataServerAddress;
      if ( !dataServerAddress )
        goto LABEL_59;
      if ( System_String__StartsWith(dataServerAddress, static_fields->FILE_URL_SCHEME, 0) )
        return;
      v13 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v13 = NetworkManager_TypeInfo;
      }
      v14 = v13->static_fields;
      v15 = v14->dataServerAddress;
      dataServerAddress = System_String__Concat_63561656(
                            (System_String_o *)StringLiteral_21045/*"jar:"*/,
                            v14->FILE_URL_SCHEME,
                            0);
      if ( !v15 )
LABEL_59:
        sub_1C372B4(dataServerAddress);
      if ( System_String__StartsWith(v15, dataServerAddress, 0) )
        return;
      v53 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v53 = NetworkManager_TypeInfo;
      }
      v47 = System_String__Concat_63561656(
              v53->static_fields->FILE_URL_SCHEME,
              v53->static_fields->dataServerAddress,
              0);
LABEL_53:
      v50 = NetworkManager_TypeInfo;
      goto LABEL_54;
    case 1:
      v18 = sub_1C37100(string___TypeInfo, 5);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C40637 )
      {
        sub_1C37058(&ManagerConfig_TypeInfo);
        byte_4C40637 = 1;
      }
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( !v18 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v18 + 24) )
        goto LABEL_58;
      v19 = *(_QWORD *)(*(_QWORD *)&dataServerAddress[7].fields + 152LL);
      *(_QWORD *)(v18 + 32) = v19;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 32), v19, v16, v17);
      if ( *(_DWORD *)(v18 + 24) <= 1u )
        goto LABEL_58;
      v22 = StringLiteral_1048/*"/"*/;
      *(_QWORD *)(v18 + 40) = StringLiteral_1048/*"/"*/;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 40), v22, v20, v21);
      if ( *(_DWORD *)(v18 + 24) <= 2u )
        goto LABEL_58;
      dataServerFolder = NetworkManager_TypeInfo->static_fields->dataServerFolder;
      *(_QWORD *)(v18 + 48) = dataServerFolder;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 48), (int32_t)dataServerFolder, v23, v24);
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( *(_DWORD *)(v18 + 24) <= 3u )
        goto LABEL_58;
      v28 = *(_QWORD *)(*(_QWORD *)&dataServerAddress[7].fields + 128LL);
      *(_QWORD *)(v18 + 56) = v28;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 56), v28, v26, v27);
      if ( *(_DWORD *)(v18 + 24) <= 4u )
        goto LABEL_58;
      v31 = StringLiteral_1048/*"/"*/;
      goto LABEL_49;
    case 2:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C40637 )
      {
        sub_1C37058(&ManagerConfig_TypeInfo);
        byte_4C40637 = 1;
      }
      if ( ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        v32 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v32->ReleaseDataServerAddress;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v32 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v32->ReleaseDataServerAddress;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v32 = ManagerConfig_TypeInfo->static_fields;
        }
      }
      v47 = System_String__Concat_63601908(
              ReleaseDataServerAddress,
              (System_String_o *)StringLiteral_1048/*"/"*/,
              v32->PlatformName,
              (System_String_o *)StringLiteral_1048/*"/"*/,
              0);
      goto LABEL_53;
    case 3:
      dataServerAddress = (System_String_o *)sub_1C37100(string___TypeInfo, 5);
      v18 = (__int64)dataServerAddress;
      v36 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v36 = NetworkManager_TypeInfo;
      }
      if ( !v18 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v18 + 24) )
        goto LABEL_58;
      dataServerRedirectAddress = v36->static_fields->dataServerRedirectAddress;
      *(_QWORD *)(v18 + 32) = dataServerRedirectAddress;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 32), (int32_t)dataServerRedirectAddress, v34, v35);
      if ( *(_DWORD *)(v18 + 24) <= 1u )
        goto LABEL_58;
      v40 = StringLiteral_1048/*"/"*/;
      *(_QWORD *)(v18 + 40) = StringLiteral_1048/*"/"*/;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 40), v40, v38, v39);
      if ( *(_DWORD *)(v18 + 24) <= 2u )
        goto LABEL_58;
      v43 = NetworkManager_TypeInfo->static_fields->dataServerFolder;
      *(_QWORD *)(v18 + 48) = v43;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 48), (int32_t)v43, v41, v42);
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( *(_DWORD *)(v18 + 24) <= 3u
        || (v46 = *(_QWORD *)(*(_QWORD *)&dataServerAddress[7].fields + 128LL),
            *(_QWORD *)(v18 + 56) = v46,
            sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 56), v46, v44, v45),
            *(_DWORD *)(v18 + 24) <= 4u) )
      {
LABEL_58:
        sub_1C372BC(dataServerAddress);
      }
      v31 = StringLiteral_1048/*"/"*/;
LABEL_49:
      *(_QWORD *)(v18 + 64) = v31;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 64), v31, v29, v30);
      v47 = System_String__Concat_63602172((System_String_array *)v18, 0);
      v50 = NetworkManager_TypeInfo;
LABEL_54:
      v51 = (CGThumbnailListItem_c *)v47;
      v52 = (CGThumbnailListItem_o *)&v50->static_fields->dataServerAddress;
      v52->klass = v51;
      sub_1C36FFC(v52, (int32_t)v51, v48, v49);
      return;
    default:
      return;
  }
}


void NetworkManager__setupWebViewAddress(
        System_String_o *baseURL,
        System_String_o *contactURL,
        System_Collections_Generic_Dictionary_string__object__o *filePassInfo,
        const MethodInfo *method)
{
  NetworkManager_c *v6; // x0
  CGThumbnailListItem_o *p_webViewBaseURL; // x0
  System_Collections_Generic_Dictionary_object__object__o *webViewAddress; // x0
  _BOOL8 v9; // x0
  Il2CppObject *currentKey; // x21
  Il2CppObject *Item; // x0
  System_String_o *v12; // x0
  Il2CppObject *v13; // x22
  NetworkManager_c *v14; // x0
  System_Collections_Generic_Dictionary_object__object__o *v15; // x0
  Il2CppObject *v16; // x0
  System_String_o *v17; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v19; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C427D2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_18228/*"contact"*/);
    sub_1C37058(&StringLiteral_18565/*"deleteAccount"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_22779/*"privacyPolicy"*/);
    byte_4C427D2 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  memset(&v19, 0, sizeof(v19));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  p_webViewBaseURL = (CGThumbnailListItem_o *)&v6->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (CGThumbnailListItem_c *)baseURL;
  sub_1C36FFC(p_webViewBaseURL, (int32_t)baseURL, (int32_t)filePassInfo, method);
  webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)NetworkManager_TypeInfo->static_fields->webViewAddress;
  if ( !webViewAddress
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          webViewAddress,
          (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        !filePassInfo)
    || (webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
                                                                                      (const MethodInfo_3463310 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__)) == 0 )
  {
    sub_1C372B4(webViewAddress);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)webViewAddress,
    (const MethodInfo_36C85B4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
           &v19,
           (const MethodInfo_3560C80 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    if ( !v9 )
      break;
    currentKey = v19.fields._currentKey;
    if ( !v19.fields._currentKey )
      sub_1C372B4(v9);
    if ( System_String__Equals_63596960(
           (System_String_o *)v19.fields._currentKey,
           (System_String_o *)StringLiteral_18228/*"contact"*/,
           0)
      || System_String__Equals_63596960((System_String_o *)currentKey, (System_String_o *)StringLiteral_22779/*"privacyPolicy"*/, 0)
      || System_String__Equals_63596960((System_String_o *)currentKey, (System_String_o *)StringLiteral_18565/*"deleteAccount"*/, 0) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
               currentKey,
               (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        sub_1C372B4(0);
      v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                 Item,
                                 Item->klass->vtable[3].method);
    }
    else
    {
      v16 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
              currentKey,
              (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v16 )
        sub_1C372B4(0);
      v17 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v16->klass->vtable[3].methodPtr)(
                                 v16,
                                 v16->klass->vtable[3].method);
      v12 = System_String__Concat_63561656(baseURL, v17, 0);
    }
    v13 = (Il2CppObject *)v12;
    v14 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v14 = NetworkManager_TypeInfo;
    }
    v15 = (System_Collections_Generic_Dictionary_object__object__o *)v14->static_fields->webViewAddress;
    if ( !v15 )
      sub_1C372B4(0);
    System_Collections_Generic_Dictionary_object__object___Add(
      v15,
      currentKey,
      v13,
      (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v19,
    (const MethodInfo_3560C7C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
}


void NetworkManager_LoginCallbackFunc___ctor(
        NetworkManager_LoginCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

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
      v9 = sub_1A7BD7C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A7BD5C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7BD14;
}


System_IAsyncResult_o *NetworkManager_LoginCallbackFunc__BeginInvoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void NetworkManager_LoginCallbackFunc__EndInvoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void NetworkManager_LoginCallbackFunc__Invoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void NetworkManager_ResultCallbackFunc___ctor(
        NetworkManager_ResultCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

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
      v9 = sub_1A7BCD8;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A7BCB8;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7BC70;
}


System_IAsyncResult_o *NetworkManager_ResultCallbackFunc__BeginInvoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void NetworkManager_ResultCallbackFunc__EndInvoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void NetworkManager_ResultCallbackFunc__Invoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void NetworkManager_StoreCallbackFunc___ctor(
        NetworkManager_StoreCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

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
      v9 = sub_1A7BE20;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A7BE00;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7BDB8;
}


System_IAsyncResult_o *NetworkManager_StoreCallbackFunc__BeginInvoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_String_o *url,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = url;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void NetworkManager_StoreCallbackFunc__EndInvoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void NetworkManager_StoreCallbackFunc__Invoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_String_o *url,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    url,
    this->fields.method);
}


void NetworkManager__Initialize_d__83___ctor(
        NetworkManager__Initialize_d__83_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool NetworkManager__Initialize_d__83__MoveNext(NetworkManager__Initialize_d__83_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager__Initialize_d__83_o *v4; // x20
  int32_t _1__state; // w8
  struct NetworkManager_o *_4__this; // x19
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  struct ResponseCommandBase_array **p_commandList; // x21
  CGThumbnailListItem_o *p__2__current; // x20
  bool result; // w0
  ManagerConfig_c *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Coroutine_o *communicationCoroutine; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  NetworkManager_c *v26; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v28; // x0
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  long double v32; // q0
  __int64 v33; // x0
  __int64 v34; // x0
  UnityEngine_Object_o *v35; // x20
  System_Collections_Generic_List_object__o *v36; // x22
  PurchaseByBankResponseCommand_o *v37; // x23
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  MissionNotifyResponseCommand_o *v44; // x23
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  System_Object_array *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Collections_Generic_Dictionary_object__object__o *v54; // x23
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct ResponseCommandBase_array *commandList; // x8
  __int64 v58; // x25
  int max_length; // w9
  __int64 v60; // x8
  Il2CppObject *v61; // x23
  System_Collections_Generic_Dictionary_object__object__o *commandLookup; // x24

  v4 = this;
  if ( (byte_4C427F3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___);
    sub_1C37058(&Method_System_Collections_Generic_List_ResponseCommandBase__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ResponseCommandBase___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ResponseCommandBase__TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&MissionNotifyResponseCommand_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&PurchaseByBankResponseCommand_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Queue_RequestBase__Clear__);
    sub_1C37058(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (NetworkManager__Initialize_d__83_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C427F3 = 1;
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
    NetworkManager__ReadServerSetting(_4__this, v7);
    p_commandList = &_4__this->fields.commandList;
    if ( !_4__this->fields.commandList )
    {
      v36 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ResponseCommandBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v36,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ResponseCommandBase___ctor__);
      v37 = (PurchaseByBankResponseCommand_o *)sub_1C372A4(PurchaseByBankResponseCommand_TypeInfo);
      PurchaseByBankResponseCommand___ctor(v37, 0);
      if ( !v36 )
        goto LABEL_49;
      items = v36->fields._items;
      v41 = Method_System_Collections_Generic_List_ResponseCommandBase__Add__;
      ++v36->fields._version;
      if ( !items )
        goto LABEL_49;
      size = v36->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)v37,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v36->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v37;
        sub_1C36FFC((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v37, v38, v39);
      }
      v44 = (MissionNotifyResponseCommand_o *)sub_1C372A4(MissionNotifyResponseCommand_TypeInfo);
      MissionNotifyResponseCommand___ctor(v44, 0);
      v47 = v36->fields._items;
      v48 = Method_System_Collections_Generic_List_ResponseCommandBase__Add__;
      ++v36->fields._version;
      if ( !v47 )
        goto LABEL_49;
      v49 = v36->fields._size;
      if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)v44,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &v47->obj.klass + v49;
        v36->fields._size = v49 + 1;
        v50[4] = (Il2CppClass *)v44;
        sub_1C36FFC((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v44, v45, v46);
      }
      v51 = System_Collections_Generic_List_object___ToArray(
              v36,
              (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__);
      _4__this->fields.commandList = (struct ResponseCommandBase_array *)v51;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.commandList, (int32_t)v51, v52, v53);
      v54 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v54,
        (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__);
      _4__this->fields.commandLookup = (struct System_Collections_Generic_Dictionary_string__ResponseCommandBase__o *)v54;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.commandLookup, (int32_t)v54, v55, v56);
      commandList = _4__this->fields.commandList;
      if ( !commandList )
        goto LABEL_49;
      v58 = 0;
      while ( 1 )
      {
        max_length = commandList->max_length;
        if ( (int)v58 >= max_length )
          break;
        if ( (unsigned int)v58 >= max_length )
          sub_1C372BC(this);
        v60 = (__int64)commandList + 8 * v58;
        v61 = *(Il2CppObject **)(v60 + 32);
        if ( v61 )
        {
          commandLookup = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.commandLookup;
          this = (NetworkManager__Initialize_d__83_o *)ResponseCommandBase__GetCommandName(
                                                         *(ResponseCommandBase_o **)(v60 + 32),
                                                         0);
          if ( commandLookup )
          {
            System_Collections_Generic_Dictionary_object__object___Add(
              commandLookup,
              (Il2CppObject *)this,
              v61,
              (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__);
            commandList = *p_commandList;
            ++v58;
            if ( *p_commandList )
              continue;
          }
        }
        goto LABEL_49;
      }
    }
    NetworkManager__InitializeUserAgent(_4__this, v8);
LABEL_9:
    if ( _4__this->fields._isWaitUserAgent_k__BackingField )
    {
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(p__2__current, 0, v2, v3);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    v12 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v12 = ManagerConfig_TypeInfo;
    }
    if ( v12->static_fields->UseAppServer )
      NetworkServicePluginScript__CheckService(0);
    this = (NetworkManager__Initialize_d__83_o *)_4__this->fields.communicationWaitList;
    if ( this )
    {
      System_Collections_Generic_Queue_object___Clear(
        (System_Collections_Generic_Queue_T__o *)this,
        (const MethodInfo_3949EC8 *)Method_System_Collections_Generic_Queue_RequestBase__Clear__);
      communicationCoroutine = _4__this->fields.communicationCoroutine;
      if ( communicationCoroutine )
        UnityEngine_MonoBehaviour__StopCoroutine_71252944(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          communicationCoroutine,
          0);
      _4__this->fields.communicationWork = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.communicationWork, 0, v13, v14);
      _4__this->fields.communicationCoroutine = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.communicationCoroutine, 0, v16, v17);
      _4__this->fields.communicationWorkResponseList = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.communicationWorkResponseList, 0, v18, v19);
      _4__this->fields.cacheRefreshWork = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.cacheRefreshWork, 0, v20, v21);
      _4__this->fields.cacheRefreshWorkResponseList = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.cacheRefreshWorkResponseList, 0, v22, v23);
      v26 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v26 = NetworkManager_TypeInfo;
      }
      static_fields = v26->static_fields;
      static_fields->sessionId = 0;
      static_fields = (struct NetworkManager_StaticFields *)((char *)static_fields + 136);
      static_fields[-1].serverRedirectSecurity = 0;
      LOWORD(static_fields->WebCacheTime) = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)static_fields, 0, v24, v25);
      v28 = NetworkManager_TypeInfo->static_fields;
      v29 = StringLiteral_1/*""*/;
      v28->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&v28->dataServerFolder, v29, v30, v31);
      v33 = *((_QWORD *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__ + 4);
      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
        v33 = sub_1C8776C(v32);
      v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
      if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
        v34 = sub_1C8776C(v32);
      v35 = **(UnityEngine_Object_o ***)(v34 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v35, 0, 0) )
      {
        this = (NetworkManager__Initialize_d__83_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)_4__this,
                                                       0);
        if ( !this )
          goto LABEL_49;
        UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___);
      }
      this = (NetworkManager__Initialize_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        DataManager__Initialize((DataManager_o *)this, 0);
        this = (NetworkManager__Initialize_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
        if ( this )
        {
          AvalonNotificationManager__Initialize((AvalonNotificationManager_o *)this, 0);
          return 0;
        }
      }
    }
LABEL_49:
    sub_1C372B4(this);
  }
  return 0;
}


Il2CppObject *NetworkManager__Initialize_d__83__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__Initialize_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn NetworkManager__Initialize_d__83__System_Collections_IEnumerator_Reset(
        NetworkManager__Initialize_d__83_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_NetworkManager__Initialize_d__83_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *NetworkManager__Initialize_d__83__System_Collections_IEnumerator_get_Current(
        NetworkManager__Initialize_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void NetworkManager__Initialize_d__83__System_IDisposable_Dispose(
        NetworkManager__Initialize_d__83_o *this,
        const MethodInfo *method)
{
  ;
}


void NetworkManager__RequestApplicationUpdateCR_d__219___ctor(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool NetworkManager__RequestApplicationUpdateCR_d__219__MoveNext(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NetworkManager__RequestApplicationUpdateCR_d__219_o *v4; // x19
  struct System_String_o *storeName; // x8
  System_String_o **p_storeName; // x21
  int32_t v7; // w1
  ManagerConfig_c *v8; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  CGThumbnailListItem_o *p_id; // x0
  struct System_String_o *iOSApplicationID; // x1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v12; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v13; // x8
  NetworkManager__RequestApplicationUpdateCR_d__219_o *v14; // x20
  NetworkManager__RequestApplicationUpdateCR_d__219_o *v15; // x20
  Il2CppObject *Item; // x20
  System_Object_array *v17; // x0
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v19; // x20
  System_Collections_Generic_Dictionary_object__object__o *v20; // x0
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  CGThumbnailListItem_o *p_url_5__2; // x0
  System_String_o *v26; // x20
  DelightWorks_Network_UnityWebRequestWWW_o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *www_5__3; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  bool result; // w0
  struct NetworkManager_StoreCallbackFunc_o *callback; // x8
  UnityEngine_WaitForSeconds_o *v36; // x20
  CGThumbnailListItem_o *v37; // x19
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int v40; // w8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_String_o *id; // x1
  System_String_o **v44; // x21
  ManagerConfig_c *v45; // x0
  struct System_String_o *AndroidPackageName; // x1
  System_String_o *v47; // x0
  UnityEngine_WaitForSeconds_o *v48; // x20
  int32_t v49; // w2
  const MethodInfo *v50; // x3

  v4 = this;
  if ( (byte_4C427F4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&Method_JsonManager_DeserializeArray_Dictionary_string__object____);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C37058(&StringLiteral_24164/*"trackViewUrl"*/);
    sub_1C37058(&StringLiteral_511/*"&country=jp"*/);
    sub_1C37058(&StringLiteral_20082/*"https://play.google.com/store/apps/details?id="*/);
    sub_1C37058(&StringLiteral_2265/*"Android"*/);
    sub_1C37058(&StringLiteral_23083/*"results"*/);
    sub_1C37058(&StringLiteral_20080/*"https://itunes.apple.com/lookup?id="*/);
    this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)sub_1C37058(&StringLiteral_20096/*"iOS"*/);
    byte_4C427F4 = 1;
  }
  switch ( v4->fields.__1__state )
  {
    case 0:
      p_storeName = &v4->fields.storeName;
      storeName = v4->fields.storeName;
      v4->fields.__1__state = -1;
      if ( !storeName )
      {
        v7 = StringLiteral_2265/*"Android"*/;
        *p_storeName = (System_String_o *)StringLiteral_2265/*"Android"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.storeName, v7, v2, v3);
      }
      v4->fields._url_5__2 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._url_5__2, 0, v2, v3);
      if ( System_String__op_Equality(v4->fields.storeName, (System_String_o *)StringLiteral_20096/*"iOS"*/, 0) )
      {
        if ( !v4->fields.id )
        {
          v8 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v8 = ManagerConfig_TypeInfo;
          }
          static_fields = v8->static_fields;
          p_id = (CGThumbnailListItem_o *)&v4->fields.id;
          iOSApplicationID = static_fields->iOSApplicationID;
          v4->fields.id = iOSApplicationID;
LABEL_33:
          sub_1C36FFC(p_id, (int32_t)iOSApplicationID, v2, v3);
        }
        v26 = System_String__Concat_63599904(
                (System_String_o *)StringLiteral_20080/*"https://itunes.apple.com/lookup?id="*/,
                v4->fields.id,
                (System_String_o *)StringLiteral_511/*"&country=jp"*/,
                0);
        v27 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1C372A4(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
        DelightWorks_Network_UnityWebRequestWWW___ctor(v27, v26, 0);
        v4->fields._www_5__3 = v27;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._www_5__3, (int32_t)v27, v28, v29);
        www_5__3 = (Il2CppObject *)v4->fields._www_5__3;
        v4->fields.__2__current = www_5__3;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(p__2__current, (int32_t)www_5__3, v32, v33);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      if ( !System_String__op_Equality(*p_storeName, (System_String_o *)StringLiteral_2265/*"Android"*/, 0) )
        goto LABEL_47;
      v44 = &v4->fields.id;
      id = v4->fields.id;
      if ( !id )
      {
        v45 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v45 = ManagerConfig_TypeInfo;
        }
        AndroidPackageName = v45->static_fields->AndroidPackageName;
        *v44 = AndroidPackageName;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.id, (int32_t)AndroidPackageName, v41, v42);
        id = *v44;
      }
      v47 = System_String__Concat_63561656((System_String_o *)StringLiteral_20082/*"https://play.google.com/store/apps/details?id="*/, id, 0);
      v24 = (int)v47;
      v4->fields._url_5__2 = v47;
      p_url_5__2 = (CGThumbnailListItem_o *)&v4->fields._url_5__2;
      goto LABEL_46;
    case 1:
      v12 = v4->fields._www_5__3;
      v4->fields.__1__state = -1;
      if ( !v12 )
        goto LABEL_49;
      this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)System_String__IsNullOrEmpty(
                                                                      v12->fields._error_k__BackingField,
                                                                      0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_38;
      v13 = v4->fields._www_5__3;
      if ( !v13 )
        goto LABEL_49;
      if ( System_String__IsNullOrEmpty(v13->fields._error_k__BackingField, 0) )
      {
        this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)v4->fields._www_5__3;
        if ( !this )
          goto LABEL_49;
        this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)DelightWorks_Network_UnityWebRequestWWW__get_text(
                                                                        (DelightWorks_Network_UnityWebRequestWWW_o *)this,
                                                                        0);
        if ( !v4->fields._www_5__3 )
          goto LABEL_49;
        v14 = this;
        DelightWorks_Network_UnityWebRequestWWW__Dispose(v4->fields._www_5__3, 0);
        if ( !JsonManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)JsonManager__getDictionary(
                                                                        (System_String_o *)v14,
                                                                        0);
        if ( !this )
          goto LABEL_49;
        v15 = this;
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)this,
               (Il2CppObject *)StringLiteral_23083/*"results"*/,
               (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)v15,
                   (Il2CppObject *)StringLiteral_23083/*"results"*/,
                   (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v17 = JsonManager__DeserializeArray_object_(
                  Item,
                  (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_Dictionary_string__object____);
          if ( v17 )
          {
            max_length = v17->max_length;
            v19 = v17;
            if ( max_length )
            {
              if ( !(_DWORD)max_length )
                goto LABEL_50;
              v20 = (System_Collections_Generic_Dictionary_object__object__o *)v17->m_Items[0];
              if ( v20 )
              {
                v17 = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                               v20,
                                               (Il2CppObject *)StringLiteral_24164/*"trackViewUrl"*/,
                                               (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)v17 & 1) != 0 )
                {
                  if ( LODWORD(v19->max_length) )
                  {
                    this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)v19->m_Items[0];
                    if ( this )
                    {
                      this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                      (Il2CppObject *)StringLiteral_24164/*"trackViewUrl"*/,
                                                                                      (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                      if ( this )
                      {
                        v21 = ((__int64 (__fastcall *)(NetworkManager__RequestApplicationUpdateCR_d__219_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                                this,
                                this->klass->vtable._3_ToString.method);
                        v24 = v21;
                        v4->fields._url_5__2 = (struct System_String_o *)v21;
                        p_url_5__2 = (CGThumbnailListItem_o *)&v4->fields._url_5__2;
LABEL_46:
                        sub_1C36FFC(p_url_5__2, v24, v22, v23);
                        goto LABEL_47;
                      }
                    }
LABEL_49:
                    sub_1C372B4(this);
                  }
LABEL_50:
                  sub_1C372BC(v17);
                }
              }
            }
          }
        }
LABEL_47:
        v48 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v48, 0.5, 0);
        v4->fields.__2__current = (Il2CppObject *)v48;
        v37 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v37, (int32_t)v48, v49, v50);
        v40 = 3;
        goto LABEL_48;
      }
LABEL_38:
      this = (NetworkManager__RequestApplicationUpdateCR_d__219_o *)v4->fields._www_5__3;
      if ( !this )
        goto LABEL_49;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0);
      v36 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v36, 1.0, 0);
      v4->fields.__2__current = (Il2CppObject *)v36;
      v37 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(v37, (int32_t)v36, v38, v39);
      v40 = 2;
LABEL_48:
      LODWORD(v37[-1].fields._ThumbnailSpritePath_k__BackingField) = v40;
      return 1;
    case 2:
      v4->fields._www_5__3 = 0;
      p_id = (CGThumbnailListItem_o *)&v4->fields._www_5__3;
      v4->fields.__1__state = -1;
      LODWORD(iOSApplicationID) = 0;
      goto LABEL_33;
    case 3:
      callback = v4->fields.callback;
      v4->fields.__1__state = -1;
      if ( callback )
        ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          v4->fields._url_5__2,
          callback->fields.method);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *NetworkManager__RequestApplicationUpdateCR_d__219__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn NetworkManager__RequestApplicationUpdateCR_d__219__System_Collections_IEnumerator_Reset(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_NetworkManager__RequestApplicationUpdateCR_d__219_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *NetworkManager__RequestApplicationUpdateCR_d__219__System_Collections_IEnumerator_get_Current(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void NetworkManager__RequestApplicationUpdateCR_d__219__System_IDisposable_Dispose(
        NetworkManager__RequestApplicationUpdateCR_d__219_o *this,
        const MethodInfo *method)
{
  ;
}


void NetworkManager__RequestCR_d__214___ctor(
        NetworkManager__RequestCR_d__214_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool NetworkManager__RequestCR_d__214__MoveNext(NetworkManager__RequestCR_d__214_o *this, const MethodInfo *method)
{
  NetworkManager__RequestCR_d__214_o *v2; // x19
  struct NetworkManager_o *_4__this; // x20
  struct RequestBase_o *work; // x8
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_o *v7; // x21
  System_String_o *v8; // x22
  System_String_o *v9; // x23
  struct RequestBase_o *v10; // x8
  NetworkManager__RequestCR_d__214_o *v11; // x19
  System_Action_o *v12; // x19
  const MethodInfo *v13; // x6
  struct DelightWorks_Network_UnityWebRequestWWW_o *www_5__10; // x8
  DelightWorks_Network_UnityWebRequestWWW_o **p_www_5__10; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  DelightWorks_Network_UnityWebRequestWWW_o *v19; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v20; // x8
  NetworkManager__RequestCR_d__214_o **v21; // x21
  System_String_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v28; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int v32; // w8
  System_DateTime_o v33; // x0
  System_DateTime_o v34; // x1
  System_DateTime_o v35; // x21
  System_DateTime_o v36; // x0
  struct RequestBase_o *v37; // x8
  __int64 naturalAligment; // x11
  ManagerConfig_c *v39; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  __int64 v41; // x0
  System_String_o *v42; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_String_o **p_data_5__2; // x21
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  UnityEngine_WWWForm_o *WWWForm; // x21
  System_Collections_Generic_Dictionary_object__object__o *v55; // x22
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr10_16
  Il2CppObject *v57; // x24
  Il2CppObject *v58; // x0
  struct System_Collections_Generic_Queue_RequestBase__o *communicationWaitList; // x8
  float progress_k__BackingField; // s8
  float loadProgress_5__13; // s9
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  float v64; // s0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Collections_Generic_Queue_RequestBase__o *v67; // x8
  int32_t v68; // w1
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 *v71; // x8
  struct System_String_o *error_k__BackingField; // x1
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  NetworkManager_c *v75; // x0
  NetworkManager_c *v76; // x0
  int32_t v77; // w1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v78; // x8
  Il2CppObject *v79; // x24
  NetworkManager__RequestCR_d__214_o *v80; // x24
  System_String_o *v81; // x24
  uint32_t v82; // w0
  __int64 *v83; // x8
  int32_t v84; // w1
  __int64 v85; // x1
  CGThumbnailListItem_o *p_errorAction_5__5; // x0
  System_Collections_Generic_Dictionary_object__object__o *responseHeaders_k__BackingField; // x0
  System_String_o *v88; // x0
  int64_t v89; // x22
  NetworkManager_c *v90; // x8
  struct NetworkManager_StaticFields *v91; // x8
  int64_t startTime_5__8; // x9
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  System_String_o **p_errorCode_5__3; // x24
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w1
  int32_t v101; // w1
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  int32_t v104; // w1
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  CGThumbnailListItem_o *v109; // x0
  int32_t v110; // w1
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  int32_t v113; // w1
  int32_t v114; // w1
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  bool v117; // w25
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  struct ResponseData_array *v120; // x1
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  System_String_o **v123; // x22
  System_String_o *errorLocalizeCode_5__4; // x26
  System_String_o *title; // x22
  System_String_o *errorAction_5__5; // x23
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  System_String_o **v129; // x8
  System_String_o *data_5__2; // x21
  NetworkManager__RequestCR_d__214_o *v131; // x21
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  Il2CppObject *v134; // x22
  System_Object_array *v135; // x0
  ResponseData_array **p_responseList_5__7; // x22
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  struct ResponseData_array *responseList_5__7; // x8
  __int64 v140; // x25
  int v141; // w9
  Il2CppClass **v142; // x8
  ResponseData_o *v143; // x23
  const MethodInfo *v144; // x1
  System_Collections_Generic_SortedDictionary_string__string__o *v145; // x23
  System_String_o *AuthCode; // x0
  NetworkManager_c *v147; // x8
  System_String_o *v148; // x23
  int32_t v149; // w8
  NetworkManager_c *v150; // x0
  __int64 *v151; // x8
  System_String_o *v152; // x24
  bool isNoRedirect_5__9; // w24
  DelightWorks_Network_UnityWebRequestWWW_o *v154; // x25
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  struct RequestBase_o *v157; // x8
  __int64 v158; // x11
  struct RequestBase_o *v159; // x21
  ManagementManager_c *v160; // x0
  _BOOL4 isDuringStartup; // w8
  __int64 *v162; // x9
  __int64 *v163; // x10
  System_String_o *v164; // x1
  System_String_o *detail; // x23
  struct ResponseFailData_o *failData_5__6; // x8
  struct ResponseFailData_o *v167; // x8
  System_String_o *url; // x26
  struct ResponseFailData_o *v169; // x8
  struct ResponseFailData_o *v170; // x8
  struct ResponseFailData_o *v171; // x8
  System_String_o *v172; // x0
  struct ResponseFailData_o *v173; // x8
  System_String_o *v174; // x27
  const MethodInfo *v175; // x4
  bool v176; // w8
  bool result; // w0
  System_String_o *v178; // x27
  uint32_t v179; // w0
  const MethodInfo *v180; // x3
  ManagementManager_c *v181; // x0
  NetworkManager_c *v182; // x0
  struct ResponseFailData_o *v183; // x8
  int32_t errorType; // w24
  TerminalPramsManager_c *v185; // x0
  const MethodInfo *v186; // x1
  int32_t v187; // w2
  const MethodInfo *v188; // x3
  const MethodInfo *v189; // x3
  NetworkManager_c *v190; // x0
  const MethodInfo *v191; // x1
  NetworkManager_c *v192; // x0
  int32_t v193; // w1
  int32_t v194; // w1
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  int32_t v197; // w1
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  const MethodInfo *v200; // x1
  Il2CppObject *v201; // x22
  struct ResponseData_array *v202; // x8
  unsigned __int64 v203; // x22
  unsigned __int64 max_length_low; // x9
  ResponseData_o *v205; // x21
  Il2CppObject *Instance; // x24
  ErrorDialog_ClickDelegate_o *v207; // x25
  struct DelightWorks_Network_UnityWebRequestWWW_o *v208; // x8
  Il2CppObject *wait_5__14; // x1
  System_String_o *text; // x0
  int32_t v211; // w2
  const MethodInfo *v212; // x3
  struct RequestBase_o *v213; // x8
  __int64 v214; // x10
  Il2CppObject *Item; // x22
  int _2__current; // w8
  System_String_array *v217; // x0
  int32_t v218; // w2
  const MethodInfo *v219; // x3
  NetworkManager_c *v220; // x8
  System_String_array *v221; // x22
  struct NetworkManager_StaticFields *v222; // x0
  int32_t v223; // w1
  int max_length; // w8
  unsigned int v225; // w25
  Il2CppClass **v226; // x8
  System_String_o *v227; // x23
  NetworkManager_c *v228; // x0
  System_String_o *v229; // x0
  struct NetworkManager_StaticFields *v230; // x8
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  NetworkManager_c *v233; // x0
  System_Action_o *v234; // x24
  const MethodInfo *v235; // x5
  struct ResponseFailData_o *v236; // x8
  System_Action_o *v237; // x0
  intptr_t *v238; // x8
  ManagementManager_c *v239; // x0
  struct ResponseFailData_o *v240; // x8
  ManagerConfig_c *v241; // x0
  __int64 v242; // x9
  float unscaledTime; // s0
  float timeout_5__11; // s1
  UnityEngine_WaitForEndOfFrame_o *v245; // x21
  int32_t v246; // w2
  const MethodInfo *v247; // x3
  int32_t v248; // w2
  const MethodInfo *v249; // x3
  NetworkManager__RequestCR_d__214_o *v250; // x25
  int32_t v251; // w1
  int32_t v252; // w2
  const MethodInfo *v253; // x3
  struct NetworkManager_o *nid; // x1
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  int32_t v257; // w1
  int32_t v258; // w2
  const MethodInfo *v259; // x3
  struct System_String_o *resCode; // x1
  int32_t v261; // w2
  const MethodInfo *v262; // x3
  int32_t v263; // w1
  System_String_o *v264; // x0
  int32_t v265; // w2
  const MethodInfo *v266; // x3
  ResponseFailData_o *v267; // x26
  struct ResponseFailData_o **p_failData_5__6; // x25
  int32_t v269; // w2
  const MethodInfo *v270; // x3
  int32_t v271; // w2
  const MethodInfo *v272; // x3
  __int64 *p_action; // x8
  __int64 v274; // x1
  struct RequestBase_o *v275; // x8
  PurchaseByBank_UnityIap_Request_c *v276; // x9
  __int64 v277; // x11
  RequestBase_c *klass; // x8
  __int64 v279; // x10
  ResponseData_array *v280; // x22
  ResponseData_o *v281; // x0
  System_Collections_Generic_Dictionary_object__object__o *fail; // x0
  System_String_o *v283; // x22
  int32_t v284; // w2
  const MethodInfo *v285; // x3
  int32_t v286; // w1
  TitleRootComponent_c *v287; // x0
  Il2CppObject *v288; // x24
  AvalonSceneManager_c *v289; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x25
  Il2CppObject *v292; // x26
  struct NetworkManager___c_StaticFields *v293; // x0
  int32_t v294; // w2
  const MethodInfo *v295; // x3
  Il2CppObject *v296; // x24
  System_String_o *v297; // x25
  System_String_o *v298; // x26
  CommonConfirmDialog_ClickDelegate_o *v299; // x27
  const MethodInfo *v300; // x2
  struct ResponseFailData_o *v301; // x8
  System_String_o *sandboxDomain; // x22
  _BOOL4 sandboxSeurity; // w24
  int32_t v304; // w2
  const MethodInfo *v305; // x3
  struct ResponseFailData_o *v306; // x8
  struct System_String_o *sandboxAssetsDomain; // x22
  NetworkManager_c *v308; // x0
  struct NetworkManager_StaticFields *v309; // x0
  int32_t v310; // w2
  const MethodInfo *v311; // x3
  struct ResponseFailData_o *v312; // x8
  struct System_String_o *sandboxWebviewDomain; // x22
  NetworkManager_c *v314; // x0
  struct NetworkManager_StaticFields *v315; // x0
  const MethodInfo *v316; // x1
  NetworkManager_c *v317; // x0
  struct ResponseFailData_o *v318; // x8
  Il2CppObject *v319; // x24
  ErrorDialog_ClickDelegate_o *v320; // x25
  System_String_o *v321; // x0
  int32_t v322; // w2
  const MethodInfo *v323; // x3
  ResponseFailData_o *v324; // x22
  struct ResponseFailData_o **v325; // x21
  int32_t v326; // w2
  const MethodInfo *v327; // x3
  int32_t v328; // w2
  const MethodInfo *v329; // x3
  __int64 *v330; // x8
  ManagementManager_c *v331; // x0
  __int64 v332; // x1
  struct ResponseFailData_o *v333; // x8
  struct ResponseFailData_o *v334; // x8
  System_Action_o *v335; // x25
  const MethodInfo *v336; // x6
  int32_t v337; // w2
  const MethodInfo *v338; // x3
  int32_t v339; // w2
  const MethodInfo *v340; // x3
  int32_t v341; // w2
  const MethodInfo *v342; // x3
  int32_t v343; // w2
  const MethodInfo *v344; // x3
  int32_t v345; // w2
  const MethodInfo *v346; // x3
  UnityEngine_WaitForEndOfFrame_o *v347; // x20
  CGThumbnailListItem_o *v348; // x19
  int32_t v349; // w2
  const MethodInfo *v350; // x3
  CGThumbnailListItem_c *v351; // x19
  NetworkManager_c *v352; // x0
  CGThumbnailListItem_o *p_errorDialogResponseData; // x0
  ManagementManager_c *v354; // x0
  _BOOL4 v355; // w26
  Il2CppObject *v356; // x24
  ErrorDialog_ClickDelegate_o *v357; // x25
  __int64 *v358; // x8
  bool v359; // w0
  __int64 *v360; // x8
  System_String_o *v361; // x25
  System_String_o *v362; // x26
  ErrorDialog_ClickDelegate_o *v363; // x27
  ErrorDialog_ClickDelegate_o *v364; // x25
  __int64 v365; // x1
  struct System_String_o **p_errorLocalizeCode_5__4; // x23
  __int64 *v367; // x8
  __int64 v368; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v369; // [xsp+10h] [xbp-E0h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v371; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_SortedDictionary_string__string__o *authParams; // [xsp+70h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+78h] [xbp-78h] BYREF

  v2 = this;
  if ( (byte_4C427F5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&BattleData_TypeInfo);
    sub_1C37058(&char___TypeInfo);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    sub_1C37058(&Method_JsonManager_DeserializeArray_ResponseData___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&ManagementManager_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&Method_NetworkManager_OnClickErrorDialog__);
    sub_1C37058(&Method_NetworkManager_OnClickErrorReboot__);
    sub_1C37058(&Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__);
    sub_1C37058(&Method_NetworkManager_OnClickErrorRetryDialog__);
    sub_1C37058(&Method_NetworkManager_OnClickErrorStay__);
    sub_1C37058(&Method_NetworkManager_OnClickErrorTerminal__);
    sub_1C37058(&Method_NetworkManager_OnClickRefreshTerminal__);
    sub_1C37058(&Method_NetworkManager_OnClickReloadCache__);
    sub_1C37058(&Method_NetworkManager_OnClickStore__);
    sub_1C37058(&Method_NetworkManager_OnClickUserDelete__);
    sub_1C37058(&Method_NetworkManager__RequestCR_b__214_0__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&PurchaseByBank_UnityIap_Request_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__);
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    sub_1C37058(&ResponseFailData_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TitleRootComponent_TypeInfo);
    sub_1C37058(&TopGameDataRequest_TypeInfo);
    sub_1C37058(&TopLoginRequest_TypeInfo);
    sub_1C37058(&Method_NetworkManager___c__RequestCR_b__214_1__);
    sub_1C37058(&NetworkManager___c_TypeInfo);
    sub_1C37058(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_15699/*"X-SERVER-TIME"*/);
    sub_1C37058(&StringLiteral_18479/*"data_update"*/);
    sub_1C37058(&StringLiteral_9255/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/);
    sub_1C37058(&StringLiteral_20872/*"invalid_battle"*/);
    sub_1C37058(&StringLiteral_23027/*"reload_cache"*/);
    sub_1C37058(&StringLiteral_7261/*"HTTP"*/);
    sub_1C37058(&StringLiteral_1407/*"400"*/);
    sub_1C37058(&StringLiteral_23076/*"result"*/);
    sub_1C37058(&StringLiteral_9254/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/);
    sub_1C37058(&StringLiteral_19882/*"goto_login_access"*/);
    sub_1C37058(&StringLiteral_20832/*"internal server error"*/);
    sub_1C37058(&StringLiteral_23068/*"response error "*/);
    sub_1C37058(&StringLiteral_23067/*"response"*/);
    sub_1C37058(&StringLiteral_23698/*"stay"*/);
    sub_1C37058(&StringLiteral_1409/*"401"*/);
    sub_1C37058(&StringLiteral_1411/*"403"*/);
    sub_1C37058(&StringLiteral_9243/*"NETWORK_ERROR_BOOT_MESSAGE"*/);
    sub_1C37058(&StringLiteral_7729/*"Internal Server Error"*/);
    sub_1C37058(&StringLiteral_15223/*"User-Agent"*/);
    sub_1C37058(&StringLiteral_23088/*"retry"*/);
    sub_1C37058(&StringLiteral_9258/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/);
    sub_1C37058(&StringLiteral_9256/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/);
    sub_1C37058(&StringLiteral_17003/*"background cancel"*/);
    sub_1C37058(&StringLiteral_1421/*"500"*/);
    sub_1C37058(&StringLiteral_9247/*"NETWORK_ERROR_CSID_CODE"*/);
    sub_1C37058(&StringLiteral_23069/*"response execute error "*/);
    sub_1C37058(&StringLiteral_17728/*"canceled_purchase_error"*/);
    sub_1C37058(&StringLiteral_1423/*"502"*/);
    sub_1C37058(&StringLiteral_1425/*"503"*/);
    sub_1C37058(&StringLiteral_4721/*"Cookie"*/);
    sub_1C37058(&StringLiteral_9262/*"NETWORK_USER_DELETE_DECIDE"*/);
    sub_1C37058(&StringLiteral_20873/*"invalid_user"*/);
    sub_1C37058(&StringLiteral_9244/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/);
    sub_1C37058(&StringLiteral_16818/*"app_version_up"*/);
    sub_1C37058(&StringLiteral_1756/*"?"*/);
    sub_1C37058(&StringLiteral_9257/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/);
    sub_1C37058(&StringLiteral_22271/*"none data"*/);
    sub_1C37058(&StringLiteral_9246/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C37058(&StringLiteral_22656/*"path="*/);
    sub_1C37058(&StringLiteral_16945/*"authCode"*/);
    sub_1C37058(&StringLiteral_501/*"&"*/);
    sub_1C37058(&StringLiteral_23010/*"refresh_terminal"*/);
    sub_1C37058(&StringLiteral_19883/*"goto_title"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_1492/*";"*/);
    sub_1C37058(&StringLiteral_18217/*"connect time over"*/);
    sub_1C37058(&StringLiteral_22986/*"reconnection"*/);
    sub_1C37058(&StringLiteral_12351/*"STATUS"*/);
    sub_1C37058(&StringLiteral_16608/*"_userId="*/);
    sub_1C37058(&StringLiteral_18660/*"do_signup"*/);
    sub_1C37058(&StringLiteral_9261/*"NETWORK_USER_DELETE_CANCEL"*/);
    sub_1C37058(&StringLiteral_17690/*"cache"*/);
    sub_1C37058(&StringLiteral_759/*")"*/);
    sub_1C37058(&StringLiteral_3690/*"COMMON_CONFIRM_RETRY"*/);
    sub_1C37058(&StringLiteral_23709/*"stay_no_dialog"*/);
    sub_1C37058(&StringLiteral_9259/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/);
    sub_1C37058(&StringLiteral_1413/*"404"*/);
    sub_1C37058(&StringLiteral_22272/*"none response data"*/);
    sub_1C37058(&StringLiteral_21405/*"maint"*/);
    sub_1C37058(&StringLiteral_22673/*"pending_purchase_error"*/);
    sub_1C37058(&StringLiteral_129/*" ("*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_9245/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/);
    sub_1C37058(&StringLiteral_12015/*"SET-COOKIE"*/);
    sub_1C37058(&StringLiteral_1382/*"302"*/);
    sub_1C37058(&StringLiteral_9260/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    this = (NetworkManager__RequestCR_d__214_o *)sub_1C37058(&StringLiteral_1368/*"200"*/);
    byte_4C427F5 = 1;
  }
  authParams = 0;
  dateData = 0;
  memset(&v371, 0, sizeof(v371));
  value = 0;
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
      if ( UnityEngine_Application__get_internetReachability(0) )
        goto LABEL_486;
      v7 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_9246/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9245/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, 0);
      this = (NetworkManager__RequestCR_d__214_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9244/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, 0);
      v10 = v2->fields.work;
      if ( !v10 )
        goto LABEL_548;
      v11 = this;
      if ( ((unsigned int)((_QWORD *(__fastcall *)(struct RequestBase_o *__return_ptr, struct RequestBase_o *, const MethodInfo *))v10->klass->vtable._8_isBackgroundRequest.methodPtr)(
                            v10,
                            v10,
                            v10->klass->vtable._8_isBackgroundRequest.method)
          & 1) != 0 )
      {
        v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)_4__this, Method_NetworkManager__RequestCR_b__214_0__, 0);
        if ( _4__this )
        {
          NetworkManager__WarningDialog(_4__this, v7, v8, 0, 1, v12, v13);
          return 0;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v207 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v207,
          (Il2CppObject *)_4__this,
          Method_NetworkManager_OnClickErrorRetryDialog__,
          0);
        if ( Instance )
        {
          CommonUI__OpenRetryDialog_31207360((CommonUI_o *)Instance, v7, v8, v9, (System_String_o *)v11, v207, 0, 0);
          return 0;
        }
      }
      goto LABEL_548;
    case 1:
      delay = v2->fields.delay;
      v2->fields.__1__state = -1;
      if ( delay <= 0.0 )
        goto LABEL_32;
      v28 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v28, delay, 0);
      v2->fields.__2__current = (Il2CppObject *)v28;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C36FFC(p__2__current, (int32_t)v28, v30, v31);
      v32 = 2;
      goto LABEL_331;
    case 2:
      v2->fields.__1__state = -1;
LABEL_32:
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      dateData = System_DateTime__get_Now(0).fields._dateData;
      v33.fields._dateData = (uint64_t)&dateData;
      v35.fields._dateData = System_DateTime__ToUniversalTime(v33, 0).fields._dateData;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v36.fields._dateData = v35.fields._dateData;
      v2->fields._startTime_5__8 = NetworkManager__getTime_41366368(v36, (const MethodInfo *)v34.fields._dateData);
      v37 = v2->fields.work;
      if ( v37 )
      {
        naturalAligment = TopGameDataRequest_TypeInfo->_2.naturalAligment;
        if ( v37->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (TopGameDataRequest_c *)v37->klass->_2.typeHierarchy[naturalAligment - 1] == TopGameDataRequest_TypeInfo )
        {
          LOBYTE(v37) = v37[1].klass;
        }
        else
        {
          LOBYTE(v37) = 0;
        }
      }
      v2->fields._isNoRedirect_5__9 = (char)v37;
      v39 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v39 = ManagerConfig_TypeInfo;
      }
      static_fields = v39->static_fields;
      if ( !static_fields->UseMock )
      {
        if ( v2->fields._data_5__2 )
          goto LABEL_140;
        this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
        if ( !this )
          goto LABEL_548;
        WWWForm = RequestBase__getWWWForm((RequestBase_o *)this, &authParams, 0);
        v55 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v55,
          (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
        if ( !WWWForm )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)UnityEngine_WWWForm__get_headers(WWWForm, 0);
        if ( !this )
          goto LABEL_548;
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v369,
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
        v371 = v369;
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v371,
                  (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
        {
          current = v371.fields._current;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v57 = (Il2CppObject *)System_Convert__ToString_64657696((System_String_o *)current.fields.key, 0);
          v58 = (Il2CppObject *)System_Convert__ToString_64657696((System_String_o *)current.fields.value, 0);
          if ( !v55 )
            sub_1C372B4(v58);
          System_Collections_Generic_Dictionary_object__object___Add(
            v55,
            v57,
            v58,
            (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v371,
          (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
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
          if ( !v55 )
            goto LABEL_548;
          System_Collections_Generic_Dictionary_object__object___Add(
            v55,
            (Il2CppObject *)StringLiteral_15223/*"User-Agent"*/,
            (Il2CppObject *)NetworkManager_TypeInfo->static_fields->userAgent,
            (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
          if ( !v55 )
            goto LABEL_548;
          System_Collections_Generic_Dictionary_object__object___Add(
            v55,
            (Il2CppObject *)StringLiteral_4721/*"Cookie"*/,
            (Il2CppObject *)NetworkManager_TypeInfo->static_fields->sessionId,
            (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
        }
        v145 = authParams;
        if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
          j_il2cpp_runtime_class_init_0(this);
        AuthCode = NetworkManager__GetAuthCode(v145, v144);
        if ( AuthCode )
          UnityEngine_WWWForm__AddField(WWWForm, (System_String_o *)StringLiteral_16945/*"authCode"*/, AuthCode, 0);
        this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
        if ( !this )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                       this,
                                                       this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
        v147 = NetworkManager_TypeInfo;
        v148 = (System_String_o *)this;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v147 = NetworkManager_TypeInfo;
        }
        if ( v147->static_fields->userId )
        {
          if ( !v148 )
            goto LABEL_548;
          v149 = System_String__IndexOf_63620032(v148, (System_String_o *)StringLiteral_1756/*"?"*/, 0);
          v150 = NetworkManager_TypeInfo;
          if ( v149 >= 0 )
            v151 = &StringLiteral_501/*"&"*/;
          else
            v151 = &StringLiteral_1756/*"?"*/;
          v152 = (System_String_o *)*v151;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v150 = NetworkManager_TypeInfo;
          }
          v148 = System_String__Concat_63601908(
                   v148,
                   v152,
                   (System_String_o *)StringLiteral_16608/*"_userId="*/,
                   v150->static_fields->userId,
                   0);
        }
        UnityEngine_WWWForm__get_data(WWWForm, 0);
        isNoRedirect_5__9 = v2->fields._isNoRedirect_5__9;
        v154 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1C372A4(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
        DelightWorks_Network_UnityWebRequestWWW___ctor_39704104(
          v154,
          v148,
          WWWForm,
          (System_Collections_Generic_Dictionary_string__string__o *)v55,
          isNoRedirect_5__9,
          0);
        v2->fields._www_5__10 = v154;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._www_5__10, (int32_t)v154, v155, v156);
        v157 = v2->fields.work;
        if ( v157
          && (v158 = TopGameDataRequest_TypeInfo->_2.naturalAligment,
              v157->klass->_2.naturalAligment >= (unsigned int)v158) )
        {
          if ( (TopGameDataRequest_c *)v157->klass->_2.typeHierarchy[v158 - 1] == TopGameDataRequest_TypeInfo )
            v159 = v2->fields.work;
          else
            v159 = 0;
        }
        else
        {
          v159 = 0;
        }
        v241 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v241 = ManagerConfig_TypeInfo;
        }
        v242 = 44;
        if ( !v159 )
          v242 = 40;
        v2->fields._timeout_5__11 = *(float *)((char *)&v241->static_fields->AppVer + v242);
        unscaledTime = UnityEngine_Time__get_unscaledTime(0);
        timeout_5__11 = v2->fields._timeout_5__11;
        v2->fields._loadProgress_5__13 = 0.0;
        v2->fields._requestTime_5__12 = unscaledTime + timeout_5__11;
        v245 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v245, 0);
        v2->fields._wait_5__14 = v245;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._wait_5__14, (int32_t)v245, v246, v247);
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
          this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
                                                         this,
                                                         this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
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
            v64 = UnityEngine_Time__get_unscaledTime(0);
            if ( progress_k__BackingField != loadProgress_5__13 )
            {
              v208 = v2->fields._www_5__10;
              v2->fields._requestTime_5__12 = v64 + v2->fields._timeout_5__11;
              if ( !v208 )
                goto LABEL_548;
              v2->fields._loadProgress_5__13 = v208->fields._progress_k__BackingField;
LABEL_330:
              wait_5__14 = (Il2CppObject *)v2->fields._wait_5__14;
              v2->fields.__2__current = wait_5__14;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C36FFC(p__2__current, (int32_t)wait_5__14, v62, v63);
              v32 = 4;
              goto LABEL_331;
            }
            if ( v64 < v2->fields._requestTime_5__12 )
              goto LABEL_330;
          }
        }
        v16 = *p_www_5__10;
        if ( !*p_www_5__10 )
          goto LABEL_548;
        if ( !v16->fields._isDone_k__BackingField )
        {
          this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
          if ( !this )
            goto LABEL_548;
          this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
                                                         this,
                                                         this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_123;
          if ( !_4__this )
            goto LABEL_548;
          v67 = _4__this->fields.communicationWaitList;
          if ( !v67 )
            goto LABEL_548;
          if ( v67->fields._size >= 1 )
          {
            v68 = StringLiteral_17003/*"background cancel"*/;
            v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_17003/*"background cancel"*/;
            sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, v68, v65, v66);
            v71 = &StringLiteral_23698/*"stay"*/;
          }
          else
          {
LABEL_123:
            v84 = StringLiteral_18217/*"connect time over"*/;
            v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_18217/*"connect time over"*/;
            sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, v84, v65, v66);
            v71 = &StringLiteral_23088/*"retry"*/;
          }
          v85 = *v71;
          v2->fields._errorAction_5__5 = (struct System_String_o *)*v71;
          p_errorAction_5__5 = (CGThumbnailListItem_o *)&v2->fields._errorAction_5__5;
          goto LABEL_125;
        }
        this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(v16->fields._error_k__BackingField, 0);
        v19 = *p_www_5__10;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v19 )
            goto LABEL_548;
          if ( v2->fields._isNoRedirect_5__9 )
          {
            DelightWorks_Network_UnityWebRequestWWW__Dispose(*p_www_5__10, 0);
          }
          else
          {
            text = DelightWorks_Network_UnityWebRequestWWW__get_text(*p_www_5__10, 0);
            v2->fields._data_5__2 = text;
            sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._data_5__2, (int32_t)text, v211, v212);
            this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
            }
            if ( !this[1].fields.work[3].fields.CallBack )
            {
              v213 = v2->fields.work;
              if ( v213 )
              {
                v214 = TopLoginRequest_TypeInfo->_2.naturalAligment;
                if ( v213->klass->_2.naturalAligment >= (unsigned int)v214
                  && (TopLoginRequest_c *)v213->klass->_2.typeHierarchy[v214 - 1] == TopLoginRequest_TypeInfo )
                {
                  if ( !*p_www_5__10 )
                    goto LABEL_548;
                  this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                  if ( !this )
                    goto LABEL_548;
                  this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                 (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
                  if ( (int)this >= 1 )
                  {
                    if ( !*p_www_5__10 )
                      goto LABEL_548;
                    this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                    if ( !this )
                      goto LABEL_548;
                    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
                      &v369,
                      (System_Collections_Generic_Dictionary_object__object__o *)this,
                      (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
                    v371 = v369;
                    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                              &v371,
                              (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
                      ;
                    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                      &v371,
                      (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
                    if ( !*p_www_5__10 )
                      goto LABEL_548;
                    this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                    if ( !this )
                      goto LABEL_548;
                    this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                   (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                   (Il2CppObject *)StringLiteral_12015/*"SET-COOKIE"*/,
                                                                   (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      if ( !*p_www_5__10 )
                        goto LABEL_548;
                      this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                      if ( !this )
                        goto LABEL_548;
                      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                               (Il2CppObject *)StringLiteral_12015/*"SET-COOKIE"*/,
                               (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
                      this = (NetworkManager__RequestCR_d__214_o *)sub_1C37100(char___TypeInfo, 2);
                      if ( !this )
                        goto LABEL_548;
                      _2__current = (int)this->fields.__2__current;
                      if ( !_2__current )
                        goto LABEL_550;
                      LOWORD(this->fields.work) = 32;
                      if ( _2__current == 1 )
                        goto LABEL_550;
                      WORD1(this->fields.work) = 59;
                      if ( !Item )
                        goto LABEL_548;
                      v217 = System_String__Split_63610848((System_String_o *)Item, (System_Char_array *)this, 1, 0);
                      v220 = NetworkManager_TypeInfo;
                      v221 = v217;
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v220 = NetworkManager_TypeInfo;
                      }
                      v222 = v220->static_fields;
                      v223 = StringLiteral_1/*""*/;
                      v222->sessionId = (struct System_String_o *)StringLiteral_1/*""*/;
                      sub_1C36FFC((CGThumbnailListItem_o *)&v222->sessionId, v223, v218, v219);
                      if ( !v221 )
                        goto LABEL_548;
                      max_length = v221->max_length;
                      if ( max_length >= 1 )
                      {
                        v225 = 0;
                        while ( v225 < max_length )
                        {
                          v226 = &v221->obj.klass + (int)v225;
                          v227 = (System_String_o *)v226[4];
                          if ( !v227 )
                            goto LABEL_548;
                          this = (NetworkManager__RequestCR_d__214_o *)System_String__StartsWith(
                                                                         (System_String_o *)v226[4],
                                                                         (System_String_o *)StringLiteral_22656/*"path="*/,
                                                                         0);
                          if ( ((unsigned __int8)this & 1) == 0 )
                          {
                            v228 = NetworkManager_TypeInfo;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              v228 = NetworkManager_TypeInfo;
                            }
                            v229 = System_String__Concat_63599904(
                                     v228->static_fields->sessionId,
                                     v227,
                                     (System_String_o *)StringLiteral_1492/*";"*/,
                                     0);
                            v230 = NetworkManager_TypeInfo->static_fields;
                            v230->sessionId = v229;
                            sub_1C36FFC((CGThumbnailListItem_o *)&v230->sessionId, (int32_t)v229, v231, v232);
                            max_length = v221->max_length;
                            if ( (int)++v225 < max_length )
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
        if ( !v19 )
          goto LABEL_548;
        error_k__BackingField = v19->fields._error_k__BackingField;
        v2->fields._errorCode_5__3 = error_k__BackingField;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, (int32_t)error_k__BackingField, v17, v18);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        v75 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v75 = NetworkManager_TypeInfo;
        }
        if ( v75->static_fields->userIdNumber >= 1 )
        {
          if ( !v75->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v75);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          v76 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v76 = NetworkManager_TypeInfo;
          }
          if ( v76->static_fields->userIdNumber % 10 == 1 )
          {
            this = (NetworkManager__RequestCR_d__214_o *)*p_www_5__10;
            if ( !*p_www_5__10 )
              goto LABEL_548;
            DelightWorks_Network_UnityWebRequestWWW__ExceptionLog((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0);
          }
        }
        v77 = StringLiteral_23088/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_23088/*"retry"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v77, v73, v74);
        v78 = v2->fields._www_5__10;
        if ( !v78 )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)v78->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                       (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
        if ( (int)this < 1 )
          goto LABEL_126;
        if ( !*p_www_5__10 )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                       (Il2CppObject *)StringLiteral_12351/*"STATUS"*/,
                                                       (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_126;
        if ( !*p_www_5__10 )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_548;
        v79 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)this,
                (Il2CppObject *)StringLiteral_12351/*"STATUS"*/,
                (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        this = (NetworkManager__RequestCR_d__214_o *)sub_1C37100(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_548;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_550;
        LOWORD(this->fields.work) = 32;
        if ( !v79 )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)System_String__Split_63610848(
                                                       (System_String_o *)v79,
                                                       (System_Char_array *)this,
                                                       1,
                                                       0);
        if ( !this )
          goto LABEL_548;
        v80 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_126;
        this = (NetworkManager__RequestCR_d__214_o *)this->fields.work;
        if ( !this )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)System_String__StartsWith(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_7261/*"HTTP"*/,
                                                       0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_126;
        if ( LODWORD(v80->fields.__2__current) <= 1 )
          goto LABEL_550;
        v81 = (System_String_o *)v80->fields.__4__this;
        v82 = PrivateImplementationDetails___ComputeStringHash(v81, 0);
        if ( v82 > 0x434FEE0C )
        {
          if ( v82 <= 0xAA3008DB )
          {
            if ( v82 == -1456470200 )
            {
              if ( !System_String__op_Equality(v81, (System_String_o *)StringLiteral_1409/*"401"*/, 0) )
                goto LABEL_541;
              v358 = &StringLiteral_9254/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/;
            }
            else
            {
              if ( v82 != -1439692581 || !System_String__op_Equality(v81, (System_String_o *)StringLiteral_1407/*"400"*/, 0) )
                goto LABEL_541;
              v358 = &StringLiteral_9259/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/;
            }
            v365 = *v358;
            v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v358;
            p_errorLocalizeCode_5__4 = &v2->fields._errorLocalizeCode_5__4;
            sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, v365, v69, v70);
            v85 = StringLiteral_19883/*"goto_title"*/;
LABEL_543:
            p_errorAction_5__5 = (CGThumbnailListItem_o *)&v2->fields._errorAction_5__5;
            p_errorLocalizeCode_5__4[1] = (struct System_String_o *)v85;
            goto LABEL_125;
          }
          if ( v82 == -1422914962 )
          {
            this = (NetworkManager__RequestCR_d__214_o *)System_String__op_Equality(
                                                           v81,
                                                           (System_String_o *)StringLiteral_1411/*"403"*/,
                                                           0);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_126;
            goto LABEL_541;
          }
          if ( v82 == -1372582105 )
          {
            if ( System_String__op_Equality(v81, (System_String_o *)StringLiteral_1413/*"404"*/, 0) )
            {
              v367 = &StringLiteral_9258/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/;
              goto LABEL_542;
            }
            goto LABEL_541;
          }
          if ( v82 != -1008248995 )
            goto LABEL_541;
          v360 = &StringLiteral_1368/*"200"*/;
        }
        else
        {
          if ( v82 <= 0x2D98A5D6 )
          {
            if ( v82 == 731423408 )
            {
              v83 = &StringLiteral_1421/*"500"*/;
              goto LABEL_540;
            }
            if ( v82 == 764978646 )
            {
              v83 = &StringLiteral_1423/*"502"*/;
LABEL_540:
              System_String__op_Equality(v81, (System_String_o *)*v83, 0);
            }
LABEL_541:
            v367 = &StringLiteral_9255/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
LABEL_542:
            v368 = *v367;
            v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v367;
            p_errorLocalizeCode_5__4 = &v2->fields._errorLocalizeCode_5__4;
            sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, v368, v69, v70);
            v85 = StringLiteral_23088/*"retry"*/;
            goto LABEL_543;
          }
          if ( v82 == 781756265 )
          {
            v83 = &StringLiteral_1425/*"503"*/;
            goto LABEL_540;
          }
          if ( v82 != 1129311756 )
            goto LABEL_541;
          v360 = &StringLiteral_1382/*"302"*/;
        }
        if ( System_String__op_Equality(v81, (System_String_o *)*v360, 0) )
        {
          p_errorAction_5__5 = (CGThumbnailListItem_o *)&v2->fields._errorCode_5__3;
          LODWORD(v85) = 0;
          v2->fields._errorCode_5__3 = 0;
LABEL_125:
          sub_1C36FFC(p_errorAction_5__5, v85, v69, v70);
LABEL_126:
          if ( !*p_www_5__10 )
            goto LABEL_548;
          responseHeaders_k__BackingField = (System_Collections_Generic_Dictionary_object__object__o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
          if ( responseHeaders_k__BackingField )
          {
            this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                           responseHeaders_k__BackingField,
                                                           (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
            if ( (int)this >= 1 )
            {
              if ( !*p_www_5__10 )
                goto LABEL_548;
              this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
              if ( !this )
                goto LABEL_548;
              this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             (Il2CppObject *)StringLiteral_15699/*"X-SERVER-TIME"*/,
                                                             (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !*p_www_5__10 )
                  goto LABEL_548;
                this = (NetworkManager__RequestCR_d__214_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                if ( !this )
                  goto LABEL_548;
                this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                               (Il2CppObject *)StringLiteral_15699/*"X-SERVER-TIME"*/,
                                                               (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
                if ( !this )
                  goto LABEL_548;
                v88 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                                           this,
                                           this->klass->vtable._3_ToString.method);
                v89 = System_Int64__Parse(v88, 0);
                v90 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v90 = NetworkManager_TypeInfo;
                }
                v91 = v90->static_fields;
                v91->serverTime = v89;
                startTime_5__8 = v2->fields._startTime_5__8;
                v91->nowTime = -1;
                v91->serverOffsetTime = v89 - startTime_5__8;
              }
            }
          }
          this = (NetworkManager__RequestCR_d__214_o *)*p_www_5__10;
          if ( !*p_www_5__10 )
            goto LABEL_548;
          DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0);
          v2->fields._www_5__10 = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._www_5__10, 0, v93, v94);
          v2->fields._wait_5__14 = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._wait_5__14, 0, v95, v96);
          goto LABEL_140;
        }
        goto LABEL_541;
      }
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        static_fields = ManagerConfig_TypeInfo->static_fields;
      }
      if ( static_fields->IsNetworkMock )
      {
        this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
        if ( !this )
          goto LABEL_548;
        v41 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                this,
                this->klass->vtable._6_MoveNext.method);
        if ( v41 )
        {
          v42 = (System_String_o *)v41;
          v43 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1C372A4(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
          DelightWorks_Network_UnityWebRequestWWW___ctor(v43, v42, 0);
          v2->fields._www_5__10 = v43;
          sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._www_5__10, (int32_t)v43, v44, v45);
          v46 = (Il2CppObject *)v2->fields._www_5__10;
          v2->fields.__2__current = v46;
          p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C36FFC(p__2__current, (int32_t)v46, v47, v48);
          v32 = 3;
LABEL_331:
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v32;
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
        v50 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                this,
                this->klass->vtable._5_System_IDisposable_Dispose.method);
        *p_data_5__2 = (System_String_o *)v50;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._data_5__2, v50, v51, v52);
        if ( System_String__op_Equality(*p_data_5__2, (System_String_o *)StringLiteral_1/*""*/, 0) )
        {
          this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
          if ( !this )
            goto LABEL_548;
          this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
                                                         this,
                                                         this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
            if ( !this )
              goto LABEL_548;
            this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, void *))this->klass[1]._1.image)(
                                                           this,
                                                           this->klass[1]._1.gc_desc);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__214_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !this )
                goto LABEL_548;
              CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
            }
          }
          if ( _4__this )
          {
            NetworkManager__OnEndCommunication(_4__this, v2->fields.work, 0, v53);
            return 0;
          }
          goto LABEL_548;
        }
      }
LABEL_140:
      p_errorCode_5__3 = &v2->fields._errorCode_5__3;
      if ( v2->fields._errorCode_5__3 )
        goto LABEL_147;
      if ( System_String__IsNullOrEmpty(v2->fields._data_5__2, 0) )
      {
        v100 = StringLiteral_22271/*"none data"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_22271/*"none data"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, v100, v98, v99);
        v101 = StringLiteral_9257/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9257/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, v101, v102, v103);
        v104 = StringLiteral_19883/*"goto_title"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_19883/*"goto_title"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v104, v105, v106);
        if ( v2->fields._isNoRedirect_5__9 )
        {
          v109 = (CGThumbnailListItem_o *)&v2->fields._errorCode_5__3;
          v110 = 0;
          *p_errorCode_5__3 = 0;
LABEL_146:
          sub_1C36FFC(v109, v110, v107, v108);
        }
LABEL_147:
        v117 = 0;
        goto LABEL_148;
      }
      if ( System_String__op_Equality(v2->fields._data_5__2, (System_String_o *)StringLiteral_7729/*"Internal Server Error"*/, 0) )
      {
        v113 = StringLiteral_20832/*"internal server error"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_20832/*"internal server error"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, v113, v111, v112);
        v114 = StringLiteral_9255/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9255/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, v114, v115, v116);
        v110 = StringLiteral_23088/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_23088/*"retry"*/;
        v109 = (CGThumbnailListItem_o *)&v2->fields._errorAction_5__5;
        goto LABEL_146;
      }
      data_5__2 = v2->fields._data_5__2;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      this = (NetworkManager__RequestCR_d__214_o *)JsonManager__getDictionary(data_5__2, 0);
      if ( !this )
        goto LABEL_548;
      v131 = this;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_23067/*"response"*/,
              (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v193 = StringLiteral_22272/*"none response data"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_22272/*"none response data"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, v193, v132, v133);
        v194 = StringLiteral_9255/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9255/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, v194, v195, v196);
        v197 = StringLiteral_23088/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_23088/*"retry"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v197, v198, v199);
LABEL_312:
        v117 = 0;
        goto LABEL_313;
      }
      v134 = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v131,
               (Il2CppObject *)StringLiteral_23067/*"response"*/,
               (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v135 = JsonManager__DeserializeArray_object_(
               v134,
               (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_ResponseData___);
      v2->fields._responseList_5__7 = (struct ResponseData_array *)v135;
      p_responseList_5__7 = &v2->fields._responseList_5__7;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._responseList_5__7, (int32_t)v135, v137, v138);
      responseList_5__7 = v2->fields._responseList_5__7;
      if ( !responseList_5__7 )
        goto LABEL_548;
      v140 = 0;
      while ( 1 )
      {
        v141 = responseList_5__7->max_length;
        if ( (int)v140 >= v141 )
          goto LABEL_312;
        if ( (unsigned int)v140 >= v141 )
          goto LABEL_550;
        v142 = &responseList_5__7->obj.klass + v140;
        v143 = (ResponseData_o *)v142[4];
        if ( !v143 )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)ResponseData__checkError_44242528((ResponseData_o *)v142[4], 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        responseList_5__7 = *p_responseList_5__7;
        ++v140;
        if ( !*p_responseList_5__7 )
          goto LABEL_548;
      }
      this = (NetworkManager__RequestCR_d__214_o *)sub_1C37100(string___TypeInfo, 5);
      if ( !this )
        goto LABEL_548;
      v250 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_550;
      v251 = StringLiteral_23068/*"response error "*/;
      this->fields.work = (struct RequestBase_o *)StringLiteral_23068/*"response error "*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.work, v251, v248, v249);
      if ( LODWORD(v250->fields.__2__current) <= 1 )
        goto LABEL_550;
      nid = (struct NetworkManager_o *)v143->fields.nid;
      v250->fields.__4__this = nid;
      sub_1C36FFC((CGThumbnailListItem_o *)&v250->fields.__4__this, (int32_t)nid, v252, v253);
      if ( LODWORD(v250->fields.__2__current) <= 2
        || (v257 = StringLiteral_129/*" ("*/,
            *(_QWORD *)&v250->fields.delay = StringLiteral_129/*" ("*/,
            sub_1C36FFC((CGThumbnailListItem_o *)&v250->fields.delay, v257, v255, v256),
            LODWORD(v250->fields.__2__current) <= 3)
        || (resCode = v143->fields.resCode,
            v250->fields._data_5__2 = resCode,
            sub_1C36FFC((CGThumbnailListItem_o *)&v250->fields._data_5__2, (int32_t)resCode, v258, v259),
            LODWORD(v250->fields.__2__current) <= 4) )
      {
LABEL_550:
        sub_1C372BC(this);
      }
      v263 = StringLiteral_759/*")"*/;
      v250->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_759/*")"*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&v250->fields._errorCode_5__3, v263, v261, v262);
      v264 = System_String__Concat_63602172((System_String_array *)v250, 0);
      v2->fields._errorCode_5__3 = v264;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, (int32_t)v264, v265, v266);
      v267 = (ResponseFailData_o *)sub_1C372A4(ResponseFailData_TypeInfo);
      ResponseFailData___ctor(v267, v143, 0);
      v2->fields._failData_5__6 = v267;
      p_failData_5__6 = &v2->fields._failData_5__6;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._failData_5__6, (int32_t)v267, v269, v270);
      if ( !v2->fields._failData_5__6 )
        goto LABEL_548;
      this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(
                                                     v2->fields._failData_5__6->fields.action,
                                                     0);
      p_action = &StringLiteral_23088/*"retry"*/;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !*p_failData_5__6 )
          goto LABEL_548;
        p_action = (__int64 *)&(*p_failData_5__6)->fields.action;
      }
      v274 = *p_action;
      v2->fields._errorAction_5__5 = (struct System_String_o *)*p_action;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v274, v271, v272);
      v275 = v2->fields.work;
      if ( !v275 )
        goto LABEL_312;
      v276 = PurchaseByBank_UnityIap_Request_TypeInfo;
      v277 = PurchaseByBank_UnityIap_Request_TypeInfo->_2.naturalAligment;
      if ( v275->klass->_2.naturalAligment < (unsigned int)v277
        || (PurchaseByBank_UnityIap_Request_c *)v275->klass->_2.typeHierarchy[v277 - 1] != PurchaseByBank_UnityIap_Request_TypeInfo )
      {
        v117 = 0;
        goto LABEL_405;
      }
      if ( !*p_failData_5__6 )
        goto LABEL_548;
      v359 = System_String__op_Equality((*p_failData_5__6)->fields.action, (System_String_o *)StringLiteral_23088/*"retry"*/, 0);
      v275 = v2->fields.work;
      v117 = v359;
      if ( v275 )
      {
        v276 = PurchaseByBank_UnityIap_Request_TypeInfo;
LABEL_405:
        klass = v275->klass;
        v279 = v276->_2.naturalAligment;
        if ( klass->_2.naturalAligment >= (unsigned int)v279
          && (PurchaseByBank_UnityIap_Request_c *)klass->_2.typeHierarchy[v279 - 1] == v276 )
        {
          v280 = *p_responseList_5__7;
          if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
          v281 = ResponseCommandKind__SearchData(11, v280, 0);
          if ( v281 )
          {
            fail = (System_Collections_Generic_Dictionary_object__object__o *)v281->fields.fail;
            if ( fail )
            {
              if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
                     fail,
                     (Il2CppObject *)StringLiteral_23076/*"result"*/,
                     &value,
                     (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
              {
                this = (NetworkManager__RequestCR_d__214_o *)value;
                if ( !value )
                  goto LABEL_548;
                v283 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                            value,
                                            value->klass->vtable[3].method);
                if ( System_String__op_Equality(v283, (System_String_o *)StringLiteral_22673/*"pending_purchase_error"*/, 0)
                  || System_String__op_Equality(v283, (System_String_o *)StringLiteral_17728/*"canceled_purchase_error"*/, 0) )
                {
                  v286 = StringLiteral_23709/*"stay_no_dialog"*/;
                  v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_23709/*"stay_no_dialog"*/;
                  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v286, v284, v285);
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
                                                     (System_Collections_Generic_Dictionary_object__object__o *)v131,
                                                     (Il2CppObject *)StringLiteral_17690/*"cache"*/,
                                                     (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v201 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        this = (NetworkManager__RequestCR_d__214_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)v131,
                                                       (Il2CppObject *)StringLiteral_17690/*"cache"*/,
                                                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v201 )
          goto LABEL_548;
        DataManager__updateJsonData((DataManager_o *)v201, (Il2CppObject *)this, 0);
      }
      v202 = v2->fields._responseList_5__7;
      if ( !v202 )
        goto LABEL_548;
      v203 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(v202->max_length);
        if ( (__int64)v203 >= (int)max_length_low )
          goto LABEL_148;
        if ( v203 >= max_length_low )
          goto LABEL_550;
        v205 = v202->m_Items[v203];
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (NetworkManager__RequestCR_d__214_o *)NetworkManager__ExecuteCommand(v205, v200);
        if ( (_DWORD)this )
          break;
        v202 = v2->fields._responseList_5__7;
        ++v203;
        if ( !v202 )
          goto LABEL_548;
      }
      if ( !v205 )
        goto LABEL_548;
      v321 = System_String__Concat_63561656((System_String_o *)StringLiteral_23069/*"response execute error "*/, v205->fields.nid, 0);
      v2->fields._errorCode_5__3 = v321;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, (int32_t)v321, v322, v323);
      v324 = (ResponseFailData_o *)sub_1C372A4(ResponseFailData_TypeInfo);
      ResponseFailData___ctor(v324, v205, 0);
      v2->fields._failData_5__6 = v324;
      v325 = &v2->fields._failData_5__6;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._failData_5__6, (int32_t)v324, v326, v327);
      if ( !v2->fields._failData_5__6 )
LABEL_548:
        sub_1C372B4(this);
      this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(
                                                     v2->fields._failData_5__6->fields.action,
                                                     0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v330 = &StringLiteral_23088/*"retry"*/;
      }
      else
      {
        if ( !*v325 )
          goto LABEL_548;
        v330 = (__int64 *)&(*v325)->fields.action;
      }
      v332 = *v330;
      v2->fields._errorAction_5__5 = (struct System_String_o *)*v330;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, v332, v328, v329);
LABEL_148:
      this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
      if ( !this )
        goto LABEL_548;
      this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
                                                     this,
                                                     this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
        if ( !this )
          goto LABEL_548;
        this = (NetworkManager__RequestCR_d__214_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, void *))this->klass[1]._1.image)(
                                                       this,
                                                       this->klass[1]._1.gc_desc);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (NetworkManager__RequestCR_d__214_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_548;
          CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
        }
      }
      if ( !*p_errorCode_5__3 )
      {
        if ( !_4__this )
          goto LABEL_548;
        NetworkManager__OnEndCommunication(_4__this, v2->fields.work, v2->fields._responseList_5__7, v119);
        goto LABEL_493;
      }
      v120 = v2->fields._responseList_5__7;
      if ( !_4__this )
        goto LABEL_548;
      _4__this->fields.communicationWorkResponseList = v120;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.communicationWorkResponseList, (int32_t)v120, v118, v119);
      v2->fields._responseList_5__7 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._responseList_5__7, 0, v121, v122);
      v123 = &v2->fields._errorLocalizeCode_5__4;
      errorLocalizeCode_5__4 = v2->fields._errorLocalizeCode_5__4;
      if ( !errorLocalizeCode_5__4 )
      {
        errorAction_5__5 = v2->fields._errorAction_5__5;
        if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23698/*"stay"*/, 0)
          || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23709/*"stay_no_dialog"*/, 0) )
        {
          v129 = (System_String_o **)&StringLiteral_9256/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/;
        }
        else
        {
          if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23088/*"retry"*/, 0)
            || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23027/*"reload_cache"*/, 0) )
          {
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            if ( !byte_4C41F40 )
            {
              sub_1C37058(&ManagementManager_TypeInfo);
              byte_4C41F40 = 1;
            }
            v160 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v160 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v160->static_fields->isDuringStartup;
            v162 = &StringLiteral_9260/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/;
            v163 = &StringLiteral_9246/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/;
          }
          else
          {
            if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_19882/*"goto_login_access"*/, 0)
              || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23010/*"refresh_terminal"*/, 0) )
            {
LABEL_223:
              errorLocalizeCode_5__4 = *v123;
              title = (System_String_o *)StringLiteral_1/*""*/;
              detail = (System_String_o *)StringLiteral_1/*""*/;
              if ( !errorLocalizeCode_5__4 )
                goto LABEL_227;
              goto LABEL_224;
            }
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            if ( !byte_4C41F40 )
            {
              sub_1C37058(&ManagementManager_TypeInfo);
              byte_4C41F40 = 1;
            }
            v331 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v331 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v331->static_fields->isDuringStartup;
            v162 = &StringLiteral_9257/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
            v163 = (__int64 *)&StringLiteral_9243/*"NETWORK_ERROR_BOOT_MESSAGE"*/;
          }
          if ( isDuringStartup )
            v129 = (System_String_o **)v163;
          else
            v129 = (System_String_o **)v162;
        }
        v164 = *v129;
        *v123 = *v129;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, (int32_t)v164, v127, v128);
        goto LABEL_223;
      }
      title = (System_String_o *)StringLiteral_1/*""*/;
LABEL_224:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      detail = LocalizationManager__Get(errorLocalizeCode_5__4, 0);
LABEL_227:
      failData_5__6 = v2->fields._failData_5__6;
      if ( failData_5__6 )
      {
        this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(failData_5__6->fields.title, 0);
        v167 = v2->fields._failData_5__6;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v167 )
            goto LABEL_548;
        }
        else
        {
          if ( !v167 )
            goto LABEL_548;
          title = v167->fields.title;
        }
        this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(v167->fields.detail, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v169 = v2->fields._failData_5__6;
          if ( !v169 )
            goto LABEL_548;
          detail = v169->fields.detail;
        }
        this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(detail, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v170 = v2->fields._failData_5__6;
          if ( !v170 )
            goto LABEL_548;
          if ( v170->fields.csId )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__214_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9247/*"NETWORK_ERROR_CSID_CODE"*/,
                                                           0);
            v171 = v2->fields._failData_5__6;
            if ( !v171 )
              goto LABEL_548;
            v172 = System_String__Format((System_String_o *)this, (Il2CppObject *)v171->fields.csId, 0);
            this = (NetworkManager__RequestCR_d__214_o *)System_String__Concat_63599904(
                                                           detail,
                                                           (System_String_o *)StringLiteral_43/*"\n"*/,
                                                           v172,
                                                           0);
            detail = (System_String_o *)this;
          }
        }
        v173 = v2->fields._failData_5__6;
        if ( !v173 )
          goto LABEL_548;
        url = v173->fields.url;
      }
      else
      {
        url = 0;
      }
      this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
      if ( !this )
        goto LABEL_548;
      if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
              this,
              this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)
          & 1) == 0
        || (v174 = v2->fields._errorAction_5__5,
            !System_String__op_Equality(v174, (System_String_o *)StringLiteral_23698/*"stay"*/, 0))
        && !System_String__op_Equality(v174, (System_String_o *)StringLiteral_23709/*"stay_no_dialog"*/, 0)
        && !System_String__op_Equality(v174, (System_String_o *)StringLiteral_23088/*"retry"*/, 0)
        && !System_String__op_Equality(v174, (System_String_o *)StringLiteral_23027/*"reload_cache"*/, 0)
        || (v176 = NetworkManager__OnBackgroundErrorCommunication(
                     _4__this,
                     _4__this->fields.communicationWork,
                     *p_errorCode_5__3,
                     0,
                     v175),
            result = 0,
            !v176) )
      {
        v178 = v2->fields._errorAction_5__5;
        v179 = PrivateImplementationDetails___ComputeStringHash(v178, 0);
        if ( v179 <= 0xA56F89EB )
        {
          if ( v179 <= 0x43CDBBC3 )
          {
            if ( v179 != 1019014393 )
            {
              if ( v179 != 1062826843 )
              {
                if ( v179 != 1137556419 || !System_String__op_Equality(v178, (System_String_o *)StringLiteral_23709/*"stay_no_dialog"*/, 0) )
                  goto LABEL_460;
LABEL_459:
                NetworkManager__OnEndCommunication(
                  _4__this,
                  _4__this->fields.communicationWork,
                  _4__this->fields.communicationWorkResponseList,
                  v180);
                goto LABEL_485;
              }
              if ( System_String__op_Equality(v178, (System_String_o *)StringLiteral_19883/*"goto_title"*/, 0) )
              {
                v233 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v233 = NetworkManager_TypeInfo;
                }
                v233->static_fields->isRebootBlock = 1;
                v234 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                System_Action___ctor(v234, (Il2CppObject *)_4__this, Method_NetworkManager_OnClickErrorReboot__, 0);
                NetworkManager__ErrorDialog(_4__this, title, detail, url, v234, v235);
                goto LABEL_485;
              }
              goto LABEL_460;
            }
            this = (NetworkManager__RequestCR_d__214_o *)System_String__op_Equality(
                                                           v178,
                                                           (System_String_o *)StringLiteral_23027/*"reload_cache"*/,
                                                           0);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_460;
            v236 = v2->fields._failData_5__6;
            if ( !v236 )
              goto LABEL_548;
            errorType = v236->fields.errorType;
            v237 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            v238 = &Method_NetworkManager_OnClickReloadCache__;
LABEL_484:
            v335 = v237;
            System_Action___ctor(v237, (Il2CppObject *)_4__this, *v238, 0);
            NetworkManager__WarningDialog(_4__this, title, detail, url, errorType, v335, v336);
            goto LABEL_485;
          }
          if ( v179 <= 0x9918C6CA )
          {
            if ( v179 == -1726429494 )
            {
              if ( System_String__op_Equality(v178, (System_String_o *)StringLiteral_20873/*"invalid_user"*/, 0) )
              {
                v287 = TitleRootComponent_TypeInfo;
                if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
                  v287 = TitleRootComponent_TypeInfo;
                }
                if ( v287->static_fields->shouldFadeInOnError )
                {
                  v288 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v289 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v289 = AvalonSceneManager_TypeInfo;
                  }
                  this = (NetworkManager__RequestCR_d__214_o *)NetworkManager___c_TypeInfo;
                  DEFAULT_FADE_TIME = v289->static_fields->DEFAULT_FADE_TIME;
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
                    v292 = (Il2CppObject *)this[1].fields.work->klass;
                    monitor = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                    System_Action___ctor(monitor, v292, Method_NetworkManager___c__RequestCR_b__214_1__, 0);
                    v293 = NetworkManager___c_TypeInfo->static_fields;
                    v293->__9__214_1 = monitor;
                    sub_1C36FFC((CGThumbnailListItem_o *)&v293->__9__214_1, (int32_t)monitor, v294, v295);
                  }
                  if ( !v288 )
                    goto LABEL_548;
                  CommonUI__maskFadein((CommonUI_o *)v288, DEFAULT_FADE_TIME, monitor, 0);
                }
                v296 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v297 = LocalizationManager__Get((System_String_o *)StringLiteral_9262/*"NETWORK_USER_DELETE_DECIDE"*/, 0);
                v298 = LocalizationManager__Get((System_String_o *)StringLiteral_9261/*"NETWORK_USER_DELETE_CANCEL"*/, 0);
                v299 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
                CommonConfirmDialog_ClickDelegate___ctor(
                  v299,
                  (Il2CppObject *)_4__this,
                  Method_NetworkManager_OnClickUserDelete__,
                  0);
                if ( !v296 )
                  goto LABEL_548;
                CommonUI__OpenConfirmDialog_31207876((CommonUI_o *)v296, title, detail, v297, v298, v299, 0, 0, 0, 0);
                goto LABEL_485;
              }
              goto LABEL_460;
            }
            if ( v179 != 2106643173 || !System_String__op_Equality(v178, (System_String_o *)StringLiteral_23010/*"refresh_terminal"*/, 0) )
              goto LABEL_460;
            if ( !BattleData_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
            BattleData__deleteSaveData(0);
            BattleData__setReserveResumeBattle(0, 0, 0, 0);
            this = (NetworkManager__RequestCR_d__214_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
            if ( !this )
              goto LABEL_548;
            ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)this, 0);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C3FFC5 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              byte_4C3FFC5 = 1;
            }
            v185 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v185 = TerminalPramsManager_TypeInfo;
            }
            v185->static_fields->_IsErrorDialogReturnTerminal_k__BackingField = 1;
            this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(detail, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(url, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                NetworkManager__OnClickRefreshTerminal(_4__this, v186);
                goto LABEL_485;
              }
            }
            v334 = v2->fields._failData_5__6;
            if ( !v334 )
              goto LABEL_548;
            errorType = v334->fields.errorType;
            v237 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            v238 = &Method_NetworkManager_OnClickRefreshTerminal__;
            goto LABEL_484;
          }
          if ( v179 != -1577396083 )
          {
            if ( v179 != -1519416853 || !System_String__op_Equality(v178, (System_String_o *)StringLiteral_19882/*"goto_login_access"*/, 0) )
              goto LABEL_460;
            v190 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v190 = NetworkManager_TypeInfo;
            }
            v190->static_fields->isRebootBlock = 1;
            this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(detail, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__214_o *)System_String__IsNullOrEmpty(url, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                NetworkManager__OnClickErrorTerminal((NetworkManager_o *)this, v191);
                goto LABEL_485;
              }
            }
            v333 = v2->fields._failData_5__6;
            if ( !v333 )
              goto LABEL_548;
            errorType = v333->fields.errorType;
            v237 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            v238 = &Method_NetworkManager_OnClickErrorTerminal__;
            goto LABEL_484;
          }
          if ( !System_String__op_Equality(v178, (System_String_o *)StringLiteral_18660/*"do_signup"*/, 0) )
            goto LABEL_460;
          v317 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          NetworkManager__DeleteSignupData((const MethodInfo *)v317);
LABEL_453:
          v318 = v2->fields._failData_5__6;
          if ( !v318 )
            goto LABEL_548;
          errorType = v318->fields.errorType;
          v237 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          v238 = &Method_NetworkManager_OnClickErrorStay__;
          goto LABEL_484;
        }
        if ( v179 > 0xCC10A7C9 )
        {
          if ( v179 <= 0xDA79AAB9 )
          {
            if ( v179 == -809642680 )
            {
              this = (NetworkManager__RequestCR_d__214_o *)System_String__op_Equality(
                                                             v178,
                                                             (System_String_o *)StringLiteral_22986/*"reconnection"*/,
                                                             0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v301 = v2->fields._failData_5__6;
                if ( !v301 )
                  goto LABEL_548;
                sandboxDomain = v301->fields.sandboxDomain;
                sandboxSeurity = v301->fields.sandboxSeurity;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                NetworkManager__SetGameServerRedirect(sandboxDomain, sandboxSeurity, v300);
                v306 = v2->fields._failData_5__6;
                if ( !v306 )
                  goto LABEL_548;
                sandboxAssetsDomain = v306->fields.sandboxAssetsDomain;
                if ( !byte_4C42864 )
                {
                  sub_1C37058(&NetworkManager_TypeInfo);
                  byte_4C42864 = 1;
                }
                v308 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v308 = NetworkManager_TypeInfo;
                }
                v309 = v308->static_fields;
                v309->dataServerRedirectAddress = sandboxAssetsDomain;
                sub_1C36FFC(
                  (CGThumbnailListItem_o *)&v309->dataServerRedirectAddress,
                  (int32_t)sandboxAssetsDomain,
                  v304,
                  v305);
                v312 = v2->fields._failData_5__6;
                if ( !v312 )
                  goto LABEL_548;
                sandboxWebviewDomain = v312->fields.sandboxWebviewDomain;
                if ( !byte_4C42865 )
                {
                  sub_1C37058(&NetworkManager_TypeInfo);
                  byte_4C42865 = 1;
                }
                v314 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v314 = NetworkManager_TypeInfo;
                }
                v315 = v314->static_fields;
                v315->webServerRedirectAddress = sandboxWebviewDomain;
                sub_1C36FFC(
                  (CGThumbnailListItem_o *)&v315->webServerRedirectAddress,
                  (int32_t)sandboxWebviewDomain,
                  v310,
                  v311);
                NetworkManager__SetServerSetting_41343040(_4__this, v316);
                goto LABEL_485;
              }
            }
            else if ( v179 == -629560647 && System_String__op_Equality(v178, (System_String_o *)StringLiteral_23088/*"retry"*/, 0) )
            {
              this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
              if ( !this )
                goto LABEL_548;
              if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, Il2CppClass *))this->klass[1]._1.element_class)(
                      this,
                      this->klass[1]._1.castClass)
                  & 1) != 0 )
              {
                if ( NetworkManager__OnErrorCommunication(
                       _4__this,
                       _4__this->fields.communicationWork,
                       *p_errorCode_5__3,
                       v189) )
                {
                  return 0;
                }
              }
              else
              {
                if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                if ( !byte_4C41F40 )
                {
                  sub_1C37058(&ManagementManager_TypeInfo);
                  byte_4C41F40 = 1;
                }
                v354 = ManagementManager_TypeInfo;
                if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                  v354 = ManagementManager_TypeInfo;
                }
                v355 = v354->static_fields->isDuringStartup;
                v356 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( v355 )
                {
                  v357 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v357,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0);
                  if ( !v356 )
                    goto LABEL_548;
                  CommonUI__OpenRetryBootDialog((CommonUI_o *)v356, title, detail, v357, 0, 0);
                }
                else if ( v117 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v361 = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_RETRY"*/, 0);
                  v362 = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
                  v363 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v363,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__,
                    0);
                  if ( !v356 )
                    goto LABEL_548;
                  CommonUI__OpenRetryDialog_31207360((CommonUI_o *)v356, title, detail, v361, v362, v363, 0, 0);
                }
                else
                {
                  v364 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v364,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0);
                  if ( !v356 )
                    goto LABEL_548;
                  CommonUI__OpenRetryDialog((CommonUI_o *)v356, title, detail, v364, 0, 0);
                }
              }
              goto LABEL_485;
            }
            goto LABEL_460;
          }
          if ( v179 == -258062273 )
          {
            if ( System_String__op_Equality(v178, (System_String_o *)StringLiteral_20872/*"invalid_battle"*/, 0) )
            {
              if ( !BattleData_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              BattleData__deleteSaveData(0);
              goto LABEL_459;
            }
LABEL_460:
            v319 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v320 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v320,
              (Il2CppObject *)_4__this,
              Method_NetworkManager_OnClickErrorDialog__,
              0);
            if ( !v319 )
              goto LABEL_548;
            CommonUI__OpenErrorDialog((CommonUI_o *)v319, title, detail, v320, 0, 0);
LABEL_485:
            v2->fields._responseList_5__7 = 0;
            sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._responseList_5__7, 0, v187, v188);
            if ( System_String__op_Equality(v2->fields._errorAction_5__5, (System_String_o *)StringLiteral_22986/*"reconnection"*/, 0) )
            {
LABEL_486:
              v2->fields._data_5__2 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._data_5__2, 0, v5, v6);
              v2->fields._errorCode_5__3 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorCode_5__3, 0, v337, v338);
              v2->fields._errorLocalizeCode_5__4 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorLocalizeCode_5__4, 0, v339, v340);
              v2->fields._errorAction_5__5 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._errorAction_5__5, 0, v341, v342);
              v2->fields._failData_5__6 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._failData_5__6, 0, v343, v344);
              v2->fields._responseList_5__7 = 0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._responseList_5__7, 0, v345, v346);
              this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
              if ( !this )
                goto LABEL_548;
              if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
                      this,
                      this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)
                  & 1) == 0 )
              {
                this = (NetworkManager__RequestCR_d__214_o *)v2->fields.work;
                if ( !this )
                  goto LABEL_548;
                if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__214_o *, void *))this->klass[1]._1.image)(
                        this,
                        this->klass[1]._1.gc_desc)
                    & 1) != 0 )
                {
                  this = (NetworkManager__RequestCR_d__214_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !this )
                    goto LABEL_548;
                  CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
                }
              }
              v347 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v347, 0);
              v2->fields.__2__current = (Il2CppObject *)v347;
              v348 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C36FFC(v348, (int32_t)v347, v349, v350);
              result = 1;
              LODWORD(v348[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
LABEL_493:
            v351 = (CGThumbnailListItem_c *)v2->fields._data_5__2;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C42866 )
            {
              sub_1C37058(&NetworkManager_TypeInfo);
              byte_4C42866 = 1;
            }
            v352 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v352 = NetworkManager_TypeInfo;
            }
            p_errorDialogResponseData = (CGThumbnailListItem_o *)&v352->static_fields->errorDialogResponseData;
            p_errorDialogResponseData->klass = v351;
            sub_1C36FFC(p_errorDialogResponseData, (int32_t)v351, v5, v6);
            return 0;
          }
          if ( v179 != -193734025 || !System_String__op_Equality(v178, (System_String_o *)StringLiteral_18479/*"data_update"*/, 0) )
            goto LABEL_460;
          v192 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v192 = NetworkManager_TypeInfo;
          }
          v192->static_fields->isRebootBlock = 1;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          DataManager__ClearCacheAll(0);
        }
        else
        {
          if ( v179 != -1105950412 )
          {
            if ( v179 != -969204192 )
            {
              if ( v179 != -871323703 || !System_String__op_Equality(v178, (System_String_o *)StringLiteral_16818/*"app_version_up"*/, 0) )
                goto LABEL_460;
              v181 = ManagementManager_TypeInfo;
              if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              ManagementManager__RebootCacheClear((const MethodInfo *)v181);
              v182 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v182 = NetworkManager_TypeInfo;
              }
              v182->static_fields->isRebootBlock = 1;
              v183 = v2->fields._failData_5__6;
              if ( v183 )
                errorType = v183->fields.errorType;
              else
                errorType = 0;
              v237 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
              v238 = &Method_NetworkManager_OnClickStore__;
              goto LABEL_484;
            }
            this = (NetworkManager__RequestCR_d__214_o *)System_String__op_Equality(
                                                           v178,
                                                           (System_String_o *)StringLiteral_23698/*"stay"*/,
                                                           0);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_460;
            goto LABEL_453;
          }
          if ( !System_String__op_Equality(v178, (System_String_o *)StringLiteral_21405/*"maint"*/, 0) )
            goto LABEL_460;
          v239 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v239);
          this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__214_o *)NetworkManager_TypeInfo;
          }
          LOBYTE(this[1].fields.work[3].fields.paramInteger) = 1;
        }
        v240 = v2->fields._failData_5__6;
        if ( !v240 )
          goto LABEL_548;
        errorType = v240->fields.errorType;
        v237 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        v238 = &Method_NetworkManager_OnClickErrorReboot__;
        goto LABEL_484;
      }
      return result;
    case 3:
      v21 = (NetworkManager__RequestCR_d__214_o **)&v2->fields._www_5__10;
      v20 = v2->fields._www_5__10;
      v2->fields.__1__state = -1;
      if ( !v20 )
        goto LABEL_548;
      if ( !System_String__IsNullOrEmpty(v20->fields._error_k__BackingField, 0) )
        goto LABEL_28;
      this = *v21;
      if ( !*v21 )
        goto LABEL_548;
      v22 = DelightWorks_Network_UnityWebRequestWWW__get_text((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0);
      v2->fields._data_5__2 = v22;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._data_5__2, (int32_t)v22, v23, v24);
LABEL_28:
      this = *v21;
      if ( !*v21 )
        goto LABEL_548;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0);
      *v21 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._www_5__10, 0, v25, v26);
      goto LABEL_49;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_15;
    default:
      return 0;
  }
}


Il2CppObject *NetworkManager__RequestCR_d__214__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__RequestCR_d__214_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn NetworkManager__RequestCR_d__214__System_Collections_IEnumerator_Reset(
        NetworkManager__RequestCR_d__214_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_NetworkManager__RequestCR_d__214_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *NetworkManager__RequestCR_d__214__System_Collections_IEnumerator_get_Current(
        NetworkManager__RequestCR_d__214_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void NetworkManager__RequestCR_d__214__System_IDisposable_Dispose(
        NetworkManager__RequestCR_d__214_o *this,
        const MethodInfo *method)
{
  ;
}


void NetworkManager__TimeUpdate_d__82___ctor(
        NetworkManager__TimeUpdate_d__82_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool NetworkManager__TimeUpdate_d__82__MoveNext(NetworkManager__TimeUpdate_d__82_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  NetworkManager_c *v4; // x0
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0

  if ( (byte_4C427F6 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C427F6 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v4 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v4 = NetworkManager_TypeInfo;
    }
    v4->static_fields->nowTime = -1;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
LABEL_9:
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
    this->fields.__2__current = (Il2CppObject *)v5;
    p__2__current = &this->fields.__2__current;
    sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v5, v7, v8);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *NetworkManager__TimeUpdate_d__82__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__TimeUpdate_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn NetworkManager__TimeUpdate_d__82__System_Collections_IEnumerator_Reset(
        NetworkManager__TimeUpdate_d__82_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_NetworkManager__TimeUpdate_d__82_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *NetworkManager__TimeUpdate_d__82__System_Collections_IEnumerator_get_Current(
        NetworkManager__TimeUpdate_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void NetworkManager__TimeUpdate_d__82__System_IDisposable_Dispose(
        NetworkManager__TimeUpdate_d__82_o *this,
        const MethodInfo *method)
{
  ;
}


void NetworkManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C427F1 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager___c_TypeInfo);
    byte_4C427F1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(NetworkManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  NetworkManager___c_TypeInfo->static_fields->__9 = (struct NetworkManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)NetworkManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void NetworkManager___c___ctor(NetworkManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void NetworkManager___c___RequestCR_b__214_1(NetworkManager___c_o *this, const MethodInfo *method)
{
  TitleRootComponent_c *v2; // x0

  if ( (byte_4C427F2 & 1) == 0 )
  {
    sub_1C37058(&TitleRootComponent_TypeInfo);
    byte_4C427F2 = 1;
  }
  v2 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v2 = TitleRootComponent_TypeInfo;
  }
  v2->static_fields->shouldFadeInOnError = 0;
}