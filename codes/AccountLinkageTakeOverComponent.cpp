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
  AccountLinkageParams_c *v6; // x0

  v4 = this;
  if ( (byte_438CDD8 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    this = (AccountLinkageTakeOverComponent_o *)sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438CDD8 = 1;
  }
  if ( !result )
    sub_B7769C(this, result);
  if ( System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
  {
    AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData(v4, v5);
  }
  else
  {
    v6 = AccountLinkageParams_TypeInfo;
    if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    }
    AccountLinkageParams__ResetParams((const MethodInfo *)v6);
  }
}


void __fastcall AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  AccountLinkageParams_c *SingleEntity; // x0
  AccountLinkageParams_c *v6; // x8
  System_String_o *v7; // x22
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *newAuthKey; // x20
  System_String_o *newSecretKey; // x21
  int64_t birthDay; // x20
  System_String_o *name; // x21
  int32_t genderType; // w22
  NetworkManager_o *v14; // x20
  int32_t Month; // w23
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *v16; // x20
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  System_String_o *v25; // x20
  System_String_o *v26; // x0
  System_String_o *v27; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v29; // x22
  uint64_t dateData; // [xsp+0h] [xbp-50h] BYREF
  UserGameEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  int64_t userId; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x0.8
  System_Nullable_float__o v35; // 0:x3.8
  System_Nullable_int__o v36; // 0:x4.8

  if ( (byte_438CDDB & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_b__21_0__);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&CommonUI_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_UserGameMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&OtherUserNewManager_TypeInfo);
    sub_B775C4(&PurchaseBehaviour_TypeInfo);
    sub_B775C4(&ServantCommentManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundPlayerComponent_TypeInfo);
    sub_B775C4(&TermsOfUseMenu_TypeInfo);
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    sub_B775C4(&UserCommandCodeNewManager_TypeInfo);
    sub_B775C4(&UserEquipNewManager_TypeInfo);
    sub_B775C4(&UserServantCollectionManager_TypeInfo);
    sub_B775C4(&UserServantNewManager_TypeInfo);
    sub_B775C4(&WarBoardData_TypeInfo);
    sub_B775C4(&StringLiteral_3505/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/);
    sub_B775C4(&StringLiteral_3508/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/);
    sub_B775C4(&StringLiteral_1678/*"ACCOUNT_LINKAGE_CONTINUE_SUCCESS"*/);
    byte_438CDDB = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_91;
  SingleEntity = (AccountLinkageParams_c *)DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                             Master_WarQuestSelectionMaster,
                                             &entity,
                                             (const MethodInfo_21FBBA4 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__);
  v6 = AccountLinkageParams_TypeInfo;
  if ( ((unsigned __int8)SingleEntity & 1) != 0 )
  {
    if ( (WORD1(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
      v6 = AccountLinkageParams_TypeInfo;
    }
    v7 = System_Int64__ToString((int64_t)&v6->static_fields->newUserId, 0LL);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    newAuthKey = static_fields->newAuthKey;
    newSecretKey = static_fields->newSecretKey;
    UserSaveData__DeleteAndInitContinueData(1, 0LL);
    Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      NetworkManager__SetAuth((NetworkManager_o *)Master_WarQuestSelectionMaster, v7, newAuthKey, newSecretKey, 0LL);
      Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( Master_WarQuestSelectionMaster )
      {
        NetworkManager__WriteAuth((NetworkManager_o *)Master_WarQuestSelectionMaster, 0LL);
        if ( entity )
        {
          birthDay = entity->fields.birthDay;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          dateData = NetworkManager__getDateTime_26207384(birthDay, 0LL).fields.dateData;
          Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( entity )
          {
            name = entity->fields.name;
            genderType = entity->fields.genderType;
            v14 = (NetworkManager_o *)Master_WarQuestSelectionMaster;
            v33.fields.dateData = (uint64_t)&dateData;
            Month = System_DateTime__get_Month(v33, 0LL);
            v34.fields.dateData = (uint64_t)&dateData;
            Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)System_DateTime__get_Day(v34, 0LL);
            if ( v14 )
            {
              NetworkManager__SetSignup_26193488(
                v14,
                name,
                genderType,
                Month,
                (int32_t)Master_WarQuestSelectionMaster,
                0LL);
              Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
              if ( Master_WarQuestSelectionMaster )
              {
                NetworkManager__WriteSignup((NetworkManager_o *)Master_WarQuestSelectionMaster, 0LL);
                if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UserServantNewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
                }
                UserServantNewManager__CreateContinueDeviceSaveData(0LL);
                if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
                }
                UserServantCollectionManager__CreateContinueDeviceSaveData(0LL);
                if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantCommentManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                }
                ServantCommentManager__CreateContinueDeviceSaveData(0LL);
                if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
                }
                UserEquipNewManager__CreateContinueDeviceSaveData(0LL);
                if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
                }
                OtherUserNewManager__CreateContinueDeviceSaveData(0LL);
                if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
                }
                UserCommandCodeNewManager__CreateContinueDeviceSaveData(0LL);
                if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
                }
                UserCommandCodeCollectionManager__CreateContinueDeviceSaveData(0LL);
                if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
                }
                SoundPlayerComponent__CreateContinueDeviceSaveData(0LL);
                if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !WarBoardData_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
                }
                WarBoardData__CreateContinueDeviceSaveData(0LL);
                Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
                if ( entity )
                {
                  if ( Master_WarQuestSelectionMaster )
                  {
                    NetworkManager__SetFriendCode(
                      (NetworkManager_o *)Master_WarQuestSelectionMaster,
                      entity->fields.friendCode,
                      0LL);
                    Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
                    if ( Master_WarQuestSelectionMaster )
                    {
                      NetworkManager__WriteFriendCode((NetworkManager_o *)Master_WarQuestSelectionMaster, 0LL);
                      Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)this->fields.friendCodeComponent;
                      if ( Master_WarQuestSelectionMaster )
                      {
                        FriendCodeComponent__UpdateFriendCode(
                          (FriendCodeComponent_o *)Master_WarQuestSelectionMaster,
                          0LL);
                        if ( (BYTE3(TermsOfUseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
                        }
                        TermsOfUseMenu__Save(0LL);
                        Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
                        if ( entity )
                        {
                          v16 = Master_WarQuestSelectionMaster;
                          if ( Master_WarQuestSelectionMaster )
                          {
                            userId = entity->fields.userId;
                            v17 = (System_Int32_array **)System_Int64__ToString((int64_t)&userId, 0LL);
                            v16->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v17;
                            sub_B77560(
                              (BattleServantConfConponent_o *)&v16->fields.list,
                              v17,
                              v18,
                              v19,
                              v20,
                              v21,
                              v22,
                              v23);
                            Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
                            if ( entity )
                            {
                              if ( Master_WarQuestSelectionMaster )
                              {
                                AdManager__SetFriendCode(
                                  (AdManager_o *)Master_WarQuestSelectionMaster,
                                  entity->fields.friendCode,
                                  v24);
                                ListViewSort__FirstLoginSave(0LL);
                                if ( !ServantCommentManager__GetUiFlag(0LL) )
                                {
                                  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
                                  if ( !Master_WarQuestSelectionMaster )
                                    goto LABEL_91;
                                  AtlasManager__ReleaseUISkinDialog(
                                    (AtlasManager_o *)Master_WarQuestSelectionMaster,
                                    0LL);
                                }
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)LocalizationManager__Get((System_String_o *)StringLiteral_3505/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/, 0LL);
                                if ( entity )
                                {
                                  v25 = System_String__Format(
                                          (System_String_o *)Master_WarQuestSelectionMaster,
                                          (Il2CppObject *)entity->fields.name,
                                          0LL);
                                  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
                                  }
                                  if ( PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(0LL) )
                                  {
                                    if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
                                    }
                                    PurchaseBehaviour__SetInitializedWithMismatchedObfuscatedAccountId(1, 0LL);
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3508/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/, 0LL);
                                    System_String__Concat_44901936(v25, v26, 0LL);
                                  }
                                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  }
                                  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_1678/*"ACCOUNT_LINKAGE_CONTINUE_SUCCESS"*/, 0LL);
                                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v29 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v29,
                                    (Il2CppObject *)this,
                                    Method_AccountLinkageTakeOverComponent__AccountLinkageUpdateUserData_b__21_0__,
                                    0LL);
                                  if ( Instance )
                                  {
                                    v35 = 0LL;
                                    v36 = 0LL;
                                    CommonUI__OpenAccountLinkageNotificationDialog(Instance, v27, v29, v35, v36, 0LL);
                                    if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !CommonUI_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                                    }
                                    CommonUI__DeleteTutorialSaveKey(0LL);
                                    CommonUI__DeleteFortuneBonusSaveKey(0LL);
                                    SingleEntity = AccountLinkageParams_TypeInfo;
                                    if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
                                    {
                                      goto LABEL_89;
                                    }
                                    goto LABEL_90;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_91:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  }
  if ( (WORD1(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    SingleEntity = AccountLinkageParams_TypeInfo;
LABEL_89:
    j_il2cpp_runtime_class_init_0(SingleEntity);
  }
LABEL_90:
  AccountLinkageParams__ResetParams((const MethodInfo *)SingleEntity);
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
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  AccountLinkageInfoRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v5; // x1

  if ( (byte_438CDD1 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageTakeOverComponent_OpenLoginWebview__);
    sub_B775C4(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438CDD1 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_OpenLoginWebview__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (AccountLinkageInfoRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v3,
                                                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v5);
  AccountLinkageInfoRequest__beginRequest(Request_WarBoardWallAttackRequest, v5);
}


void __fastcall AccountLinkageTakeOverComponent__CloseWebViewCallback(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  AccountLinkageParams_c *v3; // x0
  const MethodInfo *v4; // x1
  AccountLinkageParams_c *v5; // x0

  if ( (byte_438CDD4 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    byte_438CDD4 = 1;
  }
  v3 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v3 = AccountLinkageParams_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v3->static_fields->authorizationCode, 0LL) )
  {
    v5 = AccountLinkageParams_TypeInfo;
    if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    }
    AccountLinkageParams__ResetParams((const MethodInfo *)v5);
  }
  else
  {
    AccountLinkageTakeOverComponent__SendIssueTokenRequest(this, v4);
  }
}


void __fastcall AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  AccountLinkageContinueUserRequest_o *v7; // x19

  if ( (byte_438CDD7 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_AccountLinkageTakeOverComponent_AccountLinkageTakeOverCallback__);
    sub_B775C4(&Method_NetworkManager_getRequest_AccountLinkageContinueUserRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438CDD7 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_AccountLinkageTakeOverCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v3,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_AccountLinkageContinueUserRequest___);
  v7 = (AccountLinkageContinueUserRequest_o *)Request_WarBoardWallAttackRequest;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
  }
  if ( !v7 )
    sub_B7769C(Request_WarBoardWallAttackRequest, v5);
  AccountLinkageContinueUserRequest__beginRequest(
    v7,
    AccountLinkageParams_TypeInfo->static_fields->accountLinkageToken,
    v6);
}


void __fastcall AccountLinkageTakeOverComponent__IssueTokenCallback(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageTakeOverComponent_o *v4; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  AccountLinkageParams_c *v7; // x8

  v4 = this;
  if ( (byte_438CDD6 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    this = (AccountLinkageTakeOverComponent_o *)sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438CDD6 = 1;
  }
  if ( !result )
    sub_B7769C(this, result);
  v5 = System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL);
  v7 = AccountLinkageParams_TypeInfo;
  if ( v5 )
  {
    if ( (WORD1(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
      v7 = AccountLinkageParams_TypeInfo;
    }
    if ( v7->static_fields->isRequestedAccountLinked )
      AccountLinkageTakeOverComponent__ReConfirmAccountLinkage(v4, v6);
    else
      AccountLinkageTakeOverComponent__NoticeCannotTakeOver((AccountLinkageTakeOverComponent_o *)v5, v6);
  }
  else
  {
    if ( (WORD1(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    }
    AccountLinkageParams__ResetParams((const MethodInfo *)v5);
  }
}


void __fastcall AccountLinkageTakeOverComponent__LinkageStatusCheck(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  AccountLinkageInfoRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v5; // x1

  if ( (byte_438CDCE & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageTakeOverComponent_UserDataStatusCheck__);
    sub_B775C4(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438CDCE = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_UserDataStatusCheck__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (AccountLinkageInfoRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v3,
                                                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v5);
  AccountLinkageInfoRequest__beginRequest(Request_WarBoardWallAttackRequest, v5);
}


void __fastcall AccountLinkageTakeOverComponent__NoticeCannotTakeOver(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x19
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  AccountLinkageTakeOverComponent___c_c *v6; // x8
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__19_0; // x21
  Il2CppObject *v9; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  AccountLinkageParams_c *v17; // x0
  System_Nullable_float__o v18; // 0:x3.8
  System_Nullable_int__o v19; // 0:x4.8

  if ( (byte_438CDD9 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_AccountLinkageTakeOverComponent___c__NoticeCannotTakeOver_b__19_0__);
    sub_B775C4(&AccountLinkageTakeOverComponent___c_TypeInfo);
    sub_B775C4(&StringLiteral_1675/*"ACCOUNT_LINKAGE_CANNOT_CONTINUE"*/);
    byte_438CDD9 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_1675/*"ACCOUNT_LINKAGE_CANNOT_CONTINUE"*/, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  v6 = AccountLinkageTakeOverComponent___c_TypeInfo;
  if ( (BYTE3(AccountLinkageTakeOverComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v6 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__19_0 = static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__19_0, v9, Method_AccountLinkageTakeOverComponent___c__NoticeCannotTakeOver_b__19_0__, 0LL);
    v10 = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    v10->__9__19_0 = _9__19_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v10->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v5 )
    sub_B7769C(Instance, v4);
  v18 = 0LL;
  v19 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog(v5, v2, _9__19_0, v18, v19, 0LL);
  v17 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
  }
  AccountLinkageParams__ResetParams((const MethodInfo *)v17);
}


void __fastcall AccountLinkageTakeOverComponent__OnCloseTakeOverDecide(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v4; // x8
  AccountLinkageTakeOverComponent___c_c *v5; // x0
  float DEFAULT_FADE_TIME; // s8
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__25_0; // x20
  Il2CppObject *v9; // x21
  struct AccountLinkageTakeOverComponent___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438CDDF & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_AccountLinkageTakeOverComponent___c__OnCloseTakeOverDecide_b__25_0__);
    sub_B775C4(&AccountLinkageTakeOverComponent___c_TypeInfo);
    byte_438CDDF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  v5 = AccountLinkageTakeOverComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(AccountLinkageTakeOverComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v5 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__25_0 = static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__25_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__25_0, v9, Method_AccountLinkageTakeOverComponent___c__OnCloseTakeOverDecide_b__25_0__, 0LL);
    v10 = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    v10->__9__25_0 = _9__25_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v10->__9__25_0,
      (System_Int32_array **)_9__25_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !Instance )
    sub_B7769C(v5, v2);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, _9__25_0, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__OnPartialMaintenance(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *mainteMessage,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AccountLinkageTakeOverComponent___c_c *v5; // x8
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__23_0; // x21
  Il2CppObject *v8; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o msgPosY; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_float__o p_msgPosY; // 0:x0.8
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v22; // 0:x3.8
  System_Nullable_int__o v23; // 0:x4.8

  if ( (byte_438CDDD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Nullable_float___ctor__);
    sub_B775C4(&Method_System_Nullable_int___ctor__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_AccountLinkageTakeOverComponent___c__OnPartialMaintenance_b__23_0__);
    sub_B775C4(&AccountLinkageTakeOverComponent___c_TypeInfo);
    byte_438CDDD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AccountLinkageTakeOverComponent___c_TypeInfo;
  if ( (BYTE3(AccountLinkageTakeOverComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v5 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__23_0 = static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__23_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__23_0, v8, Method_AccountLinkageTakeOverComponent___c__OnPartialMaintenance_b__23_0__, 0LL);
    v9 = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    v9->__9__23_0 = _9__23_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__23_0,
      (System_Int32_array **)_9__23_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  p_msgPosY = (System_Nullable_float__o)&msgPosY;
  msgPosY = 0LL;
  System_Nullable_float____ctor(p_msgPosY, 36.0, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  msgFontSize = 0LL;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_24765B8 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_B7769C(v16, v17);
  v22 = msgPosY;
  v23 = msgFontSize;
  CommonUI__OpenAccountLinkageNotificationDialog(Instance, mainteMessage, _9__23_0, v22, v23, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__OnSiteMaintenance(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x19
  CommonUI_o *Instance; // x20
  AccountLinkageTakeOverComponent___c_c *v4; // x8
  struct AccountLinkageTakeOverComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__22_0; // x21
  Il2CppObject *v7; // x22
  struct AccountLinkageTakeOverComponent___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v19; // 0:x3.8
  System_Nullable_int__o v20; // 0:x4.8

  if ( (byte_438CDDC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_System_Nullable_int___ctor__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_AccountLinkageTakeOverComponent___c__OnSiteMaintenance_b__22_0__);
    sub_B775C4(&AccountLinkageTakeOverComponent___c_TypeInfo);
    sub_B775C4(&StringLiteral_1687/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/);
    byte_438CDDC = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_1687/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AccountLinkageTakeOverComponent___c_TypeInfo;
  if ( (BYTE3(AccountLinkageTakeOverComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageTakeOverComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageTakeOverComponent___c_TypeInfo);
    v4 = AccountLinkageTakeOverComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__22_0 = static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__22_0, v7, Method_AccountLinkageTakeOverComponent___c__OnSiteMaintenance_b__22_0__, 0LL);
    v8 = AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
    v8->__9__22_0 = _9__22_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  msgFontSize = 0LL;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_24765B8 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_B7769C(v15, v16);
  v20 = msgFontSize;
  v19 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog(Instance, v2, _9__22_0, v19, v20, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__OpenLoginWebview(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  PartialMaintenanceMaster_o *v5; // x20
  const MethodInfo *v6; // x1
  System_String_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v8; // x2
  AccountLinkageParams_c *v9; // x0
  const MethodInfo *v10; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_438CDD2 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_AccountLinkageTakeOverComponent_OpenWebViewCallback__);
    sub_B775C4(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_B775C4(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (AccountLinkageTakeOverComponent_o *)sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438CDD2 = 1;
  }
  if ( !result )
    goto LABEL_23;
  if ( System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
  {
    this = (AccountLinkageTakeOverComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (AccountLinkageTakeOverComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
      if ( this )
      {
        v5 = (PartialMaintenanceMaster_o *)this;
        if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
               (PartialMaintenanceMaster_o *)this,
               0LL) )
        {
          AniplexPlusAccountLinkageMaintenanceMessage = PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                          v5,
                                                          0LL);
          AccountLinkageTakeOverComponent__OnPartialMaintenance(
            (AccountLinkageTakeOverComponent_o *)AniplexPlusAccountLinkageMaintenanceMessage,
            AniplexPlusAccountLinkageMaintenanceMessage,
            v8);
          return;
        }
        v9 = AccountLinkageParams_TypeInfo;
        if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
          v9 = AccountLinkageParams_TypeInfo;
        }
        if ( v9->static_fields->isAniplexPlusServerError )
        {
          AccountLinkageTakeOverComponent__OnSiteMaintenance((AccountLinkageTakeOverComponent_o *)v9, v6);
          return;
        }
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        AccountLinkageParams__ResetParams((const MethodInfo *)v9);
        AccountLinkageParams__GetCodeChallenge(v10);
        v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v11,
          v4,
          Method_AccountLinkageTakeOverComponent_OpenWebViewCallback__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (AccountLinkageTakeOverComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                      v11,
                                                      (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
        if ( this )
        {
          RequestBase__beginRequest((RequestBase_o *)this, 0LL);
          return;
        }
      }
    }
LABEL_23:
    sub_B7769C(this, result);
  }
}


void __fastcall AccountLinkageTakeOverComponent__OpenWebViewCallback(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  const MethodInfo *v5; // x1
  System_String_o *AuthURL; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *basicPassword; // x22
  System_String_o *basicUserName; // x23
  System_Action_o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_438CDD3 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_AccountLinkageTakeOverComponent_CloseWebViewCallback__);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&WebViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    this = (AccountLinkageTakeOverComponent_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CDD3 = 1;
  }
  if ( !result )
    sub_B7769C(this, result);
  if ( System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
  {
    if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    }
    AuthURL = AccountLinkageParams__GetAuthURL(1, v5);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v10, v4, Method_AccountLinkageTakeOverComponent_CloseWebViewCallback__, 0LL);
    if ( basicUserName && basicPassword )
    {
      if ( (WORD1(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WebViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
      }
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v10,
        0LL);
    }
    else
    {
      if ( (WORD1(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WebViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
      }
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v10, 0LL);
    }
  }
}


void __fastcall AccountLinkageTakeOverComponent__ReConfirmAccountLinkage(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x28
  const MethodInfo *v4; // x1
  System_String_o *v5; // x22
  AccountLinkageParams_c *v6; // x8
  Il2CppObject *v7; // x19
  Il2CppObject *NumberFormat_34382772; // x21
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  System_String_o *v11; // x21
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  const MethodInfo *v14; // x1
  System_String_o *v15; // x19
  Il2CppObject *v16; // x25
  System_String_o *name; // x19
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  System_String_o *v20; // x19
  System_String_o *v21; // x24
  CommonUI_o *Instance; // x25
  TakeOverDialog_ClickDelegate_o *v23; // x26
  System_String_o *v24; // x20
  Il2CppObject *v25; // x28
  Il2CppObject *v26; // x24
  Il2CppObject *v27; // x23
  System_String_o *v28; // x26
  System_String_o *v29; // x27
  System_String_o *v30; // x19
  System_String_o *v31; // x22
  CommonUI_o *v32; // x23
  AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *v33; // x25
  System_String_o *buttonDecide; // [xsp+20h] [xbp-70h]
  System_String_o *v35; // [xsp+28h] [xbp-68h]
  int32_t requestedAccountLevel; // [xsp+34h] [xbp-5Ch] BYREF
  UserGameEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_438CDDA & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_0__);
    sub_B775C4(&Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_1__);
    sub_B775C4(&TakeOverDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_13564/*"TAKEOVER_OVERRIDE_WARNING"*/);
    sub_B775C4(&StringLiteral_14996/*"USER_DATA_INFO"*/);
    sub_B775C4(&StringLiteral_5908/*"EXIST_ACCOUNT_DATA"*/);
    sub_B775C4(&StringLiteral_11276/*"RECONFIRM_CONTINUE_OVERRIDE"*/);
    sub_B775C4(&StringLiteral_1695/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_1693/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_1699/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/);
    sub_B775C4(&StringLiteral_1697/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE_NO_DATA"*/);
    sub_B775C4(&StringLiteral_1703/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/);
    sub_B775C4(&StringLiteral_11275/*"RECONFIRM_CONTINUE"*/);
    sub_B775C4(&StringLiteral_15013/*"USER_NAME_NOT_SET"*/);
    sub_B775C4(&StringLiteral_1704/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/);
    byte_438CDDA = 1;
  }
  entity = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_1693/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_14996/*"USER_DATA_INFO"*/, 0LL);
  v6 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v6 = AccountLinkageParams_TypeInfo;
  }
  v7 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(v6->static_fields->requestedAccountName, v4);
  NumberFormat_34382772 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34382772(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0LL);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestedAccountLevel, v9);
  v11 = System_String__Format_44903000(v5, NumberFormat_34382772, v7, v10, 0LL);
  if ( !UserGameMaster__TryGetSelfUserGame(&entity, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11275/*"RECONFIRM_CONTINUE"*/, 0LL);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_1695/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/, 0LL);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_1697/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE_NO_DATA"*/, 0LL);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_1704/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = (TakeOverDialog_ClickDelegate_o *)sub_B77694(TakeOverDialog_ClickDelegate_TypeInfo);
    TakeOverDialog_ClickDelegate___ctor(
      v23,
      (Il2CppObject *)this,
      Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_1__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenTakeOverDialog(Instance, v23, v18, v11, v20, v21, v3, v19, 0LL);
      return;
    }
LABEL_36:
    sub_B7769C(v13, v14);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11276/*"RECONFIRM_CONTINUE_OVERRIDE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1699/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, 0LL);
  if ( !entity )
    goto LABEL_36;
  v15 = v13;
  v13 = LocalizationManager__GetNumberFormat_34382772(entity->fields.friendCode, 0LL);
  if ( !entity )
    goto LABEL_36;
  v16 = (Il2CppObject *)v13;
  buttonDecide = v15;
  v35 = v12;
  if ( entity->fields.genderType == 3 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    name = LocalizationManager__Get((System_String_o *)StringLiteral_15013/*"USER_NAME_NOT_SET"*/, 0LL);
  }
  else
  {
    name = entity->fields.name;
  }
  v24 = v3;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
  }
  v13 = AccountLinkageParams__AddColorCodeBracket(name, v14);
  if ( !entity )
    goto LABEL_36;
  v25 = (Il2CppObject *)v13;
  v26 = (Il2CppObject *)this;
  v27 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5908/*"EXIST_ACCOUNT_DATA"*/, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13564/*"TAKEOVER_OVERRIDE_WARNING"*/, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_1703/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/, 0LL);
  v31 = System_String__Format_44903000(v5, v16, v25, v27, 0LL);
  v32 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = (AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *)sub_B77694(AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo);
  AccountLinkageOverrideTakeOverDialog_ClickDelegate___ctor(
    v33,
    v26,
    Method_AccountLinkageTakeOverComponent__ReConfirmAccountLinkage_b__20_0__,
    0LL);
  if ( !v32 )
    goto LABEL_36;
  CommonUI__OpenAccountLinkageOverrideTakeOverDialog(v32, v33, v35, v28, v31, v11, v29, v30, v24, buttonDecide, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent__SendIssueTokenRequest(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  AccountLinkageIssueTokenRequest_o *v7; // x19
  AccountLinkageParams_c *v8; // x8

  if ( (byte_438CDD5 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_AccountLinkageTakeOverComponent_IssueTokenCallback__);
    sub_B775C4(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438CDD5 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageTakeOverComponent_IssueTokenCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v3,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  v7 = (AccountLinkageIssueTokenRequest_o *)Request_WarBoardWallAttackRequest;
  v8 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v8 = AccountLinkageParams_TypeInfo;
  }
  if ( !v7 )
    sub_B7769C(Request_WarBoardWallAttackRequest, v5);
  AccountLinkageIssueTokenRequest__beginRequest(
    v7,
    v8->static_fields->authorizationCode,
    v8->static_fields->codeVerifier,
    v6);
}


void __fastcall AccountLinkageTakeOverComponent__SetupTitleImg(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  UISprite_o *titleImg; // x0
  __int64 *v4; // x8

  if ( (byte_438CDDE & 1) == 0 )
  {
    sub_B775C4(&SelectTakeOverTypeComponent_TypeInfo);
    sub_B775C4(&StringLiteral_20056/*"img_txt_a_online_acount"*/);
    sub_B775C4(&StringLiteral_20057/*"img_txt_a_online_acount_overwrite"*/);
    byte_438CDDE = 1;
  }
  if ( (BYTE3(SelectTakeOverTypeComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SelectTakeOverTypeComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectTakeOverTypeComponent_TypeInfo);
  }
  titleImg = this->fields.titleImg;
  if ( !titleImg
    || (!SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride
      ? (v4 = &StringLiteral_20056/*"img_txt_a_online_acount"*/)
      : (v4 = &StringLiteral_20057/*"img_txt_a_online_acount_overwrite"*/),
        UISprite__set_spriteName(titleImg, (System_String_o *)*v4, 0LL),
        (titleImg = this->fields.titleImg) == 0LL) )
  {
    sub_B7769C(titleImg, method);
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

  if ( (byte_438CDD0 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__);
    byte_438CDD0 = 1;
  }
  v3 = Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__;
  if ( (*((_BYTE *)Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B775CC(Method_AccountLinkageTakeOverComponent_StartAccountLinkageTakeOver__);
  v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  AccountLinkageTakeOverComponent__CheckMaintenanceInfo(this, v5);
}


void __fastcall AccountLinkageTakeOverComponent__UserDataStatusCheck(
        AccountLinkageTakeOverComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UILabel_o *detailLabel; // x21
  System_String_o *Instance; // x0
  const MethodInfo *v7; // x1
  UILabel_o *contentLabel; // x21
  PartialMaintenanceMaster_o *v9; // x20
  System_String_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v11; // x2
  System_String_o *friendCode; // x20
  Il2CppObject *v13; // x20
  System_String_o *name; // x21
  UILabel_o *v15; // x20
  UILabel_o *takeOverButtonLabel; // x20
  __int64 *v17; // x8
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x22
  System_String_o *v20; // x0
  UILabel_o *userDataStatusInfoLabel; // x20
  const MethodInfo *v22; // x1
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438CDCF & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageComponent_TypeInfo);
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1711/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON_NO_USER_DATA"*/);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_14996/*"USER_DATA_INFO"*/);
    sub_B775C4(&StringLiteral_1710/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON"*/);
    sub_B775C4(&StringLiteral_9532/*"NO_USER_DATA"*/);
    sub_B775C4(&StringLiteral_1713/*"ACCOUNT_LINKAGE_TAKEOVER_DETAIL_MESSAGE"*/);
    sub_B775C4(&StringLiteral_1705/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/);
    sub_B775C4(&StringLiteral_15013/*"USER_NAME_NOT_SET"*/);
    sub_B775C4(&StringLiteral_11835/*"SELECT_ACCOUNT_LINKAGE_TAKEOVER"*/);
    byte_438CDCF = 1;
  }
  entity = 0LL;
  detailLabel = this->fields.detailLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1713/*"ACCOUNT_LINKAGE_TAKEOVER_DETAIL_MESSAGE"*/, 0LL);
  if ( !detailLabel )
    goto LABEL_51;
  UILabel__set_text(detailLabel, Instance, 0LL);
  contentLabel = this->fields.contentLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1705/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/, 0LL);
  if ( !contentLabel )
    goto LABEL_51;
  UILabel__set_text(contentLabel, Instance, 0LL);
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
    return;
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
  if ( !Instance )
    goto LABEL_51;
  v9 = (PartialMaintenanceMaster_o *)Instance;
  if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow((PartialMaintenanceMaster_o *)Instance, 0LL) )
  {
    AniplexPlusAccountLinkageMaintenanceMessage = PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                    v9,
                                                    0LL);
    AccountLinkageTakeOverComponent__OnPartialMaintenance(
      (AccountLinkageTakeOverComponent_o *)AniplexPlusAccountLinkageMaintenanceMessage,
      AniplexPlusAccountLinkageMaintenanceMessage,
      v11);
    return;
  }
  Instance = (System_String_o *)UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      friendCode = entity->fields.friendCode;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = LocalizationManager__GetNumberFormat_34382772(friendCode, 0LL);
      if ( entity )
      {
        v13 = (Il2CppObject *)Instance;
        if ( entity->fields.genderType == 3 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          name = LocalizationManager__Get((System_String_o *)StringLiteral_15013/*"USER_NAME_NOT_SET"*/, 0LL);
        }
        else
        {
          name = entity->fields.name;
        }
        if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
        }
        Instance = AccountLinkageParams__AddColorCodeBracket(name, v7);
        if ( entity )
        {
          v18 = (Il2CppObject *)Instance;
          v19 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_14996/*"USER_DATA_INFO"*/, 0LL);
          Instance = System_String__Format_44903000(v20, v13, v18, v19, 0LL);
          if ( this->fields.userDataStatusInfoLabel )
          {
            UILabel__set_text(this->fields.userDataStatusInfoLabel, Instance, 0LL);
            userDataStatusInfoLabel = this->fields.userDataStatusInfoLabel;
            Instance = (System_String_o *)AccountLinkageComponent_TypeInfo;
            if ( (BYTE3(AccountLinkageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
            }
            if ( userDataStatusInfoLabel )
            {
              UILabel__set_spacingY(
                userDataStatusInfoLabel,
                AccountLinkageComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_HAS_DATA_SPACING_Y,
                0LL);
              takeOverButtonLabel = this->fields.takeOverButtonLabel;
              v17 = &StringLiteral_1710/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON"*/;
              goto LABEL_47;
            }
          }
        }
      }
    }
LABEL_51:
    sub_B7769C(Instance, v7);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_9532/*"NO_USER_DATA"*/, 0LL);
  if ( !this->fields.userDataStatusInfoLabel )
    goto LABEL_51;
  UILabel__set_text(this->fields.userDataStatusInfoLabel, Instance, 0LL);
  v15 = this->fields.userDataStatusInfoLabel;
  Instance = (System_String_o *)AccountLinkageComponent_TypeInfo;
  if ( (BYTE3(AccountLinkageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
  }
  if ( !v15 )
    goto LABEL_51;
  UILabel__set_spacingY(v15, AccountLinkageComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_NO_DATA_SPACING_Y, 0LL);
  takeOverButtonLabel = this->fields.takeOverButtonLabel;
  v17 = &StringLiteral_1711/*"ACCOUNT_LINKAGE_TAKEOVER_BUTTON_NO_USER_DATA"*/;
LABEL_47:
  Instance = LocalizationManager__Get((System_String_o *)*v17, 0LL);
  if ( !takeOverButtonLabel )
    goto LABEL_51;
  UILabel__set_text(takeOverButtonLabel, Instance, 0LL);
  AccountLinkageTakeOverComponent__SetupTitleImg(this, v22);
  Instance = (System_String_o *)this->fields.titleFsm;
  if ( !Instance )
    goto LABEL_51;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11835/*"SELECT_ACCOUNT_LINKAGE_TAKEOVER"*/, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___AccountLinkageUpdateUserData_b__21_0(
        AccountLinkageTakeOverComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438CDE2 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageTakeOverComponent_OnCloseTakeOverDecide__);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438CDE2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_AccountLinkageTakeOverComponent_OnCloseTakeOverDecide__, 0LL);
  if ( !Instance )
    sub_B7769C(v5, v6);
  CommonUI__CloseAccountLinkageNotificationDialog(Instance, v4, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___ReConfirmAccountLinkage_b__20_0(
        AccountLinkageTakeOverComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_438CDE0 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438CDE0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  CommonUI__CloseAccountLinkageOverrideTakeOverDialog(Instance, 0LL, 0LL);
  if ( isDecide )
    AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(this, v7);
}


void __fastcall AccountLinkageTakeOverComponent___ReConfirmAccountLinkage_b__20_1(
        AccountLinkageTakeOverComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_438CDE1 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438CDE1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  CommonUI__CloseTakeOverDialog(Instance, 0LL, 0LL);
  if ( isDecide )
    AccountLinkageTakeOverComponent__DoAccountLinkageTakeOver(this, v7);
}


void __fastcall AccountLinkageTakeOverComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389F1A & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageTakeOverComponent___c_TypeInfo);
    byte_4389F1A = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(AccountLinkageTakeOverComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AccountLinkageTakeOverComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall AccountLinkageTakeOverComponent___c___ctor(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___NoticeCannotTakeOver_b__19_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4389F1B & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389F1B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___OnCloseTakeOverDecide_b__25_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4389F1E & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4389F1E = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  ManagementManager__reboot(Instance, 0, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___OnPartialMaintenance_b__23_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4389F1D & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389F1D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageTakeOverComponent___c___OnSiteMaintenance_b__22_0(
        AccountLinkageTakeOverComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4389F1C & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389F1C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL);
}