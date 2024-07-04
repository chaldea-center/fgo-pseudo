void __fastcall NetworkManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantStatusBattleListViewItem_o *static_fields; // x0
  __int64 v10; // x8
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
  struct NetworkManager_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  struct NetworkManager_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  ServantStatusBattleListViewItem_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  struct NetworkManager_StaticFields *v44; // x0
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w1
  struct NetworkManager_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w1
  struct NetworkManager_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w1
  struct NetworkManager_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  ServantStatusBattleListViewItem_o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  struct NetworkManager_StaticFields *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  struct NetworkManager_StaticFields *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  struct NetworkManager_StaticFields *v69; // x8
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w1
  ServantStatusBattleListViewItem_o *p_dataServerAddress; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  int32_t v77; // w1
  ServantStatusBattleListViewItem_o *p_webServerAddress; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  int32_t v81; // w1
  ServantStatusBattleListViewItem_o *p_webViewBaseURL; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  System_Collections_Generic_Dictionary_object__object__o *v85; // x19
  ServantStatusBattleListViewItem_o *p_webViewAddress; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  int32_t v89; // w1
  ServantStatusBattleListViewItem_o *p_AUTHMD5_KEY_TYPE; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  int32_t v93; // w1
  ServantStatusBattleListViewItem_o *p_errorDialogResponseData; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  __int64 v97; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v98; // 0:x0.8

  if ( (byte_48E1FEB & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v1);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v4);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_14091/*"TheCheckKey"*/, v6);
    sub_1B00CCC(&StringLiteral_19160/*"file://"*/, v7);
    sub_1B00CCC(&StringLiteral_1/*""*/, v8);
    byte_48E1FEB = 1;
  }
  NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME = (struct System_String_o *)StringLiteral_19160/*"file://"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields, StringLiteral_19160/*"file://"*/, v2, v3);
  v98.fields._dateData = (uint64_t)&v97;
  NetworkManager_TypeInfo->static_fields->WebCacheTime = 300LL;
  v97 = 0LL;
  System_DateTime___ctor_61004432(v98, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  static_fields = (ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields;
  v10 = v97;
  static_fields->fields.sortValue1B = 0LL;
  static_fields = (ServantStatusBattleListViewItem_o *)((char *)static_fields + 64);
  *(_QWORD *)&static_fields[-1].fields.dispLimitCount.fields.currentCryptoKey = 0LL;
  *(_QWORD *)&static_fields[-1].fields.dispLimitCount.fields.fakeValue = 0LL;
  *(_QWORD *)&static_fields[-1].fields.svtId.fields.fakeValue = v10;
  static_fields[-1].fields.isEnabled = 0;
  static_fields[-1].fields.name = 0LL;
  *(_QWORD *)&static_fields[-1].fields.isMine = -1LL;
  sub_1B00C70(static_fields, 0, v11, v12);
  v13 = NetworkManager_TypeInfo->static_fields;
  v13->userCreateServer = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v13->userCreateServer, 0, v14, v15);
  v16 = NetworkManager_TypeInfo->static_fields;
  v16->userId = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v16->userId, 0, v17, v18);
  v19 = NetworkManager_TypeInfo->static_fields;
  v19->authKey = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19->authKey, 0, v20, v21);
  v22 = NetworkManager_TypeInfo->static_fields;
  v22->secretKey = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v22->secretKey, 0, v23, v24);
  v25 = NetworkManager_TypeInfo->static_fields;
  v25->userName = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v25->userName, 0, v26, v27);
  v28 = NetworkManager_TypeInfo->static_fields;
  v28->sessionId = 0LL;
  v28 = (struct NetworkManager_StaticFields *)((char *)v28 + 128);
  v28[-1].AUTHMD5_KEY_TYPE = 0LL;
  LODWORD(v28[-1].errorDialogResponseData) = 0;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v28, 0, v29, v30);
  v31 = NetworkManager_TypeInfo->static_fields;
  v31->friendCode = 0LL;
  v31 = (struct NetworkManager_StaticFields *)((char *)v31 + 144);
  LOWORD(v31[-1].errorDialogResponseData) = 1;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v31, 0, v32, v33);
  v34 = NetworkManager_TypeInfo->static_fields;
  v34->registrationVersion = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->registrationVersion, 0, v35, v36);
  v37 = NetworkManager_TypeInfo->static_fields;
  v37->registrationId = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v37->registrationId, 0, v38, v39);
  v40 = (int)StringLiteral_1/*""*/;
  v41 = (ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields;
  v41[1].klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B00C70(v41 + 1, v40, v42, v43);
  v44 = NetworkManager_TypeInfo->static_fields;
  v44->serverSettingSecurity = 0;
  v45 = (int)StringLiteral_1/*""*/;
  v44->gameServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v44->gameServerSettingAddress, v45, v46, v47);
  v48 = (int)StringLiteral_1/*""*/;
  v49 = NetworkManager_TypeInfo->static_fields;
  v49->dataServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v49->dataServerSettingAddress, v48, v50, v51);
  v52 = (int)StringLiteral_1/*""*/;
  v53 = NetworkManager_TypeInfo->static_fields;
  v53->webServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v53->webServerSettingAddress, v52, v54, v55);
  v56 = (int)StringLiteral_1/*""*/;
  v57 = NetworkManager_TypeInfo->static_fields;
  v57->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v57->dataServerFolder, v56, v58, v59);
  v60 = (ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields;
  v60[1].fields.sortStr1 = 0LL;
  v60 = (ServantStatusBattleListViewItem_o *)((char *)v60 + 224);
  v60[-1].fields.isMine = 0;
  sub_1B00C70(v60, 0, v61, v62);
  v63 = NetworkManager_TypeInfo->static_fields;
  v63->dataServerRedirectAddress = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v63->dataServerRedirectAddress, 0, v64, v65);
  v66 = NetworkManager_TypeInfo->static_fields;
  v66->webServerRedirectAddress = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v66->webServerRedirectAddress, 0, v67, v68);
  v69 = NetworkManager_TypeInfo->static_fields;
  v69->serverSecurity = 0;
  v70 = (int)StringLiteral_1/*""*/;
  v69->gameServerAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v69->gameServerAddress, v70, v71, v72);
  v73 = (int)StringLiteral_1/*""*/;
  p_dataServerAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->dataServerAddress;
  p_dataServerAddress->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B00C70(p_dataServerAddress, v73, v75, v76);
  v77 = (int)StringLiteral_1/*""*/;
  p_webServerAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->webServerAddress;
  p_webServerAddress->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B00C70(p_webServerAddress, v77, v79, v80);
  v81 = (int)StringLiteral_1/*""*/;
  p_webViewBaseURL = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B00C70(p_webViewBaseURL, v81, v83, v84);
  v85 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v85,
    (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  p_webViewAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->webViewAddress;
  p_webViewAddress->klass = (ServantStatusBattleListViewItem_c *)v85;
  sub_1B00C70(p_webViewAddress, (int32_t)v85, v87, v88);
  v89 = StringLiteral_14091/*"TheCheckKey"*/;
  p_AUTHMD5_KEY_TYPE = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->AUTHMD5_KEY_TYPE;
  p_AUTHMD5_KEY_TYPE->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_14091/*"TheCheckKey"*/;
  sub_1B00C70(p_AUTHMD5_KEY_TYPE, v89, v91, v92);
  v93 = (int)StringLiteral_1/*""*/;
  p_errorDialogResponseData = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->errorDialogResponseData;
  p_errorDialogResponseData->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B00C70(p_errorDialogResponseData, v93, v95, v96);
}


void __fastcall NetworkManager___ctor(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
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
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_Queue_T__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_48E206C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_RequestBase___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_Queue_RequestBase__TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager___ctor__, v6);
    sub_1B00CCC(&StringLiteral_1/*""*/, v7);
    byte_48E206C = 1;
  }
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.mAndroidApiKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mAndroidApiKey, v8, v2, v3);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.mAndroidProjectId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mAndroidProjectId, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.mIosApplicationId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mIosApplicationId, v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.mMk = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mMk, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.mCv = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mCv, v18, v19, v20);
  v21 = (int)StringLiteral_1/*""*/;
  this->fields.mAuGameServerPublicKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mAuGameServerPublicKey, v21, v22, v23);
  v24 = (System_Collections_Generic_Queue_T__o *)sub_1B00F18(System_Collections_Generic_Queue_RequestBase__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v24,
    (const MethodInfo_3532CE0 *)Method_System_Collections_Generic_Queue_RequestBase___ctor__);
  this->fields.communicationWaitList = (struct System_Collections_Generic_Queue_RequestBase__o *)v24;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.communicationWaitList, (int32_t)v24, v25, v26);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_35FC008 *)Method_SingletonMonoBehaviour_NetworkManager___ctor__);
}


void __fastcall NetworkManager__AddWaitStatus(NetworkManager_o *this, RequestBase_o *request, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Queue_T__o *communicationWaitList; // x0
  System_Collections_Generic_Queue_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_48E205E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__, request);
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_RequestBase__Enqueue__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__, v8);
    byte_48E205E = 1;
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
      (const MethodInfo_3533360 *)Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__);
    while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_313E624 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__) )
    {
      if ( System_Collections_Generic_Queue_Enumerator_object___get_Current(
             &v10,
             (const MethodInfo_313E714 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__) == (Il2CppObject *)request )
      {
        System_Collections_Generic_Queue_Enumerator_object___Dispose(
          &v10,
          (const MethodInfo_313E614 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
        return;
      }
    }
    System_Collections_Generic_Queue_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_313E614 *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
    communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
    if ( !communicationWaitList )
LABEL_12:
      sub_1B00F28(communicationWaitList, request);
    System_Collections_Generic_Queue_object___Enqueue(
      communicationWaitList,
      (Il2CppObject *)request,
      (const MethodInfo_35332A8 *)Method_System_Collections_Generic_Queue_RequestBase__Enqueue__);
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
  const MethodInfo *v12; // x1
  NetworkManager_c *v13; // x8
  __int64 v14; // x21
  BalanceConfig_c *v15; // x0
  struct NetworkManager_StaticFields *v16; // x8
  System_String_o *v17; // x20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x5

  if ( (byte_48E1FFD & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&BalanceConfig_TypeInfo, v3);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v4);
    sub_1B00CCC(&Method_NetworkManager_OnClickErrorReboot__, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_12272/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v7);
    sub_1B00CCC(&StringLiteral_1/*""*/, v8);
    byte_48E1FFD = 1;
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
    v13 = NetworkManager_TypeInfo;
    v14 = Time - NetworkManager_TypeInfo->static_fields->serverTime;
    if ( v14 < 0 )
      goto LABEL_16;
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    if ( v14 > v15->static_fields->ServerTimeOverLimit )
    {
      v13 = NetworkManager_TypeInfo;
LABEL_16:
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = NetworkManager_TypeInfo;
      }
      v16 = v13->static_fields;
      v16->isErrorServerTimeLimitOver = 1;
      v16->isRebootBlock = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12272/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v12);
      v18 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
      NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v17, 0LL, v18, v19);
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

  if ( (byte_48E1FE5 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E1FE5 = 1;
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
    sub_1B00F28(0LL, v3);
  return System_String__Equals_60334064(gameServerAddress, static_fields->userCreateServer, 0LL);
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

  if ( (byte_48E1FE6 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E1FE6 = 1;
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
            sub_1B00F30(gameServerAddress, v4);
          v11 = v8->m_Items[0];
          if ( v11 )
            return System_String__Equals_60334064(v11, gameServerAddress->m_Items[0], 0LL);
LABEL_22:
          sub_1B00F28(gameServerAddress, v4);
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
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  ServantStatusBattleListViewItem_o *static_fields; // x0
  int64_t sortValue2B; // t1
  struct NetworkManager_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_48E2003 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&SignedData_TypeInfo, v4);
    byte_48E2003 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = (ServantStatusBattleListViewItem_o *)v5->static_fields;
  sortValue2B = static_fields->fields.sortValue2B;
  static_fields = (ServantStatusBattleListViewItem_o *)((char *)static_fields + 80);
  static_fields->klass = 0LL;
  sub_1B00C70(static_fields, 0, v2, v3);
  v8 = NetworkManager_TypeInfo->static_fields;
  v8->userCreateServer = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->userCreateServer, 0, v9, v10);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.loginResponseResult, 0, v2, v3);
}


bool __fastcall NetworkManager__CommunicationIsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48E1FEC & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v1);
    byte_48E1FEC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  return Instance[6].monitor != 0LL;
}


bool __fastcall NetworkManager__CommunicationStart(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *communicationWaitList; // x0
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *v10; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_48E205F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_RequestBase__Dequeue__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v3);
    byte_48E205F = 1;
  }
  communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
  if ( !communicationWaitList )
    sub_1B00F28(0LL, method);
  if ( communicationWaitList->fields._size < 1 || this->fields.communicationWork )
    return 0;
  v6 = System_Collections_Generic_Queue_object___Dequeue(
         communicationWaitList,
         (const MethodInfo_3533438 *)Method_System_Collections_Generic_Queue_RequestBase__Dequeue__);
  this->fields.communicationWork = (struct RequestBase_o *)v6;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.communicationWork, (int32_t)v6, v7, v8);
  v10 = NetworkManager__RequestCR(this, this->fields.communicationWork, 0.0, v9);
  started = UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  this->fields.communicationCoroutine = started;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v12, v13);
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

  if ( (byte_48E2030 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E2030 = 1;
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

  if ( (byte_48E202F & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E202F = 1;
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

  if ( (byte_48E2031 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E2031 = 1;
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

  if ( (byte_48E2025 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v2);
    byte_48E2025 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->isRebootBlock = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v5);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v6);
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
    sub_1B00C70(p_errorCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall NetworkManager__EndGetStoreUrl(NetworkManager_o *this, System_String_o *url, const MethodInfo *method)
{
  if ( (byte_48E2027 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, url);
    byte_48E2027 = 1;
  }
  if ( url )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__OpenURL(url, 0LL);
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_67871612(0LL);
}


void __fastcall NetworkManager__EndLockSync(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_48E2068 & 1) == 0 )
  {
    sub_1B00CCC(&UserServantLockManager_TypeInfo, result);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v5);
    byte_48E2068 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
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
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_loginCallbackFunc; // x19
  struct NetworkManager_LoginCallbackFunc_o *v6; // x21
  struct NetworkManager_LoginCallbackFunc_o *loginCallbackFunc; // t1
  NetworkManager_c *v8; // x0
  void *monitor; // x20

  if ( (byte_48E206B & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E206B = 1;
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
    sub_1B00C70(p_loginCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      monitor,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall NetworkManager__EndOptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_48E206A & 1) == 0 )
  {
    sub_1B00CCC(&OptionManager_TypeInfo, method);
    byte_48E206A = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__DeleteOldLocal(0LL);
  NetworkManager__EndLogin(this, v3);
}


void __fastcall NetworkManager__EndTopLogin(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  NetworkManager_o *v12; // x0
  const MethodInfo *v13; // x2
  System_Int64_array *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  System_Int64_array *v19; // x20
  NetworkManager_ResultCallbackFunc_o *v20; // x21

  if ( (byte_48E2067 & 1) == 0 )
  {
    sub_1B00CCC(&Method_NetworkManager_EndLockSync__, result);
    sub_1B00CCC(&Method_NetworkManager_getRequest_CardLockSyncRequest___, v6);
    sub_1B00CCC(&NetworkManager_TypeInfo, v7);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v9);
    sub_1B00CCC(&UserServantLockManager_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v11);
    byte_48E2067 = 1;
  }
  this->fields.loginResponseResult = result;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.loginResponseResult,
    (int32_t)result,
    (int32_t)method,
    v3);
  NetworkManager__SetupObfuscatedAccountId(v12, this->fields.loginResponseResult, v13);
  Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  ManagementManager__BuildInfoDisp((ManagementManager_o *)Instance, 1, v16);
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  if ( UserServantLockManager__ReadData(0LL) )
  {
    if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    Instance = UserServantLockManager__GetLockList(0LL);
    if ( !Instance )
      goto LABEL_17;
    v19 = Instance;
    if ( *(_QWORD *)&Instance->max_length )
    {
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v20, (Il2CppObject *)this, Method_NetworkManager_EndLockSync__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (System_Int64_array *)NetworkManager__getRequest_object_(
                                         v20,
                                         (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_CardLockSyncRequest___);
      if ( Instance )
      {
        CardLockSyncRequest__beginRequest((CardLockSyncRequest_o *)Instance, v19, 0LL, 0, 0LL);
        return;
      }
LABEL_17:
      sub_1B00F28(Instance, v15);
    }
    NetworkManager__EndLockSync(this, (System_String_o *)StringLiteral_21923/*"ok"*/, v18);
  }
  else
  {
    NetworkManager__OptionSync(this, v17);
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

  if ( (byte_48E201C & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, errorTitle);
    sub_1B00CCC(&ErrorDialog_ClickDelegate_TypeInfo, v11);
    sub_1B00CCC(&Method_NetworkManager_EndErrorDialog__, v12);
    sub_1B00CCC(&Method_NetworkManager_EndErrorWebView__, v13);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B00CCC(&WebViewManager_TypeInfo, v15);
    byte_48E201C = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.errorCallbackFunc,
    (int32_t)callback,
    (int32_t)errorDetail,
    (int32_t)errorUrl);
  if ( errorUrl )
  {
    v16 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(errorTitle, errorUrl, v16, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v18, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_1B00F28(v19, v20);
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

  if ( (byte_48E205D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v3);
    byte_48E205D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v5);
  if ( !data )
    sub_1B00F28(Instance, v5);
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)Instance[5].monitor;
  if ( !monitor )
    sub_1B00F28(0LL, v5);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           monitor,
           (Il2CppObject *)data->fields.nid,
           (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__);
  if ( !Item )
    sub_1B00F28(0LL, v8);
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

  if ( (byte_48E2047 & 1) == 0 )
  {
    sub_1B00CCC(&CatAndMouseGame_TypeInfo, v1);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_1B00CCC(&StringLiteral_1/*""*/, v3);
    byte_48E2047 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v5);
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
  int32_t v23; // w3
  __int64 v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  NetworkManager_c *v43; // x0
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v44; // x20
  System_Text_UTF8Encoding_o *v45; // x21
  NetworkManager_c *v46; // x0
  System_Byte_array *v47; // x19
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v49; // [xsp+0h] [xbp-C0h] BYREF
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v50; // [xsp+30h] [xbp-90h] BYREF

  v2 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)headers;
  if ( (byte_48E2002 & 1) == 0 )
  {
    sub_1B00CCC(&System_Convert_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v7);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    sub_1B00CCC(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__, v10);
    sub_1B00CCC(&string___TypeInfo, v11);
    sub_1B00CCC(&System_Text_UTF8Encoding_TypeInfo, v12);
    sub_1B00CCC(&StringLiteral_1848/*"="*/, v13);
    sub_1B00CCC(&StringLiteral_1540/*":"*/, v14);
    sub_1B00CCC(&StringLiteral_532/*"&"*/, v15);
    headers = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_1B00CCC(&StringLiteral_1/*""*/, v16);
    byte_48E2002 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !v2 )
    goto LABEL_33;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_SortedDictionary_object__object___GetEnumerator(
    &v49,
    v2,
    (const MethodInfo_35FCA84 *)Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__);
  v50 = v49;
  while ( 1 )
  {
    v18 = v17;
    if ( !System_Collections_Generic_SortedDictionary_Enumerator_object__object___MoveNext(
            &v50,
            (const MethodInfo_318E52C *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__) )
      break;
    Current = System_Collections_Generic_SortedDictionary_Enumerator_object__object___get_Current(
                &v50,
                (const MethodInfo_318E60C *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__);
    if ( System_String__op_Inequality(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v20 = sub_1B00D74(string___TypeInfo, 5LL);
      v24 = v20;
      if ( !v20 )
        sub_1B00F28(0LL, v21);
      if ( !*(_DWORD *)(v20 + 24) )
        sub_1B00F30(v20, v21);
      *(_QWORD *)(v20 + 32) = v17;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v17, v22, v23);
      if ( *(_DWORD *)(v24 + 24) <= 1u )
        sub_1B00F30(v25, v26);
      v29 = StringLiteral_532/*"&"*/;
      *(_QWORD *)(v24 + 40) = StringLiteral_532/*"&"*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 40), v29, v27, v28);
      if ( *(_DWORD *)(v24 + 24) <= 2u )
        sub_1B00F30(v30, v31);
      *(_QWORD *)(v24 + 48) = Current.fields.key;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 48), (int32_t)Current.fields.key, v32, v33);
      if ( *(_DWORD *)(v24 + 24) <= 3u )
        sub_1B00F30(v34, v35);
      v38 = StringLiteral_1848/*"="*/;
      *(_QWORD *)(v24 + 56) = StringLiteral_1848/*"="*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 56), v38, v36, v37);
      if ( *(_DWORD *)(v24 + 24) <= 4u )
        sub_1B00F30(v39, v40);
      *(_QWORD *)(v24 + 64) = Current.fields.value;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 64), (int32_t)Current.fields.value, v41, v42);
      v17 = System_String__Concat_60339276((System_String_array *)v24, 0LL);
    }
    else
    {
      v17 = System_String__Concat_60339012(
              v17,
              (System_String_o *)Current.fields.key,
              (System_String_o *)StringLiteral_1848/*"="*/,
              (System_String_o *)Current.fields.value,
              0LL);
    }
  }
  System_Collections_Generic_SortedDictionary_Enumerator_object__object___Dispose(
    &v50,
    (const MethodInfo_318E59C *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__);
  v43 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v43 = NetworkManager_TypeInfo;
  }
  if ( !v43->static_fields->secretKey )
    return 0LL;
  v44 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1B00F18(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v44, 0LL);
  v45 = (System_Text_UTF8Encoding_o *)sub_1B00F18(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v45, 0LL);
  v46 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v46 = NetworkManager_TypeInfo;
  }
  headers = (System_Collections_Generic_SortedDictionary_string__string__o *)System_String__Concat_60337008(
                                                                               v18,
                                                                               (System_String_o *)StringLiteral_1540/*":"*/,
                                                                               v46->static_fields->secretKey,
                                                                               0LL);
  if ( !v45
    || (headers = (System_Collections_Generic_SortedDictionary_string__string__o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_Collections_Generic_SortedDictionary_string__string__o *, Il2CppMethodPointer))v45->klass->vtable._19_GetBytes.method)(
                                                                                     v45,
                                                                                     headers,
                                                                                     v45->klass->vtable._20_GetBytes.methodPtr),
        !v44) )
  {
LABEL_33:
    sub_1B00F28(headers, method);
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

  if ( (byte_48E2049 & 1) == 0 )
  {
    sub_1B00CCC(&CatAndMouseGame_TypeInfo, v1);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_1B00CCC(&StringLiteral_1/*""*/, v3);
    byte_48E2049 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v5);
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

  if ( (byte_48E2032 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E2032 = 1;
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

  if ( (byte_48E203D & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E203D = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->dataServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetDataServerSetting_37269232(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_48E203E & 1) == 0 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, method);
    byte_48E203E = 1;
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

  if ( (byte_48E1FFC & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    byte_48E1FFC = 1;
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
  return LocalizationManager__GetNumberFormat_37180012(friendCode, method);
}


System_String_o *__fastcall NetworkManager__GetFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_48E1FFB & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E1FFB = 1;
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

  if ( (byte_48E203B & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E203B = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->gameServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetGameServerSetting_37269056(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_48E203C & 1) == 0 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, method);
    byte_48E203C = 1;
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

  if ( (byte_48E1FFE & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E1FFE = 1;
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

  if ( (byte_48E2048 & 1) == 0 )
  {
    sub_1B00CCC(&CatAndMouseGame_TypeInfo, v1);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_1B00CCC(&StringLiteral_1/*""*/, v3);
    byte_48E2048 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v5);
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

  if ( (byte_48E2038 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E2038 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->serverSettingSecurity;
}


bool __fastcall NetworkManager__GetSecurityServerSetting_37268880(System_String_o *type, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_48E203A & 1) == 0 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, method);
    byte_48E203A = 1;
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
  if ( (byte_48E2055 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_4964/*"DEV"*/, method);
    sub_1B00CCC(&StringLiteral_12030/*"STAGING"*/, v3);
    sub_1B00CCC(&StringLiteral_12078/*"STG"*/, v4);
    sub_1B00CCC(&StringLiteral_15007/*"VERUP"*/, v5);
    sub_1B00CCC(&StringLiteral_4963/*"DESIGN"*/, v6);
    sub_1B00CCC(&StringLiteral_7313/*"IPADDRESS"*/, v7);
    sub_1B00CCC(&StringLiteral_10677/*"QA"*/, v8);
    sub_1B00CCC(&StringLiteral_10259/*"PLAN"*/, v9);
    sub_1B00CCC(&StringLiteral_8146/*"LIMIT"*/, v10);
    sub_1B00CCC(&StringLiteral_10260/*"PLAY"*/, v11);
    serverName = (System_String_o *)sub_1B00CCC(&StringLiteral_1/*""*/, v12);
    byte_48E2055 = 1;
  }
  if ( !v2 )
    sub_1B00F28(serverName, method);
  v13 = &StringLiteral_10677/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10677/*"QA"*/, 0LL) )
    return System_String__Replace_60345368(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_10259/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10259/*"PLAN"*/, 0LL) )
    return System_String__Replace_60345368(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_4964/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4964/*"DEV"*/, 0LL) )
    return System_String__Replace_60345368(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_8146/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8146/*"LIMIT"*/, 0LL) )
    return System_String__Replace_60345368(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_10260/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10260/*"PLAY"*/, 0LL) )
    return System_String__Replace_60345368(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_4963/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4963/*"DESIGN"*/, 0LL) )
    return System_String__Replace_60345368(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_15007/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15007/*"VERUP"*/, 0LL) )
    return System_String__Replace_60345368(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_12078/*"STG"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12078/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12030/*"STAGING"*/, 0LL) )
  {
    return System_String__Replace_60345368(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v13 = &StringLiteral_7313/*"IPADDRESS"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7313/*"IPADDRESS"*/, 0LL) )
    return System_String__Replace_60345368(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall NetworkManager__GetServerSettingType(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_48E2037 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E2037 = 1;
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

  if ( (byte_48E2000 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E2000 = 1;
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
  if ( (byte_48E2054 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_4964/*"DEV"*/, method);
    sub_1B00CCC(&StringLiteral_12030/*"STAGING"*/, v3);
    sub_1B00CCC(&StringLiteral_12078/*"STG"*/, v4);
    sub_1B00CCC(&StringLiteral_15007/*"VERUP"*/, v5);
    sub_1B00CCC(&StringLiteral_4963/*"DESIGN"*/, v6);
    sub_1B00CCC(&StringLiteral_7313/*"IPADDRESS"*/, v7);
    sub_1B00CCC(&StringLiteral_10677/*"QA"*/, v8);
    sub_1B00CCC(&StringLiteral_10259/*"PLAN"*/, v9);
    sub_1B00CCC(&StringLiteral_8146/*"LIMIT"*/, v10);
    serverName = (System_String_o *)sub_1B00CCC(&StringLiteral_10260/*"PLAY"*/, v11);
    byte_48E2054 = 1;
  }
  if ( !v2 )
    sub_1B00F28(serverName, method);
  v12 = &StringLiteral_10677/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10677/*"QA"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10259/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10259/*"PLAN"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4964/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4964/*"DEV"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_8146/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8146/*"LIMIT"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10260/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10260/*"PLAY"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4963/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4963/*"DESIGN"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_15007/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15007/*"VERUP"*/, 0LL) )
    return (System_String_o *)*v12;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12078/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12030/*"STAGING"*/, 0LL) )
  {
    v12 = &StringLiteral_12078/*"STG"*/;
    return (System_String_o *)*v12;
  }
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7313/*"IPADDRESS"*/, 0LL) )
    return (System_String_o *)StringLiteral_7313/*"IPADDRESS"*/;
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

  if ( (byte_48E1FF4 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, userName);
    byte_48E1FF4 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  v11 = v10->static_fields->userName;
  *userName = v11;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)userName, (int32_t)v11, (int32_t)genderType, (int32_t)month);
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
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


int32_t __fastcall NetworkManager__GetTerminalDispState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_48E1FED & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v2);
    byte_48E1FED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 9, 0LL) )
    return 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48DF715 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v5);
    byte_48DF715 = 1;
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

  if ( (byte_48E2053 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_24314/*"webview/warBoard?stageId="*/, v4);
    byte_48E2053 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = (Il2CppObject *)NetworkManager__getBaseUrl(0, method);
  v11 = stageId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v6, v7, v8);
  return System_String__Concat_60336760(BaseUrl, (Il2CppObject *)StringLiteral_24314/*"webview/warBoard?stageId="*/, v9, 0LL);
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_48E203F & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E203F = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->webServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting_37269408(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_48E2040 & 1) == 0 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, method);
    byte_48E2040 = 1;
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

  if ( (byte_48E201B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v3);
    sub_1B00CCC(&Method_NetworkManager_OnClickErrorReboot__, v4);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_12272/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v6);
    sub_1B00CCC(&StringLiteral_1/*""*/, v7);
    byte_48E201B = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12272/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, method);
    v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
    NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v10, 0LL, v11, v12);
  }
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__Initialize(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48E1FEF & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager__Initialize_d__82_TypeInfo, method);
    byte_48E1FEF = 1;
  }
  v3 = sub_1B00F18(NetworkManager__Initialize_d__82_TypeInfo);
  NetworkManager__Initialize_d__82___ctor((NetworkManager__Initialize_d__82_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B00F28(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_48E1FF0 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E1FF0 = 1;
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->userAgent, (int32_t)v7, v4, v5);
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

  if ( (byte_48E2007 & 1) == 0 )
  {
    sub_1B00CCC(&System_IO_BinaryReader_TypeInfo, fname);
    sub_1B00CCC(&EncryptedPlayerPrefs_TypeInfo, v4);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v5);
    byte_48E2007 = 1;
  }
  v6 = 0LL;
  if ( System_IO_File__Exists(fname, 0LL) )
  {
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(fname, 0LL);
    v8 = (System_IO_BinaryReader_o *)sub_1B00F18(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v8, v7, 0LL);
    if ( !v8 )
      sub_1B00F28(v9, v10);
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
      v15 = sub_1B52CAC(v8, System_IDisposable_TypeInfo, 0LL);
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
  if ( (byte_48E2062 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B00CCC(&StringLiteral_4595/*"CommunicationStart"*/, requestWork);
    byte_48E2062 = 1;
  }
  if ( !requestWork )
    sub_1B00F28(this, requestWork);
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
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.communicationWorkResponseList, 0, v9, v10);
      v8->fields.communicationWork = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.communicationWork, 0, v12, v13);
      v8->fields.communicationCoroutine = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.communicationCoroutine, 0, v14, v15);
      if ( v8->fields.cacheRefreshWork )
      {
        v8->fields.cacheRefreshWork = 0LL;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.cacheRefreshWork, 0, v16, v17);
        v8->fields.cacheRefreshWorkResponseList = 0LL;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.cacheRefreshWorkResponseList, 0, v18, v19);
      }
    }
    ((void (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))requestWork->klass->vtable._12_backgroundErrorRetry.method)(
      requestWork,
      requestWork->klass->vtable._13_isAutoRetryRequest.methodPtr);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v8,
      (System_String_o *)StringLiteral_4595/*"CommunicationStart"*/,
      0.0,
      0LL);
  }
  return v11 & 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickErrorDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_48E2028 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, isDecide);
    byte_48E2028 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_67871612(0LL);
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

  if ( (byte_48E2020 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, method);
    sub_1B00CCC(&ManagementManager_TypeInfo, v2);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v4);
    byte_48E2020 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_48E18EA )
  {
    sub_1B00CCC(&ManagementManager_TypeInfo, method);
    byte_48E18EA = 1;
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
    UnityEngine_Application__Quit_67871612(0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B00F28(0LL, v8);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickErrorRetryDialog(
        NetworkManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *v11; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  ManagementManager_c *v15; // x0
  NetworkManager_c *v16; // x0
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3

  if ( (byte_48E201D & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1B00CCC(&ManagementManager_TypeInfo, v6);
    sub_1B00CCC(&NetworkManager_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v8);
    byte_48E201D = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList, 0, (int32_t)method, v3);
  if ( isDecide )
  {
    v11 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v10);
    started = UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
    this->fields.communicationCoroutine = started;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v13, v14);
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_48E18EA )
    {
      sub_1B00CCC(&ManagementManager_TypeInfo, v9);
      byte_48E18EA = 1;
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
      UnityEngine_Application__Quit_67871612(0LL);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1B00F28(0LL, v18);
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

  if ( (byte_48E201E & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_48E201E = 1;
  }
  if ( isDecide )
  {
    this->fields.communicationWorkResponseList = 0LL;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList,
      0,
      (int32_t)method,
      v3);
    v7 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v6);
    started = UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
    this->fields.communicationCoroutine = started;
    v11 = (int)started;
    p_communicationCoroutine = (ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B00F28(0LL, v14);
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
  sub_1B00C70(p_communicationCoroutine, v11, v9, v10);
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

  if ( (byte_48E2021 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, method);
    sub_1B00CCC(&ManagementManager_TypeInfo, v2);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v4);
    byte_48E2021 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_48E18EA )
  {
    sub_1B00CCC(&ManagementManager_TypeInfo, method);
    byte_48E18EA = 1;
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
    UnityEngine_Application__Quit_67871612(0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B00F28(0LL, v8);
    ManagementManager__reboot((ManagementManager_o *)Instance, 1, 1, v9);
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

  if ( (byte_48E2022 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_13394/*"TerminalStart"*/, method);
    byte_48E2022 = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList, 0, v2, v3);
  communicationCoroutine = this->fields.communicationCoroutine;
  if ( communicationCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_68063548((UnityEngine_MonoBehaviour_o *)this, communicationCoroutine, 0LL);
  this->fields.communicationWork = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.communicationWork, 0, v5, v6);
  this->fields.communicationCoroutine = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, 0, v8, v9);
  if ( this->fields.cacheRefreshWork )
  {
    this->fields.cacheRefreshWork = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWork, 0, v10, v11);
    this->fields.cacheRefreshWorkResponseList = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWorkResponseList, 0, v12, v13);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13394/*"TerminalStart"*/,
    0.0,
    0LL);
}


void __fastcall NetworkManager__OnClickReloadCache(NetworkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  struct RequestBase_o *communicationWork; // x1
  RequestBase_o **p_communicationWork; // x20
  struct ResponseData_array *communicationWorkResponseList; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Request_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_IEnumerator_o *v18; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_48E201F & 1) == 0 )
  {
    sub_1B00CCC(&Method_NetworkManager_getRequest_TopRefreshRequest___, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    byte_48E201F = 1;
  }
  p_communicationWork = &this->fields.communicationWork;
  communicationWork = this->fields.communicationWork;
  this->fields.cacheRefreshWork = communicationWork;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWork, (int32_t)communicationWork, v2, v3);
  communicationWorkResponseList = this->fields.communicationWorkResponseList;
  this->fields.cacheRefreshWorkResponseList = communicationWorkResponseList;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWorkResponseList,
    (int32_t)communicationWorkResponseList,
    v9,
    v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_TopRefreshRequest___);
  *p_communicationWork = (RequestBase_o *)Request_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.communicationWork, (int32_t)Request_object, v12, v13);
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList, 0, v14, v15);
  if ( !*p_communicationWork )
    sub_1B00F28(0LL, v16);
  RequestBase__addBaseField(*p_communicationWork, 0LL);
  v18 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v17);
  started = UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
  this->fields.communicationCoroutine = started;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v20, v21);
}


void __fastcall NetworkManager__OnClickStore(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0

  if ( (byte_48E2026 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, method);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v2);
    byte_48E2026 = 1;
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
  UnityEngine_Application__Quit_67871612(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickUserDelete(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_48E2024 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, isDecide);
    sub_1B00CCC(&Method_NetworkManager_EndCloseUserDelete__, v5);
    sub_1B00CCC(&OptionManager_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_48E2024 = 1;
  }
  if ( isDecide )
  {
    UserSaveData__DeleteSaveData(1, 0LL);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__Initialize(0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_NetworkManager_EndCloseUserDelete__, 0LL);
  if ( !Instance )
    sub_1B00F28(v10, v11);
  CommonUI__CloseConfirmDialog_29937364((CommonUI_o *)Instance, v9, 0LL);
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
  if ( (byte_48E2061 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B00CCC(&StringLiteral_4595/*"CommunicationStart"*/, requestWork);
    byte_48E2061 = 1;
  }
  if ( v6->fields.communicationWork != v5 )
    goto LABEL_4;
  v6->fields.communicationWorkResponseList = 0LL;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&v6->fields.communicationWorkResponseList,
    0,
    (int32_t)responseList,
    (int32_t)method);
  v6->fields.communicationWork = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.communicationWork, 0, v7, v8);
  v6->fields.communicationCoroutine = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.communicationCoroutine, 0, v9, v10);
  this = (NetworkManager_o *)&v6->fields.cacheRefreshWork;
  cacheRefreshWork = v6->fields.cacheRefreshWork;
  if ( cacheRefreshWork )
  {
    cacheRefreshWorkResponseList = v6->fields.cacheRefreshWorkResponseList;
    v6->fields.cacheRefreshWork = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)this, 0, v11, v12);
    v6->fields.cacheRefreshWorkResponseList = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.cacheRefreshWorkResponseList, 0, v14, v15);
    v5 = cacheRefreshWork;
  }
  else
  {
LABEL_4:
    if ( !v5 )
      sub_1B00F28(this, requestWork);
  }
  ((void (__fastcall *)(RequestBase_o *, ResponseData_array *, Il2CppMethodPointer))v5->klass->vtable._10_requestCompleted.method)(
    v5,
    cacheRefreshWorkResponseList,
    v5->klass->vtable._11_backgroundErrorRequest.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v6, (System_String_o *)StringLiteral_4595/*"CommunicationStart"*/, 0.0, 0LL);
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
  if ( (byte_48E2063 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B00CCC(&StringLiteral_4595/*"CommunicationStart"*/, requestWork);
    byte_48E2063 = 1;
  }
  if ( !requestWork )
    sub_1B00F28(this, requestWork);
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
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.communicationWorkResponseList, 0, v7, v8);
      v6->fields.communicationWork = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.communicationWork, 0, v10, v11);
      v6->fields.communicationCoroutine = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.communicationCoroutine, 0, v12, v13);
      if ( v6->fields.cacheRefreshWork )
      {
        v6->fields.cacheRefreshWork = 0LL;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.cacheRefreshWork, 0, v14, v15);
        v6->fields.cacheRefreshWorkResponseList = 0LL;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.cacheRefreshWorkResponseList, 0, v16, v17);
      }
    }
    ((void (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))requestWork->klass->vtable._15_errorRetry.method)(
      requestWork,
      requestWork->klass->vtable._16_getParameterFileName.methodPtr);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v6,
      (System_String_o *)StringLiteral_4595/*"CommunicationStart"*/,
      0.0,
      0LL);
  }
  return v9 & 1;
}


void __fastcall NetworkManager__OptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_48E2069 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_NetworkManager_EndOptionSync__, v3);
    sub_1B00CCC(&OptionManager_TypeInfo, v4);
    byte_48E2069 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__CheckOldLocal(0LL) )
  {
    v6 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_NetworkManager_EndOptionSync__, 0LL);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SaveData(v6, 0LL);
  }
  else
  {
    NetworkManager__EndLogin(this, v5);
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

  if ( (byte_48E2001 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v3);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v4);
    byte_48E2001 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
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
          sub_1B00F30(v6, v7);
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
            (const MethodInfo_308DA34 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
        }
        v9 = *((_DWORD *)v10 + 6);
        if ( (int)++v11 >= v9 )
          return (System_Collections_Generic_Dictionary_string__string__o *)v5;
      }
LABEL_17:
      sub_1B00F28(v6, v7);
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
  int32_t v40; // w3
  __int64 v41; // x23
  NetworkManager_c *v42; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  struct NetworkManager_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  struct NetworkManager_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x1
  struct NetworkManager_StaticFields *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_IO_BinaryReader_c *klass; // x8
  __int64 v63; // x9
  int32_t *p_offset; // x10
  __int64 v65; // x0

  if ( (byte_48E2004 & 1) == 0 )
  {
    sub_1B00CCC(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B00CCC(&CatAndMouseGame_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B00CCC(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v6);
    sub_1B00CCC(&JsonManager_TypeInfo, v7);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v8);
    sub_1B00CCC(&NetworkManager_TypeInfo, v9);
    sub_1B00CCC(&SignedData_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_24025/*"userCreateServer"*/, v11);
    sub_1B00CCC(&StringLiteral_16737/*"authKey"*/, v12);
    sub_1B00CCC(&StringLiteral_22761/*"secretKey"*/, v13);
    sub_1B00CCC(&StringLiteral_24066/*"userId"*/, v14);
    byte_48E2004 = 1;
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
      v24 = (System_IO_BinaryReader_o *)sub_1B00F18(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v24, v23, 0LL);
      if ( !v24 )
        sub_1B00F28(v25, v26);
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
            sub_1B00F28(0LL, v35);
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                   (Il2CppObject *)StringLiteral_24025/*"userCreateServer"*/,
                   (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            sub_1B00F28(0LL, v38);
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
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->userCreateServer, v41, v39, v40);
          v44 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v36,
                  (Il2CppObject *)StringLiteral_24066/*"userId"*/,
                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v44 )
            sub_1B00F28(0LL, v45);
          v46 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v44->klass->vtable[3].method)(
                  v44,
                  v44->klass->vtable[4].methodPtr);
          v47 = NetworkManager_TypeInfo->static_fields;
          v47->userId = (struct System_String_o *)v46;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v47->userId, v46, v48, v49);
          v50 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v36,
                  (Il2CppObject *)StringLiteral_16737/*"authKey"*/,
                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v50 )
            sub_1B00F28(0LL, v51);
          v52 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v50->klass->vtable[3].method)(
                  v50,
                  v50->klass->vtable[4].methodPtr);
          v53 = NetworkManager_TypeInfo->static_fields;
          v53->authKey = (struct System_String_o *)v52;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v53->authKey, v52, v54, v55);
          v56 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v36,
                  (Il2CppObject *)StringLiteral_22761/*"secretKey"*/,
                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v56 )
            sub_1B00F28(0LL, v57);
          v58 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v56->klass->vtable[3].method)(
                  v56,
                  v56->klass->vtable[4].methodPtr);
          v59 = NetworkManager_TypeInfo->static_fields;
          v59->secretKey = (struct System_String_o *)v58;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v59->secretKey, v58, v60, v61);
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
        v65 = sub_1B52CAC(v24, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v13; // w3
  __int64 v14; // x20
  NetworkManager_c *v15; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v17; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_48E1FF8 & 1) == 0 )
  {
    sub_1B00CCC(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v2);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    byte_48E1FF8 = 1;
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
  v9 = (System_IO_BinaryReader_o *)sub_1B00F18(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0LL);
  if ( !v9 )
    sub_1B00F28(v10, v11);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->friendCode, v14, v12, v13);
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
    v21 = sub_1B52CAC(v9, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v13; // w3
  __int64 v14; // x20
  NetworkManager_c *v15; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v17; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_48E1FF2 & 1) == 0 )
  {
    sub_1B00CCC(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v2);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    byte_48E1FF2 = 1;
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
  v9 = (System_IO_BinaryReader_o *)sub_1B00F18(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0LL);
  if ( !v9 )
    sub_1B00F28(v10, v11);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->userName, v14, v12, v13);
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
    v21 = sub_1B52CAC(v9, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v21)(v9, *(_QWORD *)(v21 + 8));
  return v17;
}


bool __fastcall NetworkManager__ReadServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  __int64 v4; // x1

  if ( (byte_48E204A & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_4955/*"DEFAULT"*/, method);
    sub_1B00CCC(&StringLiteral_1/*""*/, v4);
    byte_48E204A = 1;
  }
  NetworkManager__SetServerSetting(
    this,
    (System_String_o *)StringLiteral_4955/*"DEFAULT"*/,
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
  int32_t v13; // w3
  __int64 v14; // x20
  NetworkManager_c *v15; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v17; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_48E1FF3 & 1) == 0 )
  {
    sub_1B00CCC(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v2);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    byte_48E1FF3 = 1;
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
  v9 = (System_IO_BinaryReader_o *)sub_1B00F18(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0LL);
  if ( !v9 )
    sub_1B00F28(v10, v11);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->userName, v14, v12, v13);
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
    v21 = sub_1B52CAC(v9, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_48E205A & 1) == 0 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, isRefreshTime);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B00CCC(&StringLiteral_18236/*"dateVer"*/, v7);
    sub_1B00CCC(&StringLiteral_18221/*"dataVer"*/, v8);
    sub_1B00CCC(&StringLiteral_16577/*"appVer"*/, v9);
    sub_1B00CCC(&StringLiteral_19932/*"idempotencyKey"*/, v10);
    sub_1B00CCC(&StringLiteral_20759/*"lastAccessTime"*/, v11);
    byte_48E205A = 1;
  }
  Instance = ManagerConfig_TypeInfo;
  v19 = (System_Guid_o)0LL;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !request )
    goto LABEL_21;
  RequestBase__replaceField_39834080(
    request,
    (System_String_o *)StringLiteral_16577/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( !byte_48E00AC )
  {
    sub_1B00CCC(&DataManager_TypeInfo, isRefreshTime);
    byte_48E00AC = 1;
  }
  v13 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v13 = DataManager_TypeInfo;
  }
  RequestBase__replaceField(request, (System_String_o *)StringLiteral_18221/*"dataVer"*/, v13->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1B00F28(Instance, isRefreshTime);
  if ( !byte_48E00AD )
  {
    sub_1B00CCC(&DataManager_TypeInfo, isRefreshTime);
    byte_48E00AD = 1;
  }
  v14 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = DataManager_TypeInfo;
  }
  RequestBase__replaceField_39833624(
    request,
    (System_String_o *)StringLiteral_18236/*"dateVer"*/,
    v14->static_fields->dateVersion,
    0LL);
  if ( isRefreshTime )
  {
    v15 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime((const MethodInfo *)v15);
    RequestBase__replaceField_39833624(request, (System_String_o *)StringLiteral_20759/*"lastAccessTime"*/, Time, 0LL);
    v19 = System_Guid__NewGuid(0LL);
    *(_QWORD *)&v20.fields._a = &v19;
    *(_QWORD *)&v20.fields._d = 0LL;
    v18 = System_Guid__ToString(v20, v17);
    RequestBase__replaceField_39834080(request, (System_String_o *)StringLiteral_19932/*"idempotencyKey"*/, v18, 0LL);
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
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_48E2064 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager__RequestApplicationUpdateCR_d__218_TypeInfo, storeName);
    byte_48E2064 = 1;
  }
  v8 = sub_1B00F18(NetworkManager__RequestApplicationUpdateCR_d__218_TypeInfo);
  NetworkManager__RequestApplicationUpdateCR_d__218___ctor(
    (NetworkManager__RequestApplicationUpdateCR_d__218_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_1B00F28(v9, v10);
  *(_QWORD *)(v8 + 32) = storeName;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)storeName, v11, v12);
  *(_QWORD *)(v8 + 40) = id;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)id, v13, v14);
  *(_QWORD *)(v8 + 48) = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)callback, v15, v16);
  return (System_Collections_IEnumerator_o *)v8;
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__RequestCR(
        NetworkManager_o *this,
        RequestBase_o *work,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_48E2060 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager__RequestCR_d__213_TypeInfo, work);
    byte_48E2060 = 1;
  }
  v7 = sub_1B00F18(NetworkManager__RequestCR_d__213_TypeInfo);
  NetworkManager__RequestCR_d__213___ctor((NetworkManager__RequestCR_d__213_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B00F28(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = work;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)work, v12, v13);
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
  Il2CppObject *Request_object; // x0
  __int64 v12; // x1
  TopLoginRequest_o *v13; // x21
  const MethodInfo *v14; // x1

  if ( (byte_48E2065 & 1) == 0 )
  {
    sub_1B00CCC(&Method_NetworkManager_EndTopLogin__, callback);
    sub_1B00CCC(&Method_NetworkManager_getRequest_TopLoginRequest___, v7);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_48E2065 = 1;
  }
  this->fields.loginCallbackFunc = callback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.loginCallbackFunc,
    (int32_t)callback,
    isEnforce,
    (int32_t)method);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_NetworkManager_EndTopLogin__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_TopLoginRequest___);
  v13 = (TopLoginRequest_o *)Request_object;
  if ( isEnforce )
  {
    if ( !Request_object )
LABEL_12:
      sub_1B00F28(Request_object, v12);
  }
  else
  {
    if ( !Request_object )
      goto LABEL_12;
    if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Request_object->klass->vtable[7].method)(
            Request_object,
            Request_object->klass->vtable[8].methodPtr) & 1) != 0 )
    {
      NetworkManager__EndLogin(this, v14);
      return;
    }
  }
  TopLoginRequest__beginRequest(v13, 0LL);
}


void __fastcall NetworkManager__RequestStart(RequestBase_o *request, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_48E205C & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method);
    byte_48E205C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, v4) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
    {
      NetworkManager__AddWaitStatus((NetworkManager_o *)Instance, request, v5);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( Instance )
      {
        NetworkManager__CommunicationStart((NetworkManager_o *)Instance, v4);
        return;
      }
    }
LABEL_9:
    sub_1B00F28(Instance, v4);
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
  int32_t v13; // w3
  struct NetworkManager_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_48E2005 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, userId);
    sub_1B00CCC(&SignedData_TypeInfo, v8);
    byte_48E2005 = 1;
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
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&static_fields->userId,
      (int32_t)userId,
      (int32_t)authKey,
      (int32_t)secretKey);
    v11 = NetworkManager_TypeInfo->static_fields;
    v11->authKey = authKey;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v11->authKey, (int32_t)authKey, v12, v13);
    v14 = NetworkManager_TypeInfo->static_fields;
    v14->secretKey = secretKey;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->secretKey, (int32_t)secretKey, v15, v16);
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

  if ( (byte_48E2058 & 1) == 0 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B00CCC(&StringLiteral_18236/*"dateVer"*/, v5);
    sub_1B00CCC(&StringLiteral_18221/*"dataVer"*/, v6);
    sub_1B00CCC(&StringLiteral_24158/*"verCode"*/, v7);
    sub_1B00CCC(&StringLiteral_16577/*"appVer"*/, v8);
    sub_1B00CCC(&StringLiteral_19932/*"idempotencyKey"*/, v9);
    sub_1B00CCC(&StringLiteral_16737/*"authKey"*/, v10);
    sub_1B00CCC(&StringLiteral_24066/*"userId"*/, v11);
    sub_1B00CCC(&StringLiteral_20759/*"lastAccessTime"*/, v12);
    byte_48E2058 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  v20 = (System_Guid_o)0LL;
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
      sub_1B00F28(Instance, method);
    RequestBase__addField_39752868(
      request,
      (System_String_o *)StringLiteral_24066/*"userId"*/,
      NetworkManager_TypeInfo->static_fields->userId,
      0LL);
    RequestBase__addField_39752868(
      request,
      (System_String_o *)StringLiteral_16737/*"authKey"*/,
      NetworkManager_TypeInfo->static_fields->authKey,
      0LL);
  }
  Instance = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !request )
    goto LABEL_26;
  RequestBase__addField_39752868(
    request,
    (System_String_o *)StringLiteral_16577/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  if ( !byte_48E00AC )
  {
    sub_1B00CCC(&DataManager_TypeInfo, method);
    byte_48E00AC = 1;
  }
  v14 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = DataManager_TypeInfo;
  }
  RequestBase__addField(request, (System_String_o *)StringLiteral_18221/*"dataVer"*/, v14->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  if ( !byte_48E00AD )
  {
    sub_1B00CCC(&DataManager_TypeInfo, method);
    byte_48E00AD = 1;
  }
  v15 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = DataManager_TypeInfo;
  }
  RequestBase__addField_39759196(request, (System_String_o *)StringLiteral_18236/*"dateVer"*/, v15->static_fields->dateVersion, 0LL);
  v16 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime((const MethodInfo *)v16);
  RequestBase__addField_39759196(request, (System_String_o *)StringLiteral_20759/*"lastAccessTime"*/, Time, 0LL);
  RequestBase__addField_39752868(
    request,
    (System_String_o *)StringLiteral_24158/*"verCode"*/,
    ManagerConfig_TypeInfo->static_fields->verCode,
    0LL);
  v20 = System_Guid__NewGuid(0LL);
  *(_QWORD *)&v21.fields._a = &v20;
  *(_QWORD *)&v21.fields._d = 0LL;
  v19 = System_Guid__ToString(v21, v18);
  RequestBase__addField_39752868(request, (System_String_o *)StringLiteral_19932/*"idempotencyKey"*/, v19, 0LL);
}


void __fastcall NetworkManager__SetDataServerFolderName(System_String_o *folderName, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  NetworkManager_c *v6; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_48E2033 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_1/*""*/, v5);
    byte_48E2033 = 1;
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->dataServerFolder, (int32_t)folderName, v2, v3);
}


void __fastcall NetworkManager__SetDataServerRedirect(System_String_o *address, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_48E2035 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E2035 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->dataServerRedirectAddress = address;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->dataServerRedirectAddress, (int32_t)address, v2, v3);
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

  if ( (byte_48E205B & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_18358/*"deviceInfo"*/, method);
    sub_1B00CCC(&StringLiteral_24630/*"{0} / {1}"*/, v3);
    byte_48E205B = 1;
  }
  deviceModel = (Il2CppObject *)UnityEngine_SystemInfo__get_deviceModel(0LL);
  operatingSystem = (Il2CppObject *)UnityEngine_SystemInfo__get_operatingSystem(0LL);
  v6 = System_String__Format_60340120((System_String_o *)StringLiteral_24630/*"{0} / {1}"*/, deviceModel, operatingSystem, 0LL);
  if ( !request )
    sub_1B00F28(v6, v7);
  RequestBase__addField_39752868(request, (System_String_o *)StringLiteral_18358/*"deviceInfo"*/, v6, 0LL);
}


void __fastcall NetworkManager__SetFriendCode(
        NetworkManager_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  int32_t v3; // w3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_48E1FF9 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, friendCode);
    byte_48E1FF9 = 1;
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
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&static_fields->friendCode,
      (int32_t)friendCode,
      (int32_t)method,
      v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__SetGameServerRedirect(
        System_String_o *address,
        bool isSecurity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  NetworkManager_c *v6; // x0
  ServantStatusBattleListViewItem_o *static_fields; // x0

  if ( (byte_48E2034 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, isSecurity);
    byte_48E2034 = 1;
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
  sub_1B00C70(static_fields, (int32_t)address, (int32_t)method, v3);
}


void __fastcall NetworkManager__SetSecurityServerSetting(bool security, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_48E2039 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E2039 = 1;
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

  if ( (byte_48E204B & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, type);
    byte_48E204B = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  static_fields = (ServantStatusBattleListViewItem_o *)v13->static_fields;
  static_fields[1].klass = (ServantStatusBattleListViewItem_c *)type;
  sub_1B00C70(static_fields + 1, (int32_t)type, isSecuritey, (int32_t)gameAddress);
  v15 = NetworkManager_TypeInfo->static_fields;
  v15->gameServerSettingAddress = gameAddress;
  v15 = (struct NetworkManager_StaticFields *)((char *)v15 + 184);
  LOBYTE(v15[-1].errorDialogResponseData) = isSecuritey;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v15, (int32_t)gameAddress, v16, v17);
  v18 = NetworkManager_TypeInfo->static_fields;
  v18->dataServerSettingAddress = dataAddress;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v18->dataServerSettingAddress, (int32_t)dataAddress, v19, v20);
  v21 = NetworkManager_TypeInfo->static_fields;
  v21->webServerSettingAddress = webAddress;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v21->webServerSettingAddress, (int32_t)webAddress, v22, v23);
  NetworkManager__SetServerSetting_37239144(this, v24);
}


void __fastcall NetworkManager__SetServerSetting_37239144(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  struct NetworkManager_StaticFields *static_fields; // x8
  struct System_String_o *gameServerRedirectAddress; // x19
  System_String_o **p_gameServerRedirectAddress; // x8
  ManagerConfig_c *v7; // x0
  System_String_o *v8; // x1
  ServantStatusBattleListViewItem_o *p_gameServerAddress; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  NetworkManager_c *IsOnline; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w1
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct NetworkManager_StaticFields *v18; // x8
  struct System_String_o *webServerRedirectAddress; // x19
  struct System_String_o **p_webServerRedirectAddress; // x9
  ManagerConfig_c *v21; // x0
  struct System_String_o *v22; // x1

  if ( (byte_48E204C & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    sub_1B00CCC(&StringLiteral_1120/*"/"*/, v3);
    byte_48E204C = 1;
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
  if ( !byte_48E019F )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, method);
    byte_48E019F = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  NetworkManager_TypeInfo->static_fields->serverSecurity = v7->static_fields->ReleaseNetworkSecurity;
  if ( !byte_48E01A0 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, method);
    v7 = ManagerConfig_TypeInfo;
    byte_48E01A0 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = ManagerConfig_TypeInfo;
  }
  p_gameServerRedirectAddress = &v7->static_fields->ReleaseGameServerAddress;
LABEL_21:
  v8 = System_String__Concat_60325748(*p_gameServerRedirectAddress, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL);
  p_gameServerAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->gameServerAddress;
  p_gameServerAddress->klass = (ServantStatusBattleListViewItem_c *)v8;
  sub_1B00C70(p_gameServerAddress, (int32_t)v8, v10, v11);
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
  if ( !byte_48E01A2 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, v15);
    byte_48E01A2 = 1;
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v18->webServerAddress, (int32_t)v22, v16, v17);
}


void __fastcall NetworkManager__SetServerTimeChkMovie(int64_t serverTimeChkMovie, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_48E1FFF & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E1FFF = 1;
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

  if ( (byte_48E2059 & 1) == 0 )
  {
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    sub_1B00CCC(&SignedData_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_19932/*"idempotencyKey"*/, v4);
    sub_1B00CCC(&StringLiteral_19933/*"idempotencyKeySignature"*/, v5);
    byte_48E2059 = 1;
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
    SignedPackData = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45348888(key, 0LL);
    if ( !request
      || (RequestBase__replaceField_39834080(request, (System_String_o *)StringLiteral_19932/*"idempotencyKey"*/, SignedPackData, 0LL),
          !outData) )
    {
LABEL_16:
      sub_1B00F28(SignedPackData, v7);
    }
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45348888(outData->fields.value, 0LL);
    RequestBase__addField_39752868(request, (System_String_o *)StringLiteral_19933/*"idempotencyKeySignature"*/, v9, 0LL);
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

  if ( (byte_48E1FF5 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, userName);
    byte_48E1FF5 = 1;
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
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&static_fields->userName,
      (int32_t)userName,
      genderType,
      (int32_t)method);
    NetworkManager_TypeInfo->static_fields->genderType = genderType;
  }
}


void __fastcall NetworkManager__SetSignup_37252204(
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

  if ( (byte_48E1FF6 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, userName);
    byte_48E1FF6 = 1;
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->userName, (int32_t)userName, genderType, month);
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

  if ( (byte_48E1FF1 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, userAgent);
    byte_48E1FF1 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->userAgent = userAgent;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->userAgent, (int32_t)userAgent, (int32_t)method, v3);
  this->fields._isWaitUserAgent_k__BackingField = 0;
}


void __fastcall NetworkManager__SetWebServerRedirect(System_String_o *address, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_48E2036 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E2036 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webServerRedirectAddress = address;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->webServerRedirectAddress, (int32_t)address, v2, v3);
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

  if ( (byte_48E2066 & 1) == 0 )
  {
    sub_1B00CCC(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, loginResultStr);
    sub_1B00CCC(&JsonManager_TypeInfo, v4);
    sub_1B00CCC(&PurchaseBehaviour_TypeInfo, v5);
    byte_48E2066 = 1;
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
           (const MethodInfo_2DB835C *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    if ( v7 )
    {
      monitor = (System_String_o *)v7[6].monitor;
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
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_48E2006 & 1) == 0 )
  {
    sub_1B00CCC(&AccountingManager_TypeInfo, method);
    sub_1B00CCC(&AndroidUtil_TypeInfo, v2);
    sub_1B00CCC(&DatFileName_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AccountingManager__get_Instance__, v5);
    sub_1B00CCC(&StringLiteral_1120/*"/"*/, v6);
    sub_1B00CCC(&StringLiteral_1/*""*/, v7);
    byte_48E2006 = 1;
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
        System_IO_File__Copy_60515196(v21, v23, 1, 0LL);
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
      System_IO_File__Copy_60515196(v36, v38, 1, 0LL);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
      if ( !Instance )
        sub_1B00F28(0LL, v46);
      if ( AccountingManager__ReadOldPayment((AccountingManager_o *)Instance, 0LL) )
      {
        v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
        if ( !v47 )
          sub_1B00F28(0LL, v48);
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
    v51 = System_String__Concat_60325748(OldUnityPersistentDataPath, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL);
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    FileNameNotConverted = DatFileName__getFileNameNotConverted(16, 0LL);
    v53 = (NetworkManager_o *)System_String__Concat_60325748(v51, FileNameNotConverted, 0LL);
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
    System_IO_File__Copy_60515196(v61, v63, 1, 0LL);
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
        System_IO_File__Copy_60515196(v29, v31, 1, 0LL);
      }
      else
      {
        if ( !System_String__op_Equality(v20, String, 0LL) )
          return 2;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v57 = NetworkManager__getAuthFileName(1, v56);
        v59 = NetworkManager__getAuthFileName(0, v58);
        System_IO_File__Copy_60515196(v57, v59, 1, 0LL);
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

  if ( (byte_48E2023 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_48E2023 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__InitConnect((CommonUI_o *)Instance, 0LL),
        TopHomeRequest__clearExpirationDate(0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B00F28(Instance, v4);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__TimeUpdate(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  NetworkManager__TimeUpdate_d__81_o *v2; // x19

  if ( (byte_48E1FEE & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager__TimeUpdate_d__81_TypeInfo, method);
    byte_48E1FEE = 1;
  }
  v2 = (NetworkManager__TimeUpdate_d__81_o *)sub_1B00F18(NetworkManager__TimeUpdate_d__81_TypeInfo);
  NetworkManager__TimeUpdate_d__81___ctor(v2, 0, 0LL);
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

  if ( (byte_48E201A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, errorTitle);
    sub_1B00CCC(&ErrorDialog_ClickDelegate_TypeInfo, v13);
    sub_1B00CCC(&Method_NetworkManager_EndErrorDialog__, v14);
    sub_1B00CCC(&Method_NetworkManager_EndErrorWebView__, v15);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B00CCC(&WebViewManager_TypeInfo, v17);
    byte_48E201A = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.errorCallbackFunc,
    (int32_t)callback,
    (int32_t)errorDetail,
    (int32_t)errorUrl);
  if ( errorUrl )
  {
    v18 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(errorTitle, errorUrl, v18, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v20, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_1B00F28(v21, v22);
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

  if ( (byte_48E2008 & 1) == 0 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    byte_48E2008 = 1;
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

  if ( (byte_48E2009 & 1) == 0 )
  {
    sub_1B00CCC(&System_IO_BinaryWriter_TypeInfo, fname);
    sub_1B00CCC(&CatAndMouseGame_TypeInfo, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B00CCC(&EncryptedPlayerPrefs_TypeInfo, v8);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v9);
    sub_1B00CCC(&JsonManager_TypeInfo, v10);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v11);
    sub_1B00CCC(&NetworkManager_TypeInfo, v12);
    sub_1B00CCC(&StringLiteral_24025/*"userCreateServer"*/, v13);
    sub_1B00CCC(&StringLiteral_12298/*"SaveDataVer"*/, v14);
    sub_1B00CCC(&StringLiteral_16737/*"authKey"*/, v15);
    sub_1B00CCC(&StringLiteral_22761/*"secretKey"*/, v16);
    sub_1B00CCC(&StringLiteral_24066/*"userId"*/, v17);
    sub_1B00CCC(&StringLiteral_1/*""*/, v18);
    byte_48E2009 = 1;
  }
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(fname, 0LL);
  v20 = (System_IO_BinaryWriter_o *)sub_1B00F18(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_60563772(v20, v19, 0LL);
  v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v21,
    (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v23 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !v21 )
    sub_1B00F28(v23, v22);
  System_Collections_Generic_Dictionary_object__object___Add(
    v21,
    (Il2CppObject *)StringLiteral_12298/*"SaveDataVer"*/,
    (Il2CppObject *)ManagerConfig_TypeInfo->static_fields->SaveDataVer,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v24 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v24 = NetworkManager_TypeInfo;
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v21,
    (Il2CppObject *)StringLiteral_24025/*"userCreateServer"*/,
    (Il2CppObject *)v24->static_fields->gameServerAddress,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v21,
    (Il2CppObject *)StringLiteral_24066/*"userId"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->userId,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v21,
    (Il2CppObject *)StringLiteral_16737/*"authKey"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->authKey,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v21,
    (Il2CppObject *)StringLiteral_22761/*"secretKey"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->secretKey,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson((Il2CppObject *)v21, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v26 = CatAndMouseGame__CatGame1(v25, 0, 0LL);
  v28 = v26;
  if ( !v20 )
    sub_1B00F28(v26, v27);
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
    v32 = sub_1B52CAC(v20, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_48E1FFA & 1) == 0 )
  {
    sub_1B00CCC(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v2);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    byte_48E1FFA = 1;
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
      v9 = (System_IO_BinaryWriter_o *)sub_1B00F18(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_60563772(v9, v8, 0LL);
      v12 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !v9 )
        sub_1B00F28(v12, v10);
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
        v16 = sub_1B52CAC(v9, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_48E1FF7 & 1) == 0 )
  {
    sub_1B00CCC(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v2);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    byte_48E1FF7 = 1;
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
      v9 = (System_IO_BinaryWriter_o *)sub_1B00F18(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_60563772(v9, v8, 0LL);
      v12 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !v9 )
        sub_1B00F28(v12, v10);
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
        v16 = sub_1B52CAC(v9, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v16)(v9, *(_QWORD *)(v16 + 8));
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *DatFileSavePath; // x20
  int32_t v6; // w0
  System_String_o *FileName; // x2

  if ( (byte_48E202A & 1) == 0 )
  {
    sub_1B00CCC(&AndroidUtil_TypeInfo, method);
    sub_1B00CCC(&DatFileName_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_1120/*"/"*/, v4);
    byte_48E202A = 1;
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
  return System_String__Concat_60337008(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getBaseMockUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_48E2042 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E2042 = 1;
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

  if ( (byte_48E2041 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_19760/*"https://"*/, v2);
    byte_48E2041 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_60325748(
           (System_String_o *)StringLiteral_19760/*"https://"*/,
           v3->static_fields->gameServerAddress,
           0LL);
}


System_String_o *__fastcall NetworkManager__getDataUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_48E2043 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E2043 = 1;
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

  if ( (byte_48E200E & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, v1);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    byte_48E200E = 1;
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


System_DateTime_o __fastcall NetworkManager__getDateTime_37173004(int64_t t, const MethodInfo *method)
{
  __int64 v3; // x1
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_48E200F & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    byte_48E200F = 1;
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

  if ( (byte_48E202E & 1) == 0 )
  {
    sub_1B00CCC(&AndroidUtil_TypeInfo, v1);
    sub_1B00CCC(&DatFileName_TypeInfo, v2);
    sub_1B00CCC(&StringLiteral_1120/*"/"*/, v3);
    byte_48E202E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(20, 0LL);
  return System_String__Concat_60337008(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getLocalDateTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_DateTime_o v3; // x0
  NetworkManager_c *v4; // x8
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_48E2010 & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, v1);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    byte_48E2010 = 1;
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


System_DateTime_o __fastcall NetworkManager__getLocalDateTime_37262068(int64_t t, const MethodInfo *method)
{
  __int64 v3; // x1
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_48E2011 & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    byte_48E2011 = 1;
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

  if ( (byte_48E200C & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E200C = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v5.fields._dateData = NetworkManager__getLocalDateTime((const MethodInfo *)v2).fields._dateData;
  return NetworkManager__getTime_37261288(v5, v3);
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

  if ( (byte_48E2046 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_TextAsset_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_8994/*"Mock/"*/, v4);
    byte_48E2046 = 1;
  }
  if ( !path )
    return 0LL;
  v5 = System_String__Concat_60325748((System_String_o *)StringLiteral_8994/*"Mock/"*/, path, 0LL);
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
    sub_1B00F28(v9, v10);
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

  if ( (byte_48E2017 & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, v1);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    byte_48E2017 = 1;
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

  if ( (byte_48E2015 & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, v1);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    byte_48E2015 = 1;
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
  System_DateTime___ctor_61004432(v14, Year, Month, v6, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v15.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_37261288(v15, v7);
}


int64_t __fastcall NetworkManager__getNextDayTime_37262740(int32_t hour, const MethodInfo *method)
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

  if ( (byte_48E2016 & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    byte_48E2016 = 1;
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

  if ( (byte_48E2018 & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, v1);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    byte_48E2018 = 1;
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
  System_DateTime___ctor_61004432(v14, v7, v6, 1, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v15.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_37261288(v15, v8);
}


int64_t __fastcall NetworkManager__getNextMonthTime_37263452(int32_t day, const MethodInfo *method)
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

  if ( (byte_48E2019 & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    byte_48E2019 = 1;
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
  System_DateTime___ctor_61004432(v13, Year, Month, day, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v14.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_37261288(v14, v6);
}


System_String_o *__fastcall NetworkManager__getOldAuthFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_48E2029 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, v1);
    sub_1B00CCC(&DatFileName_TypeInfo, v2);
    sub_1B00CCC(&StringLiteral_1120/*"/"*/, v3);
    byte_48E2029 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(16, 0LL);
  return System_String__Concat_60337008(temporaryCachePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getOldSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_48E202B & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, v1);
    sub_1B00CCC(&DatFileName_TypeInfo, v2);
    sub_1B00CCC(&StringLiteral_1120/*"/"*/, v3);
    byte_48E202B = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_60337008(temporaryCachePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


Il2CppObject *__fastcall NetworkManager__getRequest_object_(
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo_2DD4818 *method)
{
  const MethodInfo_2CBC2D0 **rgctx_data; // x8
  Il2CppObject *Instance_object; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  ServantStatusBattleListViewItem_o *v8; // x21
  System_Delegate_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Delegate_o *v12; // x8
  NetworkManager_ResultCallbackFunc_c *v13; // x1

  rgctx_data = (const MethodInfo_2CBC2D0 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, method);
    rgctx_data = (const MethodInfo_2CBC2D0 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1B52C04();
      rgctx_data = (const MethodInfo_2CBC2D0 **)method->rgctx_data;
    }
  }
  Instance_object = System_Activator__CreateInstance_object_(*rgctx_data);
  if ( !Instance_object )
    sub_1B00F28(0LL, v6);
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
    sub_1B011E8(v9);
LABEL_9:
    v8->klass = (ServantStatusBattleListViewItem_c *)v12;
  }
  sub_1B00C70(v8, (int32_t)v12, v10, v11);
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

  if ( (byte_48E2012 & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, v1);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    byte_48E2012 = 1;
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
  System_TimeSpan___ctor_61230172(v10, 9, 0, 0, 0LL);
  v13.fields._ticks = value.fields._ticks;
  v11.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v11, v13, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getServerDateTime_37177692(int64_t t, const MethodInfo *method)
{
  __int64 v3; // x1
  System_TimeSpan_o value; // [xsp+0h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v7; // 0:x0.8
  System_TimeSpan_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_TimeSpan_o v11; // 0:x1.8

  if ( (byte_48E2013 & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    byte_48E2013 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v7.fields._dateData = (uint64_t)&NetworkManager_TypeInfo->static_fields->dtUnixEpoch;
  value.fields._ticks = 0LL;
  dateData = System_DateTime__AddSeconds(v7, (double)t, 0LL).fields._dateData;
  v8.fields._ticks = (int64_t)&value;
  System_TimeSpan___ctor_61230172(v8, 9, 0, 0, 0LL);
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

  if ( (byte_48E202D & 1) == 0 )
  {
    sub_1B00CCC(&AndroidUtil_TypeInfo, v1);
    sub_1B00CCC(&DatFileName_TypeInfo, v2);
    sub_1B00CCC(&StringLiteral_1120/*"/"*/, v3);
    byte_48E202D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(19, 0LL);
  return System_String__Concat_60337008(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


int64_t __fastcall NetworkManager__getServerTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  const MethodInfo *v3; // x1
  System_DateTime_o v5; // 0:x0.8

  if ( (byte_48E200D & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E200D = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v5.fields._dateData = NetworkManager__getServerDateTime((const MethodInfo *)v2).fields._dateData;
  return NetworkManager__getTime_37261288(v5, v3);
}


System_String_o *__fastcall NetworkManager__getSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_48E202C & 1) == 0 )
  {
    sub_1B00CCC(&AndroidUtil_TypeInfo, v1);
    sub_1B00CCC(&DatFileName_TypeInfo, v2);
    sub_1B00CCC(&StringLiteral_1120/*"/"*/, v3);
    byte_48E202C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_60337008(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
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

  if ( (byte_48E2045 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, id);
    byte_48E2045 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v8);
  v10 = (UnityEngine_MonoBehaviour_o *)Instance;
  updated = NetworkManager__RequestApplicationUpdateCR((NetworkManager_o *)Instance, storeName, id, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_68062928(v10, updated, 0LL);
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
  int32_t v13; // w3
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x19
  __int64 v33; // x0
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF
  int64_t UserId; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_48E2052 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, method);
    sub_1B00CCC(&long_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&object___TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_547/*"&gachaId="*/, v6);
    sub_1B00CCC(&StringLiteral_24313/*"webview/summonDetail?userId="*/, v7);
    byte_48E2052 = 1;
  }
  v9 = (System_Object_array *)sub_1B00D74(object___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(0, v8);
  if ( !v9 )
    sub_1B00F28(BaseUrl, v11);
  v14 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B00E08(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
  }
  if ( !v9->max_length )
    goto LABEL_26;
  v9->m_Items[0] = v14;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v9->m_Items, (int32_t)v14, v12, v13);
  BaseUrl = (System_String_o *)StringLiteral_24313/*"webview/summonDetail?userId="*/;
  if ( StringLiteral_24313/*"webview/summonDetail?userId="*/ )
  {
    BaseUrl = (System_String_o *)sub_1B00E08(StringLiteral_24313/*"webview/summonDetail?userId="*/, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
    v11 = StringLiteral_24313/*"webview/summonDetail?userId="*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_26;
  v9->m_Items[1] = (Il2CppObject *)v11;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v9->m_Items[1], v11, v15, v16);
  UserId = NetworkManager__get_UserId(v17);
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserId, v18, v19, v20);
  v23 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B00E08(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_26;
  v9->m_Items[2] = v23;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v9->m_Items[2], (int32_t)v23, v21, v22);
  BaseUrl = (System_String_o *)StringLiteral_547/*"&gachaId="*/;
  if ( StringLiteral_547/*"&gachaId="*/ )
  {
    BaseUrl = (System_String_o *)sub_1B00E08(StringLiteral_547/*"&gachaId="*/, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
    v11 = StringLiteral_547/*"&gachaId="*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_26;
  v9->m_Items[3] = (Il2CppObject *)v11;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v9->m_Items[3], v11, v24, v25);
  v34 = gachaId;
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v26, v27, v28);
  v31 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B00E08(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
    {
LABEL_27:
      v33 = sub_1B00F4C(BaseUrl);
      sub_1B00DF4(v33, 0LL);
    }
  }
  if ( v9->max_length <= 4 )
LABEL_26:
    sub_1B00F30(BaseUrl, v11);
  v9->m_Items[4] = v31;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v9->m_Items[4], (int32_t)v31, v29, v30);
  return System_String__Concat_60337200(v9, 0LL);
}


int64_t __fastcall NetworkManager__getTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x8
  const MethodInfo *v3; // x1
  int64_t Time_37261288; // x0
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_48E200A & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E200A = 1;
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
    Time_37261288 = NetworkManager__getTime_37261288(v6, v3);
    v2 = NetworkManager_TypeInfo;
    NetworkManager_TypeInfo->static_fields->nowTime = Time_37261288;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->nowTime;
}


int64_t __fastcall NetworkManager__getTime_37261288(System_DateTime_o dateTime, const MethodInfo *method)
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
  if ( (byte_48E200B & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    sub_1B00CCC(&System_TimeSpan_TypeInfo, v3);
    byte_48E200B = 1;
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

  if ( (byte_48E2014 & 1) == 0 )
  {
    sub_1B00CCC(&System_DateTime_TypeInfo, v1);
    sub_1B00CCC(&NetworkManager_TypeInfo, v2);
    byte_48E2014 = 1;
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

  if ( (byte_48E2044 & 1) == 0 )
  {
    sub_1B00CCC(&ManagerConfig_TypeInfo, isSecurity);
    sub_1B00CCC(&NetworkManager_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_20760/*"lastAccessTime="*/, v8);
    sub_1B00CCC(&StringLiteral_556/*"&v="*/, v9);
    sub_1B00CCC(&StringLiteral_19723/*"http://"*/, v10);
    sub_1B00CCC(&StringLiteral_1206/*"/webview/"*/, v11);
    sub_1B00CCC(&StringLiteral_1869/*"?"*/, v12);
    sub_1B00CCC(&StringLiteral_1877/*"?lastAccessTime="*/, v13);
    sub_1B00CCC(&StringLiteral_19759/*"https:"*/, v14);
    sub_1B00CCC(&StringLiteral_550/*"&lastAccessTime="*/, v15);
    sub_1B00CCC(&StringLiteral_19158/*"file:"*/, v16);
    sub_1B00CCC(&StringLiteral_19760/*"https://"*/, v17);
    sub_1B00CCC(&StringLiteral_1/*""*/, v18);
    sub_1B00CCC(&StringLiteral_1880/*"?v="*/, v19);
    sub_1B00CCC(&StringLiteral_19722/*"http:"*/, v20);
    byte_48E2044 = 1;
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
    v32 = &StringLiteral_19760/*"https://"*/;
    v33 = NetworkManager_TypeInfo;
    if ( !v25 )
      v32 = &StringLiteral_19723/*"http://"*/;
    v34 = (System_String_o *)*v32;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v33 = NetworkManager_TypeInfo;
    }
    v35 = (System_String_o **)&StringLiteral_1206/*"/webview/"*/;
    if ( !isWebView )
      v35 = (System_String_o **)&StringLiteral_1/*""*/;
    v26 = System_String__Concat_60337008(v34, v33->static_fields->webServerAddress, *v35, 0LL);
    goto LABEL_33;
  }
  v25 = 0;
  if ( !path )
    goto LABEL_26;
LABEL_15:
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19158/*"file:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_34;
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19722/*"http:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_34;
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19759/*"https:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_34;
  v28 = &StringLiteral_19760/*"https://"*/;
  v29 = NetworkManager_TypeInfo;
  if ( !v25 )
    v28 = &StringLiteral_19723/*"http://"*/;
  v30 = (System_String_o *)*v28;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v29 = NetworkManager_TypeInfo;
  }
  v31 = (System_String_o **)&StringLiteral_1206/*"/webview/"*/;
  if ( !isWebView )
    v31 = (System_String_o **)&StringLiteral_1/*""*/;
  v26 = System_String__Concat_60339012(v30, v29->static_fields->webServerAddress, *v31, path, 0LL);
LABEL_33:
  path = v26;
LABEL_34:
  if ( isWebView )
  {
    if ( !path )
      sub_1B00F28(v26, v27);
    if ( System_String__StartsWith(path, (System_String_o *)StringLiteral_19722/*"http:"*/, 0LL)
      || System_String__StartsWith(path, (System_String_o *)StringLiteral_19759/*"https:"*/, 0LL) )
    {
      v36 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime((const MethodInfo *)v36);
      static_fields = NetworkManager_TypeInfo->static_fields;
      v47 = Time / static_fields->WebCacheTime;
      v48 = Time;
      v39 = System_String__IndexOf_60357184(path, static_fields->webServerAddress, 0LL);
      v40 = System_String__IndexOf_60357184(path, (System_String_o *)StringLiteral_1869/*"?"*/, 0LL);
      if ( (v39 & 0x80000000) == 0 )
      {
        v41 = System_Int64__ToString((int64_t)&v47, 0LL);
        if ( (v40 & 0x80000000) != 0 )
          v42 = &StringLiteral_1880/*"?v="*/;
        else
          v42 = &StringLiteral_556/*"&v="*/;
        v45 = (System_String_o *)*v42;
        return System_String__Concat_60337008(path, v45, v41, 0LL);
      }
      if ( (v40 & 0x80000000) != 0 )
      {
        v43 = System_Int64__ToString((int64_t)&v48, 0LL);
        v44 = &StringLiteral_1877/*"?lastAccessTime="*/;
        goto LABEL_49;
      }
      if ( (System_String__IndexOf_60357184(path, (System_String_o *)StringLiteral_20760/*"lastAccessTime="*/, 0LL) & 0x80000000) != 0 )
      {
        v43 = System_Int64__ToString((int64_t)&v48, 0LL);
        v44 = &StringLiteral_550/*"&lastAccessTime="*/;
LABEL_49:
        v45 = (System_String_o *)*v44;
        v41 = v43;
        return System_String__Concat_60337008(path, v45, v41, 0LL);
      }
    }
  }
  return path;
}


System_String_o *__fastcall NetworkManager__getWebViewAddress(System_String_o *path, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_48E204F & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E204F = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_60325748(v3->static_fields->webViewBaseURL, path, 0LL);
}


System_String_o *__fastcall NetworkManager__getWebViewAddress_37274204(int32_t addressType, const MethodInfo *method)
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

  if ( (byte_48E2051 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v4);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_22626/*"rights"*/, v6);
    sub_1B00CCC(&StringLiteral_23321/*"summonDetail"*/, v7);
    sub_1B00CCC(&StringLiteral_18186/*"dBanner"*/, v8);
    sub_1B00CCC(&StringLiteral_23533/*"terms"*/, v9);
    sub_1B00CCC(&StringLiteral_17153/*"boxGacha"*/, v10);
    sub_1B00CCC(&StringLiteral_21746/*"news"*/, v11);
    sub_1B00CCC(&StringLiteral_18080/*"credit"*/, v12);
    sub_1B00CCC(&StringLiteral_19631/*"help"*/, v13);
    sub_1B00CCC(&StringLiteral_23067/*"spdeal"*/, v14);
    sub_1B00CCC(&StringLiteral_17971/*"contact"*/, v15);
    sub_1B00CCC(&StringLiteral_23471/*"tBanner"*/, v16);
    sub_1B00CCC(&StringLiteral_18311/*"deleteAccount"*/, v17);
    sub_1B00CCC(&StringLiteral_1/*""*/, v18);
    sub_1B00CCC(&StringLiteral_24246/*"warBoard"*/, v19);
    sub_1B00CCC(&StringLiteral_22293/*"privacyPolicy"*/, v20);
    byte_48E2051 = 1;
  }
  v21 = &StringLiteral_19631/*"help"*/;
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
        v21 = &StringLiteral_21746/*"news"*/;
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
                  (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
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
                                        (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        }
        sub_1B00F28(webViewAddress, method);
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->IOS_ExaminationNewsUrl;
    case 1:
      v21 = &StringLiteral_23321/*"summonDetail"*/;
      goto LABEL_23;
    case 2:
      goto LABEL_23;
    case 3:
      v21 = &StringLiteral_17971/*"contact"*/;
      goto LABEL_23;
    case 4:
      v21 = &StringLiteral_23533/*"terms"*/;
      goto LABEL_23;
    case 5:
      v21 = &StringLiteral_18080/*"credit"*/;
      goto LABEL_23;
    case 6:
      v21 = &StringLiteral_22626/*"rights"*/;
      goto LABEL_23;
    case 7:
      v21 = &StringLiteral_23471/*"tBanner"*/;
      goto LABEL_23;
    case 8:
      v21 = &StringLiteral_23067/*"spdeal"*/;
      goto LABEL_23;
    case 9:
      v21 = &StringLiteral_17153/*"boxGacha"*/;
      goto LABEL_23;
    case 10:
      v21 = &StringLiteral_18186/*"dBanner"*/;
      goto LABEL_23;
    case 11:
      v21 = &StringLiteral_22293/*"privacyPolicy"*/;
      goto LABEL_23;
    case 12:
      v21 = &StringLiteral_18311/*"deleteAccount"*/;
      goto LABEL_23;
    case 13:
      v21 = &StringLiteral_24246/*"warBoard"*/;
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
  if ( (byte_48E2050 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_19759/*"https:"*/, v3);
    path = (System_String_o *)sub_1B00CCC(&StringLiteral_19722/*"http:"*/, v4);
    byte_48E2050 = 1;
  }
  if ( !v2 )
    sub_1B00F28(path, method);
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_19722/*"http:"*/, 0LL)
    || System_String__StartsWith(v2, (System_String_o *)StringLiteral_19759/*"https:"*/, 0LL) )
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

  if ( (byte_48E2056 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E2056 = 1;
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

  if ( (byte_48E1FEA & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E1FEA = 1;
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

  if ( (byte_48E1FE8 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E1FE8 = 1;
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

  if ( (byte_48E1FE4 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E1FE4 = 1;
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

  if ( (byte_48E1FE7 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E1FE7 = 1;
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
  System_String_o *userId; // x8

  if ( (byte_48E1FE9 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v1);
    byte_48E1FE9 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  userId = v2->static_fields->userId;
  if ( !userId )
    return -1LL;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
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

  if ( (byte_48E2057 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E2057 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->errorDialogResponseData = value;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->errorDialogResponseData, (int32_t)value, v2, v3);
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
  int32_t v13; // w3
  System_String_o *v14; // x19
  NetworkManager_c *v15; // x8
  ServantStatusBattleListViewItem_o *p_dataServerAddress; // x0
  __int64 v17; // x1
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *dataServerAddress; // x0
  NetworkManager_c *v20; // x0
  struct NetworkManager_StaticFields *v21; // x8
  System_String_o *v22; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x19
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_String_o *dataServerFolder; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x1
  struct ManagerConfig_StaticFields *v39; // x8
  System_String_o *ReleaseDataServerAddress; // x19
  int32_t v41; // w2
  int32_t v42; // w3
  NetworkManager_c *v43; // x8
  struct System_String_o *dataServerRedirectAddress; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_String_o *v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x1
  System_String_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  NetworkManager_c *v57; // x8
  ServantStatusBattleListViewItem_c *v58; // x1
  ServantStatusBattleListViewItem_o *v59; // x0
  NetworkManager_c *v60; // x0

  if ( (byte_48E204D & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, *(_QWORD *)&addressType);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v4);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&string___TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_1134/*"/AssetStorages/"*/, v7);
    sub_1B00CCC(&StringLiteral_1120/*"/"*/, v8);
    sub_1B00CCC(&StringLiteral_20625/*"jar:"*/, v9);
    byte_48E204D = 1;
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
      v14 = System_String__Concat_60339012(
              streamingAssetsPath,
              (System_String_o *)StringLiteral_1134/*"/AssetStorages/"*/,
              v11->static_fields->PlatformName,
              (System_String_o *)StringLiteral_1120/*"/"*/,
              0LL);
      v15 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v15 = NetworkManager_TypeInfo;
      }
      p_dataServerAddress = (ServantStatusBattleListViewItem_o *)&v15->static_fields->dataServerAddress;
      p_dataServerAddress->klass = (ServantStatusBattleListViewItem_c *)v14;
      sub_1B00C70(p_dataServerAddress, (int32_t)v14, v12, v13);
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
      dataServerAddress = System_String__Concat_60325748(
                            (System_String_o *)StringLiteral_20625/*"jar:"*/,
                            v21->FILE_URL_SCHEME,
                            0LL);
      if ( !v22 )
LABEL_59:
        sub_1B00F28(dataServerAddress, v17);
      if ( System_String__StartsWith(v22, dataServerAddress, 0LL) )
        return;
      v60 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v60 = NetworkManager_TypeInfo;
      }
      v54 = System_String__Concat_60325748(
              v60->static_fields->FILE_URL_SCHEME,
              v60->static_fields->dataServerAddress,
              0LL);
LABEL_53:
      v57 = NetworkManager_TypeInfo;
      goto LABEL_54;
    case 1:
      v25 = sub_1B00D74(string___TypeInfo, 5LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_48E01A1 )
      {
        sub_1B00CCC(&ManagerConfig_TypeInfo, v17);
        byte_48E01A1 = 1;
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
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 32), v26, v23, v24);
      if ( *(_DWORD *)(v25 + 24) <= 1u )
        goto LABEL_58;
      v29 = StringLiteral_1120/*"/"*/;
      *(_QWORD *)(v25 + 40) = StringLiteral_1120/*"/"*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 40), v29, v27, v28);
      if ( *(_DWORD *)(v25 + 24) <= 2u )
        goto LABEL_58;
      dataServerFolder = NetworkManager_TypeInfo->static_fields->dataServerFolder;
      *(_QWORD *)(v25 + 48) = dataServerFolder;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 48), (int32_t)dataServerFolder, v30, v31);
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
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 56), v35, v33, v34);
      if ( *(_DWORD *)(v25 + 24) <= 4u )
        goto LABEL_58;
      v38 = StringLiteral_1120/*"/"*/;
      goto LABEL_49;
    case 2:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_48E01A1 )
      {
        sub_1B00CCC(&ManagerConfig_TypeInfo, *(_QWORD *)&addressType);
        byte_48E01A1 = 1;
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
      v54 = System_String__Concat_60339012(
              ReleaseDataServerAddress,
              (System_String_o *)StringLiteral_1120/*"/"*/,
              v39->PlatformName,
              (System_String_o *)StringLiteral_1120/*"/"*/,
              0LL);
      goto LABEL_53;
    case 3:
      dataServerAddress = (System_String_o *)sub_1B00D74(string___TypeInfo, 5LL);
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
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)dataServerRedirectAddress, v41, v42);
      if ( *(_DWORD *)(v25 + 24) <= 1u )
        goto LABEL_58;
      v47 = StringLiteral_1120/*"/"*/;
      *(_QWORD *)(v25 + 40) = StringLiteral_1120/*"/"*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 40), v47, v45, v46);
      if ( *(_DWORD *)(v25 + 24) <= 2u )
        goto LABEL_58;
      v50 = NetworkManager_TypeInfo->static_fields->dataServerFolder;
      *(_QWORD *)(v25 + 48) = v50;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 48), (int32_t)v50, v48, v49);
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( *(_DWORD *)(v25 + 24) <= 3u
        || (v53 = *(_QWORD *)(*(_QWORD *)&dataServerAddress[7].fields + 128LL),
            *(_QWORD *)(v25 + 56) = v53,
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 56), v53, v51, v52),
            *(_DWORD *)(v25 + 24) <= 4u) )
      {
LABEL_58:
        sub_1B00F30(dataServerAddress, v17);
      }
      v38 = StringLiteral_1120/*"/"*/;
LABEL_49:
      *(_QWORD *)(v25 + 64) = v38;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 64), v38, v36, v37);
      v54 = System_String__Concat_60339276((System_String_array *)v25, 0LL);
      v57 = NetworkManager_TypeInfo;
LABEL_54:
      v58 = (ServantStatusBattleListViewItem_c *)v54;
      v59 = (ServantStatusBattleListViewItem_o *)&v57->static_fields->dataServerAddress;
      v59->klass = v58;
      sub_1B00C70(v59, (int32_t)v58, v55, v56);
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
  ServantStatusBattleListViewItem_o *p_webViewBaseURL; // x0
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

  if ( (byte_48E204E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, contactURL);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__, v10);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__,
      v11);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__, v12);
    sub_1B00CCC(&NetworkManager_TypeInfo, v13);
    sub_1B00CCC(&StringLiteral_17971/*"contact"*/, v14);
    sub_1B00CCC(&StringLiteral_18311/*"deleteAccount"*/, v15);
    sub_1B00CCC(&StringLiteral_1/*""*/, v16);
    sub_1B00CCC(&StringLiteral_22293/*"privacyPolicy"*/, v17);
    byte_48E204E = 1;
  }
  v18 = NetworkManager_TypeInfo;
  memset(&v36, 0, sizeof(v36));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v18 = NetworkManager_TypeInfo;
  }
  p_webViewBaseURL = (ServantStatusBattleListViewItem_o *)&v18->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (ServantStatusBattleListViewItem_c *)baseURL;
  sub_1B00C70(p_webViewBaseURL, (int32_t)baseURL, (int32_t)filePassInfo, (int32_t)method);
  webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)NetworkManager_TypeInfo->static_fields->webViewAddress;
  if ( !webViewAddress
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          webViewAddress,
          (const MethodInfo_308DBD0 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        !filePassInfo)
    || (webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
                                                                                      (const MethodInfo_308D728 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__)) == 0LL )
  {
    sub_1B00F28(webViewAddress, v20);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)webViewAddress,
    (const MethodInfo_32E94C4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v36,
            (const MethodInfo_318F1F8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    if ( !v22 )
      break;
    currentKey = v36.fields._currentKey;
    if ( !v36.fields._currentKey )
      sub_1B00F28(v22, v23);
    if ( System_String__Equals_60334064(
           (System_String_o *)v36.fields._currentKey,
           (System_String_o *)StringLiteral_17971/*"contact"*/,
           0LL)
      || System_String__Equals_60334064((System_String_o *)currentKey, (System_String_o *)StringLiteral_22293/*"privacyPolicy"*/, 0LL)
      || System_String__Equals_60334064((System_String_o *)currentKey, (System_String_o *)StringLiteral_18311/*"deleteAccount"*/, 0LL) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
               currentKey,
               (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        sub_1B00F28(0LL, v26);
      v27 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    else
    {
      v32 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
              currentKey,
              (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v32 )
        sub_1B00F28(0LL, v33);
      v34 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v32->klass->vtable[3].method)(
                                 v32,
                                 v32->klass->vtable[4].methodPtr);
      v27 = System_String__Concat_60325748(baseURL, v34, 0LL);
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
      sub_1B00F28(0LL, v28);
    System_Collections_Generic_Dictionary_object__object___Add(
      v31,
      currentKey,
      v29,
      (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v36,
    (const MethodInfo_318F1F4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_194B20C;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_194B1EC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_194B1A4;
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
  return (System_IAsyncResult_o *)sub_1B00C80(this, &v6, callback, object);
}


void __fastcall NetworkManager_LoginCallbackFunc__EndInvoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_194B168;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_194B148;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_194B100;
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
  return (System_IAsyncResult_o *)sub_1B00C80(this, &v6, callback, object);
}


void __fastcall NetworkManager_ResultCallbackFunc__EndInvoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_194B2B0;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_194B290;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_194B248;
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
  return (System_IAsyncResult_o *)sub_1B00C80(this, &v6, callback, object);
}


void __fastcall NetworkManager_StoreCallbackFunc__EndInvoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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
  struct ResponseCommandBase_array **p_commandList; // x21
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  ManagerConfig_c *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  UnityEngine_Coroutine_o *communicationCoroutine; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  NetworkManager_c *v41; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v43; // x0
  int32_t v44; // w1
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x0
  __int64 v48; // x0
  UnityEngine_Object_o *v49; // x20
  System_Collections_Generic_List_object__o *v50; // x22
  PurchaseByBankResponseCommand_o *v51; // x23
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  MissionNotifyResponseCommand_o *v58; // x23
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  System_Object_array *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_Collections_Generic_Dictionary_object__object__o *v68; // x23
  int32_t v69; // w2
  int32_t v70; // w3
  struct ResponseCommandBase_array *commandList; // x8
  __int64 v72; // x25
  int max_length; // w9
  __int64 v74; // x8
  Il2CppObject *v75; // x23
  System_Collections_Generic_Dictionary_object__object__o *commandLookup; // x24

  v4 = this;
  if ( (byte_48E2078 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__, v5);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo, v6);
    sub_1B00CCC(&Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ResponseCommandBase__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ResponseCommandBase___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_ResponseCommandBase__TypeInfo, v11);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v12);
    sub_1B00CCC(&MissionNotifyResponseCommand_TypeInfo, v13);
    sub_1B00CCC(&NetworkManager_TypeInfo, v14);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v15);
    sub_1B00CCC(&PurchaseByBankResponseCommand_TypeInfo, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_RequestBase__Clear__, v17);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__, v18);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__, v19);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    this = (NetworkManager__Initialize_d__82_o *)sub_1B00CCC(&StringLiteral_1/*""*/, v21);
    byte_48E2078 = 1;
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
    NetworkManager__ClearAuth(_4__this, 0LL);
    NetworkManager__ReadServerSetting(_4__this, 0LL);
    p_commandList = &_4__this->fields.commandList;
    if ( !_4__this->fields.commandList )
    {
      v50 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ResponseCommandBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v50,
        (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ResponseCommandBase___ctor__);
      v51 = (PurchaseByBankResponseCommand_o *)sub_1B00F18(PurchaseByBankResponseCommand_TypeInfo);
      PurchaseByBankResponseCommand___ctor(v51, 0LL);
      if ( !v50 )
        goto LABEL_49;
      items = v50->fields._items;
      v55 = Method_System_Collections_Generic_List_ResponseCommandBase__Add__;
      ++v50->fields._version;
      if ( !items )
        goto LABEL_49;
      size = v50->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          (Il2CppObject *)v51,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v50->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v51;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v51, v52, v53);
      }
      v58 = (MissionNotifyResponseCommand_o *)sub_1B00F18(MissionNotifyResponseCommand_TypeInfo);
      MissionNotifyResponseCommand___ctor(v58, 0LL);
      v61 = v50->fields._items;
      v62 = Method_System_Collections_Generic_List_ResponseCommandBase__Add__;
      ++v50->fields._version;
      if ( !v61 )
        goto LABEL_49;
      v63 = v50->fields._size;
      if ( (unsigned int)v63 >= v61->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          (Il2CppObject *)v58,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &v61->obj.klass + v63;
        v50->fields._size = v63 + 1;
        v64[4] = (Il2CppClass *)v58;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v58, v59, v60);
      }
      v65 = System_Collections_Generic_List_object___ToArray(
              v50,
              (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__);
      _4__this->fields.commandList = (struct ResponseCommandBase_array *)v65;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&_4__this->fields.commandList, (int32_t)v65, v66, v67);
      v68 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v68,
        (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__);
      _4__this->fields.commandLookup = (struct System_Collections_Generic_Dictionary_string__ResponseCommandBase__o *)v68;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&_4__this->fields.commandLookup, (int32_t)v68, v69, v70);
      commandList = _4__this->fields.commandList;
      if ( !commandList )
        goto LABEL_49;
      v72 = 0LL;
      while ( 1 )
      {
        max_length = commandList->max_length;
        if ( (int)v72 >= max_length )
          break;
        if ( (unsigned int)v72 >= max_length )
          sub_1B00F30(this, method);
        v74 = (__int64)commandList + 8 * v72;
        v75 = *(Il2CppObject **)(v74 + 32);
        if ( v75 )
        {
          commandLookup = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.commandLookup;
          this = (NetworkManager__Initialize_d__82_o *)ResponseCommandBase__GetCommandName(
                                                         *(ResponseCommandBase_o **)(v74 + 32),
                                                         0LL);
          if ( commandLookup )
          {
            System_Collections_Generic_Dictionary_object__object___Add(
              commandLookup,
              (Il2CppObject *)this,
              v75,
              (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__);
            commandList = *p_commandList;
            ++v72;
            if ( *p_commandList )
              continue;
          }
        }
        goto LABEL_49;
      }
    }
    NetworkManager__InitializeUserAgent(_4__this, 0LL);
LABEL_9:
    if ( _4__this->fields._isWaitUserAgent_k__BackingField )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B00C70(p__2__current, 0, v2, v3);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    v27 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v27 = ManagerConfig_TypeInfo;
    }
    if ( v27->static_fields->UseAppServer )
      NetworkServicePluginScript__CheckService(0LL);
    this = (NetworkManager__Initialize_d__82_o *)_4__this->fields.communicationWaitList;
    if ( this )
    {
      System_Collections_Generic_Queue_object___Clear(
        (System_Collections_Generic_Queue_T__o *)this,
        (const MethodInfo_3532F68 *)Method_System_Collections_Generic_Queue_RequestBase__Clear__);
      communicationCoroutine = _4__this->fields.communicationCoroutine;
      if ( communicationCoroutine )
        UnityEngine_MonoBehaviour__StopCoroutine_68063548(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          communicationCoroutine,
          0LL);
      _4__this->fields.communicationWork = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationWork, 0, v28, v29);
      _4__this->fields.communicationCoroutine = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationCoroutine, 0, v31, v32);
      _4__this->fields.communicationWorkResponseList = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationWorkResponseList, 0, v33, v34);
      _4__this->fields.cacheRefreshWork = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&_4__this->fields.cacheRefreshWork, 0, v35, v36);
      _4__this->fields.cacheRefreshWorkResponseList = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&_4__this->fields.cacheRefreshWorkResponseList, 0, v37, v38);
      v41 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v41 = NetworkManager_TypeInfo;
      }
      static_fields = v41->static_fields;
      static_fields->sessionId = 0LL;
      static_fields = (struct NetworkManager_StaticFields *)((char *)static_fields + 128);
      LOBYTE(static_fields[-1].gameServerRedirectAddress) = 0;
      LOWORD(static_fields->WebCacheTime) = 0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)static_fields, 0, v39, v40);
      v43 = NetworkManager_TypeInfo->static_fields;
      v44 = (int)StringLiteral_1/*""*/;
      v43->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v43->dataServerFolder, v44, v45, v46);
      v47 = *((_QWORD *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__ + 4);
      if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
        v47 = sub_1B52BA8(v47);
      v48 = *(_QWORD *)(*(_QWORD *)(v47 + 192) + 16LL);
      if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
        v48 = sub_1B52BA8(v48);
      v49 = **(UnityEngine_Object_o ***)(v48 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v49, 0LL, 0LL) )
      {
        this = (NetworkManager__Initialize_d__82_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)_4__this,
                                                       0LL);
        if ( !this )
          goto LABEL_49;
        UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___);
      }
      this = (NetworkManager__Initialize_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        DataManager__Initialize((DataManager_o *)this, 0LL);
        this = (NetworkManager__Initialize_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
        if ( this )
        {
          AvalonNotificationManager__Initialize((AvalonNotificationManager_o *)this, 0LL);
          return 0;
        }
      }
    }
LABEL_49:
    sub_1B00F28(this, method);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_NetworkManager__Initialize_d__82_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  ServantStatusBattleListViewItem_o *p_id; // x0
  struct System_String_o *iOSApplicationID; // x1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v25; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v26; // x8
  NetworkManager__RequestApplicationUpdateCR_d__218_o *v27; // x20
  NetworkManager__RequestApplicationUpdateCR_d__218_o *v28; // x20
  Il2CppObject *Item; // x20
  System_Object_array *v30; // x0
  __int64 v31; // x8
  System_Object_array *v32; // x20
  System_Collections_Generic_Dictionary_object__object__o *v33; // x0
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  ServantStatusBattleListViewItem_o *p_url_5__2; // x0
  System_String_o *v39; // x20
  DelightWorks_Network_UnityWebRequestWWW_o *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *www_5__3; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v45; // w2
  int32_t v46; // w3
  bool result; // w0
  struct NetworkManager_StoreCallbackFunc_o *callback; // x8
  UnityEngine_WaitForSeconds_o *v49; // x20
  ServantStatusBattleListViewItem_o *v50; // x19
  int32_t v51; // w2
  int32_t v52; // w3
  int v53; // w8
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *id; // x1
  System_String_o **v57; // x21
  ManagerConfig_c *v58; // x0
  struct System_String_o *AndroidPackageName; // x1
  System_String_o *v60; // x0
  UnityEngine_WaitForSeconds_o *v61; // x20
  int32_t v62; // w2
  int32_t v63; // w3

  v4 = this;
  if ( (byte_48E2079 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B00CCC(&Method_JsonManager_DeserializeArray_Dictionary_string__object____, v6);
    sub_1B00CCC(&JsonManager_TypeInfo, v7);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v8);
    sub_1B00CCC(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v9);
    sub_1B00CCC(&UnityEngine_WaitForSeconds_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_23671/*"trackViewUrl"*/, v11);
    sub_1B00CCC(&StringLiteral_544/*"&country=jp"*/, v12);
    sub_1B00CCC(&StringLiteral_19766/*"https://play.google.com/store/apps/details?id="*/, v13);
    sub_1B00CCC(&StringLiteral_2356/*"Android"*/, v14);
    sub_1B00CCC(&StringLiteral_22595/*"results"*/, v15);
    sub_1B00CCC(&StringLiteral_19764/*"https://itunes.apple.com/lookup?id="*/, v16);
    this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)sub_1B00CCC(&StringLiteral_19782/*"iOS"*/, v17);
    byte_48E2079 = 1;
  }
  switch ( v4->fields.__1__state )
  {
    case 0:
      p_storeName = &v4->fields.storeName;
      storeName = v4->fields.storeName;
      v4->fields.__1__state = -1;
      if ( !storeName )
      {
        v20 = StringLiteral_2356/*"Android"*/;
        *p_storeName = (System_String_o *)StringLiteral_2356/*"Android"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.storeName, v20, v2, v3);
      }
      v4->fields._url_5__2 = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields._url_5__2, 0, v2, v3);
      if ( System_String__op_Equality(v4->fields.storeName, (System_String_o *)StringLiteral_19782/*"iOS"*/, 0LL) )
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
          p_id = (ServantStatusBattleListViewItem_o *)&v4->fields.id;
          iOSApplicationID = static_fields->iOSApplicationID;
          v4->fields.id = iOSApplicationID;
LABEL_33:
          sub_1B00C70(p_id, (int32_t)iOSApplicationID, v2, v3);
        }
        v39 = System_String__Concat_60337008(
                (System_String_o *)StringLiteral_19764/*"https://itunes.apple.com/lookup?id="*/,
                v4->fields.id,
                (System_String_o *)StringLiteral_544/*"&country=jp"*/,
                0LL);
        v40 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B00F18(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
        DelightWorks_Network_UnityWebRequestWWW___ctor(v40, v39, 0LL);
        v4->fields._www_5__3 = v40;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields._www_5__3, (int32_t)v40, v41, v42);
        www_5__3 = (Il2CppObject *)v4->fields._www_5__3;
        v4->fields.__2__current = www_5__3;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B00C70(p__2__current, (int32_t)www_5__3, v45, v46);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      if ( !System_String__op_Equality(*p_storeName, (System_String_o *)StringLiteral_2356/*"Android"*/, 0LL) )
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
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.id, (int32_t)AndroidPackageName, v54, v55);
        id = *v57;
      }
      v60 = System_String__Concat_60325748((System_String_o *)StringLiteral_19766/*"https://play.google.com/store/apps/details?id="*/, id, 0LL);
      v37 = (int)v60;
      v4->fields._url_5__2 = v60;
      p_url_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._url_5__2;
      goto LABEL_46;
    case 1:
      v25 = v4->fields._www_5__3;
      v4->fields.__1__state = -1;
      if ( !v25 )
        goto LABEL_49;
      this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)System_String__IsNullOrEmpty(
                                                                      v25->fields._error_k__BackingField,
                                                                      0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_38;
      v26 = v4->fields._www_5__3;
      if ( !v26 )
        goto LABEL_49;
      if ( System_String__IsNullOrEmpty(v26->fields._error_k__BackingField, 0LL) )
      {
        this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)v4->fields._www_5__3;
        if ( !this )
          goto LABEL_49;
        this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)DelightWorks_Network_UnityWebRequestWWW__get_text(
                                                                        (DelightWorks_Network_UnityWebRequestWWW_o *)this,
                                                                        0LL);
        if ( !v4->fields._www_5__3 )
          goto LABEL_49;
        v27 = this;
        DelightWorks_Network_UnityWebRequestWWW__Dispose(v4->fields._www_5__3, 0LL);
        if ( !JsonManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
        this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)JsonManager__getDictionary(
                                                                        (System_String_o *)v27,
                                                                        0LL);
        if ( !this )
          goto LABEL_49;
        v28 = this;
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)this,
               (Il2CppObject *)StringLiteral_22595/*"results"*/,
               (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)v28,
                   (Il2CppObject *)StringLiteral_22595/*"results"*/,
                   (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v30 = JsonManager__DeserializeArray_object_(
                  Item,
                  (const MethodInfo_2DB84AC *)Method_JsonManager_DeserializeArray_Dictionary_string__object____);
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
                                               (Il2CppObject *)StringLiteral_23671/*"trackViewUrl"*/,
                                               (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)v30 & 1) != 0 )
                {
                  if ( v32->max_length )
                  {
                    this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)v32->m_Items[0];
                    if ( this )
                    {
                      this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                      (Il2CppObject *)StringLiteral_23671/*"trackViewUrl"*/,
                                                                                      (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                      if ( this )
                      {
                        v34 = ((__int64 (__fastcall *)(NetworkManager__RequestApplicationUpdateCR_d__218_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                this,
                                this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                        v37 = v34;
                        v4->fields._url_5__2 = (struct System_String_o *)v34;
                        p_url_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._url_5__2;
LABEL_46:
                        sub_1B00C70(p_url_5__2, v37, v35, v36);
                        goto LABEL_47;
                      }
                    }
LABEL_49:
                    sub_1B00F28(this, method);
                  }
LABEL_50:
                  sub_1B00F30(v30, method);
                }
              }
            }
          }
        }
LABEL_47:
        v61 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v61, 0.5, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v61;
        v50 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B00C70(v50, (int32_t)v61, v62, v63);
        v53 = 3;
        goto LABEL_48;
      }
LABEL_38:
      this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)v4->fields._www_5__3;
      if ( !this )
        goto LABEL_49;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v49 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v49, 1.0, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v49;
      v50 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B00C70(v50, (int32_t)v49, v51, v52);
      v53 = 2;
LABEL_48:
      *(_DWORD *)&v50[-1].fields.isMine = v53;
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_NetworkManager__RequestApplicationUpdateCR_d__218_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  struct NetworkManager_o *_4__this; // x20
  struct RequestBase_o *work; // x8
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x21
  System_String_o *v132; // x22
  System_String_o *v133; // x23
  struct RequestBase_o *v134; // x8
  NetworkManager__RequestCR_d__213_o *v135; // x19
  System_Action_o *v136; // x19
  struct DelightWorks_Network_UnityWebRequestWWW_o *www_5__10; // x8
  DelightWorks_Network_UnityWebRequestWWW_o **p_www_5__10; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v139; // x8
  int32_t v140; // w2
  int32_t v141; // w3
  DelightWorks_Network_UnityWebRequestWWW_o *v142; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v143; // x8
  NetworkManager__RequestCR_d__213_o **v144; // x21
  System_String_o *v145; // x0
  int32_t v146; // w2
  int32_t v147; // w3
  int32_t v148; // w2
  int32_t v149; // w3
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v151; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v153; // w2
  int32_t v154; // w3
  int v155; // w8
  uint64_t v156; // x21
  struct RequestBase_o *v157; // x8
  __int64 methodPtr_low; // x11
  ManagerConfig_c *v159; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  __int64 v161; // x0
  System_String_o *v162; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v163; // x20
  int32_t v164; // w2
  int32_t v165; // w3
  Il2CppObject *v166; // x1
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o **p_data_5__2; // x21
  __int64 v170; // x0
  int32_t v171; // w2
  int32_t v172; // w3
  UnityEngine_WWWForm_o *WWWForm; // x21
  System_Collections_Generic_Dictionary_object__object__o *v174; // x22
  Il2CppObject *v175; // x23
  Il2CppObject *key; // x24
  Il2CppObject *v177; // x24
  Il2CppObject *v178; // x0
  __int64 v179; // x1
  struct System_Collections_Generic_Queue_RequestBase__o *communicationWaitList; // x8
  float progress_k__BackingField; // s8
  float loadProgress_5__13; // s9
  int32_t v183; // w2
  int32_t v184; // w3
  float v185; // s0
  int32_t v186; // w2
  int32_t v187; // w3
  struct System_Collections_Generic_Queue_RequestBase__o *v188; // x8
  int32_t v189; // w1
  int32_t v190; // w2
  int32_t v191; // w3
  __int64 *v192; // x8
  struct System_String_o *error_k__BackingField; // x1
  int32_t v194; // w2
  int32_t v195; // w3
  int32_t v196; // w1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v197; // x8
  Il2CppObject *v198; // x24
  NetworkManager__RequestCR_d__213_o *v199; // x24
  System_String_o *v200; // x24
  uint32_t v201; // w0
  __int64 *v202; // x8
  int32_t v203; // w1
  __int64 v204; // x1
  ServantStatusBattleListViewItem_o *p_errorAction_5__5; // x0
  System_Collections_Generic_Dictionary_object__object__o *responseHeaders_k__BackingField; // x0
  System_String_o *v207; // x0
  int64_t v208; // x22
  NetworkManager_c *v209; // x8
  struct NetworkManager_StaticFields *v210; // x8
  int64_t startTime_5__8; // x9
  int32_t v212; // w2
  int32_t v213; // w3
  int32_t v214; // w2
  int32_t v215; // w3
  System_String_o **p_errorCode_5__3; // x23
  int32_t v217; // w2
  int32_t v218; // w3
  int32_t v219; // w1
  int32_t v220; // w1
  int32_t v221; // w2
  int32_t v222; // w3
  int32_t v223; // w1
  int32_t v224; // w2
  int32_t v225; // w3
  int32_t v226; // w2
  int32_t v227; // w3
  ServantStatusBattleListViewItem_o *v228; // x0
  int32_t v229; // w1
  int32_t v230; // w2
  int32_t v231; // w3
  int32_t v232; // w1
  int32_t v233; // w1
  int32_t v234; // w2
  int32_t v235; // w3
  bool v236; // w25
  int32_t v237; // w2
  int32_t v238; // w3
  int32_t v239; // w2
  int32_t v240; // w3
  System_String_o **v241; // x22
  System_String_o *errorLocalizeCode_5__4; // x26
  System_String_o *title; // x22
  __int64 v244; // x1
  System_String_o *errorAction_5__5; // x24
  int32_t v246; // w2
  int32_t v247; // w3
  __int64 *v248; // x8
  System_String_o *data_5__2; // x21
  NetworkManager__RequestCR_d__213_o *v250; // x21
  int32_t v251; // w2
  int32_t v252; // w3
  Il2CppObject *v253; // x22
  System_Object_array *v254; // x0
  ResponseData_array **p_responseList_5__7; // x22
  int32_t v256; // w2
  int32_t v257; // w3
  struct ResponseData_array *responseList_5__7; // x8
  __int64 v259; // x25
  int v260; // w9
  Il2CppClass **v261; // x8
  ResponseData_o *v262; // x24
  System_Collections_Generic_SortedDictionary_string__string__o *v263; // x23
  System_String_o *AuthCode; // x0
  NetworkManager_c *v265; // x8
  System_String_o *v266; // x23
  int32_t v267; // w8
  NetworkManager_c *v268; // x0
  __int64 *v269; // x8
  System_String_o *v270; // x24
  bool isNoRedirect_5__9; // w24
  DelightWorks_Network_UnityWebRequestWWW_o *v272; // x25
  int32_t v273; // w2
  int32_t v274; // w3
  struct RequestBase_o *v275; // x8
  __int64 v276; // x11
  struct RequestBase_o *v277; // x21
  __int64 v278; // x1
  ManagementManager_c *v279; // x0
  _BOOL4 isDuringStartup; // w8
  __int64 *v281; // x9
  __int64 *v282; // x10
  __int64 v283; // x1
  System_String_o *detail; // x24
  struct ResponseFailData_o *failData_5__6; // x8
  struct ResponseFailData_o *v286; // x8
  System_String_o *url; // x26
  struct ResponseFailData_o *v288; // x8
  struct ResponseFailData_o *v289; // x8
  struct ResponseFailData_o *v290; // x8
  System_String_o *v291; // x0
  struct ResponseFailData_o *v292; // x8
  System_String_o *v293; // x27
  bool v294; // w8
  bool result; // w0
  System_String_o *v296; // x27
  uint32_t v297; // w0
  int32_t v298; // w2
  int32_t v299; // w3
  NetworkManager_c *v300; // x0
  struct ResponseFailData_o *v301; // x8
  int32_t errorType; // w23
  __int64 v303; // x1
  NetworkManager_c *v304; // x0
  NetworkManager_c *v305; // x0
  int32_t v306; // w1
  int32_t v307; // w1
  int32_t v308; // w2
  int32_t v309; // w3
  int32_t v310; // w1
  int32_t v311; // w2
  int32_t v312; // w3
  Il2CppObject *v313; // x22
  struct ResponseData_array *v314; // x8
  unsigned __int64 v315; // x22
  unsigned __int64 v316; // x9
  ResponseData_o *v317; // x21
  Il2CppObject *Instance; // x24
  ErrorDialog_ClickDelegate_o *v319; // x25
  struct DelightWorks_Network_UnityWebRequestWWW_o *v320; // x8
  Il2CppObject *wait_5__14; // x1
  System_String_o *text; // x0
  int32_t v323; // w2
  int32_t v324; // w3
  struct RequestBase_o *v325; // x8
  __int64 v326; // x10
  Il2CppObject *Item; // x22
  int _2__current; // w8
  System_String_array *v329; // x0
  int32_t v330; // w2
  int32_t v331; // w3
  NetworkManager_c *v332; // x8
  System_String_array *v333; // x22
  struct NetworkManager_StaticFields *v334; // x0
  int32_t v335; // w1
  int max_length; // w8
  unsigned int v337; // w25
  Il2CppClass **v338; // x8
  System_String_o *v339; // x23
  NetworkManager_c *v340; // x0
  System_String_o *v341; // x0
  struct NetworkManager_StaticFields *v342; // x8
  int32_t v343; // w2
  int32_t v344; // w3
  NetworkManager_c *v345; // x0
  System_Action_o *v346; // x23
  struct ResponseFailData_o *v347; // x8
  System_Action_o *v348; // x0
  __int64 *v349; // x8
  struct ResponseFailData_o *v350; // x8
  ManagerConfig_c *v351; // x0
  __int64 v352; // x9
  float unscaledTime; // s0
  float timeout_5__11; // s1
  UnityEngine_WaitForEndOfFrame_o *v355; // x21
  int32_t v356; // w2
  int32_t v357; // w3
  int32_t v358; // w2
  int32_t v359; // w3
  NetworkManager__RequestCR_d__213_o *v360; // x25
  int32_t v361; // w1
  int32_t v362; // w2
  int32_t v363; // w3
  struct NetworkManager_o *nid; // x1
  int32_t v365; // w2
  int32_t v366; // w3
  int32_t v367; // w1
  int32_t v368; // w2
  int32_t v369; // w3
  struct System_String_o *resCode; // x1
  int32_t v371; // w2
  int32_t v372; // w3
  int32_t v373; // w1
  System_String_o *v374; // x0
  int32_t v375; // w2
  int32_t v376; // w3
  ResponseFailData_o *v377; // x26
  struct ResponseFailData_o **p_failData_5__6; // x25
  int32_t v379; // w2
  int32_t v380; // w3
  int32_t v381; // w2
  int32_t v382; // w3
  __int64 *p_action; // x8
  __int64 v384; // x1
  struct RequestBase_o *v385; // x8
  PurchaseByBank_UnityIap_Request_c *v386; // x9
  __int64 v387; // x11
  RequestBase_c *klass; // x8
  __int64 v389; // x10
  ResponseData_array *v390; // x22
  ResponseData_o *v391; // x0
  System_Collections_Generic_Dictionary_object__object__o *fail; // x0
  System_String_o *v393; // x22
  int32_t v394; // w2
  int32_t v395; // w3
  int32_t v396; // w1
  TitleRootComponent_c *v397; // x0
  Il2CppObject *v398; // x23
  AvalonSceneManager_c *v399; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x25
  Il2CppObject *v402; // x26
  struct NetworkManager___c_StaticFields *v403; // x0
  int32_t v404; // w2
  int32_t v405; // w3
  Il2CppObject *v406; // x23
  System_String_o *v407; // x25
  System_String_o *v408; // x26
  CommonConfirmDialog_ClickDelegate_o *v409; // x27
  struct ResponseFailData_o *v410; // x8
  System_String_o *sandboxDomain; // x22
  _BOOL4 sandboxSeurity; // w24
  int32_t v413; // w2
  int32_t v414; // w3
  struct ResponseFailData_o *v415; // x8
  struct System_String_o *sandboxAssetsDomain; // x22
  NetworkManager_c *v417; // x0
  struct NetworkManager_StaticFields *v418; // x0
  int32_t v419; // w2
  int32_t v420; // w3
  struct ResponseFailData_o *v421; // x8
  struct System_String_o *sandboxWebviewDomain; // x22
  NetworkManager_c *v423; // x0
  struct NetworkManager_StaticFields *v424; // x0
  struct ResponseFailData_o *v425; // x8
  Il2CppObject *v426; // x23
  ErrorDialog_ClickDelegate_o *v427; // x25
  System_String_o *v428; // x0
  int32_t v429; // w2
  int32_t v430; // w3
  ResponseFailData_o *v431; // x22
  struct ResponseFailData_o **v432; // x21
  int32_t v433; // w2
  int32_t v434; // w3
  int32_t v435; // w2
  int32_t v436; // w3
  __int64 *v437; // x8
  ManagementManager_c *v438; // x0
  __int64 v439; // x1
  struct ResponseFailData_o *v440; // x8
  struct ResponseFailData_o *v441; // x8
  System_Action_o *v442; // x25
  int32_t v443; // w2
  int32_t v444; // w3
  int32_t v445; // w2
  int32_t v446; // w3
  int32_t v447; // w2
  int32_t v448; // w3
  int32_t v449; // w2
  int32_t v450; // w3
  int32_t v451; // w2
  int32_t v452; // w3
  UnityEngine_WaitForEndOfFrame_o *v453; // x20
  ServantStatusBattleListViewItem_o *v454; // x19
  int32_t v455; // w2
  int32_t v456; // w3
  ServantStatusBattleListViewItem_c *v457; // x19
  NetworkManager_c *v458; // x0
  ServantStatusBattleListViewItem_o *p_errorDialogResponseData; // x0
  ManagementManager_c *v460; // x0
  _BOOL4 v461; // w26
  Il2CppObject *v462; // x23
  ErrorDialog_ClickDelegate_o *v463; // x25
  __int64 *v464; // x8
  bool v465; // w0
  __int64 *v466; // x8
  System_String_o *v467; // x25
  System_String_o *v468; // x26
  ErrorDialog_ClickDelegate_o *v469; // x27
  ErrorDialog_ClickDelegate_o *v470; // x25
  __int64 v471; // x1
  struct System_String_o **p_errorLocalizeCode_5__4; // x23
  __int64 *v473; // x8
  __int64 v474; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v475; // [xsp+10h] [xbp-E0h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v477; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_SortedDictionary_string__string__o *authParams; // [xsp+70h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+78h] [xbp-78h] BYREF
  System_DateTime_o v480; // 0:x0.8
  System_DateTime_o v481; // 0:x0.8

  v2 = this;
  if ( (byte_48E207A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Application_TypeInfo, v3);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v4);
    sub_1B00CCC(&BattleData_TypeInfo, v5);
    sub_1B00CCC(&char___TypeInfo, v6);
    sub_1B00CCC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_1B00CCC(&ErrorDialog_ClickDelegate_TypeInfo, v8);
    sub_1B00CCC(&System_Convert_TypeInfo, v9);
    sub_1B00CCC(&DataManager_TypeInfo, v10);
    sub_1B00CCC(&System_DateTime_TypeInfo, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v20);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v21);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v22);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v23);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v24);
    sub_1B00CCC(&Method_JsonManager_DeserializeArray_ResponseData___, v25);
    sub_1B00CCC(&JsonManager_TypeInfo, v26);
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v27);
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v28);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v29);
    sub_1B00CCC(&ManagementManager_TypeInfo, v30);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v31);
    sub_1B00CCC(&Method_NetworkManager_OnClickErrorDialog__, v32);
    sub_1B00CCC(&Method_NetworkManager_OnClickErrorReboot__, v33);
    sub_1B00CCC(&Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__, v34);
    sub_1B00CCC(&Method_NetworkManager_OnClickErrorRetryDialog__, v35);
    sub_1B00CCC(&Method_NetworkManager_OnClickErrorStay__, v36);
    sub_1B00CCC(&Method_NetworkManager_OnClickErrorTerminal__, v37);
    sub_1B00CCC(&Method_NetworkManager_OnClickRefreshTerminal__, v38);
    sub_1B00CCC(&Method_NetworkManager_OnClickReloadCache__, v39);
    sub_1B00CCC(&Method_NetworkManager_OnClickStore__, v40);
    sub_1B00CCC(&Method_NetworkManager_OnClickUserDelete__, v41);
    sub_1B00CCC(&Method_NetworkManager__RequestCR_b__213_0__, v42);
    sub_1B00CCC(&NetworkManager_TypeInfo, v43);
    sub_1B00CCC(&PurchaseByBank_UnityIap_Request_TypeInfo, v44);
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v45);
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, v46);
    sub_1B00CCC(&ResponseFailData_TypeInfo, v47);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v48);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v50);
    sub_1B00CCC(&string___TypeInfo, v51);
    sub_1B00CCC(&TitleRootComponent_TypeInfo, v52);
    sub_1B00CCC(&TopGameDataRequest_TypeInfo, v53);
    sub_1B00CCC(&TopLoginRequest_TypeInfo, v54);
    sub_1B00CCC(&Method_NetworkManager___c__RequestCR_b__213_1__, v55);
    sub_1B00CCC(&NetworkManager___c_TypeInfo, v56);
    sub_1B00CCC(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v57);
    sub_1B00CCC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v58);
    sub_1B00CCC(&UnityEngine_WaitForSeconds_TypeInfo, v59);
    sub_1B00CCC(&StringLiteral_43/*"\n"*/, v60);
    sub_1B00CCC(&StringLiteral_15465/*"X-SERVER-TIME"*/, v61);
    sub_1B00CCC(&StringLiteral_18223/*"data_update"*/, v62);
    sub_1B00CCC(&StringLiteral_9127/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/, v63);
    sub_1B00CCC(&StringLiteral_20459/*"invalid_battle"*/, v64);
    sub_1B00CCC(&StringLiteral_22539/*"reload_cache"*/, v65);
    sub_1B00CCC(&StringLiteral_7087/*"HTTP"*/, v66);
    sub_1B00CCC(&StringLiteral_1491/*"400"*/, v67);
    sub_1B00CCC(&StringLiteral_22589/*"result"*/, v68);
    sub_1B00CCC(&StringLiteral_9126/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/, v69);
    sub_1B00CCC(&StringLiteral_19560/*"goto_login_access"*/, v70);
    sub_1B00CCC(&StringLiteral_20417/*"internal server error"*/, v71);
    sub_1B00CCC(&StringLiteral_22581/*"response error "*/, v72);
    sub_1B00CCC(&StringLiteral_22580/*"response"*/, v73);
    sub_1B00CCC(&StringLiteral_23188/*"stay"*/, v74);
    sub_1B00CCC(&StringLiteral_1493/*"401"*/, v75);
    sub_1B00CCC(&StringLiteral_9115/*"NETWORK_ERROR_BOOT_MESSAGE"*/, v76);
    sub_1B00CCC(&StringLiteral_7586/*"Internal Server Error"*/, v77);
    sub_1B00CCC(&StringLiteral_14987/*"User-Agent"*/, v78);
    sub_1B00CCC(&StringLiteral_22599/*"retry"*/, v79);
    sub_1B00CCC(&StringLiteral_9130/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/, v80);
    sub_1B00CCC(&StringLiteral_9128/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/, v81);
    sub_1B00CCC(&StringLiteral_16798/*"background cancel"*/, v82);
    sub_1B00CCC(&StringLiteral_1504/*"500"*/, v83);
    sub_1B00CCC(&StringLiteral_9119/*"NETWORK_ERROR_CSID_CODE"*/, v84);
    sub_1B00CCC(&StringLiteral_22582/*"response execute error "*/, v85);
    sub_1B00CCC(&StringLiteral_17487/*"canceled_purchase_error"*/, v86);
    sub_1B00CCC(&StringLiteral_1506/*"502"*/, v87);
    sub_1B00CCC(&StringLiteral_1508/*"503"*/, v88);
    sub_1B00CCC(&StringLiteral_4705/*"Cookie"*/, v89);
    sub_1B00CCC(&StringLiteral_9134/*"NETWORK_USER_DELETE_DECIDE"*/, v90);
    sub_1B00CCC(&StringLiteral_20460/*"invalid_user"*/, v91);
    sub_1B00CCC(&StringLiteral_9116/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, v92);
    sub_1B00CCC(&StringLiteral_16580/*"app_version_up"*/, v93);
    sub_1B00CCC(&StringLiteral_1869/*"?"*/, v94);
    sub_1B00CCC(&StringLiteral_9129/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/, v95);
    sub_1B00CCC(&StringLiteral_21813/*"none data"*/, v96);
    sub_1B00CCC(&StringLiteral_9118/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, v97);
    sub_1B00CCC(&StringLiteral_22177/*"path="*/, v98);
    sub_1B00CCC(&StringLiteral_16736/*"authCode"*/, v99);
    sub_1B00CCC(&StringLiteral_532/*"&"*/, v100);
    sub_1B00CCC(&StringLiteral_22520/*"refresh_terminal"*/, v101);
    sub_1B00CCC(&StringLiteral_19561/*"goto_title"*/, v102);
    sub_1B00CCC(&StringLiteral_3715/*"COMMON_CONFIRM_CLOSE"*/, v103);
    sub_1B00CCC(&StringLiteral_1575/*";"*/, v104);
    sub_1B00CCC(&StringLiteral_17960/*"connect time over"*/, v105);
    sub_1B00CCC(&StringLiteral_22496/*"reconnection"*/, v106);
    sub_1B00CCC(&StringLiteral_12069/*"STATUS"*/, v107);
    sub_1B00CCC(&StringLiteral_16364/*"_userId="*/, v108);
    sub_1B00CCC(&StringLiteral_18405/*"do_signup"*/, v109);
    sub_1B00CCC(&StringLiteral_9133/*"NETWORK_USER_DELETE_CANCEL"*/, v110);
    sub_1B00CCC(&StringLiteral_17454/*"cache"*/, v111);
    sub_1B00CCC(&StringLiteral_811/*")"*/, v112);
    sub_1B00CCC(&StringLiteral_3719/*"COMMON_CONFIRM_RETRY"*/, v113);
    sub_1B00CCC(&StringLiteral_23199/*"stay_no_dialog"*/, v114);
    sub_1B00CCC(&StringLiteral_9131/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v115);
    sub_1B00CCC(&StringLiteral_1496/*"404"*/, v116);
    sub_1B00CCC(&StringLiteral_21814/*"none response data"*/, v117);
    sub_1B00CCC(&StringLiteral_20975/*"maint"*/, v118);
    sub_1B00CCC(&StringLiteral_22194/*"pending_purchase_error"*/, v119);
    sub_1B00CCC(&StringLiteral_138/*" ("*/, v120);
    sub_1B00CCC(&StringLiteral_1/*""*/, v121);
    sub_1B00CCC(&StringLiteral_9117/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, v122);
    sub_1B00CCC(&StringLiteral_11766/*"SET-COOKIE"*/, v123);
    sub_1B00CCC(&StringLiteral_1475/*"302"*/, v124);
    sub_1B00CCC(&StringLiteral_9132/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v125);
    this = (NetworkManager__RequestCR_d__213_o *)sub_1B00CCC(&StringLiteral_1460/*"200"*/, v126);
    byte_48E207A = 1;
  }
  authParams = 0LL;
  dateData = 0LL;
  memset(&v477, 0, sizeof(v477));
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
        goto LABEL_471;
      v131 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v132 = LocalizationManager__Get((System_String_o *)StringLiteral_9118/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
      v133 = LocalizationManager__Get((System_String_o *)StringLiteral_9117/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, 0LL);
      this = (NetworkManager__RequestCR_d__213_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9116/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, 0LL);
      v134 = v2->fields.work;
      if ( !v134 )
        goto LABEL_530;
      v135 = this;
      if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v134->klass->vtable._8_isBackgroundRequest.method)(
              v134,
              v134->klass->vtable._9_isShowConnect.methodPtr) & 1) != 0 )
      {
        v136 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(v136, (Il2CppObject *)_4__this, Method_NetworkManager__RequestCR_b__213_0__, 0LL);
        if ( _4__this )
        {
          NetworkManager__WarningDialog(_4__this, v131, v132, 0LL, 1, v136, 0LL);
          return 0;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v319 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v319,
          (Il2CppObject *)_4__this,
          Method_NetworkManager_OnClickErrorRetryDialog__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenRetryDialog_29936188(
            (CommonUI_o *)Instance,
            v131,
            v132,
            v133,
            (System_String_o *)v135,
            v319,
            0,
            0LL);
          return 0;
        }
      }
      goto LABEL_530;
    case 1:
      delay = v2->fields.delay;
      v2->fields.__1__state = -1;
      if ( delay <= 0.0 )
        goto LABEL_32;
      v151 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v151, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v151;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B00C70(p__2__current, (int32_t)v151, v153, v154);
      v155 = 2;
      goto LABEL_317;
    case 2:
      v2->fields.__1__state = -1;
LABEL_32:
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      dateData = System_DateTime__get_Now(0LL).fields._dateData;
      v480.fields._dateData = (uint64_t)&dateData;
      v156 = System_DateTime__ToUniversalTime(v480, 0LL).fields._dateData;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v481.fields._dateData = v156;
      v2->fields._startTime_5__8 = NetworkManager__getTime_37261288(v481, 0LL);
      v157 = v2->fields.work;
      if ( v157 )
      {
        methodPtr_low = LOBYTE(TopGameDataRequest_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v157->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TopGameDataRequest_c *)v157->klass->_2.typeHierarchy[methodPtr_low - 1] == TopGameDataRequest_TypeInfo )
        {
          LOBYTE(v157) = v157[1].klass;
        }
        else
        {
          LOBYTE(v157) = 0;
        }
      }
      v2->fields._isNoRedirect_5__9 = (char)v157;
      v159 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v159 = ManagerConfig_TypeInfo;
      }
      static_fields = v159->static_fields;
      if ( !static_fields->UseMock )
      {
        if ( v2->fields._data_5__2 )
          goto LABEL_132;
        this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
        if ( !this )
          goto LABEL_530;
        WWWForm = RequestBase__getWWWForm((RequestBase_o *)this, &authParams, 0LL);
        v174 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__string__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v174,
          (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
        if ( !WWWForm )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)UnityEngine_WWWForm__get_headers(WWWForm, 0LL);
        if ( !this )
          goto LABEL_530;
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v475,
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (const MethodInfo_308DE78 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
        v477 = v475;
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v477,
                  (const MethodInfo_318E0BC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
        {
          key = v477.fields._current.fields.key;
          v175 = v477.fields._current.fields.value;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v177 = (Il2CppObject *)System_Convert__ToString_60991320((System_String_o *)key, 0LL);
          v178 = (Il2CppObject *)System_Convert__ToString_60991320((System_String_o *)v175, 0LL);
          if ( !v174 )
            sub_1B00F28(v178, v179);
          System_Collections_Generic_Dictionary_object__object___Add(
            v174,
            v177,
            v178,
            (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v477,
          (const MethodInfo_318E1DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
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
          if ( !v174 )
            goto LABEL_530;
          System_Collections_Generic_Dictionary_object__object___Add(
            v174,
            (Il2CppObject *)StringLiteral_14987/*"User-Agent"*/,
            (Il2CppObject *)NetworkManager_TypeInfo->static_fields->userAgent,
            (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
          if ( !v174 )
            goto LABEL_530;
          System_Collections_Generic_Dictionary_object__object___Add(
            v174,
            (Il2CppObject *)StringLiteral_4705/*"Cookie"*/,
            (Il2CppObject *)NetworkManager_TypeInfo->static_fields->sessionId,
            (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
        }
        v263 = authParams;
        if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
          j_il2cpp_runtime_class_init_0(this);
        AuthCode = NetworkManager__GetAuthCode(v263, 0LL);
        if ( AuthCode )
          UnityEngine_WWWForm__AddField(WWWForm, (System_String_o *)StringLiteral_16736/*"authCode"*/, AuthCode, 0LL);
        this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
        if ( !this )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                       this,
                                                       this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
        v265 = NetworkManager_TypeInfo;
        v266 = (System_String_o *)this;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v265 = NetworkManager_TypeInfo;
        }
        if ( v265->static_fields->userId )
        {
          if ( !v266 )
            goto LABEL_530;
          v267 = System_String__IndexOf_60357184(v266, (System_String_o *)StringLiteral_1869/*"?"*/, 0LL);
          v268 = NetworkManager_TypeInfo;
          if ( v267 >= 0 )
            v269 = &StringLiteral_532/*"&"*/;
          else
            v269 = &StringLiteral_1869/*"?"*/;
          v270 = (System_String_o *)*v269;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v268 = NetworkManager_TypeInfo;
          }
          v266 = System_String__Concat_60339012(
                   v266,
                   v270,
                   (System_String_o *)StringLiteral_16364/*"_userId="*/,
                   v268->static_fields->userId,
                   0LL);
        }
        UnityEngine_WWWForm__get_data(WWWForm, 0LL);
        isNoRedirect_5__9 = v2->fields._isNoRedirect_5__9;
        v272 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B00F18(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
        DelightWorks_Network_UnityWebRequestWWW___ctor_35848332(
          v272,
          v266,
          WWWForm,
          (System_Collections_Generic_Dictionary_string__string__o *)v174,
          isNoRedirect_5__9,
          0LL);
        v2->fields._www_5__10 = v272;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._www_5__10, (int32_t)v272, v273, v274);
        v275 = v2->fields.work;
        if ( v275
          && (v276 = LOBYTE(TopGameDataRequest_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v275->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v276) )
        {
          if ( (TopGameDataRequest_c *)v275->klass->_2.typeHierarchy[v276 - 1] == TopGameDataRequest_TypeInfo )
            v277 = v2->fields.work;
          else
            v277 = 0LL;
        }
        else
        {
          v277 = 0LL;
        }
        v351 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v351 = ManagerConfig_TypeInfo;
        }
        v352 = 44LL;
        if ( !v277 )
          v352 = 40LL;
        v2->fields._timeout_5__11 = *(float *)((char *)&v351->static_fields->AppVer + v352);
        unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
        timeout_5__11 = v2->fields._timeout_5__11;
        v2->fields._loadProgress_5__13 = 0.0;
        v2->fields._requestTime_5__12 = unscaledTime + timeout_5__11;
        v355 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v355, 0LL);
        v2->fields._wait_5__14 = v355;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__14, (int32_t)v355, v356, v357);
LABEL_15:
        p_www_5__10 = &v2->fields._www_5__10;
        www_5__10 = v2->fields._www_5__10;
        if ( !www_5__10 )
          goto LABEL_530;
        if ( !www_5__10->fields._isDone_k__BackingField )
        {
          this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
          if ( !this )
            goto LABEL_530;
          this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                         this,
                                                         this->klass[1]._1.image);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_75;
          if ( !_4__this )
            goto LABEL_530;
          communicationWaitList = _4__this->fields.communicationWaitList;
          if ( !communicationWaitList )
            goto LABEL_530;
          if ( communicationWaitList->fields._size <= 0 )
          {
LABEL_75:
            if ( !*p_www_5__10 )
              goto LABEL_530;
            progress_k__BackingField = (*p_www_5__10)->fields._progress_k__BackingField;
            loadProgress_5__13 = v2->fields._loadProgress_5__13;
            v185 = UnityEngine_Time__get_unscaledTime(0LL);
            if ( progress_k__BackingField != loadProgress_5__13 )
            {
              v320 = v2->fields._www_5__10;
              v2->fields._requestTime_5__12 = v185 + v2->fields._timeout_5__11;
              if ( !v320 )
                goto LABEL_530;
              v2->fields._loadProgress_5__13 = v320->fields._progress_k__BackingField;
LABEL_316:
              wait_5__14 = (Il2CppObject *)v2->fields._wait_5__14;
              v2->fields.__2__current = wait_5__14;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B00C70(p__2__current, (int32_t)wait_5__14, v183, v184);
              v155 = 4;
              goto LABEL_317;
            }
            if ( v185 < v2->fields._requestTime_5__12 )
              goto LABEL_316;
          }
        }
        v139 = *p_www_5__10;
        if ( !*p_www_5__10 )
          goto LABEL_530;
        if ( !v139->fields._isDone_k__BackingField )
        {
          this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
          if ( !this )
            goto LABEL_530;
          this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                         this,
                                                         this->klass[1]._1.image);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_115;
          if ( !_4__this )
            goto LABEL_530;
          v188 = _4__this->fields.communicationWaitList;
          if ( !v188 )
            goto LABEL_530;
          if ( v188->fields._size >= 1 )
          {
            v189 = StringLiteral_16798/*"background cancel"*/;
            v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_16798/*"background cancel"*/;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, v189, v186, v187);
            v192 = &StringLiteral_23188/*"stay"*/;
          }
          else
          {
LABEL_115:
            v203 = StringLiteral_17960/*"connect time over"*/;
            v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_17960/*"connect time over"*/;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, v203, v186, v187);
            v192 = &StringLiteral_22599/*"retry"*/;
          }
          v204 = *v192;
          v2->fields._errorAction_5__5 = (struct System_String_o *)*v192;
          p_errorAction_5__5 = (ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5;
          goto LABEL_117;
        }
        this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(
                                                       v139->fields._error_k__BackingField,
                                                       0LL);
        v142 = *p_www_5__10;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v142 )
            goto LABEL_530;
          if ( v2->fields._isNoRedirect_5__9 )
          {
            DelightWorks_Network_UnityWebRequestWWW__Dispose(*p_www_5__10, 0LL);
          }
          else
          {
            text = DelightWorks_Network_UnityWebRequestWWW__get_text(*p_www_5__10, 0LL);
            v2->fields._data_5__2 = text;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._data_5__2, (int32_t)text, v323, v324);
            this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
            }
            if ( !this[1].fields.work[3].monitor )
            {
              v325 = v2->fields.work;
              if ( v325 )
              {
                v326 = LOBYTE(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(v325->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v326
                  && (TopLoginRequest_c *)v325->klass->_2.typeHierarchy[v326 - 1] == TopLoginRequest_TypeInfo )
                {
                  if ( !*p_www_5__10 )
                    goto LABEL_530;
                  this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                  if ( !this )
                    goto LABEL_530;
                  this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                 (const MethodInfo_308D718 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
                  if ( (int)this >= 1 )
                  {
                    if ( !*p_www_5__10 )
                      goto LABEL_530;
                    this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                    if ( !this )
                      goto LABEL_530;
                    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
                      &v475,
                      (System_Collections_Generic_Dictionary_object__object__o *)this,
                      (const MethodInfo_308DE78 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
                    v477 = v475;
                    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                              &v477,
                              (const MethodInfo_318E0BC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
                      ;
                    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                      &v477,
                      (const MethodInfo_318E1DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
                    if ( !*p_www_5__10 )
                      goto LABEL_530;
                    this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                    if ( !this )
                      goto LABEL_530;
                    this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                   (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                   (Il2CppObject *)StringLiteral_11766/*"SET-COOKIE"*/,
                                                                   (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      if ( !*p_www_5__10 )
                        goto LABEL_530;
                      this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                      if ( !this )
                        goto LABEL_530;
                      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                               (Il2CppObject *)StringLiteral_11766/*"SET-COOKIE"*/,
                               (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
                      this = (NetworkManager__RequestCR_d__213_o *)sub_1B00D74(char___TypeInfo, 2LL);
                      if ( !this )
                        goto LABEL_530;
                      _2__current = (int)this->fields.__2__current;
                      method = (const MethodInfo *)this;
                      if ( !_2__current )
                        goto LABEL_532;
                      LOWORD(this->fields.work) = 32;
                      if ( _2__current == 1 )
                        goto LABEL_532;
                      WORD1(this->fields.work) = 59;
                      if ( !Item )
                        goto LABEL_530;
                      v329 = System_String__Split_60348132((System_String_o *)Item, (System_Char_array *)this, 1, 0LL);
                      v332 = NetworkManager_TypeInfo;
                      v333 = v329;
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v332 = NetworkManager_TypeInfo;
                      }
                      v334 = v332->static_fields;
                      v335 = (int)StringLiteral_1/*""*/;
                      v334->sessionId = (struct System_String_o *)StringLiteral_1/*""*/;
                      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v334->sessionId, v335, v330, v331);
                      if ( !v333 )
                        goto LABEL_530;
                      max_length = v333->max_length;
                      if ( max_length >= 1 )
                      {
                        v337 = 0;
                        while ( v337 < max_length )
                        {
                          v338 = &v333->obj.klass + (int)v337;
                          v339 = (System_String_o *)v338[4];
                          if ( !v339 )
                            goto LABEL_530;
                          this = (NetworkManager__RequestCR_d__213_o *)System_String__StartsWith(
                                                                         (System_String_o *)v338[4],
                                                                         (System_String_o *)StringLiteral_22177/*"path="*/,
                                                                         0LL);
                          if ( ((unsigned __int8)this & 1) == 0 )
                          {
                            v340 = NetworkManager_TypeInfo;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              v340 = NetworkManager_TypeInfo;
                            }
                            v341 = System_String__Concat_60337008(
                                     v340->static_fields->sessionId,
                                     v339,
                                     (System_String_o *)StringLiteral_1575/*";"*/,
                                     0LL);
                            v342 = NetworkManager_TypeInfo->static_fields;
                            v342->sessionId = v341;
                            sub_1B00C70(
                              (ServantStatusBattleListViewItem_o *)&v342->sessionId,
                              (int32_t)v341,
                              v343,
                              v344);
                            max_length = v333->max_length;
                            if ( (int)++v337 < max_length )
                              continue;
                          }
                          goto LABEL_118;
                        }
                        goto LABEL_532;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_118;
        }
        if ( !v142 )
          goto LABEL_530;
        error_k__BackingField = v142->fields._error_k__BackingField;
        v2->fields._errorCode_5__3 = error_k__BackingField;
        sub_1B00C70(
          (ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3,
          (int32_t)error_k__BackingField,
          v140,
          v141);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( NetworkManager__get_UserId(0LL) >= 1 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( NetworkManager__get_UserId(0LL) % 10 == 1 )
          {
            this = (NetworkManager__RequestCR_d__213_o *)*p_www_5__10;
            if ( !*p_www_5__10 )
              goto LABEL_530;
            DelightWorks_Network_UnityWebRequestWWW__ExceptionLog(
              (DelightWorks_Network_UnityWebRequestWWW_o *)this,
              0LL);
          }
        }
        v196 = StringLiteral_22599/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22599/*"retry"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v196, v194, v195);
        v197 = v2->fields._www_5__10;
        if ( !v197 )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)v197->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                       (const MethodInfo_308D718 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
        if ( (int)this < 1 )
          goto LABEL_118;
        if ( !*p_www_5__10 )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                       (Il2CppObject *)StringLiteral_12069/*"STATUS"*/,
                                                       (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_118;
        if ( !*p_www_5__10 )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_530;
        v198 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)StringLiteral_12069/*"STATUS"*/,
                 (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        this = (NetworkManager__RequestCR_d__213_o *)sub_1B00D74(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_530;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_532;
        LOWORD(this->fields.work) = 32;
        if ( !v198 )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)System_String__Split_60348132(
                                                       (System_String_o *)v198,
                                                       (System_Char_array *)this,
                                                       1,
                                                       0LL);
        if ( !this )
          goto LABEL_530;
        v199 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_118;
        this = (NetworkManager__RequestCR_d__213_o *)this->fields.work;
        if ( !this )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)System_String__StartsWith(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_7087/*"HTTP"*/,
                                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_118;
        if ( LODWORD(v199->fields.__2__current) <= 1 )
          goto LABEL_532;
        v200 = (System_String_o *)v199->fields.__4__this;
        v201 = PrivateImplementationDetails___ComputeStringHash(v200, 0LL);
        if ( v201 > 0x434FEE0C )
        {
          if ( v201 <= 0xAA3008DB )
          {
            if ( v201 == -1456470200 )
            {
              if ( !System_String__op_Equality(v200, (System_String_o *)StringLiteral_1493/*"401"*/, 0LL) )
                goto LABEL_525;
              v464 = &StringLiteral_9126/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/;
            }
            else
            {
              if ( v201 != -1439692581 || !System_String__op_Equality(v200, (System_String_o *)StringLiteral_1491/*"400"*/, 0LL) )
                goto LABEL_525;
              v464 = &StringLiteral_9131/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/;
            }
            v471 = *v464;
            v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v464;
            p_errorLocalizeCode_5__4 = &v2->fields._errorLocalizeCode_5__4;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v471, v190, v191);
            v204 = StringLiteral_19561/*"goto_title"*/;
LABEL_527:
            p_errorLocalizeCode_5__4[1] = (struct System_String_o *)v204;
            p_errorAction_5__5 = (ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5;
            goto LABEL_117;
          }
          if ( v201 == -1372582105 )
          {
            if ( System_String__op_Equality(v200, (System_String_o *)StringLiteral_1496/*"404"*/, 0LL) )
            {
              v473 = &StringLiteral_9130/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/;
              goto LABEL_526;
            }
            goto LABEL_525;
          }
          if ( v201 != -1008248995 )
            goto LABEL_525;
          v466 = &StringLiteral_1460/*"200"*/;
        }
        else
        {
          if ( v201 <= 0x2D98A5D6 )
          {
            if ( v201 == 731423408 )
            {
              v202 = &StringLiteral_1504/*"500"*/;
              goto LABEL_524;
            }
            if ( v201 == 764978646 )
            {
              v202 = &StringLiteral_1506/*"502"*/;
LABEL_524:
              System_String__op_Equality(v200, (System_String_o *)*v202, 0LL);
            }
LABEL_525:
            v473 = &StringLiteral_9127/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
LABEL_526:
            v474 = *v473;
            v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v473;
            p_errorLocalizeCode_5__4 = &v2->fields._errorLocalizeCode_5__4;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v474, v190, v191);
            v204 = StringLiteral_22599/*"retry"*/;
            goto LABEL_527;
          }
          if ( v201 == 781756265 )
          {
            v202 = &StringLiteral_1508/*"503"*/;
            goto LABEL_524;
          }
          if ( v201 != 1129311756 )
            goto LABEL_525;
          v466 = &StringLiteral_1475/*"302"*/;
        }
        if ( System_String__op_Equality(v200, (System_String_o *)*v466, 0LL) )
        {
          p_errorAction_5__5 = (ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3;
          LODWORD(v204) = 0;
          v2->fields._errorCode_5__3 = 0LL;
LABEL_117:
          sub_1B00C70(p_errorAction_5__5, v204, v190, v191);
LABEL_118:
          if ( !*p_www_5__10 )
            goto LABEL_530;
          responseHeaders_k__BackingField = (System_Collections_Generic_Dictionary_object__object__o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
          if ( responseHeaders_k__BackingField )
          {
            this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                           responseHeaders_k__BackingField,
                                                           (const MethodInfo_308D718 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
            if ( (int)this >= 1 )
            {
              if ( !*p_www_5__10 )
                goto LABEL_530;
              this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
              if ( !this )
                goto LABEL_530;
              this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             (Il2CppObject *)StringLiteral_15465/*"X-SERVER-TIME"*/,
                                                             (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !*p_www_5__10 )
                  goto LABEL_530;
                this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                if ( !this )
                  goto LABEL_530;
                this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                               (Il2CppObject *)StringLiteral_15465/*"X-SERVER-TIME"*/,
                                                               (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
                if ( !this )
                  goto LABEL_530;
                v207 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                            this,
                                            this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                v208 = System_Int64__Parse(v207, 0LL);
                v209 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v209 = NetworkManager_TypeInfo;
                }
                v210 = v209->static_fields;
                v210->serverTime = v208;
                startTime_5__8 = v2->fields._startTime_5__8;
                v210->nowTime = -1LL;
                v210->serverOffsetTime = v208 - startTime_5__8;
              }
            }
          }
          this = (NetworkManager__RequestCR_d__213_o *)*p_www_5__10;
          if ( !*p_www_5__10 )
            goto LABEL_530;
          DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
          v2->fields._www_5__10 = 0LL;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._www_5__10, 0, v212, v213);
          v2->fields._wait_5__14 = 0LL;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__14, 0, v214, v215);
          goto LABEL_132;
        }
        goto LABEL_525;
      }
      if ( !v159->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v159);
        static_fields = ManagerConfig_TypeInfo->static_fields;
      }
      if ( static_fields->IsNetworkMock )
      {
        this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
        if ( !this )
          goto LABEL_530;
        v161 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                 this,
                 this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        if ( v161 )
        {
          v162 = (System_String_o *)v161;
          v163 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B00F18(DelightWorks_Network_UnityWebRequestWWW_TypeInfo);
          DelightWorks_Network_UnityWebRequestWWW___ctor(v163, v162, 0LL);
          v2->fields._www_5__10 = v163;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._www_5__10, (int32_t)v163, v164, v165);
          v166 = (Il2CppObject *)v2->fields._www_5__10;
          v2->fields.__2__current = v166;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B00C70(p__2__current, (int32_t)v166, v167, v168);
          v155 = 3;
LABEL_317:
          *(_DWORD *)&p__2__current[-1].fields.isMine = v155;
          return 1;
        }
      }
LABEL_49:
      p_data_5__2 = &v2->fields._data_5__2;
      if ( !v2->fields._data_5__2 )
      {
        this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
        if ( !this )
          goto LABEL_530;
        v170 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                 this,
                 this->klass->vtable._6_MoveNext.methodPtr);
        *p_data_5__2 = (System_String_o *)v170;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._data_5__2, v170, v171, v172);
        if ( System_String__op_Equality(*p_data_5__2, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
        {
          this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
          if ( !this )
            goto LABEL_530;
          this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                         this,
                                                         this->klass[1]._1.image);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
            if ( !this )
              goto LABEL_530;
            this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, const char *))this->klass[1]._1.gc_desc)(
                                                           this,
                                                           this->klass[1]._1.name);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !this )
                goto LABEL_530;
              CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
            }
          }
          if ( _4__this )
          {
            NetworkManager__OnEndCommunication(_4__this, v2->fields.work, 0LL, 0LL);
            return 0;
          }
          goto LABEL_530;
        }
      }
LABEL_132:
      p_errorCode_5__3 = &v2->fields._errorCode_5__3;
      if ( v2->fields._errorCode_5__3 )
        goto LABEL_139;
      if ( System_String__IsNullOrEmpty(v2->fields._data_5__2, 0LL) )
      {
        v219 = StringLiteral_21813/*"none data"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_21813/*"none data"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, v219, v217, v218);
        v220 = StringLiteral_9129/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9129/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v220, v221, v222);
        v223 = StringLiteral_19561/*"goto_title"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_19561/*"goto_title"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v223, v224, v225);
        if ( v2->fields._isNoRedirect_5__9 )
        {
          v228 = (ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3;
          v229 = 0;
          *p_errorCode_5__3 = 0LL;
LABEL_138:
          sub_1B00C70(v228, v229, v226, v227);
        }
LABEL_139:
        v236 = 0;
        goto LABEL_140;
      }
      if ( System_String__op_Equality(v2->fields._data_5__2, (System_String_o *)StringLiteral_7586/*"Internal Server Error"*/, 0LL) )
      {
        v232 = StringLiteral_20417/*"internal server error"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_20417/*"internal server error"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, v232, v230, v231);
        v233 = StringLiteral_9127/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9127/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v233, v234, v235);
        v229 = StringLiteral_22599/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22599/*"retry"*/;
        v228 = (ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5;
        goto LABEL_138;
      }
      data_5__2 = v2->fields._data_5__2;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      this = (NetworkManager__RequestCR_d__213_o *)JsonManager__getDictionary(data_5__2, 0LL);
      if ( !this )
        goto LABEL_530;
      v250 = this;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_22580/*"response"*/,
              (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v306 = StringLiteral_21814/*"none response data"*/;
        v2->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_21814/*"none response data"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, v306, v251, v252);
        v307 = StringLiteral_9127/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v2->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9127/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v307, v308, v309);
        v310 = StringLiteral_22599/*"retry"*/;
        v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22599/*"retry"*/;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v310, v311, v312);
LABEL_298:
        v236 = 0;
        goto LABEL_299;
      }
      v253 = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v250,
               (Il2CppObject *)StringLiteral_22580/*"response"*/,
               (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v254 = JsonManager__DeserializeArray_object_(
               v253,
               (const MethodInfo_2DB84AC *)Method_JsonManager_DeserializeArray_ResponseData___);
      v2->fields._responseList_5__7 = (struct ResponseData_array *)v254;
      p_responseList_5__7 = &v2->fields._responseList_5__7;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._responseList_5__7, (int32_t)v254, v256, v257);
      responseList_5__7 = v2->fields._responseList_5__7;
      if ( !responseList_5__7 )
        goto LABEL_530;
      v259 = 0LL;
      while ( 1 )
      {
        v260 = responseList_5__7->max_length;
        if ( (int)v259 >= v260 )
          goto LABEL_298;
        if ( (unsigned int)v259 >= v260 )
          goto LABEL_532;
        v261 = &responseList_5__7->obj.klass + v259;
        v262 = (ResponseData_o *)v261[4];
        if ( !v262 )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)ResponseData__checkError_39752340((ResponseData_o *)v261[4], 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        responseList_5__7 = *p_responseList_5__7;
        ++v259;
        if ( !*p_responseList_5__7 )
          goto LABEL_530;
      }
      this = (NetworkManager__RequestCR_d__213_o *)sub_1B00D74(string___TypeInfo, 5LL);
      if ( !this )
        goto LABEL_530;
      v360 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_532;
      v361 = StringLiteral_22581/*"response error "*/;
      this->fields.work = (struct RequestBase_o *)StringLiteral_22581/*"response error "*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.work, v361, v358, v359);
      if ( LODWORD(v360->fields.__2__current) <= 1 )
        goto LABEL_532;
      nid = (struct NetworkManager_o *)v262->fields.nid;
      v360->fields.__4__this = nid;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v360->fields.__4__this, (int32_t)nid, v362, v363);
      if ( LODWORD(v360->fields.__2__current) <= 2
        || (v367 = StringLiteral_138/*" ("*/,
            *(_QWORD *)&v360->fields.delay = StringLiteral_138/*" ("*/,
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v360->fields.delay, v367, v365, v366),
            LODWORD(v360->fields.__2__current) <= 3)
        || (resCode = v262->fields.resCode,
            v360->fields._data_5__2 = resCode,
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v360->fields._data_5__2, (int32_t)resCode, v368, v369),
            LODWORD(v360->fields.__2__current) <= 4) )
      {
LABEL_532:
        sub_1B00F30(this, method);
      }
      v373 = StringLiteral_811/*")"*/;
      v360->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_811/*")"*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v360->fields._errorCode_5__3, v373, v371, v372);
      v374 = System_String__Concat_60339276((System_String_array *)v360, 0LL);
      v2->fields._errorCode_5__3 = v374;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, (int32_t)v374, v375, v376);
      v377 = (ResponseFailData_o *)sub_1B00F18(ResponseFailData_TypeInfo);
      ResponseFailData___ctor(v377, v262, 0LL);
      v2->fields._failData_5__6 = v377;
      p_failData_5__6 = &v2->fields._failData_5__6;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._failData_5__6, (int32_t)v377, v379, v380);
      if ( !v2->fields._failData_5__6 )
        goto LABEL_530;
      this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(
                                                     v2->fields._failData_5__6->fields.action,
                                                     0LL);
      p_action = &StringLiteral_22599/*"retry"*/;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !*p_failData_5__6 )
          goto LABEL_530;
        p_action = (__int64 *)&(*p_failData_5__6)->fields.action;
      }
      v384 = *p_action;
      v2->fields._errorAction_5__5 = (struct System_String_o *)*p_action;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v384, v381, v382);
      v385 = v2->fields.work;
      if ( !v385 )
        goto LABEL_298;
      v386 = PurchaseByBank_UnityIap_Request_TypeInfo;
      v387 = LOBYTE(PurchaseByBank_UnityIap_Request_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v385->klass->vtable._0_Equals.methodPtr) < (unsigned int)v387
        || (PurchaseByBank_UnityIap_Request_c *)v385->klass->_2.typeHierarchy[v387 - 1] != PurchaseByBank_UnityIap_Request_TypeInfo )
      {
        v236 = 0;
        goto LABEL_391;
      }
      if ( !*p_failData_5__6 )
        goto LABEL_530;
      v465 = System_String__op_Equality((*p_failData_5__6)->fields.action, (System_String_o *)StringLiteral_22599/*"retry"*/, 0LL);
      v385 = v2->fields.work;
      v236 = v465;
      if ( v385 )
      {
        v386 = PurchaseByBank_UnityIap_Request_TypeInfo;
LABEL_391:
        klass = v385->klass;
        v389 = LOBYTE(v386->vtable._0_Equals.methodPtr);
        if ( LOBYTE(klass->vtable._0_Equals.methodPtr) >= (unsigned int)v389
          && (PurchaseByBank_UnityIap_Request_c *)klass->_2.typeHierarchy[v389 - 1] == v386 )
        {
          v390 = *p_responseList_5__7;
          if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
          v391 = ResponseCommandKind__SearchData(11, v390, 0LL);
          if ( v391 )
          {
            fail = (System_Collections_Generic_Dictionary_object__object__o *)v391->fields.fail;
            if ( fail )
            {
              if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
                     fail,
                     (Il2CppObject *)StringLiteral_22589/*"result"*/,
                     &value,
                     (const MethodInfo_308F254 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
              {
                this = (NetworkManager__RequestCR_d__213_o *)value;
                if ( !value )
                  goto LABEL_530;
                v393 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                            value,
                                            value->klass->vtable[4].methodPtr);
                if ( System_String__op_Equality(v393, (System_String_o *)StringLiteral_22194/*"pending_purchase_error"*/, 0LL)
                  || System_String__op_Equality(v393, (System_String_o *)StringLiteral_17487/*"canceled_purchase_error"*/, 0LL) )
                {
                  v396 = StringLiteral_23199/*"stay_no_dialog"*/;
                  v2->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_23199/*"stay_no_dialog"*/;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v396, v394, v395);
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
                                                     (System_Collections_Generic_Dictionary_object__object__o *)v250,
                                                     (Il2CppObject *)StringLiteral_17454/*"cache"*/,
                                                     (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v313 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)v250,
                                                       (Il2CppObject *)StringLiteral_17454/*"cache"*/,
                                                       (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v313 )
          goto LABEL_530;
        DataManager__updateJsonData((DataManager_o *)v313, (Il2CppObject *)this, 0LL);
      }
      v314 = v2->fields._responseList_5__7;
      if ( !v314 )
        goto LABEL_530;
      v315 = 0LL;
      while ( 1 )
      {
        v316 = v314->max_length;
        if ( (__int64)v315 >= (int)v316 )
          goto LABEL_140;
        if ( v315 >= v316 )
          goto LABEL_532;
        v317 = v314->m_Items[v315];
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (NetworkManager__RequestCR_d__213_o *)NetworkManager__ExecuteCommand(v317, 0LL);
        if ( (_DWORD)this )
          break;
        v314 = v2->fields._responseList_5__7;
        ++v315;
        if ( !v314 )
          goto LABEL_530;
      }
      if ( !v317 )
        goto LABEL_530;
      v428 = System_String__Concat_60325748((System_String_o *)StringLiteral_22582/*"response execute error "*/, v317->fields.nid, 0LL);
      v2->fields._errorCode_5__3 = v428;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, (int32_t)v428, v429, v430);
      v431 = (ResponseFailData_o *)sub_1B00F18(ResponseFailData_TypeInfo);
      ResponseFailData___ctor(v431, v317, 0LL);
      v2->fields._failData_5__6 = v431;
      v432 = &v2->fields._failData_5__6;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._failData_5__6, (int32_t)v431, v433, v434);
      if ( !v2->fields._failData_5__6 )
LABEL_530:
        sub_1B00F28(this, method);
      this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(
                                                     v2->fields._failData_5__6->fields.action,
                                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v437 = &StringLiteral_22599/*"retry"*/;
      }
      else
      {
        if ( !*v432 )
          goto LABEL_530;
        v437 = (__int64 *)&(*v432)->fields.action;
      }
      v439 = *v437;
      v2->fields._errorAction_5__5 = (struct System_String_o *)*v437;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, v439, v435, v436);
LABEL_140:
      this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
      if ( !this )
        goto LABEL_530;
      this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                     this,
                                                     this->klass[1]._1.image);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
        if ( !this )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, const char *))this->klass[1]._1.gc_desc)(
                                                       this,
                                                       this->klass[1]._1.name);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_530;
          CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
        }
      }
      if ( !*p_errorCode_5__3 )
      {
        if ( !_4__this )
          goto LABEL_530;
        NetworkManager__OnEndCommunication(_4__this, v2->fields.work, v2->fields._responseList_5__7, 0LL);
        goto LABEL_478;
      }
      method = (const MethodInfo *)v2->fields._responseList_5__7;
      if ( !_4__this )
        goto LABEL_530;
      _4__this->fields.communicationWorkResponseList = (struct ResponseData_array *)method;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationWorkResponseList,
        (int32_t)method,
        v237,
        v238);
      v2->fields._responseList_5__7 = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._responseList_5__7, 0, v239, v240);
      v241 = &v2->fields._errorLocalizeCode_5__4;
      errorLocalizeCode_5__4 = v2->fields._errorLocalizeCode_5__4;
      if ( !errorLocalizeCode_5__4 )
      {
        errorAction_5__5 = v2->fields._errorAction_5__5;
        if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23188/*"stay"*/, 0LL)
          || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23199/*"stay_no_dialog"*/, 0LL) )
        {
          v248 = &StringLiteral_9128/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/;
        }
        else
        {
          if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22599/*"retry"*/, 0LL)
            || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22539/*"reload_cache"*/, 0LL) )
          {
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            if ( !byte_48E18EA )
            {
              sub_1B00CCC(&ManagementManager_TypeInfo, v278);
              byte_48E18EA = 1;
            }
            v279 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v279 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v279->static_fields->isDuringStartup;
            v281 = &StringLiteral_9132/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/;
            v282 = &StringLiteral_9118/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/;
          }
          else
          {
            if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_19560/*"goto_login_access"*/, 0LL)
              || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22520/*"refresh_terminal"*/, 0LL) )
            {
LABEL_215:
              errorLocalizeCode_5__4 = *v241;
              title = (System_String_o *)StringLiteral_1/*""*/;
              detail = (System_String_o *)StringLiteral_1/*""*/;
              if ( !errorLocalizeCode_5__4 )
                goto LABEL_219;
              goto LABEL_216;
            }
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            if ( !byte_48E18EA )
            {
              sub_1B00CCC(&ManagementManager_TypeInfo, method);
              byte_48E18EA = 1;
            }
            v438 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v438 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v438->static_fields->isDuringStartup;
            v281 = &StringLiteral_9129/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
            v282 = (__int64 *)&StringLiteral_9115/*"NETWORK_ERROR_BOOT_MESSAGE"*/;
          }
          if ( isDuringStartup )
            v248 = v282;
          else
            v248 = v281;
        }
        v283 = *v248;
        *v241 = (System_String_o *)*v248;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, v283, v246, v247);
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
        v286 = v2->fields._failData_5__6;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v286 )
            goto LABEL_530;
        }
        else
        {
          if ( !v286 )
            goto LABEL_530;
          title = v286->fields.title;
        }
        this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(v286->fields.detail, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v288 = v2->fields._failData_5__6;
          if ( !v288 )
            goto LABEL_530;
          detail = v288->fields.detail;
        }
        this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(detail, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v289 = v2->fields._failData_5__6;
          if ( !v289 )
            goto LABEL_530;
          if ( v289->fields.csId )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__213_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9119/*"NETWORK_ERROR_CSID_CODE"*/,
                                                           0LL);
            v290 = v2->fields._failData_5__6;
            if ( !v290 )
              goto LABEL_530;
            v291 = System_String__Format((System_String_o *)this, (Il2CppObject *)v290->fields.csId, 0LL);
            this = (NetworkManager__RequestCR_d__213_o *)System_String__Concat_60337008(
                                                           detail,
                                                           (System_String_o *)StringLiteral_43/*"\n"*/,
                                                           v291,
                                                           0LL);
            detail = (System_String_o *)this;
          }
        }
        v292 = v2->fields._failData_5__6;
        if ( !v292 )
          goto LABEL_530;
        url = v292->fields.url;
      }
      else
      {
        url = 0LL;
      }
      this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
      if ( !this )
        goto LABEL_530;
      if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
              this,
              this->klass[1]._1.image) & 1) == 0
        || (v293 = v2->fields._errorAction_5__5,
            !System_String__op_Equality(v293, (System_String_o *)StringLiteral_23188/*"stay"*/, 0LL))
        && !System_String__op_Equality(v293, (System_String_o *)StringLiteral_23199/*"stay_no_dialog"*/, 0LL)
        && !System_String__op_Equality(v293, (System_String_o *)StringLiteral_22599/*"retry"*/, 0LL)
        && !System_String__op_Equality(v293, (System_String_o *)StringLiteral_22539/*"reload_cache"*/, 0LL)
        || (v294 = NetworkManager__OnBackgroundErrorCommunication(
                     _4__this,
                     _4__this->fields.communicationWork,
                     *p_errorCode_5__3,
                     0,
                     0LL),
            result = 0,
            !v294) )
      {
        v296 = v2->fields._errorAction_5__5;
        v297 = PrivateImplementationDetails___ComputeStringHash(v296, 0LL);
        if ( v297 <= 0xA56F89EB )
        {
          if ( v297 <= 0x43CDBBC3 )
          {
            if ( v297 != 1019014393 )
            {
              if ( v297 == 1062826843 )
              {
                if ( System_String__op_Equality(v296, (System_String_o *)StringLiteral_19561/*"goto_title"*/, 0LL) )
                {
                  v345 = NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    v345 = NetworkManager_TypeInfo;
                  }
                  v345->static_fields->isRebootBlock = 1;
                  v346 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
                  System_Action___ctor(v346, (Il2CppObject *)_4__this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
                  NetworkManager__ErrorDialog(_4__this, title, detail, url, v346, 0LL);
                  goto LABEL_470;
                }
              }
              else if ( v297 == 1137556419
                     && System_String__op_Equality(v296, (System_String_o *)StringLiteral_23199/*"stay_no_dialog"*/, 0LL) )
              {
                NetworkManager__OnClickErrorStay(_4__this, 0LL);
                goto LABEL_470;
              }
              goto LABEL_445;
            }
            this = (NetworkManager__RequestCR_d__213_o *)System_String__op_Equality(
                                                           v296,
                                                           (System_String_o *)StringLiteral_22539/*"reload_cache"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v347 = v2->fields._failData_5__6;
              if ( !v347 )
                goto LABEL_530;
              errorType = v347->fields.errorType;
              v348 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
              v349 = &Method_NetworkManager_OnClickReloadCache__;
              goto LABEL_469;
            }
            goto LABEL_445;
          }
          if ( v297 <= 0x9918C6CA )
          {
            if ( v297 == -1726429494 )
            {
              if ( System_String__op_Equality(v296, (System_String_o *)StringLiteral_20460/*"invalid_user"*/, 0LL) )
              {
                v397 = TitleRootComponent_TypeInfo;
                if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
                  v397 = TitleRootComponent_TypeInfo;
                }
                if ( v397->static_fields->shouldFadeInOnError )
                {
                  v398 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v399 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v399 = AvalonSceneManager_TypeInfo;
                  }
                  this = (NetworkManager__RequestCR_d__213_o *)NetworkManager___c_TypeInfo;
                  DEFAULT_FADE_TIME = v399->static_fields->DEFAULT_FADE_TIME;
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
                    v402 = (Il2CppObject *)this[1].fields.work->klass;
                    monitor = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
                    System_Action___ctor(monitor, v402, Method_NetworkManager___c__RequestCR_b__213_1__, 0LL);
                    v403 = NetworkManager___c_TypeInfo->static_fields;
                    v403->__9__213_1 = monitor;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v403->__9__213_1, (int32_t)monitor, v404, v405);
                  }
                  if ( !v398 )
                    goto LABEL_530;
                  CommonUI__maskFadein((CommonUI_o *)v398, DEFAULT_FADE_TIME, monitor, 0LL);
                }
                v406 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v407 = LocalizationManager__Get((System_String_o *)StringLiteral_9134/*"NETWORK_USER_DELETE_DECIDE"*/, 0LL);
                v408 = LocalizationManager__Get((System_String_o *)StringLiteral_9133/*"NETWORK_USER_DELETE_CANCEL"*/, 0LL);
                v409 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B00F18(CommonConfirmDialog_ClickDelegate_TypeInfo);
                CommonConfirmDialog_ClickDelegate___ctor(
                  v409,
                  (Il2CppObject *)_4__this,
                  Method_NetworkManager_OnClickUserDelete__,
                  0LL);
                if ( !v406 )
                  goto LABEL_530;
                CommonUI__OpenConfirmDialog_29936704((CommonUI_o *)v406, title, detail, v407, v408, v409, 0, 0, 0, 0LL);
                goto LABEL_470;
              }
            }
            else if ( v297 == 2106643173
                   && System_String__op_Equality(v296, (System_String_o *)StringLiteral_22520/*"refresh_terminal"*/, 0LL) )
            {
              if ( !BattleData_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              BattleData__deleteSaveData(0LL);
              BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
              this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
              if ( !this )
                goto LABEL_530;
              ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)this, 0LL);
              this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(detail, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(url, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  NetworkManager__OnClickRefreshTerminal(_4__this, 0LL);
                  goto LABEL_470;
                }
              }
              v441 = v2->fields._failData_5__6;
              if ( !v441 )
                goto LABEL_530;
              errorType = v441->fields.errorType;
              v348 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
              v349 = &Method_NetworkManager_OnClickRefreshTerminal__;
              goto LABEL_469;
            }
            goto LABEL_445;
          }
          if ( v297 != -1577396083 )
          {
            if ( v297 == -1519416853 && System_String__op_Equality(v296, (System_String_o *)StringLiteral_19560/*"goto_login_access"*/, 0LL) )
            {
              v304 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v304 = NetworkManager_TypeInfo;
              }
              v304->static_fields->isRebootBlock = 1;
              this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(detail, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(url, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  NetworkManager__OnClickErrorTerminal(_4__this, 0LL);
                  goto LABEL_470;
                }
              }
              v440 = v2->fields._failData_5__6;
              if ( !v440 )
                goto LABEL_530;
              errorType = v440->fields.errorType;
              v348 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
              v349 = &Method_NetworkManager_OnClickErrorTerminal__;
              goto LABEL_469;
            }
            goto LABEL_445;
          }
          if ( !System_String__op_Equality(v296, (System_String_o *)StringLiteral_18405/*"do_signup"*/, 0LL) )
            goto LABEL_445;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          NetworkManager__DeleteSignupData(0LL);
          goto LABEL_439;
        }
        if ( v297 > 0xCC10A7C9 )
        {
          if ( v297 <= 0xDA79AAB9 )
          {
            if ( v297 == -809642680 )
            {
              this = (NetworkManager__RequestCR_d__213_o *)System_String__op_Equality(
                                                             v296,
                                                             (System_String_o *)StringLiteral_22496/*"reconnection"*/,
                                                             0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v410 = v2->fields._failData_5__6;
                if ( !v410 )
                  goto LABEL_530;
                sandboxDomain = v410->fields.sandboxDomain;
                sandboxSeurity = v410->fields.sandboxSeurity;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                NetworkManager__SetGameServerRedirect(sandboxDomain, sandboxSeurity, 0LL);
                v415 = v2->fields._failData_5__6;
                if ( !v415 )
                  goto LABEL_530;
                sandboxAssetsDomain = v415->fields.sandboxAssetsDomain;
                if ( !byte_48E21B9 )
                {
                  sub_1B00CCC(&NetworkManager_TypeInfo, method);
                  byte_48E21B9 = 1;
                }
                v417 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v417 = NetworkManager_TypeInfo;
                }
                v418 = v417->static_fields;
                v418->dataServerRedirectAddress = sandboxAssetsDomain;
                sub_1B00C70(
                  (ServantStatusBattleListViewItem_o *)&v418->dataServerRedirectAddress,
                  (int32_t)sandboxAssetsDomain,
                  v413,
                  v414);
                v421 = v2->fields._failData_5__6;
                if ( !v421 )
                  goto LABEL_530;
                sandboxWebviewDomain = v421->fields.sandboxWebviewDomain;
                if ( !byte_48E21BA )
                {
                  sub_1B00CCC(&NetworkManager_TypeInfo, method);
                  byte_48E21BA = 1;
                }
                v423 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v423 = NetworkManager_TypeInfo;
                }
                v424 = v423->static_fields;
                v424->webServerRedirectAddress = sandboxWebviewDomain;
                sub_1B00C70(
                  (ServantStatusBattleListViewItem_o *)&v424->webServerRedirectAddress,
                  (int32_t)sandboxWebviewDomain,
                  v419,
                  v420);
                NetworkManager__SetServerSetting_37239144(_4__this, 0LL);
                goto LABEL_470;
              }
            }
            else if ( v297 == -629560647
                   && System_String__op_Equality(v296, (System_String_o *)StringLiteral_22599/*"retry"*/, 0LL) )
            {
              this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
              if ( !this )
                goto LABEL_530;
              if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                      this,
                      this->klass[1]._1.declaringType) & 1) != 0 )
              {
                if ( NetworkManager__OnErrorCommunication(
                       _4__this,
                       _4__this->fields.communicationWork,
                       *p_errorCode_5__3,
                       0LL) )
                {
                  return 0;
                }
              }
              else
              {
                if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                if ( !byte_48E18EA )
                {
                  sub_1B00CCC(&ManagementManager_TypeInfo, v303);
                  byte_48E18EA = 1;
                }
                v460 = ManagementManager_TypeInfo;
                if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                  v460 = ManagementManager_TypeInfo;
                }
                v461 = v460->static_fields->isDuringStartup;
                v462 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( v461 )
                {
                  v463 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v463,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0LL);
                  if ( !v462 )
                    goto LABEL_530;
                  CommonUI__OpenRetryBootDialog((CommonUI_o *)v462, title, detail, v463, 0, 0LL);
                }
                else if ( v236 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v467 = LocalizationManager__Get((System_String_o *)StringLiteral_3719/*"COMMON_CONFIRM_RETRY"*/, 0LL);
                  v468 = LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
                  v469 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v469,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__,
                    0LL);
                  if ( !v462 )
                    goto LABEL_530;
                  CommonUI__OpenRetryDialog_29936188((CommonUI_o *)v462, title, detail, v467, v468, v469, 0, 0LL);
                }
                else
                {
                  v470 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
                  ErrorDialog_ClickDelegate___ctor(
                    v470,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0LL);
                  if ( !v462 )
                    goto LABEL_530;
                  CommonUI__OpenRetryDialog((CommonUI_o *)v462, title, detail, v470, 0, 0LL);
                }
              }
              goto LABEL_470;
            }
            goto LABEL_445;
          }
          if ( v297 == -258062273 )
          {
            if ( System_String__op_Equality(v296, (System_String_o *)StringLiteral_20459/*"invalid_battle"*/, 0LL) )
            {
              if ( !BattleData_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              BattleData__deleteSaveData(0LL);
              NetworkManager__OnEndCommunication(
                _4__this,
                _4__this->fields.communicationWork,
                _4__this->fields.communicationWorkResponseList,
                0LL);
              goto LABEL_470;
            }
            goto LABEL_445;
          }
          if ( v297 != -193734025 || !System_String__op_Equality(v296, (System_String_o *)StringLiteral_18223/*"data_update"*/, 0LL) )
            goto LABEL_445;
          v305 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v305 = NetworkManager_TypeInfo;
          }
          v305->static_fields->isRebootBlock = 1;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          DataManager__ClearCacheAll(0LL);
        }
        else
        {
          if ( v297 != -1105950412 )
          {
            if ( v297 != -969204192 )
            {
              if ( v297 == -871323703 && System_String__op_Equality(v296, (System_String_o *)StringLiteral_16580/*"app_version_up"*/, 0LL) )
              {
                if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                ManagementManager__RebootCacheClear(0LL);
                v300 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v300 = NetworkManager_TypeInfo;
                }
                v300->static_fields->isRebootBlock = 1;
                v301 = v2->fields._failData_5__6;
                if ( v301 )
                  errorType = v301->fields.errorType;
                else
                  errorType = 0;
                v348 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
                v349 = &Method_NetworkManager_OnClickStore__;
LABEL_469:
                v442 = v348;
                System_Action___ctor(v348, (Il2CppObject *)_4__this, *v349, 0LL);
                NetworkManager__WarningDialog(_4__this, title, detail, url, errorType, v442, 0LL);
                goto LABEL_470;
              }
LABEL_445:
              v426 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v427 = (ErrorDialog_ClickDelegate_o *)sub_1B00F18(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v427,
                (Il2CppObject *)_4__this,
                Method_NetworkManager_OnClickErrorDialog__,
                0LL);
              if ( !v426 )
                goto LABEL_530;
              CommonUI__OpenErrorDialog((CommonUI_o *)v426, title, detail, v427, 0, 0LL);
LABEL_470:
              v2->fields._responseList_5__7 = 0LL;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._responseList_5__7, 0, v298, v299);
              if ( System_String__op_Equality(v2->fields._errorAction_5__5, (System_String_o *)StringLiteral_22496/*"reconnection"*/, 0LL) )
              {
LABEL_471:
                v2->fields._data_5__2 = 0LL;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._data_5__2, 0, v129, v130);
                v2->fields._errorCode_5__3 = 0LL;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorCode_5__3, 0, v443, v444);
                v2->fields._errorLocalizeCode_5__4 = 0LL;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorLocalizeCode_5__4, 0, v445, v446);
                v2->fields._errorAction_5__5 = 0LL;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._errorAction_5__5, 0, v447, v448);
                v2->fields._failData_5__6 = 0LL;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._failData_5__6, 0, v449, v450);
                v2->fields._responseList_5__7 = 0LL;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._responseList_5__7, 0, v451, v452);
                this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
                if ( !this )
                  goto LABEL_530;
                if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                        this,
                        this->klass[1]._1.image) & 1) == 0 )
                {
                  this = (NetworkManager__RequestCR_d__213_o *)v2->fields.work;
                  if ( !this )
                    goto LABEL_530;
                  if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, const char *))this->klass[1]._1.gc_desc)(
                          this,
                          this->klass[1]._1.name) & 1) != 0 )
                  {
                    this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !this )
                      goto LABEL_530;
                    CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
                  }
                }
                v453 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v453, 0LL);
                v2->fields.__2__current = (Il2CppObject *)v453;
                v454 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
                sub_1B00C70(v454, (int32_t)v453, v455, v456);
                result = 1;
                *(_DWORD *)&v454[-1].fields.isMine = 1;
                return result;
              }
LABEL_478:
              v457 = (ServantStatusBattleListViewItem_c *)v2->fields._data_5__2;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_48E21BB )
              {
                sub_1B00CCC(&NetworkManager_TypeInfo, v244);
                byte_48E21BB = 1;
              }
              v458 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v458 = NetworkManager_TypeInfo;
              }
              p_errorDialogResponseData = (ServantStatusBattleListViewItem_o *)&v458->static_fields->errorDialogResponseData;
              p_errorDialogResponseData->klass = v457;
              sub_1B00C70(p_errorDialogResponseData, (int32_t)v457, v129, v130);
              return 0;
            }
            this = (NetworkManager__RequestCR_d__213_o *)System_String__op_Equality(
                                                           v296,
                                                           (System_String_o *)StringLiteral_23188/*"stay"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_445;
LABEL_439:
            v425 = v2->fields._failData_5__6;
            if ( !v425 )
              goto LABEL_530;
            errorType = v425->fields.errorType;
            v348 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
            v349 = &Method_NetworkManager_OnClickErrorStay__;
            goto LABEL_469;
          }
          if ( !System_String__op_Equality(v296, (System_String_o *)StringLiteral_20975/*"maint"*/, 0LL) )
            goto LABEL_445;
          if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          ManagementManager__RebootCacheClear(0LL);
          this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
          }
          LOBYTE(this[1].fields.work[3].fields.CallBack) = 1;
        }
        v350 = v2->fields._failData_5__6;
        if ( !v350 )
          goto LABEL_530;
        errorType = v350->fields.errorType;
        v348 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        v349 = &Method_NetworkManager_OnClickErrorReboot__;
        goto LABEL_469;
      }
      return result;
    case 3:
      v144 = (NetworkManager__RequestCR_d__213_o **)&v2->fields._www_5__10;
      v143 = v2->fields._www_5__10;
      v2->fields.__1__state = -1;
      if ( !v143 )
        goto LABEL_530;
      if ( !System_String__IsNullOrEmpty(v143->fields._error_k__BackingField, 0LL) )
        goto LABEL_28;
      this = *v144;
      if ( !*v144 )
        goto LABEL_530;
      v145 = DelightWorks_Network_UnityWebRequestWWW__get_text((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v2->fields._data_5__2 = v145;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._data_5__2, (int32_t)v145, v146, v147);
LABEL_28:
      this = *v144;
      if ( !*v144 )
        goto LABEL_530;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      *v144 = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields._www_5__10, 0, v148, v149);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_NetworkManager__RequestCR_d__213_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  NetworkManager_c *v5; // x0
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  bool result; // w0

  if ( (byte_48E207B & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_48E207B = 1;
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
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    p__2__current = &this->fields.__2__current;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v6, v8, v9);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_NetworkManager__TimeUpdate_d__81_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E2076 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager___c_TypeInfo, v1);
    byte_48E2076 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(NetworkManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  NetworkManager___c_TypeInfo->static_fields->__9 = (struct NetworkManager___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)NetworkManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall NetworkManager___c___ctor(NetworkManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NetworkManager___c___RequestCR_b__213_1(NetworkManager___c_o *this, const MethodInfo *method)
{
  TitleRootComponent_c *v2; // x0

  if ( (byte_48E2077 & 1) == 0 )
  {
    sub_1B00CCC(&TitleRootComponent_TypeInfo, method);
    byte_48E2077 = 1;
  }
  v2 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v2 = TitleRootComponent_TypeInfo;
  }
  v2->static_fields->shouldFadeInOnError = 0;
}