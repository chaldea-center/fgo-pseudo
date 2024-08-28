void __fastcall AccountLinkageTakeOverComponent___ctor(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__AccountLinkageTakeOverCallback(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageTakeOverComponent_o *v4; // x19
  const MethodInfo *v5; // x1

  v4 = this;
  if ( (byte_4A1D54C & 1) == 0 )
  {
    this = (AccountLinkageTakeOverComponent_o *)sub_1B715CC(&StringLiteral_22170/*"ok"*/, result);
    byte_4A1D54C = 1;
  }
  if ( !result )
    sub_1B71828(this, result);
  if ( System_String__Equals_61513820(result, (System_String_o *)StringLiteral_22170/*"ok"*/, 0LL) )
    AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData(v4, v5);
  else
    AccountLinkageParams__ResetParams(0LL);
}


void __fastcall AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v30; // x1
  System_String_o *v31; // x22
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *newAuthKey; // x20
  System_String_o *newSecretKey; // x21
  Il2CppClass *klass; // x20
  NetworkManager_o *v36; // x20
  System_String_o *monitor; // x21
  int32_t monitor_high; // w22
  int32_t Month; // w23
  TermsOfUseMenu_c *v40; // x0
  System_String_o *v41; // x20
  System_String_o *v42; // x0
  System_String_o *v43; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v45; // x22
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v48; // 0:x0.8
  System_DateTime_o v49; // 0:x0.8
  System_Nullable_float__o v50; // 0:x3.8
  System_Nullable_int__o v51; // 0:x4.8

  if ( (byte_4A1D54F & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageParams_TypeInfo, method);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_b__21_0__, v3);
    sub_1B715CC(&System_Action_TypeInfo, v4);
    sub_1B715CC(&CommonUI_TypeInfo, v5);
    sub_1B715CC(&Method_DataManager_GetMaster_UserGameMaster___, v6);
    sub_1B715CC(&DataManager_TypeInfo, v7);
    sub_1B715CC(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__, v8);
    sub_1B715CC(&System_DateTime_TypeInfo, v9);
    sub_1B715CC(&LocalizationManager_TypeInfo, v10);
    sub_1B715CC(&NetworkManager_TypeInfo, v11);
    sub_1B715CC(&OtherUserNewManager_TypeInfo, v12);
    sub_1B715CC(&PurchaseBehaviour_TypeInfo, v13);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v14);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v16);
    sub_1B715CC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v17);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v18);
    sub_1B715CC(&TermsOfUseMenu_TypeInfo, v19);
    sub_1B715CC(&UserCommandCodeCollectionManager_TypeInfo, v20);
    sub_1B715CC(&UserCommandCodeNewManager_TypeInfo, v21);
    sub_1B715CC(&UserEquipNewManager_TypeInfo, v22);
    sub_1B715CC(&UserServantCollectionManager_TypeInfo, v23);
    sub_1B715CC(&UserServantNewManager_TypeInfo, v24);
    sub_1B715CC(&WarBoardData_TypeInfo, v25);
    sub_1B715CC(&StringLiteral_3858/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/, v26);
    sub_1B715CC(&StringLiteral_3861/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/, v27);
    sub_1B715CC(&StringLiteral_1997/*"ACCOUNT_LINKAGE_CONTINUE_SUCCESS"*/, v28);
    byte_4A1D54F = 1;
  }
  entity = 0LL;
  dateData = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( !Master_object )
    goto LABEL_64;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          Master_object,
          &entity,
          (const MethodInfo_30F89E8 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__) )
    goto LABEL_63;
  v31 = System_Int64__ToString((int64_t)&AccountLinkageParams_TypeInfo->static_fields->newUserId, 0LL);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  newAuthKey = static_fields->newAuthKey;
  newSecretKey = static_fields->newSecretKey;
  UserSaveData__DeleteAndInitContinueData(1, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__SetAuth((NetworkManager_o *)Master_object, v31, newAuthKey, newSecretKey, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__WriteAuth((NetworkManager_o *)Master_object, 0LL);
  if ( !entity )
    goto LABEL_64;
  klass = entity[2].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime_38183252((int64_t)klass, 0LL).fields._dateData;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_64;
  v36 = (NetworkManager_o *)Master_object;
  monitor = (System_String_o *)entity[1].monitor;
  monitor_high = HIDWORD(entity[4].monitor);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v48.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v48, 0LL);
  v49.fields._dateData = (uint64_t)&dateData;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_DateTime__get_Day(v49, 0LL);
  if ( !v36 )
    goto LABEL_64;
  NetworkManager__SetSignup_38262348(v36, monitor, monitor_high, Month, (int32_t)Master_object, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__WriteSignup((NetworkManager_o *)Master_object, 0LL);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__CreateContinueDeviceSaveData(0LL);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__CreateContinueDeviceSaveData(0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__CreateContinueDeviceSaveData(0LL);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__CreateContinueDeviceSaveData(0LL);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__CreateContinueDeviceSaveData(0LL);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__CreateContinueDeviceSaveData(0LL);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__CreateContinueDeviceSaveData(0LL);
  SoundPlayerComponent__CreateContinueDeviceSaveData(0LL);
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
  WarBoardData__CreateContinueDeviceSaveData(0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_64;
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__SetFriendCode((NetworkManager_o *)Master_object, (System_String_o *)entity[6].monitor, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__WriteFriendCode((NetworkManager_o *)Master_object, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.friendCodeComponent;
  if ( !Master_object )
    goto LABEL_64;
  FriendCodeComponent__UpdateFriendCode((FriendCodeComponent_o *)Master_object, 0LL);
  v40 = TermsOfUseMenu_TypeInfo;
  if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
  TermsOfUseMenu__Save((const MethodInfo *)v40);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !entity )
    goto LABEL_64;
  if ( !Master_object )
    goto LABEL_64;
  AdManager__SetUserId((AdManager_o *)Master_object, (int64_t)entity[1].klass, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !entity || !Master_object )
    goto LABEL_64;
  AdManager__SetFriendCode((AdManager_o *)Master_object, (System_String_o *)entity[6].monitor, 0LL);
  ListViewSort__FirstLoginSave(0LL);
  if ( !ServantCommentManager__GetUiFlag(0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_64;
    AtlasManager__ReleaseUISkinDialog((AtlasManager_o *)Master_object, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3858/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/,
                                                                  0LL);
  if ( !entity )
    goto LABEL_64;
  v41 = System_String__Format((System_String_o *)Master_object, (Il2CppObject *)entity[1].monitor, 0LL);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  if ( PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(0LL) )
  {
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__SetInitializedWithMismatchedObfuscatedAccountId(1, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3861/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/, 0LL);
    System_String__Concat_61505504(v41, v42, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_1997/*"ACCOUNT_LINKAGE_CONTINUE_SUCCESS"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v45 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_b__21_0__,
    0LL);
  if ( !Instance )
LABEL_64:
    sub_1B71828(Master_object, v30);
  v50 = 0LL;
  v51 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v43, v45, v50, v51, 0, 0LL);
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  CommonUI__DeleteTutorialSaveKey(0LL);
  CommonUI__DeleteFortuneBonusSaveKey(0LL);
LABEL_63:
  AccountLinkageParams__ResetParams(0LL);
}


void __fastcall AccountLinkageTakeOverComponent__Awake(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AccountLinkageTakeOverComponent__CheckMaintenanceInfo(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4A1D545 & 1) == 0 )
  {
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent_OpenLoginWebview__, method);
    sub_1B715CC(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v3);
    sub_1B715CC(&NetworkManager_TypeInfo, v4);
    sub_1B715CC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4A1D545 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B71818(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_OpenLoginWebview__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1B71828(0LL, v8);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__CloseWebViewCallback(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  System_String_o *v12; // x19
  Il2CppObject *Instance; // x20
  AccountLinkageTakeOverComponent___c_c *v14; // x8
  System_Action_o *_9__14_0; // x21
  Il2CppObject *v16; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x0
  __int64 v21; // x1
  System_Nullable_int__o v22; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o v23; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o v24; // 0:x0.8
  System_Nullable_int__o v25; // 0:x0.8
  System_Nullable_float__o v26; // 0:x3.8
  System_Nullable_int__o v27; // 0:x4.8

  if ( (byte_4A1D548 & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageParams_TypeInfo, method);
    sub_1B715CC(&System_Action_TypeInfo, v3);
    sub_1B715CC(&LocalizationManager_TypeInfo, v4);
    sub_1B715CC(&Method_System_Nullable_int___ctor__, v5);
    sub_1B715CC(&Method_System_Nullable_float___ctor__, v6);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent___c__CloseWebViewCallback_b__14_0__, v8);
    sub_1B715CC(&AccountLinkageTakeOverComponent___c_TypeInfo, v9);
    sub_1B715CC(&StringLiteral_2033/*"ACCOUNT_LINKAGE_TAKEOVER_ERROR_MESSAGE"*/, v10);
    byte_4A1D548 = 1;
  }
  if ( System_String__IsNullOrEmpty(AccountLinkageParams_TypeInfo->static_fields->authorizationCode, 0LL) )
  {
    AccountLinkageParams__ResetParams(0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2033/*"ACCOUNT_LINKAGE_TAKEOVER_ERROR_MESSAGE"*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = AccountLinkageTakeOverComponent___c_TypeInfo;
    if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
      v14 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    _9__14_0 = v14->static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = AccountLinkageTakeOverComponent___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__14_0 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(
        _9__14_0,
        v16,
        Method_AccountLinkageTakeOverComponent___c__CloseWebViewCallback_b__14_0__,
        0LL);
      static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = _9__14_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v18, v19);
    }
    v24 = (System_Nullable_float__o)&v23;
    v23 = 0LL;
    System_Nullable_float____ctor(v24, 35.0, (const MethodInfo_35EF1A0 *)Method_System_Nullable_float___ctor__);
    v25 = (System_Nullable_int__o)&v22;
    v22 = 0LL;
    System_Nullable_int____ctor(v25, 30, (const MethodInfo_35ECF7C *)Method_System_Nullable_int___ctor__);
    if ( !Instance )
      sub_1B71828(v20, v21);
    v27 = v22;
    v26 = v23;
    CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v12, _9__14_0, v26, v27, 2, 0LL);
  }
  else
  {
    AccountLinkageTakeOverComponent__SendIssueTokenRequest(this, v11);
  }
}


void __fastcall AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_4A1D54B & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageParams_TypeInfo, method);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent_AccountLinkageTakeOverCallback__, v3);
    sub_1B715CC(&Method_NetworkManager_getRequest_AccountLinkageContinueUserRequest___, v4);
    sub_1B715CC(&NetworkManager_TypeInfo, v5);
    sub_1B715CC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4A1D54B = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B71818(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_AccountLinkageTakeOverCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_AccountLinkageContinueUserRequest___);
  if ( !Request_object )
    sub_1B71828(0LL, v9);
  AccountLinkageContinueUserRequest__beginRequest(
    (AccountLinkageContinueUserRequest_o *)Request_object,
    AccountLinkageParams_TypeInfo->static_fields->accountLinkageToken,
    0LL);
}


void __fastcall AccountLinkageTakeOverComponent__IssueTokenCallback(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageTakeOverComponent_o *v4; // x19
  __int64 v5; // x1
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_4A1D54A & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageParams_TypeInfo, result);
    this = (AccountLinkageTakeOverComponent_o *)sub_1B715CC(&StringLiteral_22170/*"ok"*/, v5);
    byte_4A1D54A = 1;
  }
  if ( !result )
    sub_1B71828(this, result);
  v6 = System_String__Equals_61513820(result, (System_String_o *)StringLiteral_22170/*"ok"*/, 0LL);
  if ( v6 )
  {
    if ( AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked )
      AccountLinkageTakeOverComponent__ReConfirmAccountLinkage(v4, v7);
    else
      AccountLinkageTakeOverComponent__NoticeCannotTakeOver((AccountLinkageTakeOverComponent_o *)v6, v7);
  }
  else
  {
    AccountLinkageParams__ResetParams(0LL);
  }
}


void __fastcall AccountLinkageTakeOverComponent__LinkageStatusCheck(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4A1D542 & 1) == 0 )
  {
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent_UserDataStatusCheck__, method);
    sub_1B715CC(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v3);
    sub_1B715CC(&NetworkManager_TypeInfo, v4);
    sub_1B715CC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4A1D542 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B71818(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_UserDataStatusCheck__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1B71828(0LL, v8);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__NoticeCannotTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x19
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  AccountLinkageTakeOverComponent___c_c *v10; // x8
  CommonUI_o *v11; // x20
  System_Action_o *_9__19_0; // x21
  Il2CppObject *v13; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Nullable_float__o v17; // 0:x3.8
  System_Nullable_int__o v18; // 0:x4.8

  if ( (byte_4A1D54D & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&LocalizationManager_TypeInfo, v2);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent___c__NoticeCannotTakeOver_b__19_0__, v4);
    sub_1B715CC(&AccountLinkageTakeOverComponent___c_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_1994/*"ACCOUNT_LINKAGE_CANNOT_CONTINUE"*/, v6);
    byte_4A1D54D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1994/*"ACCOUNT_LINKAGE_CANNOT_CONTINUE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__19_0 = v10->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__19_0 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(_9__19_0, v13, Method_AccountLinkageTakeOverComponent___c__NoticeCannotTakeOver_b__19_0__, 0LL);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = _9__19_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v15, v16);
  }
  if ( !v11 )
    sub_1B71828(Instance, v9);
  v17 = 0LL;
  v18 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog(v11, v7, _9__19_0, v17, v18, 0, 0LL);
  AccountLinkageParams__ResetParams(0LL);
}


void __fastcall AccountLinkageTakeOverComponent__OnCloseTakeOverDecide(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x19
  AccountLinkageTakeOverComponent___c_c *v10; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__25_0; // x20
  Il2CppObject *v13; // x21
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A1D553 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&AvalonSceneManager_TypeInfo, v2);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent___c__OnCloseTakeOverDecide_b__25_0__, v4);
    sub_1B715CC(&AccountLinkageTakeOverComponent___c_TypeInfo, v5);
    byte_4A1D553 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__25_0 = v10->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      _9__25_0,
      v13,
      Method_AccountLinkageTakeOverComponent___c__OnCloseTakeOverDecide_b__25_0__,
      0LL);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = _9__25_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v15, v16);
  }
  if ( !v9 )
    sub_1B71828(v10, v7);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, _9__25_0, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__OnPartialMaintenance(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *mainteMessage,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  AccountLinkageTakeOverComponent___c_c *v10; // x8
  CommonUI_o *v11; // x20
  System_Action_o *_9__23_0; // x21
  Il2CppObject *v13; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x0
  __int64 v18; // x1
  System_Nullable_int__o v19; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v20; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_float__o v21; // 0:x0.8
  System_Nullable_int__o v22; // 0:x0.8
  System_Nullable_float__o v23; // 0:x3.8
  System_Nullable_int__o v24; // 0:x4.8

  if ( (byte_4A1D551 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, mainteMessage);
    sub_1B715CC(&Method_System_Nullable_int___ctor__, v4);
    sub_1B715CC(&Method_System_Nullable_float___ctor__, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent___c__OnPartialMaintenance_b__23_0__, v7);
    sub_1B715CC(&AccountLinkageTakeOverComponent___c_TypeInfo, v8);
    byte_4A1D551 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__23_0 = v10->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(_9__23_0, v13, Method_AccountLinkageTakeOverComponent___c__OnPartialMaintenance_b__23_0__, 0LL);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = _9__23_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v15, v16);
  }
  v21 = (System_Nullable_float__o)&v20;
  v20 = 0LL;
  System_Nullable_float____ctor(v21, 36.0, (const MethodInfo_35EF1A0 *)Method_System_Nullable_float___ctor__);
  v22 = (System_Nullable_int__o)&v19;
  v19 = 0LL;
  System_Nullable_int____ctor(v22, 26, (const MethodInfo_35ECF7C *)Method_System_Nullable_int___ctor__);
  if ( !v11 )
    sub_1B71828(v17, v18);
  v24 = v19;
  v23 = v20;
  CommonUI__OpenAccountLinkageNotificationDialog(v11, mainteMessage, _9__23_0, v23, v24, 0, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__OnSiteMaintenance(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x19
  Il2CppObject *Instance; // x0
  AccountLinkageTakeOverComponent___c_c *v10; // x8
  CommonUI_o *v11; // x20
  System_Action_o *_9__22_0; // x21
  Il2CppObject *v13; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x0
  __int64 v18; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v21; // 0:x3.8
  System_Nullable_int__o v22; // 0:x4.8

  if ( (byte_4A1D550 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&LocalizationManager_TypeInfo, v2);
    sub_1B715CC(&Method_System_Nullable_int___ctor__, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent___c__OnSiteMaintenance_b__22_0__, v5);
    sub_1B715CC(&AccountLinkageTakeOverComponent___c_TypeInfo, v6);
    sub_1B715CC(&StringLiteral_2006/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, v7);
    byte_4A1D550 = 1;
  }
  msgFontSize = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2006/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__22_0 = v10->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__22_0 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(_9__22_0, v13, Method_AccountLinkageTakeOverComponent___c__OnSiteMaintenance_b__22_0__, 0LL);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = _9__22_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v15, v16);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_35ECF7C *)Method_System_Nullable_int___ctor__);
  if ( !v11 )
    sub_1B71828(v17, v18);
  v22 = msgFontSize;
  v21 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog(v11, v8, _9__22_0, v21, v22, 0, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__OpenLoginWebview(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  PartialMaintenanceMaster_o *v12; // x20
  _BOOL8 isAniplexPlusAccountLinkageMaintenanceNow; // x0
  const MethodInfo *v14; // x1
  AccountLinkageTakeOverComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v16; // x2
  NetworkManager_ResultCallbackFunc_o *v17; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_4A1D546 & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageParams_TypeInfo, result);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent_OpenWebViewCallback__, v5);
    sub_1B715CC(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___, v6);
    sub_1B715CC(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___, v7);
    sub_1B715CC(&NetworkManager_TypeInfo, v8);
    sub_1B715CC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    this = (AccountLinkageTakeOverComponent_o *)sub_1B715CC(&StringLiteral_22170/*"ok"*/, v11);
    byte_4A1D546 = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( System_String__Equals_61513820(result, (System_String_o *)StringLiteral_22170/*"ok"*/, 0LL) )
  {
    this = (AccountLinkageTakeOverComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (AccountLinkageTakeOverComponent_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
      if ( this )
      {
        v12 = (PartialMaintenanceMaster_o *)this;
        isAniplexPlusAccountLinkageMaintenanceNow = PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
                                                      (PartialMaintenanceMaster_o *)this,
                                                      0LL);
        if ( isAniplexPlusAccountLinkageMaintenanceNow )
        {
          AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageTakeOverComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                               v12,
                                                                                               0LL);
          AccountLinkageTakeOverComponent__OnPartialMaintenance(
            AniplexPlusAccountLinkageMaintenanceMessage,
            (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
            v16);
          return;
        }
        if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
        {
          AccountLinkageTakeOverComponent__OnSiteMaintenance(
            (AccountLinkageTakeOverComponent_o *)isAniplexPlusAccountLinkageMaintenanceNow,
            v14);
          return;
        }
        AccountLinkageParams__ResetParams(0LL);
        AccountLinkageParams__GetCodeChallenge(0LL);
        v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1B71818(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v17,
          v4,
          Method_AccountLinkageTakeOverComponent_OpenWebViewCallback__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (AccountLinkageTakeOverComponent_o *)NetworkManager__getRequest_object_(
                                                      v17,
                                                      (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
        if ( this )
        {
          RequestBase__beginRequest((RequestBase_o *)this, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1B71828(this, result);
  }
}


void __fastcall AccountLinkageTakeOverComponent__OpenWebViewCallback(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *AuthURL; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *basicUserName; // x21
  System_String_o *basicPassword; // x22
  System_Action_o *v14; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4A1D547 & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageParams_TypeInfo, result);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent_CloseWebViewCallback__, v5);
    sub_1B715CC(&System_Action_TypeInfo, v6);
    sub_1B715CC(&WebViewManager_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_22170/*"ok"*/, v8);
    this = (AccountLinkageTakeOverComponent_o *)sub_1B715CC(&StringLiteral_1/*""*/, v9);
    byte_4A1D547 = 1;
  }
  if ( !result )
    sub_1B71828(this, result);
  if ( System_String__Equals_61513820(result, (System_String_o *)StringLiteral_22170/*"ok"*/, 0LL) )
  {
    AuthURL = AccountLinkageParams__GetAuthURL(1, 0LL);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v14 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v14, v4, Method_AccountLinkageTakeOverComponent_CloseWebViewCallback__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    if ( basicUserName == 0LL || basicPassword == 0LL )
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v14, 0LL);
    else
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v14,
        0LL);
  }
}


void __fastcall AccountLinkageTakeOverComponent__ReConfirmAccountLinkage(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
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
  __int64 v21; // x1
  System_String_o *v22; // x29
  System_String_o *v23; // x22
  Il2CppObject *v24; // x19
  Il2CppObject *NumberFormat_38190260; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x21
  bool SelfUserGame; // w19
  System_String_o *v32; // x20
  System_String_o *v33; // x0
  __int64 v34; // x1
  System_String_o *v35; // x19
  Il2CppObject *v36; // x25
  System_String_o *name; // x0
  System_String_o *v38; // x22
  System_String_o *v39; // x23
  System_String_o *v40; // x24
  System_String_o *v41; // x19
  Il2CppObject *Instance; // x25
  TakeOverDialog_ClickDelegate_o *v43; // x26
  Il2CppObject *v44; // x29
  System_String_o *v45; // x24
  System_String_o *buttonDecide; // x21
  Il2CppObject *v47; // x23
  Il2CppObject *v48; // x19
  System_String_o *v49; // x26
  System_String_o *v50; // x27
  System_String_o *v51; // x28
  System_String_o *v52; // x22
  Il2CppObject *v53; // x19
  AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *v54; // x25
  System_String_o *buttonCancel; // [xsp+18h] [xbp-78h]
  int32_t requestedAccountLevel; // [xsp+24h] [xbp-6Ch] BYREF
  UserGameEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A1D54E & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageParams_TypeInfo, method);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_0__, v3);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_1__, v4);
    sub_1B715CC(&TakeOverDialog_ClickDelegate_TypeInfo, v5);
    sub_1B715CC(&AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo, v6);
    sub_1B715CC(&int_TypeInfo, v7);
    sub_1B715CC(&LocalizationManager_TypeInfo, v8);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B715CC(&StringLiteral_13199/*"TAKEOVER_OVERRIDE_WARNING"*/, v10);
    sub_1B715CC(&StringLiteral_14781/*"USER_DATA_INFO"*/, v11);
    sub_1B715CC(&StringLiteral_5737/*"EXIST_ACCOUNT_DATA"*/, v12);
    sub_1B715CC(&StringLiteral_11002/*"RECONFIRM_CONTINUE_OVERRIDE"*/, v13);
    sub_1B715CC(&StringLiteral_2014/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/, v14);
    sub_1B715CC(&StringLiteral_2012/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, v15);
    sub_1B715CC(&StringLiteral_2018/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, v16);
    sub_1B715CC(&StringLiteral_2016/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE_NO_DATA"*/, v17);
    sub_1B715CC(&StringLiteral_2022/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/, v18);
    sub_1B715CC(&StringLiteral_11001/*"RECONFIRM_CONTINUE"*/, v19);
    sub_1B715CC(&StringLiteral_14798/*"USER_NAME_NOT_SET"*/, v20);
    sub_1B715CC(&StringLiteral_2023/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/, v21);
    byte_4A1D54E = 1;
  }
  entity = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2012/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_14781/*"USER_DATA_INFO"*/, 0LL);
  v24 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(
                          AccountLinkageParams_TypeInfo->static_fields->requestedAccountName,
                          0LL);
  NumberFormat_38190260 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38190260(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0LL);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestedAccountLevel, v26, v27, v28);
  v30 = System_String__Format_61519944(v23, NumberFormat_38190260, v24, v29, 0LL);
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !SelfUserGame )
  {
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11001/*"RECONFIRM_CONTINUE"*/, 0LL);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2014/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/, 0LL);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2016/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE_NO_DATA"*/, 0LL);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_2023/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v43 = (TakeOverDialog_ClickDelegate_o *)sub_1B71818(TakeOverDialog_ClickDelegate_TypeInfo);
    TakeOverDialog_ClickDelegate___ctor(
      v43,
      (Il2CppObject *)this,
      Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_1__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenTakeOverDialog((CommonUI_o *)Instance, v43, v38, v30, v40, v41, v22, v39, 0LL);
      return;
    }
LABEL_23:
    sub_1B71828(v33, v34);
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11002/*"RECONFIRM_CONTINUE_OVERRIDE"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_2018/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, 0LL);
  if ( !entity )
    goto LABEL_23;
  v35 = v33;
  v33 = LocalizationManager__GetNumberFormat_38190260(entity->fields.friendCode, 0LL);
  if ( !entity )
    goto LABEL_23;
  v36 = (Il2CppObject *)v33;
  buttonCancel = v22;
  if ( entity->fields.genderType == 3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    name = LocalizationManager__Get((System_String_o *)StringLiteral_14798/*"USER_NAME_NOT_SET"*/, 0LL);
  }
  else
  {
    name = entity->fields.name;
  }
  v33 = AccountLinkageParams__AddColorCodeBracket(name, 0LL);
  if ( !entity )
    goto LABEL_23;
  v44 = (Il2CppObject *)v33;
  v45 = v30;
  buttonDecide = v35;
  v47 = (Il2CppObject *)this;
  v48 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5737/*"EXIST_ACCOUNT_DATA"*/, 0LL);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_13199/*"TAKEOVER_OVERRIDE_WARNING"*/, 0LL);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_2022/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/, 0LL);
  v52 = System_String__Format_61519944(v23, v36, v44, v48, 0LL);
  v53 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v54 = (AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *)sub_1B71818(AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo);
  AccountLinkageOverrideTakeOverDialog_ClickDelegate___ctor(
    v54,
    v47,
    Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_0__,
    0LL);
  if ( !v53 )
    goto LABEL_23;
  CommonUI__OpenAccountLinkageOverrideTakeOverDialog(
    (CommonUI_o *)v53,
    v54,
    v32,
    v49,
    v52,
    v45,
    v50,
    v51,
    buttonCancel,
    buttonDecide,
    0LL);
}


void __fastcall AccountLinkageTakeOverComponent__SendIssueTokenRequest(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_4A1D549 & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageParams_TypeInfo, method);
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent_IssueTokenCallback__, v3);
    sub_1B715CC(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___, v4);
    sub_1B715CC(&NetworkManager_TypeInfo, v5);
    sub_1B715CC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4A1D549 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B71818(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_IssueTokenCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  if ( !Request_object )
    sub_1B71828(0LL, v9);
  AccountLinkageIssueTokenRequest__beginRequest(
    (AccountLinkageIssueTokenRequest_o *)Request_object,
    AccountLinkageParams_TypeInfo->static_fields->authorizationCode,
    AccountLinkageParams_TypeInfo->static_fields->codeVerifier,
    0LL);
}


void __fastcall AccountLinkageTakeOverComponent__SetupTitleImg(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *titleImg; // x0
  __int64 *v6; // x8

  if ( (byte_4A1D552 & 1) == 0 )
  {
    sub_1B715CC(&SelectTakeOverTypeComponent_TypeInfo, method);
    sub_1B715CC(&StringLiteral_20443/*"img_txt_a_online_acount"*/, v3);
    sub_1B715CC(&StringLiteral_20444/*"img_txt_a_online_acount_overwrite"*/, v4);
    byte_4A1D552 = 1;
  }
  titleImg = this->fields.titleImg;
  if ( !titleImg
    || (!SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride
      ? (v6 = &StringLiteral_20443/*"img_txt_a_online_acount"*/)
      : (v6 = &StringLiteral_20444/*"img_txt_a_online_acount_overwrite"*/),
        UISprite__set_spriteName(titleImg, (System_String_o *)*v6, 0LL),
        (titleImg = this->fields.titleImg) == 0LL) )
  {
    sub_1B71828(titleImg, method);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))titleImg->klass->vtable._33_MakePixelPerfect.method)(
    titleImg,
    titleImg->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall AccountLinkageTakeOverComponent__StartAccountLinkageTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A1D544 & 1) == 0 )
  {
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__, method);
    byte_4A1D544 = 1;
  }
  v3 = Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__;
  if ( (*((_BYTE *)Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B715E4(Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B715B0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  AccountLinkageTakeOverComponent__CheckMaintenanceInfo(this, v5);
}


void __fastcall AccountLinkageTakeOverComponent__UserDataStatusCheck(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
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
  UILabel_o *detailLabel; // x21
  System_String_o *Instance; // x0
  __int64 v19; // x1
  UILabel_o *contentLabel; // x21
  PartialMaintenanceMaster_o *v21; // x20
  AccountLinkageTakeOverComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v23; // x2
  System_String_o *friendCode; // x20
  Il2CppObject *v25; // x20
  System_String_o *name; // x0
  UILabel_o *takeOverButtonLabel; // x20
  __int64 *v28; // x8
  Il2CppObject *v29; // x21
  Il2CppObject *v30; // x22
  System_String_o *v31; // x0
  UILabel_o *userDataStatusInfoLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v34; // x1
  UserGameEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A1D543 & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageComponent_TypeInfo, result);
    sub_1B715CC(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___, v5);
    sub_1B715CC(&LocalizationManager_TypeInfo, v6);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B715CC(&StringLiteral_2030/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON_NO_USER_DATA"*/, v8);
    sub_1B715CC(&StringLiteral_22170/*"ok"*/, v9);
    sub_1B715CC(&StringLiteral_14781/*"USER_DATA_INFO"*/, v10);
    sub_1B715CC(&StringLiteral_2029/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON"*/, v11);
    sub_1B715CC(&StringLiteral_9275/*"NO_USER_DATA"*/, v12);
    sub_1B715CC(&StringLiteral_2032/*"ACCOUNT_LINKAGE_TAKEOVER_DETAIL_MESSAGE"*/, v13);
    sub_1B715CC(&StringLiteral_2024/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/, v14);
    sub_1B715CC(&StringLiteral_14798/*"USER_NAME_NOT_SET"*/, v15);
    sub_1B715CC(&StringLiteral_11453/*"SELECT_ACCOUNT_LINKAGE_TAKEOVER"*/, v16);
    byte_4A1D543 = 1;
  }
  entity = 0LL;
  detailLabel = this->fields.detailLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2032/*"ACCOUNT_LINKAGE_TAKEOVER_DETAIL_MESSAGE"*/, 0LL);
  if ( !detailLabel )
    goto LABEL_39;
  UILabel__set_text(detailLabel, Instance, 0LL);
  contentLabel = this->fields.contentLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2024/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/, 0LL);
  if ( !contentLabel )
    goto LABEL_39;
  UILabel__set_text(contentLabel, Instance, 0LL);
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22170/*"ok"*/, 0LL) )
    return;
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
  if ( !Instance )
    goto LABEL_39;
  v21 = (PartialMaintenanceMaster_o *)Instance;
  if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow((PartialMaintenanceMaster_o *)Instance, 0LL) )
  {
    AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageTakeOverComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                         v21,
                                                                                         0LL);
    AccountLinkageTakeOverComponent__OnPartialMaintenance(
      AniplexPlusAccountLinkageMaintenanceMessage,
      (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
      v23);
    return;
  }
  Instance = (System_String_o *)UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      friendCode = entity->fields.friendCode;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__GetNumberFormat_38190260(friendCode, 0LL);
      if ( entity )
      {
        v25 = (Il2CppObject *)Instance;
        if ( entity->fields.genderType == 3 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          name = LocalizationManager__Get((System_String_o *)StringLiteral_14798/*"USER_NAME_NOT_SET"*/, 0LL);
        }
        else
        {
          name = entity->fields.name;
        }
        Instance = AccountLinkageParams__AddColorCodeBracket(name, 0LL);
        if ( entity )
        {
          v29 = (Il2CppObject *)Instance;
          v30 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_14781/*"USER_DATA_INFO"*/, 0LL);
          Instance = System_String__Format_61519944(v31, v25, v29, v30, 0LL);
          if ( this->fields.userDataStatusInfoLabel )
          {
            UILabel__set_text(this->fields.userDataStatusInfoLabel, Instance, 0LL);
            takeOverButtonLabel = this->fields.takeOverButtonLabel;
            v28 = &StringLiteral_2029/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON"*/;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_39:
    sub_1B71828(Instance, v19);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_9275/*"NO_USER_DATA"*/, 0LL);
  if ( !this->fields.userDataStatusInfoLabel )
    goto LABEL_39;
  UILabel__set_text(this->fields.userDataStatusInfoLabel, Instance, 0LL);
  takeOverButtonLabel = this->fields.takeOverButtonLabel;
  v28 = &StringLiteral_2030/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON_NO_USER_DATA"*/;
LABEL_31:
  Instance = LocalizationManager__Get((System_String_o *)*v28, 0LL);
  if ( !takeOverButtonLabel )
    goto LABEL_39;
  UILabel__set_text(takeOverButtonLabel, Instance, 0LL);
  userDataStatusInfoLabel = this->fields.userDataStatusInfoLabel;
  Instance = (System_String_o *)AccountLinkageComponent_TypeInfo;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
  if ( !userDataStatusInfoLabel )
    goto LABEL_39;
  UILabel__set_spacingY(
    userDataStatusInfoLabel,
    AccountLinkageComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_DATA_SPACING_Y,
    0LL);
  Instance = (System_String_o *)this->fields.userDataStatusInfoLabel;
  if ( !Instance )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)AccountLinkageComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_DATA_TRANSFORM_Y,
    0LL);
  AccountLinkageTakeOverComponent__SetupTitleImg(this, v34);
  Instance = (System_String_o *)this->fields.titleFsm;
  if ( !Instance )
    goto LABEL_39;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11453/*"SELECT_ACCOUNT_LINKAGE_TAKEOVER"*/, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___AccountLinkageUpdateUserData_b__21_0(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A1D556 & 1) == 0 )
  {
    sub_1B715CC(&Method_AccountLinkageTakeOverComponent_OnCloseTakeOverDecide__, method);
    sub_1B715CC(&System_Action_TypeInfo, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A1D556 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AccountLinkageTakeOverComponent_OnCloseTakeOverDecide__, 0LL);
  if ( !Instance )
    sub_1B71828(v7, v8);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageTakeOverComponent___ReConfirmAccountLinkage_b__20_0(
        AccountLinkageTakeOverComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4A1D554 & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A1D554 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v6);
  CommonUI__CloseAccountLinkageOverrideTakeOverDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isDecide )
    AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageTakeOverComponent___ReConfirmAccountLinkage_b__20_1(
        AccountLinkageTakeOverComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4A1D555 & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A1D555 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v6);
  CommonUI__CloseTakeOverDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isDecide )
    AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(this, v7);
}


void __fastcall AccountLinkageTakeOverComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A1D557 & 1) == 0 )
  {
    sub_1B715CC(&AccountLinkageTakeOverComponent___c_TypeInfo, v1);
    byte_4A1D557 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(AccountLinkageTakeOverComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AccountLinkageTakeOverComponent___c_TypeInfo->static_fields->__9 = (struct AccountLinkageTakeOverComponent___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)AccountLinkageTakeOverComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall AccountLinkageTakeOverComponent___c___ctor(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___CloseWebViewCallback_b__14_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A1D558 & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A1D558 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___NoticeCannotTakeOver_b__19_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A1D559 & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A1D559 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___OnCloseTakeOverDecide_b__25_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A1D55C & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_4A1D55C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___OnPartialMaintenance_b__23_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A1D55B & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A1D55B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___OnSiteMaintenance_b__22_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A1D55A & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A1D55A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}