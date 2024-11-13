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
  if ( (byte_4B13B1D & 1) == 0 )
  {
    this = (AccountLinkageTakeOverComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, result, method);
    byte_4B13B1D = 1;
  }
  if ( !result )
    sub_1BCAA3C(this, result);
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
    AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData(v4, v5);
  else
    AccountLinkageParams__ResetParams(0LL);
}


void __fastcall AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
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
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v57; // x1
  System_String_o *v58; // x22
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *newAuthKey; // x20
  System_String_o *newSecretKey; // x21
  Il2CppClass *klass; // x20
  NetworkManager_o *v63; // x20
  System_String_o *monitor; // x21
  int32_t monitor_high; // w22
  int32_t Month; // w23
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
  System_String_o *v78; // x20
  __int64 v79; // x1
  __int64 v80; // x1
  System_String_o *v81; // x0
  System_String_o *v82; // x20
  Il2CppObject *Instance; // x21
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  System_Action_o *v87; // x22
  __int64 v88; // x1
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v91; // 0:x0.8
  System_DateTime_o v92; // 0:x0.8
  System_Nullable_float__o v93; // 0:x3.8
  System_Nullable_int__o v94; // 0:x4.8

  if ( (byte_4B13B20 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_b__21_0__, v4, v5);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&CommonUI_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserGameMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__, v14, v15);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v16, v17);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v24, v25);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&TermsOfUseMenu_TypeInfo, v36, v37);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v38, v39);
    sub_1BCA7E0(&UserCommandCodeNewManager_TypeInfo, v40, v41);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v42, v43);
    sub_1BCA7E0(&UserServantCollectionManager_TypeInfo, v44, v45);
    sub_1BCA7E0(&UserServantNewManager_TypeInfo, v46, v47);
    sub_1BCA7E0(&WarBoardData_TypeInfo, v48, v49);
    sub_1BCA7E0(&StringLiteral_3909/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_3912/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_1993/*"ACCOUNT_LINKAGE_CONTINUE_SUCCESS"*/, v54, v55);
    byte_4B13B20 = 1;
  }
  entity = 0LL;
  dateData = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( !Master_object )
    goto LABEL_64;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          Master_object,
          &entity,
          (const MethodInfo_31B30C8 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__) )
    goto LABEL_63;
  v58 = System_Int64__ToString((int64_t)&AccountLinkageParams_TypeInfo->static_fields->newUserId, 0LL);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  newAuthKey = static_fields->newAuthKey;
  newSecretKey = static_fields->newSecretKey;
  UserSaveData__DeleteAndInitContinueData(1, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__SetAuth((NetworkManager_o *)Master_object, v58, newAuthKey, newSecretKey, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__WriteAuth((NetworkManager_o *)Master_object, 0LL);
  if ( !entity )
    goto LABEL_64;
  klass = entity[2].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v57);
  dateData = NetworkManager__getDateTime_39270164((int64_t)klass, 0LL).fields._dateData;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_64;
  v63 = (NetworkManager_o *)Master_object;
  monitor = (System_String_o *)entity[1].monitor;
  monitor_high = HIDWORD(entity[4].monitor);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v57);
  v91.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v91, 0LL);
  v92.fields._dateData = (uint64_t)&dateData;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_DateTime__get_Day(v92, 0LL);
  if ( !v63 )
    goto LABEL_64;
  NetworkManager__SetSignup_39260136(v63, monitor, monitor_high, Month, (int32_t)Master_object, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__WriteSignup((NetworkManager_o *)Master_object, 0LL);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v67);
  UserServantNewManager__CreateContinueDeviceSaveData(0LL);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v68);
  UserServantCollectionManager__CreateContinueDeviceSaveData(0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v69);
  ServantCommentManager__CreateContinueDeviceSaveData(0LL);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v70);
  UserEquipNewManager__CreateContinueDeviceSaveData(0LL);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v71);
  OtherUserNewManager__CreateContinueDeviceSaveData(0LL);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v72);
  UserCommandCodeNewManager__CreateContinueDeviceSaveData(0LL);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v73);
  UserCommandCodeCollectionManager__CreateContinueDeviceSaveData(0LL);
  SoundPlayerComponent__CreateContinueDeviceSaveData(0LL);
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v74);
  WarBoardData__CreateContinueDeviceSaveData(0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_64;
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__SetFriendCode((NetworkManager_o *)Master_object, (System_String_o *)entity[6].monitor, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_64;
  NetworkManager__WriteFriendCode((NetworkManager_o *)Master_object, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.friendCodeComponent;
  if ( !Master_object )
    goto LABEL_64;
  FriendCodeComponent__UpdateFriendCode((FriendCodeComponent_o *)Master_object, 0LL);
  if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo, v75);
  TermsOfUseMenu__Save(0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !entity )
    goto LABEL_64;
  if ( !Master_object )
    goto LABEL_64;
  AdManager__SetUserId((AdManager_o *)Master_object, (int64_t)entity[1].klass, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !entity || !Master_object )
    goto LABEL_64;
  AdManager__SetFriendCode((AdManager_o *)Master_object, (System_String_o *)entity[6].monitor, 0LL);
  ListViewSort__FirstLoginSave(0LL);
  if ( !ServantCommentManager__GetUiFlag(0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_64;
    AtlasManager__ReleaseUISkinDialog((AtlasManager_o *)Master_object, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3909/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/,
                                                                  0LL);
  if ( !entity )
    goto LABEL_64;
  v78 = System_String__Format((System_String_o *)Master_object, (Il2CppObject *)entity[1].monitor, 0LL);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v77);
  if ( PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(0LL) )
  {
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v79);
    PurchaseBehaviour__SetInitializedWithMismatchedObfuscatedAccountId(1, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v80);
    v81 = LocalizationManager__Get((System_String_o *)StringLiteral_3912/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/, 0LL);
    System_String__Concat_62401220(v78, v81, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79);
  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_1993/*"ACCOUNT_LINKAGE_CONTINUE_SUCCESS"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v87 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v84, v85, v86);
  System_Action___ctor(
    v87,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_b__21_0__,
    0LL);
  if ( !Instance )
LABEL_64:
    sub_1BCAA3C(Master_object, v57);
  v93 = 0LL;
  v94 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v82, v87, v93, v94, 0, 0LL);
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v88);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1

  if ( (byte_4B13B16 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent_OpenLoginWebview__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B13B16 = 1;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_OpenLoginWebview__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v14);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__CloseWebViewCallback(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  System_String_o *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  Il2CppObject *Instance; // x20
  AccountLinkageTakeOverComponent___c_c *v27; // x8
  System_Action_o *_9__14_0; // x21
  Il2CppObject *v29; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x0
  __int64 v38; // x1
  System_Nullable_int__o v39; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_float__o v40; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o v41; // 0:x0.8
  System_Nullable_int__o v42; // 0:x0.8
  System_Nullable_float__o v43; // 0:x3.8
  System_Nullable_int__o v44; // 0:x4.8

  if ( (byte_4B13B19 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent___c__CloseWebViewCallback_b__14_0__, v14, v15);
    sub_1BCA7E0(&AccountLinkageTakeOverComponent___c_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_2029/*"ACCOUNT_LINKAGE_TAKEOVER_ERROR_MESSAGE"*/, v18, v19);
    byte_4B13B19 = 1;
  }
  if ( System_String__IsNullOrEmpty(AccountLinkageParams_TypeInfo->static_fields->authorizationCode, 0LL) )
  {
    AccountLinkageParams__ResetParams(0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2029/*"ACCOUNT_LINKAGE_TAKEOVER_ERROR_MESSAGE"*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v27 = AccountLinkageTakeOverComponent___c_TypeInfo;
    if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo, v23);
      v27 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    _9__14_0 = v27->static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27, v23);
        v27 = AccountLinkageTakeOverComponent___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__14_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
      System_Action___ctor(
        _9__14_0,
        v29,
        Method_AccountLinkageTakeOverComponent___c__CloseWebViewCallback_b__14_0__,
        0LL);
      static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = _9__14_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
        (int64_t)_9__14_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v41 = (System_Nullable_float__o)&v40;
    v40 = 0LL;
    System_Nullable_float____ctor(v41, 35.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
    v42 = (System_Nullable_int__o)&v39;
    v39 = 0LL;
    System_Nullable_int____ctor(v42, 30, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
    if ( !Instance )
      sub_1BCAA3C(v37, v38);
    v44 = v39;
    v43 = v40;
    CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v22, _9__14_0, v43, v44, 2, 0LL);
  }
  else
  {
    AccountLinkageTakeOverComponent__SendIssueTokenRequest(this, v20);
  }
}


void __fastcall AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1

  if ( (byte_4B13B1C & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent_AccountLinkageTakeOverCallback__, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageContinueUserRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B13B1C = 1;
  }
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_AccountLinkageTakeOverCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Request_object = NetworkManager__getRequest_object_(
                     v13,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageContinueUserRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v16);
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
  __int64 v6; // x2
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1

  v4 = this;
  if ( (byte_4B13B1B & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, result, method);
    this = (AccountLinkageTakeOverComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    byte_4B13B1B = 1;
  }
  if ( !result )
    sub_1BCAA3C(this, result);
  v7 = System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL);
  if ( v7 )
  {
    if ( AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked )
      AccountLinkageTakeOverComponent__ReConfirmAccountLinkage(v4, v8);
    else
      AccountLinkageTakeOverComponent__NoticeCannotTakeOver((AccountLinkageTakeOverComponent_o *)v7, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1

  if ( (byte_4B13B13 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent_UserDataStatusCheck__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B13B13 = 1;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_UserDataStatusCheck__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v14);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__NoticeCannotTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x19
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AccountLinkageTakeOverComponent___c_c *v18; // x8
  CommonUI_o *v19; // x20
  System_Action_o *_9__19_0; // x21
  Il2CppObject *v21; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Nullable_float__o v29; // 0:x3.8
  System_Nullable_int__o v30; // 0:x4.8

  if ( (byte_4B13B1E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent___c__NoticeCannotTakeOver_b__19_0__, v7, v8);
    sub_1BCA7E0(&AccountLinkageTakeOverComponent___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_1990/*"ACCOUNT_LINKAGE_CANNOT_CONTINUE"*/, v11, v12);
    byte_4B13B1E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1990/*"ACCOUNT_LINKAGE_CANNOT_CONTINUE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo, v15);
    v18 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__19_0 = v18->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18, v15);
      v18 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__19_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
    System_Action___ctor(_9__19_0, v21, Method_AccountLinkageTakeOverComponent___c__NoticeCannotTakeOver_b__19_0__, 0LL);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = _9__19_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__19_0,
      (int64_t)_9__19_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !v19 )
    sub_1BCAA3C(Instance, v15);
  v29 = 0LL;
  v30 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog(v19, v13, _9__19_0, v29, v30, 0, 0LL);
  AccountLinkageParams__ResetParams(0LL);
}


void __fastcall AccountLinkageTakeOverComponent__OnCloseTakeOverDecide(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  AccountLinkageTakeOverComponent___c_c *v17; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__25_0; // x20
  Il2CppObject *v20; // x21
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B13B24 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent___c__OnCloseTakeOverDecide_b__25_0__, v7, v8);
    sub_1BCA7E0(&AccountLinkageTakeOverComponent___c_TypeInfo, v9, v10);
    byte_4B13B24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v12);
    v15 = AvalonSceneManager_TypeInfo;
  }
  v17 = AccountLinkageTakeOverComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo, v12);
    v17 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__25_0 = v17->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v12);
      v17 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(
      _9__25_0,
      v20,
      Method_AccountLinkageTakeOverComponent___c__OnCloseTakeOverDecide_b__25_0__,
      0LL);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = _9__25_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
      (int64_t)_9__25_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !v16 )
    sub_1BCAA3C(v17, v12);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, _9__25_0, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__OnPartialMaintenance(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *mainteMessage,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AccountLinkageTakeOverComponent___c_c *v18; // x8
  CommonUI_o *v19; // x20
  System_Action_o *_9__23_0; // x21
  Il2CppObject *v21; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x0
  __int64 v30; // x1
  System_Nullable_int__o v31; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v32; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_float__o v33; // 0:x0.8
  System_Nullable_int__o v34; // 0:x0.8
  System_Nullable_float__o v35; // 0:x3.8
  System_Nullable_int__o v36; // 0:x4.8

  if ( (byte_4B13B22 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, mainteMessage, method);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent___c__OnPartialMaintenance_b__23_0__, v10, v11);
    sub_1BCA7E0(&AccountLinkageTakeOverComponent___c_TypeInfo, v12, v13);
    byte_4B13B22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo, v15);
    v18 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__23_0 = v18->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18, v15);
      v18 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
    System_Action___ctor(_9__23_0, v21, Method_AccountLinkageTakeOverComponent___c__OnPartialMaintenance_b__23_0__, 0LL);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = _9__23_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__23_0,
      (int64_t)_9__23_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v33 = (System_Nullable_float__o)&v32;
  v32 = 0LL;
  System_Nullable_float____ctor(v33, 36.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  v34 = (System_Nullable_int__o)&v31;
  v31 = 0LL;
  System_Nullable_int____ctor(v34, 26, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  if ( !v19 )
    sub_1BCAA3C(v29, v30);
  v36 = v31;
  v35 = v32;
  CommonUI__OpenAccountLinkageNotificationDialog(v19, mainteMessage, _9__23_0, v35, v36, 0, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__OnSiteMaintenance(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x19
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  AccountLinkageTakeOverComponent___c_c *v20; // x8
  CommonUI_o *v21; // x20
  System_Action_o *_9__22_0; // x21
  Il2CppObject *v23; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x0
  __int64 v32; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v35; // 0:x3.8
  System_Nullable_int__o v36; // 0:x4.8

  if ( (byte_4B13B21 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent___c__OnSiteMaintenance_b__22_0__, v9, v10);
    sub_1BCA7E0(&AccountLinkageTakeOverComponent___c_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_2002/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, v13, v14);
    byte_4B13B21 = 1;
  }
  msgFontSize = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2002/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AccountLinkageTakeOverComponent___c_TypeInfo;
  v21 = (CommonUI_o *)Instance;
  if ( !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo, v17);
    v20 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  _9__22_0 = v20->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, v17);
      v20 = AccountLinkageTakeOverComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__22_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
    System_Action___ctor(_9__22_0, v23, Method_AccountLinkageTakeOverComponent___c__OnSiteMaintenance_b__22_0__, 0LL);
    static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = _9__22_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
      (int64_t)_9__22_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  if ( !v21 )
    sub_1BCAA3C(v31, v32);
  v36 = msgFontSize;
  v35 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog(v21, v15, _9__22_0, v35, v36, 0, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__OpenLoginWebview(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  PartialMaintenanceMaster_o *v19; // x20
  _BOOL8 isAniplexPlusAccountLinkageMaintenanceNow; // x0
  const MethodInfo *v21; // x1
  AccountLinkageTakeOverComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  __int64 v28; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B13B17 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, result, method);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent_OpenWebViewCallback__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___, v7, v8);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    this = (AccountLinkageTakeOverComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v17, v18);
    byte_4B13B17 = 1;
  }
  if ( !result )
    goto LABEL_16;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    this = (AccountLinkageTakeOverComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (AccountLinkageTakeOverComponent_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
      if ( this )
      {
        v19 = (PartialMaintenanceMaster_o *)this;
        isAniplexPlusAccountLinkageMaintenanceNow = PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
                                                      (PartialMaintenanceMaster_o *)this,
                                                      0LL);
        if ( isAniplexPlusAccountLinkageMaintenanceNow )
        {
          AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageTakeOverComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                               v19,
                                                                                               0LL);
          AccountLinkageTakeOverComponent__OnPartialMaintenance(
            AniplexPlusAccountLinkageMaintenanceMessage,
            (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
            v23);
          return;
        }
        if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
        {
          AccountLinkageTakeOverComponent__OnSiteMaintenance(
            (AccountLinkageTakeOverComponent_o *)isAniplexPlusAccountLinkageMaintenanceNow,
            v21);
          return;
        }
        AccountLinkageParams__ResetParams(0LL);
        AccountLinkageParams__GetCodeChallenge(0LL);
        v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                       NetworkManager_ResultCallbackFunc_TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26);
        NetworkManager_ResultCallbackFunc___ctor(
          v27,
          v4,
          Method_AccountLinkageTakeOverComponent_OpenWebViewCallback__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
        this = (AccountLinkageTakeOverComponent_o *)NetworkManager__getRequest_object_(
                                                      v27,
                                                      (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
        if ( this )
        {
          RequestBase__beginRequest((RequestBase_o *)this, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(this, result);
  }
}


void __fastcall AccountLinkageTakeOverComponent__OpenWebViewCallback(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *AuthURL; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *basicUserName; // x21
  System_String_o *basicPassword; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x23
  __int64 v23; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B13B18 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, result, method);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent_CloseWebViewCallback__, v5, v6);
    sub_1BCA7E0(&System_Action_TypeInfo, v7, v8);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v11, v12);
    this = (AccountLinkageTakeOverComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B13B18 = 1;
  }
  if ( !result )
    sub_1BCAA3C(this, result);
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    AuthURL = AccountLinkageParams__GetAuthURL(1, 0LL);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
    System_Action___ctor(v22, v4, Method_AccountLinkageTakeOverComponent_CloseWebViewCallback__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v23);
    if ( basicUserName == 0LL || basicPassword == 0LL )
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v22, 0LL);
    else
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v22,
        0LL);
  }
}


void __fastcall AccountLinkageTakeOverComponent__ReConfirmAccountLinkage(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
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
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  System_String_o *v42; // x29
  System_String_o *v43; // x22
  Il2CppObject *v44; // x19
  Il2CppObject *NumberFormat_39108640; // x21
  Il2CppObject *v46; // x0
  System_String_o *v47; // x21
  __int64 v48; // x1
  bool SelfUserGame; // w19
  System_String_o *v50; // x20
  System_String_o *v51; // x0
  __int64 v52; // x1
  System_String_o *v53; // x19
  Il2CppObject *v54; // x25
  System_String_o *name; // x0
  System_String_o *v56; // x22
  System_String_o *v57; // x23
  System_String_o *v58; // x24
  System_String_o *v59; // x19
  Il2CppObject *Instance; // x25
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  TakeOverDialog_ClickDelegate_o *v64; // x26
  Il2CppObject *v65; // x29
  System_String_o *v66; // x24
  System_String_o *buttonDecide; // x21
  Il2CppObject *v68; // x23
  __int64 v69; // x1
  Il2CppObject *v70; // x19
  System_String_o *v71; // x26
  System_String_o *v72; // x27
  System_String_o *v73; // x28
  System_String_o *v74; // x22
  Il2CppObject *v75; // x19
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *v79; // x25
  System_String_o *buttonCancel; // [xsp+18h] [xbp-78h]
  int32_t requestedAccountLevel; // [xsp+24h] [xbp-6Ch] BYREF
  UserGameEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B13B1F & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_0__, v4, v5);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_1__, v6, v7);
    sub_1BCA7E0(&TakeOverDialog_ClickDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo, v10, v11);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_13409/*"TAKEOVER_OVERRIDE_WARNING"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_14995/*"USER_DATA_INFO"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_5869/*"EXIST_ACCOUNT_DATA"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_11179/*"RECONFIRM_CONTINUE_OVERRIDE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_2010/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_2008/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_2014/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_2012/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE_NO_DATA"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_2018/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_11178/*"RECONFIRM_CONTINUE"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_15012/*"USER_NAME_NOT_SET"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_2019/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/, v40, v41);
    byte_4B13B1F = 1;
  }
  entity = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2008/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0LL);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_14995/*"USER_DATA_INFO"*/, 0LL);
  v44 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(
                          AccountLinkageParams_TypeInfo->static_fields->requestedAccountName,
                          0LL);
  NumberFormat_39108640 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0LL);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestedAccountLevel);
  v47 = System_String__Format_62415660(v43, NumberFormat_39108640, v44, v46, 0LL);
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
  if ( !SelfUserGame )
  {
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11178/*"RECONFIRM_CONTINUE"*/, 0LL);
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2010/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/, 0LL);
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_2012/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE_NO_DATA"*/, 0LL);
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_2019/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v64 = (TakeOverDialog_ClickDelegate_o *)sub_1BCAA2C(TakeOverDialog_ClickDelegate_TypeInfo, v61, v62, v63);
    TakeOverDialog_ClickDelegate___ctor(
      v64,
      (Il2CppObject *)this,
      Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_1__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenTakeOverDialog((CommonUI_o *)Instance, v64, v56, v47, v58, v59, v42, v57, 0LL);
      return;
    }
LABEL_23:
    sub_1BCAA3C(v51, v52);
  }
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11179/*"RECONFIRM_CONTINUE_OVERRIDE"*/, 0LL);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_2014/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, 0LL);
  if ( !entity )
    goto LABEL_23;
  v53 = v51;
  v51 = LocalizationManager__GetNumberFormat_39108640(entity->fields.friendCode, 0LL);
  if ( !entity )
    goto LABEL_23;
  v54 = (Il2CppObject *)v51;
  buttonCancel = v42;
  if ( entity->fields.genderType == 3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
    name = LocalizationManager__Get((System_String_o *)StringLiteral_15012/*"USER_NAME_NOT_SET"*/, 0LL);
  }
  else
  {
    name = entity->fields.name;
  }
  v51 = AccountLinkageParams__AddColorCodeBracket(name, 0LL);
  if ( !entity )
    goto LABEL_23;
  v65 = (Il2CppObject *)v51;
  v66 = v47;
  buttonDecide = v53;
  v68 = (Il2CppObject *)this;
  v70 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_5869/*"EXIST_ACCOUNT_DATA"*/, 0LL);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_13409/*"TAKEOVER_OVERRIDE_WARNING"*/, 0LL);
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_2018/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/, 0LL);
  v74 = System_String__Format_62415660(v43, v54, v65, v70, 0LL);
  v75 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v79 = (AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                  AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo,
                                                                  v76,
                                                                  v77,
                                                                  v78);
  AccountLinkageOverrideTakeOverDialog_ClickDelegate___ctor(
    v79,
    v68,
    Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_0__,
    0LL);
  if ( !v75 )
    goto LABEL_23;
  CommonUI__OpenAccountLinkageOverrideTakeOverDialog(
    (CommonUI_o *)v75,
    v79,
    v50,
    v71,
    v74,
    v66,
    v72,
    v73,
    buttonCancel,
    buttonDecide,
    0LL);
}


void __fastcall AccountLinkageTakeOverComponent__SendIssueTokenRequest(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1

  if ( (byte_4B13B1A & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent_IssueTokenCallback__, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B13B1A = 1;
  }
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_IssueTokenCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Request_object = NetworkManager__getRequest_object_(
                     v13,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v16);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *titleImg; // x0
  __int64 *v9; // x8

  if ( (byte_4B13B23 & 1) == 0 )
  {
    sub_1BCA7E0(&SelectTakeOverTypeComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20714/*"img_txt_a_online_acount"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_20715/*"img_txt_a_online_acount_overwrite"*/, v6, v7);
    byte_4B13B23 = 1;
  }
  titleImg = this->fields.titleImg;
  if ( !titleImg
    || (!SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride
      ? (v9 = &StringLiteral_20714/*"img_txt_a_online_acount"*/)
      : (v9 = &StringLiteral_20715/*"img_txt_a_online_acount_overwrite"*/),
        UISprite__set_spriteName(titleImg, (System_String_o *)*v9, 0LL),
        (titleImg = this->fields.titleImg) == 0LL) )
  {
    sub_1BCAA3C(titleImg, method);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))titleImg->klass->vtable._33_MakePixelPerfect.method)(
    titleImg,
    titleImg->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall AccountLinkageTakeOverComponent__StartAccountLinkageTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B13B15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__, method, v2);
    byte_4B13B15 = 1;
  }
  v4 = Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__;
  if ( (*((_BYTE *)Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  AccountLinkageTakeOverComponent__CheckMaintenanceInfo(this, v6);
}


void __fastcall AccountLinkageTakeOverComponent__UserDataStatusCheck(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UILabel_o *detailLabel; // x21
  System_String_o *Instance; // x0
  __int64 v31; // x1
  UILabel_o *contentLabel; // x21
  PartialMaintenanceMaster_o *v33; // x20
  AccountLinkageTakeOverComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v35; // x2
  System_String_o *friendCode; // x20
  Il2CppObject *v37; // x20
  System_String_o *name; // x0
  UILabel_o *takeOverButtonLabel; // x20
  __int64 *v40; // x8
  Il2CppObject *v41; // x21
  __int64 v42; // x1
  Il2CppObject *v43; // x22
  System_String_o *v44; // x0
  UILabel_o *userDataStatusInfoLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v47; // x1
  UserGameEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B13B14 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageComponent_TypeInfo, result, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_2026/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON_NO_USER_DATA"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_14995/*"USER_DATA_INFO"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_2025/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_9439/*"NO_USER_DATA"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_2028/*"ACCOUNT_LINKAGE_TAKEOVER_DETAIL_MESSAGE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_2020/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_15012/*"USER_NAME_NOT_SET"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11632/*"SELECT_ACCOUNT_LINKAGE_TAKEOVER"*/, v27, v28);
    byte_4B13B14 = 1;
  }
  entity = 0LL;
  detailLabel = this->fields.detailLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, result);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2028/*"ACCOUNT_LINKAGE_TAKEOVER_DETAIL_MESSAGE"*/, 0LL);
  if ( !detailLabel )
    goto LABEL_39;
  UILabel__set_text(detailLabel, Instance, 0LL);
  contentLabel = this->fields.contentLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2020/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/, 0LL);
  if ( !contentLabel )
    goto LABEL_39;
  UILabel__set_text(contentLabel, Instance, 0LL);
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
    return;
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
  if ( !Instance )
    goto LABEL_39;
  v33 = (PartialMaintenanceMaster_o *)Instance;
  if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow((PartialMaintenanceMaster_o *)Instance, 0LL) )
  {
    AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageTakeOverComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                         v33,
                                                                                         0LL);
    AccountLinkageTakeOverComponent__OnPartialMaintenance(
      AniplexPlusAccountLinkageMaintenanceMessage,
      (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
      v35);
    return;
  }
  Instance = (System_String_o *)UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      friendCode = entity->fields.friendCode;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
      Instance = LocalizationManager__GetNumberFormat_39108640(friendCode, 0LL);
      if ( entity )
      {
        v37 = (Il2CppObject *)Instance;
        if ( entity->fields.genderType == 3 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
          name = LocalizationManager__Get((System_String_o *)StringLiteral_15012/*"USER_NAME_NOT_SET"*/, 0LL);
        }
        else
        {
          name = entity->fields.name;
        }
        Instance = AccountLinkageParams__AddColorCodeBracket(name, 0LL);
        if ( entity )
        {
          v41 = (Il2CppObject *)Instance;
          v43 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
          v44 = LocalizationManager__Get((System_String_o *)StringLiteral_14995/*"USER_DATA_INFO"*/, 0LL);
          Instance = System_String__Format_62415660(v44, v37, v41, v43, 0LL);
          if ( this->fields.userDataStatusInfoLabel )
          {
            UILabel__set_text(this->fields.userDataStatusInfoLabel, Instance, 0LL);
            takeOverButtonLabel = this->fields.takeOverButtonLabel;
            v40 = &StringLiteral_2025/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON"*/;
            goto LABEL_31;
          }
        }
      }
    }
LABEL_39:
    sub_1BCAA3C(Instance, v31);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NO_USER_DATA"*/, 0LL);
  if ( !this->fields.userDataStatusInfoLabel )
    goto LABEL_39;
  UILabel__set_text(this->fields.userDataStatusInfoLabel, Instance, 0LL);
  takeOverButtonLabel = this->fields.takeOverButtonLabel;
  v40 = &StringLiteral_2026/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON_NO_USER_DATA"*/;
LABEL_31:
  Instance = LocalizationManager__Get((System_String_o *)*v40, 0LL);
  if ( !takeOverButtonLabel )
    goto LABEL_39;
  UILabel__set_text(takeOverButtonLabel, Instance, 0LL);
  userDataStatusInfoLabel = this->fields.userDataStatusInfoLabel;
  Instance = (System_String_o *)AccountLinkageComponent_TypeInfo;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v31);
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
  AccountLinkageTakeOverComponent__SetupTitleImg(this, v47);
  Instance = (System_String_o *)this->fields.titleFsm;
  if ( !Instance )
    goto LABEL_39;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11632/*"SELECT_ACCOUNT_LINKAGE_TAKEOVER"*/, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___AccountLinkageUpdateUserData_b__21_0(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B13B27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageTakeOverComponent_OnCloseTakeOverDecide__, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B13B27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_AccountLinkageTakeOverComponent_OnCloseTakeOverDecide__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, v12, 0LL);
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

  if ( (byte_4B13B25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B13B25 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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

  if ( (byte_4B13B26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B13B26 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseTakeOverDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isDecide )
    AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(this, v7);
}


void __fastcall AccountLinkageTakeOverComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13B28 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageTakeOverComponent___c_TypeInfo, v1, v2);
    byte_4B13B28 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AccountLinkageTakeOverComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AccountLinkageTakeOverComponent___c_TypeInfo->static_fields->__9 = (struct AccountLinkageTakeOverComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AccountLinkageTakeOverComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B13B29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B13B29 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___NoticeCannotTakeOver_b__19_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B13B2A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B13B2A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___OnCloseTakeOverDecide_b__25_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B13B2D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method, v2);
    byte_4B13B2D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___OnPartialMaintenance_b__23_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B13B2C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B13B2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___OnSiteMaintenance_b__22_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B13B2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B13B2B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}