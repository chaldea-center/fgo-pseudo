void __fastcall SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FDA50 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FDA50 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__Callback(
        SupportServantSelectMenu_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  SupportServantSelectMenu_CallbackFunc_o *v9; // x22
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(
      p_callbackFunc,
      0LL,
      *(System_String_array ***)&classPos,
      (System_String_array **)entity,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    SupportServantSelectMenu_CallbackFunc__Invoke(v9, result, classPos, entity, 0LL);
  }
}


void __fastcall SupportServantSelectMenu__ClearScrollValue(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_B170D4();
  ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0LL);
}


void __fastcall SupportServantSelectMenu__EndCardFavoriteRequest(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  struct SupportServantListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  SupportServantListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_40FDA4F & 1) == 0 )
  {
    sub_B16FFC(&SupportServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_SupportServantSelectMenu_OnSelectItem__, v4);
    byte_40FDA4F = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v6 = this->fields.supportServantListViewManager,
        v11 = (SupportServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                                v7,
                                                                v8,
                                                                v9,
                                                                v10),
        SupportServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          0LL),
        !v6) )
  {
    sub_B170D4();
  }
  v6->fields.callbackFunc = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SupportServantListViewManager__SetMode_31951392(v6, 2, v18);
}


void __fastcall SupportServantSelectMenu__EndClickTabChoice(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2
  SupportServantListViewManager_o *v6; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (v6 = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    SupportServantListViewManager__RequestListObject_31945552(v6, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 2, method);
}


void __fastcall SupportServantSelectMenu__EndClickTabLock(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2
  SupportServantListViewManager_o *v6; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (v6 = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    SupportServantListViewManager__RequestListObject_31945552(v6, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 1, method);
}


void __fastcall SupportServantSelectMenu__EndClickTabNormal(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2
  SupportServantListViewManager_o *v6; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (v6 = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    SupportServantListViewManager__RequestListObject_31945552(v6, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 0, method);
}


void __fastcall SupportServantSelectMenu__EndClickTabPush(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2
  SupportServantListViewManager_o *v6; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (v6 = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    SupportServantListViewManager__RequestListObject_31945552(v6, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 3, method);
}


void __fastcall SupportServantSelectMenu__EndOpen(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40FDA44 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SupportServantSelectMenu_OnSelectItem__, v6);
    byte_40FDA44 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v8 = (SupportServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                         SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3,
                                                         v4);
  SupportServantListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager )
    sub_B170D4();
  supportServantListViewManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&supportServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  SupportServantListViewManager__SetMode_31951392(supportServantListViewManager, 2, v15);
}


void __fastcall SupportServantSelectMenu__EndStatusSync(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_requestCallback; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x19
  struct SupportServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (BattleServantConfConponent_o *)&this->fields.requestCallback;
  v9 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0LL;
    sub_B16F98(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SupportServantSelectMenu_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall SupportServantSelectMenu__Init(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  System_String_o *v6; // x0
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v9; // x2

  if ( (byte_40FDA42 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12503/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v3);
    byte_40FDA42 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_10;
  SupportServantListViewManager__DestroyList(supportServantListViewManager, method);
  this->fields.state = 0;
  explanationLabel = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12503/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, 0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, v6, 0LL), (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0LL);
  SupportServantSelectMenu__setModeTabKind(this, 0, v9);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantSelectMenu__ModifyItem(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_B170D4();
  SupportServantListViewManager__RequestListObject_31945552(supportServantListViewManager, 4, v2);
}


void __fastcall SupportServantSelectMenu__OnClickCancel(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewManager_o *supportServantListViewManager; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  SupportServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_40FDA4B & 1) == 0 )
  {
    sub_B16FFC(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SupportServantSelectMenu_endCancelButton__, v4);
    sub_B16FFC(&StringLiteral_4003/*"ClassPos"*/, v5);
    byte_40FDA4B = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4003/*"ClassPos"*/, this->fields.classPos, 0LL);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_B170D4();
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0LL);
    v11 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                              SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                              v7,
                                                              v8,
                                                              v9,
                                                              v10);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_endCancelButton__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v11, v12);
  }
}


void __fastcall SupportServantSelectMenu__OnClickScaleChange(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x1
  SupportServantListViewManager_o *v6; // x0
  UISprite_o *scaleChangeTabSprite; // x19
  System_String_o *ScaleButtonSpriteName; // x0

  if ( (byte_40FDA4D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDA4D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ChangeIconScale(supportServantListViewManager, v3),
          (v6 = this->fields.supportServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          ScaleButtonSpriteName = SupportServantListViewManager__GetScaleButtonSpriteName(v6, v5),
          !scaleChangeTabSprite) )
    {
      sub_B170D4();
    }
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__OnSelectItem(
        SupportServantSelectMenu_o *this,
        int32_t kind,
        int32_t offset,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  MethodInfo *v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  System_Int32_array **Item; // x1
  SupportServantListViewItem_o **v46; // x20
  const MethodInfo *v47; // x1
  int32_t tabModeKind; // w9
  int32_t v49; // w0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  struct SupportServantListViewManager_o *v54; // x19
  SupportServantListViewManager_CallbackFunc_o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x2
  SupportServantListViewItem_o *v63; // x8
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v65; // x2
  int64_t pushUserSvtId; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v68; // q1
  const MethodInfo *v69; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v71; // x4
  int32_t classPos; // w2
  UserServantEntity_o *v73; // x3
  int32_t v74; // w1
  const MethodInfo *v75; // x1
  SupportServantListViewItem_o *v76; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x26
  WebViewManager_o *v80; // x0
  WarQuestSelectionMaster_o *v81; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v82; // x21
  __int64 v83; // x22
  __int64 v84; // x23
  int32_t v85; // w0
  ServantEntity_o *v86; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v88; // w22
  int32_t v89; // w0
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v91; // x1
  int32_t v92; // w27
  int32_t SvtId; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v94; // x8
  int32_t v95; // w22
  int32_t v96; // w0
  int32_t v97; // w23
  System_String_o *v98; // x21
  System_String_o *v99; // x22
  __int64 v100; // x2
  __int64 v101; // x24
  int32_t Rarity; // w26
  System_String_o *RarityType; // x0
  __int64 v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x26
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x26
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x25
  UserServantEntity_o *v124; // x0
  int32_t v125; // w0
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x25
  ServantEntity_o *servantEntity; // x0
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x25
  ServantEntity_o *v139; // x0
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x20
  System_String_o *v146; // x20
  System_String_o *v147; // x22
  System_String_o *v148; // x23
  CommonUI_o *v149; // x24
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  __int64 v153; // x4
  CommonConfirmDialog_ClickDelegate_o *v154; // x25
  const MethodInfo *v155; // x1
  UnityEngine_GameObject_o *v156; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16

  if ( (byte_40FDA45 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&SupportServantListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&object___TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B16FFC(&Rarity_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_B16FFC(&SoundManager_TypeInfo, v23);
    sub_B16FFC(&Method_SupportServantSelectMenu_OnSelectItem__, v24);
    sub_B16FFC(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__, v25);
    sub_B16FFC(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_11946/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v27);
    sub_B16FFC(&StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v28);
    sub_B16FFC(&StringLiteral_11945/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v29);
    sub_B16FFC(&StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v30);
    byte_40FDA45 = 1;
  }
  v31 = sub_B170CC(
          SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo,
          *(_QWORD *)&kind,
          *(_QWORD *)&offset,
          method,
          v4);
  SupportServantSelectMenu___c__DisplayClass31_0___ctor((SupportServantSelectMenu___c__DisplayClass31_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_121;
  *(_QWORD *)(v31 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  if ( this->fields.state == 2 )
  {
    if ( (offset & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      supportServantListViewManager = this->fields.supportServantListViewManager;
      if ( !supportServantListViewManager )
        goto LABEL_121;
      Item = (System_Int32_array **)SupportServantListViewManager__GetItem(supportServantListViewManager, offset, v38);
    }
    *(_QWORD *)(v31 + 24) = Item;
    v46 = (SupportServantListViewItem_o **)(v31 + 24);
    sub_B16F98((BattleServantConfConponent_o *)(v31 + 24), Item, (System_String_array **)v38, v39, v40, v41, v42, v43);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        if ( !*v46 )
          goto LABEL_121;
        (*v46)->fields.isSwapChoice ^= 1u;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v49 = 0;
        goto LABEL_22;
      }
      if ( tabModeKind == 1 )
      {
        if ( !*v46 )
          goto LABEL_121;
        (*v46)->fields.isSwapLock ^= 1u;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v49 = 11;
        goto LABEL_22;
      }
      v63 = *v46;
      if ( !*v46 )
        goto LABEL_121;
      if ( tabModeKind == 3 )
      {
        if ( !v63->fields.isEnabled )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          this->fields.state = 2;
LABEL_23:
          v54 = this->fields.supportServantListViewManager;
          v55 = (SupportServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                  SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                                  v50,
                                                                  v51,
                                                                  v52,
                                                                  v53);
          SupportServantListViewManager_CallbackFunc___ctor(
            v55,
            (Il2CppObject *)this,
            (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
            0LL);
          if ( v54 )
          {
            v54->fields.callbackFunc = v55;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v54->fields.callbackFunc,
              (System_Int32_array **)v55,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
            SupportServantListViewManager__SetMode_31951392(v54, 2, v62);
            return;
          }
LABEL_121:
          sub_B170D4();
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        if ( !SelfUserGame )
          goto LABEL_121;
        pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
        if ( !pushUserSvtId )
          goto LABEL_39;
        if ( !*v46 )
          goto LABEL_121;
        userServantEntity = (*v46)->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_121;
        v68 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v158.fields.fakeValue = v68;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v157 = v158;
        if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v157, 0LL) )
        {
LABEL_39:
          SupportServantSelectMenu__PushRequest(this, *v46, v65);
          return;
        }
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_121;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_121;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   pushUserSvtId,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v80 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v80 )
          goto LABEL_121;
        v81 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v80,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Entity )
          goto LABEL_121;
        v82 = (DataMasterBase_WarMaster__WarEntity__int__o *)v81;
        v84 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
        v83 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v159.fields.currentCryptoKey = v84;
        *(_QWORD *)&v159.fields.fakeValue = v83;
        v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v159, 0LL);
        if ( !v82 )
          goto LABEL_121;
        v86 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v82,
                                   v85,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.svtId, 0LL);
        v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_121;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       Master_WarQuestSelectionMaster,
                                       v88,
                                       v89,
                                       0LL);
        if ( !*v46 )
          goto LABEL_121;
        v92 = ServantLimitCountSealAfter;
        SvtId = SupportServantListViewItem__get_SvtId(*v46, v91);
        if ( !*v46 )
          goto LABEL_121;
        v94 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v46)->fields.userServantEntity;
        if ( !v94 )
          goto LABEL_121;
        v95 = SvtId;
        v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v94[6], 0LL);
        v97 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, v95, v96, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v98 = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
        v99 = LocalizationManager__Get((System_String_o *)StringLiteral_11946/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
        v101 = sub_B17014(object___TypeInfo, 6LL, v100);
        Rarity = UserServantEntity__getRarity(Entity, 0LL);
        if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        RarityType = Rarity__getRarityType(Rarity, 0LL);
        if ( !v101 )
          goto LABEL_121;
        v111 = (System_Int32_array **)RarityType;
        if ( !RarityType
          || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v101 + 64LL))) != 0LL )
        {
          if ( !*(_DWORD *)(v101 + 24) )
            goto LABEL_122;
          *(_QWORD *)(v101 + 32) = v111;
          sub_B16F98((BattleServantConfConponent_o *)(v101 + 32), v111, v105, v106, v107, v108, v109, v110);
          if ( !v86 )
            goto LABEL_121;
          RarityType = ServantEntity__getClassName(v86, 0LL);
          v117 = (System_Int32_array **)RarityType;
          if ( !RarityType
            || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v101 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v101 + 24) <= 1u )
              goto LABEL_122;
            *(_QWORD *)(v101 + 40) = v117;
            sub_B16F98((BattleServantConfConponent_o *)(v101 + 40), v117, v105, v112, v113, v114, v115, v116);
            RarityType = ServantEntity__getName(v86, v92, -1, 0LL);
            v123 = (System_Int32_array **)RarityType;
            if ( !RarityType
              || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v101 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v101 + 24) <= 2u )
                goto LABEL_122;
              *(_QWORD *)(v101 + 48) = v123;
              sub_B16F98((BattleServantConfConponent_o *)(v101 + 48), v123, v105, v118, v119, v120, v121, v122);
              if ( !*v46 )
                goto LABEL_121;
              v124 = (*v46)->fields.userServantEntity;
              if ( !v124 )
                goto LABEL_121;
              v125 = UserServantEntity__getRarity(v124, 0LL);
              RarityType = Rarity__getRarityType(v125, 0LL);
              v131 = (System_Int32_array **)RarityType;
              if ( !RarityType
                || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v101 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v101 + 24) <= 3u )
                  goto LABEL_122;
                *(_QWORD *)(v101 + 56) = v131;
                sub_B16F98((BattleServantConfConponent_o *)(v101 + 56), v131, v105, v126, v127, v128, v129, v130);
                if ( !*v46 )
                  goto LABEL_121;
                servantEntity = (*v46)->fields.servantEntity;
                if ( !servantEntity )
                  goto LABEL_121;
                RarityType = ServantEntity__getClassName(servantEntity, 0LL);
                v138 = (System_Int32_array **)RarityType;
                if ( !RarityType
                  || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v101 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v101 + 24) <= 4u )
                    goto LABEL_122;
                  *(_QWORD *)(v101 + 64) = v138;
                  sub_B16F98((BattleServantConfConponent_o *)(v101 + 64), v138, v105, v133, v134, v135, v136, v137);
                  if ( !*v46 )
                    goto LABEL_121;
                  v139 = (*v46)->fields.servantEntity;
                  if ( !v139 )
                    goto LABEL_121;
                  RarityType = ServantEntity__getName(v139, v97, -1, 0LL);
                  v145 = (System_Int32_array **)RarityType;
                  if ( !RarityType
                    || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v101 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v101 + 24) > 5u )
                    {
                      *(_QWORD *)(v101 + 72) = v145;
                      sub_B16F98((BattleServantConfConponent_o *)(v101 + 72), v145, v105, v140, v141, v142, v143, v144);
                      v146 = System_String__Format_43822456(v99, (System_Object_array *)v101, 0LL);
                      v147 = LocalizationManager__Get((System_String_o *)StringLiteral_11945/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                      v148 = LocalizationManager__Get((System_String_o *)StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                      v149 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v154 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                      CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                      v150,
                                                                      v151,
                                                                      v152,
                                                                      v153);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v154,
                        (Il2CppObject *)v31,
                        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__,
                        0LL);
                      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      }
                      if ( !v149 )
                        goto LABEL_121;
                      CommonUI__OpenConfirmDialog_18236860(
                        v149,
                        v98,
                        v146,
                        v147,
                        v148,
                        v154,
                        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                        0,
                        0,
                        0LL);
                      return;
                    }
LABEL_122:
                    sub_B17100(RarityType, v104, v105);
                    sub_B170A0();
                  }
                }
              }
            }
          }
        }
        sub_B170F4(RarityType);
        sub_B170A0();
      }
      if ( v63->fields.isBase )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        SupportServantSelectMenu__Init(this, v69);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !gameObject )
          goto LABEL_121;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        if ( !*v46 )
          goto LABEL_121;
        classPos = this->fields.classPos;
        v73 = (*v46)->fields.userServantEntity;
        v74 = 2;
      }
      else
      {
        if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(*v46, v47) )
          goto LABEL_126;
        if ( !*v46 )
          goto LABEL_121;
        if ( SupportServantListViewItem__get_IsUseServant(*v46, v75) )
          goto LABEL_126;
        v76 = *v46;
        if ( !*v46 )
          goto LABEL_121;
        if ( v76->fields.isEventJoin || v76->fields.isUseInSet )
        {
LABEL_126:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v49 = 2;
LABEL_22:
          SoundManager__playSystemSe(v49, 0LL);
          goto LABEL_23;
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        SupportServantSelectMenu__Init(this, v155);
        v156 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !v156 )
          goto LABEL_121;
        UnityEngine_GameObject__SetActive(v156, 0, 0LL);
        if ( !*v46 )
          goto LABEL_121;
        classPos = this->fields.classPos;
        v73 = (*v46)->fields.userServantEntity;
        v74 = 1;
      }
      SupportServantSelectMenu__Callback(this, v74, classPos, v73, v71);
    }
  }
}


void __fastcall SupportServantSelectMenu__Open(
        SupportServantSelectMenu_o *this,
        SupportServantData_array *supportServantData,
        int32_t nowDeckNum,
        int32_t classPos,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        SupportServantSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *v30; // x27
  bool IsActiveBgTxt; // w0
  ListViewManager_o *supportServantListViewManager; // x0
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v34; // x0
  SupportServantListViewManager_o *v35; // x0
  struct SupportServantListViewManager_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  SupportServantListViewManager_CallbackFunc_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  SupportServantListViewManager_o *v50; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_String_o *ScaleButtonSpriteName; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x20
  const MethodInfo *v58; // [xsp+0h] [xbp-60h]

  if ( (byte_40FDA43 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, supportServantData);
    sub_B16FFC(&SupportServantListViewManager_CallbackFunc_TypeInfo, v18);
    sub_B16FFC(&Method_SupportServantSelectMenu_EndOpen__, v19);
    sub_B16FFC(&Method_SupportServantSelectMenu_OnSelectItem__, v20);
    sub_B16FFC(&StringLiteral_4003/*"ClassPos"*/, v21);
    byte_40FDA43 = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_16;
  v30 = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v30 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v30, IsActiveBgTxt, 0LL);
  this->fields.classPos = classPos;
  if ( UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4003/*"ClassPos"*/, -1, 0LL) != classPos )
  {
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_16;
    ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0LL);
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 70, 0LL);
  v34 = this->fields.titleInfo;
  if ( !v34 )
    goto LABEL_16;
  TitleInfoControl__setBackBtnSprite_19608808(v34, 1, 0, 0, 0LL);
  v35 = this->fields.supportServantListViewManager;
  if ( !v35 )
    goto LABEL_16;
  SupportServantListViewManager__CreateList(
    v35,
    supportServantData,
    nowDeckNum,
    classPos,
    eventSetupInfo,
    nowDeckId,
    fixMainDeckIds,
    fixEventDeckIds,
    v58);
  v36 = this->fields.supportServantListViewManager;
  v41 = (SupportServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                          SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                          v37,
                                                          v38,
                                                          v39,
                                                          v40);
  SupportServantListViewManager_CallbackFunc___ctor(
    v41,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !v36
    || (v36->fields.callbackFunc = v41,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v36->fields.callbackFunc,
          (System_Int32_array **)v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47),
        SupportServantListViewManager__SetMode_31951392(v36, 1, v48),
        (v50 = this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        ScaleButtonSpriteName = SupportServantListViewManager__GetScaleButtonSpriteName(v50, v49),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  this->fields.state = 2;
  v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v57, 0LL);
}


void __fastcall SupportServantSelectMenu__PushRequest(
        SupportServantSelectMenu_o *this,
        SupportServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userServantEntity; // x19
  UserGameEntity_o *v15; // x23
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v18; // x21
  int64_t userId; // x22
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t v22; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CommonUI_o *v24; // x0
  __int128 v25; // q1
  UserServantEntity_Fields *p_fields; // x24
  int64_t pushUserSvtId; // x8
  int64_t v28; // x0
  __int128 v29; // q0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  NetworkManager_ResultCallbackFunc_o *v34; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v36; // q0
  CardFavoriteRequest_o *v37; // x20
  int32_t v38; // w27
  int32_t v39; // w28
  int32_t v40; // w21
  bool IsLock; // w23
  bool IsChoice; // w0
  bool v43; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v47; // w0
  __int64 v48; // x8
  int32_t randomSettingSupport; // w19
  int32_t limitCountSupport; // w0
  int32_t v51; // [xsp+50h] [xbp-110h]
  int32_t v52; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v54; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v56; // [xsp+70h] [xbp-F0h]
  int64_t v57; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_40FDA4E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__, v12);
    byte_40FDA4E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v15 = SelfUserGame;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_21;
  v18 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  userId = v15->fields.userId;
  v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v21;
  *(_QWORD *)&v62.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
  if ( !v18 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, userId, v22, 0LL);
  v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v24 )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag(v24, 0, 0LL);
  v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  pushUserSvtId = v15->fields.pushUserSvtId;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v25;
  v57 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v60 = v61;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v60, 0LL);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  favoriteUserSvtId = v15->fields.favoriteUserSvtId;
  v56 = v28;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v29;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v59, 0LL);
  v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v30,
                                                 v31,
                                                 v32,
                                                 v33);
  NetworkManager_ResultCallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v34,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v36 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v37 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v36;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v58, 0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  IsChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v43 = IsChoice;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v48 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v63.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v47;
  *(_QWORD *)&v63.fields.currentCryptoKey = v48;
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
  if ( !v37 )
LABEL_21:
    sub_B170D4();
  CardFavoriteRequest__beginRequest(
    v37,
    targetUsrSVtId,
    v52,
    v51,
    v38,
    v39,
    v40,
    favoriteUserSvtId == v54,
    IsLock,
    v43,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v57 != v56,
    0LL);
}


void __fastcall SupportServantSelectMenu__add_callbackFunc(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantSelectMenu_o *v11; // x0
  SupportServantSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FDA40 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FDA40 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantSelectMenu_CallbackFunc_c *)v8->klass != SupportServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SupportServantSelectMenu__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__endCancelButton(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2
  SupportServantListViewManager_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x4

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (v6 = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_7:
      sub_B170D4();
    }
    SupportServantListViewManager__RequestListObject_31945552(v6, 4, v5);
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)isRequest);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  SupportServantSelectMenu__Callback(this, 0, -1, 0LL, v8);
}


void __fastcall SupportServantSelectMenu__onClickChoiceTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FDA48 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SupportServantSelectMenu_EndClickTabChoice__, v4);
    byte_40FDA48 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                  SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                  v5,
                                                                  v6,
                                                                  v7,
                                                                  v8);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          0LL);
        SupportServantSelectMenu__statusRequest(this, v10, v11);
        return;
      }
      v12 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v5,
                                                                v6,
                                                                v7,
                                                                v8);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabChoice__,
        0LL);
      SupportServantSelectMenu__statusRequest(this, v12, v13);
    }
    SupportServantSelectMenu__setModeTabKind(this, 2, v6);
  }
}


void __fastcall SupportServantSelectMenu__onClickLockTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FDA47 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SupportServantSelectMenu_EndClickTabLock__, v4);
    byte_40FDA47 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                  SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                  v5,
                                                                  v6,
                                                                  v7,
                                                                  v8);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          0LL);
        SupportServantSelectMenu__statusRequest(this, v10, v11);
        return;
      }
      v12 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v5,
                                                                v6,
                                                                v7,
                                                                v8);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabLock__,
        0LL);
      SupportServantSelectMenu__statusRequest(this, v12, v13);
    }
    SupportServantSelectMenu__setModeTabKind(this, 1, v6);
  }
}


void __fastcall SupportServantSelectMenu__onClickNormalTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FDA46 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SupportServantSelectMenu_EndClickTabNormal__, v4);
    byte_40FDA46 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                             SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                             v5,
                                                             v6,
                                                             v7,
                                                             v8);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabNormal__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v9, v10);
  }
}


void __fastcall SupportServantSelectMenu__onClickPushTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FDA49 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SupportServantSelectMenu_EndClickTabPush__, v4);
    byte_40FDA49 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                             SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                             v5,
                                                             v6,
                                                             v7,
                                                             v8);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabPush__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v9, v10);
  }
}


void __fastcall SupportServantSelectMenu__remove_callbackFunc(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantSelectMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FDA41 & 1) == 0 )
  {
    sub_B16FFC(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FDA41 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantSelectMenu_CallbackFunc_c *)v8->klass != SupportServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SupportServantSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__setModeTabKind(
        SupportServantSelectMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v20; // x21
  bool enabled; // w0
  UISprite_o *normalTabSprite; // x0
  System_String_o **v23; // x8
  UnityEngine_Behaviour_o *lockTabButton; // x0
  UICommonButton_o *v25; // x21
  bool v26; // w0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v28; // x8
  UnityEngine_Behaviour_o *choiceTabButton; // x0
  UICommonButton_o *v30; // x21
  bool v31; // w0
  UISprite_o *choiceTabSprite; // x0
  System_String_o **v33; // x8
  UnityEngine_Behaviour_o *pushTabButton; // x0
  UICommonButton_o *v35; // x21
  bool v36; // w0
  UISprite_o *pushTabSprite; // x0
  System_String_o **v38; // x8
  const MethodInfo *v39; // x2
  UILabel_o *explanationLabel; // x21
  __int64 *v41; // x8
  System_String_o *v42; // x0
  struct SupportServantListViewManager_o *supportServantListViewManager; // x8
  SupportServantListViewManager_o *v44; // x0
  struct SupportServantListViewManager_o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  SupportServantListViewManager_CallbackFunc_o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t v57; // w1

  if ( (byte_40FDA4A & 1) == 0 )
  {
    sub_B16FFC(&SupportServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_SupportServantSelectMenu_OnSelectItem__, v6);
    sub_B16FFC(&StringLiteral_11701/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v7);
    sub_B16FFC(&StringLiteral_17071/*"button_push_reg"*/, v8);
    sub_B16FFC(&StringLiteral_17072/*"button_push_unreg"*/, v9);
    sub_B16FFC(&StringLiteral_17057/*"button_allchoice_reg"*/, v10);
    sub_B16FFC(&StringLiteral_17060/*"button_alllock_unreg"*/, v11);
    sub_B16FFC(&StringLiteral_11699/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v12);
    sub_B16FFC(&StringLiteral_11700/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v13);
    sub_B16FFC(&StringLiteral_17073/*"button_select_reg"*/, v14);
    sub_B16FFC(&StringLiteral_12503/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v15);
    sub_B16FFC(&StringLiteral_17074/*"button_select_unreg"*/, v16);
    sub_B16FFC(&StringLiteral_17059/*"button_alllock_reg"*/, v17);
    sub_B16FFC(&StringLiteral_17058/*"button_allchoice_unreg"*/, v18);
    byte_40FDA4A = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( normalTabButton )
    {
      UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
      v20 = this->fields.normalTabButton;
      if ( v20 )
      {
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
        UICommonButton__SetColliderEnable(v20, enabled, 1, 0LL);
        normalTabSprite = this->fields.normalTabSprite;
        if ( normalTabSprite )
        {
          v23 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17074/*"button_select_unreg"*/ : &StringLiteral_17073/*"button_select_reg"*/);
          UISprite__set_spriteName(normalTabSprite, *v23, 0LL);
          lockTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
          if ( lockTabButton )
          {
            UnityEngine_Behaviour__set_enabled(lockTabButton, this->fields.tabModeKind != 1, 0LL);
            v25 = this->fields.lockTabButton;
            if ( v25 )
            {
              v26 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
              UICommonButton__SetColliderEnable(v25, v26, 1, 0LL);
              lockTabSprite = this->fields.lockTabSprite;
              if ( lockTabSprite )
              {
                v28 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17059/*"button_alllock_reg"*/ : &StringLiteral_17060/*"button_alllock_unreg"*/);
                UISprite__set_spriteName(lockTabSprite, *v28, 0LL);
                choiceTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
                if ( choiceTabButton )
                {
                  UnityEngine_Behaviour__set_enabled(choiceTabButton, this->fields.tabModeKind != 2, 0LL);
                  v30 = this->fields.choiceTabButton;
                  if ( v30 )
                  {
                    v31 = UnityEngine_Behaviour__get_enabled(
                            (UnityEngine_Behaviour_o *)this->fields.choiceTabButton,
                            0LL);
                    UICommonButton__SetColliderEnable(v30, v31, 1, 0LL);
                    choiceTabSprite = this->fields.choiceTabSprite;
                    if ( choiceTabSprite )
                    {
                      v33 = (System_String_o **)(this->fields.tabModeKind == 2
                                               ? &StringLiteral_17057/*"button_allchoice_reg"*/
                                               : &StringLiteral_17058/*"button_allchoice_unreg"*/);
                      UISprite__set_spriteName(choiceTabSprite, *v33, 0LL);
                      pushTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
                      if ( pushTabButton )
                      {
                        UnityEngine_Behaviour__set_enabled(pushTabButton, this->fields.tabModeKind != 3, 0LL);
                        v35 = this->fields.pushTabButton;
                        if ( v35 )
                        {
                          v36 = UnityEngine_Behaviour__get_enabled(
                                  (UnityEngine_Behaviour_o *)this->fields.pushTabButton,
                                  0LL);
                          UICommonButton__SetColliderEnable(v35, v36, 1, 0LL);
                          pushTabSprite = this->fields.pushTabSprite;
                          if ( pushTabSprite )
                          {
                            if ( this->fields.tabModeKind == 3 )
                              v38 = (System_String_o **)&StringLiteral_17071/*"button_push_reg"*/;
                            else
                              v38 = (System_String_o **)&StringLiteral_17072/*"button_push_unreg"*/;
                            UISprite__set_spriteName(pushTabSprite, *v38, 0LL);
                            switch ( this->fields.tabModeKind )
                            {
                              case 0:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v41 = &StringLiteral_12503/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
                                goto LABEL_45;
                              case 1:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v41 = &StringLiteral_11700/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
                                goto LABEL_45;
                              case 2:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v41 = &StringLiteral_11699/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
                                goto LABEL_45;
                              case 3:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v41 = &StringLiteral_11701/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
                                v42 = LocalizationManager__Get((System_String_o *)*v41, 0LL);
                                if ( !explanationLabel )
                                  break;
                                UILabel__set_text(explanationLabel, v42, 0LL);
LABEL_47:
                                supportServantListViewManager = this->fields.supportServantListViewManager;
                                if ( !supportServantListViewManager )
                                  break;
                                supportServantListViewManager->fields.isCanNotLongPush = this->fields.tabModeKind != 0;
                                v44 = this->fields.supportServantListViewManager;
                                if ( !v44 )
                                  break;
                                if ( this->fields.state != 2 )
                                {
                                  v57 = 1;
                                  goto LABEL_53;
                                }
                                SupportServantListViewManager__UpdateItemState(v44, modeKind == 3, v39);
                                v45 = this->fields.supportServantListViewManager;
                                v50 = (SupportServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                                        SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                                                        v46,
                                                                                        v47,
                                                                                        v48,
                                                                                        v49);
                                SupportServantListViewManager_CallbackFunc___ctor(
                                  v50,
                                  (Il2CppObject *)this,
                                  (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
                                  0LL);
                                if ( v45 )
                                {
                                  v45->fields.callbackFunc = v50;
                                  sub_B16F98(
                                    (BattleServantConfConponent_o *)&v45->fields.callbackFunc,
                                    (System_Int32_array **)v50,
                                    v51,
                                    v52,
                                    v53,
                                    v54,
                                    v55,
                                    v56);
                                  v57 = 2;
                                  v44 = v45;
LABEL_53:
                                  SupportServantListViewManager__SetMode_31951392(v44, v57, v39);
                                  return;
                                }
                                break;
                              default:
                                goto LABEL_47;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall SupportServantSelectMenu__statusRequest(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t tabModeKind; // w8
  SupportServantListViewManager_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v23; // x2
  System_Int64_array *v24; // x1
  bool v25; // w4
  bool v26; // w5
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  NetworkManager_ResultCallbackFunc_o *v38; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40FDA4C & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_SupportServantSelectMenu_EndStatusSync__, v8);
    byte_40FDA4C = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_23;
    if ( SupportServantListViewManager__GetSwapChoiceList(supportServantListViewManager, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v38 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v34,
                                                     v35,
                                                     v36,
                                                     v37);
      NetworkManager_ResultCallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v38,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v23 = unchoiceList;
        v24 = choiceList;
        v26 = 1;
        v25 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B170D4();
    }
  }
  else if ( tabModeKind == 1 )
  {
    v10 = this->fields.supportServantListViewManager;
    if ( !v10 )
      goto LABEL_23;
    if ( SupportServantListViewManager__GetSwapLockList(v10, &lockList, &unlockList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v17,
                                                     v18,
                                                     v19,
                                                     v20);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v21,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v23 = unlockList;
        v24 = lockList;
        v25 = 1;
        v26 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v24, v23, 0, v25, v26, 0LL);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    SupportServantSelectMenu_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_CallbackFunc___ctor(
        SupportServantSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantSelectMenu_CallbackFunc__BeginInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = result;
  v14 = classPos;
  if ( (byte_40F7792 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&SupportSelectRootComponent_ResultKind_TypeInfo, v11);
    byte_40F7792 = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13[2] = (__int64)entity;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v13, callback, object);
}


void __fastcall SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_CallbackFunc__Invoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  SupportServantSelectMenu_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x8
  unsigned int v15; // w24
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD); // x0
  SupportServantSelectMenu_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(unsigned int *, _QWORD, UserServantEntity_o *, __int64); // x25
  char v26; // w25
  char v27; // w0
  unsigned int v28; // w25
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  SupportServantSelectMenu_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v34 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v35;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (SupportServantSelectMenu_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, _QWORD, UserServantEntity_o *, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&classPos);
      if ( (sub_B1702C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, (unsigned int)classPos, entity, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, (unsigned int)classPos, entity, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
      if ( (v26 & 1) != 0 )
      {
        v28 = v34;
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AAFEF8(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))sub_B170AC(v19, v24);
        (*v21)(v23, v28, (unsigned int)classPos, entity, v21);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          v15 = v34;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v14 + 16LL * (int)(*v17 + v12) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AAFEF8(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))v18)(
            v23,
            v15,
            (unsigned int)classPos,
            entity,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))(*v23
                                                                                           + 16LL
                                                                                           * *(unsigned __int16 *)(v24 + 72)
                                                                                           + 312))(
            v23,
            v34,
            (unsigned int)classPos,
            entity,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, __int64))v25)(
      v23,
      v34,
      (unsigned int)classPos,
      entity,
      v24);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_RequestCallbackFunc___ctor(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_40F7793 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F7793 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_RequestCallbackFunc__Invoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SupportServantSelectMenu_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  SupportServantSelectMenu_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SupportServantSelectMenu_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isRequest, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isRequest, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
    goto LABEL_37;
  }
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___ctor(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__0(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  CommonUI_o *v14; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct SupportServantSelectMenu_o *_4__this; // x8
  struct SupportServantSelectMenu_o *v27; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x19
  __int64 v29; // x21
  __int64 v30; // x9
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F7791 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&SupportServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_SupportServantSelectMenu_OnSelectItem__, v7);
    sub_B16FFC(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__, v8);
    byte_40F7791 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18237824(v14, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_13;
  supportServantListViewManager = v27->fields.supportServantListViewManager;
  v29 = sub_B170CC(SupportServantListViewManager_CallbackFunc_TypeInfo, v22, v23, v24, v25);
  v30 = *(_QWORD *)Method_SupportServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v29 + 40) = Method_SupportServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v29 + 16) = v30;
  *(_QWORD *)(v29 + 32) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 32), (System_Int32_array **)v27, v31, v32, v33, v34, v35, v36);
  if ( !supportServantListViewManager )
    goto LABEL_13;
  SupportServantListViewManager__SetMode(
    supportServantListViewManager,
    2,
    (SupportServantListViewManager_CallbackFunc_o *)v29,
    0LL);
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  SupportServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  SupportServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}