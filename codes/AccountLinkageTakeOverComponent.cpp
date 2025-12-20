void AccountLinkageTakeOverComponent___ctor(AccountLinkageTakeOverComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AccountLinkageTakeOverComponent__AccountLinkageTakeOverCallback(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageTakeOverComponent_o *v4; // x19
  const MethodInfo *v5; // x1

  v4 = this;
  if ( (byte_4D29F6E & 1) == 0 )
  {
    this = (AccountLinkageTakeOverComponent_o *)sub_1C94098(&StringLiteral_22594/*"ok"*/);
    byte_4D29F6E = 1;
  }
  if ( !result )
    sub_1C942F0(this, result);
  if ( System_String__Equals_64453064(result, (System_String_o *)StringLiteral_22594/*"ok"*/, 0) )
    AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData(v4, v5);
  else
    AccountLinkageParams__ResetParams(0);
}


void AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v4; // x1
  System_String_o *v5; // x22
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *newAuthKey; // x20
  System_String_o *newSecretKey; // x21
  Il2CppClass *klass; // x20
  NetworkManager_o *v10; // x20
  System_String_o *monitor; // x21
  int32_t monitor_high; // w22
  System_DateTime_o v13; // x0
  int32_t Month; // w23
  System_DateTime_o v15; // x0
  TermsOfUseMenu_c *v16; // x0
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v21; // x22
  System_Nullable_float__o v22; // x3
  System_Nullable_int__o v23; // x4
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D29F71 & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_b__21_0__);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&CommonUI_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserGameMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__);
    sub_1C94098(&System_DateTime_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&OtherUserNewManager_TypeInfo);
    sub_1C94098(&PurchaseBehaviour_TypeInfo);
    sub_1C94098(&ServantCommentManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C94098(&TermsOfUseMenu_TypeInfo);
    sub_1C94098(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C94098(&UserCommandCodeNewManager_TypeInfo);
    sub_1C94098(&UserEquipNewManager_TypeInfo);
    sub_1C94098(&UserServantCollectionManager_TypeInfo);
    sub_1C94098(&UserServantNewManager_TypeInfo);
    sub_1C94098(&WarBoardData_TypeInfo);
    sub_1C94098(&StringLiteral_3824/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/);
    sub_1C94098(&StringLiteral_3827/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/);
    sub_1C94098(&StringLiteral_1863/*"ACCOUNT_LINKAGE_CONTINUE_SUCCESS"*/);
    byte_4D29F71 = 1;
  }
  entity = 0;
  dateData = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( !Master_object )
    goto LABEL_64;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          Master_object,
          &entity,
          (const MethodInfo_345DB48 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__) )
    goto LABEL_63;
  v5 = System_Int64__ToString((int64_t)&AccountLinkageParams_TypeInfo->static_fields->newUserId, 0);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  newAuthKey = static_fields->newAuthKey;
  newSecretKey = static_fields->newSecretKey;
  UserSaveData__DeleteAndInitContinueData(1, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__SetAuth((NetworkManager_o *)Master_object, v5, newAuthKey, newSecretKey, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__WriteAuth((NetworkManager_o *)Master_object, 0);
  if ( !entity )
    goto LABEL_64;
  klass = entity[2].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime_42129048((int64_t)klass, 0).fields._dateData;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_64;
  v10 = (NetworkManager_o *)Master_object;
  monitor = (System_String_o *)entity[1].monitor;
  monitor_high = HIDWORD(entity[4].monitor);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v13.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v13, 0);
  v15.fields._dateData = (uint64_t)&dateData;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_DateTime__get_Day(v15, 0);
  if ( !v10 )
    goto LABEL_64;
  NetworkManager__SetSignup_42118972(v10, monitor, monitor_high, Month, (int32_t)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__WriteSignup((NetworkManager_o *)Master_object, 0);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__CreateContinueDeviceSaveData(0);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__CreateContinueDeviceSaveData(0);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__CreateContinueDeviceSaveData(0);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__CreateContinueDeviceSaveData(0);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__CreateContinueDeviceSaveData(0);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__CreateContinueDeviceSaveData(0);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__CreateContinueDeviceSaveData(0);
  SoundPlayerComponent__CreateContinueDeviceSaveData(0);
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
  WarBoardData__CreateContinueDeviceSaveData(0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_64;
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__SetFriendCode((NetworkManager_o *)Master_object, (System_String_o *)entity[7].klass, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__WriteFriendCode((NetworkManager_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.friendCodeComponent;
  if ( !Master_object )
    goto LABEL_64;
  FriendCodeComponent__UpdateFriendCode((FriendCodeComponent_o *)Master_object, 0);
  v16 = TermsOfUseMenu_TypeInfo;
  if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
  TermsOfUseMenu__Save((const MethodInfo *)v16);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !entity )
    goto LABEL_64;
  if ( !Master_object )
    goto LABEL_64;
  AdManager__SetUserId((AdManager_o *)Master_object, (int64_t)entity[1].klass, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !entity || !Master_object )
    goto LABEL_64;
  AdManager__SetFriendCode((AdManager_o *)Master_object, (System_String_o *)entity[7].klass, 0);
  ListViewSort__FirstLoginSave(0);
  if ( !ServantCommentManager__GetUiFlag(0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_64;
    AtlasManager__ReleaseUISkinDialog((AtlasManager_o *)Master_object, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3824/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/,
                                                                  0);
  if ( !entity )
    goto LABEL_64;
  v17 = System_String__Format((System_String_o *)Master_object, (Il2CppObject *)entity[1].monitor, 0);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  if ( PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(0) )
  {
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__SetInitializedWithMismatchedObfuscatedAccountId(1, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/, 0);
    System_String__Concat_64417744(v17, v18, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_1863/*"ACCOUNT_LINKAGE_CONTINUE_SUCCESS"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_b__21_0__,
    0);
  if ( !Instance )
LABEL_64:
    sub_1C942F0(Master_object, v4);
  v22 = 0;
  v23 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v19, v21, v22, v23, 0, 0);
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  CommonUI__DeleteMovieSaveKey(0);
  CommonUI__DeleteTutorialSaveKey(0);
  CommonUI__DeleteFortuneBonusSaveKey(0);
LABEL_63:
  AccountLinkageParams__ResetParams(0);
}


void AccountLinkageTakeOverComponent__Awake(AccountLinkageTakeOverComponent_o *this, const MethodInfo *method)
{
  ;
}


void AccountLinkageTakeOverComponent__CheckMaintenanceInfo(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4D29F67 & 1) == 0 )
  {
    sub_1C94098(&Method_AccountLinkageTakeOverComponent_OpenLoginWebview__);
    sub_1C94098(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D29F67 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_OpenLoginWebview__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1C942F0(0, v5);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0);
}


void AccountLinkageTakeOverComponent__CloseWebViewCallback(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_String_o *v4; // x19
  Il2CppObject *Instance; // x20
  AccountLinkageTakeOverComponent___c_c *v6; // x8
  System_Action_o *_9__14_0; // x21
  Il2CppObject *v8; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Nullable_float__o v16; // x0
  System_Nullable_int__o v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  System_Nullable_float__o v20; // x3
  System_Nullable_int__o v21; // x4
  System_Nullable_int__o v22; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D29F6A & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&Method_System_Nullable_float___ctor__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent___c__CloseWebViewCallback_b__14_0__);
    sub_1C94098(&AccountLinkageTakeOverComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_1899/*"ACCOUNT_LINKAGE_TAKEOVER_ERROR_MESSAGE"*/);
    byte_4D29F6A = 1;
  }
  if ( System_String__IsNullOrEmpty(AccountLinkageParams_TypeInfo->static_fields->authorizationCode, 0) )
  {
    AccountLinkageParams__ResetParams(0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1899/*"ACCOUNT_LINKAGE_TAKEOVER_ERROR_MESSAGE"*/, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AccountLinkageTakeOverComponent___c_TypeInfo;
    if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
      v6 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    _9__14_0 = v6->static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = AccountLinkageTakeOverComponent___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__14_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(_9__14_0, v8, Method_AccountLinkageTakeOverComponent___c__CloseWebViewCallback_b__14_0__, 0);
      static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = _9__14_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__14_0,
        (int32_t)_9__14_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = (System_Nullable_float__o)&v23;
    v23 = 0;
    System_Nullable_float____ctor(v16, 35.0, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
    v17 = (System_Nullable_int__o)&v22;
    v22 = 0;
    System_Nullable_int____ctor(v17, 30, (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
    if ( !Instance )
      sub_1C942F0(v18, v19);
    v21 = v22;
    v20 = v23;
    CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, _9__14_0, v20, v21, 2, 0);
  }
  else
  {
    AccountLinkageTakeOverComponent__SendIssueTokenRequest(this, v3);
  }
}


void AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4D29F6D & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent_AccountLinkageTakeOverCallback__);
    sub_1C94098(&Method_NetworkManager_getRequest_AccountLinkageContinueUserRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D29F6D = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_AccountLinkageTakeOverCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_AccountLinkageContinueUserRequest___);
  if ( !Request_object )
    sub_1C942F0(0, v5);
  AccountLinkageContinueUserRequest__beginRequest(
    (AccountLinkageContinueUserRequest_o *)Request_object,
    AccountLinkageParams_TypeInfo->static_fields->accountLinkageToken,
    0);
}


void AccountLinkageTakeOverComponent__IssueTokenCallback(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageTakeOverComponent_o *v4; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1

  v4 = this;
  if ( (byte_4D29F6C & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    this = (AccountLinkageTakeOverComponent_o *)sub_1C94098(&StringLiteral_22594/*"ok"*/);
    byte_4D29F6C = 1;
  }
  if ( !result )
    sub_1C942F0(this, result);
  v5 = System_String__Equals_64453064(result, (System_String_o *)StringLiteral_22594/*"ok"*/, 0);
  if ( v5 )
  {
    if ( AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked )
      AccountLinkageTakeOverComponent__ReConfirmAccountLinkage(v4, v6);
    else
      AccountLinkageTakeOverComponent__NoticeCannotTakeOver((AccountLinkageTakeOverComponent_o *)v5, v6);
  }
  else
  {
    AccountLinkageParams__ResetParams(0);
  }
}


void AccountLinkageTakeOverComponent__LinkageStatusCheck(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4D29F64 & 1) == 0 )
  {
    sub_1C94098(&Method_AccountLinkageTakeOverComponent_UserDataStatusCheck__);
    sub_1C94098(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D29F64 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_UserDataStatusCheck__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1C942F0(0, v5);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0);
}


void AccountLinkageTakeOverComponent__NoticeCannotTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x19
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AccountLinkageTakeOverComponent___c_c *v5; // x8
  CommonUI_o *v6; // x20
  System_Action_o *_9__19_0; // x21
  Il2CppObject *v8; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Nullable_float__o v16; // x3
  System_Nullable_int__o v17; // x4

  if ( (byte_4D29F6F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent___c__NoticeCannotTakeOver_b__19_0__);
    sub_1C94098(&AccountLinkageTakeOverComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_1860/*"ACCOUNT_LINKAGE_CANNOT_CONTINUE"*/);
    byte_4D29F6F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_1860/*"ACCOUNT_LINKAGE_CANNOT_CONTINUE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v5 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__19_0 = v5->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__19_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(_9__19_0, v8, Method_AccountLinkageTakeOverComponent___c__NoticeCannotTakeOver_b__19_0__, 0);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = _9__19_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__19_0,
      (int32_t)_9__19_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v6 )
    sub_1C942F0(Instance, v4);
  v16 = 0;
  v17 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog(v6, v2, _9__19_0, v16, v17, 0, 0);
  AccountLinkageParams__ResetParams(0);
}


void AccountLinkageTakeOverComponent__OnCloseTakeOverDecide(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x19
  AccountLinkageTakeOverComponent___c_c *v6; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__25_0; // x20
  Il2CppObject *v9; // x21
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D29F75 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent___c__OnCloseTakeOverDecide_b__25_0__);
    sub_1C94098(&AccountLinkageTakeOverComponent___c_TypeInfo);
    byte_4D29F75 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  v6 = AccountLinkageTakeOverComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v6 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__25_0 = v6->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v9, Method_AccountLinkageTakeOverComponent___c__OnCloseTakeOverDecide_b__25_0__, 0);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = _9__25_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__25_0,
      (int32_t)_9__25_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v5 )
    sub_1C942F0(v6, v3);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, _9__25_0, 0);
}


void AccountLinkageTakeOverComponent__OnPartialMaintenance(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *mainteMessage,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AccountLinkageTakeOverComponent___c_c *v5; // x8
  CommonUI_o *v6; // x20
  System_Action_o *_9__23_0; // x21
  Il2CppObject *v8; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Nullable_float__o v16; // x0
  System_Nullable_int__o v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  System_Nullable_float__o v20; // x3
  System_Nullable_int__o v21; // x4
  System_Nullable_int__o v22; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D29F73 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&Method_System_Nullable_float___ctor__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent___c__OnPartialMaintenance_b__23_0__);
    sub_1C94098(&AccountLinkageTakeOverComponent___c_TypeInfo);
    byte_4D29F73 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v5 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__23_0 = v5->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(_9__23_0, v8, Method_AccountLinkageTakeOverComponent___c__OnPartialMaintenance_b__23_0__, 0);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = _9__23_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__23_0,
      (int32_t)_9__23_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (System_Nullable_float__o)&v23;
  v23 = 0;
  System_Nullable_float____ctor(v16, 36.0, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
  v17 = (System_Nullable_int__o)&v22;
  v22 = 0;
  System_Nullable_int____ctor(v17, 26, (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
  if ( !v6 )
    sub_1C942F0(v18, v19);
  v21 = v22;
  v20 = v23;
  CommonUI__OpenAccountLinkageNotificationDialog(v6, mainteMessage, _9__23_0, v20, v21, 0, 0);
}


void AccountLinkageTakeOverComponent__OnSiteMaintenance(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x19
  Il2CppObject *Instance; // x0
  AccountLinkageTakeOverComponent___c_c *v4; // x8
  CommonUI_o *v5; // x20
  System_Action_o *_9__22_0; // x21
  Il2CppObject *v7; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Nullable_int__o p_msgFontSize; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Nullable_int__o v18; // x4
  System_Nullable_float__o v19; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D29F72 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent___c__OnSiteMaintenance_b__22_0__);
    sub_1C94098(&AccountLinkageTakeOverComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_1872/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/);
    byte_4D29F72 = 1;
  }
  msgFontSize = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_1872/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v4 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__22_0 = v4->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__22_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(_9__22_0, v7, Method_AccountLinkageTakeOverComponent___c__OnSiteMaintenance_b__22_0__, 0);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = _9__22_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__22_0,
      (int32_t)_9__22_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
  if ( !v5 )
    sub_1C942F0(v16, v17);
  v18 = msgFontSize;
  v19 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog(v5, v2, _9__22_0, v19, v18, 0, 0);
}


void AccountLinkageTakeOverComponent__OpenLoginWebview(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  PartialMaintenanceMaster_o *v5; // x20
  _BOOL8 isAniplexPlusAccountLinkageMaintenanceNow; // x0
  const MethodInfo *v7; // x1
  AccountLinkageTakeOverComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v9; // x2
  NetworkManager_ResultCallbackFunc_o *v10; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_4D29F68 & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent_OpenWebViewCallback__);
    sub_1C94098(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_1C94098(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (AccountLinkageTakeOverComponent_o *)sub_1C94098(&StringLiteral_22594/*"ok"*/);
    byte_4D29F68 = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( System_String__Equals_64453064(result, (System_String_o *)StringLiteral_22594/*"ok"*/, 0) )
  {
    this = (AccountLinkageTakeOverComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (AccountLinkageTakeOverComponent_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
      if ( this )
      {
        v5 = (PartialMaintenanceMaster_o *)this;
        isAniplexPlusAccountLinkageMaintenanceNow = PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
                                                      (PartialMaintenanceMaster_o *)this,
                                                      0);
        if ( isAniplexPlusAccountLinkageMaintenanceNow )
        {
          AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageTakeOverComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                               v5,
                                                                                               0);
          AccountLinkageTakeOverComponent__OnPartialMaintenance(
            AniplexPlusAccountLinkageMaintenanceMessage,
            (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
            v9);
          return;
        }
        if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
        {
          AccountLinkageTakeOverComponent__OnSiteMaintenance(
            (AccountLinkageTakeOverComponent_o *)isAniplexPlusAccountLinkageMaintenanceNow,
            v7);
          return;
        }
        AccountLinkageParams__ResetParams(0);
        AccountLinkageParams__GetCodeChallenge(0);
        v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v10,
          v4,
          Method_AccountLinkageTakeOverComponent_OpenWebViewCallback__,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (AccountLinkageTakeOverComponent_o *)NetworkManager__getRequest_object_(
                                                      v10,
                                                      (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
        if ( this )
        {
          RequestBase__beginRequest((RequestBase_o *)this, 0);
          return;
        }
      }
    }
LABEL_16:
    sub_1C942F0(this, result);
  }
}


void AccountLinkageTakeOverComponent__OpenWebViewCallback(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_String_o *AuthURL; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *basicUserName; // x21
  System_String_o *basicPassword; // x22
  System_Action_o *v9; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4D29F69 & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent_CloseWebViewCallback__);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&WebViewManager_TypeInfo);
    sub_1C94098(&StringLiteral_22594/*"ok"*/);
    this = (AccountLinkageTakeOverComponent_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29F69 = 1;
  }
  if ( !result )
    sub_1C942F0(this, result);
  if ( System_String__Equals_64453064(result, (System_String_o *)StringLiteral_22594/*"ok"*/, 0) )
  {
    AuthURL = AccountLinkageParams__GetAuthURL(1, 0);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v9, v4, Method_AccountLinkageTakeOverComponent_CloseWebViewCallback__, 0);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    if ( basicUserName == 0 || basicPassword == 0 )
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v9, 0);
    else
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v9,
        0);
  }
}


void AccountLinkageTakeOverComponent__ReConfirmAccountLinkage(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x29
  System_String_o *v4; // x22
  Il2CppObject *v5; // x19
  Il2CppObject *NumberFormat_42032932; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x21
  bool SelfUserGame; // w19
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x19
  Il2CppObject *v14; // x25
  System_String_o *name; // x0
  System_String_o *v16; // x22
  System_String_o *v17; // x23
  System_String_o *v18; // x24
  System_String_o *v19; // x19
  Il2CppObject *Instance; // x25
  TakeOverDialog_ClickDelegate_o *v21; // x26
  Il2CppObject *v22; // x29
  System_String_o *v23; // x24
  System_String_o *buttonDecide; // x21
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x19
  System_String_o *v27; // x26
  System_String_o *v28; // x27
  System_String_o *v29; // x28
  System_String_o *v30; // x22
  Il2CppObject *v31; // x19
  AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *v32; // x25
  System_String_o *buttonCancel; // [xsp+18h] [xbp-78h]
  int32_t requestedAccountLevel; // [xsp+24h] [xbp-6Ch] BYREF
  UserGameEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4D29F70 & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_0__);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_1__);
    sub_1C94098(&TakeOverDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_13386/*"TAKEOVER_OVERRIDE_WARNING"*/);
    sub_1C94098(&StringLiteral_14902/*"USER_DATA_INFO"*/);
    sub_1C94098(&StringLiteral_5795/*"EXIST_ACCOUNT_DATA"*/);
    sub_1C94098(&StringLiteral_11107/*"RECONFIRM_CONTINUE_OVERRIDE"*/);
    sub_1C94098(&StringLiteral_1880/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_1878/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_1884/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/);
    sub_1C94098(&StringLiteral_1882/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE_NO_DATA"*/);
    sub_1C94098(&StringLiteral_1888/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/);
    sub_1C94098(&StringLiteral_11106/*"RECONFIRM_CONTINUE"*/);
    sub_1C94098(&StringLiteral_14919/*"USER_NAME_NOT_SET"*/);
    sub_1C94098(&StringLiteral_1889/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/);
    byte_4D29F70 = 1;
  }
  entity = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_1878/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_14902/*"USER_DATA_INFO"*/, 0);
  v5 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(
                         AccountLinkageParams_TypeInfo->static_fields->requestedAccountName,
                         0);
  NumberFormat_42032932 = (Il2CppObject *)LocalizationManager__GetNumberFormat_42032932(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestedAccountLevel);
  v8 = System_String__Format_64459120(v4, NumberFormat_42032932, v5, v7, 0);
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !SelfUserGame )
  {
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11106/*"RECONFIRM_CONTINUE"*/, 0);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_1880/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/, 0);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_1882/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE_NO_DATA"*/, 0);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_1889/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (TakeOverDialog_ClickDelegate_o *)sub_1C942E4(TakeOverDialog_ClickDelegate_TypeInfo);
    TakeOverDialog_ClickDelegate___ctor(
      v21,
      (Il2CppObject *)this,
      Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_1__,
      0);
    if ( Instance )
    {
      CommonUI__OpenTakeOverDialog((CommonUI_o *)Instance, v21, v16, v8, v18, v19, v3, v17, 0);
      return;
    }
LABEL_23:
    sub_1C942F0(v11, v12);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11107/*"RECONFIRM_CONTINUE_OVERRIDE"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1884/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, 0);
  if ( !entity )
    goto LABEL_23;
  v13 = v11;
  v11 = LocalizationManager__GetNumberFormat_42032932(entity->fields.friendCode, 0);
  if ( !entity )
    goto LABEL_23;
  v14 = (Il2CppObject *)v11;
  buttonCancel = v3;
  if ( entity->fields.genderType == 3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    name = LocalizationManager__Get((System_String_o *)StringLiteral_14919/*"USER_NAME_NOT_SET"*/, 0);
  }
  else
  {
    name = entity->fields.name;
  }
  v11 = AccountLinkageParams__AddColorCodeBracket(name, 0);
  if ( !entity )
    goto LABEL_23;
  v22 = (Il2CppObject *)v11;
  v23 = v8;
  buttonDecide = v13;
  v25 = (Il2CppObject *)this;
  v26 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5795/*"EXIST_ACCOUNT_DATA"*/, 0);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_13386/*"TAKEOVER_OVERRIDE_WARNING"*/, 0);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_1888/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/, 0);
  v30 = System_String__Format_64459120(v4, v14, v22, v26, 0);
  v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = (AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *)sub_1C942E4(AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo);
  AccountLinkageOverrideTakeOverDialog_ClickDelegate___ctor(
    v32,
    v25,
    Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_0__,
    0);
  if ( !v31 )
    goto LABEL_23;
  CommonUI__OpenAccountLinkageOverrideTakeOverDialog(
    (CommonUI_o *)v31,
    v32,
    v10,
    v27,
    v30,
    v23,
    v28,
    v29,
    buttonCancel,
    buttonDecide,
    0);
}


void AccountLinkageTakeOverComponent__SendIssueTokenRequest(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4D29F6B & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    sub_1C94098(&Method_AccountLinkageTakeOverComponent_IssueTokenCallback__);
    sub_1C94098(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D29F6B = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_IssueTokenCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  if ( !Request_object )
    sub_1C942F0(0, v5);
  AccountLinkageIssueTokenRequest__beginRequest(
    (AccountLinkageIssueTokenRequest_o *)Request_object,
    AccountLinkageParams_TypeInfo->static_fields->authorizationCode,
    AccountLinkageParams_TypeInfo->static_fields->codeVerifier,
    0);
}


void AccountLinkageTakeOverComponent__SetupTitleImg(AccountLinkageTakeOverComponent_o *this, const MethodInfo *method)
{
  UISprite_o *titleImg; // x0
  __int64 *v4; // x8

  if ( (byte_4D29F74 & 1) == 0 )
  {
    sub_1C94098(&SelectTakeOverTypeComponent_TypeInfo);
    sub_1C94098(&StringLiteral_20790/*"img_txt_a_online_acount"*/);
    sub_1C94098(&StringLiteral_20791/*"img_txt_a_online_acount_overwrite"*/);
    byte_4D29F74 = 1;
  }
  titleImg = this->fields.titleImg;
  if ( !titleImg
    || (!SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride
      ? (v4 = &StringLiteral_20790/*"img_txt_a_online_acount"*/)
      : (v4 = &StringLiteral_20791/*"img_txt_a_online_acount_overwrite"*/),
        UISprite__set_spriteName(titleImg, (System_String_o *)*v4, 0),
        (titleImg = this->fields.titleImg) == 0) )
  {
    sub_1C942F0(titleImg, method);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))titleImg->klass->vtable._33_MakePixelPerfect.methodPtr)(
    titleImg,
    titleImg->klass->vtable._33_MakePixelPerfect.method);
}


void AccountLinkageTakeOverComponent__StartAccountLinkageTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D29F66 & 1) == 0 )
  {
    sub_1C94098(&Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__);
    byte_4D29F66 = 1;
  }
  v3 = Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__;
  if ( (*((_BYTE *)Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  AccountLinkageTakeOverComponent__CheckMaintenanceInfo(this, v5);
}


void AccountLinkageTakeOverComponent__UserDataStatusCheck(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UILabel_o *detailLabel; // x21
  System_String_o *Instance; // x0
  __int64 v7; // x1
  UILabel_o *contentLabel; // x21
  PartialMaintenanceMaster_o *v9; // x20
  AccountLinkageTakeOverComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v11; // x2
  System_String_o *friendCode; // x20
  Il2CppObject *v13; // x20
  System_String_o *name; // x0
  UILabel_o *takeOverButtonLabel; // x20
  __int64 *v16; // x8
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x22
  System_String_o *v19; // x0
  UILabel_o *userDataStatusInfoLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x1
  UserGameEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D29F65 & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageComponent_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_1896/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON_NO_USER_DATA"*/);
    sub_1C94098(&StringLiteral_22594/*"ok"*/);
    sub_1C94098(&StringLiteral_14902/*"USER_DATA_INFO"*/);
    sub_1C94098(&StringLiteral_1895/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON"*/);
    sub_1C94098(&StringLiteral_9361/*"NO_USER_DATA"*/);
    sub_1C94098(&StringLiteral_1898/*"ACCOUNT_LINKAGE_TAKEOVER_DETAIL_MESSAGE"*/);
    sub_1C94098(&StringLiteral_1890/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/);
    sub_1C94098(&StringLiteral_14919/*"USER_NAME_NOT_SET"*/);
    sub_1C94098(&StringLiteral_11566/*"SELECT_ACCOUNT_LINKAGE_TAKEOVER"*/);
    byte_4D29F65 = 1;
  }
  entity = 0;
  detailLabel = this->fields.detailLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1898/*"ACCOUNT_LINKAGE_TAKEOVER_DETAIL_MESSAGE"*/, 0);
  if ( !detailLabel )
    goto LABEL_39;
  UILabel__set_text(detailLabel, Instance, 0);
  contentLabel = this->fields.contentLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1890/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/, 0);
  if ( !contentLabel )
    goto LABEL_39;
  UILabel__set_text(contentLabel, Instance, 0);
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22594/*"ok"*/, 0) )
    return;
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
  if ( !Instance )
    goto LABEL_39;
  v9 = (PartialMaintenanceMaster_o *)Instance;
  if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow((PartialMaintenanceMaster_o *)Instance, 0) )
  {
    AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageTakeOverComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                         v9,
                                                                                         0);
    AccountLinkageTakeOverComponent__OnPartialMaintenance(
      AniplexPlusAccountLinkageMaintenanceMessage,
      (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
      v11);
    return;
  }
  Instance = (System_String_o *)UserGameMaster__TryGetSelfUserGame(&entity, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      friendCode = entity->fields.friendCode;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__GetNumberFormat_42032932(friendCode, 0);
      if ( entity )
      {
        v13 = (Il2CppObject *)Instance;
        if ( entity->fields.genderType == 3 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          name = LocalizationManager__Get((System_String_o *)StringLiteral_14919/*"USER_NAME_NOT_SET"*/, 0);
        }
        else
        {
          name = entity->fields.name;
        }
        Instance = AccountLinkageParams__AddColorCodeBracket(name, 0);
        if ( entity )
        {
          v17 = (Il2CppObject *)Instance;
          v18 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_14902/*"USER_DATA_INFO"*/, 0);
          Instance = System_String__Format_64459120(v19, v13, v17, v18, 0);
          if ( this->fields.userDataStatusInfoLabel )
          {
            UILabel__set_text(this->fields.userDataStatusInfoLabel, Instance, 0);
            takeOverButtonLabel = this->fields.takeOverButtonLabel;
            v16 = &StringLiteral_1895/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON"*/;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_39:
    sub_1C942F0(Instance, v7);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_9361/*"NO_USER_DATA"*/, 0);
  if ( !this->fields.userDataStatusInfoLabel )
    goto LABEL_39;
  UILabel__set_text(this->fields.userDataStatusInfoLabel, Instance, 0);
  takeOverButtonLabel = this->fields.takeOverButtonLabel;
  v16 = &StringLiteral_1896/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON_NO_USER_DATA"*/;
LABEL_31:
  Instance = LocalizationManager__Get((System_String_o *)*v16, 0);
  if ( !takeOverButtonLabel )
    goto LABEL_39;
  UILabel__set_text(takeOverButtonLabel, Instance, 0);
  userDataStatusInfoLabel = this->fields.userDataStatusInfoLabel;
  Instance = (System_String_o *)AccountLinkageComponent_TypeInfo;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
  if ( !userDataStatusInfoLabel )
    goto LABEL_39;
  UILabel__set_spacingY(
    userDataStatusInfoLabel,
    AccountLinkageComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_DATA_SPACING_Y,
    0);
  Instance = (System_String_o *)this->fields.userDataStatusInfoLabel;
  if ( !Instance )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)AccountLinkageComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_DATA_TRANSFORM_Y,
    0);
  AccountLinkageTakeOverComponent__SetupTitleImg(this, v22);
  Instance = (System_String_o *)this->fields.titleFsm;
  if ( !Instance )
    goto LABEL_39;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11566/*"SELECT_ACCOUNT_LINKAGE_TAKEOVER"*/, 0);
}


void AccountLinkageTakeOverComponent___AccountLinkageUpdateUserData_b__21_0(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D29F78 & 1) == 0 )
  {
    sub_1C94098(&Method_AccountLinkageTakeOverComponent_OnCloseTakeOverDecide__);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29F78 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_AccountLinkageTakeOverComponent_OnCloseTakeOverDecide__, 0);
  if ( !Instance )
    sub_1C942F0(v5, v6);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, 0);
}


void AccountLinkageTakeOverComponent___ReConfirmAccountLinkage_b__20_0(
        AccountLinkageTakeOverComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4D29F76 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29F76 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  CommonUI__CloseAccountLinkageOverrideTakeOverDialog((CommonUI_o *)Instance, 0, 0);
  if ( isDecide )
    AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(this, v7);
}


void AccountLinkageTakeOverComponent___ReConfirmAccountLinkage_b__20_1(
        AccountLinkageTakeOverComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4D29F77 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29F77 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  CommonUI__CloseTakeOverDialog((CommonUI_o *)Instance, 0, 0);
  if ( isDecide )
    AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(this, v7);
}


void AccountLinkageTakeOverComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D29F79 & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageTakeOverComponent___c_TypeInfo);
    byte_4D29F79 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(AccountLinkageTakeOverComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AccountLinkageTakeOverComponent___c_TypeInfo->static_fields->__9 = (struct AccountLinkageTakeOverComponent___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)AccountLinkageTakeOverComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AccountLinkageTakeOverComponent___c___ctor(AccountLinkageTakeOverComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AccountLinkageTakeOverComponent___c___CloseWebViewCallback_b__14_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D29F7A & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29F7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}


void AccountLinkageTakeOverComponent___c___NoticeCannotTakeOver_b__19_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D29F7B & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29F7B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}


void AccountLinkageTakeOverComponent___c___OnCloseTakeOverDecide_b__25_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D29F7E & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4D29F7E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void AccountLinkageTakeOverComponent___c___OnPartialMaintenance_b__23_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D29F7D & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29F7D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}


void AccountLinkageTakeOverComponent___c___OnSiteMaintenance_b__22_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D29F7C & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29F7C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}