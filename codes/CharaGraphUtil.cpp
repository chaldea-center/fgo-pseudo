void __fastcall CharaGraphUtil__PushRequest(
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

  if ( (byte_4A5A579 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A579 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43, 0LL);
  if ( !v8 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, userId, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v13 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  p_fields = &selectUserSvt->fields;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&selectUserSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v13;
  v38 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v41 = v42;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  v17 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v37 = v16;
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v40.fields.fakeValue = v17;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v40, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callbackOnEndRequest,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v19 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  v20 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v39.fields.fakeValue = v19;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      selectUserSvt->fields.imageLimitCount,
                      0LL);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(selectUserSvt->fields.dispLimitCount, 0LL);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          selectUserSvt->fields.commandCardLimitCount,
          0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(selectUserSvt->fields.iconLimitCount, 0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          selectUserSvt->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(selectUserSvt, 0LL);
  limitCountSupport = (Il2CppObject *)UserServantEntity__IsChoice(selectUserSvt, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v26 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  selectUserSvt->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       selectUserSvt->fields.randomLimitCount,
                       0LL);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          selectUserSvt->fields.randomLimitCountSupport,
          0LL);
  v31 = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v44.fields.fakeValue = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v30;
  *(_QWORD *)&v44.fields.currentCryptoKey = v31;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v44, 0LL);
  if ( !v20 )
LABEL_18:
    sub_1B8880C(limitCountSupport, v7);
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
    0LL);
}


void __fastcall CharaGraphUtil__PushRequestWithConfirmDialog(
        UserServantEntity_o *nextUserServantEntity,
        System_Action_bool__o *onCloseDialog,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
  __int64 v7; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *SelfUserGame; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2
  int64_t seriazlier; // x23
  UserServantEntity_o *v19; // x8
  __int128 v20; // q1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v22; // x21
  UserServantEntity_o *v23; // x28
  __int64 v24; // x23
  void *monitor; // x24
  Il2CppObject *Entity; // x26
  int32_t v27; // w23
  int32_t v28; // w27
  int32_t v29; // w0
  ServantEntity_o *v30; // x22
  int32_t v31; // w23
  int32_t v32; // w0
  int32_t ServantLimitCountSealAfter; // w25
  System_String_o *v34; // x21
  System_String_o *v35; // x23
  System_Object_array *v36; // x24
  int32_t Rarity; // w28
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x28
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x28
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x26
  int32_t v47; // w0
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x20
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *v56; // x20
  System_String_o *v57; // x20
  System_String_o *v58; // x22
  System_String_o *v59; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v61; // x25
  __int64 v62; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4A5A578 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__);
    sub_1B885B0(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A5A578 = 1;
  }
  v7 = sub_1B887FC(CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_53;
  *(_QWORD *)(v7 + 16) = onCloseDialog;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)onCloseDialog, v10, v11);
  *(_QWORD *)(v7 + 24) = nextUserServantEntity;
  v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v7 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)nextUserServantEntity, v13, v14);
  *(_QWORD *)(v7 + 32) = callbackOnEndRequest;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)callbackOnEndRequest, v15, v16);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_53;
  seriazlier = (int64_t)SelfUserGame[1].fields.seriazlier;
  if ( !seriazlier )
  {
LABEL_10:
    CharaGraphUtil__PushRequest((UserServantEntity_o *)*v12, *(NetworkManager_ResultCallbackFunc_o **)(v7 + 32), v17);
    return;
  }
  v19 = (UserServantEntity_o *)*v12;
  if ( !*v12 )
    goto LABEL_53;
  v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
  *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v64.fields.fakeValue = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v63 = v64;
  if ( seriazlier == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v63, 0LL) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                 SelfUserGame,
                                                                 seriazlier,
                                                                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_53;
  v23 = (UserServantEntity_o *)SelfUserGame;
  monitor = SelfUserGame[1].monitor;
  v24 = *(_QWORD *)&SelfUserGame[1].fields._MasterKind_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v65.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v65.fields.fakeValue = v24;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                 v65,
                                                                 0LL);
  if ( !Master_object )
    goto LABEL_53;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)SelfUserGame,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23->fields.svtId, 0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                 v23->fields.limitCount,
                                                                 0LL);
  if ( !v22 )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                 (ServantLimitImageMaster_o *)v22,
                                                                 v27,
                                                                 (int32_t)SelfUserGame,
                                                                 0LL);
  if ( !*v12 )
    goto LABEL_53;
  v28 = (int)SelfUserGame;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*v12)[5], 0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                 v29,
                                                                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !*v12 )
    goto LABEL_53;
  v30 = (ServantEntity_o *)SelfUserGame;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                 (*v12)[5],
                                                                 0LL);
  if ( !*v12 )
    goto LABEL_53;
  v31 = (int)SelfUserGame;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*v12)[6], 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)v22,
                                 v31,
                                 v32,
                                 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v36 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(v23, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v36 )
LABEL_53:
    sub_1B8880C(SelfUserGame, v9);
  v40 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B886EC(
                                                                   SelfUserGame,
                                                                   v36->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( !v36->max_length )
    goto LABEL_54;
  v36->m_Items[0] = v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36->m_Items, (int32_t)v40, v38, v39);
  if ( !Entity )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__getClassName(
                                                                 (ServantEntity_o *)Entity,
                                                                 0LL);
  v43 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B886EC(
                                                                   SelfUserGame,
                                                                   v36->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v36->max_length <= 1 )
    goto LABEL_54;
  v36->m_Items[1] = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v36->m_Items[1], (int32_t)v43, v41, v42);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__getName(
                                                                 (ServantEntity_o *)Entity,
                                                                 v28,
                                                                 -1,
                                                                 0LL);
  v46 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B886EC(
                                                                   SelfUserGame,
                                                                   v36->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v36->max_length <= 2 )
    goto LABEL_54;
  v36->m_Items[2] = v46;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v36->m_Items[2], (int32_t)v46, v44, v45);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)*v12;
  if ( !*v12 )
    goto LABEL_53;
  v47 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)Rarity__getRarityType(v47, 0LL);
  v50 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B886EC(
                                                                   SelfUserGame,
                                                                   v36->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v36->max_length <= 3 )
    goto LABEL_54;
  v36->m_Items[3] = v50;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v36->m_Items[3], (int32_t)v50, v48, v49);
  if ( !v30 )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__getClassName(v30, 0LL);
  v53 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B886EC(
                                                                   SelfUserGame,
                                                                   v36->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v36->max_length <= 4 )
    goto LABEL_54;
  v36->m_Items[4] = v53;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v36->m_Items[4], (int32_t)v53, v51, v52);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__getName(
                                                                 v30,
                                                                 ServantLimitCountSealAfter,
                                                                 -1,
                                                                 0LL);
  v56 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B886EC(
                                                                   SelfUserGame,
                                                                   v36->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_55:
      v62 = sub_1B88830(SelfUserGame);
      sub_1B886D8(v62, 0LL);
    }
  }
  if ( v36->max_length <= 5 )
LABEL_54:
    sub_1B88814(SelfUserGame, v9);
  v36->m_Items[5] = v56;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v36->m_Items[5], (int32_t)v56, v54, v55);
  v57 = System_String__Format_61721540(v35, v36, 0LL);
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v61 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v61,
    (Il2CppObject *)v7,
    Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__,
    0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    goto LABEL_53;
  CommonUI__OpenConfirmDialog_30493912(
    (CommonUI_o *)Instance,
    v34,
    v57,
    v58,
    v59,
    v61,
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
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4A5A57A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__);
    sub_1B885B0(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
    byte_4A5A57A = 1;
  }
  v5 = sub_1B887FC(CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v11, 0LL);
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
  if ( (byte_4A5A57B & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A5A57B = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v2->fields.isDecide,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  if ( v2->fields.isDecide )
  {
    v5 = v2->fields.CS___8__locals1;
    if ( v5 )
    {
      CharaGraphUtil__PushRequest(v5->fields.nextUserServantEntity, v5->fields.callbackOnEndRequest, v4);
      return;
    }
LABEL_8:
    sub_1B8880C(this, method);
  }
}