void __fastcall SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC4C9 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC4C9 = 1;
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
    sub_B5D560(
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
    sub_B5D69C(0LL, method);
  ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0LL);
}


void __fastcall SupportServantSelectMenu__EndCardFavoriteRequest(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  struct SupportServantListViewManager_o *v9; // x20
  SupportServantListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_42EC4C8 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SupportServantSelectMenu_OnSelectItem__, v5, v6, v7);
    byte_42EC4C8 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v9 = this->fields.supportServantListViewManager,
        v10 = (SupportServantListViewManager_CallbackFunc_o *)sub_B5D694(SupportServantListViewManager_CallbackFunc_TypeInfo),
        SupportServantListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          0LL),
        !v9) )
  {
    sub_B5D69C(supportServantListViewManager, result);
  }
  v9->fields.callbackFunc = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.callbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SupportServantListViewManager__SetMode_32184292(v9, 2, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__EndClickTabChoice(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B5D69C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_32178452(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__EndClickTabLock(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B5D69C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_32178452(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__EndClickTabNormal(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B5D69C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_32178452(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__EndClickTabPush(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B5D69C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_32178452(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 3, method);
}


void __fastcall SupportServantSelectMenu__EndOpen(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_42EC4BD & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportServantSelectMenu_OnSelectItem__, v5, v6, v7);
    byte_42EC4BD = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v9 = (SupportServantListViewManager_CallbackFunc_o *)sub_B5D694(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager )
    sub_B5D69C(v10, v11);
  supportServantListViewManager->fields.callbackFunc = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&supportServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SupportServantListViewManager__SetMode_32184292(supportServantListViewManager, 2, v18);
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
    sub_B5D560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SupportServantSelectMenu_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall SupportServantSelectMenu__Init(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v12; // x2

  if ( (byte_42EC4BB & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12707/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v5, v6, v7);
    byte_42EC4BB = 1;
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
  supportServantListViewManager = (SupportServantListViewManager_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_12707/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                       0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(supportServantListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0LL);
  SupportServantSelectMenu__setModeTabKind(this, 0, v12);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantSelectMenu__ModifyItem(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_B5D69C(0LL, method);
  SupportServantListViewManager__RequestListObject_32178452(supportServantListViewManager, 4, v2);
}


void __fastcall SupportServantSelectMenu__OnClickCancel(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  ListViewManager_o *supportServantListViewManager; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v16; // x20
  const MethodInfo *v17; // x2

  if ( (byte_42EC4C4 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SupportServantSelectMenu_endCancelButton__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_4089/*"ClassPos"*/, v11, v12, v13);
    byte_42EC4C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4089/*"ClassPos"*/, this->fields.classPos, 0LL);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_B5D69C(0LL, v14);
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0LL);
    v16 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_endCancelButton__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v16, v17);
  }
}


void __fastcall SupportServantSelectMenu__OnClickScaleChange(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_42EC4C6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC4C6 = 1;
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
      || (SupportServantListViewManager__ChangeIconScale(supportServantListViewManager, v5),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                                               supportServantListViewManager,
                                                                               v5),
          !scaleChangeTabSprite) )
    {
      sub_B5D69C(supportServantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantListViewManager, 0LL);
  }
}


void __fastcall SupportServantSelectMenu__OnSelectItem(
        SupportServantSelectMenu_o *this,
        int32_t kind,
        int32_t offset,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  __int64 v76; // x19
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  MethodInfo *v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **Item; // x1
  SupportServantListViewItem_o **v92; // x20
  int32_t tabModeKind; // w9
  int32_t v94; // w0
  struct SupportServantListViewManager_o *v95; // x19
  SupportServantListViewManager_CallbackFunc_o *v96; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  const MethodInfo *v103; // x2
  SupportServantListViewItem_o *v104; // x8
  const MethodInfo *v105; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v108; // q1
  const MethodInfo *v109; // x1
  const MethodInfo *v110; // x4
  int32_t classPos; // w2
  UserServantEntity_o *v112; // x3
  int32_t v113; // w1
  SupportServantListViewItem_o *v114; // x8
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v116; // x21
  __int64 v117; // x22
  __int64 v118; // x23
  ServantEntity_o *v119; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v121; // w22
  int32_t v122; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v123; // x8
  int32_t v124; // w22
  int32_t v125; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v127; // x21
  System_String_o *v128; // x22
  __int64 v129; // x24
  int32_t Rarity; // w26
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **v137; // x26
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Int32_array **v144; // x26
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_Int32_array **v151; // x25
  int32_t v152; // w0
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x25
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Int32_array **v166; // x25
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Int32_array **v173; // x20
  System_String_o *v174; // x20
  System_String_o *v175; // x22
  System_String_o *v176; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v178; // x25
  const MethodInfo *v179; // x1
  __int64 v180; // x0
  __int64 v181; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v182; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v183; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16

  if ( (byte_42EC4BE & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, kind, offset, method);
    sub_B5D5C4(&SupportServantListViewManager_CallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&object___TypeInfo, v34, v35, v36);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Rarity_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&SoundManager_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_SupportServantSelectMenu_OnSelectItem__, v55, v56, v57);
    sub_B5D5C4(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__, v58, v59, v60);
    sub_B5D5C4(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v73, v74, v75);
    byte_42EC4BE = 1;
  }
  v76 = sub_B5D694(SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
  SupportServantSelectMenu___c__DisplayClass31_0___ctor((SupportServantSelectMenu___c__DisplayClass31_0_o *)v76, 0LL);
  if ( !v76 )
    goto LABEL_121;
  *(_QWORD *)(v76 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v76 + 16), (System_Int32_array **)this, v79, v80, v81, v82, v83, v84);
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
      Item = (System_Int32_array **)SupportServantListViewManager__GetItem(supportServantListViewManager, offset, v85);
    }
    *(_QWORD *)(v76 + 24) = Item;
    v92 = (SupportServantListViewItem_o **)(v76 + 24);
    sub_B5D560((BattleServantConfConponent_o *)(v76 + 24), Item, (System_String_array **)v85, v86, v87, v88, v89, v90);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        if ( !*v92 )
          goto LABEL_121;
        (*v92)->fields.isSwapChoice ^= 1u;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v94 = 0;
        goto LABEL_22;
      }
      if ( tabModeKind == 1 )
      {
        if ( !*v92 )
          goto LABEL_121;
        (*v92)->fields.isSwapLock ^= 1u;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v94 = 11;
        goto LABEL_22;
      }
      v104 = *v92;
      if ( !*v92 )
        goto LABEL_121;
      if ( tabModeKind == 3 )
      {
        if ( !v104->fields.isEnabled )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          this->fields.state = 2;
LABEL_23:
          v95 = this->fields.supportServantListViewManager;
          v96 = (SupportServantListViewManager_CallbackFunc_o *)sub_B5D694(SupportServantListViewManager_CallbackFunc_TypeInfo);
          SupportServantListViewManager_CallbackFunc___ctor(
            v96,
            (Il2CppObject *)this,
            (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
            0LL);
          if ( v95 )
          {
            v95->fields.callbackFunc = v96;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v95->fields.callbackFunc,
              (System_Int32_array **)v96,
              v97,
              v98,
              v99,
              v100,
              v101,
              v102);
            SupportServantListViewManager__SetMode_32184292(v95, 2, v103);
            return;
          }
LABEL_121:
          sub_B5D69C(supportServantListViewManager, v78);
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        supportServantListViewManager = (SupportServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        dropList = (int64_t)supportServantListViewManager->fields.dropList;
        if ( !dropList )
          goto LABEL_39;
        if ( !*v92 )
          goto LABEL_121;
        userServantEntity = (*v92)->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_121;
        v108 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v183.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v183.fields.fakeValue = v108;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v182 = v183;
        if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v182, 0LL) )
        {
LABEL_39:
          SupportServantSelectMenu__PushRequest(this, *v92, v105);
          return;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)supportServantListViewManager,
                   dropList,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Entity )
          goto LABEL_121;
        v116 = (DataMasterBase_WarMaster__WarEntity__int__o *)supportServantListViewManager;
        v118 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
        v117 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v184.fields.currentCryptoKey = v118;
        *(_QWORD *)&v184.fields.fakeValue = v117;
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                             v184,
                                                                             0LL);
        if ( !v116 )
          goto LABEL_121;
        v119 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v116,
                                    (int32_t)supportServantListViewManager,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(Entity->fields.svtId, 0LL);
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                             Entity->fields.limitCount,
                                                                             0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                             Master_WarQuestSelectionMaster,
                                                                             v121,
                                                                             (int32_t)supportServantListViewManager,
                                                                             0LL);
        if ( !*v92 )
          goto LABEL_121;
        v122 = (int)supportServantListViewManager;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_SvtId(
                                                                             *v92,
                                                                             v78);
        if ( !*v92 )
          goto LABEL_121;
        v123 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v92)->fields.userServantEntity;
        if ( !v123 )
          goto LABEL_121;
        v124 = (int)supportServantListViewManager;
        v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v123[6], 0LL);
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       Master_WarQuestSelectionMaster,
                                       v124,
                                       v125,
                                       0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v127 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
        v128 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
        v129 = sub_B5D5DC(object___TypeInfo, 6LL);
        Rarity = UserServantEntity__getRarity(Entity, 0LL);
        if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
        if ( !v129 )
          goto LABEL_121;
        v137 = (System_Int32_array **)supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B5D684(
                                                                                   supportServantListViewManager,
                                                                                   *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0LL )
        {
          if ( !*(_DWORD *)(v129 + 24) )
            goto LABEL_122;
          *(_QWORD *)(v129 + 32) = v137;
          sub_B5D560((BattleServantConfConponent_o *)(v129 + 32), v137, v131, v132, v133, v134, v135, v136);
          if ( !v119 )
            goto LABEL_121;
          supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(v119, 0LL);
          v144 = (System_Int32_array **)supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B5D684(
                                                                                     supportServantListViewManager,
                                                                                     *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v129 + 24) <= 1u )
              goto LABEL_122;
            *(_QWORD *)(v129 + 40) = v144;
            sub_B5D560((BattleServantConfConponent_o *)(v129 + 40), v144, v138, v139, v140, v141, v142, v143);
            supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(
                                                                                 v119,
                                                                                 v122,
                                                                                 -1,
                                                                                 0LL);
            v151 = (System_Int32_array **)supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B5D684(
                                                                                       supportServantListViewManager,
                                                                                       *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v129 + 24) <= 2u )
                goto LABEL_122;
              *(_QWORD *)(v129 + 48) = v151;
              sub_B5D560((BattleServantConfConponent_o *)(v129 + 48), v151, v145, v146, v147, v148, v149, v150);
              if ( !*v92 )
                goto LABEL_121;
              supportServantListViewManager = (SupportServantListViewManager_o *)(*v92)->fields.userServantEntity;
              if ( !supportServantListViewManager )
                goto LABEL_121;
              v152 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
              supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(v152, 0LL);
              v159 = (System_Int32_array **)supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B5D684(
                                                                                         supportServantListViewManager,
                                                                                         *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v129 + 24) <= 3u )
                  goto LABEL_122;
                *(_QWORD *)(v129 + 56) = v159;
                sub_B5D560((BattleServantConfConponent_o *)(v129 + 56), v159, v153, v154, v155, v156, v157, v158);
                if ( !*v92 )
                  goto LABEL_121;
                supportServantListViewManager = (SupportServantListViewManager_o *)(*v92)->fields.servantEntity;
                if ( !supportServantListViewManager )
                  goto LABEL_121;
                supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                                     (ServantEntity_o *)supportServantListViewManager,
                                                                                     0LL);
                v166 = (System_Int32_array **)supportServantListViewManager;
                if ( !supportServantListViewManager
                  || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B5D684(
                                                                                           supportServantListViewManager,
                                                                                           *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v129 + 24) <= 4u )
                    goto LABEL_122;
                  *(_QWORD *)(v129 + 64) = v166;
                  sub_B5D560((BattleServantConfConponent_o *)(v129 + 64), v166, v160, v161, v162, v163, v164, v165);
                  if ( !*v92 )
                    goto LABEL_121;
                  supportServantListViewManager = (SupportServantListViewManager_o *)(*v92)->fields.servantEntity;
                  if ( !supportServantListViewManager )
                    goto LABEL_121;
                  supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(
                                                                                       (ServantEntity_o *)supportServantListViewManager,
                                                                                       ServantLimitCountSealAfter,
                                                                                       -1,
                                                                                       0LL);
                  v173 = (System_Int32_array **)supportServantListViewManager;
                  if ( !supportServantListViewManager
                    || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B5D684(
                                                                                             supportServantListViewManager,
                                                                                             *(_QWORD *)(*(_QWORD *)v129 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v129 + 24) > 5u )
                    {
                      *(_QWORD *)(v129 + 72) = v173;
                      sub_B5D560((BattleServantConfConponent_o *)(v129 + 72), v173, v167, v168, v169, v170, v171, v172);
                      v174 = System_String__Format_44656512(v128, (System_Object_array *)v129, 0LL);
                      v175 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                      v176 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v178 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v178,
                        (Il2CppObject *)v76,
                        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__,
                        0LL);
                      supportServantListViewManager = (SupportServantListViewManager_o *)BalanceConfig_TypeInfo;
                      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      }
                      if ( !Instance )
                        goto LABEL_121;
                      CommonUI__OpenConfirmDialog_18201384(
                        Instance,
                        v127,
                        v174,
                        v175,
                        v176,
                        v178,
                        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                        0,
                        0,
                        0LL);
                      return;
                    }
LABEL_122:
                    v180 = sub_B5D6C8(supportServantListViewManager);
                    sub_B5D668(v180, 0LL);
                  }
                }
              }
            }
          }
        }
        v181 = sub_B5D6BC(supportServantListViewManager);
        sub_B5D668(v181, 0LL);
      }
      if ( v104->fields.isBase )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        SupportServantSelectMenu__Init(this, v109);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v92 )
          goto LABEL_121;
        classPos = this->fields.classPos;
        v112 = (*v92)->fields.userServantEntity;
        v113 = 2;
      }
      else
      {
        if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(*v92, v78) )
          goto LABEL_126;
        supportServantListViewManager = (SupportServantListViewManager_o *)*v92;
        if ( !*v92 )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_IsUseServant(
                                                                             (SupportServantListViewItem_o *)supportServantListViewManager,
                                                                             v78);
        if ( ((unsigned __int8)supportServantListViewManager & 1) != 0 )
          goto LABEL_126;
        v114 = *v92;
        if ( !*v92 )
          goto LABEL_121;
        if ( v114->fields.isEventJoin || v114->fields.isUseInSet )
        {
LABEL_126:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v94 = 2;
LABEL_22:
          SoundManager__playSystemSe(v94, 0LL);
          goto LABEL_23;
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        SupportServantSelectMenu__Init(this, v179);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v92 )
          goto LABEL_121;
        classPos = this->fields.classPos;
        v112 = (*v92)->fields.userServantEntity;
        v113 = 1;
      }
      SupportServantSelectMenu__Callback(this, v113, classPos, v112, v110);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v37; // x1
  UnityEngine_GameObject_o *v38; // x27
  struct SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v49; // x20
  const MethodInfo *v50; // [xsp+0h] [xbp-60h]

  if ( (byte_42EC4BC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)supportServantData, nowDeckNum, *(_QWORD *)&classPos);
    sub_B5D5C4(&SupportServantListViewManager_CallbackFunc_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SupportServantSelectMenu_EndOpen__, v21, v22, v23);
    sub_B5D5C4(&Method_SupportServantSelectMenu_OnSelectItem__, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_4089/*"ClassPos"*/, v27, v28, v29);
    byte_42EC4BC = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v38 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v38, (unsigned __int8)gameObject & 1, 0LL);
  this->fields.classPos = classPos;
  if ( UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4089/*"ClassPos"*/, -1, 0LL) != classPos )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ListViewManager__ClearScrollBarValue((ListViewManager_o *)gameObject, 1, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 70, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager;
  if ( !gameObject )
    goto LABEL_16;
  SupportServantListViewManager__CreateList(
    (SupportServantListViewManager_o *)gameObject,
    supportServantData,
    nowDeckNum,
    classPos,
    eventSetupInfo,
    nowDeckId,
    fixMainDeckIds,
    fixEventDeckIds,
    v50);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v40 = (SupportServantListViewManager_CallbackFunc_o *)sub_B5D694(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v40,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager
    || (supportServantListViewManager->fields.callbackFunc = v40,
        sub_B5D560(
          (BattleServantConfConponent_o *)&supportServantListViewManager->fields.callbackFunc,
          (System_Int32_array **)v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46),
        SupportServantListViewManager__SetMode_32184292(supportServantListViewManager, 1, v47),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = (UnityEngine_GameObject_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                   (SupportServantListViewManager_o *)gameObject,
                                                   v37),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_B5D69C(gameObject, v37);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v49 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v49, 0LL);
}


void __fastcall SupportServantSelectMenu__PushRequest(
        SupportServantSelectMenu_o *this,
        SupportServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  DataManager_o *limitCountSupport; // x0
  __int64 v31; // x1
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v33; // x23
  UserServantCollectionMaster_o *v34; // x21
  int64_t v35; // x22
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v39; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v41; // x8
  int64_t v42; // x0
  __int128 v43; // q0
  NetworkManager_ResultCallbackFunc_o *v44; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v46; // q0
  CardFavoriteRequest_o *v47; // x20
  int32_t v48; // w27
  int32_t v49; // w28
  int32_t v50; // w21
  bool IsLock; // w23
  char v52; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v56; // w0
  __int64 v57; // x8
  int32_t randomSettingSupport; // w19
  int32_t v59; // [xsp+50h] [xbp-110h]
  int32_t v60; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v62; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v64; // [xsp+70h] [xbp-F0h]
  __int64 v65; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42EC4C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__, v27, v28, v29);
    byte_42EC4C7 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v33 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v33 || !userServantEntity )
    goto LABEL_21;
  v34 = (UserServantCollectionMaster_o *)limitCountSupport;
  v35 = *(_QWORD *)&v33->fields.m_CachedPtr;
  v37 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v37;
  *(_QWORD *)&v70.fields.fakeValue = v36;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  if ( !v34 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v35, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v39 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v41 = *(_QWORD *)&v33->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v39;
  v65 = v41;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
  v43 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v33->fields.writeMasterDataThread;
  v64 = v42;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v43;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
  v44 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v44,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v46 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v47 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v46;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v52 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v57 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v56;
  *(_QWORD *)&v71.fields.currentCryptoKey = v57;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  if ( !v47 )
LABEL_21:
    sub_B5D69C(limitCountSupport, v31);
  CardFavoriteRequest__beginRequest(
    v47,
    targetUsrSVtId,
    v60,
    v59,
    v48,
    v49,
    v50,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v62,
    IsLock,
    v52 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v65 != v64,
    0LL);
}


void __fastcall SupportServantSelectMenu__add_callbackFunc(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportServantSelectMenu_o *v12; // x0
  SupportServantSelectMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EC4B9 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC4B9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportServantSelectMenu_CallbackFunc_c *)v9->klass != SupportServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportServantSelectMenu__remove_callbackFunc(v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__endCancelButton(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x4

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_7:
      sub_B5D69C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_32178452(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL);
  if ( !supportServantListViewManager )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
  SupportServantSelectMenu__Callback(this, 0, -1, 0LL, v6);
}


void __fastcall SupportServantSelectMenu__onClickChoiceTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42EC4C1 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SupportServantSelectMenu_EndClickTabChoice__, v8, v9, v10);
    byte_42EC4C1 = 1;
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
        v13 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          0LL);
        SupportServantSelectMenu__statusRequest(this, v13, v14);
        return;
      }
      v15 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabChoice__,
        0LL);
      SupportServantSelectMenu__statusRequest(this, v15, v16);
    }
    SupportServantSelectMenu__setModeTabKind(this, 2, v11);
  }
}


void __fastcall SupportServantSelectMenu__onClickLockTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42EC4C0 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SupportServantSelectMenu_EndClickTabLock__, v8, v9, v10);
    byte_42EC4C0 = 1;
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
        v13 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          0LL);
        SupportServantSelectMenu__statusRequest(this, v13, v14);
        return;
      }
      v15 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabLock__,
        0LL);
      SupportServantSelectMenu__statusRequest(this, v15, v16);
    }
    SupportServantSelectMenu__setModeTabKind(this, 1, v11);
  }
}


void __fastcall SupportServantSelectMenu__onClickNormalTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SupportServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EC4BF & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SupportServantSelectMenu_EndClickTabNormal__, v8, v9, v10);
    byte_42EC4BF = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabNormal__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v11, v12);
  }
}


void __fastcall SupportServantSelectMenu__onClickPushTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SupportServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EC4C2 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SupportServantSelectMenu_EndClickTabPush__, v8, v9, v10);
    byte_42EC4C2 = 1;
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
    v11 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabPush__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v11, v12);
  }
}


void __fastcall SupportServantSelectMenu__remove_callbackFunc(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportServantSelectMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EC4BA & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC4BA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportServantSelectMenu_CallbackFunc_c *)v9->klass != SupportServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportServantSelectMenu__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__setModeTabKind(
        SupportServantSelectMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v49; // x21
  bool enabled; // w0
  System_String_o **v51; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v53; // w0
  System_String_o **v54; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v56; // w0
  System_String_o **v57; // x8
  UICommonButton_o *pushTabButton; // x21
  bool v59; // w0
  __int64 *v60; // x8
  const MethodInfo *v61; // x2
  UILabel_o *explanationLabel; // x21
  __int64 *v63; // x8
  struct SupportServantListViewManager_o *supportServantListViewManager; // x8
  struct SupportServantListViewManager_o *v65; // x20
  SupportServantListViewManager_CallbackFunc_o *v66; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int32_t v73; // w1

  if ( (byte_42EC4C3 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantListViewManager_CallbackFunc_TypeInfo, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SupportServantSelectMenu_OnSelectItem__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12707/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v45, v46, v47);
    byte_42EC4C3 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( normalTabButton )
    {
      UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
      v49 = this->fields.normalTabButton;
      if ( v49 )
      {
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
        UICommonButton__SetColliderEnable(v49, enabled, 1, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
        if ( normalTabButton )
        {
          v51 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17350/*"button_select_unreg"*/ : &StringLiteral_17349/*"button_select_reg"*/);
          UISprite__set_spriteName((UISprite_o *)normalTabButton, *v51, 0LL);
          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
          if ( normalTabButton )
          {
            UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
            lockTabButton = this->fields.lockTabButton;
            if ( lockTabButton )
            {
              v53 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
              UICommonButton__SetColliderEnable(lockTabButton, v53, 1, 0LL);
              normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
              if ( normalTabButton )
              {
                v54 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17335/*"button_alllock_reg"*/ : &StringLiteral_17336/*"button_alllock_unreg"*/);
                UISprite__set_spriteName((UISprite_o *)normalTabButton, *v54, 0LL);
                normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
                if ( normalTabButton )
                {
                  UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
                  choiceTabButton = this->fields.choiceTabButton;
                  if ( choiceTabButton )
                  {
                    v56 = UnityEngine_Behaviour__get_enabled(
                            (UnityEngine_Behaviour_o *)this->fields.choiceTabButton,
                            0LL);
                    UICommonButton__SetColliderEnable(choiceTabButton, v56, 1, 0LL);
                    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
                    if ( normalTabButton )
                    {
                      v57 = (System_String_o **)(this->fields.tabModeKind == 2
                                               ? &StringLiteral_17333/*"button_allchoice_reg"*/
                                               : &StringLiteral_17334/*"button_allchoice_unreg"*/);
                      UISprite__set_spriteName((UISprite_o *)normalTabButton, *v57, 0LL);
                      normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
                      if ( normalTabButton )
                      {
                        UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0LL);
                        pushTabButton = this->fields.pushTabButton;
                        if ( pushTabButton )
                        {
                          v59 = UnityEngine_Behaviour__get_enabled(
                                  (UnityEngine_Behaviour_o *)this->fields.pushTabButton,
                                  0LL);
                          UICommonButton__SetColliderEnable(pushTabButton, v59, 1, 0LL);
                          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
                          if ( normalTabButton )
                          {
                            if ( this->fields.tabModeKind == 3 )
                              v60 = &StringLiteral_17347/*"button_push_reg"*/;
                            else
                              v60 = &StringLiteral_17348/*"button_push_unreg"*/;
                            UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v60, 0LL);
                            switch ( this->fields.tabModeKind )
                            {
                              case 0:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v63 = &StringLiteral_12707/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
                                goto LABEL_45;
                              case 1:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v63 = &StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
                                goto LABEL_45;
                              case 2:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v63 = &StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
                                goto LABEL_45;
                              case 3:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v63 = &StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
                                normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                                               (System_String_o *)*v63,
                                                                               0LL);
                                if ( !explanationLabel )
                                  break;
                                UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0LL);
LABEL_47:
                                supportServantListViewManager = this->fields.supportServantListViewManager;
                                if ( !supportServantListViewManager )
                                  break;
                                supportServantListViewManager->fields.isCanNotLongPush = this->fields.tabModeKind != 0;
                                normalTabButton = (UnityEngine_Behaviour_o *)this->fields.supportServantListViewManager;
                                if ( !normalTabButton )
                                  break;
                                if ( this->fields.state != 2 )
                                {
                                  v73 = 1;
                                  goto LABEL_53;
                                }
                                SupportServantListViewManager__UpdateItemState(
                                  (SupportServantListViewManager_o *)normalTabButton,
                                  modeKind == 3,
                                  v61);
                                v65 = this->fields.supportServantListViewManager;
                                v66 = (SupportServantListViewManager_CallbackFunc_o *)sub_B5D694(SupportServantListViewManager_CallbackFunc_TypeInfo);
                                SupportServantListViewManager_CallbackFunc___ctor(
                                  v66,
                                  (Il2CppObject *)this,
                                  (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
                                  0LL);
                                if ( v65 )
                                {
                                  v65->fields.callbackFunc = v66;
                                  sub_B5D560(
                                    (BattleServantConfConponent_o *)&v65->fields.callbackFunc,
                                    (System_Int32_array **)v66,
                                    v67,
                                    v68,
                                    v69,
                                    v70,
                                    v71,
                                    v72);
                                  v73 = 2;
                                  normalTabButton = (UnityEngine_Behaviour_o *)v65;
LABEL_53:
                                  SupportServantListViewManager__SetMode_32184292(
                                    (SupportServantListViewManager_o *)normalTabButton,
                                    v73,
                                    v61);
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
    sub_B5D69C(normalTabButton, *(_QWORD *)&modeKind);
  }
}


void __fastcall SupportServantSelectMenu__statusRequest(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t tabModeKind; // w8
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  System_Int64_array *v24; // x2
  System_Int64_array *v25; // x1
  bool v26; // w4
  bool v27; // w5
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  NetworkManager_ResultCallbackFunc_o *v34; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42EC4C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SupportServantSelectMenu_EndStatusSync__, v12, v13, v14);
    byte_42EC4C5 = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v34,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                           v34,
                                                                           (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v24 = unchoiceList;
        v25 = choiceList;
        v27 = 1;
        v26 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B5D69C(supportServantListViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_23;
    if ( SupportServantListViewManager__GetSwapLockList(supportServantListViewManager, &lockList, &unlockList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                           v23,
                                                                           (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v24 = unlockList;
        v25 = lockList;
        v26 = 1;
        v27 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v25,
          v24,
          0,
          v26,
          v27,
          0LL);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall SupportServantSelectMenu_CallbackFunc__BeginInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v15[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v16; // [xsp+28h] [xbp-28h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  v17 = result;
  v16 = classPos;
  if ( (byte_42E6493 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, classPos, entity);
    sub_B5D5C4(&SupportSelectRootComponent_ResultKind_TypeInfo, v11, v12, v13);
    byte_42E6493 = 1;
  }
  v15[3] = 0LL;
  v15[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v17);
  v15[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v15[2] = (__int64)entity;
  return (System_IAsyncResult_o *)sub_B5D568(this, v15, callback, object);
}


void __fastcall SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD); // x0
  SupportServantSelectMenu_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, UserServantEntity_o *, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  SupportServantSelectMenu_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
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
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, UserServantEntity_o *, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&classPos);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)classPos, entity, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)classPos, entity, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AF54C0(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))sub_B5D674(v20, v25);
        (*v22)(v24, v30, (unsigned int)classPos, entity, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AF54C0(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)classPos,
            entity,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))(*v24
                                                                                           + 16LL
                                                                                           * *(unsigned __int16 *)(v25 + 72)
                                                                                           + 312))(
            v24,
            v36,
            (unsigned int)classPos,
            entity,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, __int64))v26)(
      v24,
      v36,
      (unsigned int)classPos,
      entity,
      v25);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


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
  if ( (byte_42E6494 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E6494 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  SupportServantSelectMenu_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
    goto LABEL_37;
  }
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___ctor(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__0(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CommonUI_o *Instance; // x0
  __int64 v19; // x1
  CommonUI_o *v20; // x20
  System_Action_o *_9__1; // x22
  struct SupportServantSelectMenu_o *_4__this; // x8
  struct SupportServantSelectMenu_o *v23; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x19
  __int64 v25; // x21
  __int64 v26; // x9

  if ( (byte_42E6492 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&SupportServantListViewManager_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_SupportServantSelectMenu_OnSelectItem__, v12, v13, v14);
    sub_B5D5C4(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__, v15, v16, v17);
    byte_42E6492 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B5D560(&this->fields.__9__1);
    }
    if ( v20 )
    {
      CommonUI__CloseConfirmDialog_18202348(v20, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B5D69C(Instance, v19);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_13;
  supportServantListViewManager = v23->fields.supportServantListViewManager;
  v25 = sub_B5D694(SupportServantListViewManager_CallbackFunc_TypeInfo);
  v26 = *(_QWORD *)Method_SupportServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v25 + 40) = Method_SupportServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v25 + 16) = v26;
  *(_QWORD *)(v25 + 32) = v23;
  sub_B5D560(v25 + 32);
  if ( !supportServantListViewManager )
    goto LABEL_13;
  SupportServantListViewManager__SetMode(
    supportServantListViewManager,
    2,
    (SupportServantListViewManager_CallbackFunc_o *)v25,
    0LL);
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  SupportServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  SupportServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}