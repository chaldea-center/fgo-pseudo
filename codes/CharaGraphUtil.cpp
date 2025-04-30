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

  if ( (byte_4A4D86D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, callbackOnEndRequest);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4A4D86D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v49, 0LL);
  if ( !v14 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v14, userId, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v47, 0LL);
  v23 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v43 = v22;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v23;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v46, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callbackOnEndRequest,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v25 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  v26 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v25;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v45, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                      selectUserSvt->fields.imageLimitCount,
                      0LL);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(selectUserSvt->fields.dispLimitCount, 0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
          selectUserSvt->fields.commandCardLimitCount,
          0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(selectUserSvt->fields.iconLimitCount, 0LL);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
          selectUserSvt->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(selectUserSvt, 0LL);
  limitCountSupport = (Il2CppObject *)UserServantEntity__IsChoice(selectUserSvt, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v32 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                  selectUserSvt->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                       selectUserSvt->fields.randomLimitCount,
                       0LL);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
          selectUserSvt->fields.randomLimitCountSupport,
          0LL);
  v37 = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v50.fields.fakeValue = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v36;
  *(_QWORD *)&v50.fields.currentCryptoKey = v37;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v50, 0LL);
  if ( !v26 )
LABEL_18:
    sub_1B86614(limitCountSupport, v13);
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
  DataMasterBase_TMaster__TEntity__PKType__o *SelfUserGame; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2
  int64_t lookup; // x23
  UserServantEntity_o *v38; // x8
  __int128 v39; // q1
  Il2CppObject *Master_object; // x21
  Il2CppObject *v41; // x22
  UserServantEntity_o *v42; // x26
  __int64 v43; // x23
  void *monitor; // x24
  ServantEntity_o *v45; // x27
  int32_t v46; // w0
  Il2CppObject *Entity; // x25
  System_String_o *v48; // x21
  System_String_o *v49; // x23
  System_Object_array *v50; // x24
  int32_t Rarity; // w28
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x28
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x27
  int32_t v58; // w0
  __int64 v59; // x8
  int32_t v60; // w26
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  Il2CppObject *v63; // x26
  int32_t v64; // w0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x26
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  Il2CppObject *v70; // x25
  UserServantEntity_o *v71; // x8
  int32_t v72; // w20
  int32_t v73; // w0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  Il2CppObject *v76; // x20
  System_String_o *v77; // x20
  System_String_o *v78; // x22
  System_String_o *v79; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v81; // x25
  __int64 v82; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4A4D86C & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, onCloseDialog);
    sub_1B863B8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_1B863B8(&DataManager_TypeInfo, v11);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B863B8(&LocalizationManager_TypeInfo, v14);
    sub_1B863B8(&object___TypeInfo, v15);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B863B8(&Rarity_TypeInfo, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1B863B8(&Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__, v20);
    sub_1B863B8(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo, v21);
    sub_1B863B8(&StringLiteral_11744/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v22);
    sub_1B863B8(&StringLiteral_11742/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v23);
    sub_1B863B8(&StringLiteral_11743/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v24);
    sub_1B863B8(&StringLiteral_11745/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v25);
    byte_4A4D86C = 1;
  }
  v26 = sub_1B86604(CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_53;
  *(_QWORD *)(v26 + 16) = onCloseDialog;
  sub_1B8635C((CGThumbnailListItem_o *)(v26 + 16), (int32_t)onCloseDialog, v29, v30);
  *(_QWORD *)(v26 + 24) = nextUserServantEntity;
  v31 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v26 + 24);
  sub_1B8635C((CGThumbnailListItem_o *)(v26 + 24), (int32_t)nextUserServantEntity, v32, v33);
  *(_QWORD *)(v26 + 32) = callbackOnEndRequest;
  sub_1B8635C((CGThumbnailListItem_o *)(v26 + 32), (int32_t)callbackOnEndRequest, v34, v35);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_53;
  lookup = (int64_t)SelfUserGame[1].fields._lookup;
  if ( !lookup )
  {
LABEL_10:
    CharaGraphUtil__PushRequest((UserServantEntity_o *)*v31, *(NetworkManager_ResultCallbackFunc_o **)(v26 + 32), v36);
    return;
  }
  v38 = (UserServantEntity_o *)*v31;
  if ( !*v31 )
    goto LABEL_53;
  v39 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v83 = v84;
  if ( lookup == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v83, 0LL) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
  v41 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                 SelfUserGame,
                                                                 lookup,
                                                                 (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_53;
  v42 = (UserServantEntity_o *)SelfUserGame;
  monitor = SelfUserGame[1].monitor;
  v43 = *(_QWORD *)&SelfUserGame[1].fields._MasterKind_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v85.fields.fakeValue = v43;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                                 v85,
                                                                 0LL);
  if ( !Master_object )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                 (int32_t)SelfUserGame,
                                                                 (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !*v31 )
    goto LABEL_53;
  v45 = (ServantEntity_o *)SelfUserGame;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*v31)[5], 0LL);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             v46,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11745/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11744/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v50 = (System_Object_array *)sub_1B86460(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(v42, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v50 )
LABEL_53:
    sub_1B86614(SelfUserGame, v28);
  v54 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B864F4(
                                                                   SelfUserGame,
                                                                   v50->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( !v50->max_length )
    goto LABEL_54;
  v50->m_Items[0] = v54;
  sub_1B8635C((CGThumbnailListItem_o *)v50->m_Items, (int32_t)v54, v52, v53);
  if ( !v45 )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__getClassName(v45, 0LL);
  v57 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B864F4(
                                                                   SelfUserGame,
                                                                   v50->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v50->max_length <= 1 )
    goto LABEL_54;
  v50->m_Items[1] = v57;
  sub_1B8635C((CGThumbnailListItem_o *)&v50->m_Items[1], (int32_t)v57, v55, v56);
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v42->fields.svtId, 0LL);
  v59 = *(_QWORD *)&v42->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v86.fields.fakeValue = *(_QWORD *)&v42->fields.limitCount.fields.fakeValue;
  v60 = v58;
  *(_QWORD *)&v86.fields.currentCryptoKey = v59;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                                 v86,
                                                                 0LL);
  if ( !v41 )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                 (ServantLimitImageMaster_o *)v41,
                                                                 v60,
                                                                 (int32_t)SelfUserGame,
                                                                 1,
                                                                 0LL);
  v63 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B864F4(
                                                                   SelfUserGame,
                                                                   v50->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v50->max_length <= 2 )
    goto LABEL_54;
  v50->m_Items[2] = v63;
  sub_1B8635C((CGThumbnailListItem_o *)&v50->m_Items[2], (int32_t)v63, v61, v62);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)*v31;
  if ( !*v31 )
    goto LABEL_53;
  v64 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)Rarity__getRarityType(v64, 0LL);
  v67 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B864F4(
                                                                   SelfUserGame,
                                                                   v50->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v50->max_length <= 3 )
    goto LABEL_54;
  v50->m_Items[3] = v67;
  sub_1B8635C((CGThumbnailListItem_o *)&v50->m_Items[3], (int32_t)v67, v65, v66);
  if ( !Entity )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__getClassName(
                                                                 (ServantEntity_o *)Entity,
                                                                 0LL);
  v70 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B864F4(
                                                                   SelfUserGame,
                                                                   v50->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v50->max_length <= 4 )
    goto LABEL_54;
  v50->m_Items[4] = v70;
  sub_1B8635C((CGThumbnailListItem_o *)&v50->m_Items[4], (int32_t)v70, v68, v69);
  if ( !*v31 )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                                 (*v31)[5],
                                                                 0LL);
  v71 = (UserServantEntity_o *)*v31;
  if ( !*v31 )
    goto LABEL_53;
  v72 = (int)SelfUserGame;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v71->fields.limitCount, 0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                 (ServantLimitImageMaster_o *)v41,
                                                                 v72,
                                                                 v73,
                                                                 1,
                                                                 0LL);
  v76 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B864F4(
                                                                   SelfUserGame,
                                                                   v50->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_55:
      v82 = sub_1B86638(SelfUserGame);
      sub_1B864E0(v82, 0LL);
    }
  }
  if ( v50->max_length <= 5 )
LABEL_54:
    sub_1B8661C(SelfUserGame, v28);
  v50->m_Items[5] = v76;
  sub_1B8635C((CGThumbnailListItem_o *)&v50->m_Items[5], (int32_t)v76, v74, v75);
  v77 = System_String__Format_61686604(v49, v50, 0LL);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11743/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11742/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v81 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B86604(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v81,
    (Il2CppObject *)v26,
    Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__,
    0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_53;
  CommonUI__OpenConfirmDialog_30483432(
    (CommonUI_o *)Instance,
    v48,
    v77,
    v78,
    v79,
    v81,
    (int32_t)SelfUserGame[2].fields.list[8].fields.CollectionChanged,
    HIDWORD(SelfUserGame[2].fields.list[8].fields.PropertyChanged),
    15.0,
    700,
    0,
    480,
    -162.5,
    0,
    0,
    240,
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_4A4D86E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B863B8(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__, v6);
    sub_1B863B8(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo, v7);
    byte_4A4D86E = 1;
  }
  v8 = sub_1B86604(CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B8635C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B86614(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30483660((CommonUI_o *)Instance, v14, 0LL);
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
  if ( (byte_4A4D86F & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_1B863B8(&Method_ActionExtensions_Call_bool___, method);
    byte_4A4D86F = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v2->fields.isDecide,
    (const MethodInfo_2EBFAF4 *)Method_ActionExtensions_Call_bool___);
  if ( v2->fields.isDecide )
  {
    v5 = v2->fields.CS___8__locals1;
    if ( v5 )
    {
      CharaGraphUtil__PushRequest(v5->fields.nextUserServantEntity, v5->fields.callbackOnEndRequest, v4);
      return;
    }
LABEL_8:
    sub_1B86614(this, method);
  }
}