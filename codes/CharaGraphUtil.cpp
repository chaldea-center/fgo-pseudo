void CharaGraphUtil__PushRequest(
        UserServantEntity_o *selectUserSvt,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x23
  Il2CppObject *limitCountSupport; // x0
  __int64 v7; // x1
  UserServantCollectionMaster_o *v8; // x21
  int64_t userId; // x22
  __int64 v10; // x24
  __int64 v11; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v13; // q0
  int64_t pushUserSvtId; // x8
  UserServantEntity_Fields *p_fields; // x21
  int64_t v16; // x0
  __int128 v17; // q1
  Il2CppObject *Request_object; // x0
  __int128 v19; // q1
  CardFavoriteRequest_o *v20; // x20
  int32_t v21; // w26
  int32_t v22; // w27
  int32_t v23; // w28
  int32_t v24; // w29
  bool IsLock; // w21
  char v26; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v30; // w0
  __int64 v31; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
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

  if ( (byte_4D2BB8E & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BB8E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !selectUserSvt )
    goto LABEL_18;
  v8 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = SelfUserGame->fields.userId;
  v11 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v11;
  *(_QWORD *)&v43.fields.fakeValue = v10;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v43, 0);
  if ( !v8 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, userId, (int32_t)limitCountSupport, 0);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v13 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  p_fields = &selectUserSvt->fields;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&selectUserSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v13;
  v38 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v41 = v42;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v41, 0);
  v17 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v37 = v16;
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v40.fields.fakeValue = v17;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v40, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callbackOnEndRequest,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v19 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  v20 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v39.fields.fakeValue = v19;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v39, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                      selectUserSvt->fields.imageLimitCount,
                      0);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(selectUserSvt->fields.dispLimitCount, 0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          selectUserSvt->fields.commandCardLimitCount,
          0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(selectUserSvt->fields.iconLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(selectUserSvt->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(selectUserSvt, 0);
  limitCountSupport = (Il2CppObject *)UserServantEntity__IsChoice(selectUserSvt, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v26 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                  selectUserSvt->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                       selectUserSvt->fields.randomLimitCount,
                       0);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          selectUserSvt->fields.randomLimitCountSupport,
          0);
  v31 = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v44.fields.fakeValue = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v30;
  *(_QWORD *)&v44.fields.currentCryptoKey = v31;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v44, 0);
  if ( !v20 )
LABEL_18:
    sub_1C942F0(limitCountSupport, v7);
  CardFavoriteRequest__beginRequest(
    v20,
    targetUsrSVtId,
    imageLimitCount,
    v21,
    v22,
    v23,
    v24,
    favoriteUserSvtId == v35,
    IsLock,
    v26 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v38 != v37,
    0);
}


void CharaGraphUtil__PushRequestWithConfirmDialog(
        UserServantEntity_o *nextUserServantEntity,
        System_Action_bool__o *onCloseDialog,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 SelfUserGame; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x2
  int64_t v30; // x23
  UserServantEntity_o *v31; // x8
  __int128 v32; // q1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v34; // x21
  __int64 v35; // x26
  __int64 v36; // x23
  __int64 v37; // x24
  ServantEntity_o *v38; // x28
  int32_t v39; // w0
  Il2CppObject *Entity; // x25
  int32_t v41; // w29
  int32_t v42; // w27
  System_String_o *v43; // x22
  System_String_o *v44; // x23
  System_Object_array *v45; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  Il2CppObject *v52; // x29
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  Il2CppObject *v59; // x28
  int32_t v60; // w0
  __int64 v61; // x8
  int32_t v62; // w26
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  Il2CppObject *v69; // x26
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  Il2CppObject *v76; // x26
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  Il2CppObject *v83; // x25
  UserServantEntity_o *v84; // x8
  int32_t v85; // w20
  int32_t v86; // w0
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  Il2CppObject *v93; // x20
  System_String_o *v94; // x20
  System_String_o *v95; // x21
  System_String_o *v96; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v98; // x25
  __int64 v99; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_4D2BB8D & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__);
    sub_1C94098(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
    sub_1C94098(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C94098(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4D2BB8D = 1;
  }
  v7 = sub_1C942E4(CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_55;
  *(_QWORD *)(v7 + 16) = onCloseDialog;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)onCloseDialog, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = nextUserServantEntity;
  v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v7 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)nextUserServantEntity, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v7 + 32) = callbackOnEndRequest;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)callbackOnEndRequest, v23, v24, v25, v26, v27, v28);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_55;
  v30 = *(_QWORD *)(SelfUserGame + 128);
  if ( !v30 )
  {
LABEL_10:
    CharaGraphUtil__PushRequest((UserServantEntity_o *)*v16, *(NetworkManager_ResultCallbackFunc_o **)(v7 + 32), v29);
    return;
  }
  v31 = (UserServantEntity_o *)*v16;
  if ( !*v16 )
    goto LABEL_55;
  v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
  *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v101.fields.fakeValue = v32;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v100 = v101;
  if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v100, 0) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  v34 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_55;
  SelfUserGame = (__int64)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                            v30,
                            (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_55;
  v35 = SelfUserGame;
  v37 = *(_QWORD *)(SelfUserGame + 80);
  v36 = *(_QWORD *)(SelfUserGame + 88);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v102.fields.currentCryptoKey = v37;
  *(_QWORD *)&v102.fields.fakeValue = v36;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v102, 0);
  if ( !Master_object )
    goto LABEL_55;
  SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            SelfUserGame,
                            (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !*v16 )
    goto LABEL_55;
  v38 = (ServantEntity_o *)SelfUserGame;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544((*v16)[5], 0);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v39,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v35, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_55;
  if ( !*v16 )
    goto LABEL_55;
  v41 = *(_DWORD *)(SelfUserGame + 24);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)*v16, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_55;
  v42 = *(_DWORD *)(SelfUserGame + 24);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  v45 = (System_Object_array *)sub_1C94140(object___TypeInfo, 6);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (__int64)Rarity__getRarityType(v41, 0);
  if ( !v45 )
LABEL_55:
    sub_1C942F0(SelfUserGame, v9);
  v52 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C941D4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( !LODWORD(v45->max_length) )
    goto LABEL_56;
  v45->m_Items[0] = v52;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v45->m_Items, (int32_t)v52, v46, v47, v48, v49, v50, v51);
  if ( !v38 )
    goto LABEL_55;
  SelfUserGame = (__int64)ServantEntity__getClassName(v38, 0);
  v59 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C941D4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v45->max_length) <= 1 )
    goto LABEL_56;
  v45->m_Items[1] = v59;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v45->m_Items[1], (int32_t)v59, v53, v54, v55, v56, v57, v58);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v35 + 80),
          0);
  v61 = *(_QWORD *)(v35 + 96);
  *(_QWORD *)&v103.fields.fakeValue = *(_QWORD *)(v35 + 104);
  v62 = v60;
  *(_QWORD *)&v103.fields.currentCryptoKey = v61;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v103, 0);
  if ( !v34 )
    goto LABEL_55;
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)v34,
                            v62,
                            SelfUserGame,
                            1,
                            0);
  v69 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C941D4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v45->max_length) <= 2 )
    goto LABEL_56;
  v45->m_Items[2] = v69;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v45->m_Items[2], (int32_t)v69, v63, v64, v65, v66, v67, v68);
  SelfUserGame = (__int64)Rarity__getRarityType(v42, 0);
  v76 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C941D4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v45->max_length) <= 3 )
    goto LABEL_56;
  v45->m_Items[3] = v76;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v45->m_Items[3], (int32_t)v76, v70, v71, v72, v73, v74, v75);
  if ( !Entity )
    goto LABEL_55;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)Entity, 0);
  v83 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C941D4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v45->max_length) <= 4 )
    goto LABEL_56;
  v45->m_Items[4] = v83;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v45->m_Items[4], (int32_t)v83, v77, v78, v79, v80, v81, v82);
  if ( !*v16 )
    goto LABEL_55;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544((*v16)[5], 0);
  v84 = (UserServantEntity_o *)*v16;
  if ( !*v16 )
    goto LABEL_55;
  v85 = SelfUserGame;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v84->fields.limitCount, 0);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)v34,
                            v85,
                            v86,
                            1,
                            0);
  v93 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C941D4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_57:
      v99 = sub_1C94314(SelfUserGame);
      sub_1C941C0(v99, 0);
    }
  }
  if ( LODWORD(v45->max_length) <= 5 )
LABEL_56:
    sub_1C942F8(SelfUserGame);
  v45->m_Items[5] = v93;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v45->m_Items[5], (int32_t)v93, v87, v88, v89, v90, v91, v92);
  v94 = System_String__Format_64459188(v44, v45, 0);
  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v98 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v98,
    (Il2CppObject *)v7,
    Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__,
    0);
  SelfUserGame = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_55;
  CommonUI__OpenConfirmDialog_31583464(
    (CommonUI_o *)Instance,
    v43,
    v94,
    v95,
    v96,
    v98,
    *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 516LL),
    *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 528LL),
    15.0,
    700,
    0,
    480,
    -162.5,
    0,
    0,
    240,
    0,
    0);
}


void CharaGraphUtil___c__DisplayClass0_0___ctor(CharaGraphUtil___c__DisplayClass0_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphUtil___c__DisplayClass0_0___PushRequestWithConfirmDialog_g__OnCloseDialog_0(
        CharaGraphUtil___c__DisplayClass0_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4D2BB8F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__);
    sub_1C94098(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
    byte_4D2BB8F = 1;
  }
  v5 = sub_1C942E4(CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1C942F0(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31583752((CommonUI_o *)Instance, v15, 0);
}


void CharaGraphUtil___c__DisplayClass0_1___ctor(CharaGraphUtil___c__DisplayClass0_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphUtil___c__DisplayClass0_1___PushRequestWithConfirmDialog_b__1(
        CharaGraphUtil___c__DisplayClass0_1_o *this,
        const MethodInfo *method)
{
  CharaGraphUtil___c__DisplayClass0_1_o *v2; // x19
  struct CharaGraphUtil___c__DisplayClass0_0_o *CS___8__locals1; // x8
  const MethodInfo *v4; // x2
  struct CharaGraphUtil___c__DisplayClass0_0_o *v5; // x8

  v2 = this;
  if ( (byte_4D2BB90 & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_1C94098(&Method_ActionExtensions_Call_bool___);
    byte_4D2BB90 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v2->fields.isDecide,
    (const MethodInfo_30E5830 *)Method_ActionExtensions_Call_bool___);
  if ( v2->fields.isDecide )
  {
    v5 = v2->fields.CS___8__locals1;
    if ( v5 )
    {
      CharaGraphUtil__PushRequest(v5->fields.nextUserServantEntity, v5->fields.callbackOnEndRequest, v4);
      return;
    }
LABEL_8:
    sub_1C942F0(this, method);
  }
}