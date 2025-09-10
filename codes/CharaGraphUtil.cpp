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

  if ( (byte_4C2663B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2663B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v43, 0);
  if ( !v8 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, userId, (int32_t)limitCountSupport, 0);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v41, 0);
  v17 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v37 = v16;
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v40.fields.fakeValue = v17;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v40, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callbackOnEndRequest,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v19 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  v20 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v39.fields.fakeValue = v19;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v39, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                      selectUserSvt->fields.imageLimitCount,
                      0);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(selectUserSvt->fields.dispLimitCount, 0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          selectUserSvt->fields.commandCardLimitCount,
          0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(selectUserSvt->fields.iconLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(selectUserSvt->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(selectUserSvt, 0);
  limitCountSupport = (Il2CppObject *)UserServantEntity__IsChoice(selectUserSvt, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v26 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                  selectUserSvt->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                       selectUserSvt->fields.randomLimitCount,
                       0);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          selectUserSvt->fields.randomLimitCountSupport,
          0);
  v31 = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v44.fields.fakeValue = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v30;
  *(_QWORD *)&v44.fields.currentCryptoKey = v31;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v44, 0);
  if ( !v20 )
LABEL_18:
    sub_1C2D6EC(limitCountSupport, v7);
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
  const MethodInfo *v11; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  int64_t v18; // x23
  UserServantEntity_o *v19; // x8
  __int128 v20; // q1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v22; // x21
  __int64 v23; // x26
  __int64 v24; // x23
  __int64 v25; // x24
  ServantEntity_o *v26; // x28
  int32_t v27; // w0
  Il2CppObject *Entity; // x25
  int32_t v29; // w29
  int32_t v30; // w27
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  System_Object_array *v33; // x24
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x29
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x28
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t v41; // w26
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x26
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x26
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x25
  UserServantEntity_o *v48; // x8
  int32_t v49; // w20
  int32_t v50; // w0
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x20
  System_String_o *v53; // x20
  System_String_o *v54; // x21
  System_String_o *v55; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v57; // x25
  __int64 v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4C2663A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__);
    sub_1C2D490(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
    sub_1C2D490(&StringLiteral_11943/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11941/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11942/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4C2663A = 1;
  }
  v7 = sub_1C2D6DC(CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_55;
  *(_QWORD *)(v7 + 16) = onCloseDialog;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)onCloseDialog, v10, v11);
  *(_QWORD *)(v7 + 24) = nextUserServantEntity;
  v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v7 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)nextUserServantEntity, v13, v14);
  *(_QWORD *)(v7 + 32) = callbackOnEndRequest;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callbackOnEndRequest, v15, v16);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_55;
  v18 = *(_QWORD *)(SelfUserGame + 128);
  if ( !v18 )
  {
LABEL_10:
    CharaGraphUtil__PushRequest((UserServantEntity_o *)*v12, *(NetworkManager_ResultCallbackFunc_o **)(v7 + 32), v17);
    return;
  }
  v19 = (UserServantEntity_o *)*v12;
  if ( !*v12 )
    goto LABEL_55;
  v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v59 = v60;
  if ( v18 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v59, 0) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_55;
  SelfUserGame = (__int64)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                            v18,
                            (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_55;
  v23 = SelfUserGame;
  v25 = *(_QWORD *)(SelfUserGame + 80);
  v24 = *(_QWORD *)(SelfUserGame + 88);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v25;
  *(_QWORD *)&v61.fields.fakeValue = v24;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v61, 0);
  if ( !Master_object )
    goto LABEL_55;
  SelfUserGame = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            SelfUserGame,
                            (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !*v12 )
    goto LABEL_55;
  v26 = (ServantEntity_o *)SelfUserGame;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*v12)[5], 0);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v27,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v23, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_55;
  if ( !*v12 )
    goto LABEL_55;
  v29 = *(_DWORD *)(SelfUserGame + 24);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)*v12, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_55;
  v30 = *(_DWORD *)(SelfUserGame + 24);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11943/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  v33 = (System_Object_array *)sub_1C2D538(object___TypeInfo, 6);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (__int64)Rarity__getRarityType(v29, 0);
  if ( !v33 )
LABEL_55:
    sub_1C2D6EC(SelfUserGame, v9);
  v36 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C2D5CC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( !LODWORD(v33->max_length) )
    goto LABEL_56;
  v33->m_Items[0] = v36;
  sub_1C2D434((CGThumbnailListItem_o *)v33->m_Items, (int32_t)v36, v34, v35);
  if ( !v26 )
    goto LABEL_55;
  SelfUserGame = (__int64)ServantEntity__getClassName(v26, 0);
  v38 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C2D5CC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v33->max_length) <= 1 )
    goto LABEL_56;
  v33->m_Items[1] = v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v33->m_Items[1], (int32_t)v38, v34, v37);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v23 + 80),
          0);
  v40 = *(_QWORD *)(v23 + 96);
  *(_QWORD *)&v62.fields.fakeValue = *(_QWORD *)(v23 + 104);
  v41 = v39;
  *(_QWORD *)&v62.fields.currentCryptoKey = v40;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v62, 0);
  if ( !v22 )
    goto LABEL_55;
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)v22,
                            v41,
                            SelfUserGame,
                            1,
                            0);
  v43 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C2D5CC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v33->max_length) <= 2 )
    goto LABEL_56;
  v33->m_Items[2] = v43;
  sub_1C2D434((CGThumbnailListItem_o *)&v33->m_Items[2], (int32_t)v43, v34, v42);
  SelfUserGame = (__int64)Rarity__getRarityType(v30, 0);
  v45 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C2D5CC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v33->max_length) <= 3 )
    goto LABEL_56;
  v33->m_Items[3] = v45;
  sub_1C2D434((CGThumbnailListItem_o *)&v33->m_Items[3], (int32_t)v45, v34, v44);
  if ( !Entity )
    goto LABEL_55;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)Entity, 0);
  v47 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C2D5CC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_57;
  }
  if ( LODWORD(v33->max_length) <= 4 )
    goto LABEL_56;
  v33->m_Items[4] = v47;
  sub_1C2D434((CGThumbnailListItem_o *)&v33->m_Items[4], (int32_t)v47, v34, v46);
  if ( !*v12 )
    goto LABEL_55;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*v12)[5], 0);
  v48 = (UserServantEntity_o *)*v12;
  if ( !*v12 )
    goto LABEL_55;
  v49 = SelfUserGame;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v48->fields.limitCount, 0);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)v22,
                            v49,
                            v50,
                            1,
                            0);
  v52 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1C2D5CC(SelfUserGame, v33->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_57:
      v58 = sub_1C2D710(SelfUserGame);
      sub_1C2D5B8(v58, 0);
    }
  }
  if ( LODWORD(v33->max_length) <= 5 )
LABEL_56:
    sub_1C2D6F4(SelfUserGame, v9, v34);
  v33->m_Items[5] = v52;
  sub_1C2D434((CGThumbnailListItem_o *)&v33->m_Items[5], (int32_t)v52, v34, v51);
  v53 = System_String__Format_63499292(v32, v33, 0);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11941/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v57 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v57,
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
  CommonUI__OpenConfirmDialog_31167744(
    (CommonUI_o *)Instance,
    v31,
    v53,
    v54,
    v55,
    v57,
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4C2663C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__);
    sub_1C2D490(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
    byte_4C2663C = 1;
  }
  v5 = sub_1C2D6DC(CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31167972((CommonUI_o *)Instance, v11, 0);
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
  if ( (byte_4C2663D & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    byte_4C2663D = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v2->fields.isDecide,
    (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
  if ( v2->fields.isDecide )
  {
    v5 = v2->fields.CS___8__locals1;
    if ( v5 )
    {
      CharaGraphUtil__PushRequest(v5->fields.nextUserServantEntity, v5->fields.callbackOnEndRequest, v4);
      return;
    }
LABEL_8:
    sub_1C2D6EC(this, method);
  }
}