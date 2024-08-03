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
  UserServantCollectionMaster_o *v13; // x21
  int64_t userId; // x22
  __int64 v15; // x24
  __int64 v16; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v18; // q0
  int64_t pushUserSvtId; // x8
  UserServantEntity_Fields *p_fields; // x21
  int64_t v21; // x0
  __int128 v22; // q1
  Il2CppObject *Request_object; // x0
  __int128 v24; // q1
  CardFavoriteRequest_o *v25; // x20
  int32_t v26; // w26
  int32_t v27; // w27
  int32_t v28; // w28
  int32_t v29; // w29
  bool IsLock; // w21
  char v31; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v35; // w0
  __int64 v36; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
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

  if ( (byte_49FB841 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, callbackOnEndRequest);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_49FB841 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !selectUserSvt )
    goto LABEL_18;
  v13 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = SelfUserGame->fields.userId;
  v16 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&selectUserSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v16;
  *(_QWORD *)&v48.fields.fakeValue = v15;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v48, 0LL);
  if ( !v13 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v13, userId, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v18 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  p_fields = &selectUserSvt->fields;
  *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&selectUserSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v47.fields.fakeValue = v18;
  v43 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v46 = v47;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v46, 0LL);
  v22 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v42 = v21;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v22;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v45, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callbackOnEndRequest,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v24 = *(_OWORD *)&selectUserSvt->fields.id.fields.fakeValue;
  v25 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v24;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v44, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      selectUserSvt->fields.imageLimitCount,
                      0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(selectUserSvt->fields.dispLimitCount, 0LL);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          selectUserSvt->fields.commandCardLimitCount,
          0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(selectUserSvt->fields.iconLimitCount, 0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          selectUserSvt->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(selectUserSvt, 0LL);
  limitCountSupport = (Il2CppObject *)UserServantEntity__IsChoice(selectUserSvt, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v31 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  selectUserSvt->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       selectUserSvt->fields.randomLimitCount,
                       0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          selectUserSvt->fields.randomLimitCountSupport,
          0LL);
  v36 = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v49.fields.fakeValue = *(_QWORD *)&selectUserSvt->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v35;
  *(_QWORD *)&v49.fields.currentCryptoKey = v36;
  limitCountSupport = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v49, 0LL);
  if ( !v25 )
LABEL_18:
    sub_1B64324(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v25,
    targetUsrSVtId,
    imageLimitCount,
    v26,
    v27,
    v28,
    v29,
    favoriteUserSvtId == v40,
    IsLock,
    v31 & 1,
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
  DataMasterBase_TMaster__TEntity__PKType__o *SelfUserGame; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  const MethodInfo *v35; // x2
  int64_t seriazlier; // x23
  UserServantEntity_o *v37; // x8
  __int128 v38; // q1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v40; // x21
  UserServantEntity_o *v41; // x28
  __int64 v42; // x23
  void *monitor; // x24
  Il2CppObject *Entity; // x26
  int32_t v45; // w23
  int32_t v46; // w27
  int32_t v47; // w0
  ServantEntity_o *v48; // x22
  int32_t v49; // w23
  int32_t v50; // w0
  int32_t ServantLimitCountSealAfter; // w25
  System_String_o *v52; // x21
  System_String_o *v53; // x23
  System_Object_array *v54; // x24
  int32_t Rarity; // w28
  __int64 v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x28
  int32_t v60; // w2
  int32_t v61; // w3
  Il2CppObject *v62; // x28
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x26
  int32_t v66; // w0
  int32_t v67; // w2
  int32_t v68; // w3
  Il2CppObject *v69; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  Il2CppObject *v72; // x20
  int32_t v73; // w2
  int32_t v74; // w3
  Il2CppObject *v75; // x20
  System_String_o *v76; // x20
  System_String_o *v77; // x22
  System_String_o *v78; // x23
  Il2CppObject *Instance; // x24
  __int64 v80; // x1
  __int64 v81; // x2
  CommonConfirmDialog_ClickDelegate_o *v82; // x25
  __int64 v83; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_49FB840 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, onCloseDialog);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&object___TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B640C8(&Rarity_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1B640C8(&Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__, v20);
    sub_1B640C8(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v22);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v23);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v24);
    sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v25);
    byte_49FB840 = 1;
  }
  v26 = sub_1B64314(CharaGraphUtil___c__DisplayClass0_0_TypeInfo, onCloseDialog, callbackOnEndRequest);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_53;
  *(_QWORD *)(v26 + 16) = onCloseDialog;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 16), (int32_t)onCloseDialog, v28, v29);
  *(_QWORD *)(v26 + 24) = nextUserServantEntity;
  v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v26 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 24), (int32_t)nextUserServantEntity, v31, v32);
  *(_QWORD *)(v26 + 32) = callbackOnEndRequest;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)callbackOnEndRequest, v33, v34);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_53;
  seriazlier = (int64_t)SelfUserGame[1].fields.seriazlier;
  if ( !seriazlier )
  {
LABEL_10:
    CharaGraphUtil__PushRequest((UserServantEntity_o *)*v30, *(NetworkManager_ResultCallbackFunc_o **)(v26 + 32), v35);
    return;
  }
  v37 = (UserServantEntity_o *)*v30;
  if ( !*v30 )
    goto LABEL_53;
  v38 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
  *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v85.fields.fakeValue = v38;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v84 = v85;
  if ( seriazlier == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v84, 0LL) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v40 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                 SelfUserGame,
                                                                 seriazlier,
                                                                 (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_53;
  v41 = (UserServantEntity_o *)SelfUserGame;
  monitor = SelfUserGame[1].monitor;
  v42 = *(_QWORD *)&SelfUserGame[1].fields._MasterKind_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v86.fields.fakeValue = v42;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                 v86,
                                                                 0LL);
  if ( !Master_object )
    goto LABEL_53;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)SelfUserGame,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41->fields.svtId, 0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                 v41->fields.limitCount,
                                                                 0LL);
  if ( !v40 )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                 (ServantLimitImageMaster_o *)v40,
                                                                 v45,
                                                                 (int32_t)SelfUserGame,
                                                                 0LL);
  if ( !*v30 )
    goto LABEL_53;
  v46 = (int)SelfUserGame;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*v30)[5], 0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                 v47,
                                                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !*v30 )
    goto LABEL_53;
  v48 = (ServantEntity_o *)SelfUserGame;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                 (*v30)[5],
                                                                 0LL);
  if ( !*v30 )
    goto LABEL_53;
  v49 = (int)SelfUserGame;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*v30)[6], 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)v40,
                                 v49,
                                 v50,
                                 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v54 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(v41, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v54 )
LABEL_53:
    sub_1B64324(SelfUserGame);
  v59 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B64204(
                                                                   SelfUserGame,
                                                                   v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( !v54->max_length )
    goto LABEL_54;
  v54->m_Items[0] = v59;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v54->m_Items, (int32_t)v59, v57, v58);
  if ( !Entity )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__getClassName(
                                                                 (ServantEntity_o *)Entity,
                                                                 0LL);
  v62 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B64204(
                                                                   SelfUserGame,
                                                                   v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v54->max_length <= 1 )
    goto LABEL_54;
  v54->m_Items[1] = v62;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->m_Items[1], (int32_t)v62, v60, v61);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__getName(
                                                                 (ServantEntity_o *)Entity,
                                                                 v46,
                                                                 -1,
                                                                 0LL);
  v65 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B64204(
                                                                   SelfUserGame,
                                                                   v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v54->max_length <= 2 )
    goto LABEL_54;
  v54->m_Items[2] = v65;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->m_Items[2], (int32_t)v65, v63, v64);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)*v30;
  if ( !*v30 )
    goto LABEL_53;
  v66 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)Rarity__getRarityType(v66, 0LL);
  v69 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B64204(
                                                                   SelfUserGame,
                                                                   v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v54->max_length <= 3 )
    goto LABEL_54;
  v54->m_Items[3] = v69;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->m_Items[3], (int32_t)v69, v67, v68);
  if ( !v48 )
    goto LABEL_53;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__getClassName(v48, 0LL);
  v72 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B64204(
                                                                   SelfUserGame,
                                                                   v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( v54->max_length <= 4 )
    goto LABEL_54;
  v54->m_Items[4] = v72;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->m_Items[4], (int32_t)v72, v70, v71);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__getName(
                                                                 v48,
                                                                 ServantLimitCountSealAfter,
                                                                 -1,
                                                                 0LL);
  v75 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B64204(
                                                                   SelfUserGame,
                                                                   v54->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_55:
      v83 = sub_1B64348(SelfUserGame);
      sub_1B641F0(v83, 0LL);
    }
  }
  if ( v54->max_length <= 5 )
LABEL_54:
    sub_1B6432C(SelfUserGame, v56);
  v54->m_Items[5] = v75;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->m_Items[5], (int32_t)v75, v73, v74);
  v76 = System_String__Format_61389904(v53, v54, 0LL);
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v82 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v80, v81);
  CommonConfirmDialog_ClickDelegate___ctor(
    v82,
    (Il2CppObject *)v26,
    Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__,
    0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    goto LABEL_53;
  CommonUI__OpenConfirmDialog_30344968(
    (CommonUI_o *)Instance,
    v52,
    v76,
    v77,
    v78,
    v82,
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_49FB842 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__, v6);
    sub_1B640C8(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo, v7);
    byte_49FB842 = 1;
  }
  v8 = sub_1B64314(CharaGraphUtil___c__DisplayClass0_1_TypeInfo, isDecide, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v10, v11),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v8,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v9);
  }
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v15, 0LL);
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
  if ( (byte_49FB843 & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    byte_49FB843 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v2->fields.isDecide,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
  if ( v2->fields.isDecide )
  {
    v5 = v2->fields.CS___8__locals1;
    if ( v5 )
    {
      CharaGraphUtil__PushRequest(v5->fields.nextUserServantEntity, v5->fields.callbackOnEndRequest, v4);
      return;
    }
LABEL_8:
    sub_1B64324(this);
  }
}