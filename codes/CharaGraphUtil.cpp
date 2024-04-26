void __fastcall CharaGraphUtil__PushRequest(
        UserServantEntity_o *selectUserSvt,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x23
  UserServantCollectionMaster_o *limitCountSupport; // x0
  __int64 v7; // x1
  UserServantCollectionMaster_o *v8; // x21
  int64_t userId; // x22
  __int64 v10; // x24
  __int64 v11; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v13; // q1
  UserServantEntity_Fields *p_fields; // x21
  int64_t pushUserSvtId; // x8
  int64_t v16; // x0
  __int128 v17; // q0
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v19; // q0
  CardFavoriteRequest_o *v20; // x20
  int32_t v21; // w27
  int32_t v22; // w28
  int32_t v23; // w21
  bool IsLock; // w23
  char v25; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v29; // w0
  __int64 v30; // x8
  int32_t randomSettingSupport; // w19
  int32_t v32; // [xsp+50h] [xbp-110h]
  int32_t v33; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v35; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v37; // [xsp+70h] [xbp-F0h]
  int64_t v38; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4354A8C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4354A8C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !selectUserSvt )
    goto LABEL_22;
  v8 = limitCountSupport;
  userId = SelfUserGame->fields.userId;
  v11 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v11;
  *(_QWORD *)&v43.fields.fakeValue = v10;
  limitCountSupport = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                         v43,
                                                         0LL);
  if ( !v8 )
    goto LABEL_22;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, userId, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (UserServantCollectionMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_22;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v13 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  p_fields = &selectUserSvt->fields;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&selectUserSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v13;
  v38 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v41 = v42;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v41, 0LL);
  v17 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v37 = v16;
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v40.fields.fakeValue = v17;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v40, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        callbackOnEndRequest,
                                        (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v19 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  v20 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v39.fields.fakeValue = v19;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v39, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(selectUserSvt->fields.imageLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(selectUserSvt->fields.dispLimitCount, 0LL);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          selectUserSvt->fields.commandCardLimitCount,
          0LL);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(selectUserSvt->fields.iconLimitCount, 0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          selectUserSvt->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(selectUserSvt, 0LL);
  limitCountSupport = (UserServantCollectionMaster_o *)UserServantEntity__IsChoice(selectUserSvt, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_22;
  v25 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                  selectUserSvt->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                       selectUserSvt->fields.randomLimitCount,
                       0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          selectUserSvt->fields.randomLimitCountSupport,
          0LL);
  v30 = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v44.fields.fakeValue = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v29;
  *(_QWORD *)&v44.fields.currentCryptoKey = v30;
  limitCountSupport = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                         v44,
                                                         0LL);
  if ( !v20 )
LABEL_22:
    sub_B7076C(limitCountSupport, v7);
  CardFavoriteRequest__beginRequest(
    v20,
    targetUsrSVtId,
    v33,
    v32,
    v21,
    v22,
    v23,
    favoriteUserSvtId == v35,
    IsLock,
    v25 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v38 != v37,
    0LL);
}


void __fastcall CharaGraphUtil__PushRequestWithConfirmDialog(
        UserServantEntity_o *nextUserServantEntity,
        System_Action_bool__o *onCloseDialog,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
  __int64 v7; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *SelfUserGame; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2
  int64_t seriazlier; // x23
  UserServantEntity_o *v31; // x8
  __int128 v32; // q1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  ServantLimitImageMaster_o *v34; // x21
  UserServantEntity_o *v35; // x28
  __int64 v36; // x23
  void *monitor; // x24
  ServantEntity_o *Entity; // x26
  int32_t v39; // w23
  int32_t v40; // w27
  int32_t v41; // w0
  ServantEntity_o *v42; // x22
  int32_t v43; // w23
  int32_t v44; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v46; // x21
  System_String_o *v47; // x23
  System_Object_array *v48; // x25
  int32_t Rarity; // w28
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x28
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x28
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x26
  int32_t v71; // w0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x20
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x20
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x20
  System_String_o *v93; // x20
  System_String_o *v94; // x22
  System_String_o *v95; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v97; // x25
  __int64 v98; // x0
  __int64 v99; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16

  if ( (byte_4354A8B & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Rarity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__);
    sub_B70694(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
    sub_B70694(&StringLiteral_12167/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B70694(&StringLiteral_12165/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B70694(&StringLiteral_12166/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B70694(&StringLiteral_12168/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4354A8B = 1;
  }
  v7 = sub_B70764(CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
  CharaGraphUtil___c__DisplayClass0_0___ctor((CharaGraphUtil___c__DisplayClass0_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_59;
  *(_QWORD *)(v7 + 16) = onCloseDialog;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 16),
    (System_Int32_array **)onCloseDialog,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  *(_QWORD *)(v7 + 24) = nextUserServantEntity;
  v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v7 + 24);
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 24),
    (System_Int32_array **)nextUserServantEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)(v7 + 32) = callbackOnEndRequest;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 32),
    (System_Int32_array **)callbackOnEndRequest,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_59;
  seriazlier = (int64_t)SelfUserGame[1].fields.seriazlier;
  if ( !seriazlier )
  {
LABEL_11:
    CharaGraphUtil__PushRequest((UserServantEntity_o *)*v16, *(NetworkManager_ResultCallbackFunc_o **)(v7 + 32), v29);
    return;
  }
  v31 = (UserServantEntity_o *)*v16;
  if ( !*v16 )
    goto LABEL_59;
  v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
  *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v101.fields.fakeValue = v32;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v100 = v101;
  if ( seriazlier == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v100, 0LL) )
    goto LABEL_11;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
  v34 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                                                          SelfUserGame,
                                                                                          seriazlier,
                                                                                          (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_59;
  v35 = (UserServantEntity_o *)SelfUserGame;
  monitor = SelfUserGame[1].monitor;
  v36 = *(_QWORD *)&SelfUserGame[1].fields._MasterKind_k__BackingField;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v102.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v102.fields.fakeValue = v36;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                                                          v102,
                                                                                          0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_59;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                Master_WarQuestSelectionMaster,
                                (int32_t)SelfUserGame,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v35->fields.svtId, 0LL);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                                                          v35->fields.limitCount,
                                                                                          0LL);
  if ( !v34 )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                                          v34,
                                                                                          v39,
                                                                                          (int32_t)SelfUserGame,
                                                                                          0LL);
  if ( !*v16 )
    goto LABEL_59;
  v40 = (int)SelfUserGame;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*v16)[5], 0LL);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          v41,
                                                                                          (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !*v16 )
    goto LABEL_59;
  v42 = (ServantEntity_o *)SelfUserGame;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                                                          (*v16)[5],
                                                                                          0LL);
  if ( !*v16 )
    goto LABEL_59;
  v43 = (int)SelfUserGame;
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*v16)[6], 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v34, v43, v44, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12168/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12167/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v48 = (System_Object_array *)sub_B706AC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(v35, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Rarity__getRarityType(
                                                                                          Rarity,
                                                                                          0LL);
  if ( !v48 )
LABEL_59:
    sub_B7076C(SelfUserGame, v9);
  v56 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B70754(
                                                                                            SelfUserGame,
                                                                                            v48->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( !v48->max_length )
    goto LABEL_60;
  v48->m_Items[0] = (Il2CppObject *)v56;
  sub_B70630((BattleServantConfConponent_o *)v48->m_Items, v56, v50, v51, v52, v53, v54, v55);
  if ( !Entity )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getClassName(
                                                                                          Entity,
                                                                                          0LL);
  v63 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B70754(
                                                                                            SelfUserGame,
                                                                                            v48->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v48->max_length <= 1 )
    goto LABEL_60;
  v48->m_Items[1] = (Il2CppObject *)v63;
  sub_B70630((BattleServantConfConponent_o *)&v48->m_Items[1], v63, v57, v58, v59, v60, v61, v62);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getName(
                                                                                          Entity,
                                                                                          v40,
                                                                                          -1,
                                                                                          0LL);
  v70 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B70754(
                                                                                            SelfUserGame,
                                                                                            v48->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v48->max_length <= 2 )
    goto LABEL_60;
  v48->m_Items[2] = (Il2CppObject *)v70;
  sub_B70630((BattleServantConfConponent_o *)&v48->m_Items[2], v70, v64, v65, v66, v67, v68, v69);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)*v16;
  if ( !*v16 )
    goto LABEL_59;
  v71 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Rarity__getRarityType(v71, 0LL);
  v78 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B70754(
                                                                                            SelfUserGame,
                                                                                            v48->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v48->max_length <= 3 )
    goto LABEL_60;
  v48->m_Items[3] = (Il2CppObject *)v78;
  sub_B70630((BattleServantConfConponent_o *)&v48->m_Items[3], v78, v72, v73, v74, v75, v76, v77);
  if ( !v42 )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getClassName(
                                                                                          v42,
                                                                                          0LL);
  v85 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B70754(
                                                                                            SelfUserGame,
                                                                                            v48->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v48->max_length <= 4 )
    goto LABEL_60;
  v48->m_Items[4] = (Il2CppObject *)v85;
  sub_B70630((BattleServantConfConponent_o *)&v48->m_Items[4], v85, v79, v80, v81, v82, v83, v84);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getName(
                                                                                          v42,
                                                                                          ServantLimitCountSealAfter,
                                                                                          -1,
                                                                                          0LL);
  v92 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B70754(
                                                                                            SelfUserGame,
                                                                                            v48->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_61:
      v99 = sub_B7078C(SelfUserGame);
      sub_B70738(v99, 0LL);
    }
  }
  if ( v48->max_length <= 5 )
  {
LABEL_60:
    v98 = sub_B70798(SelfUserGame);
    sub_B70738(v98, 0LL);
  }
  v48->m_Items[5] = (Il2CppObject *)v92;
  sub_B70630((BattleServantConfConponent_o *)&v48->m_Items[5], v92, v86, v87, v88, v89, v90, v91);
  v93 = System_String__Format_44836892(v47, v48, 0LL);
  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12166/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v97 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v97,
    (Il2CppObject *)v7,
    Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__,
    0LL);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_59;
  CommonUI__OpenConfirmDialog_17903560(
    Instance,
    v46,
    v93,
    v94,
    v95,
    v97,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall CharaGraphUtil___c__DisplayClass0_0___ctor(
        CharaGraphUtil___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphUtil___c__DisplayClass0_0___PushRequestWithConfirmDialog_g__OnCloseDialog_0(
        CharaGraphUtil___c__DisplayClass0_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v9; // x20

  if ( (byte_434ED77 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__);
    sub_B70694(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
    byte_434ED77 = 1;
  }
  v5 = sub_B70764(CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_B70630(v5 + 24),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_17904524(Instance, v9, 0LL);
}


void __fastcall CharaGraphUtil___c__DisplayClass0_1___ctor(
        CharaGraphUtil___c__DisplayClass0_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphUtil___c__DisplayClass0_1___PushRequestWithConfirmDialog_b__1(
        CharaGraphUtil___c__DisplayClass0_1_o *this,
        const MethodInfo *method)
{
  CharaGraphUtil___c__DisplayClass0_1_o *v2; // x19
  struct CharaGraphUtil___c__DisplayClass0_0_o *CS___8__locals1; // x8
  struct CharaGraphUtil___c__DisplayClass0_0_o *v4; // x8

  v2 = this;
  if ( (byte_434ED78 & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_B70694(&Method_ActionExtensions_Call_bool___);
    byte_434ED78 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v2->fields.isDecide,
    (const MethodInfo_2BFC23C *)Method_ActionExtensions_Call_bool___);
  if ( v2->fields.isDecide )
  {
    v4 = v2->fields.CS___8__locals1;
    if ( v4 )
    {
      CharaGraphUtil__PushRequest(v4->fields.nextUserServantEntity, v4->fields.callbackOnEndRequest, 0LL);
      return;
    }
LABEL_8:
    sub_B7076C(this, method);
  }
}