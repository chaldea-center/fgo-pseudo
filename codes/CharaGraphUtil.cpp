void __fastcall CharaGraphUtil__PushRequest(
        UserServantEntity_o *selectUserSvt,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
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
  UserGameEntity_o *SelfUserGame; // x23
  Il2CppObject *limitCountSupport; // x0
  __int64 v20; // x1
  UserServantCollectionMaster_o *v21; // x21
  int64_t userId; // x22
  __int64 v23; // x24
  __int64 v24; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v26; // x1
  __int128 v27; // q0
  int64_t pushUserSvtId; // x8
  UserServantEntity_Fields *p_fields; // x21
  int64_t v30; // x0
  __int128 v31; // q1
  __int64 v32; // x1
  Il2CppObject *Request_object; // x0
  __int128 v34; // q1
  CardFavoriteRequest_o *v35; // x20
  int32_t v36; // w26
  int32_t v37; // w27
  int32_t v38; // w28
  int32_t v39; // w29
  bool IsLock; // w21
  char v41; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v45; // w0
  __int64 v46; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v50; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v52; // [xsp+70h] [xbp-F0h]
  int64_t v53; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4B155E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, callbackOnEndRequest, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    byte_4B155E5 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  limitCountSupport = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !selectUserSvt )
    goto LABEL_18;
  v21 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = SelfUserGame->fields.userId;
  v24 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v58.fields.currentCryptoKey = v24;
  *(_QWORD *)&v58.fields.fakeValue = v23;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v58, 0LL);
  if ( !v21 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v21, userId, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v27 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  p_fields = &selectUserSvt->fields;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&selectUserSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v27;
  v53 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
  v56 = v57;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v56, 0LL);
  v31 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v52 = v30;
  *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v55.fields.fakeValue = v31;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v55, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
  Request_object = NetworkManager__getRequest_object_(
                     callbackOnEndRequest,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v34 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  v35 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v34;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v54, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      selectUserSvt->fields.imageLimitCount,
                      0LL);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(selectUserSvt->fields.dispLimitCount, 0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          selectUserSvt->fields.commandCardLimitCount,
          0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(selectUserSvt->fields.iconLimitCount, 0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          selectUserSvt->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(selectUserSvt, 0LL);
  limitCountSupport = (Il2CppObject *)UserServantEntity__IsChoice(selectUserSvt, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v41 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  selectUserSvt->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       selectUserSvt->fields.randomLimitCount,
                       0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          selectUserSvt->fields.randomLimitCountSupport,
          0LL);
  v46 = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v59.fields.fakeValue = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v45;
  *(_QWORD *)&v59.fields.currentCryptoKey = v46;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v59, 0LL);
  if ( !v35 )
LABEL_18:
    sub_1BCAA3C(limitCountSupport, v20);
  CardFavoriteRequest__beginRequest(
    v35,
    targetUsrSVtId,
    imageLimitCount,
    v36,
    v37,
    v38,
    v39,
    favoriteUserSvtId == v50,
    IsLock,
    v41 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v53 != v52,
    0LL);
}


void __fastcall CharaGraphUtil__PushRequestWithConfirmDialog(
        UserServantEntity_o *nextUserServantEntity,
        System_Action_bool__o *onCloseDialog,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
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
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x19
  int64_t SelfUserGame; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v54; // x20
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  const MethodInfo *v67; // x2
  int64_t v68; // x23
  UserServantEntity_o *v69; // x8
  __int128 v70; // q1
  __int64 v71; // x1
  Il2CppObject *Master_object; // x21
  Il2CppObject *v73; // x22
  int64_t v74; // x26
  __int64 v75; // x23
  __int64 v76; // x24
  ServantEntity_o *v77; // x27
  int32_t v78; // w0
  __int64 v79; // x1
  Il2CppObject *Entity; // x25
  System_String_o *v81; // x21
  System_String_o *v82; // x23
  System_Object_array *v83; // x24
  __int64 v84; // x1
  int32_t Rarity; // w28
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x28
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x27
  int32_t v100; // w0
  __int64 v101; // x8
  int32_t v102; // w26
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x26
  int32_t v110; // w0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x26
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x25
  UserServantEntity_o *v125; // x8
  int32_t v126; // w20
  int32_t v127; // w0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  int64_t v134; // x20
  System_String_o *v135; // x20
  System_String_o *v136; // x22
  System_String_o *v137; // x23
  Il2CppObject *Instance; // x24
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  CommonConfirmDialog_ClickDelegate_o *v142; // x25
  __int64 v143; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16

  if ( (byte_4B155E4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, onCloseDialog, callbackOnEndRequest);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&object___TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28);
    sub_1BCA7E0(&Rarity_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31, v32);
    sub_1BCA7E0(
      &Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__,
      v33,
      v34);
    sub_1BCA7E0(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v43, v44);
    byte_4B155E4 = 1;
  }
  v45 = sub_1BCAA2C(CharaGraphUtil___c__DisplayClass0_0_TypeInfo, onCloseDialog, callbackOnEndRequest, method);
  System_Object___ctor((Il2CppObject *)v45, 0LL);
  if ( !v45 )
    goto LABEL_53;
  *(_QWORD *)(v45 + 16) = onCloseDialog;
  sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 16), (int64_t)onCloseDialog, v48, v49, v50, v51, v52, v53);
  *(_QWORD *)(v45 + 24) = nextUserServantEntity;
  v54 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v45 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 24), (int64_t)nextUserServantEntity, v55, v56, v57, v58, v59, v60);
  *(_QWORD *)(v45 + 32) = callbackOnEndRequest;
  sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 32), (int64_t)callbackOnEndRequest, v61, v62, v63, v64, v65, v66);
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_53;
  v68 = *(_QWORD *)(SelfUserGame + 120);
  if ( !v68 )
  {
LABEL_10:
    CharaGraphUtil__PushRequest((UserServantEntity_o *)*v54, *(NetworkManager_ResultCallbackFunc_o **)(v45 + 32), v67);
    return;
  }
  v69 = (UserServantEntity_o *)*v54;
  if ( !*v54 )
    goto LABEL_53;
  v70 = *(_OWORD *)&v69->fields.id.fields.fakeValue;
  *(_OWORD *)&v145.fields.currentCryptoKey = *(_OWORD *)&v69->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v145.fields.fakeValue = v70;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47);
  v144 = v145;
  if ( v68 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v144, 0LL) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v71);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v73 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_53;
  SelfUserGame = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                            v68,
                            (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_53;
  v74 = SelfUserGame;
  v76 = *(_QWORD *)(SelfUserGame + 80);
  v75 = *(_QWORD *)(SelfUserGame + 88);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
  *(_QWORD *)&v146.fields.currentCryptoKey = v76;
  *(_QWORD *)&v146.fields.fakeValue = v75;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v146, 0LL);
  if ( !Master_object )
    goto LABEL_53;
  SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            SelfUserGame,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !*v54 )
    goto LABEL_53;
  v77 = (ServantEntity_o *)SelfUserGame;
  v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*v54)[5], 0LL);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v78,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79);
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v83 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v74, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v84);
  SelfUserGame = (int64_t)Rarity__getRarityType(Rarity, 0LL);
  if ( !v83 )
LABEL_53:
    sub_1BCAA3C(SelfUserGame, v47);
  v92 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( !v83->max_length )
    goto LABEL_54;
  v83->m_Items[0] = (Il2CppObject *)v92;
  sub_1BCA784((PartyOrganizationUtility_o *)v83->m_Items, v92, v86, v87, v88, v89, v90, v91);
  if ( !v77 )
    goto LABEL_53;
  SelfUserGame = (int64_t)ServantEntity__getClassName(v77, 0LL);
  v99 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v83->max_length <= 1 )
    goto LABEL_54;
  v83->m_Items[1] = (Il2CppObject *)v99;
  sub_1BCA784((PartyOrganizationUtility_o *)&v83->m_Items[1], v99, v93, v94, v95, v96, v97, v98);
  v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v74 + 80),
           0LL);
  v101 = *(_QWORD *)(v74 + 96);
  *(_QWORD *)&v147.fields.fakeValue = *(_QWORD *)(v74 + 104);
  v102 = v100;
  *(_QWORD *)&v147.fields.currentCryptoKey = v101;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v147, 0LL);
  if ( !v73 )
    goto LABEL_53;
  SelfUserGame = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)v73,
                            v102,
                            SelfUserGame,
                            0LL);
  v109 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v83->max_length <= 2 )
    goto LABEL_54;
  v83->m_Items[2] = (Il2CppObject *)v109;
  sub_1BCA784((PartyOrganizationUtility_o *)&v83->m_Items[2], v109, v103, v104, v105, v106, v107, v108);
  SelfUserGame = (int64_t)*v54;
  if ( !*v54 )
    goto LABEL_53;
  v110 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (int64_t)Rarity__getRarityType(v110, 0LL);
  v117 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v83->max_length <= 3 )
    goto LABEL_54;
  v83->m_Items[3] = (Il2CppObject *)v117;
  sub_1BCA784((PartyOrganizationUtility_o *)&v83->m_Items[3], v117, v111, v112, v113, v114, v115, v116);
  if ( !Entity )
    goto LABEL_53;
  SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)Entity, 0LL);
  v124 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v83->max_length <= 4 )
    goto LABEL_54;
  v83->m_Items[4] = (Il2CppObject *)v124;
  sub_1BCA784((PartyOrganizationUtility_o *)&v83->m_Items[4], v124, v118, v119, v120, v121, v122, v123);
  if ( !*v54 )
    goto LABEL_53;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*v54)[5], 0LL);
  v125 = (UserServantEntity_o *)*v54;
  if ( !*v54 )
    goto LABEL_53;
  v126 = SelfUserGame;
  v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v125->fields.limitCount, 0LL);
  SelfUserGame = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)v73,
                            v126,
                            v127,
                            0LL);
  v134 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BCA91C(SelfUserGame, v83->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_55:
      v143 = sub_1BCAA60(SelfUserGame);
      sub_1BCA908(v143, 0LL);
    }
  }
  if ( v83->max_length <= 5 )
LABEL_54:
    sub_1BCAA44(SelfUserGame, v47);
  v83->m_Items[5] = (Il2CppObject *)v134;
  sub_1BCA784((PartyOrganizationUtility_o *)&v83->m_Items[5], v134, v128, v129, v130, v131, v132, v133);
  v135 = System_String__Format_62415728(v82, v83, 0LL);
  v136 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v137 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v142 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v139,
                                                  v140,
                                                  v141);
  CommonConfirmDialog_ClickDelegate___ctor(
    v142,
    (Il2CppObject *)v45,
    Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__,
    0LL);
  SelfUserGame = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v47);
  if ( !Instance )
    goto LABEL_53;
  CommonUI__OpenConfirmDialog_30766228(
    (CommonUI_o *)Instance,
    v81,
    v135,
    v136,
    v137,
    v142,
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4B155E6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__, v8, v9);
    sub_1BCA7E0(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo, v10, v11);
    byte_4B155E6 = 1;
  }
  v12 = sub_1BCAA2C(CharaGraphUtil___c__DisplayClass0_1_TypeInfo, isDecide, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_BYTE *)(v12 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v12,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v25, 0LL);
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
  __int64 v2; // x2
  CharaGraphUtil___c__DisplayClass0_1_o *v3; // x19
  struct CharaGraphUtil___c__DisplayClass0_0_o *CS___8__locals1; // x8
  const MethodInfo *v5; // x2
  struct CharaGraphUtil___c__DisplayClass0_0_o *v6; // x8

  v3 = this;
  if ( (byte_4B155E7 & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B155E7 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v3->fields.isDecide,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  if ( v3->fields.isDecide )
  {
    v6 = v3->fields.CS___8__locals1;
    if ( v6 )
    {
      CharaGraphUtil__PushRequest(v6->fields.nextUserServantEntity, v6->fields.callbackOnEndRequest, v5);
      return;
    }
LABEL_8:
    sub_1BCAA3C(this, method);
  }
}