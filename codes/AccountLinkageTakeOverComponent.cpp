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
  if ( (byte_596DE8D & 1) == 0 )
  {
    this = (AccountLinkageTakeOverComponent_o *)sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596DE8D = 1;
  }
  if ( !result )
    sub_2213CDC(this, result);
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23515/*"ok"*/, 0) )
    AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData(v4, v5);
  else
    AccountLinkageParams__ResetParams(0);
}


void AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  System_String_o *v7; // x22
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *newAuthKey; // x20
  System_String_o *newSecretKey; // x21
  __int64 v11; // x2
  Il2CppClass *klass; // x20
  __int64 v13; // x2
  NetworkManager_o *v14; // x20
  System_String_o *monitor; // x21
  int32_t monitor_high; // w22
  System_DateTime_o v17; // x0
  int32_t Month; // w23
  System_DateTime_o v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  TermsOfUseMenu_c *v38; // x0
  System_Action_o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  bool v46; // w19
  __int64 v47; // x1
  __int64 v48; // x2
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596DE90 & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageParams_TypeInfo);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_g__OpenTakeOverNotificationDialog_21_0__);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&CommonUI_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserGameMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TermsOfUseMenu_TypeInfo);
    sub_2213A60(&UserCommandCodeCollectionManager_TypeInfo);
    sub_2213A60(&UserCommandCodeNewManager_TypeInfo);
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    sub_2213A60(&UserServantCollectionManager_TypeInfo);
    sub_2213A60(&UserServantNewManager_TypeInfo);
    sub_2213A60(&WarBoardData_TypeInfo);
    byte_596DE90 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  dateData = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( !Master_object )
    goto LABEL_54;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          Master_object,
          &entity,
          (const MethodInfo_3F132BC *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__) )
    goto LABEL_53;
  v7 = System_Int64__ToString((int64_t)&AccountLinkageParams_TypeInfo->static_fields->newUserId, 0);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  newAuthKey = static_fields->newAuthKey;
  newSecretKey = static_fields->newSecretKey;
  UserSaveData__DeleteAndInitContinueData(1, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_54;
  NetworkManager__SetAuth((NetworkManager_o *)Master_object, v7, newAuthKey, newSecretKey, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_54;
  NetworkManager__WriteAuth((NetworkManager_o *)Master_object, 0);
  if ( !entity )
    goto LABEL_54;
  klass = entity[2].klass;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v11);
  dateData = NetworkManager__getDateTime_48347260((int64_t)klass, 0).fields._dateData;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_54;
  v14 = (NetworkManager_o *)Master_object;
  monitor = (System_String_o *)entity[1].monitor;
  monitor_high = HIDWORD(entity[4].monitor);
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v6, v13);
  v17.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v17, 0);
  v19.fields._dateData = (uint64_t)&dateData;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_DateTime__get_Day(v19, 0);
  if ( !v14 )
    goto LABEL_54;
  NetworkManager__SetSignup_48337384(v14, monitor, monitor_high, Month, (int32_t)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_54;
  NetworkManager__WriteSignup((NetworkManager_o *)Master_object, 0);
  if ( !*(&UserServantNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v20, v21);
  UserServantNewManager__CreateContinueDeviceSaveData(0);
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v22, v23);
  UserServantCollectionManager__CreateContinueDeviceSaveData(0);
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v24, v25);
  ServantCommentManager__CreateContinueDeviceSaveData(0);
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v26, v27);
  UserEquipNewManager__CreateContinueDeviceSaveData(0);
  if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v28, v29);
  OtherUserNewManager__CreateContinueDeviceSaveData(0);
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v30, v31);
  UserCommandCodeNewManager__CreateContinueDeviceSaveData(0);
  if ( !*(&UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v32, v33);
  UserCommandCodeCollectionManager__CreateContinueDeviceSaveData(0);
  SoundPlayerComponent__CreateContinueDeviceSaveData(0);
  if ( !*(&WarBoardData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v34, v35);
  WarBoardData__CreateContinueDeviceSaveData(0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_54;
  if ( !Master_object )
    goto LABEL_54;
  NetworkManager__SetFriendCode((NetworkManager_o *)Master_object, (System_String_o *)entity[7].klass, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_54;
  NetworkManager__WriteFriendCode((NetworkManager_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.friendCodeComponent;
  if ( !Master_object )
    goto LABEL_54;
  FriendCodeComponent__UpdateFriendCode((FriendCodeComponent_o *)Master_object, 0);
  v38 = TermsOfUseMenu_TypeInfo;
  if ( !*(&TermsOfUseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo, v36, v37);
  TermsOfUseMenu__Save((const MethodInfo *)v38);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !entity
    || !Master_object
    || (AdManager__SetUserId((AdManager_o *)Master_object, (int64_t)entity[1].klass, 0),
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__),
        !entity)
    || !Master_object
    || (AdManager__SetFriendCode((AdManager_o *)Master_object, (System_String_o *)entity[7].klass, 0),
        ListViewSort__FirstLoginSave(0),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
LABEL_54:
    sub_2213CDC(Master_object, v6);
  }
  AtlasManager__ReleaseUISkinDialog((AtlasManager_o *)Master_object, 0);
  v39 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_g__OpenTakeOverNotificationDialog_21_0__,
    0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v40, v41);
  AtlasManager__LoadUISkin(v39, 0, 1, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v42, v43);
  v46 = CondType__IsOpenedSaveDeleteButton(0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44, v45);
  TerminalPramsManager__SaveUserSaveDataDeleteButtonNonRelease(!v46, 0);
  if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v47, v48);
  CommonUI__DeleteMovieSaveKey(0);
  CommonUI__DeleteTutorialSaveKey(0);
  CommonUI__DeleteFortuneBonusSaveKey(0);
LABEL_53:
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
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_596DE86 & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageTakeOverComponent_OpenLoginWebview__);
    sub_2213A60(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596DE86 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_OpenLoginWebview__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v7);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0);
}


void AccountLinkageTakeOverComponent__CloseWebViewCallback(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  AccountLinkageTakeOverComponent___c_c *v10; // x8
  CommonUI_o *v11; // x20
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__14_0; // x21
  Il2CppObject *v14; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Nullable_float__o v22; // x0
  System_Nullable_int__o v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  System_Nullable_float__o v26; // x3
  System_Nullable_int__o v27; // x4
  System_Nullable_int__o v28; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596DE89 & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageParams_TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent___c__CloseWebViewCallback_b__14_0__);
    sub_2213A60(&AccountLinkageTakeOverComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_1986/*"ACCOUNT_LINKAGE_TAKEOVER_ERROR_MESSAGE"*/);
    byte_596DE89 = 1;
  }
  if ( System_String__IsNullOrEmpty(AccountLinkageParams_TypeInfo->static_fields->authorizationCode, 0) )
  {
    AccountLinkageParams__ResetParams(0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1986/*"ACCOUNT_LINKAGE_TAKEOVER_ERROR_MESSAGE"*/, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
    v11 = (CommonUI_o *)Instance;
    if ( !*(&AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo, v8, v9);
      v10 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__14_0 = static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v8, v9);
        static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__14_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__14_0, v14, Method_AccountLinkageTakeOverComponent___c__CloseWebViewCallback_b__14_0__, 0);
      v15 = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
      v15->__9__14_0 = _9__14_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__14_0, (int32_t)_9__14_0, v16, v17, v18, v19, v20, v21);
    }
    v22 = (System_Nullable_float__o)&v29;
    v29 = 0;
    System_Nullable_float____ctor(v22, 35.0, (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    v23 = (System_Nullable_int__o)&v28;
    v28 = 0;
    System_Nullable_int____ctor(v23, 30, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    if ( !v11 )
      sub_2213CDC(v24, v25);
    v27 = v28;
    v26 = v29;
    CommonUI__OpenAccountLinkageNotificationDialog(v11, v6, _9__14_0, v26, v27, 2, 0);
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
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_596DE8C & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageParams_TypeInfo);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent_AccountLinkageTakeOverCallback__);
    sub_2213A60(&Method_NetworkManager_getRequest_AccountLinkageContinueUserRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596DE8C = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_AccountLinkageTakeOverCallback__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_AccountLinkageContinueUserRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v7);
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
  if ( (byte_596DE8B & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageParams_TypeInfo);
    this = (AccountLinkageTakeOverComponent_o *)sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596DE8B = 1;
  }
  if ( !result )
    sub_2213CDC(this, result);
  v5 = System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23515/*"ok"*/, 0);
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
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_596DE83 & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageTakeOverComponent_UserDataStatusCheck__);
    sub_2213A60(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596DE83 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_UserDataStatusCheck__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v7);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0);
}


void AccountLinkageTakeOverComponent__NoticeCannotTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AccountLinkageTakeOverComponent___c_c *v7; // x8
  CommonUI_o *v8; // x20
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__19_0; // x21
  Il2CppObject *v11; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Nullable_float__o v19; // x3
  System_Nullable_int__o v20; // x4

  if ( (byte_596DE8E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent___c__NoticeCannotTakeOver_b__19_0__);
    sub_2213A60(&AccountLinkageTakeOverComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_1947/*"ACCOUNT_LINKAGE_CANNOT_CONTINUE"*/);
    byte_596DE8E = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_1947/*"ACCOUNT_LINKAGE_CANNOT_CONTINUE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo, v5, v6);
    v7 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__19_0 = static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__19_0, v11, Method_AccountLinkageTakeOverComponent___c__NoticeCannotTakeOver_b__19_0__, 0);
    v12 = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    v12->__9__19_0 = _9__19_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__19_0, (int32_t)_9__19_0, v13, v14, v15, v16, v17, v18);
  }
  if ( !v8 )
    sub_2213CDC(Instance, v5);
  v19 = 0;
  v20 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog(v8, v3, _9__19_0, v19, v20, 0, 0);
  AccountLinkageParams__ResetParams(0);
}


void AccountLinkageTakeOverComponent__OnCloseTakeOverDecide(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x19
  AccountLinkageTakeOverComponent___c_c *v7; // x0
  float DEFAULT_FADE_TIME; // s8
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__25_0; // x20
  Il2CppObject *v11; // x21
  struct AccountLinkageTakeOverComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596DE94 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent___c__OnCloseTakeOverDecide_b__25_0__);
    sub_2213A60(&AccountLinkageTakeOverComponent___c_TypeInfo);
    byte_596DE94 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v3, v4);
    v5 = AvalonSceneManager_TypeInfo;
  }
  v7 = AccountLinkageTakeOverComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !*(&AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo, v3, v4);
    v7 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v3, v4);
      static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v11, Method_AccountLinkageTakeOverComponent___c__OnCloseTakeOverDecide_b__25_0__, 0);
    v12 = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    v12->__9__25_0 = _9__25_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__25_0, (int32_t)_9__25_0, v13, v14, v15, v16, v17, v18);
  }
  if ( !v6 )
    sub_2213CDC(v7, v3);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__25_0, 0);
}


void AccountLinkageTakeOverComponent__OnPartialMaintenance(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *mainteMessage,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AccountLinkageTakeOverComponent___c_c *v7; // x8
  CommonUI_o *v8; // x20
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__23_0; // x21
  Il2CppObject *v11; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Nullable_float__o v19; // x0
  System_Nullable_int__o v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Nullable_float__o v23; // x3
  System_Nullable_int__o v24; // x4
  System_Nullable_int__o v25; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596DE92 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent___c__OnPartialMaintenance_b__23_0__);
    sub_2213A60(&AccountLinkageTakeOverComponent___c_TypeInfo);
    byte_596DE92 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo, v5, v6);
    v7 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__23_0 = static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__23_0, v11, Method_AccountLinkageTakeOverComponent___c__OnPartialMaintenance_b__23_0__, 0);
    v12 = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    v12->__9__23_0 = _9__23_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__23_0, (int32_t)_9__23_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Nullable_float__o)&v26;
  v26 = 0;
  System_Nullable_float____ctor(v19, 36.0, (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  v20 = (System_Nullable_int__o)&v25;
  v25 = 0;
  System_Nullable_int____ctor(v20, 26, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  if ( !v8 )
    sub_2213CDC(v21, v22);
  v24 = v25;
  v23 = v26;
  CommonUI__OpenAccountLinkageNotificationDialog(v8, mainteMessage, _9__23_0, v23, v24, 0, 0);
}


void AccountLinkageTakeOverComponent__OnSiteMaintenance(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v3; // w8
  System_String_o *v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  AccountLinkageTakeOverComponent___c_c *v8; // x8
  CommonUI_o *v9; // x20
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__22_0; // x21
  Il2CppObject *v12; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Nullable_int__o p_msgFontSize; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Nullable_int__o v23; // x4
  System_Nullable_float__o v24; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596DE91 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent___c__OnSiteMaintenance_b__22_0__);
    sub_2213A60(&AccountLinkageTakeOverComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_1959/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/);
    byte_596DE91 = 1;
  }
  v3 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  msgFontSize = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1959/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !*(&AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo, v6, v7);
    v8 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__22_0 = static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__22_0, v12, Method_AccountLinkageTakeOverComponent___c__OnSiteMaintenance_b__22_0__, 0);
    v13 = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    v13->__9__22_0 = _9__22_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__22_0, (int32_t)_9__22_0, v14, v15, v16, v17, v18, v19);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  if ( !v9 )
    sub_2213CDC(v21, v22);
  v23 = msgFontSize;
  v24 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog(v9, v4, _9__22_0, v24, v23, 0, 0);
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
  __int64 v11; // x1
  __int64 v12; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_596DE87 & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageParams_TypeInfo);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent_OpenWebViewCallback__);
    sub_2213A60(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_2213A60(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (AccountLinkageTakeOverComponent_o *)sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596DE87 = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23515/*"ok"*/, 0) )
  {
    this = (AccountLinkageTakeOverComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (AccountLinkageTakeOverComponent_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
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
        v10 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v10,
          v4,
          Method_AccountLinkageTakeOverComponent_OpenWebViewCallback__,
          0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
        this = (AccountLinkageTakeOverComponent_o *)NetworkManager__getRequest_object_(
                                                      v10,
                                                      (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
        if ( this )
        {
          RequestBase__beginRequest((RequestBase_o *)this, 0);
          return;
        }
      }
    }
LABEL_16:
    sub_2213CDC(this, result);
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
  System_String_o *basicPassword; // x22
  System_String_o *basicUserName; // x23
  System_Action_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  int v12; // w8

  v4 = (Il2CppObject *)this;
  if ( (byte_596DE88 & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageParams_TypeInfo);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent_CloseWebViewCallback__);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&WebViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    this = (AccountLinkageTakeOverComponent_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DE88 = 1;
  }
  if ( !result )
    sub_2213CDC(this, result);
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23515/*"ok"*/, 0) )
  {
    AuthURL = AccountLinkageParams__GetAuthURL(1, 0);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v9, v4, Method_AccountLinkageTakeOverComponent_CloseWebViewCallback__, 0);
    v12 = *(&WebViewManager_TypeInfo->_2.cctor_finished + 1);
    if ( basicUserName && basicPassword )
    {
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v10, v11);
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v9,
        0);
    }
    else
    {
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v10, v11);
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v9, 0);
    }
  }
}


void AccountLinkageTakeOverComponent__ReConfirmAccountLinkage(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  System_String_o *v5; // x20
  System_String_o *v6; // x22
  Il2CppObject *v7; // x19
  Il2CppObject *NumberFormat_48247712; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  bool SelfUserGame; // w8
  int v14; // w9
  System_String_o *v15; // x24
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x19
  __int64 v19; // x2
  Il2CppObject *v20; // x25
  System_String_o *name; // x0
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  System_String_o *v24; // x24
  System_String_o *v25; // x19
  Il2CppObject *Instance; // x25
  TakeOverDialog_ClickDelegate_o *v27; // x26
  Il2CppObject *v28; // x29
  System_String_o *buttonDecide; // x21
  Il2CppObject *v30; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *v33; // x19
  System_String_o *v34; // x26
  System_String_o *v35; // x27
  System_String_o *v36; // x28
  System_String_o *v37; // x22
  Il2CppObject *v38; // x19
  AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *v39; // x25
  System_String_o *takeOverAccountData; // [xsp+18h] [xbp-78h]
  int32_t requestedAccountLevel; // [xsp+24h] [xbp-6Ch] BYREF
  UserGameEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_596DE8F & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageParams_TypeInfo);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_0__);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_1__);
    sub_2213A60(&TakeOverDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_13887/*"TAKEOVER_OVERRIDE_WARNING"*/);
    sub_2213A60(&StringLiteral_15441/*"USER_DATA_INFO"*/);
    sub_2213A60(&StringLiteral_6022/*"EXIST_ACCOUNT_DATA"*/);
    sub_2213A60(&StringLiteral_11547/*"RECONFIRM_CONTINUE_OVERRIDE"*/);
    sub_2213A60(&StringLiteral_1967/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_1965/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_1971/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/);
    sub_2213A60(&StringLiteral_1969/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE_NO_DATA"*/);
    sub_2213A60(&StringLiteral_1975/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/);
    sub_2213A60(&StringLiteral_11546/*"RECONFIRM_CONTINUE"*/);
    sub_2213A60(&StringLiteral_15458/*"USER_NAME_NOT_SET"*/);
    sub_2213A60(&StringLiteral_1976/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/);
    byte_596DE8F = 1;
  }
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1965/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15441/*"USER_DATA_INFO"*/, 0);
  v7 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(
                         AccountLinkageParams_TypeInfo->static_fields->requestedAccountName,
                         0);
  NumberFormat_48247712 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48247712(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &requestedAccountLevel);
  v10 = System_String__Format_75697948(v6, NumberFormat_48247712, v7, v9, 0);
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0);
  v14 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !SelfUserGame )
  {
    if ( !v14 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11546/*"RECONFIRM_CONTINUE"*/, 0);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_1967/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/, 0);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_1969/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE_NO_DATA"*/, 0);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_1976/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v27 = (TakeOverDialog_ClickDelegate_o *)sub_2213CCC(TakeOverDialog_ClickDelegate_TypeInfo);
    TakeOverDialog_ClickDelegate___ctor(
      v27,
      (Il2CppObject *)this,
      Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_1__,
      0);
    if ( Instance )
    {
      CommonUI__OpenTakeOverDialog((CommonUI_o *)Instance, v27, v22, v10, v24, v25, v5, v23, 0);
      return;
    }
LABEL_25:
    sub_2213CDC(v16, v17);
  }
  if ( !v14 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11547/*"RECONFIRM_CONTINUE_OVERRIDE"*/, 0);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_1971/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, 0);
  if ( !entity )
    goto LABEL_25;
  v18 = v16;
  v16 = LocalizationManager__GetNumberFormat_48247712(entity->fields.friendCode, 0);
  if ( !entity )
    goto LABEL_25;
  v20 = (Il2CppObject *)v16;
  if ( entity->fields.genderType == 3 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v19);
    name = LocalizationManager__Get((System_String_o *)StringLiteral_15458/*"USER_NAME_NOT_SET"*/, 0);
  }
  else
  {
    name = entity->fields.name;
  }
  takeOverAccountData = v10;
  v16 = AccountLinkageParams__AddColorCodeBracket(name, 0);
  if ( !entity )
    goto LABEL_25;
  v28 = (Il2CppObject *)v16;
  buttonDecide = v18;
  v30 = (Il2CppObject *)this;
  v33 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6022/*"EXIST_ACCOUNT_DATA"*/, 0);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13887/*"TAKEOVER_OVERRIDE_WARNING"*/, 0);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_1975/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/, 0);
  v37 = System_String__Format_75697948(v6, v20, v28, v33, 0);
  v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = (AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *)sub_2213CCC(AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo);
  AccountLinkageOverrideTakeOverDialog_ClickDelegate___ctor(
    v39,
    v30,
    Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_0__,
    0);
  if ( !v38 )
    goto LABEL_25;
  CommonUI__OpenAccountLinkageOverrideTakeOverDialog(
    (CommonUI_o *)v38,
    v39,
    v15,
    v34,
    v37,
    takeOverAccountData,
    v35,
    v36,
    v5,
    buttonDecide,
    0);
}


void AccountLinkageTakeOverComponent__SendIssueTokenRequest(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_596DE8A & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageParams_TypeInfo);
    sub_2213A60(&Method_AccountLinkageTakeOverComponent_IssueTokenCallback__);
    sub_2213A60(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596DE8A = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_IssueTokenCallback__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v7);
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

  if ( (byte_596DE93 & 1) == 0 )
  {
    sub_2213A60(&SelectTakeOverTypeComponent_TypeInfo);
    sub_2213A60(&StringLiteral_21607/*"img_txt_a_online_acount"*/);
    sub_2213A60(&StringLiteral_21608/*"img_txt_a_online_acount_overwrite"*/);
    byte_596DE93 = 1;
  }
  titleImg = this->fields.titleImg;
  if ( SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride )
  {
    if ( !titleImg )
      goto LABEL_10;
    v4 = &StringLiteral_21608/*"img_txt_a_online_acount_overwrite"*/;
  }
  else
  {
    if ( !titleImg )
      goto LABEL_10;
    v4 = &StringLiteral_21607/*"img_txt_a_online_acount"*/;
  }
  UISprite__set_spriteName(titleImg, (System_String_o *)*v4, 0);
  titleImg = this->fields.titleImg;
  if ( !titleImg )
LABEL_10:
    sub_2213CDC(titleImg, method);
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

  if ( (byte_596DE85 & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__);
    byte_596DE85 = 1;
  }
  v3 = Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__;
  if ( (*((_BYTE *)Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  AccountLinkageTakeOverComponent__CheckMaintenanceInfo(this, v5);
}


void AccountLinkageTakeOverComponent__UserDataStatusCheck(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int v5; // w8
  UILabel_o *detailLabel; // x21
  System_String_o *Instance; // x0
  __int64 v8; // x1
  UILabel_o *contentLabel; // x21
  PartialMaintenanceMaster_o *v10; // x20
  AccountLinkageTakeOverComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x2
  System_String_o *friendCode; // x20
  __int64 v15; // x2
  Il2CppObject *v16; // x20
  System_String_o *name; // x0
  __int64 *v18; // x8
  Il2CppObject *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *v22; // x22
  System_String_o *v23; // x0
  UILabel_o *takeOverButtonLabel; // x20
  __int64 v25; // x2
  UILabel_o *userDataStatusInfoLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v28; // x1
  UserGameEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596DE84 & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1983/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON_NO_USER_DATA"*/);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_15441/*"USER_DATA_INFO"*/);
    sub_2213A60(&StringLiteral_1982/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON"*/);
    sub_2213A60(&StringLiteral_9725/*"NO_USER_DATA"*/);
    sub_2213A60(&StringLiteral_1985/*"ACCOUNT_LINKAGE_TAKEOVER_DETAIL_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1977/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/);
    sub_2213A60(&StringLiteral_15458/*"USER_NAME_NOT_SET"*/);
    sub_2213A60(&StringLiteral_12027/*"SELECT_ACCOUNT_LINKAGE_TAKEOVER"*/);
    byte_596DE84 = 1;
  }
  v5 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  detailLabel = this->fields.detailLabel;
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, result, method);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1985/*"ACCOUNT_LINKAGE_TAKEOVER_DETAIL_MESSAGE"*/, 0);
  if ( !detailLabel )
    goto LABEL_39;
  UILabel__set_text(detailLabel, Instance, 0);
  contentLabel = this->fields.contentLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1977/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/, 0);
  if ( !contentLabel )
    goto LABEL_39;
  UILabel__set_text(contentLabel, Instance, 0);
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23515/*"ok"*/, 0) )
    return;
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
  if ( !Instance )
    goto LABEL_39;
  v10 = (PartialMaintenanceMaster_o *)Instance;
  if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow((PartialMaintenanceMaster_o *)Instance, 0) )
  {
    AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageTakeOverComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                         v10,
                                                                                         0);
    AccountLinkageTakeOverComponent__OnPartialMaintenance(
      AniplexPlusAccountLinkageMaintenanceMessage,
      (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
      v12);
    return;
  }
  Instance = (System_String_o *)UserGameMaster__TryGetSelfUserGame(&entity, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      friendCode = entity->fields.friendCode;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v13);
      Instance = LocalizationManager__GetNumberFormat_48247712(friendCode, 0);
      if ( entity )
      {
        v16 = (Il2CppObject *)Instance;
        if ( entity->fields.genderType == 3 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v15);
          name = LocalizationManager__Get((System_String_o *)StringLiteral_15458/*"USER_NAME_NOT_SET"*/, 0);
        }
        else
        {
          name = entity->fields.name;
        }
        Instance = AccountLinkageParams__AddColorCodeBracket(name, 0);
        if ( entity )
        {
          v19 = (Il2CppObject *)Instance;
          v22 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_15441/*"USER_DATA_INFO"*/, 0);
          Instance = System_String__Format_75697948(v23, v16, v19, v22, 0);
          if ( this->fields.userDataStatusInfoLabel )
          {
            UILabel__set_text(this->fields.userDataStatusInfoLabel, Instance, 0);
            v18 = &StringLiteral_1982/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON"*/;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_39:
    sub_2213CDC(Instance, v8);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v13);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_9725/*"NO_USER_DATA"*/, 0);
  if ( !this->fields.userDataStatusInfoLabel )
    goto LABEL_39;
  UILabel__set_text(this->fields.userDataStatusInfoLabel, Instance, 0);
  v18 = &StringLiteral_1983/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON_NO_USER_DATA"*/;
LABEL_31:
  takeOverButtonLabel = this->fields.takeOverButtonLabel;
  Instance = LocalizationManager__Get((System_String_o *)*v18, 0);
  if ( !takeOverButtonLabel )
    goto LABEL_39;
  UILabel__set_text(takeOverButtonLabel, Instance, 0);
  userDataStatusInfoLabel = this->fields.userDataStatusInfoLabel;
  Instance = (System_String_o *)AccountLinkageComponent_TypeInfo;
  if ( !*(&AccountLinkageComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v8, v25);
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
  AccountLinkageTakeOverComponent__SetupTitleImg(this, v28);
  Instance = (System_String_o *)this->fields.titleFsm;
  if ( !Instance )
    goto LABEL_39;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12027/*"SELECT_ACCOUNT_LINKAGE_TAKEOVER"*/, 0);
}


void AccountLinkageTakeOverComponent___AccountLinkageUpdateUserData_b__21_1(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596DE98 & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageTakeOverComponent_OnCloseTakeOverDecide__);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DE98 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_AccountLinkageTakeOverComponent_OnCloseTakeOverDecide__, 0);
  if ( !Instance )
    sub_2213CDC(v5, v6);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, 0);
}


void AccountLinkageTakeOverComponent___AccountLinkageUpdateUserData_g__OpenTakeOverNotificationDialog_21_0(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_Nullable_float__o v16; // x3
  System_Nullable_int__o v17; // x4

  if ( (byte_596DE97 & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_b__21_1__);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&PurchaseBehaviour_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3966/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1950/*"ACCOUNT_LINKAGE_CONTINUE_SUCCESS"*/);
    byte_596DE97 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1950/*"ACCOUNT_LINKAGE_CONTINUE_SUCCESS"*/, 0);
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v4, v5);
  if ( PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(0) )
  {
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v7, v8);
    PurchaseBehaviour__SetInitializedWithMismatchedObfuscatedAccountId(1, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3966/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/, 0);
    v6 = System_String__Concat_75651716(v6, v11, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_b__21_1__,
    0);
  if ( !Instance )
    sub_2213CDC(v14, v15);
  v16 = 0;
  v17 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v6, v13, v16, v17, 0, 0);
}


void AccountLinkageTakeOverComponent___ReConfirmAccountLinkage_b__20_0(
        AccountLinkageTakeOverComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_596DE95 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DE95 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
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

  if ( (byte_596DE96 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DE96 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseTakeOverDialog((CommonUI_o *)Instance, 0, 0);
  if ( isDecide )
    AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(this, v7);
}


void AccountLinkageTakeOverComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596DE99 & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageTakeOverComponent___c_TypeInfo);
    byte_596DE99 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AccountLinkageTakeOverComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AccountLinkageTakeOverComponent___c_TypeInfo->static_fields->__9 = (struct AccountLinkageTakeOverComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AccountLinkageTakeOverComponent___c_TypeInfo->static_fields,
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

  if ( (byte_596DE9A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DE9A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}


void AccountLinkageTakeOverComponent___c___NoticeCannotTakeOver_b__19_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DE9B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DE9B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}


void AccountLinkageTakeOverComponent___c___OnCloseTakeOverDecide_b__25_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DE9E & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_596DE9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void AccountLinkageTakeOverComponent___c___OnPartialMaintenance_b__23_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DE9D & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DE9D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}


void AccountLinkageTakeOverComponent___c___OnSiteMaintenance_b__22_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DE9C & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DE9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}