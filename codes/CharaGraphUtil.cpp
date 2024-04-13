void __fastcall CharaGraphUtil__PushRequest(
        UserServantEntity_o *selectUserSvt,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UserGameEntity_o *SelfUserGame; // x23
  UserServantCollectionMaster_o *limitCountSupport; // x0
  __int64 v26; // x1
  UserServantCollectionMaster_o *v27; // x21
  int64_t userId; // x22
  __int64 v29; // x24
  __int64 v30; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v32; // q1
  UserServantEntity_Fields *p_fields; // x21
  int64_t pushUserSvtId; // x8
  int64_t v35; // x0
  __int128 v36; // q0
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v38; // q0
  CardFavoriteRequest_o *v39; // x20
  int32_t v40; // w27
  int32_t v41; // w28
  int32_t v42; // w21
  bool IsLock; // w23
  char v44; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v48; // w0
  __int64 v49; // x8
  int32_t randomSettingSupport; // w19
  int32_t v51; // [xsp+50h] [xbp-110h]
  int32_t v52; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v54; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v56; // [xsp+70h] [xbp-F0h]
  int64_t v57; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_42E9708 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_UserServantCollectionMaster___,
      (_DWORD)callbackOnEndRequest,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    byte_42E9708 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !selectUserSvt )
    goto LABEL_22;
  v27 = limitCountSupport;
  userId = SelfUserGame->fields.userId;
  v30 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v30;
  *(_QWORD *)&v62.fields.fakeValue = v29;
  limitCountSupport = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                         v62,
                                                         0LL);
  if ( !v27 )
    goto LABEL_22;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v27, userId, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (UserServantCollectionMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_22;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v32 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  p_fields = &selectUserSvt->fields;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&selectUserSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v32;
  v57 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v60 = v61;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v60, 0LL);
  v36 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v56 = v35;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v36;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v59, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        callbackOnEndRequest,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v38 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  v39 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v38;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v58, 0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(selectUserSvt->fields.imageLimitCount, 0LL);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(selectUserSvt->fields.dispLimitCount, 0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          selectUserSvt->fields.commandCardLimitCount,
          0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(selectUserSvt->fields.iconLimitCount, 0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          selectUserSvt->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(selectUserSvt, 0LL);
  limitCountSupport = (UserServantCollectionMaster_o *)UserServantEntity__IsChoice(selectUserSvt, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_22;
  v44 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  selectUserSvt->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       selectUserSvt->fields.randomLimitCount,
                       0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          selectUserSvt->fields.randomLimitCountSupport,
          0LL);
  v49 = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v63.fields.fakeValue = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v48;
  *(_QWORD *)&v63.fields.currentCryptoKey = v49;
  limitCountSupport = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                         v63,
                                                         0LL);
  if ( !v39 )
LABEL_22:
    sub_B5D69C(limitCountSupport, v26);
  CardFavoriteRequest__beginRequest(
    v39,
    targetUsrSVtId,
    v52,
    v51,
    v40,
    v41,
    v42,
    favoriteUserSvtId == v54,
    IsLock,
    v44 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v57 != v56,
    0LL);
}


void __fastcall CharaGraphUtil__PushRequestWithConfirmDialog(
        UserServantEntity_o *nextUserServantEntity,
        System_Action_bool__o *onCloseDialog,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  __int64 v64; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *SelfUserGame; // x0
  __int64 v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v73; // x20
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  const MethodInfo *v86; // x2
  int64_t seriazlier; // x23
  UserServantEntity_o *v88; // x8
  __int128 v89; // q1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  ServantLimitImageMaster_o *v91; // x21
  UserServantEntity_o *v92; // x28
  __int64 v93; // x23
  void *monitor; // x24
  ServantEntity_o *Entity; // x26
  int32_t v96; // w23
  int32_t v97; // w27
  int32_t v98; // w0
  ServantEntity_o *v99; // x22
  int32_t v100; // w23
  int32_t v101; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v103; // x21
  System_String_o *v104; // x23
  System_Object_array *v105; // x25
  int32_t Rarity; // w28
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x28
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x28
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x26
  int32_t v128; // w0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x20
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x20
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Int32_array **v149; // x20
  System_String_o *v150; // x20
  System_String_o *v151; // x22
  System_String_o *v152; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v154; // x25
  __int64 v155; // x0
  __int64 v156; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16

  if ( (byte_42E9707 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)onCloseDialog, (_DWORD)callbackOnEndRequest, method);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&object___TypeInfo, v31, v32, v33);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Rarity_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v43, v44, v45);
    sub_B5D5C4(
      &Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__,
      v46,
      v47,
      v48);
    sub_B5D5C4(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v61, v62, v63);
    byte_42E9707 = 1;
  }
  v64 = sub_B5D694(CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
  CharaGraphUtil___c__DisplayClass0_0___ctor((CharaGraphUtil___c__DisplayClass0_0_o *)v64, 0LL);
  if ( !v64 )
    goto LABEL_59;
  *(_QWORD *)(v64 + 16) = onCloseDialog;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v64 + 16),
    (System_Int32_array **)onCloseDialog,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  *(_QWORD *)(v64 + 24) = nextUserServantEntity;
  v73 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v64 + 24);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v64 + 24),
    (System_Int32_array **)nextUserServantEntity,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  *(_QWORD *)(v64 + 32) = callbackOnEndRequest;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v64 + 32),
    (System_Int32_array **)callbackOnEndRequest,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_59;
  seriazlier = (int64_t)SelfUserGame[1].fields.seriazlier;
  if ( !seriazlier )
  {
LABEL_11:
    CharaGraphUtil__PushRequest((UserServantEntity_o *)*v73, *(NetworkManager_ResultCallbackFunc_o **)(v64 + 32), v86);
    return;
  }
  v88 = (UserServantEntity_o *)*v73;
  if ( !*v73 )
    goto LABEL_59;
  v89 = *(_OWORD *)&v88->fields.id.fields.fakeValue;
  *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&v88->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v158.fields.fakeValue = v89;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v157 = v158;
  if ( seriazlier == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v157, 0LL) )
    goto LABEL_11;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v91 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                                                          SelfUserGame,
                                                                                          seriazlier,
                                                                                          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_59;
  v92 = (UserServantEntity_o *)SelfUserGame;
  monitor = SelfUserGame[1].monitor;
  v93 = *(_QWORD *)&SelfUserGame[1].fields._MasterKind_k__BackingField;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v159.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v159.fields.fakeValue = v93;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                          v159,
                                                                                          0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_59;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                Master_WarQuestSelectionMaster,
                                (int32_t)SelfUserGame,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v92->fields.svtId, 0LL);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                          v92->fields.limitCount,
                                                                                          0LL);
  if ( !v91 )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                                          v91,
                                                                                          v96,
                                                                                          (int32_t)SelfUserGame,
                                                                                          0LL);
  if ( !*v73 )
    goto LABEL_59;
  v97 = (int)SelfUserGame;
  v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*v73)[5], 0LL);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          v98,
                                                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !*v73 )
    goto LABEL_59;
  v99 = (ServantEntity_o *)SelfUserGame;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                          (*v73)[5],
                                                                                          0LL);
  if ( !*v73 )
    goto LABEL_59;
  v100 = (int)SelfUserGame;
  v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*v73)[6], 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v91, v100, v101, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v103 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v105 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(v92, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Rarity__getRarityType(
                                                                                          Rarity,
                                                                                          0LL);
  if ( !v105 )
LABEL_59:
    sub_B5D69C(SelfUserGame, v66);
  v113 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B5D684(
                                                                                            SelfUserGame,
                                                                                            v105->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( !v105->max_length )
    goto LABEL_60;
  v105->m_Items[0] = (Il2CppObject *)v113;
  sub_B5D560((BattleServantConfConponent_o *)v105->m_Items, v113, v107, v108, v109, v110, v111, v112);
  if ( !Entity )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getClassName(
                                                                                          Entity,
                                                                                          0LL);
  v120 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B5D684(
                                                                                            SelfUserGame,
                                                                                            v105->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v105->max_length <= 1 )
    goto LABEL_60;
  v105->m_Items[1] = (Il2CppObject *)v120;
  sub_B5D560((BattleServantConfConponent_o *)&v105->m_Items[1], v120, v114, v115, v116, v117, v118, v119);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getName(
                                                                                          Entity,
                                                                                          v97,
                                                                                          -1,
                                                                                          0LL);
  v127 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B5D684(
                                                                                            SelfUserGame,
                                                                                            v105->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v105->max_length <= 2 )
    goto LABEL_60;
  v105->m_Items[2] = (Il2CppObject *)v127;
  sub_B5D560((BattleServantConfConponent_o *)&v105->m_Items[2], v127, v121, v122, v123, v124, v125, v126);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)*v73;
  if ( !*v73 )
    goto LABEL_59;
  v128 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Rarity__getRarityType(v128, 0LL);
  v135 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B5D684(
                                                                                            SelfUserGame,
                                                                                            v105->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v105->max_length <= 3 )
    goto LABEL_60;
  v105->m_Items[3] = (Il2CppObject *)v135;
  sub_B5D560((BattleServantConfConponent_o *)&v105->m_Items[3], v135, v129, v130, v131, v132, v133, v134);
  if ( !v99 )
    goto LABEL_59;
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getClassName(
                                                                                          v99,
                                                                                          0LL);
  v142 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B5D684(
                                                                                            SelfUserGame,
                                                                                            v105->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_61;
  }
  if ( v105->max_length <= 4 )
    goto LABEL_60;
  v105->m_Items[4] = (Il2CppObject *)v142;
  sub_B5D560((BattleServantConfConponent_o *)&v105->m_Items[4], v142, v136, v137, v138, v139, v140, v141);
  SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantEntity__getName(
                                                                                          v99,
                                                                                          ServantLimitCountSealAfter,
                                                                                          -1,
                                                                                          0LL);
  v149 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B5D684(
                                                                                            SelfUserGame,
                                                                                            v105->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_61:
      v156 = sub_B5D6BC(SelfUserGame);
      sub_B5D668(v156, 0LL);
    }
  }
  if ( v105->max_length <= 5 )
  {
LABEL_60:
    v155 = sub_B5D6C8(SelfUserGame);
    sub_B5D668(v155, 0LL);
  }
  v105->m_Items[5] = (Il2CppObject *)v149;
  sub_B5D560((BattleServantConfConponent_o *)&v105->m_Items[5], v149, v143, v144, v145, v146, v147, v148);
  v150 = System_String__Format_44656512(v104, v105, 0LL);
  v151 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v152 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v154 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v154,
    (Il2CppObject *)v64,
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
  CommonUI__OpenConfirmDialog_18201384(
    Instance,
    v103,
    v150,
    v151,
    v152,
    v154,
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v19; // x20

  if ( (byte_42E5E5C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__, v9, v10, v11);
    sub_B5D5C4(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo, v12, v13, v14);
    byte_42E5E5C = 1;
  }
  v15 = sub_B5D694(CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 24) = this,
        sub_B5D560(v15 + 24),
        *(_BYTE *)(v15 + 16) = isDecide,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v15,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v16, v17);
  }
  CommonUI__CloseConfirmDialog_18202348(Instance, v19, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  CharaGraphUtil___c__DisplayClass0_1_o *v4; // x19
  struct CharaGraphUtil___c__DisplayClass0_0_o *CS___8__locals1; // x8
  struct CharaGraphUtil___c__DisplayClass0_0_o *v6; // x8

  v4 = this;
  if ( (byte_42E5E5D & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_B5D5C4(
                                                      &Method_ActionExtensions_Call_bool___,
                                                      (_DWORD)method,
                                                      v2,
                                                      v3);
    byte_42E5E5D = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v4->fields.isDecide,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  if ( v4->fields.isDecide )
  {
    v6 = v4->fields.CS___8__locals1;
    if ( v6 )
    {
      CharaGraphUtil__PushRequest(v6->fields.nextUserServantEntity, v6->fields.callbackOnEndRequest, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(this, method);
  }
}