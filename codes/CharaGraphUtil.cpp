void CharaGraphUtil__PushRequest(
        UserServantEntity_o *selectUserSvt,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4E03D7A & 1) == 0 )
  {
    sub_1CE6700(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E03D7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               callbackOnEndRequest,
               (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !Instance )
LABEL_8:
    sub_1CE6958(Instance, v6);
  CardFavoriteRequest__beginRequestPush((CardFavoriteRequest_o *)Instance, selectUserSvt, 0);
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
  UserServantEntity_o **v16; // x20
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
  int64_t v30; // x21
  UserServantEntity_o *v31; // x8
  __int128 v32; // q1
  Il2CppObject *Master_object; // x22
  __int64 v34; // x26
  __int64 v35; // x28
  ServantEntity_o *ServantEntity; // x24
  int32_t v37; // w29
  int32_t v38; // w27
  System_String_o *v39; // x21
  System_String_o *v40; // x23
  System_Object_array *v41; // x25
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  Il2CppObject *v48; // x29
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  Il2CppObject *v55; // x29
  __int64 v56; // x28
  __int64 v57; // x29
  int32_t v58; // w0
  __int64 v59; // x8
  int32_t v60; // w26
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  Il2CppObject *v67; // x26
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  Il2CppObject *v74; // x26
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  Il2CppObject *v81; // x26
  UserServantEntity_o *v82; // x8
  int32_t v83; // w20
  int32_t v84; // w0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  Il2CppObject *v91; // x20
  System_String_o *v92; // x20
  System_String_o *v93; // x22
  System_String_o *v94; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v96; // x25
  __int64 v97; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  if ( (byte_4E03D79 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&object___TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Rarity_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__);
    sub_1CE6700(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
    sub_1CE6700(&StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1CE6700(&StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1CE6700(&StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4E03D79 = 1;
  }
  v7 = sub_1CE694C(CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_53;
  *(_QWORD *)(v7 + 16) = onCloseDialog;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)onCloseDialog, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = nextUserServantEntity;
  v16 = (UserServantEntity_o **)(v7 + 24);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)nextUserServantEntity, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v7 + 32) = callbackOnEndRequest;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)callbackOnEndRequest, v23, v24, v25, v26, v27, v28);
  SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_53;
  v30 = *(_QWORD *)(SelfUserGame + 128);
  if ( !v30 )
  {
LABEL_10:
    CharaGraphUtil__PushRequest(*v16, *(NetworkManager_ResultCallbackFunc_o **)(v7 + 32), v29);
    return;
  }
  v31 = *v16;
  if ( !*v16 )
    goto LABEL_53;
  v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
  *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v99.fields.fakeValue = v32;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v98 = v99;
  if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v98, 0) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_53;
  SelfUserGame = (__int64)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                            v30,
                            (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_53;
  v34 = SelfUserGame;
  SelfUserGame = (__int64)UserServantEntity__GetServantEntity((UserServantEntity_o *)SelfUserGame, -1, 0);
  if ( !*v16 )
    goto LABEL_53;
  v35 = SelfUserGame;
  ServantEntity = UserServantEntity__GetServantEntity(*v16, -1, 0);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v34, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_53;
  if ( !*v16 )
    goto LABEL_53;
  v37 = *(_DWORD *)(SelfUserGame + 24);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus(*v16, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_53;
  v38 = *(_DWORD *)(SelfUserGame + 24);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  v41 = (System_Object_array *)sub_1CE67A8(object___TypeInfo, 6);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (__int64)Rarity__getRarityType(v37, 0);
  if ( !v41 )
    goto LABEL_53;
  v48 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1CE683C(SelfUserGame, v41->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( !LODWORD(v41->max_length) )
    goto LABEL_54;
  v41->m_Items[0] = v48;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)v41->m_Items, (int32_t)v48, v42, v43, v44, v45, v46, v47);
  if ( !v35 )
    goto LABEL_53;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)v35, 0);
  v55 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1CE683C(SelfUserGame, v41->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( LODWORD(v41->max_length) <= 1 )
    goto LABEL_54;
  v41->m_Items[1] = v55;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v41->m_Items[1], (int32_t)v55, v49, v50, v51, v52, v53, v54);
  v57 = *(_QWORD *)(v35 + 16);
  v56 = *(_QWORD *)(v35 + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v100.fields.currentCryptoKey = v57;
  *(_QWORD *)&v100.fields.fakeValue = v56;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v100, 0);
  v59 = *(_QWORD *)(v34 + 96);
  *(_QWORD *)&v101.fields.fakeValue = *(_QWORD *)(v34 + 104);
  v60 = v58;
  *(_QWORD *)&v101.fields.currentCryptoKey = v59;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v101, 0);
  if ( !Master_object )
LABEL_53:
    sub_1CE6958(SelfUserGame, v9);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v60,
                            SelfUserGame,
                            1,
                            1,
                            0);
  v67 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1CE683C(SelfUserGame, v41->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( LODWORD(v41->max_length) <= 2 )
    goto LABEL_54;
  v41->m_Items[2] = v67;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v41->m_Items[2], (int32_t)v67, v61, v62, v63, v64, v65, v66);
  SelfUserGame = (__int64)Rarity__getRarityType(v38, 0);
  v74 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1CE683C(SelfUserGame, v41->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( LODWORD(v41->max_length) <= 3 )
    goto LABEL_54;
  v41->m_Items[3] = v74;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v41->m_Items[3], (int32_t)v74, v68, v69, v70, v71, v72, v73);
  if ( !ServantEntity )
    goto LABEL_53;
  SelfUserGame = (__int64)ServantEntity__getClassName(ServantEntity, 0);
  v81 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1CE683C(SelfUserGame, v41->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( LODWORD(v41->max_length) <= 4 )
    goto LABEL_54;
  v41->m_Items[4] = v81;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v41->m_Items[4], (int32_t)v81, v75, v76, v77, v78, v79, v80);
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(ServantEntity->fields.id, 0);
  v82 = *v16;
  if ( !*v16 )
    goto LABEL_53;
  v83 = SelfUserGame;
  v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v82->fields.limitCount, 0);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v83,
                            v84,
                            1,
                            1,
                            0);
  v91 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_1CE683C(SelfUserGame, v41->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_55:
      v97 = sub_1CE697C(SelfUserGame);
      sub_1CE6828(v97, 0);
    }
  }
  if ( LODWORD(v41->max_length) <= 5 )
LABEL_54:
    sub_1CE6960(SelfUserGame);
  v41->m_Items[5] = v91;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v41->m_Items[5], (int32_t)v91, v85, v86, v87, v88, v89, v90);
  v92 = System_String__Format_65164272(v40, v41, 0);
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v96 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v96,
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
    goto LABEL_53;
  CommonUI__OpenConfirmDialog_31919840(
    (CommonUI_o *)Instance,
    v39,
    v92,
    v93,
    v94,
    v96,
    *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 508LL),
    *(_DWORD *)(*(_QWORD *)(SelfUserGame + 184) + 520LL),
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

  if ( (byte_4E03D7B & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__);
    sub_1CE6700(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
    byte_4E03D7B = 1;
  }
  v5 = sub_1CE694C(CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1CE6958(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31920128((CommonUI_o *)Instance, v15, 0);
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
  if ( (byte_4E03D7C & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_1CE6700(&Method_ActionExtensions_Call_bool___);
    byte_4E03D7C = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v2->fields.isDecide,
    (const MethodInfo_3149904 *)Method_ActionExtensions_Call_bool___);
  if ( v2->fields.isDecide )
  {
    v5 = v2->fields.CS___8__locals1;
    if ( v5 )
    {
      CharaGraphUtil__PushRequest(v5->fields.nextUserServantEntity, v5->fields.callbackOnEndRequest, v4);
      return;
    }
LABEL_8:
    sub_1CE6958(this, method);
  }
}