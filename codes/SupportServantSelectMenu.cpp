void __fastcall SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42B394F & 1) == 0 )
  {
    sub_B52984(&BaseMenu_TypeInfo);
    byte_42B394F = 1;
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
    sub_B52920(
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
    sub_B52A5C(0LL, method);
  ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0LL);
}


void __fastcall SupportServantSelectMenu__EndCardFavoriteRequest(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  struct SupportServantListViewManager_o *v5; // x20
  SupportServantListViewManager_CallbackFunc_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_42B394E & 1) == 0 )
  {
    sub_B52984(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SupportServantSelectMenu_OnSelectItem__);
    byte_42B394E = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v5 = this->fields.supportServantListViewManager,
        v6 = (SupportServantListViewManager_CallbackFunc_o *)sub_B52A54(SupportServantListViewManager_CallbackFunc_TypeInfo),
        SupportServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          0LL),
        !v5) )
  {
    sub_B52A5C(supportServantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_B52920(
    (BattleServantConfConponent_o *)&v5->fields.callbackFunc,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  SupportServantListViewManager__SetMode_31856240(v5, 2, v13);
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
      sub_B52A5C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_31850400(supportServantListViewManager, 4, v5);
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
      sub_B52A5C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_31850400(supportServantListViewManager, 4, v5);
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
      sub_B52A5C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_31850400(supportServantListViewManager, 4, v5);
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
      sub_B52A5C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_31850400(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 3, method);
}


void __fastcall SupportServantSelectMenu__EndOpen(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  struct SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_42B3943 & 1) == 0 )
  {
    sub_B52984(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SupportServantSelectMenu_OnSelectItem__);
    byte_42B3943 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v4 = (SupportServantListViewManager_CallbackFunc_o *)sub_B52A54(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager )
    sub_B52A5C(v5, v6);
  supportServantListViewManager->fields.callbackFunc = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&supportServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  SupportServantListViewManager__SetMode_31856240(supportServantListViewManager, 2, v13);
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
    sub_B52920(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SupportServantSelectMenu_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall SupportServantSelectMenu__Init(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v7; // x2

  if ( (byte_42B3941 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12648/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_42B3941 = 1;
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
                                                                       (System_String_o *)StringLiteral_12648/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                       0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_10:
    sub_B52A5C(supportServantListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0LL);
  SupportServantSelectMenu__setModeTabKind(this, 0, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantSelectMenu__ModifyItem(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_B52A5C(0LL, method);
  SupportServantListViewManager__RequestListObject_31850400(supportServantListViewManager, 4, v2);
}


void __fastcall SupportServantSelectMenu__OnClickCancel(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *supportServantListViewManager; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_42B394A & 1) == 0 )
  {
    sub_B52984(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SupportServantSelectMenu_endCancelButton__);
    sub_B52984(&StringLiteral_4056/*"ClassPos"*/);
    byte_42B394A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4056/*"ClassPos"*/, this->fields.classPos, 0LL);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_B52A5C(0LL, v3);
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0LL);
    v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B52A54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_endCancelButton__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v5, v6);
  }
}


void __fastcall SupportServantSelectMenu__OnClickScaleChange(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_42B394C & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B394C = 1;
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
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                                               supportServantListViewManager,
                                                                               v3),
          !scaleChangeTabSprite) )
    {
      sub_B52A5C(supportServantListViewManager, v3);
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
  __int64 v7; // x19
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  MethodInfo *v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **Item; // x1
  SupportServantListViewItem_o **v23; // x20
  int32_t tabModeKind; // w9
  int32_t v25; // w0
  struct SupportServantListViewManager_o *v26; // x19
  SupportServantListViewManager_CallbackFunc_o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  SupportServantListViewItem_o *v35; // x8
  const MethodInfo *v36; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v39; // q1
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x4
  int32_t classPos; // w2
  UserServantEntity_o *v43; // x3
  int32_t v44; // w1
  SupportServantListViewItem_o *v45; // x8
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x21
  __int64 v48; // x22
  __int64 v49; // x23
  ServantEntity_o *v50; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v52; // w22
  int32_t v53; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v54; // x8
  int32_t v55; // w22
  int32_t v56; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v58; // x21
  System_String_o *v59; // x22
  __int64 v60; // x24
  int32_t Rarity; // w26
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x26
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x26
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x25
  int32_t v83; // w0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x25
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x25
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x20
  System_String_o *v105; // x20
  System_String_o *v106; // x22
  System_String_o *v107; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v109; // x25
  const MethodInfo *v110; // x1
  __int64 v111; // x0
  __int64 v112; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_42B3944 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Rarity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_B52984(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__);
    sub_B52984(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
    sub_B52984(&StringLiteral_12089/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B52984(&StringLiteral_12087/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_12088/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_12090/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_42B3944 = 1;
  }
  v7 = sub_B52A54(SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
  SupportServantSelectMenu___c__DisplayClass31_0___ctor((SupportServantSelectMenu___c__DisplayClass31_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_121;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
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
      Item = (System_Int32_array **)SupportServantListViewManager__GetItem(supportServantListViewManager, offset, v16);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v23 = (SupportServantListViewItem_o **)(v7 + 24);
    sub_B52920((BattleServantConfConponent_o *)(v7 + 24), Item, (System_String_array **)v16, v17, v18, v19, v20, v21);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        if ( !*v23 )
          goto LABEL_121;
        (*v23)->fields.isSwapChoice ^= 1u;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v25 = 0;
        goto LABEL_22;
      }
      if ( tabModeKind == 1 )
      {
        if ( !*v23 )
          goto LABEL_121;
        (*v23)->fields.isSwapLock ^= 1u;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v25 = 11;
        goto LABEL_22;
      }
      v35 = *v23;
      if ( !*v23 )
        goto LABEL_121;
      if ( tabModeKind == 3 )
      {
        if ( !v35->fields.isEnabled )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          this->fields.state = 2;
LABEL_23:
          v26 = this->fields.supportServantListViewManager;
          v27 = (SupportServantListViewManager_CallbackFunc_o *)sub_B52A54(SupportServantListViewManager_CallbackFunc_TypeInfo);
          SupportServantListViewManager_CallbackFunc___ctor(
            v27,
            (Il2CppObject *)this,
            (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
            0LL);
          if ( v26 )
          {
            v26->fields.callbackFunc = v27;
            sub_B52920(
              (BattleServantConfConponent_o *)&v26->fields.callbackFunc,
              (System_Int32_array **)v27,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            SupportServantListViewManager__SetMode_31856240(v26, 2, v34);
            return;
          }
LABEL_121:
          sub_B52A5C(supportServantListViewManager, v9);
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
        if ( !*v23 )
          goto LABEL_121;
        userServantEntity = (*v23)->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_121;
        v39 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v114.fields.fakeValue = v39;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v113 = v114;
        if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v113, 0LL) )
        {
LABEL_39:
          SupportServantSelectMenu__PushRequest(this, *v23, v36);
          return;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)supportServantListViewManager,
                   dropList,
                   (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Entity )
          goto LABEL_121;
        v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)supportServantListViewManager;
        v49 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
        v48 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v115.fields.currentCryptoKey = v49;
        *(_QWORD *)&v115.fields.fakeValue = v48;
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                             v115,
                                                                             0LL);
        if ( !v47 )
          goto LABEL_121;
        v50 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v47,
                                   (int32_t)supportServantListViewManager,
                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(Entity->fields.svtId, 0LL);
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                             Entity->fields.limitCount,
                                                                             0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                             Master_WarQuestSelectionMaster,
                                                                             v52,
                                                                             (int32_t)supportServantListViewManager,
                                                                             0LL);
        if ( !*v23 )
          goto LABEL_121;
        v53 = (int)supportServantListViewManager;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_SvtId(
                                                                             *v23,
                                                                             v9);
        if ( !*v23 )
          goto LABEL_121;
        v54 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userServantEntity;
        if ( !v54 )
          goto LABEL_121;
        v55 = (int)supportServantListViewManager;
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v54[6], 0LL);
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       Master_WarQuestSelectionMaster,
                                       v55,
                                       v56,
                                       0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_12090/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
        v60 = sub_B5299C(object___TypeInfo, 6LL);
        Rarity = UserServantEntity__getRarity(Entity, 0LL);
        if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
        if ( !v60 )
          goto LABEL_121;
        v68 = (System_Int32_array **)supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B52A44(
                                                                                   supportServantListViewManager,
                                                                                   *(_QWORD *)(*(_QWORD *)v60 + 64LL))) != 0LL )
        {
          if ( !*(_DWORD *)(v60 + 24) )
            goto LABEL_122;
          *(_QWORD *)(v60 + 32) = v68;
          sub_B52920((BattleServantConfConponent_o *)(v60 + 32), v68, v62, v63, v64, v65, v66, v67);
          if ( !v50 )
            goto LABEL_121;
          supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(v50, 0LL);
          v75 = (System_Int32_array **)supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B52A44(
                                                                                     supportServantListViewManager,
                                                                                     *(_QWORD *)(*(_QWORD *)v60 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v60 + 24) <= 1u )
              goto LABEL_122;
            *(_QWORD *)(v60 + 40) = v75;
            sub_B52920((BattleServantConfConponent_o *)(v60 + 40), v75, v69, v70, v71, v72, v73, v74);
            supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(v50, v53, -1, 0LL);
            v82 = (System_Int32_array **)supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B52A44(
                                                                                       supportServantListViewManager,
                                                                                       *(_QWORD *)(*(_QWORD *)v60 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v60 + 24) <= 2u )
                goto LABEL_122;
              *(_QWORD *)(v60 + 48) = v82;
              sub_B52920((BattleServantConfConponent_o *)(v60 + 48), v82, v76, v77, v78, v79, v80, v81);
              if ( !*v23 )
                goto LABEL_121;
              supportServantListViewManager = (SupportServantListViewManager_o *)(*v23)->fields.userServantEntity;
              if ( !supportServantListViewManager )
                goto LABEL_121;
              v83 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
              supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(v83, 0LL);
              v90 = (System_Int32_array **)supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B52A44(
                                                                                         supportServantListViewManager,
                                                                                         *(_QWORD *)(*(_QWORD *)v60 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v60 + 24) <= 3u )
                  goto LABEL_122;
                *(_QWORD *)(v60 + 56) = v90;
                sub_B52920((BattleServantConfConponent_o *)(v60 + 56), v90, v84, v85, v86, v87, v88, v89);
                if ( !*v23 )
                  goto LABEL_121;
                supportServantListViewManager = (SupportServantListViewManager_o *)(*v23)->fields.servantEntity;
                if ( !supportServantListViewManager )
                  goto LABEL_121;
                supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                                     (ServantEntity_o *)supportServantListViewManager,
                                                                                     0LL);
                v97 = (System_Int32_array **)supportServantListViewManager;
                if ( !supportServantListViewManager
                  || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B52A44(
                                                                                           supportServantListViewManager,
                                                                                           *(_QWORD *)(*(_QWORD *)v60 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v60 + 24) <= 4u )
                    goto LABEL_122;
                  *(_QWORD *)(v60 + 64) = v97;
                  sub_B52920((BattleServantConfConponent_o *)(v60 + 64), v97, v91, v92, v93, v94, v95, v96);
                  if ( !*v23 )
                    goto LABEL_121;
                  supportServantListViewManager = (SupportServantListViewManager_o *)(*v23)->fields.servantEntity;
                  if ( !supportServantListViewManager )
                    goto LABEL_121;
                  supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(
                                                                                       (ServantEntity_o *)supportServantListViewManager,
                                                                                       ServantLimitCountSealAfter,
                                                                                       -1,
                                                                                       0LL);
                  v104 = (System_Int32_array **)supportServantListViewManager;
                  if ( !supportServantListViewManager
                    || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B52A44(
                                                                                             supportServantListViewManager,
                                                                                             *(_QWORD *)(*(_QWORD *)v60 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v60 + 24) > 5u )
                    {
                      *(_QWORD *)(v60 + 72) = v104;
                      sub_B52920((BattleServantConfConponent_o *)(v60 + 72), v104, v98, v99, v100, v101, v102, v103);
                      v105 = System_String__Format_44647040(v59, (System_Object_array *)v60, 0LL);
                      v106 = LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                      v107 = LocalizationManager__Get((System_String_o *)StringLiteral_12087/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v109 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v109,
                        (Il2CppObject *)v7,
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
                      CommonUI__OpenConfirmDialog_18157444(
                        Instance,
                        v58,
                        v105,
                        v106,
                        v107,
                        v109,
                        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                        0,
                        0,
                        0LL);
                      return;
                    }
LABEL_122:
                    v111 = sub_B52A88(supportServantListViewManager);
                    sub_B52A28(v111, 0LL);
                  }
                }
              }
            }
          }
        }
        v112 = sub_B52A7C(supportServantListViewManager);
        sub_B52A28(v112, 0LL);
      }
      if ( v35->fields.isBase )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        SupportServantSelectMenu__Init(this, v40);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v23 )
          goto LABEL_121;
        classPos = this->fields.classPos;
        v43 = (*v23)->fields.userServantEntity;
        v44 = 2;
      }
      else
      {
        if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(*v23, v9) )
          goto LABEL_126;
        supportServantListViewManager = (SupportServantListViewManager_o *)*v23;
        if ( !*v23 )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_IsUseServant(
                                                                             (SupportServantListViewItem_o *)supportServantListViewManager,
                                                                             v9);
        if ( ((unsigned __int8)supportServantListViewManager & 1) != 0 )
          goto LABEL_126;
        v45 = *v23;
        if ( !*v23 )
          goto LABEL_121;
        if ( v45->fields.isEventJoin || v45->fields.isUseInSet )
        {
LABEL_126:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v25 = 2;
LABEL_22:
          SoundManager__playSystemSe(v25, 0LL);
          goto LABEL_23;
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        SupportServantSelectMenu__Init(this, v110);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v23 )
          goto LABEL_121;
        classPos = this->fields.classPos;
        v43 = (*v23)->fields.userServantEntity;
        v44 = 1;
      }
      SupportServantSelectMenu__Callback(this, v44, classPos, v43, v41);
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *v26; // x27
  struct SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v37; // x20
  const MethodInfo *v38; // [xsp+0h] [xbp-60h]

  if ( (byte_42B3942 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SupportServantSelectMenu_EndOpen__);
    sub_B52984(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_B52984(&StringLiteral_4056/*"ClassPos"*/);
    byte_42B3942 = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v26 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v26, (unsigned __int8)gameObject & 1, 0LL);
  this->fields.classPos = classPos;
  if ( UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4056/*"ClassPos"*/, -1, 0LL) != classPos )
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
  TitleInfoControl__setBackBtnSprite_18269200((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
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
    v38);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v28 = (SupportServantListViewManager_CallbackFunc_o *)sub_B52A54(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager
    || (supportServantListViewManager->fields.callbackFunc = v28,
        sub_B52920(
          (BattleServantConfConponent_o *)&supportServantListViewManager->fields.callbackFunc,
          (System_Int32_array **)v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        SupportServantListViewManager__SetMode_31856240(supportServantListViewManager, 1, v35),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = (UnityEngine_GameObject_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                   (SupportServantListViewManager_o *)gameObject,
                                                   v25),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_B52A5C(gameObject, v25);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v37 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v37, 0LL);
}


void __fastcall SupportServantSelectMenu__PushRequest(
        SupportServantSelectMenu_o *this,
        SupportServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v8; // x23
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v16; // x8
  int64_t v17; // x0
  __int128 v18; // q0
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v21; // q0
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w21
  bool IsLock; // w23
  char v27; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t v34; // [xsp+50h] [xbp-110h]
  int32_t v35; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  __int64 v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_42B394D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__);
    byte_42B394D = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v8 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v8 || !userServantEntity )
    goto LABEL_21;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v8->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v45, 0LL);
  if ( !v9 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v16 = *(_QWORD *)&v8->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v43, 0LL);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v8->fields.writeMasterDataThread;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v19,
                                        (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v41, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v32 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v46.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v46, 0LL);
  if ( !v22 )
LABEL_21:
    sub_B52A5C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    v35,
    v34,
    v23,
    v24,
    v25,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v37,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != v39,
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

  if ( (byte_42B393F & 1) == 0 )
  {
    sub_B52984(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    byte_42B393F = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
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
  const MethodInfo *v6; // x4

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_7:
      sub_B52A5C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_31850400(supportServantListViewManager, 4, v5);
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
  const MethodInfo *v3; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_42B3947 & 1) == 0 )
  {
    sub_B52984(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SupportServantSelectMenu_EndClickTabChoice__);
    byte_42B3947 = 1;
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
        v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B52A54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          0LL);
        SupportServantSelectMenu__statusRequest(this, v5, v6);
        return;
      }
      v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B52A54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabChoice__,
        0LL);
      SupportServantSelectMenu__statusRequest(this, v7, v8);
    }
    SupportServantSelectMenu__setModeTabKind(this, 2, v3);
  }
}


void __fastcall SupportServantSelectMenu__onClickLockTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_42B3946 & 1) == 0 )
  {
    sub_B52984(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SupportServantSelectMenu_EndClickTabLock__);
    byte_42B3946 = 1;
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
        v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B52A54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          0LL);
        SupportServantSelectMenu__statusRequest(this, v5, v6);
        return;
      }
      v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B52A54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabLock__,
        0LL);
      SupportServantSelectMenu__statusRequest(this, v7, v8);
    }
    SupportServantSelectMenu__setModeTabKind(this, 1, v3);
  }
}


void __fastcall SupportServantSelectMenu__onClickNormalTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  SupportServantSelectMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_42B3945 & 1) == 0 )
  {
    sub_B52984(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SupportServantSelectMenu_EndClickTabNormal__);
    byte_42B3945 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B52A54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabNormal__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v3, v4);
  }
}


void __fastcall SupportServantSelectMenu__onClickPushTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  SupportServantSelectMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_42B3948 & 1) == 0 )
  {
    sub_B52984(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SupportServantSelectMenu_EndClickTabPush__);
    byte_42B3948 = 1;
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
    v3 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B52A54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabPush__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v3, v4);
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

  if ( (byte_42B3940 & 1) == 0 )
  {
    sub_B52984(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    byte_42B3940 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  SupportServantSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__setModeTabKind(
        SupportServantSelectMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v6; // x21
  bool enabled; // w0
  System_String_o **v8; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v10; // w0
  System_String_o **v11; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v13; // w0
  System_String_o **v14; // x8
  UICommonButton_o *pushTabButton; // x21
  bool v16; // w0
  __int64 *v17; // x8
  const MethodInfo *v18; // x2
  UILabel_o *explanationLabel; // x21
  __int64 *v20; // x8
  struct SupportServantListViewManager_o *supportServantListViewManager; // x8
  struct SupportServantListViewManager_o *v22; // x20
  SupportServantListViewManager_CallbackFunc_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w1

  if ( (byte_42B3949 & 1) == 0 )
  {
    sub_B52984(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_B52984(&StringLiteral_11825/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_B52984(&StringLiteral_17256/*"button_push_reg"*/);
    sub_B52984(&StringLiteral_17257/*"button_push_unreg"*/);
    sub_B52984(&StringLiteral_17242/*"button_allchoice_reg"*/);
    sub_B52984(&StringLiteral_17245/*"button_alllock_unreg"*/);
    sub_B52984(&StringLiteral_11823/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B52984(&StringLiteral_11824/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_B52984(&StringLiteral_17258/*"button_select_reg"*/);
    sub_B52984(&StringLiteral_12648/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_B52984(&StringLiteral_17259/*"button_select_unreg"*/);
    sub_B52984(&StringLiteral_17244/*"button_alllock_reg"*/);
    sub_B52984(&StringLiteral_17243/*"button_allchoice_unreg"*/);
    byte_42B3949 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( normalTabButton )
    {
      UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
      v6 = this->fields.normalTabButton;
      if ( v6 )
      {
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
        UICommonButton__SetColliderEnable(v6, enabled, 1, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
        if ( normalTabButton )
        {
          v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17259/*"button_select_unreg"*/ : &StringLiteral_17258/*"button_select_reg"*/);
          UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0LL);
          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
          if ( normalTabButton )
          {
            UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
            lockTabButton = this->fields.lockTabButton;
            if ( lockTabButton )
            {
              v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
              UICommonButton__SetColliderEnable(lockTabButton, v10, 1, 0LL);
              normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
              if ( normalTabButton )
              {
                v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17244/*"button_alllock_reg"*/ : &StringLiteral_17245/*"button_alllock_unreg"*/);
                UISprite__set_spriteName((UISprite_o *)normalTabButton, *v11, 0LL);
                normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
                if ( normalTabButton )
                {
                  UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
                  choiceTabButton = this->fields.choiceTabButton;
                  if ( choiceTabButton )
                  {
                    v13 = UnityEngine_Behaviour__get_enabled(
                            (UnityEngine_Behaviour_o *)this->fields.choiceTabButton,
                            0LL);
                    UICommonButton__SetColliderEnable(choiceTabButton, v13, 1, 0LL);
                    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
                    if ( normalTabButton )
                    {
                      v14 = (System_String_o **)(this->fields.tabModeKind == 2
                                               ? &StringLiteral_17242/*"button_allchoice_reg"*/
                                               : &StringLiteral_17243/*"button_allchoice_unreg"*/);
                      UISprite__set_spriteName((UISprite_o *)normalTabButton, *v14, 0LL);
                      normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
                      if ( normalTabButton )
                      {
                        UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0LL);
                        pushTabButton = this->fields.pushTabButton;
                        if ( pushTabButton )
                        {
                          v16 = UnityEngine_Behaviour__get_enabled(
                                  (UnityEngine_Behaviour_o *)this->fields.pushTabButton,
                                  0LL);
                          UICommonButton__SetColliderEnable(pushTabButton, v16, 1, 0LL);
                          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
                          if ( normalTabButton )
                          {
                            if ( this->fields.tabModeKind == 3 )
                              v17 = &StringLiteral_17256/*"button_push_reg"*/;
                            else
                              v17 = &StringLiteral_17257/*"button_push_unreg"*/;
                            UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v17, 0LL);
                            switch ( this->fields.tabModeKind )
                            {
                              case 0:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v20 = &StringLiteral_12648/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
                                goto LABEL_45;
                              case 1:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v20 = &StringLiteral_11824/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
                                goto LABEL_45;
                              case 2:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v20 = &StringLiteral_11823/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
                                goto LABEL_45;
                              case 3:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v20 = &StringLiteral_11825/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
                                normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                                               (System_String_o *)*v20,
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
                                  v30 = 1;
                                  goto LABEL_53;
                                }
                                SupportServantListViewManager__UpdateItemState(
                                  (SupportServantListViewManager_o *)normalTabButton,
                                  modeKind == 3,
                                  v18);
                                v22 = this->fields.supportServantListViewManager;
                                v23 = (SupportServantListViewManager_CallbackFunc_o *)sub_B52A54(SupportServantListViewManager_CallbackFunc_TypeInfo);
                                SupportServantListViewManager_CallbackFunc___ctor(
                                  v23,
                                  (Il2CppObject *)this,
                                  (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
                                  0LL);
                                if ( v22 )
                                {
                                  v22->fields.callbackFunc = v23;
                                  sub_B52920(
                                    (BattleServantConfConponent_o *)&v22->fields.callbackFunc,
                                    (System_Int32_array **)v23,
                                    v24,
                                    v25,
                                    v26,
                                    v27,
                                    v28,
                                    v29);
                                  v30 = 2;
                                  normalTabButton = (UnityEngine_Behaviour_o *)v22;
LABEL_53:
                                  SupportServantListViewManager__SetMode_31856240(
                                    (SupportServantListViewManager_o *)normalTabButton,
                                    v30,
                                    v18);
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
    sub_B52A5C(normalTabButton, *(_QWORD *)&modeKind);
  }
}


void __fastcall SupportServantSelectMenu__statusRequest(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tabModeKind; // w8
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x2
  System_Int64_array *v16; // x1
  bool v17; // w4
  bool v18; // w5
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42B394B & 1) == 0 )
  {
    sub_B52984(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_SupportServantSelectMenu_EndStatusSync__);
    byte_42B394B = 1;
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
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                           v25,
                                                                           (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v15 = unchoiceList;
        v16 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B52A5C(supportServantListViewManager, callback);
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
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                           v14,
                                                                           (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v15 = unlockList;
        v16 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v16,
          v15,
          0,
          v17,
          v18,
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
  sub_B52920(p_method);
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
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+28h] [xbp-28h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-24h] BYREF

  v14 = result;
  v13 = classPos;
  if ( (byte_42ADDB9 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&SupportSelectRootComponent_ResultKind_TypeInfo);
    byte_42ADDB9 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v12[2] = (__int64)entity;
  return (System_IAsyncResult_o *)sub_B52928(this, v12, callback, object);
}


void __fastcall SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&classPos, entity);
      if ( (sub_B529B4(v25) & 1) == 0 )
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
      v27 = sub_B529AC(v25);
      v28 = sub_B52DB0(v25);
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
            v21 = sub_AEB880(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))sub_B52A34(v20, v25);
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
            v19 = sub_AEB880(v24, class_0, v12, v14);
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
  sub_B52920(p_method);
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
  if ( (byte_42ADDBA & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42ADDBA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_RequestCallbackFunc__Invoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SupportServantSelectMenu_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  SupportServantSelectMenu_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SupportServantSelectMenu_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
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
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  struct SupportServantSelectMenu_o *_4__this; // x8
  struct SupportServantSelectMenu_o *v10; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x19
  __int64 v12; // x21
  __int64 v13; // x9

  if ( (byte_42ADDB8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_B52984(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__);
    byte_42ADDB8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B52920(&this->fields.__9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_18158412(v7, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B52A5C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_13;
  supportServantListViewManager = v10->fields.supportServantListViewManager;
  v12 = sub_B52A54(SupportServantListViewManager_CallbackFunc_TypeInfo);
  v13 = *(_QWORD *)Method_SupportServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v12 + 40) = Method_SupportServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v12 + 16) = v13;
  *(_QWORD *)(v12 + 32) = v10;
  sub_B52920(v12 + 32);
  if ( !supportServantListViewManager )
    goto LABEL_13;
  SupportServantListViewManager__SetMode(
    supportServantListViewManager,
    2,
    (SupportServantListViewManager_CallbackFunc_o *)v12,
    0LL);
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  SupportServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  SupportServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}