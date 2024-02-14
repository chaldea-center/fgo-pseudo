void __fastcall CharaGraphUtil__PushRequest(
        UserServantEntity_o *selectUserSvt,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserGameEntity_o *SelfUserGame; // x23
  UserServantCollectionMaster_o *limitCountSupport; // x0
  UserServantCollectionMaster_o *v13; // x21
  int64_t userId; // x22
  __int64 v15; // x24
  __int64 v16; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v18; // q1
  UserServantEntity_Fields *p_fields; // x21
  int64_t pushUserSvtId; // x8
  int64_t v21; // x0
  __int128 v22; // q0
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v24; // q0
  CardFavoriteRequest_o *v25; // x20
  int32_t v26; // w27
  int32_t v27; // w28
  int32_t v28; // w21
  bool IsLock; // w23
  char v30; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v34; // w0
  __int64 v35; // x8
  int32_t randomSettingSupport; // w19
  int32_t v37; // [xsp+50h] [xbp-110h]
  int32_t v38; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v40; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v42; // [xsp+70h] [xbp-F0h]
  int64_t v43; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4214252 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, callbackOnEndRequest);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4214252 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !selectUserSvt )
    goto LABEL_22;
  v13 = limitCountSupport;
  userId = SelfUserGame->fields.userId;
  v16 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v16;
  *(_QWORD *)&v48.fields.fakeValue = v15;
  limitCountSupport = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                         v48,
                                                         0LL);
  if ( !v13 )
    goto LABEL_22;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v13, userId, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (UserServantCollectionMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_22;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v18 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  p_fields = &selectUserSvt->fields;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&selectUserSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v47.fields.fakeValue = v18;
  v43 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v46 = v47;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v46, 0LL);
  v22 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v42 = v21;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v22;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v45, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        callbackOnEndRequest,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v24 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  v25 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v24;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v44, 0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(selectUserSvt->fields.imageLimitCount, 0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(selectUserSvt->fields.dispLimitCount, 0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          selectUserSvt->fields.commandCardLimitCount,
          0LL);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(selectUserSvt->fields.iconLimitCount, 0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          selectUserSvt->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(selectUserSvt, 0LL);
  limitCountSupport = (UserServantCollectionMaster_o *)UserServantEntity__IsChoice(selectUserSvt, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_22;
  v30 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                  selectUserSvt->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                       selectUserSvt->fields.randomLimitCount,
                       0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          selectUserSvt->fields.randomLimitCountSupport,
          0LL);
  v35 = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v49.fields.fakeValue = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v34;
  *(_QWORD *)&v49.fields.currentCryptoKey = v35;
  limitCountSupport = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                         v49,
                                                         0LL);
  if ( !v25 )
LABEL_22:
    sub_B0D97C(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v25,
    targetUsrSVtId,
    v38,
    v37,
    v26,
    v27,
    v28,
    favoriteUserSvtId == v40,
    IsLock,
    v30 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v43 != v42,
    0LL);
}


void __fastcall CharaGraphUtil__PushRequestWithConfirmDialog(
        UserServantEntity_o *nextUserServantEntity,
        System_Action_bool__o *onCloseDialog,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *SelfUserGame; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x2
  int64_t seriazlier; // x23
  UserServantEntity_o *v49; // x8
  __int128 v50; // q1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  ServantLimitImageMaster_o *v52; // x21
  UserServantEntity_o *v53; // x28
  __int64 v54; // x23
  void *monitor; // x24
  ServantEntity_o *Entity; // x26
  int32_t v57; // w23
  int32_t v58; // w27
  int32_t v59; // w0
  ServantEntity_o *v60; // x22
  int32_t v61; // w23
  int32_t v62; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v64; // x21
  System_String_o *v65; // x23
  System_Object_array *v66; // x25
  int32_t Rarity; // w28
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x28
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x28
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x26
  int32_t v89; // w0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x20
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x20
  System_String_o *v111; // x20
  System_String_o *v112; // x22
  System_String_o *v113; // x23
  CommonUI_o *Instance; // x24
  __int64 v115; // x1
  __int64 v116; // x2
  CommonConfirmDialog_ClickDelegate_o *v117; // x25
  __int64 v118; // x0
  __int64 v119; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16

  if ( (byte_4214251 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, onCloseDialog);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&object___TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_B0D8A4(&Rarity_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B0D8A4(&Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__, v20);
    sub_B0D8A4(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v22);
    sub_B0D8A4(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v23);
    sub_B0D8A4(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v24);
    sub_B0D8A4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v25);
    byte_4214251 = 1;
  }
  v26 = sub_B0D974(CharaGraphUtil___c__DisplayClass0_0_TypeInfo, onCloseDialog, callbackOnEndRequest);
  CharaGraphUtil___c__DisplayClass0_0___ctor((CharaGraphUtil___c__DisplayClass0_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_59;
  *(_QWORD *)(v26 + 16) = onCloseDialog;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v26 + 16),
    (System_Int32_array **)onCloseDialog,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  *(_QWORD *)(v26 + 24) = nextUserServantEntity;
  v34 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v26 + 24);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v26 + 24),
    (System_Int32_array **)nextUserServantEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  *(_QWORD *)(v26 + 32) = callbackOnEndRequest;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v26 + 32),
    (System_Int32_array **)callbackOnEndRequest,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_59;
  seriazlier = (int64_t)SelfUserGame[1].fields.seriazlier;
  if ( !seriazlier )
  {
LABEL_11:
    CharaGraphUtil__PushRequest((UserServantEntity_o *)*v34, *(NetworkManager_ResultCallbackFunc_o **)(v26 + 32), v47);
    return;
  }
  v49 = (UserServantEntity_o *)*v34;
  if ( !*v34 )
    goto LABEL_59;
  v50 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
  *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v121.fields.fakeValue = v50;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v120 = v121;
  if ( seriazlier == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v120, 0LL) )
    goto LABEL_11;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  v52 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                                                          SelfUserGame,
                                                                                          seriazlier,
                                                                                          (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_59;
  v53 = (UserServantEntity_o *)SelfUserGame;
  monitor = SelfUserGame[1].monitor;
  v54 = *(_QWORD *)&SelfUserGame[1].fields._MasterKind_k__BackingField;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v122.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v122.fields.fakeValue = v54;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                          v122,
                                                                                          0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_59;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                Master_WarQuestSelectionMaster,
                                (int32_t)SelfUserGame,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v53->fields.svtId, 0LL);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                          v53->fields.limitCount,
                                                                                          0LL);
  if ( !v52 )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                                          v52,
                                                                                          v57,
                                                                                          (int32_t)SelfUserGame,
                                                                                          0LL);
  if ( !*v34 )
    goto LABEL_59;
  v58 = (int)SelfUserGame;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*v34)[5], 0LL);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          v59,
                                                                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !*v34 )
    goto LABEL_59;
  v60 = (ServantEntity_o *)SelfUserGame;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                          (*v34)[5],
                                                                                          0LL);
  if ( !*v34 )
    goto LABEL_59;
  v61 = (int)SelfUserGame;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*v34)[6], 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v52, v61, v62, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v66 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(v53, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Rarity__getRarityType(
                                                                                          Rarity,
                                                                                          0LL);
  if ( !v66 )
LABEL_59:
    sub_B0D97C(SelfUserGame);
  v74 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B0D964(
                                                                                            SelfUserGame,
                                                                                            v66->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( !v66->max_length )
    goto LABEL_60;
  v66->m_Items[0] = (Il2CppObject *)v74;
  sub_B0D840((BattleServantConfConponent_o *)v66->m_Items, v74, v68, v69, v70, v71, v72, v73);
  if ( !Entity )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getClassName(
                                                                                          Entity,
                                                                                          0LL);
  v81 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B0D964(
                                                                                            SelfUserGame,
                                                                                            v66->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v66->max_length <= 1 )
    goto LABEL_60;
  v66->m_Items[1] = (Il2CppObject *)v81;
  sub_B0D840((BattleServantConfConponent_o *)&v66->m_Items[1], v81, v75, v76, v77, v78, v79, v80);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getName(
                                                                                          Entity,
                                                                                          v58,
                                                                                          -1,
                                                                                          0LL);
  v88 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B0D964(
                                                                                            SelfUserGame,
                                                                                            v66->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v66->max_length <= 2 )
    goto LABEL_60;
  v66->m_Items[2] = (Il2CppObject *)v88;
  sub_B0D840((BattleServantConfConponent_o *)&v66->m_Items[2], v88, v82, v83, v84, v85, v86, v87);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)*v34;
  if ( !*v34 )
    goto LABEL_59;
  v89 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Rarity__getRarityType(v89, 0LL);
  v96 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B0D964(
                                                                                            SelfUserGame,
                                                                                            v66->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v66->max_length <= 3 )
    goto LABEL_60;
  v66->m_Items[3] = (Il2CppObject *)v96;
  sub_B0D840((BattleServantConfConponent_o *)&v66->m_Items[3], v96, v90, v91, v92, v93, v94, v95);
  if ( !v60 )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getClassName(
                                                                                          v60,
                                                                                          0LL);
  v103 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B0D964(
                                                                                            SelfUserGame,
                                                                                            v66->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v66->max_length <= 4 )
    goto LABEL_60;
  v66->m_Items[4] = (Il2CppObject *)v103;
  sub_B0D840((BattleServantConfConponent_o *)&v66->m_Items[4], v103, v97, v98, v99, v100, v101, v102);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getName(
                                                                                          v60,
                                                                                          ServantLimitCountSealAfter,
                                                                                          -1,
                                                                                          0LL);
  v110 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B0D964(
                                                                                            SelfUserGame,
                                                                                            v66->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_61:
      v119 = sub_B0D99C(SelfUserGame);
      sub_B0D948(v119, 0LL);
    }
  }
  if ( v66->max_length <= 5 )
  {
LABEL_60:
    v118 = sub_B0D9A8(SelfUserGame);
    sub_B0D948(v118, 0LL);
  }
  v66->m_Items[5] = (Il2CppObject *)v110;
  sub_B0D840((BattleServantConfConponent_o *)&v66->m_Items[5], v110, v104, v105, v106, v107, v108, v109);
  v111 = System_String__Format_43928628(v65, v66, 0LL);
  v112 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v113 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v117 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v115, v116);
  CommonConfirmDialog_ClickDelegate___ctor(
    v117,
    (Il2CppObject *)v26,
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
  CommonUI__OpenConfirmDialog_17016196(
    Instance,
    v64,
    v111,
    v112,
    v113,
    v117,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphUtil___c__DisplayClass0_0___PushRequestWithConfirmDialog_g__OnCloseDialog_0(
        CharaGraphUtil___c__DisplayClass0_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_4211E03 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__, v6);
    sub_B0D8A4(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo, v7);
    byte_4211E03 = 1;
  }
  v8 = sub_B0D974(CharaGraphUtil___c__DisplayClass0_1_TypeInfo, isDecide, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_B0D840(v8 + 24, this),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v8,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v9);
  }
  CommonUI__CloseConfirmDialog_17017160(Instance, v13, 0LL);
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
  if ( (byte_4211E04 & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_B0D8A4(&Method_ActionExtensions_Call_bool___, method);
    byte_4211E04 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v2->fields.isDecide,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
  if ( v2->fields.isDecide )
  {
    v4 = v2->fields.CS___8__locals1;
    if ( v4 )
    {
      CharaGraphUtil__PushRequest(v4->fields.nextUserServantEntity, v4->fields.callbackOnEndRequest, 0LL);
      return;
    }
LABEL_8:
    sub_B0D97C(this);
  }
}