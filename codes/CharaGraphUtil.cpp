void CharaGraphUtil__PushRequest(
        UserServantEntity_o *selectUserSvt,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x23
  Il2CppObject *limitCountSupport; // x0
  UserServantCollectionMaster_o *v7; // x21
  int64_t userId; // x22
  __int64 v9; // x24
  __int64 v10; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v12; // q0
  int64_t pushUserSvtId; // x8
  UserServantEntity_Fields *p_fields; // x21
  int64_t v15; // x0
  __int128 v16; // q1
  Il2CppObject *Request_object; // x0
  __int128 v18; // q1
  CardFavoriteRequest_o *v19; // x20
  int32_t v20; // w26
  int32_t v21; // w27
  int32_t v22; // w28
  int32_t v23; // w29
  bool IsLock; // w21
  char v25; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v29; // w0
  __int64 v30; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v34; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v36; // [xsp+70h] [xbp-F0h]
  int64_t v37; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4C36D13 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C36D13 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !selectUserSvt )
    goto LABEL_18;
  v7 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = SelfUserGame->fields.userId;
  v10 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v10;
  *(_QWORD *)&v42.fields.fakeValue = v9;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v42, 0);
  if ( !v7 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, userId, (int32_t)limitCountSupport, 0);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v12 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  p_fields = &selectUserSvt->fields;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&selectUserSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v12;
  v37 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v40 = v41;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v40, 0);
  v16 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v36 = v15;
  *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v39.fields.fakeValue = v16;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v39, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callbackOnEndRequest,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v18 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  v19 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v18;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v38, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                      selectUserSvt->fields.imageLimitCount,
                      0);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(selectUserSvt->fields.dispLimitCount, 0);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
          selectUserSvt->fields.commandCardLimitCount,
          0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(selectUserSvt->fields.iconLimitCount, 0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(selectUserSvt->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(selectUserSvt, 0);
  limitCountSupport = (Il2CppObject *)UserServantEntity__IsChoice(selectUserSvt, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v25 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                  selectUserSvt->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                       selectUserSvt->fields.randomLimitCount,
                       0);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
          selectUserSvt->fields.randomLimitCountSupport,
          0);
  v30 = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v43.fields.fakeValue = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v29;
  *(_QWORD *)&v43.fields.currentCryptoKey = v30;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v43, 0);
  if ( !v19 )
LABEL_18:
    sub_1C32E7C(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v19,
    targetUsrSVtId,
    imageLimitCount,
    v20,
    v21,
    v22,
    v23,
    favoriteUserSvtId == v34,
    IsLock,
    v25 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v37 != v36,
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  int64_t v17; // x23
  UserServantEntity_o *v18; // x8
  __int128 v19; // q1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v21; // x21
  __int64 v22; // x26
  __int64 v23; // x23
  __int64 v24; // x24
  ServantEntity_o *v25; // x28
  int32_t v26; // w0
  Il2CppObject *Entity; // x25
  int32_t v28; // w29
  int32_t v29; // w27
  System_String_o *v30; // x22
  System_String_o *v31; // x23
  System_Object_array *v32; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x29
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x28
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t v41; // w26
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x26
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x26
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x25
  UserServantEntity_o *v51; // x8
  int32_t v52; // w20
  int32_t v53; // w0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x20
  System_String_o *v57; // x20
  System_String_o *v58; // x21
  System_String_o *v59; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v61; // x25
  __int64 v62; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4C36D12 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Rarity_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__);
    sub_1C32C20(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
    sub_1C32C20(&StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4C36D12 = 1;
  }
  v7 = sub_1C32E6C(CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_55;
  *(_QWORD *)(v7 + 16) = onCloseDialog;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)onCloseDialog, v9, v10);
  *(_QWORD *)(v7 + 24) = nextUserServantEntity;
  v11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v7 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)nextUserServantEntity, v12, v13);
  *(_QWORD *)(v7 + 32) = callbackOnEndRequest;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callbackOnEndRequest, v14, v15);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_55;
  v17 = *(_QWORD *)(SelfUserGame + 128);
  if ( !v17 )
  {
LABEL_10:
    CharaGraphUtil__PushRequest((UserServantEntity_o *)*v11, *(NetworkManager_ResultCallbackFunc_o **)(v7 + 32), v16);
    return;
  }
  v18 = (UserServantEntity_o *)*v11;
  if ( !*v11 )
    goto LABEL_55;
  v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
  *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v64.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v63 = v64;
  if ( v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v63, 0) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  v21 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_55;
  SelfUserGame = (__int64)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                            v17,
                            (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_55;
  v22 = SelfUserGame;
  v24 = *(_QWORD *)(SelfUserGame + 80);
  v23 = *(_QWORD *)(SelfUserGame + 88);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v65.fields.currentCryptoKey = v24;
  *(_QWORD *)&v65.fields.fakeValue = v23;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v65, 0);
  if ( !Master_object )
    goto LABEL_55;
  SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            SelfUserGame,
                            (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !*v11 )
    goto LABEL_55;
  v25 = (ServantEntity_o *)SelfUserGame;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*v11)[5], 0);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v26,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v22, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_55;
  if ( !*v11 )
    goto LABEL_55;
  v28 = *(_DWORD *)(SelfUserGame + 24);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)*v11, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_55;
  v29 = *(_DWORD *)(SelfUserGame + 24);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  v32 = (System_Object_array *)sub_1C32CC8(object___TypeInfo, 6);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (__int64)Rarity__getRarityType(v28, 0);
  if ( !v32 )
LABEL_55:
    sub_1C32E7C(SelfUserGame);
  v35 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C32D5C(SelfUserGame, v32->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( !LODWORD(v32->max_length) )
    goto LABEL_56;
  v32->m_Items[0] = v35;
  sub_1C32BC4((CGThumbnailListItem_o *)v32->m_Items, (int32_t)v35, v33, v34);
  if ( !v25 )
    goto LABEL_55;
  SelfUserGame = (__int64)ServantEntity__getClassName(v25, 0);
  v38 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C32D5C(SelfUserGame, v32->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v32->max_length) <= 1 )
    goto LABEL_56;
  v32->m_Items[1] = v38;
  sub_1C32BC4((CGThumbnailListItem_o *)&v32->m_Items[1], (int32_t)v38, v36, v37);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v22 + 80),
          0);
  v40 = *(_QWORD *)(v22 + 96);
  *(_QWORD *)&v66.fields.fakeValue = *(_QWORD *)(v22 + 104);
  v41 = v39;
  *(_QWORD *)&v66.fields.currentCryptoKey = v40;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v66, 0);
  if ( !v21 )
    goto LABEL_55;
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)v21,
                            v41,
                            SelfUserGame,
                            1,
                            0);
  v44 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C32D5C(SelfUserGame, v32->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v32->max_length) <= 2 )
    goto LABEL_56;
  v32->m_Items[2] = v44;
  sub_1C32BC4((CGThumbnailListItem_o *)&v32->m_Items[2], (int32_t)v44, v42, v43);
  SelfUserGame = (__int64)Rarity__getRarityType(v29, 0);
  v47 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C32D5C(SelfUserGame, v32->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v32->max_length) <= 3 )
    goto LABEL_56;
  v32->m_Items[3] = v47;
  sub_1C32BC4((CGThumbnailListItem_o *)&v32->m_Items[3], (int32_t)v47, v45, v46);
  if ( !Entity )
    goto LABEL_55;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)Entity, 0);
  v50 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C32D5C(SelfUserGame, v32->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v32->max_length) <= 4 )
    goto LABEL_56;
  v32->m_Items[4] = v50;
  sub_1C32BC4((CGThumbnailListItem_o *)&v32->m_Items[4], (int32_t)v50, v48, v49);
  if ( !*v11 )
    goto LABEL_55;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*v11)[5], 0);
  v51 = (UserServantEntity_o *)*v11;
  if ( !*v11 )
    goto LABEL_55;
  v52 = SelfUserGame;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v51->fields.limitCount, 0);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)v21,
                            v52,
                            v53,
                            1,
                            0);
  v56 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C32D5C(SelfUserGame, v32->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_57:
      v62 = sub_1C32EA0(SelfUserGame);
      sub_1C32D48(v62, 0);
    }
  }
  if ( LODWORD(v32->max_length) <= 5 )
LABEL_56:
    sub_1C32E84(SelfUserGame);
  v32->m_Items[5] = v56;
  sub_1C32BC4((CGThumbnailListItem_o *)&v32->m_Items[5], (int32_t)v56, v54, v55);
  v57 = System_String__Format_63559972(v31, v32, 0);
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v61 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v61,
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
  CommonUI__OpenConfirmDialog_31190852(
    (CommonUI_o *)Instance,
    v30,
    v57,
    v58,
    v59,
    v61,
    *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 512LL),
    *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 524LL),
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v10; // x20

  if ( (byte_4C36D14 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__);
    sub_1C32C20(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
    byte_4C36D14 = 1;
  }
  v5 = sub_1C32E6C(CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)v5,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1C32E7C(v6);
  }
  CommonUI__CloseConfirmDialog_31191080((CommonUI_o *)Instance, v10, 0);
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
  if ( (byte_4C36D15 & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_1C32C20(&Method_ActionExtensions_Call_bool___);
    byte_4C36D15 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v2->fields.isDecide,
    (const MethodInfo_3029BF0 *)Method_ActionExtensions_Call_bool___);
  if ( v2->fields.isDecide )
  {
    v5 = v2->fields.CS___8__locals1;
    if ( v5 )
    {
      CharaGraphUtil__PushRequest(v5->fields.nextUserServantEntity, v5->fields.callbackOnEndRequest, v4);
      return;
    }
LABEL_8:
    sub_1C32E7C(this);
  }
}