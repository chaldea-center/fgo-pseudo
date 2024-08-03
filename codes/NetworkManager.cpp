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
  __int64 v85; // x1
  __int64 v86; // x2
  System_Collections_Generic_Dictionary_object__object__o *v87; // x19
  ServantStatusBattleListViewItem_o *p_webViewAddress; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  int32_t v91; // w1
  ServantStatusBattleListViewItem_o *p_AUTHMD5_KEY_TYPE; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w1
  ServantStatusBattleListViewItem_o *p_errorDialogResponseData; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  __int64 v99; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v100; // 0:x0.8

  if ( (byte_49FBBCB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_14244/*"TheCheckKey"*/, v6);
    sub_1B640C8(&StringLiteral_19342/*"file://"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FBBCB = 1;
  }
  NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME = (struct System_String_o *)StringLiteral_19342/*"file://"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields, StringLiteral_19342/*"file://"*/, v2, v3);
  v100.fields._dateData = (uint64_t)&v99;
  NetworkManager_TypeInfo->static_fields->WebCacheTime = 300LL;
  v99 = 0LL;
  System_DateTime___ctor_62054212(v100, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  static_fields = (ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields;
  v10 = v99;
  static_fields->fields.sortValue1B = 0LL;
  static_fields = (ServantStatusBattleListViewItem_o *)((char *)static_fields + 64);
  *(_QWORD *)&static_fields[-1].fields.dispLimitCount.fields.currentCryptoKey = 0LL;
  *(_QWORD *)&static_fields[-1].fields.dispLimitCount.fields.fakeValue = 0LL;
  *(_QWORD *)&static_fields[-1].fields.svtId.fields.fakeValue = v10;
  static_fields[-1].fields.isEnabled = 0;
  static_fields[-1].fields.name = 0LL;
  *(_QWORD *)&static_fields[-1].fields.isMine = -1LL;
  sub_1B6406C(static_fields, 0, v11, v12);
  v13 = NetworkManager_TypeInfo->static_fields;
  v13->userCreateServer = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->userCreateServer, 0, v14, v15);
  v16 = NetworkManager_TypeInfo->static_fields;
  v16->userId = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->userId, 0, v17, v18);
  v19 = NetworkManager_TypeInfo->static_fields;
  v19->authKey = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->authKey, 0, v20, v21);
  v22 = NetworkManager_TypeInfo->static_fields;
  v22->secretKey = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->secretKey, 0, v23, v24);
  v25 = NetworkManager_TypeInfo->static_fields;
  v25->userName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->userName, 0, v26, v27);
  v28 = NetworkManager_TypeInfo->static_fields;
  v28->sessionId = 0LL;
  v28 = (struct NetworkManager_StaticFields *)((char *)v28 + 128);
  v28[-1].AUTHMD5_KEY_TYPE = 0LL;
  LODWORD(v28[-1].errorDialogResponseData) = 0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v28, 0, v29, v30);
  v31 = NetworkManager_TypeInfo->static_fields;
  v31->friendCode = 0LL;
  v31 = (struct NetworkManager_StaticFields *)((char *)v31 + 144);
  LOWORD(v31[-1].errorDialogResponseData) = 1;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v31, 0, v32, v33);
  v34 = NetworkManager_TypeInfo->static_fields;
  v34->registrationVersion = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->registrationVersion, 0, v35, v36);
  v37 = NetworkManager_TypeInfo->static_fields;
  v37->registrationId = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->registrationId, 0, v38, v39);
  v40 = (int)StringLiteral_1/*""*/;
  v41 = (ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields;
  v41[1].klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B6406C(v41 + 1, v40, v42, v43);
  v44 = NetworkManager_TypeInfo->static_fields;
  v44->serverSettingSecurity = 0;
  v45 = (int)StringLiteral_1/*""*/;
  v44->gameServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v44->gameServerSettingAddress, v45, v46, v47);
  v48 = (int)StringLiteral_1/*""*/;
  v49 = NetworkManager_TypeInfo->static_fields;
  v49->dataServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->dataServerSettingAddress, v48, v50, v51);
  v52 = (int)StringLiteral_1/*""*/;
  v53 = NetworkManager_TypeInfo->static_fields;
  v53->webServerSettingAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->webServerSettingAddress, v52, v54, v55);
  v56 = (int)StringLiteral_1/*""*/;
  v57 = NetworkManager_TypeInfo->static_fields;
  v57->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v57->dataServerFolder, v56, v58, v59);
  v60 = (ServantStatusBattleListViewItem_o *)NetworkManager_TypeInfo->static_fields;
  v60[1].fields.sortStr1 = 0LL;
  v60 = (ServantStatusBattleListViewItem_o *)((char *)v60 + 224);
  v60[-1].fields.isMine = 0;
  sub_1B6406C(v60, 0, v61, v62);
  v63 = NetworkManager_TypeInfo->static_fields;
  v63->dataServerRedirectAddress = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v63->dataServerRedirectAddress, 0, v64, v65);
  v66 = NetworkManager_TypeInfo->static_fields;
  v66->webServerRedirectAddress = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v66->webServerRedirectAddress, 0, v67, v68);
  v69 = NetworkManager_TypeInfo->static_fields;
  v69->serverSecurity = 0;
  v70 = (int)StringLiteral_1/*""*/;
  v69->gameServerAddress = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v69->gameServerAddress, v70, v71, v72);
  v73 = (int)StringLiteral_1/*""*/;
  p_dataServerAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->dataServerAddress;
  p_dataServerAddress->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B6406C(p_dataServerAddress, v73, v75, v76);
  v77 = (int)StringLiteral_1/*""*/;
  p_webServerAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->webServerAddress;
  p_webServerAddress->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B6406C(p_webServerAddress, v77, v79, v80);
  v81 = (int)StringLiteral_1/*""*/;
  p_webViewBaseURL = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B6406C(p_webViewBaseURL, v81, v83, v84);
  v87 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                     v85,
                                                                     v86);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v87,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  p_webViewAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->webViewAddress;
  p_webViewAddress->klass = (ServantStatusBattleListViewItem_c *)v87;
  sub_1B6406C(p_webViewAddress, (int32_t)v87, v89, v90);
  v91 = StringLiteral_14244/*"TheCheckKey"*/;
  p_AUTHMD5_KEY_TYPE = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->AUTHMD5_KEY_TYPE;
  p_AUTHMD5_KEY_TYPE->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_14244/*"TheCheckKey"*/;
  sub_1B6406C(p_AUTHMD5_KEY_TYPE, v91, v93, v94);
  v95 = (int)StringLiteral_1/*""*/;
  p_errorDialogResponseData = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->errorDialogResponseData;
  p_errorDialogResponseData->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B6406C(p_errorDialogResponseData, v95, v97, v98);
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
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_Queue_T__o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FBC4C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Queue_RequestBase___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Queue_RequestBase__TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager___ctor__, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FBC4C = 1;
  }
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.mAndroidApiKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mAndroidApiKey, v8, v2, v3);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.mAndroidProjectId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mAndroidProjectId, v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.mIosApplicationId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mIosApplicationId, v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.mMk = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mMk, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.mCv = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mCv, v18, v19, v20);
  v21 = (int)StringLiteral_1/*""*/;
  this->fields.mAuGameServerPublicKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mAuGameServerPublicKey, v21, v22, v23);
  v26 = (System_Collections_Generic_Queue_T__o *)sub_1B64314(
                                                   System_Collections_Generic_Queue_RequestBase__TypeInfo,
                                                   v24,
                                                   v25);
  System_Collections_Generic_Queue_object____ctor(
    v26,
    (const MethodInfo_362251C *)Method_System_Collections_Generic_Queue_RequestBase___ctor__);
  this->fields.communicationWaitList = (struct System_Collections_Generic_Queue_RequestBase__o *)v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.communicationWaitList, (int32_t)v26, v27, v28);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_NetworkManager___ctor__);
}


void __fastcall NetworkManager__AddWaitStatus(NetworkManager_o *this, RequestBase_o *request, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Queue_T__o *communicationWaitList; // x0
  System_Collections_Generic_Queue_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FBC3E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__, request);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_RequestBase__Enqueue__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__, v8);
    byte_49FBC3E = 1;
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
      (const MethodInfo_3622B9C *)Method_System_Collections_Generic_Queue_RequestBase__GetEnumerator__);
    while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_322A4BC *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__MoveNext__) )
    {
      if ( System_Collections_Generic_Queue_Enumerator_object___get_Current(
             &v10,
             (const MethodInfo_322A5AC *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__get_Current__) == (Il2CppObject *)request )
      {
        System_Collections_Generic_Queue_Enumerator_object___Dispose(
          &v10,
          (const MethodInfo_322A4AC *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
        return;
      }
    }
    System_Collections_Generic_Queue_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_322A4AC *)Method_System_Collections_Generic_Queue_Enumerator_RequestBase__Dispose__);
    communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
    if ( !communicationWaitList )
LABEL_12:
      sub_1B64324(communicationWaitList);
    System_Collections_Generic_Queue_object___Enqueue(
      communicationWaitList,
      (Il2CppObject *)request,
      (const MethodInfo_3622AE4 *)Method_System_Collections_Generic_Queue_RequestBase__Enqueue__);
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x5

  if ( (byte_49FBBDD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BalanceConfig_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_NetworkManager_OnClickErrorReboot__, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_12421/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FBBDD = 1;
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
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12421/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v12);
      v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
      NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v17, 0LL, v20, v21);
      return 0;
    }
  }
  return 1;
}


bool __fastcall NetworkManager__CheckUserCreateServer(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  NetworkManager_c *v4; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *gameServerAddress; // x0

  if ( (byte_49FBBC5 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBC5 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v2->static_fields->userCreateServer, 0LL) )
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
    sub_1B64324(0LL);
  return System_String__Equals_61383712(gameServerAddress, static_fields->userCreateServer, 0LL);
}


bool __fastcall NetworkManager__CheckUserCreateServerByPrefix(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  NetworkManager_c *v3; // x0
  NetworkManager_c *v4; // x0
  System_String_array *gameServerAddress; // x0
  System_String_o *userCreateServer; // x8
  System_String_array *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x8
  __int64 v10; // x9
  System_String_o *v11; // x8

  if ( (byte_49FBBC6 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBC6 = 1;
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
      v9 = *(_QWORD *)&v7->max_length;
      if ( v9 )
      {
        if ( !gameServerAddress )
          goto LABEL_22;
        v10 = *(_QWORD *)&gameServerAddress->max_length;
        if ( v10 )
        {
          if ( !(_DWORD)v9 || !(_DWORD)v10 )
            sub_1B6432C(gameServerAddress, v8);
          v11 = v7->m_Items[0];
          if ( v11 )
            return System_String__Equals_61383712(v11, gameServerAddress->m_Items[0], 0LL);
LABEL_22:
          sub_1B64324(gameServerAddress);
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

  if ( (byte_49FBBE3 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&SignedData_TypeInfo, v4);
    byte_49FBBE3 = 1;
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
  sub_1B6406C(static_fields, 0, v2, v3);
  v8 = NetworkManager_TypeInfo->static_fields;
  v8->userCreateServer = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->userCreateServer, 0, v9, v10);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loginResponseResult, 0, v2, v3);
}


bool __fastcall NetworkManager__CommunicationIsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FBBCC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v1);
    byte_49FBBCC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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

  if ( (byte_49FBC3F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Queue_RequestBase__Dequeue__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v3);
    byte_49FBC3F = 1;
  }
  communicationWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.communicationWaitList;
  if ( !communicationWaitList )
    sub_1B64324(0LL);
  if ( communicationWaitList->fields._size < 1 || this->fields.communicationWork )
    return 0;
  v6 = System_Collections_Generic_Queue_object___Dequeue(
         communicationWaitList,
         (const MethodInfo_3622C74 *)Method_System_Collections_Generic_Queue_RequestBase__Dequeue__);
  this->fields.communicationWork = (struct RequestBase_o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.communicationWork, (int32_t)v6, v7, v8);
  v10 = NetworkManager__RequestCR(this, this->fields.communicationWork, 0.0, v9);
  started = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  this->fields.communicationCoroutine = started;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v12, v13);
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

  if ( (byte_49FBC10 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC10 = 1;
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

  if ( (byte_49FBC0F & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC0F = 1;
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

  if ( (byte_49FBC11 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC11 = 1;
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
  const MethodInfo *v5; // x3

  if ( (byte_49FBC05 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v2);
    byte_49FBC05 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v3->static_fields->isRebootBlock = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
    sub_1B6406C(p_errorCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall NetworkManager__EndGetStoreUrl(NetworkManager_o *this, System_String_o *url, const MethodInfo *method)
{
  if ( (byte_49FBC07 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, url);
    byte_49FBC07 = 1;
  }
  if ( url )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__OpenURL(url, 0LL);
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_68921692(0LL);
}


void __fastcall NetworkManager__EndLockSync(NetworkManager_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_49FBC48 & 1) == 0 )
  {
    sub_1B640C8(&UserServantLockManager_TypeInfo, result);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    byte_49FBC48 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
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

  if ( (byte_49FBC4B & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FBC4B = 1;
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
    sub_1B6406C(p_loginCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      monitor,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall NetworkManager__EndOptionSync(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_49FBC4A & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49FBC4A = 1;
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
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_string__o *PreparePurchaseShopIdsFromPlayerPrefs; // x20
  Il2CppObject *Request_object; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  System_Int64_array *v28; // x20
  NetworkManager_ResultCallbackFunc_o *v29; // x21
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-50h] BYREF
  int32_t resulta; // [xsp+4Ch] [xbp-24h] BYREF

  if ( (byte_49FBC47 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_string___, result);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_1B640C8(&Method_NetworkManager_EndLockSync__, v10);
    sub_1B640C8(&Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___, v11);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardLockSyncRequest___, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v14);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v16);
    sub_1B640C8(&UserServantLockManager_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v18);
    byte_49FBC47 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  resulta = 0;
  this->fields.loginResponseResult = result;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.loginResponseResult,
    (int32_t)result,
    (int32_t)method,
    v3);
  NetworkManager__SetupObfuscatedAccountId(v19, this->fields.loginResponseResult, v20);
  Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  ManagementManager__BuildInfoDisp((ManagementManager_o *)Instance, 1, v22);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  PreparePurchaseShopIdsFromPlayerPrefs = PurchaseBehaviour__GetPreparePurchaseShopIdsFromPlayerPrefs(0LL);
  Instance = (System_Int64_array *)System_Linq_Enumerable__Any_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)PreparePurchaseShopIdsFromPlayerPrefs,
                                     (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_string___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !PreparePurchaseShopIdsFromPlayerPrefs )
      goto LABEL_31;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)PreparePurchaseShopIdsFromPlayerPrefs,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v31 = v30;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      if ( System_Int32__TryParse((System_String_o *)v31.fields._current, &resulta, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Request_object = NetworkManager__getRequest_object_(
                           0LL,
                           (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CancelPurchaseByBankRequest___);
        if ( !Request_object )
          sub_1B64324(0LL);
        CancelPurchaseByBankRequest__beginRequest((CancelPurchaseByBankRequest_o *)Request_object, resulta, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
    v28 = Instance;
    if ( *(_QWORD *)&Instance->max_length )
    {
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
      NetworkManager_ResultCallbackFunc___ctor(v29, (Il2CppObject *)this, Method_NetworkManager_EndLockSync__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (System_Int64_array *)NetworkManager__getRequest_object_(
                                         v29,
                                         (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardLockSyncRequest___);
      if ( Instance )
      {
        CardLockSyncRequest__beginRequest((CardLockSyncRequest_o *)Instance, v28, 0LL, 0, 0LL);
        return;
      }
LABEL_31:
      sub_1B64324(Instance);
    }
    NetworkManager__EndLockSync(this, (System_String_o *)StringLiteral_22137/*"ok"*/, v27);
  }
  else
  {
    NetworkManager__OptionSync(this, v25);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x20
  Il2CppObject *Instance; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  ErrorDialog_ClickDelegate_o *v22; // x23
  __int64 v23; // x0

  if ( (byte_49FBBFC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, errorTitle);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v11);
    sub_1B640C8(&Method_NetworkManager_EndErrorDialog__, v12);
    sub_1B640C8(&Method_NetworkManager_EndErrorWebView__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B640C8(&WebViewManager_TypeInfo, v15);
    byte_49FBBFC = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.errorCallbackFunc,
    (int32_t)callback,
    (int32_t)errorDetail,
    (int32_t)errorUrl);
  if ( errorUrl )
  {
    v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(errorTitle, errorUrl, v18, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v20, v21);
    ErrorDialog_ClickDelegate___ctor(v22, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_1B64324(v23);
    CommonUI__OpenErrorDialog((CommonUI_o *)Instance, errorTitle, errorDetail, v22, 0, 0LL);
  }
}


int32_t __fastcall NetworkManager__ExecuteCommand(ResponseData_o *data, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x0
  Il2CppObject *Item; // x0

  if ( (byte_49FBC3D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v3);
    byte_49FBC3D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  if ( !data )
    sub_1B64324(Instance);
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)Instance[5].monitor;
  if ( !monitor )
    sub_1B64324(0LL);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           monitor,
           (Il2CppObject *)data->fields.nid,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__get_Item__);
  if ( !Item )
    sub_1B64324(0LL);
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
  System_String_o *klass; // x19

  if ( (byte_49FBC27 & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FBC27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v43; // x1
  __int64 v44; // x2
  NetworkManager_c *v45; // x0
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  System_Text_UTF8Encoding_o *v49; // x21
  NetworkManager_c *v50; // x0
  System_Byte_array *v51; // x19
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v53; // [xsp+0h] [xbp-C0h] BYREF
  System_Collections_Generic_SortedDictionary_Enumerator_TKey__TValue__o v54; // [xsp+30h] [xbp-90h] BYREF

  v2 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)headers;
  if ( (byte_49FBBE2 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__, v10);
    sub_1B640C8(&string___TypeInfo, v11);
    sub_1B640C8(&System_Text_UTF8Encoding_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_1854/*"="*/, v13);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v14);
    sub_1B640C8(&StringLiteral_536/*"&"*/, v15);
    headers = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_1B640C8(&StringLiteral_1/*""*/, v16);
    byte_49FBBE2 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  if ( !v2 )
    goto LABEL_33;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_SortedDictionary_object__object___GetEnumerator(
    &v53,
    v2,
    (const MethodInfo_36ECED0 *)Method_System_Collections_Generic_SortedDictionary_string__string__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v18 = v17;
    if ( !System_Collections_Generic_SortedDictionary_Enumerator_object__object___MoveNext(
            &v54,
            (const MethodInfo_3276420 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__MoveNext__) )
      break;
    Current = System_Collections_Generic_SortedDictionary_Enumerator_object__object___get_Current(
                &v54,
                (const MethodInfo_3276500 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__get_Current__);
    if ( System_String__op_Inequality(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v20 = sub_1B64170(string___TypeInfo, 5LL);
      v24 = v20;
      if ( !v20 )
        sub_1B64324(0LL);
      if ( !*(_DWORD *)(v20 + 24) )
        sub_1B6432C(v20, v21);
      *(_QWORD *)(v20 + 32) = v17;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v17, v22, v23);
      if ( *(_DWORD *)(v24 + 24) <= 1u )
        sub_1B6432C(v25, v26);
      v29 = StringLiteral_536/*"&"*/;
      *(_QWORD *)(v24 + 40) = StringLiteral_536/*"&"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 40), v29, v27, v28);
      if ( *(_DWORD *)(v24 + 24) <= 2u )
        sub_1B6432C(v30, v31);
      *(_QWORD *)(v24 + 48) = Current.fields.key;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 48), (int32_t)Current.fields.key, v32, v33);
      if ( *(_DWORD *)(v24 + 24) <= 3u )
        sub_1B6432C(v34, v35);
      v38 = StringLiteral_1854/*"="*/;
      *(_QWORD *)(v24 + 56) = StringLiteral_1854/*"="*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 56), v38, v36, v37);
      if ( *(_DWORD *)(v24 + 24) <= 4u )
        sub_1B6432C(v39, v40);
      *(_QWORD *)(v24 + 64) = Current.fields.value;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 64), (int32_t)Current.fields.value, v41, v42);
      v17 = System_String__Concat_61388924((System_String_array *)v24, 0LL);
    }
    else
    {
      v17 = System_String__Concat_61388660(
              v17,
              (System_String_o *)Current.fields.key,
              (System_String_o *)StringLiteral_1854/*"="*/,
              (System_String_o *)Current.fields.value,
              0LL);
    }
  }
  System_Collections_Generic_SortedDictionary_Enumerator_object__object___Dispose(
    &v54,
    (const MethodInfo_3276490 *)Method_System_Collections_Generic_SortedDictionary_Enumerator_string__string__Dispose__);
  v45 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v45 = NetworkManager_TypeInfo;
  }
  if ( !v45->static_fields->secretKey )
    return 0LL;
  v46 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1B64314(
                                                                      System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo,
                                                                      v43,
                                                                      v44);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v46, 0LL);
  v49 = (System_Text_UTF8Encoding_o *)sub_1B64314(System_Text_UTF8Encoding_TypeInfo, v47, v48);
  System_Text_UTF8Encoding___ctor(v49, 0LL);
  v50 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v50 = NetworkManager_TypeInfo;
  }
  headers = (System_Collections_Generic_SortedDictionary_string__string__o *)System_String__Concat_61386656(
                                                                               v18,
                                                                               (System_String_o *)StringLiteral_1546/*":"*/,
                                                                               v50->static_fields->secretKey,
                                                                               0LL);
  if ( !v49
    || (headers = (System_Collections_Generic_SortedDictionary_string__string__o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_Collections_Generic_SortedDictionary_string__string__o *, Il2CppMethodPointer))v49->klass->vtable._19_GetBytes.method)(
                                                                                     v49,
                                                                                     headers,
                                                                                     v49->klass->vtable._20_GetBytes.methodPtr),
        !v46) )
  {
LABEL_33:
    sub_1B64324(headers);
  }
  v51 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
          (System_Security_Cryptography_HashAlgorithm_o *)v46,
          (System_Byte_array *)headers,
          0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v46, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v51, 0LL);
}


System_String_o *__fastcall NetworkManager__GetCv(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  System_String_o *klass; // x19

  if ( (byte_49FBC29 & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FBC29 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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

  if ( (byte_49FBC12 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC12 = 1;
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

  if ( (byte_49FBC1D & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC1D = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->dataServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetDataServerSetting_38169592(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_49FBC1E & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, method);
    byte_49FBC1E = 1;
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

  if ( (byte_49FBBDC & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    byte_49FBBDC = 1;
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
  return LocalizationManager__GetNumberFormat_38080420(friendCode, method);
}


System_String_o *__fastcall NetworkManager__GetFriendCode(NetworkManager_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0

  if ( (byte_49FBBDB & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FBBDB = 1;
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

  if ( (byte_49FBC1B & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC1B = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->gameServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetGameServerSetting_38169416(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_49FBC1C & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, method);
    byte_49FBC1C = 1;
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

  if ( (byte_49FBBDE & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBDE = 1;
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
  System_String_o *monitor; // x19

  if ( (byte_49FBC28 & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v2);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FBC28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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

  if ( (byte_49FBC18 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC18 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->serverSettingSecurity;
}


bool __fastcall NetworkManager__GetSecurityServerSetting_38169240(System_String_o *type, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_49FBC1A & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, method);
    byte_49FBC1A = 1;
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
  if ( (byte_49FBC35 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4995/*"DEV"*/, method);
    sub_1B640C8(&StringLiteral_12166/*"STAGING"*/, v3);
    sub_1B640C8(&StringLiteral_12214/*"STG"*/, v4);
    sub_1B640C8(&StringLiteral_15167/*"VERUP"*/, v5);
    sub_1B640C8(&StringLiteral_4994/*"DESIGN"*/, v6);
    sub_1B640C8(&StringLiteral_7362/*"IPADDRESS"*/, v7);
    sub_1B640C8(&StringLiteral_10760/*"QA"*/, v8);
    sub_1B640C8(&StringLiteral_10335/*"PLAN"*/, v9);
    sub_1B640C8(&StringLiteral_8199/*"LIMIT"*/, v10);
    sub_1B640C8(&StringLiteral_10336/*"PLAY"*/, v11);
    serverName = (System_String_o *)sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49FBC35 = 1;
  }
  if ( !v2 )
    sub_1B64324(serverName);
  v13 = &StringLiteral_10760/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10760/*"QA"*/, 0LL) )
    return System_String__Replace_61395016(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_10335/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10335/*"PLAN"*/, 0LL) )
    return System_String__Replace_61395016(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_4995/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4995/*"DEV"*/, 0LL) )
    return System_String__Replace_61395016(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_8199/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8199/*"LIMIT"*/, 0LL) )
    return System_String__Replace_61395016(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_10336/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10336/*"PLAY"*/, 0LL) )
    return System_String__Replace_61395016(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_4994/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4994/*"DESIGN"*/, 0LL) )
    return System_String__Replace_61395016(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_15167/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15167/*"VERUP"*/, 0LL) )
    return System_String__Replace_61395016(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = &StringLiteral_12214/*"STG"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12214/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12166/*"STAGING"*/, 0LL) )
  {
    return System_String__Replace_61395016(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v13 = &StringLiteral_7362/*"IPADDRESS"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7362/*"IPADDRESS"*/, 0LL) )
    return System_String__Replace_61395016(v2, (System_String_o *)*v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall NetworkManager__GetServerSettingType(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_49FBC17 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC17 = 1;
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

  if ( (byte_49FBBE0 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBE0 = 1;
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
  if ( (byte_49FBC34 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4995/*"DEV"*/, method);
    sub_1B640C8(&StringLiteral_12166/*"STAGING"*/, v3);
    sub_1B640C8(&StringLiteral_12214/*"STG"*/, v4);
    sub_1B640C8(&StringLiteral_15167/*"VERUP"*/, v5);
    sub_1B640C8(&StringLiteral_4994/*"DESIGN"*/, v6);
    sub_1B640C8(&StringLiteral_7362/*"IPADDRESS"*/, v7);
    sub_1B640C8(&StringLiteral_10760/*"QA"*/, v8);
    sub_1B640C8(&StringLiteral_10335/*"PLAN"*/, v9);
    sub_1B640C8(&StringLiteral_8199/*"LIMIT"*/, v10);
    serverName = (System_String_o *)sub_1B640C8(&StringLiteral_10336/*"PLAY"*/, v11);
    byte_49FBC34 = 1;
  }
  if ( !v2 )
    sub_1B64324(serverName);
  v12 = &StringLiteral_10760/*"QA"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10760/*"QA"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10335/*"PLAN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10335/*"PLAN"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4995/*"DEV"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4995/*"DEV"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_8199/*"LIMIT"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_8199/*"LIMIT"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_10336/*"PLAY"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_10336/*"PLAY"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_4994/*"DESIGN"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_4994/*"DESIGN"*/, 0LL) )
    return (System_String_o *)*v12;
  v12 = &StringLiteral_15167/*"VERUP"*/;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_15167/*"VERUP"*/, 0LL) )
    return (System_String_o *)*v12;
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_12214/*"STG"*/, 0LL)
    && !System_String__Contains(v2, (System_String_o *)StringLiteral_12166/*"STAGING"*/, 0LL) )
  {
    v12 = &StringLiteral_12214/*"STG"*/;
    return (System_String_o *)*v12;
  }
  if ( System_String__Contains(v2, (System_String_o *)StringLiteral_7362/*"IPADDRESS"*/, 0LL) )
    return (System_String_o *)StringLiteral_7362/*"IPADDRESS"*/;
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

  if ( (byte_49FBBD4 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, userName);
    byte_49FBBD4 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  v11 = v10->static_fields->userName;
  *userName = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)userName, (int32_t)v11, (int32_t)genderType, (int32_t)month);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
}


int32_t __fastcall NetworkManager__GetTerminalDispState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  TerminalPramsManager_c *v6; // x0

  if ( (byte_49FBBCD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v2);
    byte_49FBBCD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 9, 0LL) )
    return 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9257 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    byte_49F9257 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  return v6->static_fields->_DispState_k__BackingField != 2;
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
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FBC33 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_24579/*"webview/warBoard?stageId="*/, v4);
    byte_49FBC33 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = (Il2CppObject *)NetworkManager__getBaseUrl(0, method);
  v8 = stageId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Concat_61386408(BaseUrl, (Il2CppObject *)StringLiteral_24579/*"webview/warBoard?stageId="*/, v6, 0LL);
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_49FBC1F & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC1F = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->webServerSettingAddress;
}


System_String_o *__fastcall NetworkManager__GetWebServerSetting_38169768(
        System_String_o *type,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0

  if ( (byte_49FBC20 & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, method);
    byte_49FBC20 = 1;
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x5

  if ( (byte_49FBBFB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_NetworkManager_OnClickErrorReboot__, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_12421/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FBBFB = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12421/*"SYSTEM_ERROR_SERVER_TIME_LIMIT_OVER"*/, method);
    v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
    NetworkManager__ErrorDialog(this, (System_String_o *)StringLiteral_1/*""*/, v10, 0LL, v13, v14);
  }
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__Initialize(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FBBCF & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager__Initialize_d__82_TypeInfo, method);
    byte_49FBBCF = 1;
  }
  v4 = sub_1B64314(NetworkManager__Initialize_d__82_TypeInfo, method, v2);
  NetworkManager__Initialize_d__82___ctor((NetworkManager__Initialize_d__82_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall NetworkManager__InitializeUserAgent(NetworkManager_o *this, const MethodInfo *method)
{
  System_String_o *UserAgentString; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  NetworkManager_c *v6; // x8
  System_String_o *v7; // x19
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_49FBBD0 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FBBD0 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->userAgent, (int32_t)v7, v4, v5);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_IO_BinaryReader_o *v10; // x19
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  System_String_o *v13; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0

  if ( (byte_49FBBE7 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, fname);
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    byte_49FBBE7 = 1;
  }
  v6 = 0LL;
  if ( System_IO_File__Exists(fname, 0LL) )
  {
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(fname, 0LL);
    v10 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v8, v9);
    System_IO_BinaryReader___ctor(v10, v7, 0LL);
    if ( !v10 )
      sub_1B64324(v11);
    v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._22_ReadString.method)(
                               v10,
                               v10->klass->vtable._23_ReadChars.methodPtr);
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    v6 = EncryptedPlayerPrefs__Md5(v13, v12);
    klass = v10->klass;
    v15 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_11;
      }
      v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_11:
      v17 = sub_1BB60A8(v10, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v17)(v10, *(_QWORD *)(v17 + 8));
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
  if ( (byte_49FBC42 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B640C8(&StringLiteral_4623/*"CommunicationStart"*/, requestWork);
    byte_49FBC42 = 1;
  }
  if ( !requestWork )
    sub_1B64324(this);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.communicationWorkResponseList, 0, v9, v10);
      v8->fields.communicationWork = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.communicationWork, 0, v12, v13);
      v8->fields.communicationCoroutine = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.communicationCoroutine, 0, v14, v15);
      if ( v8->fields.cacheRefreshWork )
      {
        v8->fields.cacheRefreshWork = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.cacheRefreshWork, 0, v16, v17);
        v8->fields.cacheRefreshWorkResponseList = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.cacheRefreshWorkResponseList, 0, v18, v19);
      }
    }
    ((void (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))requestWork->klass->vtable._12_backgroundErrorRetry.method)(
      requestWork,
      requestWork->klass->vtable._13_isAutoRetryRequest.methodPtr);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v8,
      (System_String_o *)StringLiteral_4623/*"CommunicationStart"*/,
      0.0,
      0LL);
  }
  return v11 & 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickErrorDialog(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  if ( (byte_49FBC08 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, isDecide);
    byte_49FBC08 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_68921692(0LL);
}


void __fastcall NetworkManager__OnClickErrorReboot(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagementManager_c *v5; // x0
  NetworkManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FBC00 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&ManagementManager_TypeInfo, v2);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v4);
    byte_49FBC00 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_49FB4AB )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, method);
    byte_49FB4AB = 1;
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
    UnityEngine_Application__Quit_68921692(0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v8);
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
  const MethodInfo *v18; // x3

  if ( (byte_49FBBFD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1B640C8(&ManagementManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v8);
    byte_49FBBFD = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList, 0, (int32_t)method, v3);
  if ( isDecide )
  {
    v11 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v10);
    started = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
    this->fields.communicationCoroutine = started;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v13, v14);
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_49FB4AB )
    {
      sub_1B640C8(&ManagementManager_TypeInfo, v9);
      byte_49FB4AB = 1;
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
      UnityEngine_Application__Quit_68921692(0LL);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, v18);
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
  const MethodInfo *v14; // x3

  if ( (byte_49FBBFE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FBBFE = 1;
  }
  if ( isDecide )
  {
    this->fields.communicationWorkResponseList = 0LL;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList,
      0,
      (int32_t)method,
      v3);
    v7 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v6);
    started = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
    this->fields.communicationCoroutine = started;
    v11 = (int)started;
    p_communicationCoroutine = (ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    CommonUI__CloseRetryDialog((CommonUI_o *)Instance, 0LL);
    NetworkManager__OnEndCommunication(
      this,
      this->fields.communicationWork,
      this->fields.communicationWorkResponseList,
      v14);
    p_communicationCoroutine = (ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList;
    v11 = 0;
    this->fields.communicationWorkResponseList = 0LL;
  }
  sub_1B6406C(p_communicationCoroutine, v11, v9, v10);
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
  const MethodInfo *v8; // x3

  if ( (byte_49FBC01 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&ManagementManager_TypeInfo, v2);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v4);
    byte_49FBC01 = 1;
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_49FB4AB )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, method);
    byte_49FB4AB = 1;
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
    UnityEngine_Application__Quit_68921692(0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    ManagementManager__reboot((ManagementManager_o *)Instance, 1, 1, v8);
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

  if ( (byte_49FBC02 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_13547/*"TerminalStart"*/, method);
    byte_49FBC02 = 1;
  }
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList, 0, v2, v3);
  communicationCoroutine = this->fields.communicationCoroutine;
  if ( communicationCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_69113628((UnityEngine_MonoBehaviour_o *)this, communicationCoroutine, 0LL);
  this->fields.communicationWork = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.communicationWork, 0, v5, v6);
  this->fields.communicationCoroutine = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, 0, v8, v9);
  if ( this->fields.cacheRefreshWork )
  {
    this->fields.cacheRefreshWork = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWork, 0, v10, v11);
    this->fields.cacheRefreshWorkResponseList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWorkResponseList, 0, v12, v13);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13547/*"TerminalStart"*/,
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
  const MethodInfo *v16; // x2
  System_Collections_IEnumerator_o *v17; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FBBFF & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_TopRefreshRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    byte_49FBBFF = 1;
  }
  p_communicationWork = &this->fields.communicationWork;
  communicationWork = this->fields.communicationWork;
  this->fields.cacheRefreshWork = communicationWork;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWork, (int32_t)communicationWork, v2, v3);
  communicationWorkResponseList = this->fields.communicationWorkResponseList;
  this->fields.cacheRefreshWorkResponseList = communicationWorkResponseList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.cacheRefreshWorkResponseList,
    (int32_t)communicationWorkResponseList,
    v9,
    v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TopRefreshRequest___);
  *p_communicationWork = (RequestBase_o *)Request_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.communicationWork, (int32_t)Request_object, v12, v13);
  this->fields.communicationWorkResponseList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.communicationWorkResponseList, 0, v14, v15);
  if ( !*p_communicationWork )
    sub_1B64324(0LL);
  RequestBase__addBaseField(*p_communicationWork, 0LL);
  v17 = NetworkManager__RequestCR(this, this->fields.communicationWork, 1.0, v16);
  started = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
  this->fields.communicationCoroutine = started;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.communicationCoroutine, (int32_t)started, v19, v20);
}


void __fastcall NetworkManager__OnClickStore(NetworkManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0

  if ( (byte_49FBC06 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&ManagerConfig_TypeInfo, v2);
    byte_49FBC06 = 1;
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
  UnityEngine_Application__Quit_68921692(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NetworkManager__OnClickUserDelete(NetworkManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49FBC04 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_NetworkManager_EndCloseUserDelete__, v5);
    sub_1B640C8(&OptionManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49FBC04 = 1;
  }
  if ( isDecide )
  {
    UserSaveData__DeleteSaveData(1, 0LL);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__Initialize(0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_NetworkManager_EndCloseUserDelete__, 0LL);
  if ( !Instance )
    sub_1B64324(v12);
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v11, 0LL);
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
  if ( (byte_49FBC41 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B640C8(&StringLiteral_4623/*"CommunicationStart"*/, requestWork);
    byte_49FBC41 = 1;
  }
  if ( v6->fields.communicationWork != v5 )
    goto LABEL_4;
  v6->fields.communicationWorkResponseList = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v6->fields.communicationWorkResponseList,
    0,
    (int32_t)responseList,
    (int32_t)method);
  v6->fields.communicationWork = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.communicationWork, 0, v7, v8);
  v6->fields.communicationCoroutine = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.communicationCoroutine, 0, v9, v10);
  this = (NetworkManager_o *)&v6->fields.cacheRefreshWork;
  cacheRefreshWork = v6->fields.cacheRefreshWork;
  if ( cacheRefreshWork )
  {
    cacheRefreshWorkResponseList = v6->fields.cacheRefreshWorkResponseList;
    v6->fields.cacheRefreshWork = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)this, 0, v11, v12);
    v6->fields.cacheRefreshWorkResponseList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.cacheRefreshWorkResponseList, 0, v14, v15);
    v5 = cacheRefreshWork;
  }
  else
  {
LABEL_4:
    if ( !v5 )
      sub_1B64324(this);
  }
  ((void (__fastcall *)(RequestBase_o *, ResponseData_array *, Il2CppMethodPointer))v5->klass->vtable._10_requestCompleted.method)(
    v5,
    cacheRefreshWorkResponseList,
    v5->klass->vtable._11_backgroundErrorRequest.methodPtr);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v6, (System_String_o *)StringLiteral_4623/*"CommunicationStart"*/, 0.0, 0LL);
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
  if ( (byte_49FBC43 & 1) == 0 )
  {
    this = (NetworkManager_o *)sub_1B640C8(&StringLiteral_4623/*"CommunicationStart"*/, requestWork);
    byte_49FBC43 = 1;
  }
  if ( !requestWork )
    sub_1B64324(this);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.communicationWorkResponseList, 0, v7, v8);
      v6->fields.communicationWork = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.communicationWork, 0, v10, v11);
      v6->fields.communicationCoroutine = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.communicationCoroutine, 0, v12, v13);
      if ( v6->fields.cacheRefreshWork )
      {
        v6->fields.cacheRefreshWork = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.cacheRefreshWork, 0, v14, v15);
        v6->fields.cacheRefreshWorkResponseList = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.cacheRefreshWorkResponseList, 0, v16, v17);
      }
    }
    ((void (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))requestWork->klass->vtable._15_errorRetry.method)(
      requestWork,
      requestWork->klass->vtable._16_getParameterFileName.methodPtr);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v6,
      (System_String_o *)StringLiteral_4623/*"CommunicationStart"*/,
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
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_49FBC49 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_NetworkManager_EndOptionSync__, v3);
    sub_1B640C8(&OptionManager_TypeInfo, v4);
    byte_49FBC49 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__CheckOldLocal(0LL) )
  {
    v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_NetworkManager_EndOptionSync__, 0LL);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SaveData(v7, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *v6; // x19
  void *v7; // x0
  int32_t v8; // w0
  __int64 v9; // x1
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w21

  if ( (byte_49FBBE1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5);
    byte_49FBBE1 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                    method,
                                                                    v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !url )
    goto LABEL_17;
  v8 = System_String__IndexOf(url, 0x3Fu, 0LL);
  if ( v8 != -1 )
  {
    v7 = System_String__Substring(url, v8 + 1, 0LL);
    if ( !v7 )
      goto LABEL_17;
    v7 = System_String__Split((System_String_o *)v7, 0x26u, 0, 0LL);
    if ( !v7 )
      goto LABEL_17;
    v10 = *((_DWORD *)v7 + 6);
    v11 = v7;
    if ( v10 >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= v10 )
          sub_1B6432C(v7, v9);
        v7 = (void *)*((_QWORD *)v11 + (int)v12 + 4);
        if ( !v7 )
          break;
        v7 = System_String__Split((System_String_o *)v7, 0x3Du, 0, 0LL);
        if ( !v7 )
          break;
        if ( *((_DWORD *)v7 + 6) == 2 )
        {
          if ( !v6 )
            break;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v6,
            *((Il2CppObject **)v7 + 4),
            *((Il2CppObject **)v7 + 5),
            (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
        }
        v10 = *((_DWORD *)v11 + 6);
        if ( (int)++v12 >= v10 )
          return (System_Collections_Generic_Dictionary_string__string__o *)v6;
      }
LABEL_17:
      sub_1B64324(v7);
    }
  }
  return (System_Collections_Generic_Dictionary_string__string__o *)v6;
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
  __int64 v24; // x1
  __int64 v25; // x2
  System_IO_BinaryReader_o *v26; // x21
  __int64 v27; // x0
  const MethodInfo *v28; // x1
  System_String_o *v29; // x22
  System_String_o *v30; // x23
  NetworkManager_c *v31; // x0
  System_String_o *String; // x1
  int v33; // w23
  char v34; // w20
  System_String_o *v35; // x22
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_object__object__o *v37; // x22
  Il2CppObject *Item; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x23
  NetworkManager_c *v42; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  struct NetworkManager_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  struct NetworkManager_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  struct NetworkManager_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_IO_BinaryReader_c *klass; // x8
  __int64 v60; // x9
  int32_t *p_offset; // x10
  __int64 v62; // x0

  if ( (byte_49FBBE4 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    sub_1B640C8(&ManagerConfig_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&SignedData_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_24282/*"userCreateServer"*/, v11);
    sub_1B640C8(&StringLiteral_16902/*"authKey"*/, v12);
    sub_1B640C8(&StringLiteral_22983/*"secretKey"*/, v13);
    sub_1B640C8(&StringLiteral_24325/*"userId"*/, v14);
    byte_49FBBE4 = 1;
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
      v26 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v24, v25);
      System_IO_BinaryReader___ctor(v26, v23, 0LL);
      if ( !v26 )
        sub_1B64324(v27);
      v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                                 v26,
                                 v26->klass->vtable._23_ReadChars.methodPtr);
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      v30 = EncryptedPlayerPrefs__Md5(v29, v28);
      v31 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v31 = NetworkManager_TypeInfo;
      }
      String = UnityEngine_PlayerPrefs__GetString(v31->static_fields->AUTHMD5_KEY_TYPE, v30, 0LL);
      if ( System_String__op_Inequality(v30, String, 0LL) )
      {
        v33 = 4;
        v34 = 1;
        v21 = 2;
      }
      else
      {
        if ( !v29 )
          goto LABEL_37;
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        v35 = CatAndMouseGame__MouseGame1(v29, 0, 0LL);
        if ( v35 )
        {
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          Dictionary = JsonManager__getDictionary(v35, 0LL);
          v37 = (System_Collections_Generic_Dictionary_object__object__o *)Dictionary;
          if ( !Dictionary )
            sub_1B64324(0LL);
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                   (Il2CppObject *)StringLiteral_24282/*"userCreateServer"*/,
                   (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            sub_1B64324(0LL);
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
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->userCreateServer, v41, v39, v40);
          v44 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v37,
                  (Il2CppObject *)StringLiteral_24325/*"userId"*/,
                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v44 )
            sub_1B64324(0LL);
          v45 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v44->klass->vtable[3].method)(
                  v44,
                  v44->klass->vtable[4].methodPtr);
          v46 = NetworkManager_TypeInfo->static_fields;
          v46->userId = (struct System_String_o *)v45;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->userId, v45, v47, v48);
          v49 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v37,
                  (Il2CppObject *)StringLiteral_16902/*"authKey"*/,
                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v49 )
            sub_1B64324(0LL);
          v50 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v49->klass->vtable[3].method)(
                  v49,
                  v49->klass->vtable[4].methodPtr);
          v51 = NetworkManager_TypeInfo->static_fields;
          v51->authKey = (struct System_String_o *)v50;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v51->authKey, v50, v52, v53);
          v54 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v37,
                  (Il2CppObject *)StringLiteral_22983/*"secretKey"*/,
                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v54 )
            sub_1B64324(0LL);
          v55 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v54->klass->vtable[3].method)(
                  v54,
                  v54->klass->vtable[4].methodPtr);
          v56 = NetworkManager_TypeInfo->static_fields;
          v56->secretKey = (struct System_String_o *)v55;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v56->secretKey, v55, v57, v58);
          if ( !SignedData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
          SignedData__RefreshSigningData(3, 0LL);
          v34 = 0;
          v33 = 16;
        }
        else
        {
LABEL_37:
          v33 = 4;
          v34 = 1;
        }
      }
      klass = v26->klass;
      v60 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v60;
          p_offset += 4;
          if ( !v60 )
            goto LABEL_42;
        }
        v62 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_42:
        v62 = sub_1BB60A8(v26, System_IDisposable_TypeInfo, 0LL);
      }
      v17 = (NetworkManager_o *)(*(__int64 (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v62)(
                                  v26,
                                  *(_QWORD *)(v62 + 8));
      if ( v33 == 16 )
      {
        v16 = 0;
        if ( (v34 & 1) == 0 )
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x20
  NetworkManager_c *v16; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v18; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0

  if ( (byte_49FBBD8 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&ManagerConfig_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    byte_49FBBD8 = 1;
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
  v11 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v9, v10);
  System_IO_BinaryReader___ctor(v11, v8, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
          v11,
          v11->klass->vtable._23_ReadChars.methodPtr);
  v16 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v16 = NetworkManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  static_fields->friendCode = (struct System_String_o *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->friendCode, v15, v13, v14);
  v18 = 1;
  klass = v11->klass;
  v20 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_16;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v22 = sub_1BB60A8(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v22)(v11, *(_QWORD *)(v22 + 8));
  return v18;
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x20
  NetworkManager_c *v16; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v18; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0

  if ( (byte_49FBBD2 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&ManagerConfig_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    byte_49FBBD2 = 1;
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
  v11 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v9, v10);
  System_IO_BinaryReader___ctor(v11, v8, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
          v11,
          v11->klass->vtable._23_ReadChars.methodPtr);
  v16 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v16 = NetworkManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  static_fields->userName = (struct System_String_o *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->userName, v15, v13, v14);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                         v11,
                                                         v11->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                    v11,
                                                    v11->klass->vtable._16_ReadUInt32.methodPtr);
  v18 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                  v11,
                                                  v11->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v11->klass;
  v20 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_16;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v22 = sub_1BB60A8(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v22)(v11, *(_QWORD *)(v22 + 8));
  return v18;
}


bool __fastcall NetworkManager__ReadServerSetting(NetworkManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  __int64 v4; // x1

  if ( (byte_49FBC2A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4986/*"DEFAULT"*/, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FBC2A = 1;
  }
  NetworkManager__SetServerSetting(
    this,
    (System_String_o *)StringLiteral_4986/*"DEFAULT"*/,
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x20
  NetworkManager_c *v16; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  bool v18; // w21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0

  if ( (byte_49FBBD3 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&ManagerConfig_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    byte_49FBBD3 = 1;
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
  v11 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v9, v10);
  System_IO_BinaryReader___ctor(v11, v8, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
          v11,
          v11->klass->vtable._23_ReadChars.methodPtr);
  v16 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v16 = NetworkManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  static_fields->userName = (struct System_String_o *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->userName, v15, v13, v14);
  NetworkManager_TypeInfo->static_fields->genderType = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                         v11,
                                                         v11->klass->vtable._16_ReadUInt32.methodPtr);
  NetworkManager_TypeInfo->static_fields->month = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                    v11,
                                                    v11->klass->vtable._16_ReadUInt32.methodPtr);
  v18 = 1;
  NetworkManager_TypeInfo->static_fields->day = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                                                  v11,
                                                  v11->klass->vtable._16_ReadUInt32.methodPtr);
  klass = v11->klass;
  v20 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_16;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v22 = sub_1BB60A8(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v22)(v11, *(_QWORD *)(v22 + 8));
  return v18;
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
  __int64 v13; // x1
  DataManager_c *v14; // x0
  __int64 v15; // x1
  DataManager_c *v16; // x0
  NetworkManager_c *v17; // x0
  int64_t Time; // x0
  const MethodInfo *v19; // x2
  System_String_o *v20; // x0
  System_Guid_o v21; // [xsp+0h] [xbp-40h] BYREF
  System_Guid_o v22; // 0:x0.16

  if ( (byte_49FBC3A & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, isRefreshTime);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_18414/*"dateVer"*/, v7);
    sub_1B640C8(&StringLiteral_18399/*"dataVer"*/, v8);
    sub_1B640C8(&StringLiteral_16742/*"appVer"*/, v9);
    sub_1B640C8(&StringLiteral_20126/*"idempotencyKey"*/, v10);
    sub_1B640C8(&StringLiteral_20959/*"lastAccessTime"*/, v11);
    byte_49FBC3A = 1;
  }
  Instance = ManagerConfig_TypeInfo;
  v21 = (System_Guid_o)0LL;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !request )
    goto LABEL_21;
  RequestBase__replaceField_40878228(
    request,
    (System_String_o *)StringLiteral_16742/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( !byte_49F9C02 )
  {
    sub_1B640C8(&DataManager_TypeInfo, v13);
    byte_49F9C02 = 1;
  }
  v14 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = DataManager_TypeInfo;
  }
  RequestBase__replaceField(request, (System_String_o *)StringLiteral_18399/*"dataVer"*/, v14->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1B64324(Instance);
  if ( !byte_49F9C03 )
  {
    sub_1B640C8(&DataManager_TypeInfo, v15);
    byte_49F9C03 = 1;
  }
  v16 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v16 = DataManager_TypeInfo;
  }
  RequestBase__replaceField_40877772(
    request,
    (System_String_o *)StringLiteral_18414/*"dateVer"*/,
    v16->static_fields->dateVersion,
    0LL);
  if ( isRefreshTime )
  {
    v17 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime((const MethodInfo *)v17);
    RequestBase__replaceField_40877772(request, (System_String_o *)StringLiteral_20959/*"lastAccessTime"*/, Time, 0LL);
    v21 = System_Guid__NewGuid(0LL);
    *(_QWORD *)&v22.fields._a = &v21;
    *(_QWORD *)&v22.fields._d = 0LL;
    v20 = System_Guid__ToString(v22, v19);
    RequestBase__replaceField_40878228(request, (System_String_o *)StringLiteral_20126/*"idempotencyKey"*/, v20, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FBC44 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager__RequestApplicationUpdateCR_d__218_TypeInfo, storeName);
    byte_49FBC44 = 1;
  }
  v8 = sub_1B64314(NetworkManager__RequestApplicationUpdateCR_d__218_TypeInfo, storeName, id);
  NetworkManager__RequestApplicationUpdateCR_d__218___ctor(
    (NetworkManager__RequestApplicationUpdateCR_d__218_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_1B64324(v9);
  *(_QWORD *)(v8 + 32) = storeName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)storeName, v10, v11);
  *(_QWORD *)(v8 + 40) = id;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)id, v12, v13);
  *(_QWORD *)(v8 + 48) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)callback, v14, v15);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FBC40 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager__RequestCR_d__213_TypeInfo, work);
    byte_49FBC40 = 1;
  }
  v7 = sub_1B64314(NetworkManager__RequestCR_d__213_TypeInfo, work, method);
  NetworkManager__RequestCR_d__213___ctor((NetworkManager__RequestCR_d__213_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 32) = work;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)work, v11, v12);
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
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x21
  Il2CppObject *Request_object; // x0
  TopLoginRequest_o *v14; // x21
  const MethodInfo *v15; // x1

  if ( (byte_49FBC45 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_EndTopLogin__, callback);
    sub_1B640C8(&Method_NetworkManager_getRequest_TopLoginRequest___, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_49FBC45 = 1;
  }
  this->fields.loginCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.loginCallbackFunc,
    (int32_t)callback,
    isEnforce,
    (int32_t)method);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
  NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_NetworkManager_EndTopLogin__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v12,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TopLoginRequest___);
  v14 = (TopLoginRequest_o *)Request_object;
  if ( isEnforce )
  {
    if ( !Request_object )
LABEL_12:
      sub_1B64324(Request_object);
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
  const MethodInfo *v6; // x1

  if ( (byte_49FBC3C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method);
    byte_49FBC3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, v4) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
    {
      NetworkManager__AddWaitStatus((NetworkManager_o *)Instance, request, v5);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( Instance )
      {
        NetworkManager__CommunicationStart((NetworkManager_o *)Instance, v6);
        return;
      }
    }
LABEL_9:
    sub_1B64324(Instance);
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

  if ( (byte_49FBBE5 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, userId);
    sub_1B640C8(&SignedData_TypeInfo, v8);
    byte_49FBBE5 = 1;
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
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&static_fields->userId,
      (int32_t)userId,
      (int32_t)authKey,
      (int32_t)secretKey);
    v11 = NetworkManager_TypeInfo->static_fields;
    v11->authKey = authKey;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->authKey, (int32_t)authKey, v12, v13);
    v14 = NetworkManager_TypeInfo->static_fields;
    v14->secretKey = secretKey;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14->secretKey, (int32_t)secretKey, v15, v16);
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
  __int64 v14; // x1
  DataManager_c *v15; // x0
  __int64 v16; // x1
  DataManager_c *v17; // x0
  NetworkManager_c *v18; // x0
  int64_t Time; // x0
  const MethodInfo *v20; // x2
  System_String_o *v21; // x0
  System_Guid_o v22; // [xsp+0h] [xbp-50h] BYREF
  System_Guid_o v23; // 0:x0.16

  if ( (byte_49FBC38 & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_18414/*"dateVer"*/, v5);
    sub_1B640C8(&StringLiteral_18399/*"dataVer"*/, v6);
    sub_1B640C8(&StringLiteral_24421/*"verCode"*/, v7);
    sub_1B640C8(&StringLiteral_16742/*"appVer"*/, v8);
    sub_1B640C8(&StringLiteral_20126/*"idempotencyKey"*/, v9);
    sub_1B640C8(&StringLiteral_16902/*"authKey"*/, v10);
    sub_1B640C8(&StringLiteral_24325/*"userId"*/, v11);
    sub_1B640C8(&StringLiteral_20959/*"lastAccessTime"*/, v12);
    byte_49FBC38 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  v22 = (System_Guid_o)0LL;
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
      sub_1B64324(Instance);
    RequestBase__addField_40850936(
      request,
      (System_String_o *)StringLiteral_24325/*"userId"*/,
      NetworkManager_TypeInfo->static_fields->userId,
      0LL);
    RequestBase__addField_40850936(
      request,
      (System_String_o *)StringLiteral_16902/*"authKey"*/,
      NetworkManager_TypeInfo->static_fields->authKey,
      0LL);
  }
  Instance = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !request )
    goto LABEL_26;
  RequestBase__addField_40850936(
    request,
    (System_String_o *)StringLiteral_16742/*"appVer"*/,
    ManagerConfig_TypeInfo->static_fields->AppVer,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  if ( !byte_49F9C02 )
  {
    sub_1B640C8(&DataManager_TypeInfo, v14);
    byte_49F9C02 = 1;
  }
  v15 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = DataManager_TypeInfo;
  }
  RequestBase__addField(request, (System_String_o *)StringLiteral_18399/*"dataVer"*/, v15->static_fields->dataVersion, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  if ( !byte_49F9C03 )
  {
    sub_1B640C8(&DataManager_TypeInfo, v16);
    byte_49F9C03 = 1;
  }
  v17 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v17 = DataManager_TypeInfo;
  }
  RequestBase__addField_40849372(request, (System_String_o *)StringLiteral_18414/*"dateVer"*/, v17->static_fields->dateVersion, 0LL);
  v18 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime((const MethodInfo *)v18);
  RequestBase__addField_40849372(request, (System_String_o *)StringLiteral_20959/*"lastAccessTime"*/, Time, 0LL);
  RequestBase__addField_40850936(
    request,
    (System_String_o *)StringLiteral_24421/*"verCode"*/,
    ManagerConfig_TypeInfo->static_fields->verCode,
    0LL);
  v22 = System_Guid__NewGuid(0LL);
  *(_QWORD *)&v23.fields._a = &v22;
  *(_QWORD *)&v23.fields._d = 0LL;
  v21 = System_Guid__ToString(v23, v20);
  RequestBase__addField_40850936(request, (System_String_o *)StringLiteral_20126/*"idempotencyKey"*/, v21, 0LL);
}


void __fastcall NetworkManager__SetDataServerFolderName(System_String_o *folderName, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  NetworkManager_c *v6; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_49FBC13 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FBC13 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->dataServerFolder, (int32_t)folderName, v2, v3);
}


void __fastcall NetworkManager__SetDataServerRedirect(System_String_o *address, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_49FBC15 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FBC15 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->dataServerRedirectAddress = address;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->dataServerRedirectAddress, (int32_t)address, v2, v3);
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

  if ( (byte_49FBC3B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18536/*"deviceInfo"*/, method);
    sub_1B640C8(&StringLiteral_24895/*"{0} / {1}"*/, v3);
    byte_49FBC3B = 1;
  }
  deviceModel = (Il2CppObject *)UnityEngine_SystemInfo__get_deviceModel(0LL);
  operatingSystem = (Il2CppObject *)UnityEngine_SystemInfo__get_operatingSystem(0LL);
  v6 = System_String__Format_61389768((System_String_o *)StringLiteral_24895/*"{0} / {1}"*/, deviceModel, operatingSystem, 0LL);
  if ( !request )
    sub_1B64324(v6);
  RequestBase__addField_40850936(request, (System_String_o *)StringLiteral_18536/*"deviceInfo"*/, v6, 0LL);
}


void __fastcall NetworkManager__SetFriendCode(
        NetworkManager_o *this,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  int32_t v3; // w3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_49FBBD9 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, friendCode);
    byte_49FBBD9 = 1;
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
    sub_1B6406C(
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

  if ( (byte_49FBC14 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, isSecurity);
    byte_49FBC14 = 1;
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
  sub_1B6406C(static_fields, (int32_t)address, (int32_t)method, v3);
}


void __fastcall NetworkManager__SetSecurityServerSetting(bool security, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_49FBC19 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FBC19 = 1;
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

  if ( (byte_49FBC2B & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, type);
    byte_49FBC2B = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  static_fields = (ServantStatusBattleListViewItem_o *)v13->static_fields;
  static_fields[1].klass = (ServantStatusBattleListViewItem_c *)type;
  sub_1B6406C(static_fields + 1, (int32_t)type, isSecuritey, (int32_t)gameAddress);
  v15 = NetworkManager_TypeInfo->static_fields;
  v15->gameServerSettingAddress = gameAddress;
  v15 = (struct NetworkManager_StaticFields *)((char *)v15 + 184);
  LOBYTE(v15[-1].errorDialogResponseData) = isSecuritey;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v15, (int32_t)gameAddress, v16, v17);
  v18 = NetworkManager_TypeInfo->static_fields;
  v18->dataServerSettingAddress = dataAddress;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->dataServerSettingAddress, (int32_t)dataAddress, v19, v20);
  v21 = NetworkManager_TypeInfo->static_fields;
  v21->webServerSettingAddress = webAddress;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->webServerSettingAddress, (int32_t)webAddress, v22, v23);
  NetworkManager__SetServerSetting_38139520(this, v24);
}


void __fastcall NetworkManager__SetServerSetting_38139520(NetworkManager_o *this, const MethodInfo *method)
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

  if ( (byte_49FBC2C & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBC2C = 1;
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
  if ( !byte_49F9DD3 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, method);
    byte_49F9DD3 = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  NetworkManager_TypeInfo->static_fields->serverSecurity = v7->static_fields->ReleaseNetworkSecurity;
  if ( !byte_49F9DD4 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, method);
    v7 = ManagerConfig_TypeInfo;
    byte_49F9DD4 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = ManagerConfig_TypeInfo;
  }
  p_gameServerRedirectAddress = &v7->static_fields->ReleaseGameServerAddress;
LABEL_21:
  v8 = System_String__Concat_61375396(*p_gameServerRedirectAddress, (System_String_o *)StringLiteral_1124/*"/"*/, 0LL);
  p_gameServerAddress = (ServantStatusBattleListViewItem_o *)&NetworkManager_TypeInfo->static_fields->gameServerAddress;
  p_gameServerAddress->klass = (ServantStatusBattleListViewItem_c *)v8;
  sub_1B6406C(p_gameServerAddress, (int32_t)v8, v10, v11);
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
  if ( !byte_49F9DD6 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, v15);
    byte_49F9DD6 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->webServerAddress, (int32_t)v22, v16, v17);
}


void __fastcall NetworkManager__SetServerTimeChkMovie(int64_t serverTimeChkMovie, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_49FBBDF & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FBBDF = 1;
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *key; // x20
  System_String_o *v8; // x0
  SignedData_SignedPackData_o *outData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FBC39 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    sub_1B640C8(&SignedData_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_20126/*"idempotencyKey"*/, v4);
    sub_1B640C8(&StringLiteral_20127/*"idempotencyKeySignature"*/, v5);
    byte_49FBC39 = 1;
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
    SignedPackData = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(key, 0LL);
    if ( !request
      || (RequestBase__replaceField_40878228(request, (System_String_o *)StringLiteral_20126/*"idempotencyKey"*/, SignedPackData, 0LL),
          !outData) )
    {
LABEL_16:
      sub_1B64324(SignedPackData);
    }
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(outData->fields.value, 0LL);
    RequestBase__addField_40850936(request, (System_String_o *)StringLiteral_20127/*"idempotencyKeySignature"*/, v8, 0LL);
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

  if ( (byte_49FBBD5 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, userName);
    byte_49FBBD5 = 1;
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
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&static_fields->userName,
      (int32_t)userName,
      genderType,
      (int32_t)method);
    NetworkManager_TypeInfo->static_fields->genderType = genderType;
  }
}


void __fastcall NetworkManager__SetSignup_38152572(
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

  if ( (byte_49FBBD6 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, userName);
    byte_49FBBD6 = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->userName, (int32_t)userName, genderType, month);
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

  if ( (byte_49FBBD1 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, userAgent);
    byte_49FBBD1 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->userAgent = userAgent;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->userAgent, (int32_t)userAgent, (int32_t)method, v3);
  this->fields._isWaitUserAgent_k__BackingField = 0;
}


void __fastcall NetworkManager__SetWebServerRedirect(System_String_o *address, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NetworkManager_c *v5; // x0
  struct NetworkManager_StaticFields *static_fields; // x0

  if ( (byte_49FBC16 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FBC16 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webServerRedirectAddress = address;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->webServerRedirectAddress, (int32_t)address, v2, v3);
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

  if ( (byte_49FBC46 & 1) == 0 )
  {
    sub_1B640C8(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, loginResultStr);
    sub_1B640C8(&JsonManager_TypeInfo, v4);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v5);
    byte_49FBC46 = 1;
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
           (const MethodInfo_2E9ED70 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  Il2CppObject *v46; // x0
  System_String_o *OldPaymentFileName; // x0
  System_String_o *OldUnityPersistentDataPath; // x0
  System_String_o *v49; // x26
  System_String_o *FileNameNotConverted; // x1
  NetworkManager_o *v51; // x0
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  System_String_o *v55; // x24
  const MethodInfo *v56; // x1
  System_String_o *v57; // x0
  System_String_o *v59; // x26
  const MethodInfo *v60; // x1
  System_String_o *v61; // x0
  const MethodInfo *v62; // x1
  NetworkManager_o *v63; // x0
  const MethodInfo *v64; // x2

  if ( (byte_49FBBE6 & 1) == 0 )
  {
    sub_1B640C8(&AccountingManager_TypeInfo, method);
    sub_1B640C8(&AndroidUtil_TypeInfo, v2);
    sub_1B640C8(&DatFileName_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AccountingManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FBBE6 = 1;
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
        System_IO_File__Copy_61564976(v21, v23, 1, 0LL);
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
      System_IO_File__Copy_61564976(v36, v38, 1, 0LL);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
      if ( AccountingManager__ReadOldPayment((AccountingManager_o *)Instance, 0LL) )
      {
        v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AccountingManager__get_Instance__);
        if ( !v46 )
          sub_1B64324(0LL);
        AccountingManager__WritePayment((AccountingManager_o *)v46, 0LL);
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
    v49 = System_String__Concat_61375396(OldUnityPersistentDataPath, (System_String_o *)StringLiteral_1124/*"/"*/, 0LL);
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    FileNameNotConverted = DatFileName__getFileNameNotConverted(16, 0LL);
    v51 = (NetworkManager_o *)System_String__Concat_61375396(v49, FileNameNotConverted, 0LL);
    if ( NetworkManager__LoadAuthMd5(v51, (System_String_o *)v51, v52) )
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
    v59 = NetworkManager__getAuthFileName(1, v53);
    v61 = NetworkManager__getAuthFileName(0, v60);
    System_IO_File__Copy_61564976(v59, v61, 1, 0LL);
    v63 = (NetworkManager_o *)NetworkManager__getAuthFileName(0, v62);
    AuthMd5 = NetworkManager__LoadAuthMd5(v63, (System_String_o *)v63, v64);
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
        System_IO_File__Copy_61564976(v29, v31, 1, 0LL);
      }
      else
      {
        if ( !System_String__op_Equality(v20, String, 0LL) )
          return 2;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v55 = NetworkManager__getAuthFileName(1, v54);
        v57 = NetworkManager__getAuthFileName(0, v56);
        System_IO_File__Copy_61564976(v55, v57, 1, 0LL);
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

  if ( (byte_49FBC03 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49FBC03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__InitConnect((CommonUI_o *)Instance, 0LL),
        TopHomeRequest__clearExpirationDate(0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall NetworkManager__TimeUpdate(
        NetworkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  NetworkManager__TimeUpdate_d__81_o *v3; // x19

  if ( (byte_49FBBCE & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager__TimeUpdate_d__81_TypeInfo, method);
    byte_49FBBCE = 1;
  }
  v3 = (NetworkManager__TimeUpdate_d__81_o *)sub_1B64314(NetworkManager__TimeUpdate_d__81_TypeInfo, method, v2);
  NetworkManager__TimeUpdate_d__81___ctor(v3, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v3;
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x20
  Il2CppObject *Instance; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  ErrorDialog_ClickDelegate_o *v24; // x24
  __int64 v25; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]

  if ( (byte_49FBBFA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, errorTitle);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v13);
    sub_1B640C8(&Method_NetworkManager_EndErrorDialog__, v14);
    sub_1B640C8(&Method_NetworkManager_EndErrorWebView__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B640C8(&WebViewManager_TypeInfo, v17);
    byte_49FBBFA = 1;
  }
  this->fields.errorCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.errorCallbackFunc,
    (int32_t)callback,
    (int32_t)errorDetail,
    (int32_t)errorUrl);
  if ( errorUrl )
  {
    v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_NetworkManager_EndErrorWebView__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(errorTitle, errorUrl, v20, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v22, v23);
    ErrorDialog_ClickDelegate___ctor(v24, (Il2CppObject *)this, Method_NetworkManager_EndErrorDialog__, 0LL);
    if ( !Instance )
      sub_1B64324(v25);
    *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
    effectDistance.fields.value.fields.y = 0.0;
    CommonUI__OpenWarningDialog(
      (CommonUI_o *)Instance,
      errorTitle,
      errorDetail,
      v24,
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

  if ( (byte_49FBBE8 & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    byte_49FBBE8 = 1;
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_IO_BinaryWriter_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_Dictionary_object__object__o *v25; // x23
  ManagerConfig_c *v26; // x0
  NetworkManager_c *v27; // x0
  System_String_o *v28; // x23
  System_String_o *v29; // x0
  System_String_o *v30; // x24
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  const MethodInfo *v35; // x1
  System_String_o *v36; // x21
  NetworkManager_c *v37; // x0

  if ( (byte_49FBBE9 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, fname);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&JsonManager_TypeInfo, v10);
    sub_1B640C8(&ManagerConfig_TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_24282/*"userCreateServer"*/, v13);
    sub_1B640C8(&StringLiteral_12447/*"SaveDataVer"*/, v14);
    sub_1B640C8(&StringLiteral_16902/*"authKey"*/, v15);
    sub_1B640C8(&StringLiteral_22983/*"secretKey"*/, v16);
    sub_1B640C8(&StringLiteral_24325/*"userId"*/, v17);
    sub_1B640C8(&StringLiteral_1/*""*/, v18);
    byte_49FBBE9 = 1;
  }
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(fname, 0LL);
  v22 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v20, v21);
  System_IO_BinaryWriter___ctor_61613552(v22, v19, 0LL);
  v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     v23,
                                                                     v24);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v25,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v26 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !v25 )
    sub_1B64324(v26);
  System_Collections_Generic_Dictionary_object__object___Add(
    v25,
    (Il2CppObject *)StringLiteral_12447/*"SaveDataVer"*/,
    (Il2CppObject *)ManagerConfig_TypeInfo->static_fields->SaveDataVer,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v27 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v27 = NetworkManager_TypeInfo;
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v25,
    (Il2CppObject *)StringLiteral_24282/*"userCreateServer"*/,
    (Il2CppObject *)v27->static_fields->gameServerAddress,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v25,
    (Il2CppObject *)StringLiteral_24325/*"userId"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->userId,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v25,
    (Il2CppObject *)StringLiteral_16902/*"authKey"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->authKey,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v25,
    (Il2CppObject *)StringLiteral_22983/*"secretKey"*/,
    (Il2CppObject *)NetworkManager_TypeInfo->static_fields->secretKey,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = JsonManager__toJson((Il2CppObject *)v25, 0, 0, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v29 = CatAndMouseGame__CatGame1(v28, 0, 0LL);
  v30 = v29;
  if ( !v22 )
    sub_1B64324(v29);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v22->klass->vtable._22_Write.method)(
    v22,
    v29,
    v22->klass[1]._1.image);
  klass = v22->klass;
  v32 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_17;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v34 = sub_1BB60A8(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v34)(v22, *(_QWORD *)(v34 + 8));
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  v36 = EncryptedPlayerPrefs__Md5(v30, v35);
  v37 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v37 = NetworkManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v37->static_fields->AUTHMD5_KEY_TYPE, v36, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_IO_BinaryWriter_o *v11; // x19
  long double inited; // q0
  NetworkManager_c *v13; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0

  if ( (byte_49FBBDA & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&ManagerConfig_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    byte_49FBBDA = 1;
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
      v11 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v9, v10);
      System_IO_BinaryWriter___ctor_61613552(v11, v8, 0LL);
      v13 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !v11 )
        sub_1B64324(v13);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v11->klass->vtable._22_Write.method)(
        v11,
        NetworkManager_TypeInfo->static_fields->friendCode,
        v11->klass[1]._1.image,
        inited);
      klass = v11->klass;
      v15 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v15;
          p_offset += 4;
          if ( !v15 )
            goto LABEL_18;
        }
        v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_18:
        v17 = sub_1BB60A8(v11, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v17)(v11, *(_QWORD *)(v17 + 8));
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_IO_BinaryWriter_o *v11; // x19
  long double inited; // q0
  NetworkManager_c *v13; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0

  if ( (byte_49FBBD7 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&ManagerConfig_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    byte_49FBBD7 = 1;
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
      v11 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v9, v10);
      System_IO_BinaryWriter___ctor_61613552(v11, v8, 0LL);
      v13 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !v11 )
        sub_1B64324(v13);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v11->klass->vtable._22_Write.method)(
        v11,
        NetworkManager_TypeInfo->static_fields->userName,
        v11->klass[1]._1.image,
        inited);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
        v11,
        (unsigned int)NetworkManager_TypeInfo->static_fields->genderType,
        v11->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
        v11,
        (unsigned int)NetworkManager_TypeInfo->static_fields->month,
        v11->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
        v11,
        (unsigned int)NetworkManager_TypeInfo->static_fields->day,
        v11->klass->vtable._18_Write.methodPtr);
      klass = v11->klass;
      v15 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v15;
          p_offset += 4;
          if ( !v15 )
            goto LABEL_18;
        }
        v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_18:
        v17 = sub_1BB60A8(v11, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v17)(v11, *(_QWORD *)(v17 + 8));
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

  if ( (byte_49FBC0A & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, method);
    sub_1B640C8(&DatFileName_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v4);
    byte_49FBC0A = 1;
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
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getBaseMockUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_49FBC22 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC22 = 1;
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

  if ( (byte_49FBC21 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_19952/*"https://"*/, v2);
    byte_49FBC21 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_61375396(
           (System_String_o *)StringLiteral_19952/*"https://"*/,
           v3->static_fields->gameServerAddress,
           0LL);
}


System_String_o *__fastcall NetworkManager__getDataUrl(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_49FBC23 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC23 = 1;
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

  if ( (byte_49FBBEE & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, v1);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    byte_49FBBEE = 1;
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


System_DateTime_o __fastcall NetworkManager__getDateTime_38073412(int64_t t, const MethodInfo *method)
{
  __int64 v3; // x1
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_49FBBEF & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    byte_49FBBEF = 1;
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

  if ( (byte_49FBC0E & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBC0E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(20, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getLocalDateTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_DateTime_o v3; // x0
  NetworkManager_c *v4; // x8
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_49FBBF0 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, v1);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    byte_49FBBF0 = 1;
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


System_DateTime_o __fastcall NetworkManager__getLocalDateTime_38162428(int64_t t, const MethodInfo *method)
{
  __int64 v3; // x1
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v6; // 0:x0.8
  System_DateTime_o v7; // 0:x0.8

  if ( (byte_49FBBF1 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    byte_49FBBF1 = 1;
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

  if ( (byte_49FBBEC & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBEC = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v5.fields._dateData = NetworkManager__getLocalDateTime((const MethodInfo *)v2).fields._dateData;
  return NetworkManager__getTime_38161648(v5, v3);
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
  System_String_o *text; // x20

  if ( (byte_49FBC26 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&UnityEngine_TextAsset_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_9055/*"Mock/"*/, v4);
    byte_49FBC26 = 1;
  }
  if ( !path )
    return 0LL;
  v5 = System_String__Concat_61375396((System_String_o *)StringLiteral_9055/*"Mock/"*/, path, 0LL);
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
    sub_1B64324(v9);
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

  if ( (byte_49FBBF7 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, v1);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    byte_49FBBF7 = 1;
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

  if ( (byte_49FBBF5 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, v1);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    byte_49FBBF5 = 1;
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
  System_DateTime___ctor_62054212(v14, Year, Month, v6, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v15.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_38161648(v15, v7);
}


int64_t __fastcall NetworkManager__getNextDayTime_38163100(int32_t hour, const MethodInfo *method)
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

  if ( (byte_49FBBF6 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    byte_49FBBF6 = 1;
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

  if ( (byte_49FBBF8 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, v1);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    byte_49FBBF8 = 1;
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
  System_DateTime___ctor_62054212(v14, v7, v6, 1, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v15.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_38161648(v15, v8);
}


int64_t __fastcall NetworkManager__getNextMonthTime_38163812(int32_t day, const MethodInfo *method)
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

  if ( (byte_49FBBF9 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    byte_49FBBF9 = 1;
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
  System_DateTime___ctor_62054212(v13, Year, Month, day, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v14.fields._dateData = dateTime.fields._dateData;
  return NetworkManager__getTime_38161648(v14, v6);
}


System_String_o *__fastcall NetworkManager__getOldAuthFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FBC09 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBC09 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(16, 0LL);
  return System_String__Concat_61386656(temporaryCachePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall NetworkManager__getOldSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *temporaryCachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FBC0B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBC0B = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  temporaryCachePath = UnityEngine_Application__get_temporaryCachePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_61386656(temporaryCachePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


Il2CppObject *__fastcall NetworkManager__getRequest_object_(
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo_2EBA9D0 *method)
{
  const MethodInfo_2D91BEC **rgctx_data; // x8
  Il2CppObject *Instance_object; // x0
  Il2CppObject *v6; // x19
  ServantStatusBattleListViewItem_o *v7; // x21
  System_Delegate_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Delegate_o *v11; // x8
  NetworkManager_ResultCallbackFunc_c *v12; // x1

  rgctx_data = (const MethodInfo_2D91BEC **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, method);
    rgctx_data = (const MethodInfo_2D91BEC **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000();
      rgctx_data = (const MethodInfo_2D91BEC **)method->rgctx_data;
    }
  }
  Instance_object = System_Activator__CreateInstance_object_(*rgctx_data);
  if ( !Instance_object )
    sub_1B64324(0LL);
  v6 = Instance_object;
  v7 = (ServantStatusBattleListViewItem_o *)&Instance_object[1];
  v8 = System_Delegate__Combine((System_Delegate_o *)Instance_object[1].klass, (System_Delegate_o *)func, 0LL);
  v11 = v8;
  if ( !v8 )
    goto LABEL_9;
  v12 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( (NetworkManager_ResultCallbackFunc_c *)v8->klass != NetworkManager_ResultCallbackFunc_TypeInfo
    || (v7->klass = (ServantStatusBattleListViewItem_c *)v8, (NetworkManager_ResultCallbackFunc_c *)v8->klass != v12) )
  {
    sub_1B645E4(v8);
LABEL_9:
    v7->klass = (ServantStatusBattleListViewItem_c *)v11;
  }
  sub_1B6406C(v7, (int32_t)v11, v9, v10);
  return v6;
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

  if ( (byte_49FBBF2 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, v1);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    byte_49FBBF2 = 1;
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
  System_TimeSpan___ctor_62280252(v10, 9, 0, 0, 0LL);
  v13.fields._ticks = value.fields._ticks;
  v11.fields._dateData = (uint64_t)&dateData;
  return System_DateTime__Add(v11, v13, 0LL);
}


System_DateTime_o __fastcall NetworkManager__getServerDateTime_38078100(int64_t t, const MethodInfo *method)
{
  __int64 v3; // x1
  System_TimeSpan_o value; // [xsp+0h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v7; // 0:x0.8
  System_TimeSpan_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_TimeSpan_o v11; // 0:x1.8

  if ( (byte_49FBBF3 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    byte_49FBBF3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v7.fields._dateData = (uint64_t)&NetworkManager_TypeInfo->static_fields->dtUnixEpoch;
  value.fields._ticks = 0LL;
  dateData = System_DateTime__AddSeconds(v7, (double)t, 0LL).fields._dateData;
  v8.fields._ticks = (int64_t)&value;
  System_TimeSpan___ctor_62280252(v8, 9, 0, 0, 0LL);
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

  if ( (byte_49FBC0D & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBC0D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(19, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


int64_t __fastcall NetworkManager__getServerTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0
  const MethodInfo *v3; // x1
  System_DateTime_o v5; // 0:x0.8

  if ( (byte_49FBBED & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBED = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v5.fields._dateData = NetworkManager__getServerDateTime((const MethodInfo *)v2).fields._dateData;
  return NetworkManager__getTime_38161648(v5, v3);
}


System_String_o *__fastcall NetworkManager__getSignupFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FBC0C & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBC0C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(18, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


void __fastcall NetworkManager__getStoreUrl(
        System_String_o *storeName,
        System_String_o *id,
        NetworkManager_StoreCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4
  UnityEngine_MonoBehaviour_o *v9; // x22
  System_Collections_IEnumerator_o *updated; // x1

  if ( (byte_49FBC25 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, id);
    byte_49FBC25 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  v9 = (UnityEngine_MonoBehaviour_o *)Instance;
  updated = NetworkManager__RequestApplicationUpdateCR((NetworkManager_o *)Instance, storeName, id, callback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008(v9, updated, 0LL);
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
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x19
  __int64 v27; // x0
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF
  int64_t UserId; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FBC32 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&long_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&object___TypeInfo, v5);
    sub_1B640C8(&StringLiteral_551/*"&gachaId="*/, v6);
    sub_1B640C8(&StringLiteral_24578/*"webview/summonDetail?userId="*/, v7);
    byte_49FBC32 = 1;
  }
  v9 = (System_Object_array *)sub_1B64170(object___TypeInfo, 5LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(0, v8);
  if ( !v9 )
    sub_1B64324(BaseUrl);
  v14 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B64204(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
  }
  if ( !v9->max_length )
    goto LABEL_26;
  v9->m_Items[0] = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v9->m_Items, (int32_t)v14, v12, v13);
  BaseUrl = (System_String_o *)StringLiteral_24578/*"webview/summonDetail?userId="*/;
  if ( StringLiteral_24578/*"webview/summonDetail?userId="*/ )
  {
    BaseUrl = (System_String_o *)sub_1B64204(StringLiteral_24578/*"webview/summonDetail?userId="*/, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
    v11 = StringLiteral_24578/*"webview/summonDetail?userId="*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_26;
  v9->m_Items[1] = (Il2CppObject *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->m_Items[1], v11, v15, v16);
  UserId = NetworkManager__get_UserId(v17);
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserId);
  v20 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B64204(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_26;
  v9->m_Items[2] = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->m_Items[2], (int32_t)v20, v18, v19);
  BaseUrl = (System_String_o *)StringLiteral_551/*"&gachaId="*/;
  if ( StringLiteral_551/*"&gachaId="*/ )
  {
    BaseUrl = (System_String_o *)sub_1B64204(StringLiteral_551/*"&gachaId="*/, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
      goto LABEL_27;
    v11 = StringLiteral_551/*"&gachaId="*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_26;
  v9->m_Items[3] = (Il2CppObject *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->m_Items[3], v11, v21, v22);
  v28 = gachaId;
  BaseUrl = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v25 = (Il2CppObject *)BaseUrl;
  if ( BaseUrl )
  {
    BaseUrl = (System_String_o *)sub_1B64204(BaseUrl, v9->obj.klass->_1.element_class);
    if ( !BaseUrl )
    {
LABEL_27:
      v27 = sub_1B64348(BaseUrl);
      sub_1B641F0(v27, 0LL);
    }
  }
  if ( v9->max_length <= 4 )
LABEL_26:
    sub_1B6432C(BaseUrl, v11);
  v9->m_Items[4] = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->m_Items[4], (int32_t)v25, v23, v24);
  return System_String__Concat_61386848(v9, 0LL);
}


int64_t __fastcall NetworkManager__getTime(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x8
  const MethodInfo *v3; // x1
  int64_t Time_38161648; // x0
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_49FBBEA & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBEA = 1;
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
    Time_38161648 = NetworkManager__getTime_38161648(v6, v3);
    v2 = NetworkManager_TypeInfo;
    NetworkManager_TypeInfo->static_fields->nowTime = Time_38161648;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->nowTime;
}


int64_t __fastcall NetworkManager__getTime_38161648(System_DateTime_o dateTime, const MethodInfo *method)
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
  if ( (byte_49FBBEB & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    sub_1B640C8(&System_TimeSpan_TypeInfo, v3);
    byte_49FBBEB = 1;
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

  if ( (byte_49FBBF4 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, v1);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    byte_49FBBF4 = 1;
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
  __int64 *v27; // x8
  NetworkManager_c *v28; // x0
  System_String_o *v29; // x21
  System_String_o **v30; // x9
  __int64 *v31; // x8
  NetworkManager_c *v32; // x0
  System_String_o *v33; // x19
  System_String_o **v34; // x9
  NetworkManager_c *v35; // x0
  int64_t Time; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  int32_t v38; // w21
  int32_t v39; // w20
  System_String_o *v40; // x2
  __int64 *v41; // x8
  System_String_o *v42; // x0
  __int64 *v43; // x8
  System_String_o *v44; // x1
  int64_t v46; // [xsp+0h] [xbp-40h] BYREF
  int64_t v47; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FBC24 & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, isSecurity);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_20960/*"lastAccessTime="*/, v8);
    sub_1B640C8(&StringLiteral_560/*"&v="*/, v9);
    sub_1B640C8(&StringLiteral_19915/*"http://"*/, v10);
    sub_1B640C8(&StringLiteral_1212/*"/webview/"*/, v11);
    sub_1B640C8(&StringLiteral_1875/*"?"*/, v12);
    sub_1B640C8(&StringLiteral_1883/*"?lastAccessTime="*/, v13);
    sub_1B640C8(&StringLiteral_19951/*"https:"*/, v14);
    sub_1B640C8(&StringLiteral_554/*"&lastAccessTime="*/, v15);
    sub_1B640C8(&StringLiteral_19340/*"file:"*/, v16);
    sub_1B640C8(&StringLiteral_19952/*"https://"*/, v17);
    sub_1B640C8(&StringLiteral_1/*""*/, v18);
    sub_1B640C8(&StringLiteral_1886/*"?v="*/, v19);
    sub_1B640C8(&StringLiteral_19914/*"http:"*/, v20);
    byte_49FBC24 = 1;
  }
  v21 = ManagerConfig_TypeInfo;
  v46 = 0LL;
  v47 = 0LL;
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
    v31 = &StringLiteral_19952/*"https://"*/;
    v32 = NetworkManager_TypeInfo;
    if ( !v25 )
      v31 = &StringLiteral_19915/*"http://"*/;
    v33 = (System_String_o *)*v31;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v32 = NetworkManager_TypeInfo;
    }
    v34 = (System_String_o **)&StringLiteral_1212/*"/webview/"*/;
    if ( !isWebView )
      v34 = (System_String_o **)&StringLiteral_1/*""*/;
    v26 = System_String__Concat_61386656(v33, v32->static_fields->webServerAddress, *v34, 0LL);
    goto LABEL_33;
  }
  v25 = 0;
  if ( !path )
    goto LABEL_26;
LABEL_15:
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19340/*"file:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_34;
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19914/*"http:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_34;
  v26 = (System_String_o *)System_String__StartsWith(path, (System_String_o *)StringLiteral_19951/*"https:"*/, 0LL);
  if ( ((unsigned __int8)v26 & 1) != 0 )
    goto LABEL_34;
  v27 = &StringLiteral_19952/*"https://"*/;
  v28 = NetworkManager_TypeInfo;
  if ( !v25 )
    v27 = &StringLiteral_19915/*"http://"*/;
  v29 = (System_String_o *)*v27;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v28 = NetworkManager_TypeInfo;
  }
  v30 = (System_String_o **)&StringLiteral_1212/*"/webview/"*/;
  if ( !isWebView )
    v30 = (System_String_o **)&StringLiteral_1/*""*/;
  v26 = System_String__Concat_61388660(v29, v28->static_fields->webServerAddress, *v30, path, 0LL);
LABEL_33:
  path = v26;
LABEL_34:
  if ( isWebView )
  {
    if ( !path )
      sub_1B64324(v26);
    if ( System_String__StartsWith(path, (System_String_o *)StringLiteral_19914/*"http:"*/, 0LL)
      || System_String__StartsWith(path, (System_String_o *)StringLiteral_19951/*"https:"*/, 0LL) )
    {
      v35 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime((const MethodInfo *)v35);
      static_fields = NetworkManager_TypeInfo->static_fields;
      v46 = Time / static_fields->WebCacheTime;
      v47 = Time;
      v38 = System_String__IndexOf_61406964(path, static_fields->webServerAddress, 0LL);
      v39 = System_String__IndexOf_61406964(path, (System_String_o *)StringLiteral_1875/*"?"*/, 0LL);
      if ( (v38 & 0x80000000) == 0 )
      {
        v40 = System_Int64__ToString((int64_t)&v46, 0LL);
        if ( (v39 & 0x80000000) != 0 )
          v41 = &StringLiteral_1886/*"?v="*/;
        else
          v41 = &StringLiteral_560/*"&v="*/;
        v44 = (System_String_o *)*v41;
        return System_String__Concat_61386656(path, v44, v40, 0LL);
      }
      if ( (v39 & 0x80000000) != 0 )
      {
        v42 = System_Int64__ToString((int64_t)&v47, 0LL);
        v43 = &StringLiteral_1883/*"?lastAccessTime="*/;
        goto LABEL_49;
      }
      if ( (System_String__IndexOf_61406964(path, (System_String_o *)StringLiteral_20960/*"lastAccessTime="*/, 0LL) & 0x80000000) != 0 )
      {
        v42 = System_Int64__ToString((int64_t)&v47, 0LL);
        v43 = &StringLiteral_554/*"&lastAccessTime="*/;
LABEL_49:
        v44 = (System_String_o *)*v43;
        v40 = v42;
        return System_String__Concat_61386656(path, v44, v40, 0LL);
      }
    }
  }
  return path;
}


System_String_o *__fastcall NetworkManager__getWebViewAddress(System_String_o *path, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_49FBC2F & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FBC2F = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  return System_String__Concat_61375396(v3->static_fields->webViewBaseURL, path, 0LL);
}


System_String_o *__fastcall NetworkManager__getWebViewAddress_38174564(int32_t addressType, const MethodInfo *method)
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

  if ( (byte_49FBC31 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_22848/*"rights"*/, v6);
    sub_1B640C8(&StringLiteral_23574/*"summonDetail"*/, v7);
    sub_1B640C8(&StringLiteral_18364/*"dBanner"*/, v8);
    sub_1B640C8(&StringLiteral_23789/*"terms"*/, v9);
    sub_1B640C8(&StringLiteral_17321/*"boxGacha"*/, v10);
    sub_1B640C8(&StringLiteral_21960/*"news"*/, v11);
    sub_1B640C8(&StringLiteral_18256/*"credit"*/, v12);
    sub_1B640C8(&StringLiteral_19823/*"help"*/, v13);
    sub_1B640C8(&StringLiteral_23316/*"spdeal"*/, v14);
    sub_1B640C8(&StringLiteral_18147/*"contact"*/, v15);
    sub_1B640C8(&StringLiteral_23725/*"tBanner"*/, v16);
    sub_1B640C8(&StringLiteral_18489/*"deleteAccount"*/, v17);
    sub_1B640C8(&StringLiteral_1/*""*/, v18);
    sub_1B640C8(&StringLiteral_24510/*"warBoard"*/, v19);
    sub_1B640C8(&StringLiteral_22511/*"privacyPolicy"*/, v20);
    byte_49FBC31 = 1;
  }
  v21 = &StringLiteral_19823/*"help"*/;
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
        v21 = &StringLiteral_21960/*"news"*/;
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
                  (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
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
                                        (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        }
        sub_1B64324(webViewAddress);
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      return static_fields->IOS_ExaminationNewsUrl;
    case 1:
      v21 = &StringLiteral_23574/*"summonDetail"*/;
      goto LABEL_23;
    case 2:
      goto LABEL_23;
    case 3:
      v21 = &StringLiteral_18147/*"contact"*/;
      goto LABEL_23;
    case 4:
      v21 = &StringLiteral_23789/*"terms"*/;
      goto LABEL_23;
    case 5:
      v21 = &StringLiteral_18256/*"credit"*/;
      goto LABEL_23;
    case 6:
      v21 = &StringLiteral_22848/*"rights"*/;
      goto LABEL_23;
    case 7:
      v21 = &StringLiteral_23725/*"tBanner"*/;
      goto LABEL_23;
    case 8:
      v21 = &StringLiteral_23316/*"spdeal"*/;
      goto LABEL_23;
    case 9:
      v21 = &StringLiteral_17321/*"boxGacha"*/;
      goto LABEL_23;
    case 10:
      v21 = &StringLiteral_18364/*"dBanner"*/;
      goto LABEL_23;
    case 11:
      v21 = &StringLiteral_22511/*"privacyPolicy"*/;
      goto LABEL_23;
    case 12:
      v21 = &StringLiteral_18489/*"deleteAccount"*/;
      goto LABEL_23;
    case 13:
      v21 = &StringLiteral_24510/*"warBoard"*/;
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
  if ( (byte_49FBC30 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_19951/*"https:"*/, v3);
    path = (System_String_o *)sub_1B640C8(&StringLiteral_19914/*"http:"*/, v4);
    byte_49FBC30 = 1;
  }
  if ( !v2 )
    sub_1B64324(path);
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_19914/*"http:"*/, 0LL)
    || System_String__StartsWith(v2, (System_String_o *)StringLiteral_19951/*"https:"*/, 0LL) )
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

  if ( (byte_49FBC36 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBC36 = 1;
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

  if ( (byte_49FBBCA & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBCA = 1;
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

  if ( (byte_49FBBC8 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBC8 = 1;
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

  if ( (byte_49FBBC4 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBC4 = 1;
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

  if ( (byte_49FBBC7 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBC7 = 1;
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

  if ( (byte_49FBBC9 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FBBC9 = 1;
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

  if ( (byte_49FBC37 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FBC37 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->errorDialogResponseData = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->errorDialogResponseData, (int32_t)value, v2, v3);
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
  struct NetworkManager_StaticFields *static_fields; // x8
  System_String_o *dataServerAddress; // x0
  NetworkManager_c *v19; // x0
  struct NetworkManager_StaticFields *v20; // x8
  System_String_o *v21; // x19
  __int64 v22; // x1
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

  if ( (byte_49FBC2D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, *(_QWORD *)&addressType);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&string___TypeInfo, v6);
    sub_1B640C8(&StringLiteral_1138/*"/AssetStorages/"*/, v7);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v8);
    sub_1B640C8(&StringLiteral_20825/*"jar:"*/, v9);
    byte_49FBC2D = 1;
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
      v14 = System_String__Concat_61388660(
              streamingAssetsPath,
              (System_String_o *)StringLiteral_1138/*"/AssetStorages/"*/,
              v11->static_fields->PlatformName,
              (System_String_o *)StringLiteral_1124/*"/"*/,
              0LL);
      v15 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v15 = NetworkManager_TypeInfo;
      }
      p_dataServerAddress = (ServantStatusBattleListViewItem_o *)&v15->static_fields->dataServerAddress;
      p_dataServerAddress->klass = (ServantStatusBattleListViewItem_c *)v14;
      sub_1B6406C(p_dataServerAddress, (int32_t)v14, v12, v13);
      static_fields = NetworkManager_TypeInfo->static_fields;
      dataServerAddress = static_fields->dataServerAddress;
      if ( !dataServerAddress )
        goto LABEL_59;
      if ( System_String__StartsWith(dataServerAddress, static_fields->FILE_URL_SCHEME, 0LL) )
        return;
      v19 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v19 = NetworkManager_TypeInfo;
      }
      v20 = v19->static_fields;
      v21 = v20->dataServerAddress;
      dataServerAddress = System_String__Concat_61375396(
                            (System_String_o *)StringLiteral_20825/*"jar:"*/,
                            v20->FILE_URL_SCHEME,
                            0LL);
      if ( !v21 )
LABEL_59:
        sub_1B64324(dataServerAddress);
      if ( System_String__StartsWith(v21, dataServerAddress, 0LL) )
        return;
      v60 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v60 = NetworkManager_TypeInfo;
      }
      v54 = System_String__Concat_61375396(
              v60->static_fields->FILE_URL_SCHEME,
              v60->static_fields->dataServerAddress,
              0LL);
LABEL_53:
      v57 = NetworkManager_TypeInfo;
      goto LABEL_54;
    case 1:
      v25 = sub_1B64170(string___TypeInfo, 5LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_49F9DD5 )
      {
        sub_1B640C8(&ManagerConfig_TypeInfo, v22);
        byte_49F9DD5 = 1;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 32), v26, v23, v24);
      if ( *(_DWORD *)(v25 + 24) <= 1u )
        goto LABEL_58;
      v29 = StringLiteral_1124/*"/"*/;
      *(_QWORD *)(v25 + 40) = StringLiteral_1124/*"/"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 40), v29, v27, v28);
      if ( *(_DWORD *)(v25 + 24) <= 2u )
        goto LABEL_58;
      dataServerFolder = NetworkManager_TypeInfo->static_fields->dataServerFolder;
      *(_QWORD *)(v25 + 48) = dataServerFolder;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 48), (int32_t)dataServerFolder, v30, v31);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 56), v35, v33, v34);
      if ( *(_DWORD *)(v25 + 24) <= 4u )
        goto LABEL_58;
      v38 = StringLiteral_1124/*"/"*/;
      goto LABEL_49;
    case 2:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_49F9DD5 )
      {
        sub_1B640C8(&ManagerConfig_TypeInfo, *(_QWORD *)&addressType);
        byte_49F9DD5 = 1;
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
      v54 = System_String__Concat_61388660(
              ReleaseDataServerAddress,
              (System_String_o *)StringLiteral_1124/*"/"*/,
              v39->PlatformName,
              (System_String_o *)StringLiteral_1124/*"/"*/,
              0LL);
      goto LABEL_53;
    case 3:
      dataServerAddress = (System_String_o *)sub_1B64170(string___TypeInfo, 5LL);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)dataServerRedirectAddress, v41, v42);
      if ( *(_DWORD *)(v25 + 24) <= 1u )
        goto LABEL_58;
      v47 = StringLiteral_1124/*"/"*/;
      *(_QWORD *)(v25 + 40) = StringLiteral_1124/*"/"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 40), v47, v45, v46);
      if ( *(_DWORD *)(v25 + 24) <= 2u )
        goto LABEL_58;
      v50 = NetworkManager_TypeInfo->static_fields->dataServerFolder;
      *(_QWORD *)(v25 + 48) = v50;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 48), (int32_t)v50, v48, v49);
      dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        dataServerAddress = (System_String_o *)ManagerConfig_TypeInfo;
      }
      if ( *(_DWORD *)(v25 + 24) <= 3u
        || (v53 = *(_QWORD *)(*(_QWORD *)&dataServerAddress[7].fields + 128LL),
            *(_QWORD *)(v25 + 56) = v53,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 56), v53, v51, v52),
            *(_DWORD *)(v25 + 24) <= 4u) )
      {
LABEL_58:
        sub_1B6432C(dataServerAddress, v22);
      }
      v38 = StringLiteral_1124/*"/"*/;
LABEL_49:
      *(_QWORD *)(v25 + 64) = v38;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 64), v38, v36, v37);
      v54 = System_String__Concat_61388924((System_String_array *)v25, 0LL);
      v57 = NetworkManager_TypeInfo;
LABEL_54:
      v58 = (ServantStatusBattleListViewItem_c *)v54;
      v59 = (ServantStatusBattleListViewItem_o *)&v57->static_fields->dataServerAddress;
      v59->klass = v58;
      sub_1B6406C(v59, (int32_t)v58, v55, v56);
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
  System_Collections_Generic_Dictionary_object__object__o *webViewAddress; // x0
  _BOOL8 v21; // x0
  Il2CppObject *currentKey; // x21
  Il2CppObject *Item; // x0
  System_String_o *v24; // x0
  Il2CppObject *v25; // x22
  NetworkManager_c *v26; // x0
  System_Collections_Generic_Dictionary_object__object__o *v27; // x0
  Il2CppObject *v28; // x0
  System_String_o *v29; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v31; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FBC2E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, contactURL);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__,
      v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_18147/*"contact"*/, v14);
    sub_1B640C8(&StringLiteral_18489/*"deleteAccount"*/, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    sub_1B640C8(&StringLiteral_22511/*"privacyPolicy"*/, v17);
    byte_49FBC2E = 1;
  }
  v18 = NetworkManager_TypeInfo;
  memset(&v31, 0, sizeof(v31));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v18 = NetworkManager_TypeInfo;
  }
  p_webViewBaseURL = (ServantStatusBattleListViewItem_o *)&v18->static_fields->webViewBaseURL;
  p_webViewBaseURL->klass = (ServantStatusBattleListViewItem_c *)baseURL;
  sub_1B6406C(p_webViewBaseURL, (int32_t)baseURL, (int32_t)filePassInfo, (int32_t)method);
  webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)NetworkManager_TypeInfo->static_fields->webViewAddress;
  if ( !webViewAddress
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          webViewAddress,
          (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        !filePassInfo)
    || (webViewAddress = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
                                                                                      (const MethodInfo_31790D8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__)) == 0LL )
  {
    sub_1B64324(webViewAddress);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v30,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)webViewAddress,
    (const MethodInfo_33D2D0C *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v21 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v31,
            (const MethodInfo_32770EC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    if ( !v21 )
      break;
    currentKey = v31.fields._currentKey;
    if ( !v31.fields._currentKey )
      sub_1B64324(v21);
    if ( System_String__Equals_61383712(
           (System_String_o *)v31.fields._currentKey,
           (System_String_o *)StringLiteral_18147/*"contact"*/,
           0LL)
      || System_String__Equals_61383712((System_String_o *)currentKey, (System_String_o *)StringLiteral_22511/*"privacyPolicy"*/, 0LL)
      || System_String__Equals_61383712((System_String_o *)currentKey, (System_String_o *)StringLiteral_18489/*"deleteAccount"*/, 0LL) )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
               currentKey,
               (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        sub_1B64324(0LL);
      v24 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
    }
    else
    {
      v28 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)filePassInfo,
              currentKey,
              (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v28 )
        sub_1B64324(0LL);
      v29 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v28->klass->vtable[3].method)(
                                 v28,
                                 v28->klass->vtable[4].methodPtr);
      v24 = System_String__Concat_61375396(baseURL, v29, 0LL);
    }
    v25 = (Il2CppObject *)v24;
    v26 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v26 = NetworkManager_TypeInfo;
    }
    v27 = (System_Collections_Generic_Dictionary_object__object__o *)v26->static_fields->webViewAddress;
    if ( !v27 )
      sub_1B64324(0LL);
    System_Collections_Generic_Dictionary_object__object___Add(
      v27,
      currentKey,
      v25,
      (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v31,
    (const MethodInfo_32770E8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AC338;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19AC318;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AC2D0;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall NetworkManager_LoginCallbackFunc__EndInvoke(
        NetworkManager_LoginCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AC294;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19AC274;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AC22C;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall NetworkManager_ResultCallbackFunc__EndInvoke(
        NetworkManager_ResultCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AC3DC;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19AC3BC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AC374;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall NetworkManager_StoreCallbackFunc__EndInvoke(
        NetworkManager_StoreCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v24; // x1
  __int64 v25; // x2
  struct ResponseCommandBase_array **p_commandList; // x21
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  ManagerConfig_c *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  UnityEngine_Coroutine_o *communicationCoroutine; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  NetworkManager_c *v43; // x0
  struct NetworkManager_StaticFields *static_fields; // x0
  struct NetworkManager_StaticFields *v45; // x0
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x0
  __int64 v50; // x0
  UnityEngine_Object_o *v51; // x20
  System_Collections_Generic_List_object__o *v52; // x22
  __int64 v53; // x1
  __int64 v54; // x2
  PurchaseByBankResponseCommand_o *v55; // x23
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  MissionNotifyResponseCommand_o *v64; // x23
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  System_Object_array *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  __int64 v74; // x1
  __int64 v75; // x2
  System_Collections_Generic_Dictionary_object__object__o *v76; // x23
  int32_t v77; // w2
  int32_t v78; // w3
  __int64 v79; // x1
  struct ResponseCommandBase_array *commandList; // x8
  __int64 v81; // x25
  int max_length; // w9
  __int64 v83; // x8
  Il2CppObject *v84; // x23
  System_Collections_Generic_Dictionary_object__object__o *commandLookup; // x24

  v4 = this;
  if ( (byte_49FBC59 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ResponseCommandBase__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ResponseCommandBase___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_ResponseCommandBase__TypeInfo, v11);
    sub_1B640C8(&ManagerConfig_TypeInfo, v12);
    sub_1B640C8(&MissionNotifyResponseCommand_TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&PurchaseByBankResponseCommand_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_RequestBase__Clear__, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    this = (NetworkManager__Initialize_d__82_o *)sub_1B640C8(&StringLiteral_1/*""*/, v21);
    byte_49FBC59 = 1;
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
      v52 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_ResponseCommandBase__TypeInfo,
                                                           v24,
                                                           v25);
      System_Collections_Generic_List_object____ctor(
        v52,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ResponseCommandBase___ctor__);
      v55 = (PurchaseByBankResponseCommand_o *)sub_1B64314(PurchaseByBankResponseCommand_TypeInfo, v53, v54);
      PurchaseByBankResponseCommand___ctor(v55, 0LL);
      if ( !v52 )
        goto LABEL_49;
      items = v52->fields._items;
      v59 = Method_System_Collections_Generic_List_ResponseCommandBase__Add__;
      ++v52->fields._version;
      if ( !items )
        goto LABEL_49;
      size = v52->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)v55,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = &items->obj.klass + size;
        v52->fields._size = size + 1;
        v61[4] = (Il2CppClass *)v55;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v55, v56, v57);
      }
      v64 = (MissionNotifyResponseCommand_o *)sub_1B64314(MissionNotifyResponseCommand_TypeInfo, v62, v63);
      MissionNotifyResponseCommand___ctor(v64, 0LL);
      v67 = v52->fields._items;
      v68 = Method_System_Collections_Generic_List_ResponseCommandBase__Add__;
      ++v52->fields._version;
      if ( !v67 )
        goto LABEL_49;
      v69 = v52->fields._size;
      if ( (unsigned int)v69 >= v67->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)v64,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &v67->obj.klass + v69;
        v52->fields._size = v69 + 1;
        v70[4] = (Il2CppClass *)v64;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)v64, v65, v66);
      }
      v71 = System_Collections_Generic_List_object___ToArray(
              v52,
              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ResponseCommandBase__ToArray__);
      _4__this->fields.commandList = (struct ResponseCommandBase_array *)v71;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.commandList, (int32_t)v71, v72, v73);
      v76 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                         System_Collections_Generic_Dictionary_string__ResponseCommandBase__TypeInfo,
                                                                         v74,
                                                                         v75);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v76,
        (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase___ctor__);
      _4__this->fields.commandLookup = (struct System_Collections_Generic_Dictionary_string__ResponseCommandBase__o *)v76;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.commandLookup, (int32_t)v76, v77, v78);
      commandList = _4__this->fields.commandList;
      if ( !commandList )
        goto LABEL_49;
      v81 = 0LL;
      while ( 1 )
      {
        max_length = commandList->max_length;
        if ( (int)v81 >= max_length )
          break;
        if ( (unsigned int)v81 >= max_length )
          sub_1B6432C(this, v79);
        v83 = (__int64)commandList + 8 * v81;
        v84 = *(Il2CppObject **)(v83 + 32);
        if ( v84 )
        {
          commandLookup = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.commandLookup;
          this = (NetworkManager__Initialize_d__82_o *)ResponseCommandBase__GetCommandName(
                                                         *(ResponseCommandBase_o **)(v83 + 32),
                                                         0LL);
          if ( commandLookup )
          {
            System_Collections_Generic_Dictionary_object__object___Add(
              commandLookup,
              (Il2CppObject *)this,
              v84,
              (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__ResponseCommandBase__Add__);
            commandList = *p_commandList;
            ++v81;
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
      sub_1B6406C(p__2__current, 0, v2, v3);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    v29 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v29 = ManagerConfig_TypeInfo;
    }
    if ( v29->static_fields->UseAppServer )
      NetworkServicePluginScript__CheckService(0LL);
    this = (NetworkManager__Initialize_d__82_o *)_4__this->fields.communicationWaitList;
    if ( this )
    {
      System_Collections_Generic_Queue_object___Clear(
        (System_Collections_Generic_Queue_T__o *)this,
        (const MethodInfo_36227A4 *)Method_System_Collections_Generic_Queue_RequestBase__Clear__);
      communicationCoroutine = _4__this->fields.communicationCoroutine;
      if ( communicationCoroutine )
        UnityEngine_MonoBehaviour__StopCoroutine_69113628(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          communicationCoroutine,
          0LL);
      _4__this->fields.communicationWork = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationWork, 0, v30, v31);
      _4__this->fields.communicationCoroutine = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationCoroutine, 0, v33, v34);
      _4__this->fields.communicationWorkResponseList = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationWorkResponseList, 0, v35, v36);
      _4__this->fields.cacheRefreshWork = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.cacheRefreshWork, 0, v37, v38);
      _4__this->fields.cacheRefreshWorkResponseList = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.cacheRefreshWorkResponseList, 0, v39, v40);
      v43 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v43 = NetworkManager_TypeInfo;
      }
      static_fields = v43->static_fields;
      static_fields->sessionId = 0LL;
      static_fields = (struct NetworkManager_StaticFields *)((char *)static_fields + 128);
      LOBYTE(static_fields[-1].gameServerRedirectAddress) = 0;
      LOWORD(static_fields->WebCacheTime) = 0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)static_fields, 0, v41, v42);
      v45 = NetworkManager_TypeInfo->static_fields;
      v46 = (int)StringLiteral_1/*""*/;
      v45->dataServerFolder = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->dataServerFolder, v46, v47, v48);
      v49 = *((_QWORD *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__getInstance__ + 4);
      if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
        v49 = sub_1BB5FA4(v49);
      v50 = *(_QWORD *)(*(_QWORD *)(v49 + 192) + 16LL);
      if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
        v50 = sub_1BB5FA4(v50);
      v51 = **(UnityEngine_Object_o ***)(v50 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v51, 0LL, 0LL) )
      {
        this = (NetworkManager__Initialize_d__82_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)_4__this,
                                                       0LL);
        if ( !this )
          goto LABEL_49;
        UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UnityWebRequestWWWSingleton___);
      }
      this = (NetworkManager__Initialize_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        DataManager__Initialize((DataManager_o *)this, 0LL);
        this = (NetworkManager__Initialize_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonNotificationManager__get_Instance__);
        if ( this )
        {
          AvalonNotificationManager__Initialize((AvalonNotificationManager_o *)this, 0LL);
          return 0;
        }
      }
    }
LABEL_49:
    sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_NetworkManager__Initialize_d__82_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *Item; // x20
  System_Object_array *v32; // x0
  __int64 v33; // x8
  System_Object_array *v34; // x20
  System_Collections_Generic_Dictionary_object__object__o *v35; // x0
  __int64 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  ServantStatusBattleListViewItem_o *p_url_5__2; // x0
  System_String_o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  DelightWorks_Network_UnityWebRequestWWW_o *v44; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *www_5__3; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v49; // w2
  int32_t v50; // w3
  bool result; // w0
  struct NetworkManager_StoreCallbackFunc_o *callback; // x8
  __int64 v53; // x1
  __int64 v54; // x2
  UnityEngine_WaitForSeconds_o *v55; // x20
  ServantStatusBattleListViewItem_o *v56; // x19
  int32_t v57; // w2
  int32_t v58; // w3
  int v59; // w8
  int32_t v60; // w3
  System_String_o *id; // x1
  System_String_o **v62; // x21
  ManagerConfig_c *v63; // x0
  struct System_String_o *AndroidPackageName; // x1
  System_String_o *v65; // x0
  UnityEngine_WaitForSeconds_o *v66; // x20
  int32_t v67; // w2
  int32_t v68; // w3

  v4 = this;
  if ( (byte_49FBC5A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_Dictionary_string__object____, v6);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    sub_1B640C8(&ManagerConfig_TypeInfo, v8);
    sub_1B640C8(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_23927/*"trackViewUrl"*/, v11);
    sub_1B640C8(&StringLiteral_548/*"&country=jp"*/, v12);
    sub_1B640C8(&StringLiteral_19958/*"https://play.google.com/store/apps/details?id="*/, v13);
    sub_1B640C8(&StringLiteral_2362/*"Android"*/, v14);
    sub_1B640C8(&StringLiteral_22816/*"results"*/, v15);
    sub_1B640C8(&StringLiteral_19956/*"https://itunes.apple.com/lookup?id="*/, v16);
    this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)sub_1B640C8(&StringLiteral_19974/*"iOS"*/, v17);
    byte_49FBC5A = 1;
  }
  switch ( v4->fields.__1__state )
  {
    case 0:
      p_storeName = &v4->fields.storeName;
      storeName = v4->fields.storeName;
      v4->fields.__1__state = -1;
      if ( !storeName )
      {
        v20 = StringLiteral_2362/*"Android"*/;
        *p_storeName = (System_String_o *)StringLiteral_2362/*"Android"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.storeName, v20, v2, v3);
      }
      v4->fields._url_5__2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._url_5__2, 0, v2, v3);
      if ( System_String__op_Equality(v4->fields.storeName, (System_String_o *)StringLiteral_19974/*"iOS"*/, 0LL) )
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
          sub_1B6406C(p_id, (int32_t)iOSApplicationID, v2, v3);
        }
        v41 = System_String__Concat_61386656(
                (System_String_o *)StringLiteral_19956/*"https://itunes.apple.com/lookup?id="*/,
                v4->fields.id,
                (System_String_o *)StringLiteral_548/*"&country=jp"*/,
                0LL);
        v44 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B64314(
                                                             DelightWorks_Network_UnityWebRequestWWW_TypeInfo,
                                                             v42,
                                                             v43);
        DelightWorks_Network_UnityWebRequestWWW___ctor(v44, v41, 0LL);
        v4->fields._www_5__3 = v44;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._www_5__3, (int32_t)v44, v45, v46);
        www_5__3 = (Il2CppObject *)v4->fields._www_5__3;
        v4->fields.__2__current = www_5__3;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)www_5__3, v49, v50);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      if ( !System_String__op_Equality(*p_storeName, (System_String_o *)StringLiteral_2362/*"Android"*/, 0LL) )
        goto LABEL_47;
      v62 = &v4->fields.id;
      id = v4->fields.id;
      if ( !id )
      {
        v63 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v63 = ManagerConfig_TypeInfo;
        }
        AndroidPackageName = v63->static_fields->AndroidPackageName;
        *v62 = AndroidPackageName;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.id, (int32_t)AndroidPackageName, v30, v60);
        id = *v62;
      }
      v65 = System_String__Concat_61375396((System_String_o *)StringLiteral_19958/*"https://play.google.com/store/apps/details?id="*/, id, 0LL);
      v39 = (int)v65;
      v4->fields._url_5__2 = v65;
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
               (Il2CppObject *)StringLiteral_22816/*"results"*/,
               (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   (System_Collections_Generic_Dictionary_object__object__o *)v28,
                   (Il2CppObject *)StringLiteral_22816/*"results"*/,
                   (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v32 = JsonManager__DeserializeArray_object_(
                  Item,
                  (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_Dictionary_string__object____);
          if ( v32 )
          {
            v33 = *(_QWORD *)&v32->max_length;
            v34 = v32;
            if ( v33 )
            {
              if ( !(_DWORD)v33 )
                goto LABEL_50;
              v35 = (System_Collections_Generic_Dictionary_object__object__o *)v32->m_Items[0];
              if ( v35 )
              {
                v32 = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                               v35,
                                               (Il2CppObject *)StringLiteral_23927/*"trackViewUrl"*/,
                                               (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)v32 & 1) != 0 )
                {
                  if ( v34->max_length )
                  {
                    this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)v34->m_Items[0];
                    if ( this )
                    {
                      this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                      (Il2CppObject *)StringLiteral_23927/*"trackViewUrl"*/,
                                                                                      (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                      if ( this )
                      {
                        v36 = ((__int64 (__fastcall *)(NetworkManager__RequestApplicationUpdateCR_d__218_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                this,
                                this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr);
                        v39 = v36;
                        v4->fields._url_5__2 = (struct System_String_o *)v36;
                        p_url_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._url_5__2;
LABEL_46:
                        sub_1B6406C(p_url_5__2, v39, v37, v38);
                        goto LABEL_47;
                      }
                    }
LABEL_49:
                    sub_1B64324(this);
                  }
LABEL_50:
                  sub_1B6432C(v32, v29);
                }
              }
            }
          }
        }
LABEL_47:
        v66 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v29, v30);
        UnityEngine_WaitForSeconds___ctor(v66, 0.5, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v66;
        v56 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v56, (int32_t)v66, v67, v68);
        v59 = 3;
        goto LABEL_48;
      }
LABEL_38:
      this = (NetworkManager__RequestApplicationUpdateCR_d__218_o *)v4->fields._www_5__3;
      if ( !this )
        goto LABEL_49;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v55 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v53, v54);
      UnityEngine_WaitForSeconds___ctor(v55, 1.0, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v55;
      v56 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v56, (int32_t)v55, v57, v58);
      v59 = 2;
LABEL_48:
      *(_DWORD *)&v56[-1].fields.isMine = v59;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_NetworkManager__RequestApplicationUpdateCR_d__218_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  NetworkManager__RequestCR_d__213_o *v3; // x19
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
  struct NetworkManager_o *_4__this; // x20
  struct RequestBase_o *work; // x8
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x21
  System_String_o *v133; // x22
  System_String_o *v134; // x23
  struct RequestBase_o *v135; // x8
  NetworkManager__RequestCR_d__213_o *v136; // x19
  __int64 v137; // x1
  __int64 v138; // x2
  System_Action_o *v139; // x19
  struct DelightWorks_Network_UnityWebRequestWWW_o *www_5__10; // x8
  DelightWorks_Network_UnityWebRequestWWW_o **p_www_5__10; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v142; // x8
  int32_t v143; // w2
  int32_t v144; // w3
  DelightWorks_Network_UnityWebRequestWWW_o *v145; // x8
  struct DelightWorks_Network_UnityWebRequestWWW_o *v146; // x8
  NetworkManager__RequestCR_d__213_o **v147; // x21
  System_String_o *v148; // x0
  int32_t v149; // w2
  int32_t v150; // w3
  int32_t v151; // w2
  int32_t v152; // w3
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v154; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v156; // w2
  int32_t v157; // w3
  int v158; // w8
  uint64_t v159; // x21
  struct RequestBase_o *v160; // x8
  __int64 methodPtr_low; // x11
  ManagerConfig_c *v162; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  __int64 v164; // x0
  __int64 v165; // x1
  __int64 v166; // x2
  System_String_o *v167; // x21
  DelightWorks_Network_UnityWebRequestWWW_o *v168; // x20
  int32_t v169; // w2
  int32_t v170; // w3
  Il2CppObject *v171; // x1
  int32_t v172; // w2
  int32_t v173; // w3
  System_String_o **p_data_5__2; // x21
  __int64 v175; // x0
  int32_t v176; // w2
  int32_t v177; // w3
  UnityEngine_WWWForm_o *WWWForm; // x21
  __int64 v179; // x1
  __int64 v180; // x2
  System_Collections_Generic_Dictionary_object__object__o *v181; // x22
  Il2CppObject *v182; // x23
  Il2CppObject *key; // x24
  Il2CppObject *v184; // x24
  Il2CppObject *v185; // x0
  struct System_Collections_Generic_Queue_RequestBase__o *communicationWaitList; // x8
  float progress_k__BackingField; // s8
  float loadProgress_5__13; // s9
  int32_t v189; // w2
  int32_t v190; // w3
  float v191; // s0
  int32_t v192; // w2
  int32_t v193; // w3
  struct System_Collections_Generic_Queue_RequestBase__o *v194; // x8
  int32_t v195; // w1
  int32_t v196; // w2
  int32_t v197; // w3
  __int64 *v198; // x8
  struct System_String_o *error_k__BackingField; // x1
  int32_t v200; // w2
  int32_t v201; // w3
  int32_t v202; // w1
  struct DelightWorks_Network_UnityWebRequestWWW_o *v203; // x8
  Il2CppObject *v204; // x24
  NetworkManager__RequestCR_d__213_o *v205; // x1
  NetworkManager__RequestCR_d__213_o *v206; // x24
  System_String_o *v207; // x24
  uint32_t v208; // w0
  __int64 *v209; // x8
  int32_t v210; // w1
  __int64 v211; // x1
  ServantStatusBattleListViewItem_o *p_errorAction_5__5; // x0
  System_Collections_Generic_Dictionary_object__object__o *responseHeaders_k__BackingField; // x0
  System_String_o *v214; // x0
  int64_t v215; // x22
  NetworkManager_c *v216; // x8
  struct NetworkManager_StaticFields *v217; // x8
  int64_t startTime_5__8; // x9
  int32_t v219; // w2
  int32_t v220; // w3
  int32_t v221; // w2
  int32_t v222; // w3
  System_String_o **p_errorCode_5__3; // x23
  int32_t v224; // w2
  int32_t v225; // w3
  int32_t v226; // w1
  int32_t v227; // w1
  int32_t v228; // w2
  int32_t v229; // w3
  int32_t v230; // w1
  int32_t v231; // w2
  int32_t v232; // w3
  int32_t v233; // w2
  int32_t v234; // w3
  ServantStatusBattleListViewItem_o *v235; // x0
  int32_t v236; // w1
  int32_t v237; // w2
  int32_t v238; // w3
  int32_t v239; // w1
  int32_t v240; // w1
  int32_t v241; // w2
  int32_t v242; // w3
  bool v243; // w25
  int32_t v244; // w2
  int32_t v245; // w3
  struct ResponseData_array *v246; // x1
  int32_t v247; // w2
  int32_t v248; // w3
  System_String_o **v249; // x22
  System_String_o *errorLocalizeCode_5__4; // x26
  System_String_o *title; // x22
  __int64 v252; // x1
  System_String_o *errorAction_5__5; // x24
  int32_t v254; // w2
  int32_t v255; // w3
  __int64 *v256; // x8
  System_String_o *data_5__2; // x21
  NetworkManager__RequestCR_d__213_o *v258; // x21
  int32_t v259; // w2
  int32_t v260; // w3
  Il2CppObject *v261; // x22
  System_Object_array *v262; // x0
  ResponseData_array **p_responseList_5__7; // x22
  int32_t v264; // w2
  int32_t v265; // w3
  struct ResponseData_array *responseList_5__7; // x8
  __int64 v267; // x25
  int v268; // w9
  Il2CppClass **v269; // x8
  ResponseData_o *v270; // x24
  System_Collections_Generic_SortedDictionary_string__string__o *v271; // x23
  System_String_o *AuthCode; // x0
  NetworkManager_c *v273; // x8
  System_String_o *v274; // x23
  int32_t v275; // w8
  NetworkManager_c *v276; // x0
  __int64 *v277; // x8
  System_String_o *v278; // x24
  bool isNoRedirect_5__9; // w24
  __int64 v280; // x1
  __int64 v281; // x2
  DelightWorks_Network_UnityWebRequestWWW_o *v282; // x25
  int32_t v283; // w2
  int32_t v284; // w3
  struct RequestBase_o *v285; // x8
  __int64 v286; // x11
  struct RequestBase_o *v287; // x21
  __int64 v288; // x1
  ManagementManager_c *v289; // x0
  _BOOL4 isDuringStartup; // w8
  __int64 *v291; // x9
  __int64 *v292; // x10
  __int64 v293; // x1
  System_String_o *detail; // x24
  struct ResponseFailData_o *failData_5__6; // x8
  struct ResponseFailData_o *v296; // x8
  System_String_o *url; // x26
  struct ResponseFailData_o *v298; // x8
  struct ResponseFailData_o *v299; // x8
  struct ResponseFailData_o *v300; // x8
  System_String_o *v301; // x0
  struct ResponseFailData_o *v302; // x8
  System_String_o *v303; // x27
  bool v304; // w8
  bool result; // w0
  System_String_o *v306; // x27
  uint32_t v307; // w0
  int32_t v308; // w2
  int32_t v309; // w3
  __int64 v310; // x1
  __int64 v311; // x2
  NetworkManager_c *v312; // x0
  struct ResponseFailData_o *v313; // x8
  int32_t errorType; // w23
  __int64 v315; // x1
  __int64 v316; // x2
  __int64 v317; // x1
  NetworkManager_c *v318; // x0
  __int64 v319; // x1
  __int64 v320; // x2
  NetworkManager_c *v321; // x0
  __int64 v322; // x1
  __int64 v323; // x2
  int32_t v324; // w1
  int32_t v325; // w1
  int32_t v326; // w2
  int32_t v327; // w3
  int32_t v328; // w1
  int32_t v329; // w2
  int32_t v330; // w3
  Il2CppObject *v331; // x22
  struct ResponseData_array *v332; // x8
  unsigned __int64 v333; // x22
  unsigned __int64 v334; // x9
  ResponseData_o *v335; // x21
  Il2CppObject *Instance; // x24
  __int64 v337; // x1
  __int64 v338; // x2
  ErrorDialog_ClickDelegate_o *v339; // x25
  struct DelightWorks_Network_UnityWebRequestWWW_o *v340; // x8
  Il2CppObject *wait_5__14; // x1
  System_String_o *text; // x0
  int32_t v343; // w2
  int32_t v344; // w3
  struct RequestBase_o *v345; // x8
  __int64 v346; // x10
  Il2CppObject *Item; // x22
  int _2__current; // w8
  System_String_array *v349; // x0
  int32_t v350; // w2
  int32_t v351; // w3
  NetworkManager_c *v352; // x8
  System_String_array *v353; // x22
  struct NetworkManager_StaticFields *v354; // x0
  int32_t v355; // w1
  int max_length; // w8
  unsigned int v357; // w25
  Il2CppClass **v358; // x8
  System_String_o *v359; // x23
  NetworkManager_c *v360; // x0
  System_String_o *v361; // x0
  struct NetworkManager_StaticFields *v362; // x8
  int32_t v363; // w2
  int32_t v364; // w3
  __int64 v365; // x1
  __int64 v366; // x2
  NetworkManager_c *v367; // x0
  System_Action_o *v368; // x23
  __int64 v369; // x1
  __int64 v370; // x2
  __int64 v371; // x1
  __int64 v372; // x2
  struct ResponseFailData_o *v373; // x8
  System_Action_o *v374; // x0
  __int64 *v375; // x8
  struct ResponseFailData_o *v376; // x8
  ManagerConfig_c *v377; // x0
  __int64 v378; // x9
  float unscaledTime; // s0
  float timeout_5__11; // s1
  __int64 v381; // x1
  __int64 v382; // x2
  UnityEngine_WaitForEndOfFrame_o *v383; // x21
  int32_t v384; // w2
  int32_t v385; // w3
  int32_t v386; // w2
  int32_t v387; // w3
  NetworkManager__RequestCR_d__213_o *v388; // x25
  int32_t v389; // w1
  int32_t v390; // w2
  int32_t v391; // w3
  struct NetworkManager_o *nid; // x1
  int32_t v393; // w2
  int32_t v394; // w3
  int32_t v395; // w1
  int32_t v396; // w2
  int32_t v397; // w3
  struct System_String_o *resCode; // x1
  int32_t v399; // w2
  int32_t v400; // w3
  int32_t v401; // w1
  System_String_o *v402; // x0
  int32_t v403; // w2
  int32_t v404; // w3
  __int64 v405; // x1
  __int64 v406; // x2
  ResponseFailData_o *v407; // x26
  struct ResponseFailData_o **p_failData_5__6; // x25
  int32_t v409; // w2
  int32_t v410; // w3
  int32_t v411; // w2
  int32_t v412; // w3
  __int64 *p_action; // x8
  __int64 v414; // x1
  struct RequestBase_o *v415; // x8
  PurchaseByBank_UnityIap_Request_c *v416; // x9
  __int64 v417; // x11
  RequestBase_c *klass; // x8
  __int64 v419; // x10
  ResponseData_array *v420; // x22
  ResponseData_o *v421; // x0
  System_Collections_Generic_Dictionary_object__object__o *fail; // x0
  System_String_o *v423; // x22
  int32_t v424; // w2
  int32_t v425; // w3
  int32_t v426; // w1
  TitleRootComponent_c *v427; // x0
  __int64 v428; // x1
  __int64 v429; // x2
  Il2CppObject *v430; // x23
  AvalonSceneManager_c *v431; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x25
  Il2CppObject *v434; // x26
  struct NetworkManager___c_StaticFields *v435; // x0
  int32_t v436; // w2
  int32_t v437; // w3
  Il2CppObject *v438; // x23
  System_String_o *v439; // x25
  System_String_o *v440; // x26
  __int64 v441; // x1
  __int64 v442; // x2
  CommonConfirmDialog_ClickDelegate_o *v443; // x27
  struct ResponseFailData_o *v444; // x8
  System_String_o *sandboxDomain; // x22
  _BOOL4 sandboxSeurity; // w24
  __int64 v447; // x1
  int32_t v448; // w2
  int32_t v449; // w3
  struct ResponseFailData_o *v450; // x8
  struct System_String_o *sandboxAssetsDomain; // x22
  NetworkManager_c *v452; // x0
  struct NetworkManager_StaticFields *v453; // x0
  __int64 v454; // x1
  int32_t v455; // w2
  int32_t v456; // w3
  struct ResponseFailData_o *v457; // x8
  struct System_String_o *sandboxWebviewDomain; // x22
  NetworkManager_c *v459; // x0
  struct NetworkManager_StaticFields *v460; // x0
  struct ResponseFailData_o *v461; // x8
  Il2CppObject *v462; // x23
  __int64 v463; // x1
  __int64 v464; // x2
  ErrorDialog_ClickDelegate_o *v465; // x25
  System_String_o *v466; // x0
  int32_t v467; // w2
  int32_t v468; // w3
  __int64 v469; // x1
  __int64 v470; // x2
  ResponseFailData_o *v471; // x22
  struct ResponseFailData_o **v472; // x21
  int32_t v473; // w2
  int32_t v474; // w3
  int32_t v475; // w2
  int32_t v476; // w3
  __int64 *v477; // x8
  __int64 v478; // x1
  ManagementManager_c *v479; // x0
  __int64 v480; // x1
  struct ResponseFailData_o *v481; // x8
  struct ResponseFailData_o *v482; // x8
  System_Action_o *v483; // x25
  int32_t v484; // w2
  int32_t v485; // w3
  int32_t v486; // w2
  int32_t v487; // w3
  int32_t v488; // w2
  int32_t v489; // w3
  int32_t v490; // w2
  int32_t v491; // w3
  int32_t v492; // w2
  int32_t v493; // w3
  __int64 v494; // x1
  __int64 v495; // x2
  UnityEngine_WaitForEndOfFrame_o *v496; // x20
  ServantStatusBattleListViewItem_o *v497; // x19
  int32_t v498; // w2
  int32_t v499; // w3
  ServantStatusBattleListViewItem_c *v500; // x19
  NetworkManager_c *v501; // x0
  ServantStatusBattleListViewItem_o *p_errorDialogResponseData; // x0
  ManagementManager_c *v503; // x0
  _BOOL4 v504; // w26
  __int64 v505; // x1
  __int64 v506; // x2
  Il2CppObject *v507; // x23
  ErrorDialog_ClickDelegate_o *v508; // x25
  __int64 *v509; // x8
  bool v510; // w0
  __int64 *v511; // x8
  System_String_o *v512; // x25
  System_String_o *v513; // x26
  __int64 v514; // x1
  __int64 v515; // x2
  ErrorDialog_ClickDelegate_o *v516; // x27
  ErrorDialog_ClickDelegate_o *v517; // x25
  __int64 v518; // x1
  struct System_String_o **p_errorLocalizeCode_5__4; // x23
  __int64 *v520; // x8
  __int64 v521; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v522; // [xsp+10h] [xbp-E0h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v524; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_SortedDictionary_string__string__o *authParams; // [xsp+70h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+78h] [xbp-78h] BYREF
  System_DateTime_o v527; // 0:x0.8
  System_DateTime_o v528; // 0:x0.8

  v3 = this;
  if ( (byte_49FBC5B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v4);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&BattleData_TypeInfo, v6);
    sub_1B640C8(&char___TypeInfo, v7);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v9);
    sub_1B640C8(&System_Convert_TypeInfo, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&System_DateTime_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v21);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v22);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v25);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_ResponseData___, v26);
    sub_1B640C8(&JsonManager_TypeInfo, v27);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v29);
    sub_1B640C8(&LocalizationManager_TypeInfo, v30);
    sub_1B640C8(&ManagementManager_TypeInfo, v31);
    sub_1B640C8(&ManagerConfig_TypeInfo, v32);
    sub_1B640C8(&Method_NetworkManager_OnClickErrorDialog__, v33);
    sub_1B640C8(&Method_NetworkManager_OnClickErrorReboot__, v34);
    sub_1B640C8(&Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__, v35);
    sub_1B640C8(&Method_NetworkManager_OnClickErrorRetryDialog__, v36);
    sub_1B640C8(&Method_NetworkManager_OnClickErrorStay__, v37);
    sub_1B640C8(&Method_NetworkManager_OnClickErrorTerminal__, v38);
    sub_1B640C8(&Method_NetworkManager_OnClickRefreshTerminal__, v39);
    sub_1B640C8(&Method_NetworkManager_OnClickReloadCache__, v40);
    sub_1B640C8(&Method_NetworkManager_OnClickStore__, v41);
    sub_1B640C8(&Method_NetworkManager_OnClickUserDelete__, v42);
    sub_1B640C8(&Method_NetworkManager__RequestCR_b__213_0__, v43);
    sub_1B640C8(&NetworkManager_TypeInfo, v44);
    sub_1B640C8(&PurchaseByBank_UnityIap_Request_TypeInfo, v45);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_RequestBase__get_Count__, v46);
    sub_1B640C8(&ResponseCommandKind_TypeInfo, v47);
    sub_1B640C8(&ResponseFailData_TypeInfo, v48);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v49);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v51);
    sub_1B640C8(&string___TypeInfo, v52);
    sub_1B640C8(&TitleRootComponent_TypeInfo, v53);
    sub_1B640C8(&TopGameDataRequest_TypeInfo, v54);
    sub_1B640C8(&TopLoginRequest_TypeInfo, v55);
    sub_1B640C8(&Method_NetworkManager___c__RequestCR_b__213_1__, v56);
    sub_1B640C8(&NetworkManager___c_TypeInfo, v57);
    sub_1B640C8(&DelightWorks_Network_UnityWebRequestWWW_TypeInfo, v58);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v59);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v60);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v61);
    sub_1B640C8(&StringLiteral_15628/*"X-SERVER-TIME"*/, v62);
    sub_1B640C8(&StringLiteral_18401/*"data_update"*/, v63);
    sub_1B640C8(&StringLiteral_9188/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/, v64);
    sub_1B640C8(&StringLiteral_20659/*"invalid_battle"*/, v65);
    sub_1B640C8(&StringLiteral_22759/*"reload_cache"*/, v66);
    sub_1B640C8(&StringLiteral_7134/*"HTTP"*/, v67);
    sub_1B640C8(&StringLiteral_1497/*"400"*/, v68);
    sub_1B640C8(&StringLiteral_22809/*"result"*/, v69);
    sub_1B640C8(&StringLiteral_9187/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/, v70);
    sub_1B640C8(&StringLiteral_19752/*"goto_login_access"*/, v71);
    sub_1B640C8(&StringLiteral_20617/*"internal server error"*/, v72);
    sub_1B640C8(&StringLiteral_22801/*"response error "*/, v73);
    sub_1B640C8(&StringLiteral_22800/*"response"*/, v74);
    sub_1B640C8(&StringLiteral_23438/*"stay"*/, v75);
    sub_1B640C8(&StringLiteral_1499/*"401"*/, v76);
    sub_1B640C8(&StringLiteral_9176/*"NETWORK_ERROR_BOOT_MESSAGE"*/, v77);
    sub_1B640C8(&StringLiteral_7637/*"Internal Server Error"*/, v78);
    sub_1B640C8(&StringLiteral_15147/*"User-Agent"*/, v79);
    sub_1B640C8(&StringLiteral_22820/*"retry"*/, v80);
    sub_1B640C8(&StringLiteral_9191/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/, v81);
    sub_1B640C8(&StringLiteral_9189/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/, v82);
    sub_1B640C8(&StringLiteral_16963/*"background cancel"*/, v83);
    sub_1B640C8(&StringLiteral_1511/*"500"*/, v84);
    sub_1B640C8(&StringLiteral_9180/*"NETWORK_ERROR_CSID_CODE"*/, v85);
    sub_1B640C8(&StringLiteral_22802/*"response execute error "*/, v86);
    sub_1B640C8(&StringLiteral_17661/*"canceled_purchase_error"*/, v87);
    sub_1B640C8(&StringLiteral_1513/*"502"*/, v88);
    sub_1B640C8(&StringLiteral_1515/*"503"*/, v89);
    sub_1B640C8(&StringLiteral_4735/*"Cookie"*/, v90);
    sub_1B640C8(&StringLiteral_9195/*"NETWORK_USER_DELETE_DECIDE"*/, v91);
    sub_1B640C8(&StringLiteral_20660/*"invalid_user"*/, v92);
    sub_1B640C8(&StringLiteral_9177/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, v93);
    sub_1B640C8(&StringLiteral_16745/*"app_version_up"*/, v94);
    sub_1B640C8(&StringLiteral_1875/*"?"*/, v95);
    sub_1B640C8(&StringLiteral_9190/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/, v96);
    sub_1B640C8(&StringLiteral_22027/*"none data"*/, v97);
    sub_1B640C8(&StringLiteral_9179/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, v98);
    sub_1B640C8(&StringLiteral_22392/*"path="*/, v99);
    sub_1B640C8(&StringLiteral_16901/*"authCode"*/, v100);
    sub_1B640C8(&StringLiteral_536/*"&"*/, v101);
    sub_1B640C8(&StringLiteral_22740/*"refresh_terminal"*/, v102);
    sub_1B640C8(&StringLiteral_19753/*"goto_title"*/, v103);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v104);
    sub_1B640C8(&StringLiteral_1581/*";"*/, v105);
    sub_1B640C8(&StringLiteral_18136/*"connect time over"*/, v106);
    sub_1B640C8(&StringLiteral_22716/*"reconnection"*/, v107);
    sub_1B640C8(&StringLiteral_12205/*"STATUS"*/, v108);
    sub_1B640C8(&StringLiteral_16529/*"_userId="*/, v109);
    sub_1B640C8(&StringLiteral_18583/*"do_signup"*/, v110);
    sub_1B640C8(&StringLiteral_9194/*"NETWORK_USER_DELETE_CANCEL"*/, v111);
    sub_1B640C8(&StringLiteral_17626/*"cache"*/, v112);
    sub_1B640C8(&StringLiteral_815/*")"*/, v113);
    sub_1B640C8(&StringLiteral_3738/*"COMMON_CONFIRM_RETRY"*/, v114);
    sub_1B640C8(&StringLiteral_23449/*"stay_no_dialog"*/, v115);
    sub_1B640C8(&StringLiteral_9192/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/, v116);
    sub_1B640C8(&StringLiteral_1502/*"404"*/, v117);
    sub_1B640C8(&StringLiteral_22028/*"none response data"*/, v118);
    sub_1B640C8(&StringLiteral_21176/*"maint"*/, v119);
    sub_1B640C8(&StringLiteral_22410/*"pending_purchase_error"*/, v120);
    sub_1B640C8(&StringLiteral_140/*" ("*/, v121);
    sub_1B640C8(&StringLiteral_1/*""*/, v122);
    sub_1B640C8(&StringLiteral_9178/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, v123);
    sub_1B640C8(&StringLiteral_11902/*"SET-COOKIE"*/, v124);
    sub_1B640C8(&StringLiteral_1481/*"302"*/, v125);
    sub_1B640C8(&StringLiteral_9193/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v126);
    this = (NetworkManager__RequestCR_d__213_o *)sub_1B640C8(&StringLiteral_1466/*"200"*/, v127);
    byte_49FBC5B = 1;
  }
  authParams = 0LL;
  dateData = 0LL;
  memset(&v524, 0, sizeof(v524));
  value = 0LL;
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      work = v3->fields.work;
      v3->fields.__1__state = -1;
      if ( !work )
        return 0;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      if ( UnityEngine_Application__get_internetReachability(0LL) )
        goto LABEL_471;
      v132 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v133 = LocalizationManager__Get((System_String_o *)StringLiteral_9179/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
      v134 = LocalizationManager__Get((System_String_o *)StringLiteral_9178/*"NETWORK_ERROR_BOOT_RETRY_DECIDE"*/, 0LL);
      this = (NetworkManager__RequestCR_d__213_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9177/*"NETWORK_ERROR_BOOT_RETRY_CANCEL"*/, 0LL);
      v135 = v3->fields.work;
      if ( !v135 )
        goto LABEL_530;
      v136 = this;
      if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v135->klass->vtable._8_isBackgroundRequest.method)(
              v135,
              v135->klass->vtable._9_isShowConnect.methodPtr) & 1) != 0 )
      {
        v139 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v137, v138);
        System_Action___ctor(v139, (Il2CppObject *)_4__this, Method_NetworkManager__RequestCR_b__213_0__, 0LL);
        if ( _4__this )
        {
          NetworkManager__WarningDialog(_4__this, v132, v133, 0LL, 1, v139, 0LL);
          return 0;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v339 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v337, v338);
        ErrorDialog_ClickDelegate___ctor(
          v339,
          (Il2CppObject *)_4__this,
          Method_NetworkManager_OnClickErrorRetryDialog__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenRetryDialog_30344452(
            (CommonUI_o *)Instance,
            v132,
            v133,
            v134,
            (System_String_o *)v136,
            v339,
            0,
            0LL);
          return 0;
        }
      }
      goto LABEL_530;
    case 1:
      delay = v3->fields.delay;
      v3->fields.__1__state = -1;
      if ( delay <= 0.0 )
        goto LABEL_32;
      v154 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v154, delay, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v154;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v154, v156, v157);
      v158 = 2;
      goto LABEL_317;
    case 2:
      v3->fields.__1__state = -1;
LABEL_32:
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      dateData = System_DateTime__get_Now(0LL).fields._dateData;
      v527.fields._dateData = (uint64_t)&dateData;
      v159 = System_DateTime__ToUniversalTime(v527, 0LL).fields._dateData;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v528.fields._dateData = v159;
      v3->fields._startTime_5__8 = NetworkManager__getTime_38161648(v528, 0LL);
      v160 = v3->fields.work;
      if ( v160 )
      {
        methodPtr_low = LOBYTE(TopGameDataRequest_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v160->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TopGameDataRequest_c *)v160->klass->_2.typeHierarchy[methodPtr_low - 1] == TopGameDataRequest_TypeInfo )
        {
          LOBYTE(v160) = v160[1].klass;
        }
        else
        {
          LOBYTE(v160) = 0;
        }
      }
      v3->fields._isNoRedirect_5__9 = (char)v160;
      v162 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v162 = ManagerConfig_TypeInfo;
      }
      static_fields = v162->static_fields;
      if ( !static_fields->UseMock )
      {
        if ( v3->fields._data_5__2 )
          goto LABEL_132;
        this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
        if ( !this )
          goto LABEL_530;
        WWWForm = RequestBase__getWWWForm((RequestBase_o *)this, &authParams, 0LL);
        v181 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                            System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                            v179,
                                                                            v180);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v181,
          (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
        if ( !WWWForm )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)UnityEngine_WWWForm__get_headers(WWWForm, 0LL);
        if ( !this )
          goto LABEL_530;
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v522,
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
        v524 = v522;
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v524,
                  (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
        {
          key = v524.fields._current.fields.key;
          v182 = v524.fields._current.fields.value;
          if ( !System_Convert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
          v184 = (Il2CppObject *)System_Convert__ToString_62041100((System_String_o *)key, 0LL);
          v185 = (Il2CppObject *)System_Convert__ToString_62041100((System_String_o *)v182, 0LL);
          if ( !v181 )
            sub_1B64324(v185);
          System_Collections_Generic_Dictionary_object__object___Add(
            v181,
            v184,
            v185,
            (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v524,
          (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
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
          if ( !v181 )
            goto LABEL_530;
          System_Collections_Generic_Dictionary_object__object___Add(
            v181,
            (Il2CppObject *)StringLiteral_15147/*"User-Agent"*/,
            (Il2CppObject *)NetworkManager_TypeInfo->static_fields->userAgent,
            (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
          if ( !v181 )
            goto LABEL_530;
          System_Collections_Generic_Dictionary_object__object___Add(
            v181,
            (Il2CppObject *)StringLiteral_4735/*"Cookie"*/,
            (Il2CppObject *)NetworkManager_TypeInfo->static_fields->sessionId,
            (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
        }
        v271 = authParams;
        if ( !LODWORD(this[1].fields._errorLocalizeCode_5__4) )
          j_il2cpp_runtime_class_init_0(this);
        AuthCode = NetworkManager__GetAuthCode(v271, 0LL);
        if ( AuthCode )
          UnityEngine_WWWForm__AddField(WWWForm, (System_String_o *)StringLiteral_16901/*"authCode"*/, AuthCode, 0LL);
        this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
        if ( !this )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                       this,
                                                       this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
        v273 = NetworkManager_TypeInfo;
        v274 = (System_String_o *)this;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v273 = NetworkManager_TypeInfo;
        }
        if ( v273->static_fields->userId )
        {
          if ( !v274 )
            goto LABEL_530;
          v275 = System_String__IndexOf_61406964(v274, (System_String_o *)StringLiteral_1875/*"?"*/, 0LL);
          v276 = NetworkManager_TypeInfo;
          if ( v275 >= 0 )
            v277 = &StringLiteral_536/*"&"*/;
          else
            v277 = &StringLiteral_1875/*"?"*/;
          v278 = (System_String_o *)*v277;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v276 = NetworkManager_TypeInfo;
          }
          v274 = System_String__Concat_61388660(
                   v274,
                   v278,
                   (System_String_o *)StringLiteral_16529/*"_userId="*/,
                   v276->static_fields->userId,
                   0LL);
        }
        UnityEngine_WWWForm__get_data(WWWForm, 0LL);
        isNoRedirect_5__9 = v3->fields._isNoRedirect_5__9;
        v282 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B64314(
                                                              DelightWorks_Network_UnityWebRequestWWW_TypeInfo,
                                                              v280,
                                                              v281);
        DelightWorks_Network_UnityWebRequestWWW___ctor_36733736(
          v282,
          v274,
          WWWForm,
          (System_Collections_Generic_Dictionary_string__string__o *)v181,
          isNoRedirect_5__9,
          0LL);
        v3->fields._www_5__10 = v282;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._www_5__10, (int32_t)v282, v283, v284);
        v285 = v3->fields.work;
        if ( v285
          && (v286 = LOBYTE(TopGameDataRequest_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v285->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v286) )
        {
          if ( (TopGameDataRequest_c *)v285->klass->_2.typeHierarchy[v286 - 1] == TopGameDataRequest_TypeInfo )
            v287 = v3->fields.work;
          else
            v287 = 0LL;
        }
        else
        {
          v287 = 0LL;
        }
        v377 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v377 = ManagerConfig_TypeInfo;
        }
        v378 = 44LL;
        if ( !v287 )
          v378 = 40LL;
        v3->fields._timeout_5__11 = *(float *)((char *)&v377->static_fields->AppVer + v378);
        unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
        timeout_5__11 = v3->fields._timeout_5__11;
        v3->fields._loadProgress_5__13 = 0.0;
        v3->fields._requestTime_5__12 = unscaledTime + timeout_5__11;
        v383 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v381, v382);
        UnityEngine_WaitForEndOfFrame___ctor(v383, 0LL);
        v3->fields._wait_5__14 = v383;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._wait_5__14, (int32_t)v383, v384, v385);
LABEL_15:
        p_www_5__10 = &v3->fields._www_5__10;
        www_5__10 = v3->fields._www_5__10;
        if ( !www_5__10 )
          goto LABEL_530;
        if ( !www_5__10->fields._isDone_k__BackingField )
        {
          this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
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
            loadProgress_5__13 = v3->fields._loadProgress_5__13;
            v191 = UnityEngine_Time__get_unscaledTime(0LL);
            if ( progress_k__BackingField != loadProgress_5__13 )
            {
              v340 = v3->fields._www_5__10;
              v3->fields._requestTime_5__12 = v191 + v3->fields._timeout_5__11;
              if ( !v340 )
                goto LABEL_530;
              v3->fields._loadProgress_5__13 = v340->fields._progress_k__BackingField;
LABEL_316:
              wait_5__14 = (Il2CppObject *)v3->fields._wait_5__14;
              v3->fields.__2__current = wait_5__14;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
              sub_1B6406C(p__2__current, (int32_t)wait_5__14, v189, v190);
              v158 = 4;
              goto LABEL_317;
            }
            if ( v191 < v3->fields._requestTime_5__12 )
              goto LABEL_316;
          }
        }
        v142 = *p_www_5__10;
        if ( !*p_www_5__10 )
          goto LABEL_530;
        if ( !v142->fields._isDone_k__BackingField )
        {
          this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
          if ( !this )
            goto LABEL_530;
          this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                         this,
                                                         this->klass[1]._1.image);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_115;
          if ( !_4__this )
            goto LABEL_530;
          v194 = _4__this->fields.communicationWaitList;
          if ( !v194 )
            goto LABEL_530;
          if ( v194->fields._size >= 1 )
          {
            v195 = StringLiteral_16963/*"background cancel"*/;
            v3->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_16963/*"background cancel"*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorCode_5__3, v195, v192, v193);
            v198 = &StringLiteral_23438/*"stay"*/;
          }
          else
          {
LABEL_115:
            v210 = StringLiteral_18136/*"connect time over"*/;
            v3->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_18136/*"connect time over"*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorCode_5__3, v210, v192, v193);
            v198 = &StringLiteral_22820/*"retry"*/;
          }
          v211 = *v198;
          v3->fields._errorAction_5__5 = (struct System_String_o *)*v198;
          p_errorAction_5__5 = (ServantStatusBattleListViewItem_o *)&v3->fields._errorAction_5__5;
          goto LABEL_117;
        }
        this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(
                                                       v142->fields._error_k__BackingField,
                                                       0LL);
        v145 = *p_www_5__10;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v145 )
            goto LABEL_530;
          if ( v3->fields._isNoRedirect_5__9 )
          {
            DelightWorks_Network_UnityWebRequestWWW__Dispose(*p_www_5__10, 0LL);
          }
          else
          {
            text = DelightWorks_Network_UnityWebRequestWWW__get_text(*p_www_5__10, 0LL);
            v3->fields._data_5__2 = text;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._data_5__2, (int32_t)text, v343, v344);
            this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              this = (NetworkManager__RequestCR_d__213_o *)NetworkManager_TypeInfo;
            }
            if ( !this[1].fields.work[3].monitor )
            {
              v345 = v3->fields.work;
              if ( v345 )
              {
                v346 = LOBYTE(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(v345->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v346
                  && (TopLoginRequest_c *)v345->klass->_2.typeHierarchy[v346 - 1] == TopLoginRequest_TypeInfo )
                {
                  if ( !*p_www_5__10 )
                    goto LABEL_530;
                  this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                  if ( !this )
                    goto LABEL_530;
                  this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                 (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
                  if ( (int)this >= 1 )
                  {
                    if ( !*p_www_5__10 )
                      goto LABEL_530;
                    this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                    if ( !this )
                      goto LABEL_530;
                    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
                      &v522,
                      (System_Collections_Generic_Dictionary_object__object__o *)this,
                      (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
                    v524 = v522;
                    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                              &v524,
                              (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
                      ;
                    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                      &v524,
                      (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
                    if ( !*p_www_5__10 )
                      goto LABEL_530;
                    this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                    if ( !this )
                      goto LABEL_530;
                    this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                   (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                   (Il2CppObject *)StringLiteral_11902/*"SET-COOKIE"*/,
                                                                   (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      if ( !*p_www_5__10 )
                        goto LABEL_530;
                      this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                      if ( !this )
                        goto LABEL_530;
                      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                               (Il2CppObject *)StringLiteral_11902/*"SET-COOKIE"*/,
                               (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
                      this = (NetworkManager__RequestCR_d__213_o *)sub_1B64170(char___TypeInfo, 2LL);
                      if ( !this )
                        goto LABEL_530;
                      _2__current = (int)this->fields.__2__current;
                      v205 = this;
                      if ( !_2__current )
                        goto LABEL_532;
                      LOWORD(this->fields.work) = 32;
                      if ( _2__current == 1 )
                        goto LABEL_532;
                      WORD1(this->fields.work) = 59;
                      if ( !Item )
                        goto LABEL_530;
                      v349 = System_String__Split_61397780((System_String_o *)Item, (System_Char_array *)this, 1, 0LL);
                      v352 = NetworkManager_TypeInfo;
                      v353 = v349;
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        v352 = NetworkManager_TypeInfo;
                      }
                      v354 = v352->static_fields;
                      v355 = (int)StringLiteral_1/*""*/;
                      v354->sessionId = (struct System_String_o *)StringLiteral_1/*""*/;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v354->sessionId, v355, v350, v351);
                      if ( !v353 )
                        goto LABEL_530;
                      max_length = v353->max_length;
                      if ( max_length >= 1 )
                      {
                        v357 = 0;
                        while ( v357 < max_length )
                        {
                          v358 = &v353->obj.klass + (int)v357;
                          v359 = (System_String_o *)v358[4];
                          if ( !v359 )
                            goto LABEL_530;
                          this = (NetworkManager__RequestCR_d__213_o *)System_String__StartsWith(
                                                                         (System_String_o *)v358[4],
                                                                         (System_String_o *)StringLiteral_22392/*"path="*/,
                                                                         0LL);
                          if ( ((unsigned __int8)this & 1) == 0 )
                          {
                            v360 = NetworkManager_TypeInfo;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              v360 = NetworkManager_TypeInfo;
                            }
                            v361 = System_String__Concat_61386656(
                                     v360->static_fields->sessionId,
                                     v359,
                                     (System_String_o *)StringLiteral_1581/*";"*/,
                                     0LL);
                            v362 = NetworkManager_TypeInfo->static_fields;
                            v362->sessionId = v361;
                            sub_1B6406C(
                              (ServantStatusBattleListViewItem_o *)&v362->sessionId,
                              (int32_t)v361,
                              v363,
                              v364);
                            max_length = v353->max_length;
                            if ( (int)++v357 < max_length )
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
        if ( !v145 )
          goto LABEL_530;
        error_k__BackingField = v145->fields._error_k__BackingField;
        v3->fields._errorCode_5__3 = error_k__BackingField;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v3->fields._errorCode_5__3,
          (int32_t)error_k__BackingField,
          v143,
          v144);
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
        v202 = StringLiteral_22820/*"retry"*/;
        v3->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22820/*"retry"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorAction_5__5, v202, v200, v201);
        v203 = v3->fields._www_5__10;
        if ( !v203 )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)v203->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                       (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
        if ( (int)this < 1 )
          goto LABEL_118;
        if ( !*p_www_5__10 )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                       (Il2CppObject *)StringLiteral_12205/*"STATUS"*/,
                                                       (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_118;
        if ( !*p_www_5__10 )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
        if ( !this )
          goto LABEL_530;
        v204 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)StringLiteral_12205/*"STATUS"*/,
                 (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        this = (NetworkManager__RequestCR_d__213_o *)sub_1B64170(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_530;
        v205 = this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_532;
        LOWORD(this->fields.work) = 32;
        if ( !v204 )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)System_String__Split_61397780(
                                                       (System_String_o *)v204,
                                                       (System_Char_array *)this,
                                                       1,
                                                       0LL);
        if ( !this )
          goto LABEL_530;
        v206 = this;
        if ( SLODWORD(this->fields.__2__current) < 2 )
          goto LABEL_118;
        this = (NetworkManager__RequestCR_d__213_o *)this->fields.work;
        if ( !this )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)System_String__StartsWith(
                                                       (System_String_o *)this,
                                                       (System_String_o *)StringLiteral_7134/*"HTTP"*/,
                                                       0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_118;
        if ( LODWORD(v206->fields.__2__current) <= 1 )
          goto LABEL_532;
        v207 = (System_String_o *)v206->fields.__4__this;
        v208 = PrivateImplementationDetails___ComputeStringHash(v207, 0LL);
        if ( v208 > 0x434FEE0C )
        {
          if ( v208 <= 0xAA3008DB )
          {
            if ( v208 == -1456470200 )
            {
              if ( !System_String__op_Equality(v207, (System_String_o *)StringLiteral_1499/*"401"*/, 0LL) )
                goto LABEL_525;
              v509 = &StringLiteral_9187/*"NETWORK_ERROR_SERVER_AUTH_MESSAGE"*/;
            }
            else
            {
              if ( v208 != -1439692581 || !System_String__op_Equality(v207, (System_String_o *)StringLiteral_1497/*"400"*/, 0LL) )
                goto LABEL_525;
              v509 = &StringLiteral_9192/*"NETWORK_ERROR_SERVER_PARAMETER_MESSAGE"*/;
            }
            v518 = *v509;
            v3->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v509;
            p_errorLocalizeCode_5__4 = &v3->fields._errorLocalizeCode_5__4;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorLocalizeCode_5__4, v518, v196, v197);
            v211 = StringLiteral_19753/*"goto_title"*/;
LABEL_527:
            p_errorLocalizeCode_5__4[1] = (struct System_String_o *)v211;
            p_errorAction_5__5 = (ServantStatusBattleListViewItem_o *)&v3->fields._errorAction_5__5;
            goto LABEL_117;
          }
          if ( v208 == -1372582105 )
          {
            if ( System_String__op_Equality(v207, (System_String_o *)StringLiteral_1502/*"404"*/, 0LL) )
            {
              v520 = &StringLiteral_9191/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/;
              goto LABEL_526;
            }
            goto LABEL_525;
          }
          if ( v208 != -1008248995 )
            goto LABEL_525;
          v511 = &StringLiteral_1466/*"200"*/;
        }
        else
        {
          if ( v208 <= 0x2D98A5D6 )
          {
            if ( v208 == 731423408 )
            {
              v209 = &StringLiteral_1511/*"500"*/;
              goto LABEL_524;
            }
            if ( v208 == 764978646 )
            {
              v209 = &StringLiteral_1513/*"502"*/;
LABEL_524:
              System_String__op_Equality(v207, (System_String_o *)*v209, 0LL);
            }
LABEL_525:
            v520 = &StringLiteral_9188/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
LABEL_526:
            v521 = *v520;
            v3->fields._errorLocalizeCode_5__4 = (struct System_String_o *)*v520;
            p_errorLocalizeCode_5__4 = &v3->fields._errorLocalizeCode_5__4;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorLocalizeCode_5__4, v521, v196, v197);
            v211 = StringLiteral_22820/*"retry"*/;
            goto LABEL_527;
          }
          if ( v208 == 781756265 )
          {
            v209 = &StringLiteral_1515/*"503"*/;
            goto LABEL_524;
          }
          if ( v208 != 1129311756 )
            goto LABEL_525;
          v511 = &StringLiteral_1481/*"302"*/;
        }
        if ( System_String__op_Equality(v207, (System_String_o *)*v511, 0LL) )
        {
          p_errorAction_5__5 = (ServantStatusBattleListViewItem_o *)&v3->fields._errorCode_5__3;
          LODWORD(v211) = 0;
          v3->fields._errorCode_5__3 = 0LL;
LABEL_117:
          sub_1B6406C(p_errorAction_5__5, v211, v196, v197);
LABEL_118:
          if ( !*p_www_5__10 )
            goto LABEL_530;
          responseHeaders_k__BackingField = (System_Collections_Generic_Dictionary_object__object__o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
          if ( responseHeaders_k__BackingField )
          {
            this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Count(
                                                           responseHeaders_k__BackingField,
                                                           (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
            if ( (int)this >= 1 )
            {
              if ( !*p_www_5__10 )
                goto LABEL_530;
              this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
              if ( !this )
                goto LABEL_530;
              this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             (Il2CppObject *)StringLiteral_15628/*"X-SERVER-TIME"*/,
                                                             (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !*p_www_5__10 )
                  goto LABEL_530;
                this = (NetworkManager__RequestCR_d__213_o *)(*p_www_5__10)->fields._responseHeaders_k__BackingField;
                if ( !this )
                  goto LABEL_530;
                this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                               (Il2CppObject *)StringLiteral_15628/*"X-SERVER-TIME"*/,
                                                               (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
                if ( !this )
                  goto LABEL_530;
                v214 = (System_String_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
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
                startTime_5__8 = v3->fields._startTime_5__8;
                v217->nowTime = -1LL;
                v217->serverOffsetTime = v215 - startTime_5__8;
              }
            }
          }
          this = (NetworkManager__RequestCR_d__213_o *)*p_www_5__10;
          if ( !*p_www_5__10 )
            goto LABEL_530;
          DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
          v3->fields._www_5__10 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._www_5__10, 0, v219, v220);
          v3->fields._wait_5__14 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._wait_5__14, 0, v221, v222);
          goto LABEL_132;
        }
        goto LABEL_525;
      }
      if ( !v162->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v162);
        static_fields = ManagerConfig_TypeInfo->static_fields;
      }
      if ( static_fields->IsNetworkMock )
      {
        this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
        if ( !this )
          goto LABEL_530;
        v164 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                 this,
                 this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        if ( v164 )
        {
          v167 = (System_String_o *)v164;
          v168 = (DelightWorks_Network_UnityWebRequestWWW_o *)sub_1B64314(
                                                                DelightWorks_Network_UnityWebRequestWWW_TypeInfo,
                                                                v165,
                                                                v166);
          DelightWorks_Network_UnityWebRequestWWW___ctor(v168, v167, 0LL);
          v3->fields._www_5__10 = v168;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._www_5__10, (int32_t)v168, v169, v170);
          v171 = (Il2CppObject *)v3->fields._www_5__10;
          v3->fields.__2__current = v171;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
          sub_1B6406C(p__2__current, (int32_t)v171, v172, v173);
          v158 = 3;
LABEL_317:
          *(_DWORD *)&p__2__current[-1].fields.isMine = v158;
          return 1;
        }
      }
LABEL_49:
      p_data_5__2 = &v3->fields._data_5__2;
      if ( !v3->fields._data_5__2 )
      {
        this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
        if ( !this )
          goto LABEL_530;
        v175 = ((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                 this,
                 this->klass->vtable._6_MoveNext.methodPtr);
        *p_data_5__2 = (System_String_o *)v175;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._data_5__2, v175, v176, v177);
        if ( System_String__op_Equality(*p_data_5__2, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
        {
          this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
          if ( !this )
            goto LABEL_530;
          this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                         this,
                                                         this->klass[1]._1.image);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
            if ( !this )
              goto LABEL_530;
            this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, const char *))this->klass[1]._1.gc_desc)(
                                                           this,
                                                           this->klass[1]._1.name);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !this )
                goto LABEL_530;
              CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
            }
          }
          if ( _4__this )
          {
            NetworkManager__OnEndCommunication(_4__this, v3->fields.work, 0LL, 0LL);
            return 0;
          }
          goto LABEL_530;
        }
      }
LABEL_132:
      p_errorCode_5__3 = &v3->fields._errorCode_5__3;
      if ( v3->fields._errorCode_5__3 )
        goto LABEL_139;
      if ( System_String__IsNullOrEmpty(v3->fields._data_5__2, 0LL) )
      {
        v226 = StringLiteral_22027/*"none data"*/;
        v3->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_22027/*"none data"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorCode_5__3, v226, v224, v225);
        v227 = StringLiteral_9190/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        v3->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9190/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorLocalizeCode_5__4, v227, v228, v229);
        v230 = StringLiteral_19753/*"goto_title"*/;
        v3->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_19753/*"goto_title"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorAction_5__5, v230, v231, v232);
        if ( v3->fields._isNoRedirect_5__9 )
        {
          v235 = (ServantStatusBattleListViewItem_o *)&v3->fields._errorCode_5__3;
          v236 = 0;
          *p_errorCode_5__3 = 0LL;
LABEL_138:
          sub_1B6406C(v235, v236, v233, v234);
        }
LABEL_139:
        v243 = 0;
        goto LABEL_140;
      }
      if ( System_String__op_Equality(v3->fields._data_5__2, (System_String_o *)StringLiteral_7637/*"Internal Server Error"*/, 0LL) )
      {
        v239 = StringLiteral_20617/*"internal server error"*/;
        v3->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_20617/*"internal server error"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorCode_5__3, v239, v237, v238);
        v240 = StringLiteral_9188/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v3->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9188/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorLocalizeCode_5__4, v240, v241, v242);
        v236 = StringLiteral_22820/*"retry"*/;
        v3->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22820/*"retry"*/;
        v235 = (ServantStatusBattleListViewItem_o *)&v3->fields._errorAction_5__5;
        goto LABEL_138;
      }
      data_5__2 = v3->fields._data_5__2;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      this = (NetworkManager__RequestCR_d__213_o *)JsonManager__getDictionary(data_5__2, 0LL);
      if ( !this )
        goto LABEL_530;
      v258 = this;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)StringLiteral_22800/*"response"*/,
              (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v324 = StringLiteral_22028/*"none response data"*/;
        v3->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_22028/*"none response data"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorCode_5__3, v324, v259, v260);
        v325 = StringLiteral_9188/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        v3->fields._errorLocalizeCode_5__4 = (struct System_String_o *)StringLiteral_9188/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorLocalizeCode_5__4, v325, v326, v327);
        v328 = StringLiteral_22820/*"retry"*/;
        v3->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_22820/*"retry"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorAction_5__5, v328, v329, v330);
LABEL_298:
        v243 = 0;
        goto LABEL_299;
      }
      v261 = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v258,
               (Il2CppObject *)StringLiteral_22800/*"response"*/,
               (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v262 = JsonManager__DeserializeArray_object_(
               v261,
               (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_ResponseData___);
      v3->fields._responseList_5__7 = (struct ResponseData_array *)v262;
      p_responseList_5__7 = &v3->fields._responseList_5__7;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._responseList_5__7, (int32_t)v262, v264, v265);
      responseList_5__7 = v3->fields._responseList_5__7;
      if ( !responseList_5__7 )
        goto LABEL_530;
      v267 = 0LL;
      while ( 1 )
      {
        v268 = responseList_5__7->max_length;
        if ( (int)v267 >= v268 )
          goto LABEL_298;
        if ( (unsigned int)v267 >= v268 )
          goto LABEL_532;
        v269 = &responseList_5__7->obj.klass + v267;
        v270 = (ResponseData_o *)v269[4];
        if ( !v270 )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)ResponseData__checkError_40846016((ResponseData_o *)v269[4], 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        responseList_5__7 = *p_responseList_5__7;
        ++v267;
        if ( !*p_responseList_5__7 )
          goto LABEL_530;
      }
      this = (NetworkManager__RequestCR_d__213_o *)sub_1B64170(string___TypeInfo, 5LL);
      if ( !this )
        goto LABEL_530;
      v388 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_532;
      v389 = StringLiteral_22801/*"response error "*/;
      this->fields.work = (struct RequestBase_o *)StringLiteral_22801/*"response error "*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.work, v389, v386, v387);
      if ( LODWORD(v388->fields.__2__current) <= 1 )
        goto LABEL_532;
      nid = (struct NetworkManager_o *)v270->fields.nid;
      v388->fields.__4__this = nid;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v388->fields.__4__this, (int32_t)nid, v390, v391);
      if ( LODWORD(v388->fields.__2__current) <= 2
        || (v395 = StringLiteral_140/*" ("*/,
            *(_QWORD *)&v388->fields.delay = StringLiteral_140/*" ("*/,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v388->fields.delay, v395, v393, v394),
            LODWORD(v388->fields.__2__current) <= 3)
        || (resCode = v270->fields.resCode,
            v388->fields._data_5__2 = resCode,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v388->fields._data_5__2, (int32_t)resCode, v396, v397),
            LODWORD(v388->fields.__2__current) <= 4) )
      {
LABEL_532:
        sub_1B6432C(this, v205);
      }
      v401 = StringLiteral_815/*")"*/;
      v388->fields._errorCode_5__3 = (struct System_String_o *)StringLiteral_815/*")"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v388->fields._errorCode_5__3, v401, v399, v400);
      v402 = System_String__Concat_61388924((System_String_array *)v388, 0LL);
      v3->fields._errorCode_5__3 = v402;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorCode_5__3, (int32_t)v402, v403, v404);
      v407 = (ResponseFailData_o *)sub_1B64314(ResponseFailData_TypeInfo, v405, v406);
      ResponseFailData___ctor(v407, v270, 0LL);
      v3->fields._failData_5__6 = v407;
      p_failData_5__6 = &v3->fields._failData_5__6;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._failData_5__6, (int32_t)v407, v409, v410);
      if ( !v3->fields._failData_5__6 )
        goto LABEL_530;
      this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(
                                                     v3->fields._failData_5__6->fields.action,
                                                     0LL);
      p_action = &StringLiteral_22820/*"retry"*/;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !*p_failData_5__6 )
          goto LABEL_530;
        p_action = (__int64 *)&(*p_failData_5__6)->fields.action;
      }
      v414 = *p_action;
      v3->fields._errorAction_5__5 = (struct System_String_o *)*p_action;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorAction_5__5, v414, v411, v412);
      v415 = v3->fields.work;
      if ( !v415 )
        goto LABEL_298;
      v416 = PurchaseByBank_UnityIap_Request_TypeInfo;
      v417 = LOBYTE(PurchaseByBank_UnityIap_Request_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v415->klass->vtable._0_Equals.methodPtr) < (unsigned int)v417
        || (PurchaseByBank_UnityIap_Request_c *)v415->klass->_2.typeHierarchy[v417 - 1] != PurchaseByBank_UnityIap_Request_TypeInfo )
      {
        v243 = 0;
        goto LABEL_391;
      }
      if ( !*p_failData_5__6 )
        goto LABEL_530;
      v510 = System_String__op_Equality((*p_failData_5__6)->fields.action, (System_String_o *)StringLiteral_22820/*"retry"*/, 0LL);
      v415 = v3->fields.work;
      v243 = v510;
      if ( v415 )
      {
        v416 = PurchaseByBank_UnityIap_Request_TypeInfo;
LABEL_391:
        klass = v415->klass;
        v419 = LOBYTE(v416->vtable._0_Equals.methodPtr);
        if ( LOBYTE(klass->vtable._0_Equals.methodPtr) >= (unsigned int)v419
          && (PurchaseByBank_UnityIap_Request_c *)klass->_2.typeHierarchy[v419 - 1] == v416 )
        {
          v420 = *p_responseList_5__7;
          if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
          v421 = ResponseCommandKind__SearchData(11, v420, 0LL);
          if ( v421 )
          {
            fail = (System_Collections_Generic_Dictionary_object__object__o *)v421->fields.fail;
            if ( fail )
            {
              if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
                     fail,
                     (Il2CppObject *)StringLiteral_22809/*"result"*/,
                     &value,
                     (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
              {
                this = (NetworkManager__RequestCR_d__213_o *)value;
                if ( !value )
                  goto LABEL_530;
                v423 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                            value,
                                            value->klass->vtable[4].methodPtr);
                if ( System_String__op_Equality(v423, (System_String_o *)StringLiteral_22410/*"pending_purchase_error"*/, 0LL)
                  || System_String__op_Equality(v423, (System_String_o *)StringLiteral_17661/*"canceled_purchase_error"*/, 0LL) )
                {
                  v426 = StringLiteral_23449/*"stay_no_dialog"*/;
                  v3->fields._errorAction_5__5 = (struct System_String_o *)StringLiteral_23449/*"stay_no_dialog"*/;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorAction_5__5, v426, v424, v425);
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
                                                     (System_Collections_Generic_Dictionary_object__object__o *)v258,
                                                     (Il2CppObject *)StringLiteral_17626/*"cache"*/,
                                                     (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v331 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        this = (NetworkManager__RequestCR_d__213_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_object__object__o *)v258,
                                                       (Il2CppObject *)StringLiteral_17626/*"cache"*/,
                                                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v331 )
          goto LABEL_530;
        DataManager__updateJsonData((DataManager_o *)v331, (Il2CppObject *)this, 0LL);
      }
      v332 = v3->fields._responseList_5__7;
      if ( !v332 )
        goto LABEL_530;
      v333 = 0LL;
      while ( 1 )
      {
        v334 = v332->max_length;
        if ( (__int64)v333 >= (int)v334 )
          goto LABEL_140;
        if ( v333 >= v334 )
          goto LABEL_532;
        v335 = v332->m_Items[v333];
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (NetworkManager__RequestCR_d__213_o *)NetworkManager__ExecuteCommand(v335, 0LL);
        if ( (_DWORD)this )
          break;
        v332 = v3->fields._responseList_5__7;
        ++v333;
        if ( !v332 )
          goto LABEL_530;
      }
      if ( !v335 )
        goto LABEL_530;
      v466 = System_String__Concat_61375396((System_String_o *)StringLiteral_22802/*"response execute error "*/, v335->fields.nid, 0LL);
      v3->fields._errorCode_5__3 = v466;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorCode_5__3, (int32_t)v466, v467, v468);
      v471 = (ResponseFailData_o *)sub_1B64314(ResponseFailData_TypeInfo, v469, v470);
      ResponseFailData___ctor(v471, v335, 0LL);
      v3->fields._failData_5__6 = v471;
      v472 = &v3->fields._failData_5__6;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._failData_5__6, (int32_t)v471, v473, v474);
      if ( !v3->fields._failData_5__6 )
LABEL_530:
        sub_1B64324(this);
      this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(
                                                     v3->fields._failData_5__6->fields.action,
                                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v477 = &StringLiteral_22820/*"retry"*/;
      }
      else
      {
        if ( !*v472 )
          goto LABEL_530;
        v477 = (__int64 *)&(*v472)->fields.action;
      }
      v480 = *v477;
      v3->fields._errorAction_5__5 = (struct System_String_o *)*v477;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorAction_5__5, v480, v475, v476);
LABEL_140:
      this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
      if ( !this )
        goto LABEL_530;
      this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                                                     this,
                                                     this->klass[1]._1.image);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
        if ( !this )
          goto LABEL_530;
        this = (NetworkManager__RequestCR_d__213_o *)((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, const char *))this->klass[1]._1.gc_desc)(
                                                       this,
                                                       this->klass[1]._1.name);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_530;
          CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
        }
      }
      if ( !*p_errorCode_5__3 )
      {
        if ( !_4__this )
          goto LABEL_530;
        NetworkManager__OnEndCommunication(_4__this, v3->fields.work, v3->fields._responseList_5__7, 0LL);
        goto LABEL_478;
      }
      v246 = v3->fields._responseList_5__7;
      if ( !_4__this )
        goto LABEL_530;
      _4__this->fields.communicationWorkResponseList = v246;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&_4__this->fields.communicationWorkResponseList,
        (int32_t)v246,
        v244,
        v245);
      v3->fields._responseList_5__7 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._responseList_5__7, 0, v247, v248);
      v249 = &v3->fields._errorLocalizeCode_5__4;
      errorLocalizeCode_5__4 = v3->fields._errorLocalizeCode_5__4;
      if ( !errorLocalizeCode_5__4 )
      {
        errorAction_5__5 = v3->fields._errorAction_5__5;
        if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23438/*"stay"*/, 0LL)
          || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_23449/*"stay_no_dialog"*/, 0LL) )
        {
          v256 = &StringLiteral_9189/*"NETWORK_ERROR_SERVER_CANCEL_MESSAGE"*/;
        }
        else
        {
          if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22820/*"retry"*/, 0LL)
            || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22759/*"reload_cache"*/, 0LL) )
          {
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            if ( !byte_49FB4AB )
            {
              sub_1B640C8(&ManagementManager_TypeInfo, v288);
              byte_49FB4AB = 1;
            }
            v289 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v289 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v289->static_fields->isDuringStartup;
            v291 = &StringLiteral_9193/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/;
            v292 = &StringLiteral_9179/*"NETWORK_ERROR_BOOT_RETRY_MESSAGE"*/;
          }
          else
          {
            if ( System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_19752/*"goto_login_access"*/, 0LL)
              || System_String__op_Equality(errorAction_5__5, (System_String_o *)StringLiteral_22740/*"refresh_terminal"*/, 0LL) )
            {
LABEL_215:
              errorLocalizeCode_5__4 = *v249;
              title = (System_String_o *)StringLiteral_1/*""*/;
              detail = (System_String_o *)StringLiteral_1/*""*/;
              if ( !errorLocalizeCode_5__4 )
                goto LABEL_219;
              goto LABEL_216;
            }
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            if ( !byte_49FB4AB )
            {
              sub_1B640C8(&ManagementManager_TypeInfo, v478);
              byte_49FB4AB = 1;
            }
            v479 = ManagementManager_TypeInfo;
            if ( !ManagementManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
              v479 = ManagementManager_TypeInfo;
            }
            isDuringStartup = v479->static_fields->isDuringStartup;
            v291 = &StringLiteral_9190/*"NETWORK_ERROR_SERVER_CONNECT_MESSAGE"*/;
            v292 = (__int64 *)&StringLiteral_9176/*"NETWORK_ERROR_BOOT_MESSAGE"*/;
          }
          if ( isDuringStartup )
            v256 = v292;
          else
            v256 = v291;
        }
        v293 = *v256;
        *v249 = (System_String_o *)*v256;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorLocalizeCode_5__4, v293, v254, v255);
        goto LABEL_215;
      }
      title = (System_String_o *)StringLiteral_1/*""*/;
LABEL_216:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      detail = LocalizationManager__Get(errorLocalizeCode_5__4, 0LL);
LABEL_219:
      failData_5__6 = v3->fields._failData_5__6;
      if ( failData_5__6 )
      {
        this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(failData_5__6->fields.title, 0LL);
        v296 = v3->fields._failData_5__6;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v296 )
            goto LABEL_530;
        }
        else
        {
          if ( !v296 )
            goto LABEL_530;
          title = v296->fields.title;
        }
        this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(v296->fields.detail, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v298 = v3->fields._failData_5__6;
          if ( !v298 )
            goto LABEL_530;
          detail = v298->fields.detail;
        }
        this = (NetworkManager__RequestCR_d__213_o *)System_String__IsNullOrEmpty(detail, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v299 = v3->fields._failData_5__6;
          if ( !v299 )
            goto LABEL_530;
          if ( v299->fields.csId )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (NetworkManager__RequestCR_d__213_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9180/*"NETWORK_ERROR_CSID_CODE"*/,
                                                           0LL);
            v300 = v3->fields._failData_5__6;
            if ( !v300 )
              goto LABEL_530;
            v301 = System_String__Format((System_String_o *)this, (Il2CppObject *)v300->fields.csId, 0LL);
            this = (NetworkManager__RequestCR_d__213_o *)System_String__Concat_61386656(
                                                           detail,
                                                           (System_String_o *)StringLiteral_43/*"\n"*/,
                                                           v301,
                                                           0LL);
            detail = (System_String_o *)this;
          }
        }
        v302 = v3->fields._failData_5__6;
        if ( !v302 )
          goto LABEL_530;
        url = v302->fields.url;
      }
      else
      {
        url = 0LL;
      }
      this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
      if ( !this )
        goto LABEL_530;
      if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
              this,
              this->klass[1]._1.image) & 1) == 0
        || (v303 = v3->fields._errorAction_5__5,
            !System_String__op_Equality(v303, (System_String_o *)StringLiteral_23438/*"stay"*/, 0LL))
        && !System_String__op_Equality(v303, (System_String_o *)StringLiteral_23449/*"stay_no_dialog"*/, 0LL)
        && !System_String__op_Equality(v303, (System_String_o *)StringLiteral_22820/*"retry"*/, 0LL)
        && !System_String__op_Equality(v303, (System_String_o *)StringLiteral_22759/*"reload_cache"*/, 0LL)
        || (v304 = NetworkManager__OnBackgroundErrorCommunication(
                     _4__this,
                     _4__this->fields.communicationWork,
                     *p_errorCode_5__3,
                     0,
                     0LL),
            result = 0,
            !v304) )
      {
        v306 = v3->fields._errorAction_5__5;
        v307 = PrivateImplementationDetails___ComputeStringHash(v306, 0LL);
        if ( v307 <= 0xA56F89EB )
        {
          if ( v307 <= 0x43CDBBC3 )
          {
            if ( v307 != 1019014393 )
            {
              if ( v307 == 1062826843 )
              {
                if ( System_String__op_Equality(v306, (System_String_o *)StringLiteral_19753/*"goto_title"*/, 0LL) )
                {
                  v367 = NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    v367 = NetworkManager_TypeInfo;
                  }
                  v367->static_fields->isRebootBlock = 1;
                  v368 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v365, v366);
                  System_Action___ctor(v368, (Il2CppObject *)_4__this, Method_NetworkManager_OnClickErrorReboot__, 0LL);
                  NetworkManager__ErrorDialog(_4__this, title, detail, url, v368, 0LL);
                  goto LABEL_470;
                }
              }
              else if ( v307 == 1137556419
                     && System_String__op_Equality(v306, (System_String_o *)StringLiteral_23449/*"stay_no_dialog"*/, 0LL) )
              {
                NetworkManager__OnClickErrorStay(_4__this, 0LL);
                goto LABEL_470;
              }
              goto LABEL_445;
            }
            this = (NetworkManager__RequestCR_d__213_o *)System_String__op_Equality(
                                                           v306,
                                                           (System_String_o *)StringLiteral_22759/*"reload_cache"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v373 = v3->fields._failData_5__6;
              if ( !v373 )
                goto LABEL_530;
              errorType = v373->fields.errorType;
              v374 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v371, v372);
              v375 = &Method_NetworkManager_OnClickReloadCache__;
              goto LABEL_469;
            }
            goto LABEL_445;
          }
          if ( v307 <= 0x9918C6CA )
          {
            if ( v307 == -1726429494 )
            {
              if ( System_String__op_Equality(v306, (System_String_o *)StringLiteral_20660/*"invalid_user"*/, 0LL) )
              {
                v427 = TitleRootComponent_TypeInfo;
                if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
                  v427 = TitleRootComponent_TypeInfo;
                }
                if ( v427->static_fields->shouldFadeInOnError )
                {
                  v430 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v431 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v431 = AvalonSceneManager_TypeInfo;
                  }
                  this = (NetworkManager__RequestCR_d__213_o *)NetworkManager___c_TypeInfo;
                  DEFAULT_FADE_TIME = v431->static_fields->DEFAULT_FADE_TIME;
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
                    v434 = (Il2CppObject *)this[1].fields.work->klass;
                    monitor = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v428, v429);
                    System_Action___ctor(monitor, v434, Method_NetworkManager___c__RequestCR_b__213_1__, 0LL);
                    v435 = NetworkManager___c_TypeInfo->static_fields;
                    v435->__9__213_1 = monitor;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v435->__9__213_1, (int32_t)monitor, v436, v437);
                  }
                  if ( !v430 )
                    goto LABEL_530;
                  CommonUI__maskFadein((CommonUI_o *)v430, DEFAULT_FADE_TIME, monitor, 0LL);
                }
                v438 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v439 = LocalizationManager__Get((System_String_o *)StringLiteral_9195/*"NETWORK_USER_DELETE_DECIDE"*/, 0LL);
                v440 = LocalizationManager__Get((System_String_o *)StringLiteral_9194/*"NETWORK_USER_DELETE_CANCEL"*/, 0LL);
                v443 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                v441,
                                                                v442);
                CommonConfirmDialog_ClickDelegate___ctor(
                  v443,
                  (Il2CppObject *)_4__this,
                  Method_NetworkManager_OnClickUserDelete__,
                  0LL);
                if ( !v438 )
                  goto LABEL_530;
                CommonUI__OpenConfirmDialog_30344968((CommonUI_o *)v438, title, detail, v439, v440, v443, 0, 0, 0, 0LL);
                goto LABEL_470;
              }
            }
            else if ( v307 == 2106643173
                   && System_String__op_Equality(v306, (System_String_o *)StringLiteral_22740/*"refresh_terminal"*/, 0LL) )
            {
              if ( !BattleData_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
              BattleData__deleteSaveData(0LL);
              BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
              this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
              v482 = v3->fields._failData_5__6;
              if ( !v482 )
                goto LABEL_530;
              errorType = v482->fields.errorType;
              v374 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v315, v316);
              v375 = &Method_NetworkManager_OnClickRefreshTerminal__;
              goto LABEL_469;
            }
            goto LABEL_445;
          }
          if ( v307 != -1577396083 )
          {
            if ( v307 == -1519416853 && System_String__op_Equality(v306, (System_String_o *)StringLiteral_19752/*"goto_login_access"*/, 0LL) )
            {
              v318 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v318 = NetworkManager_TypeInfo;
              }
              v318->static_fields->isRebootBlock = 1;
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
              v481 = v3->fields._failData_5__6;
              if ( !v481 )
                goto LABEL_530;
              errorType = v481->fields.errorType;
              v374 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v319, v320);
              v375 = &Method_NetworkManager_OnClickErrorTerminal__;
              goto LABEL_469;
            }
            goto LABEL_445;
          }
          if ( !System_String__op_Equality(v306, (System_String_o *)StringLiteral_18583/*"do_signup"*/, 0LL) )
            goto LABEL_445;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          NetworkManager__DeleteSignupData(0LL);
          goto LABEL_439;
        }
        if ( v307 > 0xCC10A7C9 )
        {
          if ( v307 <= 0xDA79AAB9 )
          {
            if ( v307 == -809642680 )
            {
              this = (NetworkManager__RequestCR_d__213_o *)System_String__op_Equality(
                                                             v306,
                                                             (System_String_o *)StringLiteral_22716/*"reconnection"*/,
                                                             0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v444 = v3->fields._failData_5__6;
                if ( !v444 )
                  goto LABEL_530;
                sandboxDomain = v444->fields.sandboxDomain;
                sandboxSeurity = v444->fields.sandboxSeurity;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                NetworkManager__SetGameServerRedirect(sandboxDomain, sandboxSeurity, 0LL);
                v450 = v3->fields._failData_5__6;
                if ( !v450 )
                  goto LABEL_530;
                sandboxAssetsDomain = v450->fields.sandboxAssetsDomain;
                if ( !byte_49FBDAD )
                {
                  sub_1B640C8(&NetworkManager_TypeInfo, v447);
                  byte_49FBDAD = 1;
                }
                v452 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v452 = NetworkManager_TypeInfo;
                }
                v453 = v452->static_fields;
                v453->dataServerRedirectAddress = sandboxAssetsDomain;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&v453->dataServerRedirectAddress,
                  (int32_t)sandboxAssetsDomain,
                  v448,
                  v449);
                v457 = v3->fields._failData_5__6;
                if ( !v457 )
                  goto LABEL_530;
                sandboxWebviewDomain = v457->fields.sandboxWebviewDomain;
                if ( !byte_49FBDAE )
                {
                  sub_1B640C8(&NetworkManager_TypeInfo, v454);
                  byte_49FBDAE = 1;
                }
                v459 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v459 = NetworkManager_TypeInfo;
                }
                v460 = v459->static_fields;
                v460->webServerRedirectAddress = sandboxWebviewDomain;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&v460->webServerRedirectAddress,
                  (int32_t)sandboxWebviewDomain,
                  v455,
                  v456);
                NetworkManager__SetServerSetting_38139520(_4__this, 0LL);
                goto LABEL_470;
              }
            }
            else if ( v307 == -629560647
                   && System_String__op_Equality(v306, (System_String_o *)StringLiteral_22820/*"retry"*/, 0LL) )
            {
              this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
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
                if ( !byte_49FB4AB )
                {
                  sub_1B640C8(&ManagementManager_TypeInfo, v317);
                  byte_49FB4AB = 1;
                }
                v503 = ManagementManager_TypeInfo;
                if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                  v503 = ManagementManager_TypeInfo;
                }
                v504 = v503->static_fields->isDuringStartup;
                v507 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( v504 )
                {
                  v508 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v505, v506);
                  ErrorDialog_ClickDelegate___ctor(
                    v508,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0LL);
                  if ( !v507 )
                    goto LABEL_530;
                  CommonUI__OpenRetryBootDialog((CommonUI_o *)v507, title, detail, v508, 0, 0LL);
                }
                else if ( v243 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v512 = LocalizationManager__Get((System_String_o *)StringLiteral_3738/*"COMMON_CONFIRM_RETRY"*/, 0LL);
                  v513 = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
                  v516 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v514, v515);
                  ErrorDialog_ClickDelegate___ctor(
                    v516,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog_UnityIap__,
                    0LL);
                  if ( !v507 )
                    goto LABEL_530;
                  CommonUI__OpenRetryDialog_30344452((CommonUI_o *)v507, title, detail, v512, v513, v516, 0, 0LL);
                }
                else
                {
                  v517 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v505, v506);
                  ErrorDialog_ClickDelegate___ctor(
                    v517,
                    (Il2CppObject *)_4__this,
                    Method_NetworkManager_OnClickErrorRetryDialog__,
                    0LL);
                  if ( !v507 )
                    goto LABEL_530;
                  CommonUI__OpenRetryDialog((CommonUI_o *)v507, title, detail, v517, 0, 0LL);
                }
              }
              goto LABEL_470;
            }
            goto LABEL_445;
          }
          if ( v307 == -258062273 )
          {
            if ( System_String__op_Equality(v306, (System_String_o *)StringLiteral_20659/*"invalid_battle"*/, 0LL) )
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
          if ( v307 != -193734025 || !System_String__op_Equality(v306, (System_String_o *)StringLiteral_18401/*"data_update"*/, 0LL) )
            goto LABEL_445;
          v321 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v321 = NetworkManager_TypeInfo;
          }
          v321->static_fields->isRebootBlock = 1;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          DataManager__ClearCacheAll(0LL);
        }
        else
        {
          if ( v307 != -1105950412 )
          {
            if ( v307 != -969204192 )
            {
              if ( v307 == -871323703 && System_String__op_Equality(v306, (System_String_o *)StringLiteral_16745/*"app_version_up"*/, 0LL) )
              {
                if ( !ManagementManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
                ManagementManager__RebootCacheClear(0LL);
                v312 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v312 = NetworkManager_TypeInfo;
                }
                v312->static_fields->isRebootBlock = 1;
                v313 = v3->fields._failData_5__6;
                if ( v313 )
                  errorType = v313->fields.errorType;
                else
                  errorType = 0;
                v374 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v310, v311);
                v375 = &Method_NetworkManager_OnClickStore__;
LABEL_469:
                v483 = v374;
                System_Action___ctor(v374, (Il2CppObject *)_4__this, *v375, 0LL);
                NetworkManager__WarningDialog(_4__this, title, detail, url, errorType, v483, 0LL);
                goto LABEL_470;
              }
LABEL_445:
              v462 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v465 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v463, v464);
              ErrorDialog_ClickDelegate___ctor(
                v465,
                (Il2CppObject *)_4__this,
                Method_NetworkManager_OnClickErrorDialog__,
                0LL);
              if ( !v462 )
                goto LABEL_530;
              CommonUI__OpenErrorDialog((CommonUI_o *)v462, title, detail, v465, 0, 0LL);
LABEL_470:
              v3->fields._responseList_5__7 = 0LL;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._responseList_5__7, 0, v308, v309);
              if ( System_String__op_Equality(v3->fields._errorAction_5__5, (System_String_o *)StringLiteral_22716/*"reconnection"*/, 0LL) )
              {
LABEL_471:
                v3->fields._data_5__2 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._data_5__2, 0, v130, v131);
                v3->fields._errorCode_5__3 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorCode_5__3, 0, v484, v485);
                v3->fields._errorLocalizeCode_5__4 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorLocalizeCode_5__4, 0, v486, v487);
                v3->fields._errorAction_5__5 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._errorAction_5__5, 0, v488, v489);
                v3->fields._failData_5__6 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._failData_5__6, 0, v490, v491);
                v3->fields._responseList_5__7 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._responseList_5__7, 0, v492, v493);
                this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
                if ( !this )
                  goto LABEL_530;
                if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, void *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
                        this,
                        this->klass[1]._1.image) & 1) == 0 )
                {
                  this = (NetworkManager__RequestCR_d__213_o *)v3->fields.work;
                  if ( !this )
                    goto LABEL_530;
                  if ( (((__int64 (__fastcall *)(NetworkManager__RequestCR_d__213_o *, const char *))this->klass[1]._1.gc_desc)(
                          this,
                          this->klass[1]._1.name) & 1) != 0 )
                  {
                    this = (NetworkManager__RequestCR_d__213_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !this )
                      goto LABEL_530;
                    CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
                  }
                }
                v496 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                            UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                            v494,
                                                            v495);
                UnityEngine_WaitForEndOfFrame___ctor(v496, 0LL);
                v3->fields.__2__current = (Il2CppObject *)v496;
                v497 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
                sub_1B6406C(v497, (int32_t)v496, v498, v499);
                result = 1;
                *(_DWORD *)&v497[-1].fields.isMine = 1;
                return result;
              }
LABEL_478:
              v500 = (ServantStatusBattleListViewItem_c *)v3->fields._data_5__2;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_49FBDAF )
              {
                sub_1B640C8(&NetworkManager_TypeInfo, v252);
                byte_49FBDAF = 1;
              }
              v501 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v501 = NetworkManager_TypeInfo;
              }
              p_errorDialogResponseData = (ServantStatusBattleListViewItem_o *)&v501->static_fields->errorDialogResponseData;
              p_errorDialogResponseData->klass = v500;
              sub_1B6406C(p_errorDialogResponseData, (int32_t)v500, v130, v131);
              return 0;
            }
            this = (NetworkManager__RequestCR_d__213_o *)System_String__op_Equality(
                                                           v306,
                                                           (System_String_o *)StringLiteral_23438/*"stay"*/,
                                                           0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_445;
LABEL_439:
            v461 = v3->fields._failData_5__6;
            if ( !v461 )
              goto LABEL_530;
            errorType = v461->fields.errorType;
            v374 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v369, v370);
            v375 = &Method_NetworkManager_OnClickErrorStay__;
            goto LABEL_469;
          }
          if ( !System_String__op_Equality(v306, (System_String_o *)StringLiteral_21176/*"maint"*/, 0LL) )
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
        v376 = v3->fields._failData_5__6;
        if ( !v376 )
          goto LABEL_530;
        errorType = v376->fields.errorType;
        v374 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v322, v323);
        v375 = &Method_NetworkManager_OnClickErrorReboot__;
        goto LABEL_469;
      }
      return result;
    case 3:
      v147 = (NetworkManager__RequestCR_d__213_o **)&v3->fields._www_5__10;
      v146 = v3->fields._www_5__10;
      v3->fields.__1__state = -1;
      if ( !v146 )
        goto LABEL_530;
      if ( !System_String__IsNullOrEmpty(v146->fields._error_k__BackingField, 0LL) )
        goto LABEL_28;
      this = *v147;
      if ( !*v147 )
        goto LABEL_530;
      v148 = DelightWorks_Network_UnityWebRequestWWW__get_text((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      v3->fields._data_5__2 = v148;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._data_5__2, (int32_t)v148, v149, v150);
LABEL_28:
      this = *v147;
      if ( !*v147 )
        goto LABEL_530;
      DelightWorks_Network_UnityWebRequestWWW__Dispose((DelightWorks_Network_UnityWebRequestWWW_o *)this, 0LL);
      *v147 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._www_5__10, 0, v151, v152);
      goto LABEL_49;
    case 4:
      v3->fields.__1__state = -1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_NetworkManager__RequestCR_d__213_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  int32_t _1__state; // w8
  NetworkManager_c *v6; // x0
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  bool result; // w0

  if ( (byte_49FBC5C & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    byte_49FBC5C = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    v6->static_fields->nowTime = -1LL;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
LABEL_9:
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    p__2__current = &this->fields.__2__current;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v7, v9, v10);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_NetworkManager__TimeUpdate_d__81_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBC57 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager___c_TypeInfo, v1);
    byte_49FBC57 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(NetworkManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  NetworkManager___c_TypeInfo->static_fields->__9 = (struct NetworkManager___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)NetworkManager___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall NetworkManager___c___ctor(NetworkManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall NetworkManager___c___RequestCR_b__213_1(NetworkManager___c_o *this, const MethodInfo *method)
{
  TitleRootComponent_c *v2; // x0

  if ( (byte_49FBC58 & 1) == 0 )
  {
    sub_1B640C8(&TitleRootComponent_TypeInfo, method);
    byte_49FBC58 = 1;
  }
  v2 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v2 = TitleRootComponent_TypeInfo;
  }
  v2->static_fields->shouldFadeInOnError = 0;
}