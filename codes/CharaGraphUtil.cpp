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
  Il2CppObject *limitCountSupport; // x0
  __int64 v13; // x1
  UserServantCollectionMaster_o *v14; // x21
  int64_t userId; // x22
  __int64 v16; // x24
  __int64 v17; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v19; // q0
  int64_t pushUserSvtId; // x8
  UserServantEntity_Fields *p_fields; // x21
  int64_t v22; // x0
  __int128 v23; // q1
  Il2CppObject *Request_object; // x0
  __int128 v25; // q1
  CardFavoriteRequest_o *v26; // x20
  int32_t v27; // w26
  int32_t v28; // w27
  int32_t v29; // w28
  int32_t v30; // w29
  bool IsLock; // w21
  char v32; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v36; // w0
  __int64 v37; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v41; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v43; // [xsp+70h] [xbp-F0h]
  int64_t v44; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4B65F98 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, callbackOnEndRequest);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4B65F98 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !selectUserSvt )
    goto LABEL_18;
  v14 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = SelfUserGame->fields.userId;
  v17 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v17;
  *(_QWORD *)&v49.fields.fakeValue = v16;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v49, 0LL);
  if ( !v14 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v14, userId, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v19 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  p_fields = &selectUserSvt->fields;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&selectUserSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v19;
  v44 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v47 = v48;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v47, 0LL);
  v23 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v43 = v22;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v23;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v46, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callbackOnEndRequest,
                     (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v25 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  v26 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v25;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v45, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                      selectUserSvt->fields.imageLimitCount,
                      0LL);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(selectUserSvt->fields.dispLimitCount, 0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          selectUserSvt->fields.commandCardLimitCount,
          0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(selectUserSvt->fields.iconLimitCount, 0LL);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          selectUserSvt->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(selectUserSvt, 0LL);
  limitCountSupport = (Il2CppObject *)UserServantEntity__IsChoice(selectUserSvt, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v32 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                  selectUserSvt->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                       selectUserSvt->fields.randomLimitCount,
                       0LL);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          selectUserSvt->fields.randomLimitCountSupport,
          0LL);
  v37 = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v50.fields.fakeValue = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v36;
  *(_QWORD *)&v50.fields.currentCryptoKey = v37;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v50, 0LL);
  if ( !v26 )
LABEL_18:
    sub_1BE4D28(limitCountSupport, v13);
  CardFavoriteRequest__beginRequest(
    v26,
    targetUsrSVtId,
    imageLimitCount,
    v27,
    v28,
    v29,
    v30,
    favoriteUserSvtId == v41,
    IsLock,
    v32 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v44 != v43,
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
  int64_t SelfUserGame; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  const MethodInfo *v48; // x2
  int64_t v49; // x23
  UserServantEntity_o *v50; // x8
  __int128 v51; // q1
  Il2CppObject *Master_object; // x21
  Il2CppObject *v53; // x22
  int64_t v54; // x26
  __int64 v55; // x23
  __int64 v56; // x24
  ServantEntity_o *v57; // x27
  int32_t v58; // w0
  Il2CppObject *Entity; // x25
  System_String_o *v60; // x21
  System_String_o *v61; // x23
  System_Object_array *v62; // x24
  int32_t Rarity; // w28
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x28
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x27
  int32_t v78; // w0
  __int64 v79; // x8
  int32_t v80; // w26
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x26
  int32_t v88; // w0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x26
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x25
  UserServantEntity_o *v103; // x8
  int32_t v104; // w20
  int32_t v105; // w0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x20
  System_String_o *v113; // x20
  System_String_o *v114; // x22
  System_String_o *v115; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v117; // x25
  __int64 v118; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16

  if ( (byte_4B65F97 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, onCloseDialog);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_1BE4ACC(&DataManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v14);
    sub_1BE4ACC(&object___TypeInfo, v15);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1BE4ACC(&Rarity_TypeInfo, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1BE4ACC(&Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__, v20);
    sub_1BE4ACC(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo, v21);
    sub_1BE4ACC(&StringLiteral_12064/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v22);
    sub_1BE4ACC(&StringLiteral_12062/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v23);
    sub_1BE4ACC(&StringLiteral_12063/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v24);
    sub_1BE4ACC(&StringLiteral_12065/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v25);
    byte_4B65F97 = 1;
  }
  v26 = sub_1BE4D18(CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_53;
  *(_QWORD *)(v26 + 16) = onCloseDialog;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)onCloseDialog, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v26 + 24) = nextUserServantEntity;
  v35 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v26 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 24), (int64_t)nextUserServantEntity, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v26 + 32) = callbackOnEndRequest;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)callbackOnEndRequest, v42, v43, v44, v45, v46, v47);
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_53;
  v49 = *(_QWORD *)(SelfUserGame + 120);
  if ( !v49 )
  {
LABEL_10:
    CharaGraphUtil__PushRequest((UserServantEntity_o *)*v35, *(NetworkManager_ResultCallbackFunc_o **)(v26 + 32), v48);
    return;
  }
  v50 = (UserServantEntity_o *)*v35;
  if ( !*v35 )
    goto LABEL_53;
  v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
  *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v120.fields.fakeValue = v51;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v119 = v120;
  if ( v49 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v119, 0LL) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
  v53 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_53;
  SelfUserGame = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                            v49,
                            (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_53;
  v54 = SelfUserGame;
  v56 = *(_QWORD *)(SelfUserGame + 80);
  v55 = *(_QWORD *)(SelfUserGame + 88);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v121.fields.currentCryptoKey = v56;
  *(_QWORD *)&v121.fields.fakeValue = v55;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v121, 0LL);
  if ( !Master_object )
    goto LABEL_53;
  SelfUserGame = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            SelfUserGame,
                            (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !*v35 )
    goto LABEL_53;
  v57 = (ServantEntity_o *)SelfUserGame;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060((*v35)[5], 0LL);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v58,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12065/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12064/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v62 = (System_Object_array *)sub_1BE4B74(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v54, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (int64_t)Rarity__getRarityType(Rarity, 0LL);
  if ( !v62 )
LABEL_53:
    sub_1BE4D28(SelfUserGame, v28);
  v70 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( !v62->max_length )
    goto LABEL_54;
  v62->m_Items[0] = (Il2CppObject *)v70;
  sub_1BE4A70((PartyOrganizationUtility_o *)v62->m_Items, v70, v64, v65, v66, v67, v68, v69);
  if ( !v57 )
    goto LABEL_53;
  SelfUserGame = (int64_t)ServantEntity__getClassName(v57, 0LL);
  v77 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v62->max_length <= 1 )
    goto LABEL_54;
  v62->m_Items[1] = (Il2CppObject *)v77;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v62->m_Items[1], v77, v71, v72, v73, v74, v75, v76);
  v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v54 + 80),
          0LL);
  v79 = *(_QWORD *)(v54 + 96);
  *(_QWORD *)&v122.fields.fakeValue = *(_QWORD *)(v54 + 104);
  v80 = v78;
  *(_QWORD *)&v122.fields.currentCryptoKey = v79;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v122, 0LL);
  if ( !v53 )
    goto LABEL_53;
  SelfUserGame = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)v53,
                            v80,
                            SelfUserGame,
                            0LL);
  v87 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v62->max_length <= 2 )
    goto LABEL_54;
  v62->m_Items[2] = (Il2CppObject *)v87;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v62->m_Items[2], v87, v81, v82, v83, v84, v85, v86);
  SelfUserGame = (int64_t)*v35;
  if ( !*v35 )
    goto LABEL_53;
  v88 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (int64_t)Rarity__getRarityType(v88, 0LL);
  v95 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v62->max_length <= 3 )
    goto LABEL_54;
  v62->m_Items[3] = (Il2CppObject *)v95;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v62->m_Items[3], v95, v89, v90, v91, v92, v93, v94);
  if ( !Entity )
    goto LABEL_53;
  SelfUserGame = (int64_t)ServantEntity__getClassName((ServantEntity_o *)Entity, 0LL);
  v102 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v62->max_length <= 4 )
    goto LABEL_54;
  v62->m_Items[4] = (Il2CppObject *)v102;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v62->m_Items[4], v102, v96, v97, v98, v99, v100, v101);
  if ( !*v35 )
    goto LABEL_53;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060((*v35)[5], 0LL);
  v103 = (UserServantEntity_o *)*v35;
  if ( !*v35 )
    goto LABEL_53;
  v104 = SelfUserGame;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v103->fields.limitCount, 0LL);
  SelfUserGame = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)v53,
                            v104,
                            v105,
                            0LL);
  v112 = SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1BE4C08(SelfUserGame, v62->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_55:
      v118 = sub_1BE4D4C(SelfUserGame);
      sub_1BE4BF4(v118, 0LL);
    }
  }
  if ( v62->max_length <= 5 )
LABEL_54:
    sub_1BE4D30(SelfUserGame, v28);
  v62->m_Items[5] = (Il2CppObject *)v112;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v62->m_Items[5], v112, v106, v107, v108, v109, v110, v111);
  v113 = System_String__Format_62713316(v61, v62, 0LL);
  v114 = LocalizationManager__Get((System_String_o *)StringLiteral_12063/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_12062/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v117 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v117,
    (Il2CppObject *)v26,
    Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__,
    0LL);
  SelfUserGame = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    goto LABEL_53;
  CommonUI__OpenConfirmDialog_30873636(
    (CommonUI_o *)Instance,
    v60,
    v113,
    v114,
    v115,
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
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4B65F99 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__, v6);
    sub_1BE4ACC(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo, v7);
    byte_4B65F99 = 1;
  }
  v8 = sub_1BE4D18(CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BE4D28(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30874304((CommonUI_o *)Instance, v18, 0LL);
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
  const MethodInfo *v4; // x2
  struct CharaGraphUtil___c__DisplayClass0_0_o *v5; // x8

  v2 = this;
  if ( (byte_4B65F9A & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_1BE4ACC(&Method_ActionExtensions_Call_bool___, method);
    byte_4B65F9A = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v2->fields.isDecide,
    (const MethodInfo_2EAB82C *)Method_ActionExtensions_Call_bool___);
  if ( v2->fields.isDecide )
  {
    v5 = v2->fields.CS___8__locals1;
    if ( v5 )
    {
      CharaGraphUtil__PushRequest(v5->fields.nextUserServantEntity, v5->fields.callbackOnEndRequest, v4);
      return;
    }
LABEL_8:
    sub_1BE4D28(this, method);
  }
}