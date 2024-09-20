void __fastcall NetworkManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  ServantStatusBattleListViewItem_o *static_fields; // x0
  __int64 v4; // x8
  int32_t v5; // w2
  int32_t v6; // w3
  struct NetworkManager_StaticFields *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct NetworkManager_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct NetworkManager_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct NetworkManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct NetworkManager_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct NetworkManager_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct NetworkManager_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  struct NetworkManager_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct NetworkManager_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  ServantStatusBattleListViewItem_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct NetworkManager_StaticFields *v38; // x0
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  struct NetworkManager_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w1
  struct NetworkManager_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w1
  struct NetworkManager_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  ServantStatusBattleListViewItem_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  struct NetworkManager_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  struct NetworkManager_StaticFields *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  struct NetworkManager_StaticFields *v63; // x8
  int32_t v64; // w1
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w1
  ServantStatusBattleListViewItem_o *p_dataServerAddress; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w1
  ServantStatusBattleListViewItem_o *p_webServerAddress; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w1
  ServantStatusBattleListViewItem_o *p_webViewBaseURL; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_Collections_Generic_Dictionary_object__object__o *v79; // x19
  ServantStatusBattleListViewItem_o *p_webViewAddress; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  int32_t v83; // w1
  ServantStatusBattleListViewItem_o *p_AUTHMD5_KEY_TYPE; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  int32_t v87; // w1
  ServantStatusBattleListViewItem_o *p_errorDialogResponseData; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  __int64 v91; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v92; // 0:x0.8

  if ( (byte_4A5A909 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_14314/*"TheCheckKey"*/);
    sub_1B885B0(&StringLiteral_19419/*"file://"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A909 = 1;
  }
  NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME = (struct System_String_o *)StringLiteral_19419/*"file://"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields, StringLiteral_19419/*"file://"*/, v1, v2);
  v92.fields._dateData = (uint64_t)&v91;
  NetworkManager_TypeInfo->static_fields->WebCacheTime = 300LL;
  v91 = 0LL;
  System_DateTime___ctor_62385856(v92, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  static_fields = (ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields;
  v4 = v91;
  static_fields->fields.sortValue1B = 0LL;
  static_fields = (ServantStatusBattleListViewItem_o *)((char *)static_fields + 64);
  *(_QWORD *)&static_fields[-1].fields.dispLimitCount.fields.currentCryptoKey = 0LL;
  *(_QWORD *)&static_fields[-1].fields.dispLimitCount.fields.fakeValue = 0LL;
  *(_QWORD *)&static_fields[-1].fields.svtId.fields.fakeValue = v4;
  static_fields[-1].fields.isEnabled = 0;
  static_fields[-1].fields.name = 0LL;
  *(_QWORD *)&static_fields[-1].fields.isMine = -1LL;
  sub_1B88554(static_fields, 0, v5, v6);
  v7 = NetworkManager_TypeInfo->static_fields;
  v7->userCreateServer = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->userCreateServer, 0, v8, v9);
  v10 = NetworkManager_TypeInfo->static_fields;
  v10->userId = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->userId, 0, v11, v12);
  v13 = NetworkManager_TypeInfo->static_fields;
  v13->authKey = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v13->authKey, 0, v14, v15);
  v16 = NetworkManager_TypeInfo->static_fields;
  v16->secretKey = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->secretKey, 0, v17, v18);
  v19 = NetworkManager_TypeInfo->static_fields;
  v19->userName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->userName, 0, v20, v21);
  v22 = NetworkManager_TypeInfo->static_fields;
  v22->sessionId = 0LL;
  v22 = (struct NetworkManager_StaticFields *)((char *)v22 + 128);
  v22[-1].AUTHMD5_KEY_TYPE = 0LL;
  LODWORD(v22[-1].errorDialogResponseData) = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v22, 0, v23, v24);
  v25 = NetworkManager_TypeInfo->static_fields;
  v25->friendCode = 0LL;
  v25 = (struct NetworkManager_StaticFields *)((char *)v25 + 144);
  LOWORD(v25[-1].errorDialogResponseData) = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v25, 0, v26, v27);
  v28 = NetworkManager_TypeInfo->static_fields;
  v28->registrationVersion = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->registrationVersion, 0, v29, v30);
  v31 = NetworkManager_TypeInfo->static_fields;
  v31->registrationId = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v31->registrationId, 0, v32, v33);
  v34 = (int)StringLiteral_1/*""*/;
  v35 = (ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields;
  v35[1].klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B88554(v35 + 1, v34, v36, v37);
  v38 = NetworkManager_TypeInfo->static_fields;
  v38->serverSettingSecurity = 0;
  v39 = (int)StringLiteral_1/*""*/;
  v38->gameServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v38->gameServerSettingAddress, v39, v40, v41);
  v42 = (int)StringLiteral_1/*""*/;
  v43 = NetworkManager_TypeInfo->static_fields;
  v43->dataServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->dataServerSettingAddress, v42, v44, v45);
  v46 = (int)StringLiteral_1/*""*/;
  v47 = NetworkManager_TypeInfo->static_fields;
  v47->webServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->webServerSettingAddress, v46, v48, v49);
  v50 = (int)StringLiteral_1/*""*/;
  v51 = NetworkManager_TypeInfo->static_fields;
  v51->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v51->dataServerFolder, v50, v52, v53);
  v54 = (ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields;
  v54[1].fields.sortStr1 = 0LL;
  v54 = (ServantStatusBattleListViewItem_o *)((char *)v54 + 224);
  v54[-1].fields.isMine = 0;
  sub_1B88554(v54, 0, v55, v56);
  v57 = NetworkManager_TypeInfo->static_fields;
  v57->dataServerRedirectAddress = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v57->dataServerRedirectAddress, 0, v58, v59);
  v60 = NetworkManager_TypeInfo->static_fields;
  v60->webServerRedirectAddress = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v60->webServerRedirectAddress, 0, v61, v62);
  v63 = NetworkManager_TypeInfo->static_fields;
  v63->serverSecurity = 0;
  v64 = (int)StringLiteral_1/*""*/;
  v63->gameServerAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v63->gameServerAddress, v64, v65, v66);
  v67 = (int)StringLiteral_1/*""*/;
  p_dataServerAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->dataServerAddress;
  p_dataServerAddress->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B88554(p_dataServerAddress, v67, v69, v70);
  v71 = (int)StringLiteral_1/*""*/;
  p_webServerAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->webServerAddress;
  p_webServerAddress->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B88554(p_webServerAddress, v71, v73, v74);
  v75 = (int)StringLiteral_1/*""*/;
  p_webViewBaseURL = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B88554(p_webViewBaseURL, v75, v77, v78);
  v79 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v79,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  p_webViewAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->webViewAddress;
  p_webViewAddress->klass = (ServantStatusBattleListViewItem_c *)v79;
  sub_1B88554(p_webViewAddress, (int32_t)v79, v81, v82);
  v83 = StringLiteral_14314/*"TheCheckKey"*/;
  p_AUTHMD5_KEY_TYPE = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->AUTHMD5_KEY_TYPE;
  p_AUTHMD5_KEY_TYPE->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_14314/*"TheCheckKey"*/;
  sub_1B88554(p_AUTHMD5_KEY_TYPE, v83, v85, v86);
  v87 = (int)StringLiteral_1/*""*/;
  p_errorDialogResponseData = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->errorDialogResponseData;
  p_errorDialogResponseData->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B88554(p_errorDialogResponseData, v87, v89, v90);
}


void __fastcall NetworkManager___ctor(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_Queue_T__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5A98A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_RequestBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_Queue_RequestBase__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager___ctor__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A98A = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.mAndroidApiKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mAndroidApiKey, v5, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.mAndroidProjectId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mAndroidProjectId, v6, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.mIosApplicationId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mIosApplicationId, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.mMk = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mMk, v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.mCv = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mCv, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.mAuGameServerPublicKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mAuGameServerPublicKey, v18, v19, v20);
  v21 = (System_Collections_Generic_Queue_T__o *)sub_1B887FC(System_Collections_Generic_Queue_RequestBase__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v21,
    (const MethodInfo_366F2A4 *)Method_System_Collections_Generic_Queue_RequestBase___ctor__);
  this->fields.communicationWaitList = (struct System_Collections_Generic_Queue_RequestBase__o *)v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.communicationWaitList, (int32_t)v21, v22, v23);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_NetworkManager___ctor__);
}


void __fastcall NetworkManager__AddWaitStatus(NetworkManager_o *this, RequestBase_o *request, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *communicationWaitList; // x0
  System_Collections_Generic_Queue_Enumerator_T__o v6; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5A97C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_RequestBase__Enqueue__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__);
    byte_4A5A97C = 1;
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
      (const MethodInfo_366F924 *)Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__);
    while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
              &v6,
              (const MethodInfo_3278710 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__) )
    {
      if ( System_Collections_Generic_Queue_Enumerator_object___get_Current(
             &v6,
             (const MethodInfo_3278800 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__) == (Il2CppObject *)request )
      {
        System_Collections_Generic_Queue_Enumerator_object___Dispose(
          &v6,
          (const MethodInfo_3278700 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
        return;
      }
    }
    System_Collections_Generic_Queue_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_3278700 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
    communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
    if ( !communicationWaitList )
LABEL_12:
      sub_1B8880C(communicationWaitList, request);
    System_Collections_Generic_Queue_object___Enqueue(
      communicationWaitList,
      (Il2CppObject *)request,
      (const MethodInfo_366F86C *)Method_System_Collections_Generic_Queue_RequestBase__Enqueue__);
  }
}


bool __fastcall NetworkManager__CheckServerLimitTime(NetworkManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A5A91B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_OnClickErrorReboot__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12476/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A91B = 1;
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
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12476/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, 0LL);
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
      NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v10, 0LL, v11, v12);
      return 0;
    }
  }
  return 1;
}


bool __fastcall NetworkManager__CheckUserCreateServer(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  __int64 v2; // x1
  NetworkManager_c *v4; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *gameServerAddress; // x0

  if ( (byte_4A5A903 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A903 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v1->static_fields->userCreateServer, 0LL) )
    return 1;
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  gameServerAddress = static_fields->gameServerAddress;
  if ( !gameServerAddress )
    sub_1B8880C(0LL, v2);
  return System_String__Equals_61715348(gameServerAddress, static_fields->userCreateServer, 0LL);
}


bool __fastcall NetworkManager__CheckUserCreateServerByPrefix(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  NetworkManager_c *v2; // x0
  __int64 v3; // x1
  NetworkManager_c *v4; // x0
  System_String_array *gameServerAddress; // x0
  System_String_o *userCreateServer; // x8
  System_String_array *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x9
  System_String_o *v10; // x8

  if ( (byte_4A5A904 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A904 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  if ( !System_String__IsNullOrEmpty(v1->static_fields->gameServerAddress, 0LL) )
  {
    v2 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v2 = NetworkManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v2->static_fields->userCreateServer, 0LL) )
    {
      v4 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v4 = NetworkManager_TypeInfo;
      }
      gameServerAddress = (System_String_array *)v4->static_fields->gameServerAddress;
      if ( !gameServerAddress )
        goto LABEL_22;
      gameServerAddress = System_String__Split((System_String_o *)gameServerAddress, 0x2Du, 0, 0LL);
      userCreateServer = NetworkManager_TypeInfo->static_fields->userCreateServer;
      if ( !userCreateServer )
        goto LABEL_22;
      v7 = gameServerAddress;
      gameServerAddress = System_String__Split(userCreateServer, 0x2Du, 0, 0LL);
      if ( !v7 )
        goto LABEL_22;
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !gameServerAddress )
          goto LABEL_22;
        v9 = *(_QWORD *)&gameServerAddress->max_length;
        if ( v9 )
        {
          if ( !(_DWORD)v8 || !(_DWORD)v9 )
            sub_1B88814(gameServerAddress, v3);
          v10 = v7->m_Items[0];
          if ( v10 )
            return System_String__Equals_61715348(v10, gameServerAddress->m_Items[0], 0LL);
LABEL_22:
          sub_1B8880C(gameServerAddress, v3);
        }
      }
    }
  }
  return 0;
}


void __fastcall NetworkManager__ClearAuth(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NetworkManager_c *v4; // x0
  ServantStatusBattleListViewItem_o *static_fields; // x0
  int64_t sortValue2B; // t1
  struct NetworkManager_StaticFields *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5A921 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&SignedData_TypeInfo);
    byte_4A5A921 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  static_fields = (ServantStatusBattleListViewItem_o *)v4->static_fields;
  sortValue2B = static_fields->fields.sortValue2B;
  static_fields = (ServantStatusBattleListViewItem_o *)((char *)static_fields + 80);
  static_fields->klass = 0LL;
  sub_1B88554(static_fields, 0, v2, v3);
  v7 = NetworkManager_TypeInfo->static_fields;
  v7->userCreateServer = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->userCreateServer, 0, v8, v9);
  if ( sortValue2B )
  {
    if ( !SignedData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    SignedData__RefreshSigningData(3, 0LL);
  }
}


void __fastcall NetworkManager__ClearTopLoginResult(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.loginResponseResult = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loginResponseResult, 0, v2, v3);
}


bool __fastcall NetworkManager__CommunicationIsBusy(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5A90A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4A5A90A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return Instance[6].monitor != 0LL;
}


bool __fastcall NetworkManager__CommunicationStart(NetworkManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *communicationWaitList; // x0
  Il2CppObject *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x2
  System_Collections_IEnumerator_o *v9; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5A97D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_RequestBase__Dequeue__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__);
    byte_4A5A97D = 1;
  }
  communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
  if ( !communicationWaitList )
    sub_1B8880C(0LL, method);
  if ( communicationWaitList->fields._size < 1 || this->fields.communicationWork )
    return 0;
  v5 = System_Collections_Generic_Queue_object___Dequeue(
         communicationWaitList,
         (const MethodInfo_366F9FC *)Method_System_Collections_Generic_Queue_RequestBase__Dequeue__);
  this->fields.communicationWork = (struct RequestBase_o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.communicationWork, (int32_t)v5, v6, v7);
  v9 = NetworkManager__RequestCR(this, this->fields.communicationWork, 0.0, v8);
  started = UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
  this->fields.communicationCoroutine = started;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v11, v12);
  return 1;
}


void __fastcall NetworkManager__DeleteAuth(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  System_String_o *OldAuthFileName; // x21
  const MethodInfo *v3; // x1
  System_String_o *AuthFileName; // x20
  const MethodInfo *v5; // x1
  System_String_o *v6; // x19

  if ( (byte_4A5A94E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A94E = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  OldAuthFileName = NetworkManager__getOldAuthFileName((const MethodInfo *)v1);
  AuthFileName = NetworkManager__getAuthFileName(0, v3);
  v6 = NetworkManager__getAuthFileName(1, v5);
  if ( System_IO_File__Exists(OldAuthFileName, 0LL) )
    System_IO_File__Delete(OldAuthFileName, 0LL);
  if ( System_IO_File__Exists(AuthFileName, 0LL) )
    System_IO_File__Delete(AuthFileName, 0LL);
  if ( System_IO_File__Exists(v6, 0LL) )
    System_IO_File__Delete(v6, 0LL);
}


void __fastcall NetworkManager__DeleteSaveData(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4A5A94D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A94D = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__DeleteAuth((const MethodInfo *)v1);
  NetworkManager__DeleteSignupData(v2);
}


void __fastcall NetworkManager__DeleteSignupData(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  System_String_o *OldSignupFileName; // x21
  System_String_o *SignupFileName; // x20
  System_String_o *FriendCodeFileName; // x19

  if ( (byte_4A5A94F & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A94F = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  OldSignupFileName = NetworkManager__getOldSignupFileName((const MethodInfo *)v1);
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
  NetworkManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4A5A943 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4A5A943 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  v2->static_fields->isRebootBlock = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v5);
}


void __fastcall NetworkManager__EndErrorWebView(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_errorCallbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *errorCallbackFunc; // t1

  errorCallbackFunc = this->fields.errorCallbackFunc;
  p_errorCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.errorCallbackFunc;
  v5 = errorCallbackFunc;
  if ( errorCallbackFunc )
  {
    p_errorCallbackFunc->klass = 0LL;
    sub_1B88554(p_errorCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall NetworkManager__EndGetStoreUrl(NetworkManager_o *this, System_String_o *url, const MethodInfo *method)
{
  if ( (byte_4A5A945 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    byte_4A5A945 = 1;
  }
  if ( url )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__OpenURL(url, 0LL);
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69253336(0LL);
}


void __fastcall NetworkManager__EndLockSync(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4A5A986 & 1) == 0 )
  {
    sub_1B885B0(&UserServantLockManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A5A986 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    UserServantLockManager__DeleteSaveData(0LL);
    UserServantLockManager__ClearSaveDataList(0LL);
  }
  NetworkManager__OptionSync(this, v5);
}


void __fastcall NetworkManager__EndLogin(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_loginCallbackFunc; // x19
  struct NetworkManager_LoginCallbackFunc_o *v6; // x21
  struct NetworkManager_LoginCallbackFunc_o *loginCallbackFunc; // t1
  NetworkManager_c *v8; // x0
  void *monitor; // x20

  if ( (byte_4A5A989 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A989 = 1;
  }
  loginCallbackFunc = this->fields.loginCallbackFunc;
  p_loginCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.loginCallbackFunc;
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
    sub_1B88554(p_loginCallbackFunc, 0, v2, v3);
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

  if ( (byte_4A5A988 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5A988 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__DeleteOldLocal((const MethodInfo *)v3);
  NetworkManager__EndLogin(this, v4);
}


void __fastcall NetworkManager__EndTopLogin(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  int32_t v3; // w3
  NetworkManager_o *v6; // x0
  const MethodInfo *v7; // x2
  System_Int64_array *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  Il2CppObject *Request_object; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  System_Int64_array *v16; // x20
  NetworkManager_ResultCallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF
  int32_t resulta; // [xsp+4Ch] [xbp-24h] BYREF

  if ( (byte_4A5A985 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&Method_NetworkManager_EndLockSync__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardLockSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_1B885B0(&UserServantLockManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A5A985 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  resulta = 0;
  this->fields.loginResponseResult = result;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.loginResponseResult,
    (int32_t)result,
    (int32_t)method,
    v3);
  NetworkManager__SetupObfuscatedAccountId(v6, this->fields.loginResponseResult, v7);
  Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  ManagementManager__BuildInfoDisp((ManagementManager_o *)Instance, 1, v10);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0LL);
  Instance = (System_Int64_array *)System_Linq_Enumerable__Any_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)PreparePurchaseShopIdsFromPlayerPrefs,
                                     (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_string___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !PreparePurchaseShopIdsFromPlayerPrefs )
      goto LABEL_31;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v20 = v19;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      if ( System_Int32__TryParse((System_String_o *)v20.fields._current, &resulta, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Request_object = NetworkManager__getRequest_object_(
                           0LL,
                           (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
        if ( !Request_object )
          sub_1B8880C(0LL, v13);
        CancelPurchaseByBankRequest__beginRequest((CancelPurchaseByBankRequest_o *)Request_object, resulta, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
    v16 = Instance;
    if ( *(_QWORD *)&Instance->max_length )
    {
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v17, (Il2CppObject *)this, Method_NetworkManager_EndLockSync__, v18);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (System_Int64_array *)NetworkManager__getRequest_object_(
                                         v17,
                                         (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardLockSyncRequest___);
      if ( Instance )
      {
        CardLockSyncRequest__beginRequest((CardLockSyncRequest_o *)Instance, v16, 0LL, 0, 0LL);
        return;
      }
LABEL_31:
      sub_1B8880C(Instance, v9);
    }
    NetworkManager__EndLockSync(this, (System_String_o *)StringLiteral_22225/*"ok"*/, v15);
  }
  else
  {
    NetworkManager__OptionSync(this, v14);
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
  System_Action_o *v11; // x20
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4A5A93A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_EndErrorDialog__);
    sub_1B885B0(&Method_NetworkManager_EndErrorWebView__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&WebViewManager_TypeInfo);
    byte_4A5A93A = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.errorCallbackFunc,
    (int32_t)callback,
    (int32_t)errorDetail,
    (int32_t)errorUrl);
  if ( errorUrl )
  {
    v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(errorTitle, errorUrl, v11, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v13, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_1B8880C(v14, v15);
    CommonUI__OpenErrorDialog((CommonUI_o *)Instance, errorTitle, errorDetail, v13, 0, 0LL);
  }
}


int32_t __fastcall NetworkManager__ExecuteCommand(ResponseData_o *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x0
  Il2CppObject *Item; // x0
  __int64 v7; // x1

  if ( (byte_4A5A97B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4A5A97B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  if ( !data )
    sub_1B8880C(Instance, v4);
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)Instance[5].monitor;
  if ( !monitor )
    sub_1B8880C(0LL, v4);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           monitor,
           (Il2CppObject *)data->fields.nid,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__);
  if ( !Item )
    sub_1B8880C(0LL, v7);
  return ((__int64 (__fastcall *)(Il2CppObject *, ResponseData_o *, Il2CppMethodPointer))Item->klass->vtable[5].method)(
           Item,
           data,
           Item->klass->vtable[6].methodPtr);
}


System_String_o *__fastcall NetworkManager__GetApiCode(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  System_String_o *klass; // x19

  if ( (byte_4A5A965 & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A965 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
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
  System_String_o *v3; // x20
  System_String_o *v4; // x19
  System_Collections_Generic_KeyValuePair_TKey__TValue__o Current; // kr00_16
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  NetworkManager_c *v29; // x0
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v30; // x20
  System_Text_UTF8Encoding_o *v31; // x21
  NetworkManager_c *v32; // x0
  System_Byte_array *v33; // x19
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v35; // [xsp+0h] [xbp-C0h] BYREF
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v36; // [xsp+30h] [xbp-90h] BYREF

  v2 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)headers;
  if ( (byte_4A5A920 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&System_Text_UTF8Encoding_TypeInfo);
    sub_1B885B0(&StringLiteral_1852/*"="*/);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    sub_1B885B0(&StringLiteral_535/*"&"*/);
    headers = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A920 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( !v2 )
    goto LABEL_33;
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_SortedDictionary_object__object___GetEnumerator(
    &v35,
    v2,
    (const MethodInfo_373A55C *)Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v4 = v3;
    if ( !System_Collections_Generic_SortedDictionary_Enumerator_object__object___MoveNext(
            &v36,
            (const MethodInfo_32C4440 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__) )
      break;
    Current = System_Collections_Generic_SortedDictionary_Enumerator_object__object___get_Current(
                &v36,
                (const MethodInfo_32C4520 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__);
    if ( System_String__op_Inequality(v3, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v6 = sub_1B88658(string___TypeInfo, 5LL);
      v10 = v6;
      if ( !v6 )
        sub_1B8880C(0LL, v7);
      if ( !*(_DWORD *)(v6 + 24) )
        sub_1B88814(v6, v7);
      *(_QWORD *)(v6 + 32) = v3;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)v3, v8, v9);
      if ( *(_DWORD *)(v10 + 24) <= 1u )
        sub_1B88814(v11, v12);
      v15 = StringLiteral_535/*"&"*/;
      *(_QWORD *)(v10 + 40) = StringLiteral_535/*"&"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 40), v15, v13, v14);
      if ( *(_DWORD *)(v10 + 24) <= 2u )
        sub_1B88814(v16, v17);
      *(_QWORD *)(v10 + 48) = Current.fields.key;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 48), (int32_t)Current.fields.key, v18, v19);
      if ( *(_DWORD *)(v10 + 24) <= 3u )
        sub_1B88814(v20, v21);
      v24 = StringLiteral_1852/*"="*/;
      *(_QWORD *)(v10 + 56) = StringLiteral_1852/*"="*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 56), v24, v22, v23);
      if ( *(_DWORD *)(v10 + 24) <= 4u )
        sub_1B88814(v25, v26);
      *(_QWORD *)(v10 + 64) = Current.fields.value;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 64), (int32_t)Current.fields.value, v27, v28);
      v3 = System_String__Concat_61720560((System_String_array *)v10, 0LL);
    }
    else
    {
      v3 = System_String__Concat_61720296(
             v3,
             (System_String_o *)Current.fields.key,
             (System_String_o *)StringLiteral_1852/*"="*/,
             (System_String_o *)Current.fields.value,
             0LL);
    }
  }
  System_Collections_Generic_SortedDictionary_Enumerator_object__object___Dispose(
    &v36,
    (const MethodInfo_32C44B0 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__);
  v29 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v29 = NetworkManager_TypeInfo;
  }
  if ( !v29->static_fields->secretKey )
    return 0LL;
  v30 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1B887FC(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v30, 0LL);
  v31 = (System_Text_UTF8Encoding_o *)sub_1B887FC(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v31, 0LL);
  v32 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v32 = NetworkManager_TypeInfo;
  }
  headers = (System_Collections_Generic_SortedDictionary_string__string__o *)System_String__Concat_61718292(
                                                                               v4,
                                                                               (System_String_o *)StringLiteral_1544/*":"*/,
                                                                               v32->static_fields->secretKey,
                                                                               0LL);
  if ( !v31
    || (headers = (System_Collections_Generic_SortedDictionary_string__string__o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_Collections_Generic_SortedDictionary_string__string__o *, Il2CppMethodPointer))v31->klass->vtable._19_GetBytes.method)(
                                                                                     v31,
                                                                                     headers,
                                                                                     v31->klass->vtable._20_GetBytes.methodPtr),
        !v30) )
  {
LABEL_33:
    sub_1B8880C(headers, method);
  }
  v33 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
          (System_Security_Cryptography_HashAlgorithm_o *)v30,
          (System_Byte_array *)headers,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v30, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v33, 0LL);
}


System_String_o *__fastcall NetworkManager__GetCv(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  System_String_o *klass; // x19

  if ( (byte_4A5A967 & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A967 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  klass = (System_String_o *)Instance[4].klass;
  if ( System_String__IsNullOrEmpty(klass, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__MouseGame1(klass, 0, 0LL);
}


System_String_o *__fastcall NetworkManager__GetDataServerFolderName(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A950 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A950 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->dataServerFolder;
}


System_String_o *__fastcall NetworkManager__GetDataServerSetting(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A95B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A95B = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->dataServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetDataServerSetting_38486352(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4A5A95C & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5A95C = 1;
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
  NetworkManager_c *v2; // x0
  System_String_o *friendCode; // x19

  if ( (byte_4A5A91A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A91A = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  friendCode = v2->static_fields->friendCode;
  if ( !friendCode )
    return 0LL;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    friendCode = NetworkManager_TypeInfo->static_fields->friendCode;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetNumberFormat_38394836(friendCode, 0LL);
}


System_String_o *__fastcall NetworkManager__GetFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_4A5A919 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A919 = 1;
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
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A959 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A959 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->gameServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetGameServerSetting_38486176(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4A5A95A & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5A95A = 1;
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
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A91C & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A91C = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->serverTime;
}


System_String_o *__fastcall NetworkManager__GetMk(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  System_String_o *monitor; // x19

  if ( (byte_4A5A966 & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A966 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  monitor = (System_String_o *)Instance[3].monitor;
  if ( System_String__IsNullOrEmpty(monitor, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__MouseGame1(monitor, 0, 0LL);
}


bool __fastcall NetworkManager__GetSecurityServerSetting(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A956 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A956 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->serverSettingSecurity;
}


bool __fastcall NetworkManager__GetSecurityServerSetting_38486000(System_String_o *type, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4A5A958 & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5A958 = 1;
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
  __int64 *v3; // x20

  v2 = serverName;
  if ( (byte_4A5A973 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5018/*"DEV"*/);
    sub_1B885B0(&StringLiteral_12221/*"STAGING"*/);
    sub_1B885B0(&StringLiteral_12269/*"STG"*/);
    sub_1B885B0(&StringLiteral_15236/*"VERUP"*/);
    sub_1B885B0(&StringLiteral_5017/*"DESIGN"*/);
    sub_1B885B0(&StringLiteral_7392/*"IPADDRESS"*/);
    sub_1B885B0(&StringLiteral_10812/*"QA"*/);
    sub_1B885B0(&StringLiteral_10384/*"PLAN"*/);
    sub_1B885B0(&StringLiteral_8237/*"LIMIT"*/);
    sub_1B885B0(&StringLiteral_10385/*"PLAY"*/);
    serverName = (System_String_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A973 = 1;
  }
  if ( !v2 )
    sub_1B8880C(serverName, method);
  v3 = &StringLiteral_10812/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10812/*"QA"*/, 0LL) )
    return System_String__Replace_61726660(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v3 = &StringLiteral_10384/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10384/*"PLAN"*/, 0LL) )
    return System_String__Replace_61726660(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v3 = &StringLiteral_5018/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_5018/*"DEV"*/, 0LL) )
    return System_String__Replace_61726660(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v3 = &StringLiteral_8237/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8237/*"LIMIT"*/, 0LL) )
    return System_String__Replace_61726660(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v3 = &StringLiteral_10385/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10385/*"PLAY"*/, 0LL) )
    return System_String__Replace_61726660(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v3 = &StringLiteral_5017/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_5017/*"DESIGN"*/, 0LL) )
    return System_String__Replace_61726660(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v3 = &StringLiteral_15236/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15236/*"VERUP"*/, 0LL) )
    return System_String__Replace_61726660(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v3 = &StringLiteral_12269/*"STG"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12269/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12221/*"STAGING"*/, 0LL) )
  {
    return System_String__Replace_61726660(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v3 = &StringLiteral_7392/*"IPADDRESS"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7392/*"IPADDRESS"*/, 0LL) )
    return System_String__Replace_61726660(v2, (System_String_o *)*v3, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall NetworkManager__GetServerSettingType(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A955 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A955 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->serverSettingType;
}


int64_t __fastcall NetworkManager__GetServerTimeChkMovie(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A91E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A91E = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->serverTimeChkMovie;
}


System_String_o *__fastcall NetworkManager__GetServerType(System_String_o *serverName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 *v3; // x20

  v2 = serverName;
  if ( (byte_4A5A972 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5018/*"DEV"*/);
    sub_1B885B0(&StringLiteral_12221/*"STAGING"*/);
    sub_1B885B0(&StringLiteral_12269/*"STG"*/);
    sub_1B885B0(&StringLiteral_15236/*"VERUP"*/);
    sub_1B885B0(&StringLiteral_5017/*"DESIGN"*/);
    sub_1B885B0(&StringLiteral_7392/*"IPADDRESS"*/);
    sub_1B885B0(&StringLiteral_10812/*"QA"*/);
    sub_1B885B0(&StringLiteral_10384/*"PLAN"*/);
    sub_1B885B0(&StringLiteral_8237/*"LIMIT"*/);
    serverName = (System_String_o *)sub_1B885B0(&StringLiteral_10385/*"PLAY"*/);
    byte_4A5A972 = 1;
  }
  if ( !v2 )
    sub_1B8880C(serverName, method);
  v3 = &StringLiteral_10812/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10812/*"QA"*/, 0LL) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_10384/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10384/*"PLAN"*/, 0LL) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_5018/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_5018/*"DEV"*/, 0LL) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_8237/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8237/*"LIMIT"*/, 0LL) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_10385/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10385/*"PLAY"*/, 0LL) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_5017/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_5017/*"DESIGN"*/, 0LL) )
    return (System_String_o *)*v3;
  v3 = &StringLiteral_15236/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15236/*"VERUP"*/, 0LL) )
    return (System_String_o *)*v3;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12269/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12221/*"STAGING"*/, 0LL) )
  {
    v3 = &StringLiteral_12269/*"STG"*/;
    return (System_String_o *)*v3;
  }
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7392/*"IPADDRESS"*/, 0LL) )
    return (System_String_o *)StringLiteral_7392/*"IPADDRESS"*/;
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

  if ( (byte_4A5A912 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A912 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  v11 = v10->static_fields->userName;
  *userName = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)userName, (int32_t)v11, (int32_t)genderType, (int32_t)month);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


int32_t __fastcall NetworkManager__GetTerminalDispState(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4A5A90B & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5A90B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 9, 0LL) )
    return 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57FF0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_DispState_k__BackingField != 2;
}


System_String_o *__fastcall NetworkManager__GetTopLoginResult(NetworkManager_o *this, const MethodInfo *method)
{
  return this->fields.loginResponseResult;
}


System_String_o *__fastcall NetworkManager__GetWarBoardRuleUrl(int32_t stageId, const MethodInfo *method)
{
  Il2CppObject *BaseUrl; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5A971 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24678/*"webview/warBoard?stageId="*/);
    byte_4A5A971 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = (Il2CppObject *)NetworkManager__getBaseUrl(0, method);
  v9 = stageId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v4, v5, v6);
  return System_String__Concat_61718044(BaseUrl, (Il2CppObject *)StringLiteral_24678/*"webview/warBoard?stageId="*/, v7, 0LL);
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A95D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A95D = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->webServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting_38486528(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4A5A95E & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5A95E = 1;
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
  NetworkManager_c *v3; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *v5; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x5

  if ( (byte_4A5A939 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_OnClickErrorReboot__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12476/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A939 = 1;
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
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12476/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, 0LL);
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
    NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v5, 0LL, v6, v7);
  }
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__Initialize(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A90D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager__Initialize_d__82_TypeInfo);
    byte_4A5A90D = 1;
  }
  v3 = sub_1B887FC(NetworkManager__Initialize_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall NetworkManager__InitializeUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_o *UserAgentString; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  NetworkManager_c *v6; // x8
  System_String_o *v7; // x19
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A5A90E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A90E = 1;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->userAgent, (int32_t)v7, v4, v5);
}


System_String_o *__fastcall NetworkManager__LoadAuthMd5(
        NetworkManager_o *this,
        System_String_o *fname,
        const MethodInfo *method)
{
  System_String_o *v4; // x21
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryReader_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0

  if ( (byte_4A5A925 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    byte_4A5A925 = 1;
  }
  v4 = 0LL;
  if ( System_IO_File__Exists(fname, 0LL) )
  {
    v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(fname, 0LL);
    v6 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v6, v5, 0LL);
    if ( !v6 )
      sub_1B8880C(v7, v8);
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._22_ReadString.method)(
                              v6,
                              v6->klass->vtable._23_ReadChars.methodPtr);
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v4 = EncryptedPlayerPrefs__Md5(v9, 0LL);
    klass = v6->klass;
    v11 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_11:
      v13 = sub_1BDA590(v6, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v13)(v6, *(_QWORD *)(v13 + 8));
  }
  return v4;
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
  int32_t v10; // w3
  char v11; // w22
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  v8 = this;
  if ( (byte_4A5A980 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B885B0(&StringLiteral_4646/*"CommunicationStart"*/);
    byte_4A5A980 = 1;
  }
  if ( !requestWork )
    sub_1B8880C(this, requestWork);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.communicationWorkResponseList, 0, v9, v10);
      v8->fields.communicationWork = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.communicationWork, 0, v12, v13);
      v8->fields.communicationCoroutine = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.communicationCoroutine, 0, v14, v15);
      if ( v8->fields.cacheRefreshWork )
      {
        v8->fields.cacheRefreshWork = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.cacheRefreshWork, 0, v16, v17);
        v8->fields.cacheRefreshWorkResponseList = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.cacheRefreshWorkResponseList, 0, v18, v19);
      }
    }
    ((void (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))requestWork->klass->vtable._12_backgroundErrorRetry.method)(
      requestWork,
      requestWork->klass->vtable._13_isAutoRetryRequest.methodPtr);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v8,
      (System_String_o *)StringLiteral_4646/*"CommunicationStart"*/,
      0.0,
      0LL);
  }
  return v11 & 1;
}


void __fastcall NetworkManager__OnClickErrorDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_4A5A946 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    byte_4A5A946 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69253336(0LL);
}


void __fastcall NetworkManager__OnClickErrorReboot(NetworkManager_o *this, const MethodInfo *method)
{
  ManagementManager_c *v2; // x0
  NetworkManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4A5A93E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&ManagementManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4A5A93E = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4A5A27F )
  {
    sub_1B885B0(&ManagementManager_TypeInfo);
    byte_4A5A27F = 1;
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
    UnityEngine_Application__Quit_69253336(0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v5);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v6);
  }
}


void __fastcall NetworkManager__OnClickErrorRetryDialog(
        NetworkManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  ManagementManager_c *v11; // x0
  NetworkManager_c *v12; // x0
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3

  if ( (byte_4A5A93B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&ManagementManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4A5A93B = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList, 0, (int32_t)method, v3);
  if ( isDecide )
  {
    v7 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v6);
    started = UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
    this->fields.communicationCoroutine = started;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v9, v10);
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_4A5A27F )
    {
      sub_1B885B0(&ManagementManager_TypeInfo);
      byte_4A5A27F = 1;
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
      UnityEngine_Application__Quit_69253336(0LL);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1B8880C(0LL, v14);
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v15);
    }
  }
}


void __fastcall NetworkManager__OnClickErrorRetryDialog_UnityIap(
        NetworkManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  ServantStatusBattleListViewItem_o *p_communicationCoroutine; // x0
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3

  if ( (byte_4A5A93C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A93C = 1;
  }
  if ( isDecide )
  {
    this->fields.communicationWorkResponseList = 0LL;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList,
      0,
      (int32_t)method,
      v3);
    v7 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v6);
    started = UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
    this->fields.communicationCoroutine = started;
    v11 = (int)started;
    p_communicationCoroutine = (ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v14);
    CommonUI__CloseRetryDialog((CommonUI_o *)Instance, 0LL);
    NetworkManager__OnEndCommunication(
      this,
      this->fields.communicationWork,
      this->fields.communicationWorkResponseList,
      v15);
    p_communicationCoroutine = (ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList;
    v11 = 0;
    this->fields.communicationWorkResponseList = 0LL;
  }
  sub_1B88554(p_communicationCoroutine, v11, v9, v10);
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
  ManagementManager_c *v2; // x0
  NetworkManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4A5A93F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&ManagementManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4A5A93F = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4A5A27F )
  {
    sub_1B885B0(&ManagementManager_TypeInfo);
    byte_4A5A27F = 1;
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
    UnityEngine_Application__Quit_69253336(0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v5);
    ManagementManager__reboot((ManagementManager_o *)Instance, 1, 1, v6);
  }
}


void __fastcall NetworkManager__OnClickRefreshTerminal(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Coroutine_o *communicationCoroutine; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5A940 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_13616/*"TerminalStart"*/);
    byte_4A5A940 = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList, 0, v2, v3);
  communicationCoroutine = this->fields.communicationCoroutine;
  if ( communicationCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_69445272((UnityEngine_MonoBehaviour_o *)this, communicationCoroutine, 0LL);
  this->fields.communicationWork = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.communicationWork, 0, v5, v6);
  this->fields.communicationCoroutine = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, 0, v8, v9);
  if ( this->fields.cacheRefreshWork )
  {
    this->fields.cacheRefreshWork = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWork, 0, v10, v11);
    this->fields.cacheRefreshWorkResponseList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWorkResponseList, 0, v12, v13);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13616/*"TerminalStart"*/,
    0.0,
    0LL);
}


void __fastcall NetworkManager__OnClickReloadCache(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct RequestBase_o *communicationWork; // x1
  RequestBase_o **p_communicationWork; // x20
  struct ResponseData_array *communicationWorkResponseList; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Request_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_IEnumerator_o *v17; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5A93D & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_TopRefreshRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A93D = 1;
  }
  p_communicationWork = &this->fields.communicationWork;
  communicationWork = this->fields.communicationWork;
  this->fields.cacheRefreshWork = communicationWork;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWork, (int32_t)communicationWork, v2, v3);
  communicationWorkResponseList = this->fields.communicationWorkResponseList;
  this->fields.cacheRefreshWorkResponseList = communicationWorkResponseList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWorkResponseList,
    (int32_t)communicationWorkResponseList,
    v8,
    v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TopRefreshRequest___);
  *p_communicationWork = (RequestBase_o *)Request_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.communicationWork, (int32_t)Request_object, v11, v12);
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList, 0, v13, v14);
  if ( !*p_communicationWork )
    sub_1B8880C(0LL, v15);
  RequestBase__addBaseField(*p_communicationWork, 0LL);
  v17 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v16);
  started = UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
  this->fields.communicationCoroutine = started;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v19, v20);
}


void __fastcall NetworkManager__OnClickStore(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_4A5A944 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5A944 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  WebViewPluginScript__LaunchStore(v2->static_fields->AndroidPackageName, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_69253336(0LL);
}


void __fastcall NetworkManager__OnClickUserDelete(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  OptionManager_c *v5; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5A942 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_EndCloseUserDelete__);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A942 = 1;
  }
  if ( isDecide )
  {
    UserSaveData__DeleteSaveData(1, 0LL);
    v5 = OptionManager_TypeInfo;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__Initialize((const MethodInfo *)v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_NetworkManager_EndCloseUserDelete__, 0LL);
  if ( !Instance )
    sub_1B8880C(v8, v9);
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v7, 0LL);
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
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  RequestBase_o *cacheRefreshWork; // x22
  int32_t v14; // w2
  int32_t v15; // w3

  cacheRefreshWorkResponseList = responseList;
  v5 = requestWork;
  v6 = this;
  if ( (byte_4A5A97F & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B885B0(&StringLiteral_4646/*"CommunicationStart"*/);
    byte_4A5A97F = 1;
  }
  if ( v6->fields.communicationWork != v5 )
    goto LABEL_4;
  v6->fields.communicationWorkResponseList = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v6->fields.communicationWorkResponseList,
    0,
    (int32_t)responseList,
    (int32_t)method);
  v6->fields.communicationWork = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.communicationWork, 0, v7, v8);
  v6->fields.communicationCoroutine = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.communicationCoroutine, 0, v9, v10);
  this = (NetworkManager_o *)&v6->fields.cacheRefreshWork;
  cacheRefreshWork = v6->fields.cacheRefreshWork;
  if ( cacheRefreshWork )
  {
    cacheRefreshWorkResponseList = v6->fields.cacheRefreshWorkResponseList;
    v6->fields.cacheRefreshWork = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)this, 0, v11, v12);
    v6->fields.cacheRefreshWorkResponseList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.cacheRefreshWorkResponseList, 0, v14, v15);
    v5 = cacheRefreshWork;
  }
  else
  {
LABEL_4:
    if ( !v5 )
      sub_1B8880C(this, requestWork);
  }
  ((void (__fastcall *)(RequestBase_o *, ResponseData_array *, Il2CppMethodPointer))v5->klass->vtable._10_requestCompleted.method)(
    v5,
    cacheRefreshWorkResponseList,
    v5->klass->vtable._11_backgroundErrorRequest.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v6, (System_String_o *)StringLiteral_4646/*"CommunicationStart"*/, 0.0, 0LL);
}


bool __fastcall NetworkManager__OnErrorCommunication(
        NetworkManager_o *this,
        RequestBase_o *requestWork,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  NetworkManager_o *v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  char v9; // w21
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3

  v6 = this;
  if ( (byte_4A5A981 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B885B0(&StringLiteral_4646/*"CommunicationStart"*/);
    byte_4A5A981 = 1;
  }
  if ( !requestWork )
    sub_1B8880C(this, requestWork);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.communicationWorkResponseList, 0, v7, v8);
      v6->fields.communicationWork = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.communicationWork, 0, v10, v11);
      v6->fields.communicationCoroutine = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.communicationCoroutine, 0, v12, v13);
      if ( v6->fields.cacheRefreshWork )
      {
        v6->fields.cacheRefreshWork = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.cacheRefreshWork, 0, v14, v15);
        v6->fields.cacheRefreshWorkResponseList = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.cacheRefreshWorkResponseList, 0, v16, v17);
      }
    }
    ((void (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))requestWork->klass->vtable._15_errorRetry.method)(
      requestWork,
      requestWork->klass->vtable._16_getParameterFileName.methodPtr);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v6,
      (System_String_o *)StringLiteral_4646/*"CommunicationStart"*/,
      0.0,
      0LL);
  }
  return v9 & 1;
}


void __fastcall NetworkManager__OptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  const MethodInfo *v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4A5A987 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_EndOptionSync__);
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5A987 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__CheckOldLocal((const MethodInfo *)v3) )
  {
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_NetworkManager_EndOptionSync__, 0LL);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SaveData(v5, v6);
  }
  else
  {
    NetworkManager__EndLogin(this, v4);
  }
}


System_Collections_Generic_Dictionary_string__string__o *__fastcall NetworkManager__ParseQueryString(
        System_String_o *url,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x19
  void *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w0
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w21

  if ( (byte_4A5A91F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    byte_4A5A91F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !url )
    goto LABEL_17;
  v6 = System_String__IndexOf(url, 0x3Fu, 0LL);
  if ( v6 != -1 )
  {
    v4 = System_String__Substring(url, v6 + 1, 0LL);
    if ( !v4 )
      goto LABEL_17;
    v4 = System_String__Split((System_String_o *)v4, 0x26u, 0, 0LL);
    if ( !v4 )
      goto LABEL_17;
    v7 = *((_DWORD *)v4 + 6);
    v8 = v4;
    if ( v7 >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= v7 )
          sub_1B88814(v4, v5);
        v4 = (void *)*((_QWORD *)v8 + (int)v9 + 4);
        if ( !v4 )
          break;
        v4 = System_String__Split((System_String_o *)v4, 0x3Du, 0, 0LL);
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
            (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
        }
        v7 = *((_DWORD *)v8 + 6);
        if ( (int)++v9 >= v7 )
          return (System_Collections_Generic_Dictionary_string__string__o *)v3;
      }
LABEL_17:
      sub_1B8880C(v4, v5);
    }
  }
  return (System_Collections_Generic_Dictionary_string__string__o *)v3;
}


int32_t __fastcall NetworkManager__ReadAuth(NetworkManager_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  NetworkManager_c *v17; // x0
  System_String_o *String; // x1
  int v19; // w23
  char v20; // w20
  System_String_o *v21; // x22
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v23; // x1
  System_Collections_Generic_Dictionary_object__object__o *v24; // x22
  Il2CppObject *Item; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x23
  NetworkManager_c *v30; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  struct NetworkManager_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  struct NetworkManager_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  struct NetworkManager_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_IO_BinaryReader_c *klass; // x8
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 v53; // x0

  if ( (byte_4A5A922 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&SignedData_TypeInfo);
    sub_1B885B0(&StringLiteral_24381/*"userCreateServer"*/);
    sub_1B885B0(&StringLiteral_16971/*"authKey"*/);
    sub_1B885B0(&StringLiteral_23078/*"secretKey"*/);
    sub_1B885B0(&StringLiteral_24424/*"userId"*/);
    byte_4A5A922 = 1;
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
    v5 = (NetworkManager_o *)System_IO_File__Exists(AuthFileName, 0LL);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v11 = (System_IO_Stream_o *)System_IO_File__OpenRead(AuthFileName, 0LL);
      v12 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v12, v11, 0LL);
      if ( !v12 )
        sub_1B8880C(v13, v14);
      v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                                 v12,
                                 v12->klass->vtable._23_ReadChars.methodPtr);
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      v16 = EncryptedPlayerPrefs__Md5(v15, 0LL);
      v17 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v17 = NetworkManager_TypeInfo;
      }
      String = UnityEngine_PlayerPrefs__GetString(v17->static_fields->AUTHMD5_KEY_TYPE, v16, 0LL);
      if ( System_String__op_Inequality(v16, String, 0LL) )
      {
        v19 = 4;
        v20 = 1;
        v9 = 2;
      }
      else
      {
        if ( !v15 )
          goto LABEL_37;
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        v21 = CatAndMouseGame__MouseGame1(v15, 0, 0LL);
        if ( v21 )
        {
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          Dictionary = JsonManager__getDictionary(v21, 0LL);
          v24 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
          if ( !Dictionary )
            sub_1B8880C(0LL, v23);
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                   (Il2CppObject *)StringLiteral_24381/*"userCreateServer"*/,
                   (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            sub_1B8880C(0LL, v26);
          v29 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                  Item,
                  Item->klass->vtable[4].methodPtr);
          v30 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v30 = NetworkManager_TypeInfo;
          }
          static_fields = v30->static_fields;
          static_fields->userCreateServer = (struct System_String_o *)v29;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->userCreateServer, v29, v27, v28);
          v32 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v24,
                  (Il2CppObject *)StringLiteral_24424/*"userId"*/,
                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v32 )
            sub_1B8880C(0LL, v33);
          v34 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v32->klass->vtable[3].method)(
                  v32,
                  v32->klass->vtable[4].methodPtr);
          v35 = NetworkManager_TypeInfo->static_fields;
          v35->userId = (struct System_String_o *)v34;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->userId, v34, v36, v37);
          v38 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v24,
                  (Il2CppObject *)StringLiteral_16971/*"authKey"*/,
                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v38 )
            sub_1B8880C(0LL, v39);
          v40 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v38->klass->vtable[3].method)(
                  v38,
                  v38->klass->vtable[4].methodPtr);
          v41 = NetworkManager_TypeInfo->static_fields;
          v41->authKey = (struct System_String_o *)v40;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->authKey, v40, v42, v43);
          v44 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v24,
                  (Il2CppObject *)StringLiteral_23078/*"secretKey"*/,
                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v44 )
            sub_1B8880C(0LL, v45);
          v46 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v44->klass->vtable[3].method)(
                  v44,
                  v44->klass->vtable[4].methodPtr);
          v47 = NetworkManager_TypeInfo->static_fields;
          v47->secretKey = (struct System_String_o *)v46;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->secretKey, v46, v48, v49);
          if ( !SignedData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
          SignedData__RefreshSigningData(3, 0LL);
          v20 = 0;
          v19 = 16;
        }
        else
        {
LABEL_37:
          v19 = 4;
          v20 = 1;
        }
      }
      klass = v12->klass;
      v51 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v51;
          p_offset += 4;
          if ( !v51 )
            goto LABEL_42;
        }
        v53 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_42:
        v53 = sub_1BDA590(v12, System_IDisposable_TypeInfo, 0LL);
      }
      v5 = (NetworkManager_o *)(*(__int64 (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v53)(
                                 v12,
                                 *(_QWORD *)(v53 + 8));
      if ( v19 == 16 )
      {
        v4 = 0;
        if ( (v20 & 1) == 0 )
          return v4;
      }
    }
  }
  NetworkManager__ClearAuth(v5, v6);
  return v9;
}


bool __fastcall NetworkManager__ReadFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  System_String_o *FriendCodeFileName; // x19
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryReader_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x20
  NetworkManager_c *v12; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v14; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0

  if ( (byte_4A5A916 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A916 = 1;
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
  if ( !System_IO_File__Exists(FriendCodeFileName, 0LL) )
    return 0;
  v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(FriendCodeFileName, 0LL);
  v6 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v6, v5, 0LL);
  if ( !v6 )
    sub_1B8880C(v7, v8);
  v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._22_ReadString.method)(
          v6,
          v6->klass->vtable._23_ReadChars.methodPtr);
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->friendCode = (struct System_String_o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->friendCode, v11, v9, v10);
  v14 = 1;
  klass = v6->klass;
  v16 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_16;
    }
    v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v18 = sub_1BDA590(v6, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v18)(v6, *(_QWORD *)(v18 + 8));
  return v14;
}


bool __fastcall NetworkManager__ReadOldSignup(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  System_String_o *OldSignupFileName; // x19
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryReader_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x20
  NetworkManager_c *v12; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v14; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0

  if ( (byte_4A5A910 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A910 = 1;
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
  if ( !System_IO_File__Exists(OldSignupFileName, 0LL) )
    return 0;
  v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(OldSignupFileName, 0LL);
  v6 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v6, v5, 0LL);
  if ( !v6 )
    sub_1B8880C(v7, v8);
  v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._22_ReadString.method)(
          v6,
          v6->klass->vtable._23_ReadChars.methodPtr);
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->userName = (struct System_String_o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->userName, v11, v9, v10);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._15_ReadInt32.method)(
                                                         v6,
                                                         v6->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._15_ReadInt32.method)(
                                                    v6,
                                                    v6->klass->vtable._16_ReadUInt32.methodPtr);
  v14 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._15_ReadInt32.method)(
                                                  v6,
                                                  v6->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v6->klass;
  v16 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_16;
    }
    v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v18 = sub_1BDA590(v6, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v18)(v6, *(_QWORD *)(v18 + 8));
  return v14;
}


bool __fastcall NetworkManager__ReadServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6

  if ( (byte_4A5A968 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5009/*"DEFAULT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A968 = 1;
  }
  NetworkManager__SetServerSetting(
    this,
    (System_String_o *)StringLiteral_5009/*"DEFAULT"*/,
    0,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v2);
  return 0;
}


bool __fastcall NetworkManager__ReadSignup(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  System_String_o *SignupFileName; // x19
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryReader_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x20
  NetworkManager_c *v12; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v14; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0

  if ( (byte_4A5A911 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A911 = 1;
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
  if ( !System_IO_File__Exists(SignupFileName, 0LL) )
    return 0;
  v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(SignupFileName, 0LL);
  v6 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v6, v5, 0LL);
  if ( !v6 )
    sub_1B8880C(v7, v8);
  v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._22_ReadString.method)(
          v6,
          v6->klass->vtable._23_ReadChars.methodPtr);
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->userName = (struct System_String_o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->userName, v11, v9, v10);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._15_ReadInt32.method)(
                                                         v6,
                                                         v6->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._15_ReadInt32.method)(
                                                    v6,
                                                    v6->klass->vtable._16_ReadUInt32.methodPtr);
  v14 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._15_ReadInt32.method)(
                                                  v6,
                                                  v6->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v6->klass;
  v16 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_16;
    }
    v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v18 = sub_1BDA590(v6, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v18)(v6, *(_QWORD *)(v18 + 8));
  return v14;
}


void __fastcall NetworkManager__ReleseService(NetworkManager_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__ReplaceBaseField(RequestBase_o *request, bool isRefreshTime, const MethodInfo *method)
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

  if ( (byte_4A5A978 & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_18486/*"dateVer"*/);
    sub_1B885B0(&StringLiteral_18471/*"dataVer"*/);
    sub_1B885B0(&StringLiteral_16811/*"appVer"*/);
    sub_1B885B0(&StringLiteral_20206/*"idempotencyKey"*/);
    sub_1B885B0(&StringLiteral_21041/*"lastAccessTime"*/);
    byte_4A5A978 = 1;
  }
  Instance = ManagerConfig_TypeInfo;
  v12 = (System_Guid_o)0LL;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !request )
    goto LABEL_21;
  RequestBase__replaceField_41213112(
    request,
    (System_String_o *)StringLiteral_16811/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( !byte_4A589FC )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A589FC = 1;
  }
  v6 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v6 = DataManager_TypeInfo;
  }
  RequestBase__replaceField(request, (System_String_o *)StringLiteral_18471/*"dataVer"*/, v6->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1B8880C(Instance, isRefreshTime);
  if ( !byte_4A589FD )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A589FD = 1;
  }
  v7 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v7 = DataManager_TypeInfo;
  }
  RequestBase__replaceField_41212656(
    request,
    (System_String_o *)StringLiteral_18486/*"dateVer"*/,
    v7->static_fields->dateVersion,
    0LL);
  if ( isRefreshTime )
  {
    v8 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime((const MethodInfo *)v8);
    RequestBase__replaceField_41212656(request, (System_String_o *)StringLiteral_21041/*"lastAccessTime"*/, Time, 0LL);
    v12 = System_Guid__NewGuid(0LL);
    *(_QWORD *)&v13.fields._a = &v12;
    *(_QWORD *)&v13.fields._d = 0LL;
    v11 = System_Guid__ToString(v13, v10);
    RequestBase__replaceField_41213112(request, (System_String_o *)StringLiteral_20206/*"idempotencyKey"*/, v11, 0LL);
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
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5A982 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager__RequestApplicationUpdateCR_d__218_TypeInfo);
    byte_4A5A982 = 1;
  }
  v8 = sub_1B887FC(NetworkManager__RequestApplicationUpdateCR_d__218_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = storeName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)storeName, v9, v10);
  *(_QWORD *)(v8 + 40) = id;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)id, v11, v12);
  *(_QWORD *)(v8 + 48) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)callback, v13, v14);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5A97E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager__RequestCR_d__213_TypeInfo);
    byte_4A5A97E = 1;
  }
  v7 = sub_1B887FC(NetworkManager__RequestCR_d__213_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = work;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)work, v10, v11);
  *(float *)(v7 + 48) = delay;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall NetworkManager__RequestLogin(
        NetworkManager_o *this,
        NetworkManager_LoginCallbackFunc_o *callback,
        bool isEnforce,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1
  TopLoginRequest_o *v11; // x21
  const MethodInfo *v12; // x1

  if ( (byte_4A5A983 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_EndTopLogin__);
    sub_1B885B0(&Method_NetworkManager_getRequest_TopLoginRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5A983 = 1;
  }
  this->fields.loginCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.loginCallbackFunc,
    (int32_t)callback,
    isEnforce,
    (int32_t)method);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_NetworkManager_EndTopLogin__, v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TopLoginRequest___);
  v11 = (TopLoginRequest_o *)Request_object;
  if ( isEnforce )
  {
    if ( !Request_object )
LABEL_12:
      sub_1B8880C(Request_object, v10);
  }
  else
  {
    if ( !Request_object )
      goto LABEL_12;
    if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Request_object->klass->vtable[7].method)(
            Request_object,
            Request_object->klass->vtable[8].methodPtr) & 1) != 0 )
    {
      NetworkManager__EndLogin(this, v12);
      return;
    }
  }
  TopLoginRequest__beginRequest(v11, 0LL);
}


void __fastcall NetworkManager__RequestStart(RequestBase_o *request, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A5A97A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4A5A97A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, v4) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
    {
      NetworkManager__AddWaitStatus((NetworkManager_o *)Instance, request, v5);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( Instance )
      {
        NetworkManager__CommunicationStart((NetworkManager_o *)Instance, v4);
        return;
      }
    }
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
}


void __fastcall NetworkManager__SetAuth(
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
  int32_t v12; // w3
  struct NetworkManager_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5A923 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&SignedData_TypeInfo);
    byte_4A5A923 = 1;
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
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&static_fields->userId,
      (int32_t)userId,
      (int32_t)authKey,
      (int32_t)secretKey);
    v10 = NetworkManager_TypeInfo->static_fields;
    v10->authKey = authKey;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->authKey, (int32_t)authKey, v11, v12);
    v13 = NetworkManager_TypeInfo->static_fields;
    v13->secretKey = secretKey;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v13->secretKey, (int32_t)secretKey, v14, v15);
    if ( !SignedData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
    SignedData__RefreshSigningData(3, 0LL);
  }
}


void __fastcall NetworkManager__SetBaseField(RequestBase_o *request, const MethodInfo *method)
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

  if ( (byte_4A5A976 & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_18486/*"dateVer"*/);
    sub_1B885B0(&StringLiteral_18471/*"dataVer"*/);
    sub_1B885B0(&StringLiteral_24520/*"verCode"*/);
    sub_1B885B0(&StringLiteral_16811/*"appVer"*/);
    sub_1B885B0(&StringLiteral_20206/*"idempotencyKey"*/);
    sub_1B885B0(&StringLiteral_16971/*"authKey"*/);
    sub_1B885B0(&StringLiteral_24424/*"userId"*/);
    sub_1B885B0(&StringLiteral_21041/*"lastAccessTime"*/);
    byte_4A5A976 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  v10 = (System_Guid_o)0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( *(_QWORD *)(*((_QWORD *)Instance + 23) + 80LL) )
  {
    if ( !Instance[56] )
      j_il2cpp_runtime_class_init_0(Instance);
    if ( !request )
LABEL_26:
      sub_1B8880C(Instance, method);
    RequestBase__addField_41126952(
      request,
      (System_String_o *)StringLiteral_24424/*"userId"*/,
      NetworkManager_TypeInfo->static_fields->userId,
      0LL);
    RequestBase__addField_41126952(
      request,
      (System_String_o *)StringLiteral_16971/*"authKey"*/,
      NetworkManager_TypeInfo->static_fields->authKey,
      0LL);
  }
  Instance = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !request )
    goto LABEL_26;
  RequestBase__addField_41126952(
    request,
    (System_String_o *)StringLiteral_16811/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  if ( !byte_4A589FC )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A589FC = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v4 = DataManager_TypeInfo;
  }
  RequestBase__addField(request, (System_String_o *)StringLiteral_18471/*"dataVer"*/, v4->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  if ( !byte_4A589FD )
  {
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A589FD = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  RequestBase__addField_41133280(request, (System_String_o *)StringLiteral_18486/*"dateVer"*/, v5->static_fields->dateVersion, 0LL);
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime((const MethodInfo *)v6);
  RequestBase__addField_41133280(request, (System_String_o *)StringLiteral_21041/*"lastAccessTime"*/, Time, 0LL);
  RequestBase__addField_41126952(
    request,
    (System_String_o *)StringLiteral_24520/*"verCode"*/,
    ManagerConfig_TypeInfo->static_fields->verCode,
    0LL);
  v10 = System_Guid__NewGuid(0LL);
  *(_QWORD *)&v11.fields._a = &v10;
  *(_QWORD *)&v11.fields._d = 0LL;
  v9 = System_Guid__ToString(v11, v8);
  RequestBase__addField_41126952(request, (System_String_o *)StringLiteral_20206/*"idempotencyKey"*/, v9, 0LL);
}


void __fastcall NetworkManager__SetDataServerFolderName(System_String_o *folderName, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A5A951 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A951 = 1;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->dataServerFolder, (int32_t)folderName, v2, v3);
}


void __fastcall NetworkManager__SetDataServerRedirect(System_String_o *address, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A5A953 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A953 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->dataServerRedirectAddress = address;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->dataServerRedirectAddress, (int32_t)address, v2, v3);
}


void __fastcall NetworkManager__SetDebugSlowConnect(bool flag, const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__SetDeviceInfoField(RequestBase_o *request, const MethodInfo *method)
{
  Il2CppObject *deviceModel; // x20
  Il2CppObject *operatingSystem; // x0
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5A979 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18607/*"deviceInfo"*/);
    sub_1B885B0(&StringLiteral_24995/*"{0} / {1}"*/);
    byte_4A5A979 = 1;
  }
  deviceModel = (Il2CppObject *)UnityEngine_SystemInfo__get_deviceModel(0LL);
  operatingSystem = (Il2CppObject *)UnityEngine_SystemInfo__get_operatingSystem(0LL);
  v5 = System_String__Format_61721404((System_String_o *)StringLiteral_24995/*"{0} / {1}"*/, deviceModel, operatingSystem, 0LL);
  if ( !request )
    sub_1B8880C(v5, v6);
  RequestBase__addField_41126952(request, (System_String_o *)StringLiteral_18607/*"deviceInfo"*/, v5, 0LL);
}


void __fastcall NetworkManager__SetFriendCode(
        NetworkManager_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  int32_t v3; // w3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A5A917 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A917 = 1;
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
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&static_fields->friendCode,
      (int32_t)friendCode,
      (int32_t)method,
      v3);
  }
}


void __fastcall NetworkManager__SetGameServerRedirect(
        System_String_o *address,
        bool isSecurity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  NetworkManager_c *v6; // x0
  ServantStatusBattleListViewItem_o *static_fields; // x0

  if ( (byte_4A5A952 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A952 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = (ServantStatusBattleListViewItem_o *)v6->static_fields;
  static_fields[1].fields.sortStr1 = address;
  static_fields = (ServantStatusBattleListViewItem_o *)((char *)static_fields + 224);
  static_fields[-1].fields.isMine = isSecurity;
  sub_1B88554(static_fields, (int32_t)address, (int32_t)method, v3);
}


void __fastcall NetworkManager__SetSecurityServerSetting(bool security, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4A5A957 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A957 = 1;
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
  ServantStatusBattleListViewItem_o *static_fields; // x0
  struct NetworkManager_StaticFields *v15; // x0
  char v16; // w2
  int32_t v17; // w3
  struct NetworkManager_StaticFields *v18; // x0
  char v19; // w2
  int32_t v20; // w3
  struct NetworkManager_StaticFields *v21; // x0
  char v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1

  if ( (byte_4A5A969 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A969 = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  static_fields = (ServantStatusBattleListViewItem_o *)v13->static_fields;
  static_fields[1].klass = (ServantStatusBattleListViewItem_c *)type;
  sub_1B88554(static_fields + 1, (int32_t)type, isSecuritey, (int32_t)gameAddress);
  v15 = NetworkManager_TypeInfo->static_fields;
  v15->gameServerSettingAddress = gameAddress;
  v15 = (struct NetworkManager_StaticFields *)((char *)v15 + 184);
  LOBYTE(v15[-1].errorDialogResponseData) = isSecuritey;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v15, (int32_t)gameAddress, v16, v17);
  v18 = NetworkManager_TypeInfo->static_fields;
  v18->dataServerSettingAddress = dataAddress;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->dataServerSettingAddress, (int32_t)dataAddress, v19, v20);
  v21 = NetworkManager_TypeInfo->static_fields;
  v21->webServerSettingAddress = webAddress;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->webServerSettingAddress, (int32_t)webAddress, v22, v23);
  NetworkManager__SetServerSetting_38454792(this, v24);
}


void __fastcall NetworkManager__SetServerSetting_38454792(NetworkManager_o *this, const MethodInfo *method)
{
  struct NetworkManager_StaticFields *static_fields; // x8
  struct System_String_o *gameServerRedirectAddress; // x19
  System_String_o **p_gameServerRedirectAddress; // x8
  ManagerConfig_c *v5; // x0
  System_String_o *v6; // x1
  ServantStatusBattleListViewItem_o *p_gameServerAddress; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  NetworkManager_c *IsOnline; // x0
  const MethodInfo *v11; // x2
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  struct NetworkManager_StaticFields *v15; // x8
  struct System_String_o *webServerRedirectAddress; // x19
  struct System_String_o **p_webServerRedirectAddress; // x9
  ManagerConfig_c *v18; // x0
  struct System_String_o *v19; // x1

  if ( (byte_4A5A96A & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5A96A = 1;
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
  if ( !byte_4A58AEE )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A58AEE = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  NetworkManager_TypeInfo->static_fields->serverSecurity = v5->static_fields->ReleaseNetworkSecurity;
  if ( !byte_4A58AEF )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
    byte_4A58AEF = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = ManagerConfig_TypeInfo;
  }
  p_gameServerRedirectAddress = &v5->static_fields->ReleaseGameServerAddress;
LABEL_21:
  v6 = System_String__Concat_61707032(*p_gameServerRedirectAddress, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL);
  p_gameServerAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->gameServerAddress;
  p_gameServerAddress->klass = (ServantStatusBattleListViewItem_c *)v6;
  sub_1B88554(p_gameServerAddress, (int32_t)v6, v8, v9);
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
  if ( !byte_4A58AF1 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A58AF1 = 1;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->webServerAddress, (int32_t)v19, v13, v14);
}


void __fastcall NetworkManager__SetServerTimeChkMovie(int64_t serverTimeChkMovie, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4A5A91D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A91D = 1;
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
  System_String_o *SignedPackData; // x0
  __int64 v4; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *key; // x20
  System_String_o *v6; // x0
  SignedData_SignedPackData_o *outData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A977 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&SignedData_TypeInfo);
    sub_1B885B0(&StringLiteral_20206/*"idempotencyKey"*/);
    sub_1B885B0(&StringLiteral_20207/*"idempotencyKeySignature"*/);
    byte_4A5A977 = 1;
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
    SignedPackData = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(key, 0LL);
    if ( !request
      || (RequestBase__replaceField_41213112(request, (System_String_o *)StringLiteral_20206/*"idempotencyKey"*/, SignedPackData, 0LL),
          !outData) )
    {
LABEL_16:
      sub_1B8880C(SignedPackData, v4);
    }
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(outData->fields.value, 0LL);
    RequestBase__addField_41126952(request, (System_String_o *)StringLiteral_20207/*"idempotencyKeySignature"*/, v6, 0LL);
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

  if ( (byte_4A5A913 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A913 = 1;
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
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&static_fields->userName,
      (int32_t)userName,
      genderType,
      (int32_t)method);
    NetworkManager_TypeInfo->static_fields->genderType = genderType;
  }
}


void __fastcall NetworkManager__SetSignup_38468812(
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

  if ( (byte_4A5A914 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A914 = 1;
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->userName, (int32_t)userName, genderType, month);
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
  int32_t v3; // w3
  NetworkManager_c *v6; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A5A90F & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A90F = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->userAgent = userAgent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->userAgent, (int32_t)userAgent, (int32_t)method, v3);
  this->fields._isWaitUserAgent_k__BackingField = 0;
}


void __fastcall NetworkManager__SetWebServerRedirect(System_String_o *address, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_4A5A954 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A954 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webServerRedirectAddress = address;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->webServerRedirectAddress, (int32_t)address, v2, v3);
}


void __fastcall NetworkManager__SetupObfuscatedAccountId(
        NetworkManager_o *this,
        System_String_o *loginResultStr,
        const MethodInfo *method)
{
  bool IsObfuscatedAccountIdCached; // w0
  Il2CppObject *v5; // x0
  System_String_o *monitor; // x19

  if ( (byte_4A5A984 & 1) == 0 )
  {
    sub_1B885B0(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A5A984 = 1;
  }
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  IsObfuscatedAccountIdCached = PurchaseBehaviour__IsObfuscatedAccountIdCached(0LL);
  if ( loginResultStr && !IsObfuscatedAccountIdCached )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v5 = JsonManager__Deserialize_object_(
           (Il2CppObject *)loginResultStr,
           (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    if ( v5 )
    {
      monitor = (System_String_o *)v5[7].monitor;
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall NetworkManager__SwitchingDebugSlowConnect(const MethodInfo *method)
{
  ;
}


int32_t __fastcall NetworkManager__SyncAuth(NetworkManager_o *this, const MethodInfo *method)
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
  __int64 v40; // x1
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  System_String_o *OldPaymentFileName; // x0
  System_String_o *OldUnityPersistentDataPath; // x0
  System_String_o *v45; // x26
  System_String_o *FileNameNotConverted; // x1
  NetworkManager_o *v47; // x0
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  System_String_o *v51; // x24
  const MethodInfo *v52; // x1
  System_String_o *v53; // x0
  System_String_o *v55; // x26
  const MethodInfo *v56; // x1
  System_String_o *v57; // x0
  const MethodInfo *v58; // x1
  NetworkManager_o *v59; // x0
  const MethodInfo *v60; // x2

  if ( (byte_4A5A924 & 1) == 0 )
  {
    sub_1B885B0(&AccountingManager_TypeInfo);
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A924 = 1;
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
               0LL);
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
        System_IO_File__Copy_61896620(v15, v17, 1, 0LL);
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
      System_IO_File__Copy_61896620(v30, v32, 1, 0LL);
      OldSignup = NetworkManager__ReadOldSignup(v33, v34);
      if ( OldSignup )
      {
        NetworkManager__WriteSignup((NetworkManager_o *)OldSignup, v36);
        v37 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        OldSignupFileName = NetworkManager__getOldSignupFileName((const MethodInfo *)v37);
        System_IO_File__Delete(OldSignupFileName, 0LL);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
      if ( !Instance )
        sub_1B8880C(0LL, v40);
      if ( AccountingManager__ReadOldPayment((AccountingManager_o *)Instance, 0LL) )
      {
        v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
        if ( !v41 )
          sub_1B8880C(0LL, v42);
        AccountingManager__WritePayment((AccountingManager_o *)v41, 0LL);
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
    v45 = System_String__Concat_61707032(OldUnityPersistentDataPath, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL);
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    FileNameNotConverted = DatFileName__getFileNameNotConverted(16, 0LL);
    v47 = (NetworkManager_o *)System_String__Concat_61707032(v45, FileNameNotConverted, 0LL);
    if ( NetworkManager__LoadAuthMd5(v47, (System_String_o *)v47, v48) )
    {
      if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
      AndroidUtil__TransitionDatFile(16, 0LL);
      AndroidUtil__TransitionDatFile(18, 0LL);
      AndroidUtil__TransitionDatFile(21, 0LL);
      goto LABEL_50;
    }
    if ( !v14 )
      return 1;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v55 = NetworkManager__getAuthFileName(1, v49);
    v57 = NetworkManager__getAuthFileName(0, v56);
    System_IO_File__Copy_61896620(v55, v57, 1, 0LL);
    v59 = (NetworkManager_o *)NetworkManager__getAuthFileName(0, v58);
    AuthMd5 = NetworkManager__LoadAuthMd5(v59, (System_String_o *)v59, v60);
LABEL_11:
    if ( System_String__op_Equality(AuthMd5, v14, 0LL) && System_String__op_Equality(AuthMd5, String, 0LL) )
      return 0;
    if ( System_String__op_Equality(AuthMd5, v14, 0LL) && System_String__op_Inequality(AuthMd5, String, 0LL) )
    {
      v21 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v21 = NetworkManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v21->static_fields->AUTHMD5_KEY_TYPE, AuthMd5, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
    else if ( System_String__op_Inequality(AuthMd5, v14, 0LL) )
    {
      if ( System_String__op_Equality(AuthMd5, String, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v23 = NetworkManager__getAuthFileName(0, v22);
        v25 = NetworkManager__getAuthFileName(1, v24);
        System_IO_File__Copy_61896620(v23, v25, 1, 0LL);
      }
      else
      {
        if ( !System_String__op_Equality(v14, String, 0LL) )
          return 2;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v51 = NetworkManager__getAuthFileName(1, v50);
        v53 = NetworkManager__getAuthFileName(0, v52);
        System_IO_File__Copy_61896620(v51, v53, 1, 0LL);
      }
    }
LABEL_50:
    if ( __CFADD__(v2++, 1) )
      return 0;
  }
}


void __fastcall NetworkManager__TerminalStart(NetworkManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5A941 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5A941 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__InitConnect((CommonUI_o *)Instance, 0LL),
        TopHomeRequest__clearExpirationDate(0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__TimeUpdate(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4A5A90C & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager__TimeUpdate_d__81_TypeInfo);
    byte_4A5A90C = 1;
  }
  v2 = sub_1B887FC(NetworkManager__TimeUpdate_d__81_TypeInfo);
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
  System_Action_o *v13; // x20
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]

  if ( (byte_4A5A938 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_EndErrorDialog__);
    sub_1B885B0(&Method_NetworkManager_EndErrorWebView__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&WebViewManager_TypeInfo);
    byte_4A5A938 = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.errorCallbackFunc,
    (int32_t)callback,
    (int32_t)errorDetail,
    (int32_t)errorUrl);
  if ( errorUrl )
  {
    v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(errorTitle, errorUrl, v13, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v15, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_1B8880C(v16, v17);
    *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
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
      0LL);
  }
}


void __fastcall NetworkManager__WriteAuth(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  NetworkManager_o *AuthFileName; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  NetworkManager_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4A5A926 & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A926 = 1;
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


bool __fastcall NetworkManager__WriteAuthFile(NetworkManager_o *this, System_String_o *fname, const MethodInfo *method)
{
  System_IO_Stream_o *v4; // x23
  System_IO_BinaryWriter_o *v5; // x21
  System_Collections_Generic_Dictionary_object__object__o *v6; // x23
  __int64 v7; // x1
  ManagerConfig_c *v8; // x0
  NetworkManager_c *v9; // x0
  System_String_o *v10; // x23
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x24
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_String_o *v18; // x21
  NetworkManager_c *v19; // x0

  if ( (byte_4A5A927 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24381/*"userCreateServer"*/);
    sub_1B885B0(&StringLiteral_12502/*"SaveDataVer"*/);
    sub_1B885B0(&StringLiteral_16971/*"authKey"*/);
    sub_1B885B0(&StringLiteral_23078/*"secretKey"*/);
    sub_1B885B0(&StringLiteral_24424/*"userId"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A927 = 1;
  }
  v4 = (System_IO_Stream_o *)System_IO_File__OpenWrite(fname, 0LL);
  v5 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61945196(v5, v4, 0LL);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !v6 )
    sub_1B8880C(v8, v7);
  System_Collections_Generic_Dictionary_object__object___Add(
    v6,
    (Il2CppObject *)StringLiteral_12502/*"SaveDataVer"*/,
    (Il2CppObject *)ManagerConfig_TypeInfo->static_fields->SaveDataVer,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v6,
    (Il2CppObject *)StringLiteral_24381/*"userCreateServer"*/,
    (Il2CppObject *)v9->static_fields->gameServerAddress,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v6,
    (Il2CppObject *)StringLiteral_24424/*"userId"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->userId,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v6,
    (Il2CppObject *)StringLiteral_16971/*"authKey"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->authKey,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v6,
    (Il2CppObject *)StringLiteral_23078/*"secretKey"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->secretKey,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__toJson((Il2CppObject *)v6, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v11 = CatAndMouseGame__CatGame1(v10, 0, 0LL);
  v13 = v11;
  if ( !v5 )
    sub_1B8880C(v11, v12);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v5->klass->vtable._22_Write.method)(
    v5,
    v11,
    v5->klass[1]._1.image);
  klass = v5->klass;
  v15 = *(unsigned __int16 *)(&v5->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v5->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_17;
    }
    v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v17 = sub_1BDA590(v5, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v17)(v5, *(_QWORD *)(v17 + 8));
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  v18 = EncryptedPlayerPrefs__Md5(v13, 0LL);
  v19 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v19 = NetworkManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v19->static_fields->AUTHMD5_KEY_TYPE, v18, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  return 1;
}


void __fastcall NetworkManager__WriteFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  System_String_o *FriendCodeFileName; // x0
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryWriter_o *v6; // x19
  __int64 v7; // x1
  long double inited; // q0
  NetworkManager_c *v9; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0

  if ( (byte_4A5A918 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A918 = 1;
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
      v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FriendCodeFileName, 0LL);
      v6 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_61945196(v6, v5, 0LL);
      v9 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !v6 )
        sub_1B8880C(v9, v7);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v6->klass->vtable._22_Write.method)(
        v6,
        NetworkManager_TypeInfo->static_fields->friendCode,
        v6->klass[1]._1.image,
        inited);
      klass = v6->klass;
      v11 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_18;
        }
        v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_18:
        v13 = sub_1BDA590(v6, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v13)(v6, *(_QWORD *)(v13 + 8));
    }
  }
}


void __fastcall NetworkManager__WriteServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__WriteSignup(NetworkManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  NetworkManager_c *v3; // x0
  System_String_o *SignupFileName; // x0
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryWriter_o *v6; // x19
  __int64 v7; // x1
  long double inited; // q0
  NetworkManager_c *v9; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0

  if ( (byte_4A5A915 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A915 = 1;
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
      v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SignupFileName, 0LL);
      v6 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_61945196(v6, v5, 0LL);
      v9 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !v6 )
        sub_1B8880C(v9, v7);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v6->klass->vtable._22_Write.method)(
        v6,
        NetworkManager_TypeInfo->static_fields->userName,
        v6->klass[1]._1.image,
        inited);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
        v6,
        (unsigned int)NetworkManager_TypeInfo->static_fields->genderType,
        v6->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
        v6,
        (unsigned int)NetworkManager_TypeInfo->static_fields->month,
        v6->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
        v6,
        (unsigned int)NetworkManager_TypeInfo->static_fields->day,
        v6->klass->vtable._18_Write.methodPtr);
      klass = v6->klass;
      v11 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_18;
        }
        v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_18:
        v13 = sub_1BDA590(v6, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v13)(v6, *(_QWORD *)(v13 + 8));
    }
  }
}


void __fastcall NetworkManager___RequestCR_b__213_0(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  NetworkManager__OnBackgroundErrorCommunication(this, this->fields.communicationWork, 0LL, 1, v2);
}


System_String_o *__fastcall NetworkManager__getAuthFileName(bool isSlave, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x20
  int32_t v4; // w0
  System_String_o *FileName; // x2

  if ( (byte_4A5A948 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5A948 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  if ( isSlave )
    v4 = 17;
  else
    v4 = 16;
  FileName = DatFileName__getFileName(v4, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getBaseMockUrl(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A960 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A960 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->gameServerAddress;
}


System_String_o *__fastcall NetworkManager__getBaseUrl(bool isSecurity, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_4A5A95F & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20031/*"https://"*/);
    byte_4A5A95F = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_61707032(
           (System_String_o *)StringLiteral_20031/*"https://"*/,
           v2->static_fields->gameServerAddress,
           0LL);
}


System_String_o *__fastcall NetworkManager__getDataUrl(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A961 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A961 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->dataServerAddress;
}


System_DateTime_o __fastcall NetworkManager__getDateTime(const MethodInfo *method)
{
  System_DateTime_o v1; // x0
  NetworkManager_c *v2; // x8
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v5; // 0:x0.8
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_4A5A92C & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A92C = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0LL).fields._dateData;
  v5.fields._dateData = (uint64_t)&dateData;
  v1.fields._dateData = System_DateTime__ToUniversalTime(v5, 0LL).fields._dateData;
  v2 = NetworkManager_TypeInfo;
  dateData = v1.fields._dateData;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  v6.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__AddSeconds(v6, (double)v2->static_fields->serverOffsetTime, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getDateTime_38478840(int64_t t, const MethodInfo *method)
{
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v5; // 0:x0.8
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_4A5A92D & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A92D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v5.fields._dateData = (uint64_t)&NetworkManager_TypeInfo->static_fields->dtUnixEpoch;
  dateData = System_DateTime__AddSeconds(v5, (double)t, 0LL).fields._dateData;
  v6.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__ToUniversalTime(v6, 0LL);
}


System_String_o *__fastcall NetworkManager__getFriendCodeFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5A94C & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5A94C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(20, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getLocalDateTime(const MethodInfo *method)
{
  System_DateTime_o v1; // x0
  NetworkManager_c *v2; // x8
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v5; // 0:x0.8

  if ( (byte_4A5A92E & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A92E = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v1.fields._dateData = System_DateTime__get_Now(0LL).fields._dateData;
  v2 = NetworkManager_TypeInfo;
  dateData = v1.fields._dateData;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  v5.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__AddSeconds(v5, (double)v2->static_fields->serverOffsetTime, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getLocalDateTime_38479004(int64_t t, const MethodInfo *method)
{
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v5; // 0:x0.8
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_4A5A92F & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A92F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v5.fields._dateData = (uint64_t)&NetworkManager_TypeInfo->static_fields->dtUnixEpoch;
  dateData = System_DateTime__AddSeconds(v5, (double)t, 0LL).fields._dateData;
  v6.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__ToLocalTime(v6, 0LL);
}


int64_t __fastcall NetworkManager__getLocalTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  const MethodInfo *v2; // x1
  System_DateTime_o v4; // 0:x0.8

  if ( (byte_4A5A92A & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A92A = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4.fields._dateData = NetworkManager__getLocalDateTime((const MethodInfo *)v1).fields._dateData;
  return NetworkManager__getTime_38478060(v4, v2);
}


System_String_o *__fastcall NetworkManager__getMockFile(System_String_o *path, const MethodInfo *method)
{
  System_String_o *v3; // x0
  UnityEngine_Object_o *v4; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_String_o *text; // x20

  if ( (byte_4A5A964 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_TextAsset_TypeInfo);
    sub_1B885B0(&StringLiteral_9097/*"Mock/"*/);
    byte_4A5A964 = 1;
  }
  if ( !path )
    return 0LL;
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_9097/*"Mock/"*/, path, 0LL);
  v4 = UnityEngine_Resources__Load(v3, 0LL);
  if ( v4
    && (methodPtr_low = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v4->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    v6 = (UnityEngine_TextAsset_c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_TextAsset_TypeInfo
       ? v4
       : 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( !v7 )
    return 0LL;
  if ( !v6 )
    sub_1B8880C(v7, v8);
  text = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v6, 0LL);
  UnityEngine_Resources__UnloadAsset(v6, 0LL);
  return text;
}


int64_t __fastcall NetworkManager__getNextDayStartTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  int64_t Time; // x19
  int32_t Hour; // w20
  int32_t Minute; // w21
  const MethodInfo *dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v7; // 0:x0.8
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8

  if ( (byte_4A5A935 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A935 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v1).fields._dateData;
  Time = NetworkManager__getTime(dateData);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v7.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v7, 0LL);
  v8.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v8, 0LL);
  v9.fields._dateData = (uint64_t)&dateData;
  return Time - (System_DateTime__get_Second(v9, 0LL) + 60 * (Minute + 60 * Hour)) + 86400;
}


int64_t __fastcall NetworkManager__getNextDayTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  int32_t Year; // w19
  int Month; // w20
  int v4; // w21
  const MethodInfo *v5; // x1
  System_DateTime_o dateTime; // [xsp+8h] [xbp-38h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x0.8
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8

  if ( (byte_4A5A933 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A933 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime((const MethodInfo *)v1).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v9.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v9, 0LL);
  v10.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v10, 0LL);
  v11.fields._dateData = (uint64_t)&dateData;
  v4 = System_DateTime__get_Day(v11, 0LL) + 1;
  if ( v4 > System_DateTime__DaysInMonth(Year, Month, 0LL) )
  {
    if ( Month >= 12 )
    {
      ++Year;
      v4 = 1;
      Month = 1;
    }
    else
    {
      ++Month;
      v4 = 1;
    }
  }
  v12.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0LL;
  System_DateTime___ctor_62385856(v12, Year, Month, v4, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v13.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_38478060(v13, v5);
}


int64_t __fastcall NetworkManager__getNextDayTime_38479868(int32_t hour, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int64_t Time; // x20
  int32_t v5; // w21
  int64_t v6; // x22
  int32_t v7; // w20
  int32_t Minute; // w21
  const MethodInfo *dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8

  if ( (byte_4A5A934 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A934 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v3).fields._dateData;
  Time = NetworkManager__getTime(dateData);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v11.fields._dateData = (uint64_t)&dateData;
  v5 = System_DateTime__get_Hour(v11, 0LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v12.fields._dateData = (uint64_t)&dateData;
  if ( v5 >= hour )
    v6 = Time + 86400;
  else
    v6 = Time;
  v7 = System_DateTime__get_Hour(v12, 0LL);
  v13.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v13, 0LL);
  v14.fields._dateData = (uint64_t)&dateData;
  return v6 - (System_DateTime__get_Second(v14, 0LL) + 60 * (Minute + 60 * (v7 - hour)));
}


int64_t __fastcall NetworkManager__getNextMonthTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  int32_t Year; // w19
  int32_t Month; // w0
  int32_t v4; // w2
  int32_t v5; // w1
  const MethodInfo *v6; // x1
  System_DateTime_o dateTime; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v10; // 0:x0.8
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8

  if ( (byte_4A5A936 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A936 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime((const MethodInfo *)v1).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v10.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v10, 0LL);
  v11.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v11, 0LL);
  if ( Month < 12 )
    v4 = Month + 1;
  else
    v4 = 1;
  if ( Month <= 11 )
    v5 = Year;
  else
    v5 = Year + 1;
  v12.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0LL;
  System_DateTime___ctor_62385856(v12, v5, v4, 1, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v13.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_38478060(v13, v6);
}


int64_t __fastcall NetworkManager__getNextMonthTime_38480580(int32_t day, const MethodInfo *method)
{
  int32_t Year; // w20
  int Month; // w21
  const MethodInfo *v5; // x1
  System_DateTime_o dateTime; // [xsp+8h] [xbp-38h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x0.8
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8

  if ( (byte_4A5A937 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A937 = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0LL).fields._dateData;
  v9.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v9, 0LL);
  v10.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v10, 0LL);
  v11.fields._dateData = (uint64_t)&dateData;
  if ( System_DateTime__get_Day(v11, 0LL) < day )
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
  v12.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0LL;
  System_DateTime___ctor_62385856(v12, Year, Month, day, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v13.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_38478060(v13, v5);
}


System_String_o *__fastcall NetworkManager__getOldAuthFileName(const MethodInfo *method)
{
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5A947 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5A947 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(16, 0LL);
  return System_String__Concat_61718292(temporaryCachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getOldSignupFileName(const MethodInfo *method)
{
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5A949 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5A949 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_61718292(temporaryCachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


Il2CppObject *__fastcall NetworkManager__getRequest_object_(
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo_2F019D8 *method)
{
  const MethodInfo_2DD69CC **rgctx_data; // x8
  Il2CppObject *Instance_object; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  ServantStatusBattleListViewItem_o *v8; // x21
  System_Delegate_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Delegate_o *v12; // x8
  NetworkManager_ResultCallbackFunc_c *v13; // x1

  rgctx_data = (const MethodInfo_2DD69CC **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    rgctx_data = (const MethodInfo_2DD69CC **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = (const MethodInfo_2DD69CC **)method->rgctx_data;
    }
  }
  Instance_object = System_Activator__CreateInstance_object_(*rgctx_data);
  if ( !Instance_object )
    sub_1B8880C(0LL, v6);
  v7 = Instance_object;
  v8 = (ServantStatusBattleListViewItem_o *)&Instance_object[1];
  v9 = System_Delegate__Combine((System_Delegate_o *)Instance_object[1].klass, (System_Delegate_o *)func, 0LL);
  v12 = v9;
  if ( !v9 )
    goto LABEL_9;
  v13 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( (NetworkManager_ResultCallbackFunc_c *)v9->klass != NetworkManager_ResultCallbackFunc_TypeInfo
    || (v8->klass = (ServantStatusBattleListViewItem_c *)v9, (NetworkManager_ResultCallbackFunc_c *)v9->klass != v13) )
  {
    sub_1B88ACC(v9);
LABEL_9:
    v8->klass = (ServantStatusBattleListViewItem_c *)v12;
  }
  sub_1B88554(v8, (int32_t)v12, v10, v11);
  return v7;
}


System_DateTime_o __fastcall NetworkManager__getServerDateTime(const MethodInfo *method)
{
  System_DateTime_o v1; // x0
  NetworkManager_c *v2; // x8
  System_TimeSpan_o value; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8
  System_TimeSpan_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_TimeSpan_o v11; // 0:x1.8

  if ( (byte_4A5A930 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A930 = 1;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0LL).fields._dateData;
  v6.fields._dateData = (uint64_t)&dateData;
  v1.fields._dateData = System_DateTime__ToUniversalTime(v6, 0LL).fields._dateData;
  v2 = NetworkManager_TypeInfo;
  dateData = v1.fields._dateData;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  v7.fields._dateData = (uint64_t)&dateData;
  dateData = System_DateTime__AddSeconds(v7, (double)v2->static_fields->serverOffsetTime, 0LL).fields._dateData;
  v8.fields._ticks = (int64_t)&value;
  value.fields._ticks = 0LL;
  System_TimeSpan___ctor_62611896(v8, 9, 0, 0, 0LL);
  v11.fields._ticks = value.fields._ticks;
  v9.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v9, v11, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getServerDateTime_38479168(int64_t t, const MethodInfo *method)
{
  System_TimeSpan_o value; // [xsp+0h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_TimeSpan_o v7; // 0:x0.8
  System_DateTime_o v8; // 0:x0.8
  System_TimeSpan_o v10; // 0:x1.8

  if ( (byte_4A5A931 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A931 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v6.fields._dateData = (uint64_t)&NetworkManager_TypeInfo->static_fields->dtUnixEpoch;
  value.fields._ticks = 0LL;
  dateData = System_DateTime__AddSeconds(v6, (double)t, 0LL).fields._dateData;
  v7.fields._ticks = (int64_t)&value;
  System_TimeSpan___ctor_62611896(v7, 9, 0, 0, 0LL);
  v10.fields._ticks = value.fields._ticks;
  v8.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v8, v10, 0LL);
}


System_String_o *__fastcall NetworkManager__getServerSettingFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5A94B & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5A94B = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(19, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


int64_t __fastcall NetworkManager__getServerTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  const MethodInfo *v2; // x1
  System_DateTime_o v4; // 0:x0.8

  if ( (byte_4A5A92B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A92B = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v4.fields._dateData = NetworkManager__getServerDateTime((const MethodInfo *)v1).fields._dateData;
  return NetworkManager__getTime_38478060(v4, v2);
}


System_String_o *__fastcall NetworkManager__getSignupFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5A94A & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5A94A = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
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

  if ( (byte_4A5A963 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4A5A963 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v8);
  v10 = (UnityEngine_MonoBehaviour_o *)Instance;
  updated = NetworkManager__RequestApplicationUpdateCR((NetworkManager_o *)Instance, storeName, id, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652(v10, updated, 0LL);
}


System_String_o *__fastcall NetworkManager__getSummonDetailUrl(int32_t gachaId, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Object_array *v4; // x20
  System_String_o *BaseUrl; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x19
  __int64 v28; // x0
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF
  int64_t UserId; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5A970 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&StringLiteral_550/*"&gachaId="*/);
    sub_1B885B0(&StringLiteral_24677/*"webview/summonDetail?userId="*/);
    byte_4A5A970 = 1;
  }
  v4 = (System_Object_array *)sub_1B88658(object___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(0, v3);
  if ( !v4 )
    sub_1B8880C(BaseUrl, v6);
  v9 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B886EC(BaseUrl, v4->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
  }
  if ( !v4->max_length )
    goto LABEL_26;
  v4->m_Items[0] = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v4->m_Items, (int32_t)v9, v7, v8);
  BaseUrl = (System_String_o *)StringLiteral_24677/*"webview/summonDetail?userId="*/;
  if ( StringLiteral_24677/*"webview/summonDetail?userId="*/ )
  {
    BaseUrl = (System_String_o *)sub_1B886EC(StringLiteral_24677/*"webview/summonDetail?userId="*/, v4->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
    v6 = StringLiteral_24677/*"webview/summonDetail?userId="*/;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4->max_length <= 1 )
    goto LABEL_26;
  v4->m_Items[1] = (Il2CppObject *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->m_Items[1], v6, v10, v11);
  UserId = NetworkManager__get_UserId(v12);
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserId, v13, v14, v15);
  v18 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B886EC(BaseUrl, v4->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
  }
  if ( v4->max_length <= 2 )
    goto LABEL_26;
  v4->m_Items[2] = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->m_Items[2], (int32_t)v18, v16, v17);
  BaseUrl = (System_String_o *)StringLiteral_550/*"&gachaId="*/;
  if ( StringLiteral_550/*"&gachaId="*/ )
  {
    BaseUrl = (System_String_o *)sub_1B886EC(StringLiteral_550/*"&gachaId="*/, v4->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
    v6 = StringLiteral_550/*"&gachaId="*/;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4->max_length <= 3 )
    goto LABEL_26;
  v4->m_Items[3] = (Il2CppObject *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->m_Items[3], v6, v19, v20);
  v29 = gachaId;
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v21, v22, v23);
  v26 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B886EC(BaseUrl, v4->obj.klass->_1.element_class);
    if ( !BaseUrl )
    {
LABEL_27:
      v28 = sub_1B88830(BaseUrl);
      sub_1B886D8(v28, 0LL);
    }
  }
  if ( v4->max_length <= 4 )
LABEL_26:
    sub_1B88814(BaseUrl, v6);
  v4->m_Items[4] = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->m_Items[4], (int32_t)v26, v24, v25);
  return System_String__Concat_61718484(v4, 0LL);
}


int64_t __fastcall NetworkManager__getTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x8
  const MethodInfo *v2; // x1
  int64_t Time_38478060; // x0
  System_DateTime_o v5; // 0:x0.8

  if ( (byte_4A5A928 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A928 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  if ( (v1->static_fields->nowTime & 0x8000000000000000LL) != 0 )
  {
    if ( !v1->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v1);
    v5.fields._dateData = NetworkManager__getDateTime(method).fields._dateData;
    Time_38478060 = NetworkManager__getTime_38478060(v5, v2);
    v1 = NetworkManager_TypeInfo;
    NetworkManager_TypeInfo->static_fields->nowTime = Time_38478060;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->nowTime;
}


int64_t __fastcall NetworkManager__getTime_38478060(System_DateTime_o dateTime, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  uint64_t v3; // x19
  double TotalSeconds; // d0
  int64_t ticks; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v8; // 0:x0.8
  System_TimeSpan_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x1.8

  dateData = dateTime.fields._dateData;
  if ( (byte_4A5A929 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&System_TimeSpan_TypeInfo);
    byte_4A5A929 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  ticks = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  v3 = v2->static_fields->dtUnixEpoch.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v8.fields._dateData = (uint64_t)&dateData;
  v10.fields._dateData = v3;
  ticks = System_DateTime__Subtract(v8, v10, 0LL).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v9.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v9, 0LL);
  if ( TotalSeconds == INFINITY )
    return 0x8000000000000000LL;
  else
    return (__int64)TotalSeconds;
}


int64_t __fastcall NetworkManager__getTodayStartTime(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  int64_t Time; // x19
  int32_t Hour; // w20
  int32_t Minute; // w21
  const MethodInfo *dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v7; // 0:x0.8
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8

  if ( (byte_4A5A932 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A932 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = (const MethodInfo *)NetworkManager__getServerDateTime((const MethodInfo *)v1).fields._dateData;
  Time = NetworkManager__getTime(dateData);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v7.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v7, 0LL);
  v8.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v8, 0LL);
  v9.fields._dateData = (uint64_t)&dateData;
  return Time - (System_DateTime__get_Second(v9, 0LL) + 60 * (Minute + 60 * Hour));
}


System_String_o *__fastcall NetworkManager__getUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  return NetworkServicePluginScript__GetUserAgentString(0LL);
}


System_String_o *__fastcall NetworkManager__getWebUrl(
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
  __int64 v13; // x1
  __int64 *v14; // x8
  NetworkManager_c *v15; // x0
  System_String_o *v16; // x21
  System_String_o **v17; // x9
  __int64 *v18; // x8
  NetworkManager_c *v19; // x0
  System_String_o *v20; // x19
  System_String_o **v21; // x9
  NetworkManager_c *v22; // x0
  int64_t Time; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  int32_t v25; // w21
  int32_t v26; // w20
  System_String_o *v27; // x2
  __int64 *v28; // x8
  System_String_o *v29; // x0
  __int64 *v30; // x8
  System_String_o *v31; // x1
  int64_t v33; // [xsp+0h] [xbp-40h] BYREF
  int64_t v34; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5A962 & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_21042/*"lastAccessTime="*/);
    sub_1B885B0(&StringLiteral_559/*"&v="*/);
    sub_1B885B0(&StringLiteral_19994/*"http://"*/);
    sub_1B885B0(&StringLiteral_1211/*"/webview/"*/);
    sub_1B885B0(&StringLiteral_1873/*"?"*/);
    sub_1B885B0(&StringLiteral_1881/*"?lastAccessTime="*/);
    sub_1B885B0(&StringLiteral_20030/*"https:"*/);
    sub_1B885B0(&StringLiteral_553/*"&lastAccessTime="*/);
    sub_1B885B0(&StringLiteral_19417/*"file:"*/);
    sub_1B885B0(&StringLiteral_20031/*"https://"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_1884/*"?v="*/);
    sub_1B885B0(&StringLiteral_19993/*"http:"*/);
    byte_4A5A962 = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  v33 = 0LL;
  v34 = 0LL;
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
    v18 = &StringLiteral_20031/*"https://"*/;
    v19 = NetworkManager_TypeInfo;
    if ( !v11 )
      v18 = &StringLiteral_19994/*"http://"*/;
    v20 = (System_String_o *)*v18;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v19 = NetworkManager_TypeInfo;
    }
    v21 = (System_String_o **)&StringLiteral_1211/*"/webview/"*/;
    if ( !isWebView )
      v21 = (System_String_o **)&StringLiteral_1/*""*/;
    v12 = System_String__Concat_61718292(v20, v19->static_fields->webServerAddress, *v21, 0LL);
    goto LABEL_33;
  }
  v11 = 0;
  if ( !path )
    goto LABEL_26;
LABEL_15:
  v12 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19417/*"file:"*/, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
    goto LABEL_34;
  v12 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19993/*"http:"*/, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
    goto LABEL_34;
  v12 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_20030/*"https:"*/, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
    goto LABEL_34;
  v14 = &StringLiteral_20031/*"https://"*/;
  v15 = NetworkManager_TypeInfo;
  if ( !v11 )
    v14 = &StringLiteral_19994/*"http://"*/;
  v16 = (System_String_o *)*v14;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  v17 = (System_String_o **)&StringLiteral_1211/*"/webview/"*/;
  if ( !isWebView )
    v17 = (System_String_o **)&StringLiteral_1/*""*/;
  v12 = System_String__Concat_61720296(v16, v15->static_fields->webServerAddress, *v17, path, 0LL);
LABEL_33:
  path = v12;
LABEL_34:
  if ( isWebView )
  {
    if ( !path )
      sub_1B8880C(v12, v13);
    if ( System_String__StartsWith(path, (System_String_o *)StringLiteral_19993/*"http:"*/, 0LL)
      || System_String__StartsWith(path, (System_String_o *)StringLiteral_20030/*"https:"*/, 0LL) )
    {
      v22 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime((const MethodInfo *)v22);
      static_fields = NetworkManager_TypeInfo->static_fields;
      v33 = Time / static_fields->WebCacheTime;
      v34 = Time;
      v25 = System_String__IndexOf_61738608(path, static_fields->webServerAddress, 0LL);
      v26 = System_String__IndexOf_61738608(path, (System_String_o *)StringLiteral_1873/*"?"*/, 0LL);
      if ( (v25 & 0x80000000) == 0 )
      {
        v27 = System_Int64__ToString((int64_t)&v33, 0LL);
        if ( (v26 & 0x80000000) != 0 )
          v28 = &StringLiteral_1884/*"?v="*/;
        else
          v28 = &StringLiteral_559/*"&v="*/;
        v31 = (System_String_o *)*v28;
        return System_String__Concat_61718292(path, v31, v27, 0LL);
      }
      if ( (v26 & 0x80000000) != 0 )
      {
        v29 = System_Int64__ToString((int64_t)&v34, 0LL);
        v30 = &StringLiteral_1881/*"?lastAccessTime="*/;
        goto LABEL_49;
      }
      if ( (System_String__IndexOf_61738608(path, (System_String_o *)StringLiteral_21042/*"lastAccessTime="*/, 0LL) & 0x80000000) != 0 )
      {
        v29 = System_Int64__ToString((int64_t)&v34, 0LL);
        v30 = &StringLiteral_553/*"&lastAccessTime="*/;
LABEL_49:
        v31 = (System_String_o *)*v30;
        v27 = v29;
        return System_String__Concat_61718292(path, v31, v27, 0LL);
      }
    }
  }
  return path;
}


System_String_o *__fastcall NetworkManager__getWebViewAddress(System_String_o *path, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_4A5A96D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A96D = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_61707032(v3->static_fields->webViewBaseURL, path, 0LL);
}


System_String_o *__fastcall NetworkManager__getWebViewAddress_38491324(int32_t addressType, const MethodInfo *method)
{
  __int64 *v3; // x8
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *v7; // x19
  NetworkManager_c *v8; // x0
  System_Collections_Generic_Dictionary_object__object__o *webViewAddress; // x0
  NetworkManager_c *v10; // x0

  if ( (byte_4A5A96F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22943/*"rights"*/);
    sub_1B885B0(&StringLiteral_23671/*"summonDetail"*/);
    sub_1B885B0(&StringLiteral_18436/*"dBanner"*/);
    sub_1B885B0(&StringLiteral_23888/*"terms"*/);
    sub_1B885B0(&StringLiteral_17391/*"boxGacha"*/);
    sub_1B885B0(&StringLiteral_22047/*"news"*/);
    sub_1B885B0(&StringLiteral_18327/*"credit"*/);
    sub_1B885B0(&StringLiteral_19902/*"help"*/);
    sub_1B885B0(&StringLiteral_23414/*"spdeal"*/);
    sub_1B885B0(&StringLiteral_18218/*"contact"*/);
    sub_1B885B0(&StringLiteral_23822/*"tBanner"*/);
    sub_1B885B0(&StringLiteral_18561/*"deleteAccount"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_24609/*"warBoard"*/);
    sub_1B885B0(&StringLiteral_22603/*"privacyPolicy"*/);
    byte_4A5A96F = 1;
  }
  v3 = &StringLiteral_19902/*"help"*/;
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
        v3 = &StringLiteral_22047/*"news"*/;
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
                  (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
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
                                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        }
        sub_1B8880C(webViewAddress, method);
      }
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->IOS_ExaminationNewsUrl;
    case 1:
      v3 = &StringLiteral_23671/*"summonDetail"*/;
      goto LABEL_23;
    case 2:
      goto LABEL_23;
    case 3:
      v3 = &StringLiteral_18218/*"contact"*/;
      goto LABEL_23;
    case 4:
      v3 = &StringLiteral_23888/*"terms"*/;
      goto LABEL_23;
    case 5:
      v3 = &StringLiteral_18327/*"credit"*/;
      goto LABEL_23;
    case 6:
      v3 = &StringLiteral_22943/*"rights"*/;
      goto LABEL_23;
    case 7:
      v3 = &StringLiteral_23822/*"tBanner"*/;
      goto LABEL_23;
    case 8:
      v3 = &StringLiteral_23414/*"spdeal"*/;
      goto LABEL_23;
    case 9:
      v3 = &StringLiteral_17391/*"boxGacha"*/;
      goto LABEL_23;
    case 10:
      v3 = &StringLiteral_18436/*"dBanner"*/;
      goto LABEL_23;
    case 11:
      v3 = &StringLiteral_22603/*"privacyPolicy"*/;
      goto LABEL_23;
    case 12:
      v3 = &StringLiteral_18561/*"deleteAccount"*/;
      goto LABEL_23;
    case 13:
      v3 = &StringLiteral_24609/*"warBoard"*/;
      goto LABEL_23;
    default:
      return (System_String_o *)StringLiteral_1/*""*/;
  }
}


System_String_o *__fastcall NetworkManager__getWebViewFullAddress(System_String_o *path, const MethodInfo *method)
{
  System_String_o *v2; // x19
  const MethodInfo *v3; // x1

  v2 = path;
  if ( (byte_4A5A96E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20030/*"https:"*/);
    path = (System_String_o *)sub_1B885B0(&StringLiteral_19993/*"http:"*/);
    byte_4A5A96E = 1;
  }
  if ( !v2 )
    sub_1B8880C(path, method);
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_19993/*"http:"*/, 0LL)
    || System_String__StartsWith(v2, (System_String_o *)StringLiteral_20030/*"https:"*/, 0LL) )
  {
    return v2;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getWebViewAddress(v2, v3);
}


System_String_o *__fastcall NetworkManager__get_ErrorDialogResponseData(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A974 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A974 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->errorDialogResponseData;
}


int64_t __fastcall NetworkManager__get_FriendCode(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  int64_t result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5A908 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A908 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  result = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  if ( System_Int64__TryParse(v1->static_fields->friendCode, &result, 0LL) )
    return result;
  else
    return -1LL;
}


bool __fastcall NetworkManager__get_IsLogin(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A906 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A906 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->isLogin;
}


bool __fastcall NetworkManager__get_IsRebootBlock(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A902 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A902 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->isRebootBlock;
}


System_String_o *__fastcall NetworkManager__get_UserCreateServer(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4A5A905 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A905 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->userCreateServer;
}


int64_t __fastcall NetworkManager__get_UserId(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0
  System_String_o *userId; // x8

  if ( (byte_4A5A907 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A907 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  userId = v1->static_fields->userId;
  if ( !userId )
    return -1LL;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    userId = NetworkManager_TypeInfo->static_fields->userId;
  }
  return System_Int64__Parse(userId, 0LL);
}


bool __fastcall NetworkManager__get_isWaitUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  return this->fields._isWaitUserAgent_k__BackingField;
}


void __fastcall NetworkManager__set_ErrorDialogResponseData(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x8

  if ( (byte_4A5A975 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A975 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->errorDialogResponseData = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->errorDialogResponseData, (int32_t)value, v2, v3);
}


void __fastcall NetworkManager__set_isWaitUserAgent(NetworkManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._isWaitUserAgent_k__BackingField = value;
}


void __fastcall NetworkManager__setupDataServerAddress(
        NetworkManager_o *this,
        int32_t addressType,
        const MethodInfo *method)
{
  System_String_o *streamingAssetsPath; // x19
  ManagerConfig_c *v5; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x19
  NetworkManager_c *v9; // x8
  ServantStatusBattleListViewItem_o *p_dataServerAddress; // x0
  __int64 v11; // x1
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *dataServerAddress; // x0
  NetworkManager_c *v14; // x0
  struct NetworkManager_StaticFields *v15; // x8
  System_String_o *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x19
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_String_o *dataServerFolder; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  struct ManagerConfig_StaticFields *v33; // x8
  System_String_o *ReleaseDataServerAddress; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  NetworkManager_c *v37; // x8
  struct System_String_o *dataServerRedirectAddress; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_String_o *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x1
  System_String_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  NetworkManager_c *v51; // x8
  ServantStatusBattleListViewItem_c *v52; // x1
  ServantStatusBattleListViewItem_o *v53; // x0
  NetworkManager_c *v54; // x0

  if ( (byte_4A5A96B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1137/*"/AssetStorages/"*/);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    sub_1B885B0(&StringLiteral_20907/*"jar:"*/);
    byte_4A5A96B = 1;
  }
  switch ( addressType )
  {
    case 0:
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      streamingAssetsPath = UnityEngine_Application__get_streamingAssetsPath(0LL);
      v5 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v5 = ManagerConfig_TypeInfo;
      }
      v8 = System_String__Concat_61720296(
             streamingAssetsPath,
             (System_String_o *)StringLiteral_1137/*"/AssetStorages/"*/,
             v5->static_fields->PlatformName,
             (System_String_o *)StringLiteral_1123/*"/"*/,
             0LL);
      v9 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v9 = NetworkManager_TypeInfo;
      }
      p_dataServerAddress = (ServantStatusBattleListViewItem_o *)&v9->static_fields->dataServerAddress;
      p_dataServerAddress->klass = (ServantStatusBattleListViewItem_c *)v8;
      sub_1B88554(p_dataServerAddress, (int32_t)v8, v6, v7);
      static_fields = NetworkManager_TypeInfo->static_fields;
      dataServerAddress = static_fields->dataServerAddress;
      if ( !dataServerAddress )
        goto LABEL_59;
      if ( System_String__StartsWith(dataServerAddress, static_fields->FILE_URL_SCHEME, 0LL) )
        return;
      v14 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v14 = NetworkManager_TypeInfo;
      }
      v15 = v14->static_fields;
      v16 = v15->dataServerAddress;
      dataServerAddress = System_String__Concat_61707032(
                            (System_String_o *)StringLiteral_20907/*"jar:"*/,
                            v15->FILE_URL_SCHEME,
                            0LL);
      if ( !v16 )
LABEL_59:
        sub_1B8880C(dataServerAddress, v11);
      if ( System_String__StartsWith(v16, dataServerAddress, 0LL) )
        return;
      v54 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v54 = NetworkManager_TypeInfo;
      }
      v48 = System_String__Concat_61707032(
              v54->static_fields->FILE_URL_SCHEME,
              v54->static_fields->dataServerAddress,
              0LL);
LABEL_53:
      v51 = NetworkManager_TypeInfo;
      goto LABEL_54;
    case 1:
      v19 = sub_1B88658(string___TypeInfo, 5LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A58AF0 )
      {
        sub_1B885B0(&ManagerConfig_TypeInfo);
        byte_4A58AF0 = 1;
      }
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( !v19 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v19 + 24) )
        goto LABEL_58;
      v20 = *(_QWORD *)(*(_QWORD *)&dataServerAddress[7].fields + 152LL);
      *(_QWORD *)(v19 + 32) = v20;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 32), v20, v17, v18);
      if ( *(_DWORD *)(v19 + 24) <= 1u )
        goto LABEL_58;
      v23 = StringLiteral_1123/*"/"*/;
      *(_QWORD *)(v19 + 40) = StringLiteral_1123/*"/"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 40), v23, v21, v22);
      if ( *(_DWORD *)(v19 + 24) <= 2u )
        goto LABEL_58;
      dataServerFolder = NetworkManager_TypeInfo->static_fields->dataServerFolder;
      *(_QWORD *)(v19 + 48) = dataServerFolder;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 48), (int32_t)dataServerFolder, v24, v25);
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( *(_DWORD *)(v19 + 24) <= 3u )
        goto LABEL_58;
      v29 = *(_QWORD *)(*(_QWORD *)&dataServerAddress[7].fields + 128LL);
      *(_QWORD *)(v19 + 56) = v29;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 56), v29, v27, v28);
      if ( *(_DWORD *)(v19 + 24) <= 4u )
        goto LABEL_58;
      v32 = StringLiteral_1123/*"/"*/;
      goto LABEL_49;
    case 2:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A58AF0 )
      {
        sub_1B885B0(&ManagerConfig_TypeInfo);
        byte_4A58AF0 = 1;
      }
      if ( ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        v33 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v33->ReleaseDataServerAddress;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v33 = ManagerConfig_TypeInfo->static_fields;
        ReleaseDataServerAddress = v33->ReleaseDataServerAddress;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v33 = ManagerConfig_TypeInfo->static_fields;
        }
      }
      v48 = System_String__Concat_61720296(
              ReleaseDataServerAddress,
              (System_String_o *)StringLiteral_1123/*"/"*/,
              v33->PlatformName,
              (System_String_o *)StringLiteral_1123/*"/"*/,
              0LL);
      goto LABEL_53;
    case 3:
      dataServerAddress = (System_String_o *)sub_1B88658(string___TypeInfo, 5LL);
      v19 = (__int64)dataServerAddress;
      v37 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v37 = NetworkManager_TypeInfo;
      }
      if ( !v19 )
        goto LABEL_59;
      if ( !*(_DWORD *)(v19 + 24) )
        goto LABEL_58;
      dataServerRedirectAddress = v37->static_fields->dataServerRedirectAddress;
      *(_QWORD *)(v19 + 32) = dataServerRedirectAddress;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)dataServerRedirectAddress, v35, v36);
      if ( *(_DWORD *)(v19 + 24) <= 1u )
        goto LABEL_58;
      v41 = StringLiteral_1123/*"/"*/;
      *(_QWORD *)(v19 + 40) = StringLiteral_1123/*"/"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 40), v41, v39, v40);
      if ( *(_DWORD *)(v19 + 24) <= 2u )
        goto LABEL_58;
      v44 = NetworkManager_TypeInfo->static_fields->dataServerFolder;
      *(_QWORD *)(v19 + 48) = v44;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 48), (int32_t)v44, v42, v43);
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( *(_DWORD *)(v19 + 24) <= 3u
        || (v47 = *(_QWORD *)(*(_QWORD *)&dataServerAddress[7].fields + 128LL),
            *(_QWORD *)(v19 + 56) = v47,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 56), v47, v45, v46),
            *(_DWORD *)(v19 + 24) <= 4u) )
      {
LABEL_58:
        sub_1B88814(dataServerAddress, v11);
      }
      v32 = StringLiteral_1123/*"/"*/;
LABEL_49:
      *(_QWORD *)(v19 + 64) = v32;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 64), v32, v30, v31);
      v48 = System_String__Concat_61720560((System_String_array *)v19, 0LL);
      v51 = NetworkManager_TypeInfo;
LABEL_54:
      v52 = (ServantStatusBattleListViewItem_c *)v48;
      v53 = (ServantStatusBattleListViewItem_o *)&v51->static_fields->dataServerAddress;
      v53->klass = v52;
      sub_1B88554(v53, (int32_t)v52, v49, v50);
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
  NetworkManager_c *v6; // x0
  ServantStatusBattleListViewItem_o *p_webViewBaseURL; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *webViewAddress; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *currentKey; // x21
  Il2CppObject *Item; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x22
  NetworkManager_c *v18; // x0
  System_Collections_Generic_Dictionary_object__object__o *v19; // x0
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5A96C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_18218/*"contact"*/);
    sub_1B885B0(&StringLiteral_18561/*"deleteAccount"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_22603/*"privacyPolicy"*/);
    byte_4A5A96C = 1;
  }
  v6 = NetworkManager_TypeInfo;
  memset(&v24, 0, sizeof(v24));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  p_webViewBaseURL = (ServantStatusBattleListViewItem_o *)&v6->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (ServantStatusBattleListViewItem_c *)baseURL;
  sub_1B88554(p_webViewBaseURL, (int32_t)baseURL, (int32_t)filePassInfo, (int32_t)method);
  webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)NetworkManager_TypeInfo->static_fields->webViewAddress;
  if ( !webViewAddress
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          webViewAddress,
          (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        !filePassInfo)
    || (webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
                                                                                      (const MethodInfo_31C6EA8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__)) == 0LL )
  {
    sub_1B8880C(webViewAddress, v8);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v23,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)webViewAddress,
    (const MethodInfo_3422D74 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v24,
            (const MethodInfo_32C510C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    if ( !v10 )
      break;
    currentKey = v24.fields._currentKey;
    if ( !v24.fields._currentKey )
      sub_1B8880C(v10, v11);
    if ( System_String__Equals_61715348(
           (System_String_o *)v24.fields._currentKey,
           (System_String_o *)StringLiteral_18218/*"contact"*/,
           0LL)
      || System_String__Equals_61715348((System_String_o *)currentKey, (System_String_o *)StringLiteral_22603/*"privacyPolicy"*/, 0LL)
      || System_String__Equals_61715348((System_String_o *)currentKey, (System_String_o *)StringLiteral_18561/*"deleteAccount"*/, 0LL) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
               currentKey,
               (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        sub_1B8880C(0LL, v14);
      v15 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    else
    {
      v20 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
              currentKey,
              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v20 )
        sub_1B8880C(0LL, v21);
      v22 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v20->klass->vtable[3].method)(
                                 v20,
                                 v20->klass->vtable[4].methodPtr);
      v15 = System_String__Concat_61707032(baseURL, v22, 0LL);
    }
    v17 = (Il2CppObject *)v15;
    v18 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v18 = NetworkManager_TypeInfo;
    }
    v19 = (System_Collections_Generic_Dictionary_object__object__o *)v18->static_fields->webViewAddress;
    if ( !v19 )
      sub_1B8880C(0LL, v16);
    System_Collections_Generic_Dictionary_object__object___Add(
      v19,
      currentKey,
      v17,
      (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v24,
    (const MethodInfo_32C5108 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19CEB2C;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19CEB0C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CEAC4;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall NetworkManager_LoginCallbackFunc__EndInvoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19CEA88;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19CEA68;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CEA20;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall NetworkManager_ResultCallbackFunc__EndInvoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19CEBD0;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19CEBB0;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CEB68;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall NetworkManager_StoreCallbackFunc__EndInvoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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


void __fastcall NetworkManager__Initialize_d__82___ctor(
        NetworkManager__Initialize_d__82_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__Initialize_d__82__MoveNext(
        NetworkManager__Initialize_d__82_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NetworkManager__Initialize_d__82_o *v4; // x20
  int32_t _1__state; // w8
  struct NetworkManager_o *_4__this; // x19
  const MethodInfo *v7; // x1
  struct ResponseCommandBase_array **p_commandList; // x21
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  ManagerConfig_c *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Coroutine_o *communicationCoroutine; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  NetworkManager_c *v25; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v27; // x0
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x0
  __int64 v32; // x0
  UnityEngine_Object_o *v33; // x20
  System_Collections_Generic_List_object__o *v34; // x22
  PurchaseByBankResponseCommand_o *v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  MissionNotifyResponseCommand_o *v42; // x23
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  System_Object_array *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_Dictionary_object__object__o *v52; // x23
  int32_t v53; // w2
  int32_t v54; // w3
  struct ResponseCommandBase_array *commandList; // x8
  __int64 v56; // x25
  int max_length; // w9
  __int64 v58; // x8
  Il2CppObject *v59; // x23
  System_Collections_Generic_Dictionary_object__object__o *commandLookup; // x24

  v4 = this;
  if ( (byte_4A5A98D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ResponseCommandBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ResponseCommandBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ResponseCommandBase__TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&MissionNotifyResponseCommand_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PurchaseByBankResponseCommand_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_RequestBase__Clear__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (NetworkManager__Initialize_d__82_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A98D = 1;
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
      v34 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ResponseCommandBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v34,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ResponseCommandBase___ctor__);
      v35 = (PurchaseByBankResponseCommand_o *)sub_1B887FC(PurchaseByBankResponseCommand_TypeInfo);
      PurchaseByBankResponseCommand___ctor(v35, 0LL);
      if ( !v34 )
        goto LABEL_49;
      items = v34->fields._items;
      v39 = Method_System_Collections_Generic_List_ResponseCommandBase__Add__;
      ++v34->fields._version;
      if ( !items )
        goto LABEL_49;
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)v35,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v35;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v35, v36, v37);
      }
      v42 = (MissionNotifyResponseCommand_o *)sub_1B887FC(MissionNotifyResponseCommand_TypeInfo);
      MissionNotifyResponseCommand___ctor(v42, 0LL);
      v45 = v34->fields._items;
      v46 = Method_System_Collections_Generic_List_ResponseCommandBase__Add__;
      ++v34->fields._version;
      if ( !v45 )
        goto LABEL_49;
      v47 = v34->fields._size;
      if ( (unsigned int)v47 >= v45->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)v42,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &v45->obj.klass + v47;
        v34->fields._size = v47 + 1;
        v48[4] = (Il2CppClass *)v42;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v42, v43, v44);
      }
      v49 = System_Collections_Generic_List_object___ToArray(
              v34,
              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__);
      _4__this->fields.commandList = (struct ResponseCommandBase_array *)v49;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.commandList, (int32_t)v49, v50, v51);
      v52 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v52,
        (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__);
      _4__this->fields.commandLookup = (struct System_Collections_Generic_Dictionary_string__ResponseCommandBase__o *)v52;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.commandLookup, (int32_t)v52, v53, v54);
      commandList = _4__this->fields.commandList;
      if ( !commandList )
        goto LABEL_49;
      v56 = 0LL;
      while ( 1 )
      {
        max_length = commandList->max_length;
        if ( (int)v56 >= max_length )
          break;
        if ( (unsigned int)v56 >= max_length )
          sub_1B88814(this, method);
        v58 = (__int64)commandList + 8 * v56;
        v59 = *(Il2CppObject **)(v58 + 32);
        if ( v59 )
        {
          commandLookup = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.commandLookup;
          this = (NetworkManager__Initialize_d__82_o *)ResponseCommandBase__GetCommandName(
                                                         *(ResponseCommandBase_o **)(v58 + 32),
                                                         0LL);
          if ( commandLookup )
          {
            System_Collections_Generic_Dictionary_object__object___Add(
              commandLookup,
              (Il2CppObject *)this,
              v59,
              (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__);
            commandList = *p_commandList;
            ++v56;
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
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, 0, v2, v3);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    v11 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v11 = ManagerConfig_TypeInfo;
    }
    if ( v11->static_fields->UseAppServer )
      NetworkServicePluginScript__CheckService(0LL);
    this = (NetworkManager__Initialize_d__82_o *)_4__this->fields.communicationWaitList;
    if ( this )
    {
      System_Collections_Generic_Queue_object___Clear(
        (System_Collections_Generic_Queue_T__o *)this,
        (const MethodInfo_366F52C *)Method_System_Collections_Generic_Queue_RequestBase__Clear__);
      communicationCoroutine = _4__this->fields.communicationCoroutine;
      if ( communicationCoroutine )
        UnityEngine_MonoBehaviour__StopCoroutine_69445272(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          communicationCoroutine,
          0LL);
      _4__this->fields.communicationWork = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationWork, 0, v12, v13);
      _4__this->fields.communicationCoroutine = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationCoroutine, 0, v15, v16);
      _4__this->fields.communicationWorkResponseList = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationWorkResponseList, 0, v17, v18);
      _4__this->fields.cacheRefreshWork = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.cacheRefreshWork, 0, v19, v20);
      _4__this->fields.cacheRefreshWorkResponseList = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.cacheRefreshWorkResponseList, 0, v21, v22);
      v25 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v25 = NetworkManager_TypeInfo;
      }
      static_fields = v25->static_fields;
      static_fields->sessionId = 0LL;
      static_fields = (struct NetworkManager_StaticFields *)((char *)static_fields + 128);
      LOBYTE(static_fields[-1].gameServerRedirectAddress) = 0;
      LOWORD(static_fields->WebCacheTime) = 0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)static_fields, 0, v23, v24);
      v27 = NetworkManager_TypeInfo->static_fields;
      v28 = (int)StringLiteral_1/*""*/;
      v27->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v27->dataServerFolder, v28, v29, v30);
      v31 = *((_QWORD *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__ + 4);
      if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
        v31 = sub_1BDA48C(v31);
      v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
      if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
        v32 = sub_1BDA48C(v32);
      v33 = **(UnityEngine_Object_o ***)(v32 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v33, 0LL, 0LL) )
      {
        this = (NetworkManager__Initialize_d__82_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)_4__this,
                                                       0LL);
        if ( !this )
          goto LABEL_49;
        UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___);
      }
      this = (NetworkManager__Initialize_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        DataManager__Initialize((DataManager_o *)this, 0LL);
        this = (NetworkManager__Initialize_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
        if ( this )
        {
          AvalonNotificationManager__Initialize((AvalonNotificationManager_o *)this, 0LL);
          return 0;
        }
      }
    }
LABEL_49:
    sub_1B8880C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall NetworkManager__Initialize_d__82__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__Initialize_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__Initialize_d__82__System_Collections_IEnumerator_Reset(
        NetworkManager__Initialize_d__82_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_NetworkManager__Initialize_d__82_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall NetworkManager__Initialize_d__82__System_Collections_IEnumerator_get_Current(
        NetworkManager__Initialize_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__Initialize_d__82__System_IDisposable_Dispose(
        NetworkManager__Initialize_d__82_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__RequestApplicationUpdateCR_d__218___ctor(
        NetworkManager__RequestApplicationUpdateCR_d__218_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__RequestApplicationUpdateCR_d__218__MoveNext(
        NetworkManager__RequestApplicationUpdateCR_d__218_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NetworkManager__RequestApplicationUpdateCR_d__218_o *v4; // x19
  struct System_String_o *storeName; // x8
  System_String_o **p_storeName; // x21
  int32_t v7; // w1
  ManagerConfig_c *v8; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  ServantStatusBattleListViewItem_o *p_id; // x0
  struct System_String_o *iOSApplicationID; // x1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v12; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v13; // x8
  NetworkManager__RequestApplicationUpdateCR_d__218_o *v14; // x20
  NetworkManager__RequestApplicationUpdateCR_d__218_o *v15; // x20
  Il2CppObject *Item; // x20
  System_Object_array *v17; // x0
  __int64 v18; // x8
  System_Object_array *v19; // x20
  System_Collections_Generic_Dictionary_object__object__o *v20; // x0
  __int64 v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  ServantStatusBattleListViewItem_o *p_url_5__2; // x0
  System_String_o *v26; // x20
  DelightWorks_Network_UnityWebRequestWWW_o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *www_5__3; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v32; // w2
  int32_t v33; // w3
  bool result; // w0
  struct NetworkManager_StoreCallbackFunc_o *callback; // x8
  UnityEngine_WaitForSeconds_o *v36; // x20
  ServantStatusBattleListViewItem_o *v37; // x19
  int32_t v38; // w2
  int32_t v39; // w3
  int v40; // w8
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *id; // x1
  System_String_o **v44; // x21
  ManagerConfig_c *v45; // x0
  struct System_String_o *AndroidPackageName; // x1
  System_String_o *v47; // x0
  UnityEngine_WaitForSeconds_o *v48; // x20
  int32_t v49; // w2
  int32_t v50; // w3

  v4 = this;
  if ( (byte_4A5A98E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_Dictionary_string__object____);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1B885B0(&StringLiteral_24026/*"trackViewUrl"*/);
    sub_1B885B0(&StringLiteral_547/*"&country=jp"*/);
    sub_1B885B0(&StringLiteral_20037/*"https://play.google.com/store/apps/details?id="*/);
    sub_1B885B0(&StringLiteral_2364/*"Android"*/);
    sub_1B885B0(&StringLiteral_22910/*"results"*/);
    sub_1B885B0(&StringLiteral_20035/*"https://itunes.apple.com/lookup?id="*/);
    this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)sub_1B885B0(&StringLiteral_20053/*"iOS"*/);
    byte_4A5A98E = 1;
  }
  switch ( v4->fields.__1__state )
  {
    case 0:
      p_storeName = &v4->fields.storeName;
      storeName = v4->fields.storeName;
      v4->fields.__1__state = -1;
      if ( !storeName )
      {
        v7 = StringLiteral_2364/*"Android"*/;
        *p_storeName = (System_String_o *)StringLiteral_2364/*"Android"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.storeName, v7, v2, v3);
      }
      v4->fields._url_5__2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._url_5__2, 0, v2, v3);
      if ( System_String__op_Equality(v4->fields.storeName, (System_String_o *)StringLiteral_20053/*"iOS"*/, 0LL) )
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
          p_id = (ServantStatusBattleListViewItem_o *)&v4->fields.id;
          iOSApplicationID = static_fields->iOSApplicationID;
          v4->fields.id = iOSApplicationID;
LABEL_33:
          sub_1B88554(p_id, (int32_t)iOSApplicationID, v2, v3);
        }
        v26 = System_String__Concat_61718292(
                (System_String_o *)StringLiteral_20035/*"https://itunes.apple.com/lookup?id="*/,
                v4->fields.id,
                (System_String_o *)StringLiteral_547/*"&country=jp"*/,
                0LL);
        v27 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B887FC(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
        DelightWorks_Network_UnityWebRequestWWW___ctor(v27, v26, 0LL);
        v4->fields._www_5__3 = v27;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._www_5__3, (int32_t)v27, v28, v29);
        www_5__3 = (Il2CppObject *)v4->fields._www_5__3;
        v4->fields.__2__current = www_5__3;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(p__2__current, (int32_t)www_5__3, v32, v33);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      if ( !System_String__op_Equality(*p_storeName, (System_String_o *)StringLiteral_2364/*"Android"*/, 0LL) )
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.id, (int32_t)AndroidPackageName, v41, v42);
        id = *v44;
      }
      v47 = System_String__Concat_61707032((System_String_o *)StringLiteral_20037/*"https://play.google.com/store/apps/details?id="*/, id, 0LL);
      v24 = (int)v47;
      v4->fields._url_5__2 = v47;
      p_url_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._url_5__2;
      goto LABEL_46;
    case 1:
      v12 = v4->fields._www_5__3;
      v4->fields.__1__state = -1;
      if ( !v12 )
        goto LABEL_49;
      this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)System_String__IsNullOrEmpty(
                                                                      v12->fields._error_k__BackingField,
                                                                      0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_38;
      v13 = v4->fields._www_5__3;
      if ( !v13 )
        goto LABEL_49;
      if ( System_String__IsNullOrEmpty(v13->fields._error_k__BackingField, 0LL) )
      {
        this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)v4->fields._www_5__3;
        if ( !this )
          goto LABEL_49;
        this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)DelightWorks_Network_UnityWebRequestWWW__get_text(
                                                                        (DelightWorks_Network_UnityWebRequestWWW_o *)this,
                                                                        0LL);
        if ( !v4->fields._www_5__3 )
          goto LABEL_49;
        v14 = this;
        DelightWorks_Network_UnityWebRequestWWW__Dispose(v4->fields._www_5__3, 0LL);
        if ( !JsonManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)JsonManager__getDictionary(
                                                                        (System_String_o *)v14,
                                                                        0LL);
        if ( !this )
          goto LABEL_49;
        v15 = this;
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)this,
               (Il2CppObject *)StringLiteral_22910/*"results"*/,
               (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)v15,
                   (Il2CppObject *)StringLiteral_22910/*"results"*/,
                   (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v17 = JsonManager__DeserializeArray_object_(
                  Item,
                  (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_Dictionary_string__object____);
          if ( v17 )
          {
            v18 = *(_QWORD *)&v17->max_length;
            v19 = v17;
            if ( v18 )
            {
              if ( !(_DWORD)v18 )
                goto LABEL_50;
              v20 = (System_Collections_Generic_Dictionary_object__object__o *)v17->m_Items[0];
              if ( v20 )
              {
                v17 = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                               v20,
                                               (Il2CppObject *)StringLiteral_24026/*"trackViewUrl"*/,
                                               (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)v17 & 1) != 0 )
                {
                  if ( v19->max_length )
                  {
                    this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)v19->m_Items[0];
                    if ( this )
                    {
                      this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                      (Il2CppObject *)StringLiteral_24026/*"trackViewUrl"*/,
                                                                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                      if ( this )
                      {
                        v21 = ((__int64 (__fastcall *)(NetworkManager__RequestApplicationUpdateCR_d__218_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                this,
                                this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                        v24 = v21;
                        v4->fields._url_5__2 = (struct System_String_o *)v21;
                        p_url_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._url_5__2;
LABEL_46:
                        sub_1B88554(p_url_5__2, v24, v22, v23);
                        goto LABEL_47;
                      }
                    }
LABEL_49:
                    sub_1B8880C(this, method);
                  }
LABEL_50:
                  sub_1B88814(v17, method);
                }
              }
            }
          }
        }
LABEL_47:
        v48 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v48, 0.5, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v48;
        v37 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v37, (int32_t)v48, v49, v50);
        v40 = 3;
        goto LABEL_48;
      }
LABEL_38:
      this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)v4->fields._www_5__3;
      if ( !this )
        goto LABEL_49;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v36 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v36, 1.0, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v36;
      v37 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v37, (int32_t)v36, v38, v39);
      v40 = 2;
LABEL_48:
      *(_DWORD *)&v37[-1].fields.isMine = v40;
      return 1;
    case 2:
      v4->fields._www_5__3 = 0LL;
      p_id = (ServantStatusBattleListViewItem_o *)&v4->fields._www_5__3;
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


Il2CppObject *__fastcall NetworkManager__RequestApplicationUpdateCR_d__218__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__RequestApplicationUpdateCR_d__218_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__RequestApplicationUpdateCR_d__218__System_Collections_IEnumerator_Reset(
        NetworkManager__RequestApplicationUpdateCR_d__218_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_NetworkManager__RequestApplicationUpdateCR_d__218_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall NetworkManager__RequestApplicationUpdateCR_d__218__System_Collections_IEnumerator_get_Current(
        NetworkManager__RequestApplicationUpdateCR_d__218_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__RequestApplicationUpdateCR_d__218__System_IDisposable_Dispose(
        NetworkManager__RequestApplicationUpdateCR_d__218_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__RequestCR_d__213___ctor(
        NetworkManager__RequestCR_d__213_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__RequestCR_d__213__MoveNext(
        NetworkManager__RequestCR_d__213_o *this,
        const MethodInfo *method)
{
  NetworkManager__RequestCR_d__213_o *v2; // x19
  struct NetworkManager_o *_4__this; // x20
  struct RequestBase_o *work; // x8
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x21
  System_String_o *v8; // x22
  System_String_o *v9; // x23
  struct RequestBase_o *v10; // x8
  NetworkManager__RequestCR_d__213_o *v11; // x19
  System_Action_o *v12; // x19
  const MethodInfo *v13; // x6
  struct DelightWorks_Network_UnityWebRequestWWW_o *www_5__10; // x8
  DelightWorks_Network_UnityWebRequestWWW_o **p_www_5__10; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v16; // x8
  int32_t v17; // w2
  int32_t v18; // w3
  DelightWorks_Network_UnityWebRequestWWW_o *v19; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v20; // x8
  NetworkManager__RequestCR_d__213_o **v21; // x21
  System_String_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v28; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v30; // w2
  int32_t v31; // w3
  int v32; // w8
  const MethodInfo *v33; // x1
  uint64_t v34; // x21
  struct RequestBase_o *v35; // x8
  __int64 methodPtr_low; // x11
  ManagerConfig_c *v37; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  __int64 v39; // x0
  System_String_o *v40; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v41; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o **p_data_5__2; // x21
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  const MethodInfo *v51; // x3
  UnityEngine_WWWForm_o *WWWForm; // x21
  System_Collections_Generic_Dictionary_object__object__o *v53; // x22
  Il2CppObject *v54; // x23
  Il2CppObject *key; // x24
  Il2CppObject *v56; // x24
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  struct System_Collections_Generic_Queue_RequestBase__o *communicationWaitList; // x8
  float progress_k__BackingField; // s8
  float loadProgress_5__13; // s9
  int32_t v62; // w2
  int32_t v63; // w3
  float v64; // s0
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_Collections_Generic_Queue_RequestBase__o *v67; // x8
  int32_t v68; // w1
  int32_t v69; // w2
  int32_t v70; // w3
  __int64 *v71; // x8
  struct System_String_o *error_k__BackingField; // x1
  NetworkManager_c *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  NetworkManager_c *v76; // x0
  int32_t v77; // w1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v78; // x8
  Il2CppObject *v79; // x24
  NetworkManager__RequestCR_d__213_o *v80; // x24
  System_String_o *v81; // x24
  uint32_t v82; // w0
  __int64 *v83; // x8
  int32_t v84; // w1
  __int64 v85; // x1
  ServantStatusBattleListViewItem_o *p_errorAction_5__5; // x0
  System_Collections_Generic_Dictionary_object__object__o *responseHeaders_k__BackingField; // x0
  System_String_o *v88; // x0
  int64_t v89; // x22
  NetworkManager_c *v90; // x8
  struct NetworkManager_StaticFields *v91; // x8
  int64_t startTime_5__8; // x9
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o **p_errorCode_5__3; // x23
  int32_t v98; // w2
  int32_t v99; // w3
  int32_t v100; // w1
  int32_t v101; // w1
  int32_t v102; // w2
  int32_t v103; // w3
  int32_t v104; // w1
  int32_t v105; // w2
  int32_t v106; // w3
  int32_t v107; // w2
  int32_t v108; // w3
  ServantStatusBattleListViewItem_o *v109; // x0
  int32_t v110; // w1
  int32_t v111; // w2
  int32_t v112; // w3
  int32_t v113; // w1
  int32_t v114; // w1
  int32_t v115; // w2
  int32_t v116; // w3
  bool v117; // w25
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o **v122; // x22
  System_String_o *errorLocalizeCode_5__4; // x26
  System_String_o *title; // x22
  System_String_o *errorAction_5__5; // x24
  int32_t v126; // w2
  int32_t v127; // w3
  __int64 *v128; // x8
  System_String_o *data_5__2; // x21
  NetworkManager__RequestCR_d__213_o *v130; // x21
  int32_t v131; // w2
  int32_t v132; // w3
  Il2CppObject *v133; // x22
  System_Object_array *v134; // x0
  ResponseData_array **p_responseList_5__7; // x22
  int32_t v136; // w2
  int32_t v137; // w3
  struct ResponseData_array *responseList_5__7; // x8
  __int64 v139; // x25
  int v140; // w9
  Il2CppClass **v141; // x8
  ResponseData_o *v142; // x24
  System_Collections_Generic_SortedDictionary_string__string__o *v143; // x23
  System_String_o *AuthCode; // x0
  NetworkManager_c *v145; // x8
  System_String_o *v146; // x23
  int32_t v147; // w8
  NetworkManager_c *v148; // x0
  __int64 *v149; // x8
  System_String_o *v150; // x24
  bool isNoRedirect_5__9; // w24
  DelightWorks_Network_UnityWebRequestWWW_o *v152; // x25
  int32_t v153; // w2
  int32_t v154; // w3
  struct RequestBase_o *v155; // x8
  __int64 v156; // x11
  struct RequestBase_o *v157; // x21
  ManagementManager_c *v158; // x0
  _BOOL4 isDuringStartup; // w8
  __int64 *v160; // x9
  __int64 *v161; // x10
  __int64 v162; // x1
  System_String_o *detail; // x24
  struct ResponseFailData_o *failData_5__6; // x8
  struct ResponseFailData_o *v165; // x8
  System_String_o *url; // x26
  struct ResponseFailData_o *v167; // x8
  struct ResponseFailData_o *v168; // x8
  struct ResponseFailData_o *v169; // x8
  System_String_o *v170; // x0
  struct ResponseFailData_o *v171; // x8
  System_String_o *v172; // x27
  const MethodInfo *v173; // x4
  bool v174; // w8
  bool result; // w0
  System_String_o *v176; // x27
  uint32_t v177; // w0
  const MethodInfo *v178; // x3
  ManagementManager_c *v179; // x0
  NetworkManager_c *v180; // x0
  struct ResponseFailData_o *v181; // x8
  int32_t errorType; // w23
  int32_t v183; // w2
  int32_t v184; // w3
  const MethodInfo *v185; // x3
  NetworkManager_c *v186; // x0
  NetworkManager_c *v187; // x0
  int32_t v188; // w1
  int32_t v189; // w1
  int32_t v190; // w2
  int32_t v191; // w3
  int32_t v192; // w1
  int32_t v193; // w2
  int32_t v194; // w3
  Il2CppObject *v195; // x22
  struct ResponseData_array *v196; // x8
  unsigned __int64 v197; // x22
  unsigned __int64 v198; // x9
  ResponseData_o *v199; // x21
  Il2CppObject *Instance; // x24
  ErrorDialog_ClickDelegate_o *v201; // x25
  struct DelightWorks_Network_UnityWebRequestWWW_o *v202; // x8
  Il2CppObject *wait_5__14; // x1
  System_String_o *text; // x0
  int32_t v205; // w2
  int32_t v206; // w3
  struct RequestBase_o *v207; // x8
  __int64 v208; // x10
  Il2CppObject *Item; // x22
  int _2__current; // w8
  System_String_array *v211; // x0
  int32_t v212; // w2
  int32_t v213; // w3
  NetworkManager_c *v214; // x8
  System_String_array *v215; // x22
  struct NetworkManager_StaticFields *v216; // x0
  int32_t v217; // w1
  int max_length; // w8
  unsigned int v219; // w25
  Il2CppClass **v220; // x8
  System_String_o *v221; // x23
  NetworkManager_c *v222; // x0
  System_String_o *v223; // x0
  struct NetworkManager_StaticFields *v224; // x8
  int32_t v225; // w2
  int32_t v226; // w3
  NetworkManager_c *v227; // x0
  System_Action_o *v228; // x23
  const MethodInfo *v229; // x5
  struct ResponseFailData_o *v230; // x8
  System_Action_o *v231; // x0
  __int64 *v232; // x8
  ManagementManager_c *v233; // x0
  struct ResponseFailData_o *v234; // x8
  ManagerConfig_c *v235; // x0
  __int64 v236; // x9
  float unscaledTime; // s0
  float timeout_5__11; // s1
  UnityEngine_WaitForEndOfFrame_o *v239; // x21
  int32_t v240; // w2
  int32_t v241; // w3
  int32_t v242; // w2
  int32_t v243; // w3
  NetworkManager__RequestCR_d__213_o *v244; // x25
  int32_t v245; // w1
  int32_t v246; // w2
  int32_t v247; // w3
  struct NetworkManager_o *nid; // x1
  int32_t v249; // w2
  int32_t v250; // w3
  int32_t v251; // w1
  int32_t v252; // w2
  int32_t v253; // w3
  struct System_String_o *resCode; // x1
  int32_t v255; // w2
  int32_t v256; // w3
  int32_t v257; // w1
  System_String_o *v258; // x0
  int32_t v259; // w2
  int32_t v260; // w3
  ResponseFailData_o *v261; // x26
  struct ResponseFailData_o **p_failData_5__6; // x25
  int32_t v263; // w2
  int32_t v264; // w3
  int32_t v265; // w2
  int32_t v266; // w3
  __int64 *p_action; // x8
  __int64 v268; // x1
  struct RequestBase_o *v269; // x8
  PurchaseByBank_UnityIap_Request_c *v270; // x9
  __int64 v271; // x11
  RequestBase_c *klass; // x8
  __int64 v273; // x10
  ResponseData_array *v274; // x22
  ResponseData_o *v275; // x0
  System_Collections_Generic_Dictionary_object__object__o *fail; // x0
  System_String_o *v277; // x22
  int32_t v278; // w2
  int32_t v279; // w3
  int32_t v280; // w1
  TitleRootComponent_c *v281; // x0
  Il2CppObject *v282; // x23
  AvalonSceneManager_c *v283; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x25
  Il2CppObject *v286; // x26
  struct NetworkManager___c_StaticFields *v287; // x0
  int32_t v288; // w2
  int32_t v289; // w3
  Il2CppObject *v290; // x23
  System_String_o *v291; // x25
  System_String_o *v292; // x26
  CommonConfirmDialog_ClickDelegate_o *v293; // x27
  const MethodInfo *v294; // x2
  struct ResponseFailData_o *v295; // x8
  System_String_o *sandboxDomain; // x22
  _BOOL4 sandboxSeurity; // w24
  int32_t v298; // w2
  int32_t v299; // w3
  struct ResponseFailData_o *v300; // x8
  struct System_String_o *sandboxAssetsDomain; // x22
  NetworkManager_c *v302; // x0
  struct NetworkManager_StaticFields *v303; // x0
  int32_t v304; // w2
  int32_t v305; // w3
  struct ResponseFailData_o *v306; // x8
  struct System_String_o *sandboxWebviewDomain; // x22
  NetworkManager_c *v308; // x0
  struct NetworkManager_StaticFields *v309; // x0
  const MethodInfo *v310; // x1
  NetworkManager_c *v311; // x0
  struct ResponseFailData_o *v312; // x8
  Il2CppObject *v313; // x23
  ErrorDialog_ClickDelegate_o *v314; // x25
  System_String_o *v315; // x0
  int32_t v316; // w2
  int32_t v317; // w3
  ResponseFailData_o *v318; // x22
  struct ResponseFailData_o **v319; // x21
  int32_t v320; // w2
  int32_t v321; // w3
  int32_t v322; // w2
  int32_t v323; // w3
  __int64 *v324; // x8
  ManagementManager_c *v325; // x0
  __int64 v326; // x1
  struct ResponseFailData_o *v327; // x8
  struct ResponseFailData_o *v328; // x8
  System_Action_o *v329; // x25
  const MethodInfo *v330; // x6
  int32_t v331; // w2
  int32_t v332; // w3
  int32_t v333; // w2
  int32_t v334; // w3
  int32_t v335; // w2
  int32_t v336; // w3
  int32_t v337; // w2
  int32_t v338; // w3
  int32_t v339; // w2
  int32_t v340; // w3
  UnityEngine_WaitForEndOfFrame_o *v341; // x20
  ServantStatusBattleListViewItem_o *v342; // x19
  int32_t v343; // w2
  int32_t v344; // w3
  ServantStatusBattleListViewItem_c *v345; // x19
  NetworkManager_c *v346; // x0
  ServantStatusBattleListViewItem_o *p_errorDialogResponseData; // x0
  ManagementManager_c *v348; // x0
  _BOOL4 v349; // w26
  Il2CppObject *v350; // x23
  ErrorDialog_ClickDelegate_o *v351; // x25
  __int64 *v352; // x8
  bool v353; // w0
  __int64 *v354; // x8
  System_String_o *v355; // x25
  System_String_o *v356; // x26
  ErrorDialog_ClickDelegate_o *v357; // x27
  ErrorDialog_ClickDelegate_o *v358; // x25
  __int64 v359; // x1
  struct System_String_o **p_errorLocalizeCode_5__4; // x23
  __int64 *v361; // x8
  __int64 v362; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v363; // [xsp+10h] [xbp-E0h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v365; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_SortedDictionary_string__string__o *authParams; // [xsp+70h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+78h] [xbp-78h] BYREF
  System_DateTime_o v368; // 0:x0.8
  System_DateTime_o v369; // 0:x0.8

  v2 = this;
  if ( (byte_4A5A98F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&BattleData_TypeInfo);
    sub_1B885B0(&char___TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_ResponseData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&ManagementManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_OnClickErrorDialog__);
    sub_1B885B0(&Method_NetworkManager_OnClickErrorReboot__);
    sub_1B885B0(&Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__);
    sub_1B885B0(&Method_NetworkManager_OnClickErrorRetryDialog__);
    sub_1B885B0(&Method_NetworkManager_OnClickErrorStay__);
    sub_1B885B0(&Method_NetworkManager_OnClickErrorTerminal__);
    sub_1B885B0(&Method_NetworkManager_OnClickRefreshTerminal__);
    sub_1B885B0(&Method_NetworkManager_OnClickReloadCache__);
    sub_1B885B0(&Method_NetworkManager_OnClickStore__);
    sub_1B885B0(&Method_NetworkManager_OnClickUserDelete__);
    sub_1B885B0(&Method_NetworkManager__RequestCR_b__213_0__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&PurchaseByBank_UnityIap_Request_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&ResponseFailData_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&TitleRootComponent_TypeInfo);
    sub_1B885B0(&TopGameDataRequest_TypeInfo);
    sub_1B885B0(&TopLoginRequest_TypeInfo);
    sub_1B885B0(&Method_NetworkManager___c__RequestCR_b__213_1__);
    sub_1B885B0(&NetworkManager___c_TypeInfo);
    sub_1B885B0(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_15696/*"X-SERVER-TIME"*/);
    sub_1B885B0(&StringLiteral_18473/*"data_update"*/);
    sub_1B885B0(&StringLiteral_9230/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_20740/*"invalid_battle"*/);
    sub_1B885B0(&StringLiteral_22853/*"reload_cache"*/);
    sub_1B885B0(&StringLiteral_7162/*"HTTP"*/);
    sub_1B885B0(&StringLiteral_1496/*"400"*/);
    sub_1B885B0(&StringLiteral_22903/*"result"*/);
    sub_1B885B0(&StringLiteral_9229/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_19831/*"goto_login_access"*/);
    sub_1B885B0(&StringLiteral_20698/*"internal server error"*/);
    sub_1B885B0(&StringLiteral_22895/*"response error "*/);
    sub_1B885B0(&StringLiteral_22894/*"response"*/);
    sub_1B885B0(&StringLiteral_23535/*"stay"*/);
    sub_1B885B0(&StringLiteral_1498/*"401"*/);
    sub_1B885B0(&StringLiteral_9218/*"NETWORK_ERROR_BOOT_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_7672/*"Internal Server Error"*/);
    sub_1B885B0(&StringLiteral_15216/*"User-Agent"*/);
    sub_1B885B0(&StringLiteral_22915/*"retry"*/);
    sub_1B885B0(&StringLiteral_9233/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_9231/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_17032/*"background cancel"*/);
    sub_1B885B0(&StringLiteral_1509/*"500"*/);
    sub_1B885B0(&StringLiteral_9222/*"NETWORK_ERROR_CSID_CODE"*/);
    sub_1B885B0(&StringLiteral_22896/*"response execute error "*/);
    sub_1B885B0(&StringLiteral_17731/*"canceled_purchase_error"*/);
    sub_1B885B0(&StringLiteral_1511/*"502"*/);
    sub_1B885B0(&StringLiteral_1513/*"503"*/);
    sub_1B885B0(&StringLiteral_4758/*"Cookie"*/);
    sub_1B885B0(&StringLiteral_9237/*"NETWORK_USER_DELETE_DECIDE"*/);
    sub_1B885B0(&StringLiteral_20741/*"invalid_user"*/);
    sub_1B885B0(&StringLiteral_9219/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/);
    sub_1B885B0(&StringLiteral_16814/*"app_version_up"*/);
    sub_1B885B0(&StringLiteral_1873/*"?"*/);
    sub_1B885B0(&StringLiteral_9232/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_22114/*"none data"*/);
    sub_1B885B0(&StringLiteral_9221/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_22483/*"path="*/);
    sub_1B885B0(&StringLiteral_16970/*"authCode"*/);
    sub_1B885B0(&StringLiteral_535/*"&"*/);
    sub_1B885B0(&StringLiteral_22834/*"refresh_terminal"*/);
    sub_1B885B0(&StringLiteral_19832/*"goto_title"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1579/*";"*/);
    sub_1B885B0(&StringLiteral_18207/*"connect time over"*/);
    sub_1B885B0(&StringLiteral_22810/*"reconnection"*/);
    sub_1B885B0(&StringLiteral_12260/*"STATUS"*/);
    sub_1B885B0(&StringLiteral_16598/*"_userId="*/);
    sub_1B885B0(&StringLiteral_18656/*"do_signup"*/);
    sub_1B885B0(&StringLiteral_9236/*"NETWORK_USER_DELETE_CANCEL"*/);
    sub_1B885B0(&StringLiteral_17696/*"cache"*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    sub_1B885B0(&StringLiteral_3761/*"COMMON_CONFIRM_RETRY"*/);
    sub_1B885B0(&StringLiteral_23546/*"stay_no_dialog"*/);
    sub_1B885B0(&StringLiteral_9234/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1501/*"404"*/);
    sub_1B885B0(&StringLiteral_22115/*"none response data"*/);
    sub_1B885B0(&StringLiteral_21258/*"maint"*/);
    sub_1B885B0(&StringLiteral_22501/*"pending_purchase_error"*/);
    sub_1B885B0(&StringLiteral_140/*" ("*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_9220/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11957/*"SET-COOKIE"*/);
    sub_1B885B0(&StringLiteral_1480/*"302"*/);
    sub_1B885B0(&StringLiteral_9235/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    this = (NetworkManager__RequestCR_d__213_o *)sub_1B885B0(&StringLiteral_1465/*"200"*/);
    byte_4A5A98F = 1;
  }
  authParams = 0LL;
  dateData = 0LL;
  memset(&v365, 0, sizeof(v365));
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
        goto LABEL_472;
      v7 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_9221/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9220/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, 0LL);
      this = (NetworkManager__RequestCR_d__213_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9219/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, 0LL);
      v10 = v2->fields.work;
      if ( !v10 )
        goto LABEL_531;
      v11 = this;
      if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v10->klass->vtable._8_isBackgroundRequest.method)(
              v10,
              v10->klass->vtable._9_isShowConnect.methodPtr) & 1) != 0 )
      {
        v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)_4__this, Method_NetworkManager__RequestCR_b__213_0__, 0LL);
        if ( _4__this )
        {
          NetworkManager__WarningDialog(_4__this, v7, v8, 0LL, 1, v12, v13);
          return 0;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v201 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v201,
          (Il2CppObject *)_4__this,
          Method_NetworkManager_OnClickErrorRetryDialog__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenRetryDialog_30493396((CommonUI_o *)Instance, v7, v8, v9, (System_String_o *)v11, v201, 0, 0LL);
          return 0;
        }
      }
      goto LABEL_531;
    case 1:
      delay = v2->fields.delay;
      v2->fields.__1__state = -1;
      if ( delay <= 0.0 )
        goto LABEL_32;
      v28 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v28, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v28;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)v28, v30, v31);
      v32 = 2;
      goto LABEL_317;
    case 2:
      v2->fields.__1__state = -1;
LABEL_32:
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      dateData = System_DateTime__get_Now(0LL).fields._dateData;
      v368.fields._dateData = (uint64_t)&dateData;
      v34 = System_DateTime__ToUniversalTime(v368, 0LL).fields._dateData;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v369.fields._dateData = v34;
      v2->fields._startTime_5__8 = NetworkManager__getTime_38478060(v369, v33);
      v35 = v2->fields.work;
      if ( v35 )
      {
        methodPtr_low = LOBYTE(TopGameDataRequest_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v35->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TopGameDataRequest_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] == TopGameDataRequest_TypeInfo )
        {
          LOBYTE(v35) = v35[1].klass;
        }
        else
        {
          LOBYTE(v35) = 0;
        }
      }
      v2->fields._isNoRedirect_5__9 = (char)v35;
      v37 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v37 = ManagerConfig_TypeInfo;
      }
      static_fields = v37->static_fields;
      if ( !static_fields->UseMock )
      {
        if ( v2->fields._data_5__2 )
          goto LABEL_132;
        this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
        if ( !this )
          goto LABEL_531;
        WWWForm = RequestBase__getWWWForm((RequestBase_o *)this, &authParams, 0LL);
        v53 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v53,
          (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
        if ( !WWWForm )
          goto LABEL_531;
        this = (NetworkManager__RequestCR_d__213_o *)UnityEngine_WWWForm__get_headers(WWWForm, 0LL);
        if ( !this )
          goto LABEL_531;
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v363,
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
        v365 = v363;
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v365,
                  (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
        {
          key = v365.fields._current.fields.key;
          v54 = v365.fields._current.fields.value;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v56 = (Il2CppObject *)System_Convert__ToString_62372744((System_String_o *)key, 0LL);
          v57 = (Il2CppObject *)System_Convert__ToString_62372744((System_String_o *)v54, 0LL);
          if ( !v53 )
            sub_1B8880C(v57, v58);
          System_Collections_Generic_Dictionary_object__object___Add(
            v53,
            v56,
            v57,
            (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v365,
          (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
        this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
        }
        if ( this[1].fields.work[1].fields.paramInteger )
        {
          if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
            j_il2cpp_runtime_class_init_0(this);
          if ( !v53 )
            goto LABEL_531;
          System_Collections_Generic_Dictionary_object__object___Add(
            v53,
            (Il2CppObject *)StringLiteral_15216/*"User-Agent"*/,
            (Il2CppObject *)NetworkManager_TypeInfo->static_fields->userAgent,
            (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
        }
        if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
        }
        if ( this[1].fields.work[3].monitor )
        {
          if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
            j_il2cpp_runtime_class_init_0(this);
          if ( !v53 )
            goto LABEL_531;
          System_Collections_Generic_Dictionary_object__object___Add(
            v53,
            (Il2CppObject *)StringLiteral_4758/*"Cookie"*/,
            (Il2CppObject *)NetworkManager_TypeInfo->static_fields->sessionId,
            (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
        }
        v143 = authParams;
        if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
          j_il2cpp_runtime_class_init_0(this);
        AuthCode = NetworkManager__GetAuthCode(v143, method);
        if ( AuthCode )
          UnityEngine_WWWForm__AddField(WWWForm, (System_String_o *)StringLiteral_16970/*"authCode"*/, AuthCode, 0LL);
        this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
        if ( !this )
          goto LABEL_531;
        this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                       this,
                                                       this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
        v145 = NetworkManager_TypeInfo;
        v146 = (System_String_o *)this;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v145 = NetworkManager_TypeInfo;
        }
        if ( v145->static_fields->userId )
        {
          if ( !v146 )
            goto LABEL_531;
          v147 = System_String__IndexOf_61738608(v146, (System_String_o *)StringLiteral_1873/*"?"*/, 0LL);
          v148 = NetworkManager_TypeInfo;
          if ( v147 >= 0 )
            v149 = &StringLiteral_535/*"&"*/;
          else
            v149 = &StringLiteral_1873/*"?"*/;
          v150 = (System_String_o *)*v149;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v148 = NetworkManager_TypeInfo;
          }
          v146 = System_String__Concat_61720296(
                   v146,
                   v150,
                   (System_String_o *)StringLiteral_16598/*"_userId="*/,
                   v148->static_fields->userId,
                   0LL);
        }
        UnityEngine_WWWForm__get_data(WWWForm, 0LL);
        isNoRedirect_5__9 = v2->fields._isNoRedirect_5__9;
        v152 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B887FC(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
        DelightWorks_Network_UnityWebRequestWWW___ctor_37043164(
          v152,
          v146,
          WWWForm,
          (System_Collections_Generic_Dictionary_string__string__o *)v53,
          isNoRedirect_5__9,
          0LL);
        v2->fields._www_5__10 = v152;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._www_5__10, (int32_t)v152, v153, v154);
        v155 = v2->fields.work;
        if ( v155
          && (v156 = LOBYTE(TopGameDataRequest_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v155->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v156) )
        {
          if ( (TopGameDataRequest_c *)v155->klass->_2.typeHierarchy[v156 - 1] == TopGameDataRequest_TypeInfo )
            v157 = v2->fields.work;
          else
            v157 = 0LL;
        }
        else
        {
          v157 = 0LL;
        }
        v235 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v235 = ManagerConfig_TypeInfo;
        }
        v236 = 44LL;
        if ( !v157 )
          v236 = 40LL;
        v2->fields._timeout_5__11 = *(float *)((char *)&v235->static_fields->AppVer + v236);
        unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
        timeout_5__11 = v2->fields._timeout_5__11;
        v2->fields._loadProgress_5__13 = 0.0;
        v2->fields._requestTime_5__12 = unscaledTime + timeout_5__11;
        v239 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v239, 0LL);
        v2->fields._wait_5__14 = v239;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__14, (int32_t)v239, v240, v241);
LABEL_15:
        p_www_5__10 = &v2->fields._www_5__10;
        www_5__10 = v2->fields._www_5__10;
        if ( !www_5__10 )
          goto LABEL_531;
        if ( !www_5__10->fields._isDone_k__BackingField )
        {
          this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
          if ( !this )
            goto LABEL_531;
          this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                         this,
                                                         this->klass[1]._1.image);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_75;
          if ( !_4__this )
            goto LABEL_531;
          communicationWaitList = _4__this->fields.communicationWaitList;
          if ( !communicationWaitList )
            goto LABEL_531;
          if ( communicationWaitList->fields._size <= 0 )
          {
LABEL_75:
            if ( !*p_www_5__10 )
              goto LABEL_531;
            progress_k__BackingField = (*p_www_5__10)->fields._progress_k__BackingField;
            loadProgress_5__13 = v2->fields._loadProgress_5__13;
            v64 = UnityEngine_Time__get_unscaledTime(0LL);
            if ( progress_k__BackingField != loadProgress_5__13 )
            {
              v202 = v2->fields._www_5__10;
              v2->fields._requestTime_5__12 = v64 + v2->fields._timeout_5__11;
              if ( !v202 )
                goto LABEL_531;
              v2->fields._loadProgress_5__13 = v202->fields._progress_k__BackingField;
LABEL_316:
              wait_5__14 = (Il2CppObject *)v2->fields._wait_5__14;
              v2->fields.__2__current = wait_5__14;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B88554(p__2__current, (int32_t)wait_5__14, v62, v63);
              v32 = 4;
              goto LABEL_317;
            }
            if ( v64 < v2->fields._requestTime_5__12 )
              goto LABEL_316;
          }
        }
        v16 = *p_www_5__10;
        if ( !*p_www_5__10 )
          goto LABEL_531;
        if ( !v16->fields._isDone_k__BackingField )
        {
          this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
          if ( !this )
            goto LABEL_531;
          this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                         this,
                                                         this->klass[1]._1.image);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_115;
          if ( !_4__this )
            goto LABEL_531;
          v67 = _4__this->fields.communicationWaitList;
          if ( !v67 )
            goto LABEL_531;
          if ( v67->fields._size >= 1 )
          {
            v68 = StringLiteral_17032/*"background cancel"*/;
            v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_17032/*"background cancel"*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, v68, v65, v66);
            v71 = &StringLiteral_23535/*"stay"*/;
          }
          else
          {
LABEL_115:
            v84 = StringLiteral_18207/*"connect time over"*/;
            v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_18207/*"connect time over"*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, v84, v65, v66);
            v71 = &StringLiteral_22915/*"retry"*/;
          }
          v85 = *v71;
          v2->fields._errorAction_5__5 = (struct System_String_o *)*v71;
          p_errorAction_5__5 = (ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5;
          goto LABEL_117;
        }
        this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(
                                                       v16->fields._error_k__BackingField,
                                                       0LL);
        v19 = *p_www_5__10;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v19 )
            goto LABEL_531;
          if ( v2->fields._isNoRedirect_5__9 )
          {
            DelightWorks_Network_UnityWebRequestWWW__Dispose(*p_www_5__10, 0LL);
          }
          else
          {
            text = DelightWorks_Network_UnityWebRequestWWW__get_text(*p_www_5__10, 0LL);
            v2->fields._data_5__2 = text;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._data_5__2, (int32_t)text, v205, v206);
            this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
            }
            if ( !this[1].fields.work[3].monitor )
            {
              v207 = v2->fields.work;
              if ( v207 )
              {
                v208 = LOBYTE(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(v207->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v208
                  && (TopLoginRequest_c *)v207->klass->_2.typeHierarchy[v208 - 1] == TopLoginRequest_TypeInfo )
                {
                  if ( !*p_www_5__10 )
                    goto LABEL_531;
                  this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                  if ( !this )
                    goto LABEL_531;
                  this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                 (const MethodInfo_31C6E98 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
                  if ( (int)this >= 1 )
                  {
                    if ( !*p_www_5__10 )
                      goto LABEL_531;
                    this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                    if ( !this )
                      goto LABEL_531;
                    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
                      &v363,
                      (System_Collections_Generic_Dictionary_object__object__o *)this,
                      (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
                    v365 = v363;
                    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                              &v365,
                              (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
                      ;
                    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                      &v365,
                      (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
                    if ( !*p_www_5__10 )
                      goto LABEL_531;
                    this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                    if ( !this )
                      goto LABEL_531;
                    this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                   (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                   (Il2CppObject *)StringLiteral_11957/*"SET-COOKIE"*/,
                                                                   (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      if ( !*p_www_5__10 )
                        goto LABEL_531;
                      this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                      if ( !this )
                        goto LABEL_531;
                      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                               (Il2CppObject *)StringLiteral_11957/*"SET-COOKIE"*/,
                               (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
                      this = (NetworkManager__RequestCR_d__213_o *)sub_1B88658(char___TypeInfo, 2LL);
                      if ( !this )
                        goto LABEL_531;
                      _2__current = (int)this->fields.__2__current;
                      method = (const MethodInfo *)this;
                      if ( !_2__current )
                        goto LABEL_533;
                      LOWORD(this->fields.work) = 32;
                      if ( _2__current == 1 )
                        goto LABEL_533;
                      WORD1(this->fields.work) = 59;
                      if ( !Item )
                        goto LABEL_531;
                      v211 = System_String__Split_61729424((System_String_o *)Item, (System_Char_array *)this, 1, 0LL);
                      v214 = NetworkManager_TypeInfo;
                      v215 = v211;
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v214 = NetworkManager_TypeInfo;
                      }
                      v216 = v214->static_fields;
                      v217 = (int)StringLiteral_1/*""*/;
                      v216->sessionId = (struct System_String_o *)StringLiteral_1/*""*/;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)&v216->sessionId, v217, v212, v213);
                      if ( !v215 )
                        goto LABEL_531;
                      max_length = v215->max_length;
                      if ( max_length >= 1 )
                      {
                        v219 = 0;
                        while ( v219 < max_length )
                        {
                          v220 = &v215->obj.klass + (int)v219;
                          v221 = (System_String_o *)v220[4];
                          if ( !v221 )
                            goto LABEL_531;
                          this = (NetworkManager__RequestCR_d__213_o *)System_String__StartsWith(
                                                                         (System_String_o *)v220[4],
                                                                         (System_String_o *)StringLiteral_22483/*"path="*/,
                                                                         0LL);
                          if ( ((unsigned __int8)this & 1) == 0 )
                          {
                            v222 = NetworkManager_TypeInfo;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              v222 = NetworkManager_TypeInfo;
                            }
                            v223 = System_String__Concat_61718292(
                                     v222->static_fields->sessionId,
                                     v221,
                                     (System_String_o *)StringLiteral_1579/*";"*/,
                                     0LL);
                            v224 = NetworkManager_TypeInfo->static_fields;
                            v224->sessionId = v223;
                            sub_1B88554(
                              (ServantStatusBattleListViewItem_o *)&v224->sessionId,
                              (int32_t)v223,
                              v225,
                              v226);
                            max_length = v215->max_length;
                            if ( (int)++v219 < max_length )
                              continue;
                          }
                          goto LABEL_118;
                        }
                        goto LABEL_533;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_118;
        }
        if ( !v19 )
          goto LABEL_531;
        error_k__BackingField = v19->fields._error_k__BackingField;
        v2->fields._errorCode_5__3 = error_k__BackingField;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3,
          (int32_t)error_k__BackingField,
          v17,
          v18);
        v73 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( NetworkManager__get_UserId((const MethodInfo *)v73) >= 1 )
        {
          v76 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( NetworkManager__get_UserId((const MethodInfo *)v76) % 10 == 1 )
          {
            this = (NetworkManager__RequestCR_d__213_o *)*p_www_5__10;
            if ( !*p_www_5__10 )
              goto LABEL_531;
            DelightWorks_Network_UnityWebRequestWWW__ExceptionLog(
              (DelightWorks_Network_UnityWebRequestWWW_o *)this,
              0LL);
          }
        }
        v77 = StringLiteral_22915/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22915/*"retry"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v77, v74, v75);
        v78 = v2->fields._www_5__10;
        if ( !v78 )
          goto LABEL_531;
        this = (NetworkManager__RequestCR_d__213_o *)v78->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_531;
        this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                       (const MethodInfo_31C6E98 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
        if ( (int)this < 1 )
          goto LABEL_118;
        if ( !*p_www_5__10 )
          goto LABEL_531;
        this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_531;
        this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                       (Il2CppObject *)StringLiteral_12260/*"STATUS"*/,
                                                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_118;
        if ( !*p_www_5__10 )
          goto LABEL_531;
        this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_531;
        v79 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)this,
                (Il2CppObject *)StringLiteral_12260/*"STATUS"*/,
                (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        this = (NetworkManager__RequestCR_d__213_o *)sub_1B88658(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_531;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_533;
        LOWORD(this->fields.work) = 32;
        if ( !v79 )
          goto LABEL_531;
        this = (NetworkManager__RequestCR_d__213_o *)System_String__Split_61729424(
                                                       (System_String_o *)v79,
                                                       (System_Char_array *)this,
                                                       1,
                                                       0LL);
        if ( !this )
          goto LABEL_531;
        v80 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_118;
        this = (NetworkManager__RequestCR_d__213_o *)this->fields.work;
        if ( !this )
          goto LABEL_531;
        this = (NetworkManager__RequestCR_d__213_o *)System_String__StartsWith(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_7162/*"HTTP"*/,
                                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_118;
        if ( LODWORD(v80->fields.__2__current) <= 1 )
          goto LABEL_533;
        v81 = (System_String_o *)v80->fields.__4__this;
        v82 = PrivateImplementationDetails___ComputeStringHash(v81, 0LL);
        if ( v82 > 0x434FEE0C )
        {
          if ( v82 <= 0xAA3008DB )
          {
            if ( v82 == -1456470200 )
            {
              if ( !System_String__op_Equality(v81, (System_String_o *)StringLiteral_1498/*"401"*/, 0LL) )
                goto LABEL_526;
              v352 = &StringLiteral_9229/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/;
            }
            else
            {
              if ( v82 != -1439692581 || !System_String__op_Equality(v81, (System_String_o *)StringLiteral_1496/*"400"*/, 0LL) )
                goto LABEL_526;
              v352 = &StringLiteral_9234/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/;
            }
            v359 = *v352;
            v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v352;
            p_errorLocalizeCode_5__4 = &v2->fields._errorLocalizeCode_5__4;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v359, v69, v70);
            v85 = StringLiteral_19832/*"goto_title"*/;
LABEL_528:
            p_errorLocalizeCode_5__4[1] = (struct System_String_o *)v85;
            p_errorAction_5__5 = (ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5;
            goto LABEL_117;
          }
          if ( v82 == -1372582105 )
          {
            if ( System_String__op_Equality(v81, (System_String_o *)StringLiteral_1501/*"404"*/, 0LL) )
            {
              v361 = &StringLiteral_9233/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/;
              goto LABEL_527;
            }
            goto LABEL_526;
          }
          if ( v82 != -1008248995 )
            goto LABEL_526;
          v354 = &StringLiteral_1465/*"200"*/;
        }
        else
        {
          if ( v82 <= 0x2D98A5D6 )
          {
            if ( v82 == 731423408 )
            {
              v83 = &StringLiteral_1509/*"500"*/;
              goto LABEL_525;
            }
            if ( v82 == 764978646 )
            {
              v83 = &StringLiteral_1511/*"502"*/;
LABEL_525:
              System_String__op_Equality(v81, (System_String_o *)*v83, 0LL);
            }
LABEL_526:
            v361 = &StringLiteral_9230/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
LABEL_527:
            v362 = *v361;
            v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v361;
            p_errorLocalizeCode_5__4 = &v2->fields._errorLocalizeCode_5__4;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v362, v69, v70);
            v85 = StringLiteral_22915/*"retry"*/;
            goto LABEL_528;
          }
          if ( v82 == 781756265 )
          {
            v83 = &StringLiteral_1513/*"503"*/;
            goto LABEL_525;
          }
          if ( v82 != 1129311756 )
            goto LABEL_526;
          v354 = &StringLiteral_1480/*"302"*/;
        }
        if ( System_String__op_Equality(v81, (System_String_o *)*v354, 0LL) )
        {
          p_errorAction_5__5 = (ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3;
          LODWORD(v85) = 0;
          v2->fields._errorCode_5__3 = 0LL;
LABEL_117:
          sub_1B88554(p_errorAction_5__5, v85, v69, v70);
LABEL_118:
          if ( !*p_www_5__10 )
            goto LABEL_531;
          responseHeaders_k__BackingField = (System_Collections_Generic_Dictionary_object__object__o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
          if ( responseHeaders_k__BackingField )
          {
            this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                           responseHeaders_k__BackingField,
                                                           (const MethodInfo_31C6E98 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
            if ( (int)this >= 1 )
            {
              if ( !*p_www_5__10 )
                goto LABEL_531;
              this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
              if ( !this )
                goto LABEL_531;
              this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             (Il2CppObject *)StringLiteral_15696/*"X-SERVER-TIME"*/,
                                                             (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !*p_www_5__10 )
                  goto LABEL_531;
                this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                if ( !this )
                  goto LABEL_531;
                this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                               (Il2CppObject *)StringLiteral_15696/*"X-SERVER-TIME"*/,
                                                               (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
                if ( !this )
                  goto LABEL_531;
                v88 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                           this,
                                           this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                v89 = System_Int64__Parse(v88, 0LL);
                v90 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v90 = NetworkManager_TypeInfo;
                }
                v91 = v90->static_fields;
                v91->serverTime = v89;
                startTime_5__8 = v2->fields._startTime_5__8;
                v91->nowTime = -1LL;
                v91->serverOffsetTime = v89 - startTime_5__8;
              }
            }
          }
          this = (NetworkManager__RequestCR_d__213_o *)*p_www_5__10;
          if ( !*p_www_5__10 )
            goto LABEL_531;
          DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
          v2->fields._www_5__10 = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._www_5__10, 0, v93, v94);
          v2->fields._wait_5__14 = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__14, 0, v95, v96);
          goto LABEL_132;
        }
        goto LABEL_526;
      }
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        static_fields = ManagerConfig_TypeInfo->static_fields;
      }
      if ( static_fields->IsNetworkMock )
      {
        this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
        if ( !this )
          goto LABEL_531;
        v39 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                this,
                this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        if ( v39 )
        {
          v40 = (System_String_o *)v39;
          v41 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B887FC(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
          DelightWorks_Network_UnityWebRequestWWW___ctor(v41, v40, 0LL);
          v2->fields._www_5__10 = v41;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._www_5__10, (int32_t)v41, v42, v43);
          v44 = (Il2CppObject *)v2->fields._www_5__10;
          v2->fields.__2__current = v44;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B88554(p__2__current, (int32_t)v44, v45, v46);
          v32 = 3;
LABEL_317:
          *(_DWORD *)&p__2__current[-1].fields.isMine = v32;
          return 1;
        }
      }
LABEL_49:
      p_data_5__2 = &v2->fields._data_5__2;
      if ( !v2->fields._data_5__2 )
      {
        this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
        if ( !this )
          goto LABEL_531;
        v48 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                this,
                this->klass->vtable._6_MoveNext.methodPtr);
        *p_data_5__2 = (System_String_o *)v48;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._data_5__2, v48, v49, v50);
        if ( System_String__op_Equality(*p_data_5__2, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
        {
          this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
          if ( !this )
            goto LABEL_531;
          this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                         this,
                                                         this->klass[1]._1.image);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
            if ( !this )
              goto LABEL_531;
            this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, const char *))this->klass[1]._1.gc_desc)(
                                                           this,
                                                           this->klass[1]._1.name);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !this )
                goto LABEL_531;
              CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
            }
          }
          if ( _4__this )
          {
            NetworkManager__OnEndCommunication(_4__this, v2->fields.work, 0LL, v51);
            return 0;
          }
          goto LABEL_531;
        }
      }
LABEL_132:
      p_errorCode_5__3 = &v2->fields._errorCode_5__3;
      if ( v2->fields._errorCode_5__3 )
        goto LABEL_139;
      if ( System_String__IsNullOrEmpty(v2->fields._data_5__2, 0LL) )
      {
        v100 = StringLiteral_22114/*"none data"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_22114/*"none data"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, v100, v98, v99);
        v101 = StringLiteral_9232/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9232/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v101, v102, v103);
        v104 = StringLiteral_19832/*"goto_title"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_19832/*"goto_title"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v104, v105, v106);
        if ( v2->fields._isNoRedirect_5__9 )
        {
          v109 = (ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3;
          v110 = 0;
          *p_errorCode_5__3 = 0LL;
LABEL_138:
          sub_1B88554(v109, v110, v107, v108);
        }
LABEL_139:
        v117 = 0;
        goto LABEL_140;
      }
      if ( System_String__op_Equality(v2->fields._data_5__2, (System_String_o *)StringLiteral_7672/*"Internal Server Error"*/, 0LL) )
      {
        v113 = StringLiteral_20698/*"internal server error"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_20698/*"internal server error"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, v113, v111, v112);
        v114 = StringLiteral_9230/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9230/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v114, v115, v116);
        v110 = StringLiteral_22915/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22915/*"retry"*/;
        v109 = (ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5;
        goto LABEL_138;
      }
      data_5__2 = v2->fields._data_5__2;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      this = (NetworkManager__RequestCR_d__213_o *)JsonManager__getDictionary(data_5__2, 0LL);
      if ( !this )
        goto LABEL_531;
      v130 = this;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_22894/*"response"*/,
              (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v188 = StringLiteral_22115/*"none response data"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_22115/*"none response data"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, v188, v131, v132);
        v189 = StringLiteral_9230/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9230/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v189, v190, v191);
        v192 = StringLiteral_22915/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22915/*"retry"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v192, v193, v194);
LABEL_298:
        v117 = 0;
        goto LABEL_299;
      }
      v133 = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v130,
               (Il2CppObject *)StringLiteral_22894/*"response"*/,
               (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v134 = JsonManager__DeserializeArray_object_(
               v133,
               (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_ResponseData___);
      v2->fields._responseList_5__7 = (struct ResponseData_array *)v134;
      p_responseList_5__7 = &v2->fields._responseList_5__7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._responseList_5__7, (int32_t)v134, v136, v137);
      responseList_5__7 = v2->fields._responseList_5__7;
      if ( !responseList_5__7 )
        goto LABEL_531;
      v139 = 0LL;
      while ( 1 )
      {
        v140 = responseList_5__7->max_length;
        if ( (int)v139 >= v140 )
          goto LABEL_298;
        if ( (unsigned int)v139 >= v140 )
          goto LABEL_533;
        v141 = &responseList_5__7->obj.klass + v139;
        v142 = (ResponseData_o *)v141[4];
        if ( !v142 )
          goto LABEL_531;
        this = (NetworkManager__RequestCR_d__213_o *)ResponseData__checkError_41126424((ResponseData_o *)v141[4], 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        responseList_5__7 = *p_responseList_5__7;
        ++v139;
        if ( !*p_responseList_5__7 )
          goto LABEL_531;
      }
      this = (NetworkManager__RequestCR_d__213_o *)sub_1B88658(string___TypeInfo, 5LL);
      if ( !this )
        goto LABEL_531;
      v244 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_533;
      v245 = StringLiteral_22895/*"response error "*/;
      this->fields.work = (struct RequestBase_o *)StringLiteral_22895/*"response error "*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.work, v245, v242, v243);
      if ( LODWORD(v244->fields.__2__current) <= 1 )
        goto LABEL_533;
      nid = (struct NetworkManager_o *)v142->fields.nid;
      v244->fields.__4__this = nid;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v244->fields.__4__this, (int32_t)nid, v246, v247);
      if ( LODWORD(v244->fields.__2__current) <= 2
        || (v251 = StringLiteral_140/*" ("*/,
            *(_QWORD *)&v244->fields.delay = StringLiteral_140/*" ("*/,
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v244->fields.delay, v251, v249, v250),
            LODWORD(v244->fields.__2__current) <= 3)
        || (resCode = v142->fields.resCode,
            v244->fields._data_5__2 = resCode,
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v244->fields._data_5__2, (int32_t)resCode, v252, v253),
            LODWORD(v244->fields.__2__current) <= 4) )
      {
LABEL_533:
        sub_1B88814(this, method);
      }
      v257 = StringLiteral_814/*")"*/;
      v244->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_814/*")"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v244->fields._errorCode_5__3, v257, v255, v256);
      v258 = System_String__Concat_61720560((System_String_array *)v244, 0LL);
      v2->fields._errorCode_5__3 = v258;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, (int32_t)v258, v259, v260);
      v261 = (ResponseFailData_o *)sub_1B887FC(ResponseFailData_TypeInfo);
      ResponseFailData___ctor(v261, v142, 0LL);
      v2->fields._failData_5__6 = v261;
      p_failData_5__6 = &v2->fields._failData_5__6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._failData_5__6, (int32_t)v261, v263, v264);
      if ( !v2->fields._failData_5__6 )
        goto LABEL_531;
      this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(
                                                     v2->fields._failData_5__6->fields.action,
                                                     0LL);
      p_action = &StringLiteral_22915/*"retry"*/;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !*p_failData_5__6 )
          goto LABEL_531;
        p_action = (__int64 *)&(*p_failData_5__6)->fields.action;
      }
      v268 = *p_action;
      v2->fields._errorAction_5__5 = (struct System_String_o *)*p_action;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v268, v265, v266);
      v269 = v2->fields.work;
      if ( !v269 )
        goto LABEL_298;
      v270 = PurchaseByBank_UnityIap_Request_TypeInfo;
      v271 = LOBYTE(PurchaseByBank_UnityIap_Request_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v269->klass->vtable._0_Equals.methodPtr) < (unsigned int)v271
        || (PurchaseByBank_UnityIap_Request_c *)v269->klass->_2.typeHierarchy[v271 - 1] != PurchaseByBank_UnityIap_Request_TypeInfo )
      {
        v117 = 0;
        goto LABEL_391;
      }
      if ( !*p_failData_5__6 )
        goto LABEL_531;
      v353 = System_String__op_Equality((*p_failData_5__6)->fields.action, (System_String_o *)StringLiteral_22915/*"retry"*/, 0LL);
      v269 = v2->fields.work;
      v117 = v353;
      if ( v269 )
      {
        v270 = PurchaseByBank_UnityIap_Request_TypeInfo;
LABEL_391:
        klass = v269->klass;
        v273 = LOBYTE(v270->vtable._0_Equals.methodPtr);
        if ( LOBYTE(klass->vtable._0_Equals.methodPtr) >= (unsigned int)v273
          && (PurchaseByBank_UnityIap_Request_c *)klass->_2.typeHierarchy[v273 - 1] == v270 )
        {
          v274 = *p_responseList_5__7;
          if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
          v275 = ResponseCommandKind__SearchData(11, v274, 0LL);
          if ( v275 )
          {
            fail = (System_Collections_Generic_Dictionary_object__object__o *)v275->fields.fail;
            if ( fail )
            {
              if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
                     fail,
                     (Il2CppObject *)StringLiteral_22903/*"result"*/,
                     &value,
                     (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
              {
                this = (NetworkManager__RequestCR_d__213_o *)value;
                if ( !value )
                  goto LABEL_531;
                v277 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                            value,
                                            value->klass->vtable[4].methodPtr);
                if ( System_String__op_Equality(v277, (System_String_o *)StringLiteral_22501/*"pending_purchase_error"*/, 0LL)
                  || System_String__op_Equality(v277, (System_String_o *)StringLiteral_17731/*"canceled_purchase_error"*/, 0LL) )
                {
                  v280 = StringLiteral_23546/*"stay_no_dialog"*/;
                  v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_23546/*"stay_no_dialog"*/;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v280, v278, v279);
                }
              }
            }
          }
        }
      }
LABEL_299:
      if ( *p_errorCode_5__3 )
        goto LABEL_140;
      this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)v130,
                                                     (Il2CppObject *)StringLiteral_17696/*"cache"*/,
                                                     (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v195 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)v130,
                                                       (Il2CppObject *)StringLiteral_17696/*"cache"*/,
                                                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v195 )
          goto LABEL_531;
        DataManager__updateJsonData((DataManager_o *)v195, (Il2CppObject *)this, 0LL);
      }
      v196 = v2->fields._responseList_5__7;
      if ( !v196 )
        goto LABEL_531;
      v197 = 0LL;
      while ( 1 )
      {
        v198 = v196->max_length;
        if ( (__int64)v197 >= (int)v198 )
          goto LABEL_140;
        if ( v197 >= v198 )
          goto LABEL_533;
        v199 = v196->m_Items[v197];
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (NetworkManager__RequestCR_d__213_o *)NetworkManager__ExecuteCommand(v199, method);
        if ( (_DWORD)this )
          break;
        v196 = v2->fields._responseList_5__7;
        ++v197;
        if ( !v196 )
          goto LABEL_531;
      }
      if ( !v199 )
        goto LABEL_531;
      v315 = System_String__Concat_61707032((System_String_o *)StringLiteral_22896/*"response execute error "*/, v199->fields.nid, 0LL);
      v2->fields._errorCode_5__3 = v315;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, (int32_t)v315, v316, v317);
      v318 = (ResponseFailData_o *)sub_1B887FC(ResponseFailData_TypeInfo);
      ResponseFailData___ctor(v318, v199, 0LL);
      v2->fields._failData_5__6 = v318;
      v319 = &v2->fields._failData_5__6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._failData_5__6, (int32_t)v318, v320, v321);
      if ( !v2->fields._failData_5__6 )
LABEL_531:
        sub_1B8880C(this, method);
      this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(
                                                     v2->fields._failData_5__6->fields.action,
                                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v324 = &StringLiteral_22915/*"retry"*/;
      }
      else
      {
        if ( !*v319 )
          goto LABEL_531;
        v324 = (__int64 *)&(*v319)->fields.action;
      }
      v326 = *v324;
      v2->fields._errorAction_5__5 = (struct System_String_o *)*v324;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v326, v322, v323);
LABEL_140:
      this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
      if ( !this )
        goto LABEL_531;
      this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                     this,
                                                     this->klass[1]._1.image);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
        if ( !this )
          goto LABEL_531;
        this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, const char *))this->klass[1]._1.gc_desc)(
                                                       this,
                                                       this->klass[1]._1.name);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_531;
          CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
        }
      }
      if ( !*p_errorCode_5__3 )
      {
        if ( !_4__this )
          goto LABEL_531;
        NetworkManager__OnEndCommunication(_4__this, v2->fields.work, v2->fields._responseList_5__7, v119);
        goto LABEL_479;
      }
      method = (const MethodInfo *)v2->fields._responseList_5__7;
      if ( !_4__this )
        goto LABEL_531;
      _4__this->fields.communicationWorkResponseList = (struct ResponseData_array *)method;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationWorkResponseList,
        (int32_t)method,
        v118,
        (int32_t)v119);
      v2->fields._responseList_5__7 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._responseList_5__7, 0, v120, v121);
      v122 = &v2->fields._errorLocalizeCode_5__4;
      errorLocalizeCode_5__4 = v2->fields._errorLocalizeCode_5__4;
      if ( !errorLocalizeCode_5__4 )
      {
        errorAction_5__5 = v2->fields._errorAction_5__5;
        if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23535/*"stay"*/, 0LL)
          || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23546/*"stay_no_dialog"*/, 0LL) )
        {
          v128 = &StringLiteral_9231/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/;
        }
        else
        {
          if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22915/*"retry"*/, 0LL)
            || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22853/*"reload_cache"*/, 0LL) )
          {
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            if ( !byte_4A5A27F )
            {
              sub_1B885B0(&ManagementManager_TypeInfo);
              byte_4A5A27F = 1;
            }
            v158 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v158 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v158->static_fields->isDuringStartup;
            v160 = &StringLiteral_9235/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/;
            v161 = &StringLiteral_9221/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/;
          }
          else
          {
            if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_19831/*"goto_login_access"*/, 0LL)
              || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22834/*"refresh_terminal"*/, 0LL) )
            {
LABEL_215:
              errorLocalizeCode_5__4 = *v122;
              title = (System_String_o *)StringLiteral_1/*""*/;
              detail = (System_String_o *)StringLiteral_1/*""*/;
              if ( !errorLocalizeCode_5__4 )
                goto LABEL_219;
              goto LABEL_216;
            }
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            if ( !byte_4A5A27F )
            {
              sub_1B885B0(&ManagementManager_TypeInfo);
              byte_4A5A27F = 1;
            }
            v325 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v325 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v325->static_fields->isDuringStartup;
            v160 = &StringLiteral_9232/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
            v161 = (__int64 *)&StringLiteral_9218/*"NETWORK_ERROR_BOOT_MESSAGE"*/;
          }
          if ( isDuringStartup )
            v128 = v161;
          else
            v128 = v160;
        }
        v162 = *v128;
        *v122 = (System_String_o *)*v128;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v162, v126, v127);
        goto LABEL_215;
      }
      title = (System_String_o *)StringLiteral_1/*""*/;
LABEL_216:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      detail = LocalizationManager__Get(errorLocalizeCode_5__4, 0LL);
LABEL_219:
      failData_5__6 = v2->fields._failData_5__6;
      if ( failData_5__6 )
      {
        this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(failData_5__6->fields.title, 0LL);
        v165 = v2->fields._failData_5__6;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v165 )
            goto LABEL_531;
        }
        else
        {
          if ( !v165 )
            goto LABEL_531;
          title = v165->fields.title;
        }
        this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(v165->fields.detail, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v167 = v2->fields._failData_5__6;
          if ( !v167 )
            goto LABEL_531;
          detail = v167->fields.detail;
        }
        this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(detail, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v168 = v2->fields._failData_5__6;
          if ( !v168 )
            goto LABEL_531;
          if ( v168->fields.csId )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__213_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9222/*"NETWORK_ERROR_CSID_CODE"*/,
                                                           0LL);
            v169 = v2->fields._failData_5__6;
            if ( !v169 )
              goto LABEL_531;
            v170 = System_String__Format((System_String_o *)this, (Il2CppObject *)v169->fields.csId, 0LL);
            this = (NetworkManager__RequestCR_d__213_o *)System_String__Concat_61718292(
                                                           detail,
                                                           (System_String_o *)StringLiteral_43/*"\n"*/,
                                                           v170,
                                                           0LL);
            detail = (System_String_o *)this;
          }
        }
        v171 = v2->fields._failData_5__6;
        if ( !v171 )
          goto LABEL_531;
        url = v171->fields.url;
      }
      else
      {
        url = 0LL;
      }
      this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
      if ( !this )
        goto LABEL_531;
      if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
              this,
              this->klass[1]._1.image) & 1) == 0
        || (v172 = v2->fields._errorAction_5__5,
            !System_String__op_Equality(v172, (System_String_o *)StringLiteral_23535/*"stay"*/, 0LL))
        && !System_String__op_Equality(v172, (System_String_o *)StringLiteral_23546/*"stay_no_dialog"*/, 0LL)
        && !System_String__op_Equality(v172, (System_String_o *)StringLiteral_22915/*"retry"*/, 0LL)
        && !System_String__op_Equality(v172, (System_String_o *)StringLiteral_22853/*"reload_cache"*/, 0LL)
        || (v174 = NetworkManager__OnBackgroundErrorCommunication(
                     _4__this,
                     _4__this->fields.communicationWork,
                     *p_errorCode_5__3,
                     0,
                     v173),
            result = 0,
            !v174) )
      {
        v176 = v2->fields._errorAction_5__5;
        v177 = PrivateImplementationDetails___ComputeStringHash(v176, 0LL);
        if ( v177 <= 0xA56F89EB )
        {
          if ( v177 <= 0x43CDBBC3 )
          {
            if ( v177 != 1019014393 )
            {
              if ( v177 != 1062826843 )
              {
                if ( v177 != 1137556419
                  || !System_String__op_Equality(v176, (System_String_o *)StringLiteral_23546/*"stay_no_dialog"*/, 0LL) )
                {
                  goto LABEL_446;
                }
LABEL_445:
                NetworkManager__OnEndCommunication(
                  _4__this,
                  _4__this->fields.communicationWork,
                  _4__this->fields.communicationWorkResponseList,
                  v178);
                goto LABEL_471;
              }
              if ( System_String__op_Equality(v176, (System_String_o *)StringLiteral_19832/*"goto_title"*/, 0LL) )
              {
                v227 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v227 = NetworkManager_TypeInfo;
                }
                v227->static_fields->isRebootBlock = 1;
                v228 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(v228, (Il2CppObject *)_4__this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
                NetworkManager__ErrorDialog(_4__this, title, detail, url, v228, v229);
                goto LABEL_471;
              }
              goto LABEL_446;
            }
            this = (NetworkManager__RequestCR_d__213_o *)System_String__op_Equality(
                                                           v176,
                                                           (System_String_o *)StringLiteral_22853/*"reload_cache"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_446;
            v230 = v2->fields._failData_5__6;
            if ( !v230 )
              goto LABEL_531;
            errorType = v230->fields.errorType;
            v231 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            v232 = &Method_NetworkManager_OnClickReloadCache__;
LABEL_470:
            v329 = v231;
            System_Action___ctor(v231, (Il2CppObject *)_4__this, *v232, 0LL);
            NetworkManager__WarningDialog(_4__this, title, detail, url, errorType, v329, v330);
            goto LABEL_471;
          }
          if ( v177 <= 0x9918C6CA )
          {
            if ( v177 == -1726429494 )
            {
              if ( System_String__op_Equality(v176, (System_String_o *)StringLiteral_20741/*"invalid_user"*/, 0LL) )
              {
                v281 = TitleRootComponent_TypeInfo;
                if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
                  v281 = TitleRootComponent_TypeInfo;
                }
                if ( v281->static_fields->shouldFadeInOnError )
                {
                  v282 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v283 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v283 = AvalonSceneManager_TypeInfo;
                  }
                  this = (NetworkManager__RequestCR_d__213_o *)NetworkManager___c_TypeInfo;
                  DEFAULT_FADE_TIME = v283->static_fields->DEFAULT_FADE_TIME;
                  if ( !NetworkManager___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager___c_TypeInfo);
                    this = (NetworkManager__RequestCR_d__213_o *)NetworkManager___c_TypeInfo;
                  }
                  monitor = (System_Action_o *)this[1].fields.work->monitor;
                  if ( !monitor )
                  {
                    if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
                    {
                      j_il2cpp_runtime_class_init_0(this);
                      this = (NetworkManager__RequestCR_d__213_o *)NetworkManager___c_TypeInfo;
                    }
                    v286 = (Il2CppObject *)this[1].fields.work->klass;
                    monitor = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                    System_Action___ctor(monitor, v286, Method_NetworkManager___c__RequestCR_b__213_1__, 0LL);
                    v287 = NetworkManager___c_TypeInfo->static_fields;
                    v287->__9__213_1 = monitor;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)&v287->__9__213_1, (int32_t)monitor, v288, v289);
                  }
                  if ( !v282 )
                    goto LABEL_531;
                  CommonUI__maskFadein((CommonUI_o *)v282, DEFAULT_FADE_TIME, monitor, 0LL);
                }
                v290 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v291 = LocalizationManager__Get((System_String_o *)StringLiteral_9237/*"NETWORK_USER_DELETE_DECIDE"*/, 0LL);
                v292 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NETWORK_USER_DELETE_CANCEL"*/, 0LL);
                v293 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                CommonConfirmDialog_ClickDelegate___ctor(
                  v293,
                  (Il2CppObject *)_4__this,
                  Method_NetworkManager_OnClickUserDelete__,
                  0LL);
                if ( !v290 )
                  goto LABEL_531;
                CommonUI__OpenConfirmDialog_30493912((CommonUI_o *)v290, title, detail, v291, v292, v293, 0, 0, 0, 0LL);
                goto LABEL_471;
              }
              goto LABEL_446;
            }
            if ( v177 != 2106643173 || !System_String__op_Equality(v176, (System_String_o *)StringLiteral_22834/*"refresh_terminal"*/, 0LL) )
              goto LABEL_446;
            if ( !BattleData_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
            BattleData__deleteSaveData(0LL);
            BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
            this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
            if ( !this )
              goto LABEL_531;
            ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)this, 0LL);
            this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(detail, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(url, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                NetworkManager__OnClickRefreshTerminal(_4__this, method);
                goto LABEL_471;
              }
            }
            v328 = v2->fields._failData_5__6;
            if ( !v328 )
              goto LABEL_531;
            errorType = v328->fields.errorType;
            v231 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            v232 = &Method_NetworkManager_OnClickRefreshTerminal__;
            goto LABEL_470;
          }
          if ( v177 != -1577396083 )
          {
            if ( v177 != -1519416853 || !System_String__op_Equality(v176, (System_String_o *)StringLiteral_19831/*"goto_login_access"*/, 0LL) )
              goto LABEL_446;
            v186 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v186 = NetworkManager_TypeInfo;
            }
            v186->static_fields->isRebootBlock = 1;
            this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(detail, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(url, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                NetworkManager__OnClickErrorTerminal((NetworkManager_o *)this, method);
                goto LABEL_471;
              }
            }
            v327 = v2->fields._failData_5__6;
            if ( !v327 )
              goto LABEL_531;
            errorType = v327->fields.errorType;
            v231 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            v232 = &Method_NetworkManager_OnClickErrorTerminal__;
            goto LABEL_470;
          }
          if ( !System_String__op_Equality(v176, (System_String_o *)StringLiteral_18656/*"do_signup"*/, 0LL) )
            goto LABEL_446;
          v311 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          NetworkManager__DeleteSignupData((const MethodInfo *)v311);
LABEL_439:
          v312 = v2->fields._failData_5__6;
          if ( !v312 )
            goto LABEL_531;
          errorType = v312->fields.errorType;
          v231 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          v232 = &Method_NetworkManager_OnClickErrorStay__;
          goto LABEL_470;
        }
        if ( v177 > 0xCC10A7C9 )
        {
          if ( v177 <= 0xDA79AAB9 )
          {
            if ( v177 == -809642680 )
            {
              this = (NetworkManager__RequestCR_d__213_o *)System_String__op_Equality(
                                                             v176,
                                                             (System_String_o *)StringLiteral_22810/*"reconnection"*/,
                                                             0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v295 = v2->fields._failData_5__6;
                if ( !v295 )
                  goto LABEL_531;
                sandboxDomain = v295->fields.sandboxDomain;
                sandboxSeurity = v295->fields.sandboxSeurity;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                NetworkManager__SetGameServerRedirect(sandboxDomain, sandboxSeurity, v294);
                v300 = v2->fields._failData_5__6;
                if ( !v300 )
                  goto LABEL_531;
                sandboxAssetsDomain = v300->fields.sandboxAssetsDomain;
                if ( !byte_4A5A9FC )
                {
                  sub_1B885B0(&NetworkManager_TypeInfo);
                  byte_4A5A9FC = 1;
                }
                v302 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v302 = NetworkManager_TypeInfo;
                }
                v303 = v302->static_fields;
                v303->dataServerRedirectAddress = sandboxAssetsDomain;
                sub_1B88554(
                  (ServantStatusBattleListViewItem_o *)&v303->dataServerRedirectAddress,
                  (int32_t)sandboxAssetsDomain,
                  v298,
                  v299);
                v306 = v2->fields._failData_5__6;
                if ( !v306 )
                  goto LABEL_531;
                sandboxWebviewDomain = v306->fields.sandboxWebviewDomain;
                if ( !byte_4A5A9FD )
                {
                  sub_1B885B0(&NetworkManager_TypeInfo);
                  byte_4A5A9FD = 1;
                }
                v308 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v308 = NetworkManager_TypeInfo;
                }
                v309 = v308->static_fields;
                v309->webServerRedirectAddress = sandboxWebviewDomain;
                sub_1B88554(
                  (ServantStatusBattleListViewItem_o *)&v309->webServerRedirectAddress,
                  (int32_t)sandboxWebviewDomain,
                  v304,
                  v305);
                NetworkManager__SetServerSetting_38454792(_4__this, v310);
                goto LABEL_471;
              }
            }
            else if ( v177 == -629560647
                   && System_String__op_Equality(v176, (System_String_o *)StringLiteral_22915/*"retry"*/, 0LL) )
            {
              this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
              if ( !this )
                goto LABEL_531;
              if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                      this,
                      this->klass[1]._1.declaringType) & 1) != 0 )
              {
                if ( NetworkManager__OnErrorCommunication(
                       _4__this,
                       _4__this->fields.communicationWork,
                       *p_errorCode_5__3,
                       v185) )
                {
                  return 0;
                }
              }
              else
              {
                if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                if ( !byte_4A5A27F )
                {
                  sub_1B885B0(&ManagementManager_TypeInfo);
                  byte_4A5A27F = 1;
                }
                v348 = ManagementManager_TypeInfo;
                if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                  v348 = ManagementManager_TypeInfo;
                }
                v349 = v348->static_fields->isDuringStartup;
                v350 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( v349 )
                {
                  v351 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v351,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0LL);
                  if ( !v350 )
                    goto LABEL_531;
                  CommonUI__OpenRetryBootDialog((CommonUI_o *)v350, title, detail, v351, 0, 0LL);
                }
                else if ( v117 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v355 = LocalizationManager__Get((System_String_o *)StringLiteral_3761/*"COMMON_CONFIRM_RETRY"*/, 0LL);
                  v356 = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
                  v357 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v357,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__,
                    0LL);
                  if ( !v350 )
                    goto LABEL_531;
                  CommonUI__OpenRetryDialog_30493396((CommonUI_o *)v350, title, detail, v355, v356, v357, 0, 0LL);
                }
                else
                {
                  v358 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v358,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0LL);
                  if ( !v350 )
                    goto LABEL_531;
                  CommonUI__OpenRetryDialog((CommonUI_o *)v350, title, detail, v358, 0, 0LL);
                }
              }
              goto LABEL_471;
            }
            goto LABEL_446;
          }
          if ( v177 == -258062273 )
          {
            if ( System_String__op_Equality(v176, (System_String_o *)StringLiteral_20740/*"invalid_battle"*/, 0LL) )
            {
              if ( !BattleData_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              BattleData__deleteSaveData(0LL);
              goto LABEL_445;
            }
LABEL_446:
            v313 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v314 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v314,
              (Il2CppObject *)_4__this,
              Method_NetworkManager_OnClickErrorDialog__,
              0LL);
            if ( !v313 )
              goto LABEL_531;
            CommonUI__OpenErrorDialog((CommonUI_o *)v313, title, detail, v314, 0, 0LL);
LABEL_471:
            v2->fields._responseList_5__7 = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._responseList_5__7, 0, v183, v184);
            if ( System_String__op_Equality(v2->fields._errorAction_5__5, (System_String_o *)StringLiteral_22810/*"reconnection"*/, 0LL) )
            {
LABEL_472:
              v2->fields._data_5__2 = 0LL;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._data_5__2, 0, v5, v6);
              v2->fields._errorCode_5__3 = 0LL;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, 0, v331, v332);
              v2->fields._errorLocalizeCode_5__4 = 0LL;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, 0, v333, v334);
              v2->fields._errorAction_5__5 = 0LL;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, 0, v335, v336);
              v2->fields._failData_5__6 = 0LL;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._failData_5__6, 0, v337, v338);
              v2->fields._responseList_5__7 = 0LL;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._responseList_5__7, 0, v339, v340);
              this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
              if ( !this )
                goto LABEL_531;
              if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                      this,
                      this->klass[1]._1.image) & 1) == 0 )
              {
                this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
                if ( !this )
                  goto LABEL_531;
                if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, const char *))this->klass[1]._1.gc_desc)(
                        this,
                        this->klass[1]._1.name) & 1) != 0 )
                {
                  this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !this )
                    goto LABEL_531;
                  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
                }
              }
              v341 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v341, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v341;
              v342 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B88554(v342, (int32_t)v341, v343, v344);
              result = 1;
              *(_DWORD *)&v342[-1].fields.isMine = 1;
              return result;
            }
LABEL_479:
            v345 = (ServantStatusBattleListViewItem_c *)v2->fields._data_5__2;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4A5A9FE )
            {
              sub_1B885B0(&NetworkManager_TypeInfo);
              byte_4A5A9FE = 1;
            }
            v346 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v346 = NetworkManager_TypeInfo;
            }
            p_errorDialogResponseData = (ServantStatusBattleListViewItem_o *)&v346->static_fields->errorDialogResponseData;
            p_errorDialogResponseData->klass = v345;
            sub_1B88554(p_errorDialogResponseData, (int32_t)v345, v5, v6);
            return 0;
          }
          if ( v177 != -193734025 || !System_String__op_Equality(v176, (System_String_o *)StringLiteral_18473/*"data_update"*/, 0LL) )
            goto LABEL_446;
          v187 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v187 = NetworkManager_TypeInfo;
          }
          v187->static_fields->isRebootBlock = 1;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          DataManager__ClearCacheAll(0LL);
        }
        else
        {
          if ( v177 != -1105950412 )
          {
            if ( v177 != -969204192 )
            {
              if ( v177 != -871323703 || !System_String__op_Equality(v176, (System_String_o *)StringLiteral_16814/*"app_version_up"*/, 0LL) )
                goto LABEL_446;
              v179 = ManagementManager_TypeInfo;
              if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              ManagementManager__RebootCacheClear((const MethodInfo *)v179);
              v180 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v180 = NetworkManager_TypeInfo;
              }
              v180->static_fields->isRebootBlock = 1;
              v181 = v2->fields._failData_5__6;
              if ( v181 )
                errorType = v181->fields.errorType;
              else
                errorType = 0;
              v231 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              v232 = &Method_NetworkManager_OnClickStore__;
              goto LABEL_470;
            }
            this = (NetworkManager__RequestCR_d__213_o *)System_String__op_Equality(
                                                           v176,
                                                           (System_String_o *)StringLiteral_23535/*"stay"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_446;
            goto LABEL_439;
          }
          if ( !System_String__op_Equality(v176, (System_String_o *)StringLiteral_21258/*"maint"*/, 0LL) )
            goto LABEL_446;
          v233 = ManagementManager_TypeInfo;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear((const MethodInfo *)v233);
          this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
          }
          LOBYTE(this[1].fields.work[3].fields.CallBack) = 1;
        }
        v234 = v2->fields._failData_5__6;
        if ( !v234 )
          goto LABEL_531;
        errorType = v234->fields.errorType;
        v231 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        v232 = &Method_NetworkManager_OnClickErrorReboot__;
        goto LABEL_470;
      }
      return result;
    case 3:
      v21 = (NetworkManager__RequestCR_d__213_o **)&v2->fields._www_5__10;
      v20 = v2->fields._www_5__10;
      v2->fields.__1__state = -1;
      if ( !v20 )
        goto LABEL_531;
      if ( !System_String__IsNullOrEmpty(v20->fields._error_k__BackingField, 0LL) )
        goto LABEL_28;
      this = *v21;
      if ( !*v21 )
        goto LABEL_531;
      v22 = DelightWorks_Network_UnityWebRequestWWW__get_text((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v2->fields._data_5__2 = v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._data_5__2, (int32_t)v22, v23, v24);
LABEL_28:
      this = *v21;
      if ( !*v21 )
        goto LABEL_531;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      *v21 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._www_5__10, 0, v25, v26);
      goto LABEL_49;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_15;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall NetworkManager__RequestCR_d__213__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__RequestCR_d__213_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__RequestCR_d__213__System_Collections_IEnumerator_Reset(
        NetworkManager__RequestCR_d__213_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_NetworkManager__RequestCR_d__213_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall NetworkManager__RequestCR_d__213__System_Collections_IEnumerator_get_Current(
        NetworkManager__RequestCR_d__213_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__RequestCR_d__213__System_IDisposable_Dispose(
        NetworkManager__RequestCR_d__213_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager__TimeUpdate_d__81___ctor(
        NetworkManager__TimeUpdate_d__81_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NetworkManager__TimeUpdate_d__81__MoveNext(
        NetworkManager__TimeUpdate_d__81_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  NetworkManager_c *v4; // x0
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0

  if ( (byte_4A5A990 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4A5A990 = 1;
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
    v4->static_fields->nowTime = -1LL;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
LABEL_9:
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    p__2__current = &this->fields.__2__current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v5, v7, v8);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall NetworkManager__TimeUpdate_d__81__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NetworkManager__TimeUpdate_d__81_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NetworkManager__TimeUpdate_d__81__System_Collections_IEnumerator_Reset(
        NetworkManager__TimeUpdate_d__81_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_NetworkManager__TimeUpdate_d__81_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall NetworkManager__TimeUpdate_d__81__System_Collections_IEnumerator_get_Current(
        NetworkManager__TimeUpdate_d__81_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NetworkManager__TimeUpdate_d__81__System_IDisposable_Dispose(
        NetworkManager__TimeUpdate_d__81_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall NetworkManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5A98B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager___c_TypeInfo);
    byte_4A5A98B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(NetworkManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  NetworkManager___c_TypeInfo->static_fields->__9 = (struct NetworkManager___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)NetworkManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall NetworkManager___c___ctor(NetworkManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NetworkManager___c___RequestCR_b__213_1(NetworkManager___c_o *this, const MethodInfo *method)
{
  TitleRootComponent_c *v2; // x0

  if ( (byte_4A5A98C & 1) == 0 )
  {
    sub_1B885B0(&TitleRootComponent_TypeInfo);
    byte_4A5A98C = 1;
  }
  v2 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v2 = TitleRootComponent_TypeInfo;
  }
  v2->static_fields->shouldFadeInOnError = 0;
}