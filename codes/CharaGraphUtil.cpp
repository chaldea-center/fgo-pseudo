void CharaGraphUtil__PushRequest(
        UserServantEntity_o *selectUserSvt,
        NetworkManager_ResultCallbackFunc_o *callbackOnEndRequest,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2

  if ( (byte_593799F & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593799F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  Instance = NetworkManager__getRequest_object_(
               callbackOnEndRequest,
               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !Instance )
LABEL_8:
    sub_21FFECC(Instance, v6);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UserServantEntity_o **v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x2
  int64_t v30; // x21
  UserServantEntity_o *v31; // x8
  __int128 v32; // q1
  __int64 v33; // x1
  Il2CppObject *Master_object; // x22
  __int64 v35; // x26
  __int64 v36; // x28
  ServantEntity_o *ServantEntity; // x24
  int32_t v38; // w29
  __int64 v39; // x2
  int32_t v40; // w27
  System_String_o *v41; // x21
  System_String_o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  System_Object_array *v45; // x25
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  Il2CppObject *v52; // x29
  __int64 v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  Il2CppObject *v60; // x29
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x28
  __int64 v64; // x29
  int32_t v65; // w0
  __int64 v66; // x8
  int32_t v67; // w26
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  Il2CppObject *v74; // x26
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  Il2CppObject *v81; // x26
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  Il2CppObject *v88; // x26
  UserServantEntity_o *v89; // x8
  int32_t v90; // w20
  int32_t v91; // w0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  Il2CppObject *v98; // x20
  System_String_o *v99; // x20
  System_String_o *v100; // x22
  System_String_o *v101; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v103; // x25
  __int64 v104; // x2
  __int64 v105; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_593799E & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__);
    sub_21FFC50(&CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_593799E = 1;
  }
  v7 = sub_21FFEBC(CharaGraphUtil___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_53;
  *(_QWORD *)(v7 + 16) = onCloseDialog;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)onCloseDialog, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = nextUserServantEntity;
  v16 = (UserServantEntity_o **)(v7 + 24);
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v7 + 24),
    (int32_t)nextUserServantEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)(v7 + 32) = callbackOnEndRequest;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v7 + 32),
    (int32_t)callbackOnEndRequest,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v107.fields.fakeValue = v32;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v29);
  v106 = v107;
  if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v106, 0) )
    goto LABEL_10;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33, v29);
  DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SelfUserGame = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_53;
  SelfUserGame = (__int64)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                            v30,
                            (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !SelfUserGame )
    goto LABEL_53;
  v35 = SelfUserGame;
  SelfUserGame = (__int64)UserServantEntity__GetServantEntity((UserServantEntity_o *)SelfUserGame, -1, 0);
  if ( !*v16 )
    goto LABEL_53;
  v36 = SelfUserGame;
  ServantEntity = UserServantEntity__GetServantEntity(*v16, -1, 0);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v35, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_53;
  if ( !*v16 )
    goto LABEL_53;
  v38 = *(_DWORD *)(SelfUserGame + 24);
  SelfUserGame = (__int64)UserServantEntity__GetOverwriteStatus(*v16, 0, 0);
  if ( !SelfUserGame )
    goto LABEL_53;
  v40 = *(_DWORD *)(SelfUserGame + 24);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v39);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  v45 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 6);
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v43, v44);
  SelfUserGame = (__int64)Rarity__getRarityType(v38, 0);
  if ( !v45 )
    goto LABEL_53;
  v52 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( !LODWORD(v45->max_length) )
    goto LABEL_54;
  v45->m_Items[0] = v52;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v45->m_Items, (int32_t)v52, v46, v47, v48, v49, v50, v51);
  if ( !v36 )
    goto LABEL_53;
  SelfUserGame = (__int64)ServantEntity__getClassName((ServantEntity_o *)v36, 0);
  v60 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( (v45->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_54;
  v45->m_Items[1] = v60;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->m_Items[1], (int32_t)v60, v54, v55, v56, v57, v58, v59);
  v64 = *(_QWORD *)(v36 + 16);
  v63 = *(_QWORD *)(v36 + 24);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v61, v62);
  *(_QWORD *)&v108.fields.currentCryptoKey = v64;
  *(_QWORD *)&v108.fields.fakeValue = v63;
  v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v108, 0);
  v66 = *(_QWORD *)(v35 + 96);
  *(_QWORD *)&v109.fields.fakeValue = *(_QWORD *)(v35 + 104);
  v67 = v65;
  *(_QWORD *)&v109.fields.currentCryptoKey = v66;
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v109, 0);
  if ( !Master_object )
LABEL_53:
    sub_21FFECC(SelfUserGame, v9);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v67,
                            SelfUserGame,
                            1,
                            1,
                            0);
  v74 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( LODWORD(v45->max_length) <= 2 )
    goto LABEL_54;
  v45->m_Items[2] = v74;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->m_Items[2], (int32_t)v74, v68, v69, v70, v71, v72, v73);
  SelfUserGame = (__int64)Rarity__getRarityType(v40, 0);
  v81 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( (v45->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_54;
  v45->m_Items[3] = v81;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->m_Items[3], (int32_t)v81, v75, v76, v77, v78, v79, v80);
  if ( !ServantEntity )
    goto LABEL_53;
  SelfUserGame = (__int64)ServantEntity__getClassName(ServantEntity, 0);
  v88 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_55;
  }
  if ( LODWORD(v45->max_length) <= 4 )
    goto LABEL_54;
  v45->m_Items[4] = v88;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->m_Items[4], (int32_t)v88, v82, v83, v84, v85, v86, v87);
  SelfUserGame = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(ServantEntity->fields.id, 0);
  v89 = *v16;
  if ( !*v16 )
    goto LABEL_53;
  v90 = SelfUserGame;
  v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v89->fields.limitCount, 0);
  SelfUserGame = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            (ServantLimitImageMaster_o *)Master_object,
                            v90,
                            v91,
                            1,
                            1,
                            0);
  v98 = (Il2CppObject *)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = sub_21FFDA4(SelfUserGame, v45->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_55:
      v105 = sub_21FFEF0(SelfUserGame, v53);
      sub_21FFD90(v105, 0);
    }
  }
  if ( LODWORD(v45->max_length) <= 5 )
LABEL_54:
    sub_21FFED4(SelfUserGame);
  v45->m_Items[5] = v98;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->m_Items[5], (int32_t)v98, v92, v93, v94, v95, v96, v97);
  v99 = System_String__Format_75484712(v42, v45, 0);
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v103 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v103,
    (Il2CppObject *)v7,
    Method_CharaGraphUtil___c__DisplayClass0_0__PushRequestWithConfirmDialog_g__OnCloseDialog_0__,
    0);
  SelfUserGame = (__int64)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v104);
  if ( !Instance )
    goto LABEL_53;
  CommonUI__OpenConfirmDialog_37292168(
    (CommonUI_o *)Instance,
    v41,
    v99,
    v100,
    v101,
    v103,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_476E8C0 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_59379A0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__);
    sub_21FFC50(&CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
    byte_59379A0 = 1;
  }
  v5 = sub_21FFEBC(CharaGraphUtil___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance(v14),
        v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_CharaGraphUtil___c__DisplayClass0_1__PushRequestWithConfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_21FFECC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_37292452((CommonUI_o *)Instance, v16, 0);
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
  if ( (byte_59379A1 & 1) == 0 )
  {
    this = (CharaGraphUtil___c__DisplayClass0_1_o *)sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    byte_59379A1 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)CS___8__locals1->fields.onCloseDialog,
    v2->fields.isDecide,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
  if ( v2->fields.isDecide )
  {
    v5 = v2->fields.CS___8__locals1;
    if ( v5 )
    {
      CharaGraphUtil__PushRequest(v5->fields.nextUserServantEntity, v5->fields.callbackOnEndRequest, v4);
      return;
    }
LABEL_8:
    sub_21FFECC(this, method);
  }
}