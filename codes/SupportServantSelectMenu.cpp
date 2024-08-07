void __fastcall SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49FB68F & 1) == 0 )
  {
    sub_1B64A00(&BaseMenu_TypeInfo, method);
    byte_49FB68F = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantSelectMenu__Callback(
        SupportServantSelectMenu_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct SupportServantSelectMenu_CallbackFunc_o *v6; // x22
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B649A4(p_callbackFunc, 0, classPos, (int32_t)entity);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      (unsigned int)result,
      (unsigned int)classPos,
      entity,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall SupportServantSelectMenu__ClearScrollValue(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1B64C5C(0LL, method);
  ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0LL);
}


void __fastcall SupportServantSelectMenu__EndCardFavoriteRequest(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  SupportServantListViewManager_o *v6; // x20
  SupportServantListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_49FB68E & 1) == 0 )
  {
    sub_1B64A00(&SupportServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B64A00(&Method_SupportServantSelectMenu_OnSelectItem__, v4);
    byte_49FB68E = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, 0LL),
        v6 = this->fields.supportServantListViewManager,
        v7 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64C4C(SupportServantListViewManager_CallbackFunc_TypeInfo),
        SupportServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          v8),
        !v6) )
  {
    sub_1B64C5C(supportServantListViewManager, result);
  }
  SupportServantListViewManager__SetMode(v6, 2, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__EndClickTabChoice(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64C5C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_33117980(supportServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64C5C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_33117980(supportServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64C5C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_33117980(supportServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64C5C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_33117980(supportServantListViewManager, 3, 0LL);
  }
  SupportServantSelectMenu__setModeTabKind(this, 3, method);
}


void __fastcall SupportServantSelectMenu__EndOpen(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_49FB683 & 1) == 0 )
  {
    sub_1B64A00(&SupportServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_SupportServantSelectMenu_OnSelectItem__, v3);
    byte_49FB683 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v5 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64C4C(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v6);
  if ( !supportServantListViewManager )
    sub_1B64C5C(v7, v8);
  SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v5, 0LL);
}


void __fastcall SupportServantSelectMenu__EndStatusSync(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_requestCallback; // x0
  struct SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x19
  struct SupportServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requestCallback;
  v5 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0LL;
    sub_1B649A4(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      1LL,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall SupportServantSelectMenu__Init(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v8; // x2

  if ( (byte_49FB681 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_12415/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v3);
    byte_49FB681 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_9;
  SupportServantListViewManager__DestroyList(supportServantListViewManager, 0LL);
  this->fields.state = 0;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantListViewManager = (SupportServantListViewManager_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_12415/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                       0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1B64C5C(supportServantListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0LL);
  SupportServantSelectMenu__setModeTabKind(this, 0, v8);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantSelectMenu__ModifyItem(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1B64C5C(0LL, method);
  SupportServantListViewManager__SetMode_33117980(supportServantListViewManager, 3, 0LL);
}


void __fastcall SupportServantSelectMenu__OnClickCancel(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  ListViewManager_o *supportServantListViewManager; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49FB68A & 1) == 0 )
  {
    sub_1B64A00(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_SupportServantSelectMenu_OnClickCancel__, v3);
    sub_1B64A00(&Method_SupportServantSelectMenu_endCancelButton__, v4);
    sub_1B64A00(&StringLiteral_4499/*"ClassPos"*/, v5);
    byte_49FB68A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_SupportServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4499/*"ClassPos"*/, this->fields.classPos, 0LL);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_1B64C5C(0LL, v8);
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0LL);
    v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64C4C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_endCancelButton__,
      v11);
    SupportServantSelectMenu__statusRequest(this, v10, v12);
  }
}


void __fastcall SupportServantSelectMenu__OnClickScaleChange(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_49FB68C & 1) == 0 )
  {
    sub_1B64A00(&Method_SupportServantSelectMenu_OnClickScaleChange__, method);
    byte_49FB68C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ChangeIconScale(supportServantListViewManager, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                                               supportServantListViewManager,
                                                                               0LL),
          !scaleChangeTabSprite) )
    {
      sub_1B64C5C(supportServantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantListViewManager, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__OnSelectItem(
        SupportServantSelectMenu_o *this,
        int32_t kind,
        int32_t offset,
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  SupportServantListViewItem_o *Item; // x1
  SupportServantListViewItem_o **v37; // x19
  int32_t tabModeKind; // w8
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  int32_t v41; // w1
  _QWORD *v42; // x0
  SupportServantListViewManager_o *v43; // x19
  SupportServantListViewManager_CallbackFunc_o *v44; // x0
  const MethodInfo *v45; // x3
  intptr_t v46; // w2
  SupportServantListViewManager_CallbackFunc_o *v47; // x20
  _BOOL4 v48; // w23
  _QWORD *v49; // x8
  System_Reflection_MethodBase_o *v50; // x0
  const MethodInfo *v51; // x2
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v54; // q1
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x4
  int32_t classPos; // w2
  UserServantEntity_o *v60; // x3
  int32_t v61; // w1
  SupportServantListViewItem_o *v62; // x8
  _QWORD *v63; // x0
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v68; // x25
  Il2CppObject *Master_object; // x21
  int32_t v70; // w22
  int32_t v71; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v72; // x8
  int32_t v73; // w22
  int32_t v74; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v76; // x21
  System_String_o *v77; // x22
  __int64 v78; // x23
  int32_t Rarity; // w26
  int32_t v80; // w2
  int32_t v81; // w3
  SupportServantListViewManager_o *v82; // x26
  int32_t v83; // w2
  int32_t v84; // w3
  SupportServantListViewManager_o *v85; // x26
  int32_t v86; // w2
  int32_t v87; // w3
  SupportServantListViewManager_o *v88; // x25
  int32_t v89; // w0
  int32_t v90; // w2
  int32_t v91; // w3
  SupportServantListViewManager_o *v92; // x25
  int32_t v93; // w2
  int32_t v94; // w3
  SupportServantListViewManager_o *v95; // x25
  int32_t v96; // w2
  int32_t v97; // w3
  SupportServantListViewManager_o *v98; // x19
  System_String_o *v99; // x19
  System_String_o *v100; // x22
  System_String_o *v101; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v103; // x25
  _QWORD *v104; // x0
  System_Reflection_MethodBase_o *v105; // x0
  const MethodInfo *v106; // x1
  __int64 v107; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  if ( (byte_49FB684 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B64A00(&SupportServantListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B64A00(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1B64A00(&DataManager_TypeInfo, v12);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1B64A00(&LocalizationManager_TypeInfo, v15);
    sub_1B64A00(&object___TypeInfo, v16);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1B64A00(&Rarity_TypeInfo, v19);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B64A00(&Method_SupportServantSelectMenu_OnSelectItem__, v22);
    sub_1B64A00(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__, v23);
    sub_1B64A00(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo, v24);
    sub_1B64A00(&StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v25);
    sub_1B64A00(&StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v26);
    sub_1B64A00(&StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v27);
    sub_1B64A00(&StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v28);
    byte_49FB684 = 1;
  }
  v29 = sub_1B64C4C(SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_106;
  *(_QWORD *)(v29 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)this, v32, v33);
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
        goto LABEL_106;
      Item = SupportServantListViewManager__GetItem(supportServantListViewManager, offset, 0LL);
    }
    *(_QWORD *)(v29 + 24) = Item;
    v37 = (SupportServantListViewItem_o **)(v29 + 24);
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v29 + 24), (int32_t)Item, v34, v35);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        supportServantListViewManager = (SupportServantListViewManager_o *)*v37;
        if ( !*v37 )
          goto LABEL_106;
        SupportServantListViewItem__SwapChoice((SupportServantListViewItem_o *)supportServantListViewManager, 0LL);
        v42 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v42 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_OnSelectItem__);
        v40 = (System_Reflection_MethodBase_o *)sub_1B649E4(v42, v42[4]);
        v41 = 0;
        goto LABEL_20;
      }
      if ( tabModeKind == 1 )
      {
        supportServantListViewManager = (SupportServantListViewManager_o *)*v37;
        if ( !*v37 )
          goto LABEL_106;
        SupportServantListViewItem__SwapLock((SupportServantListViewItem_o *)supportServantListViewManager, 0LL);
        v39 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v39 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_OnSelectItem__);
        v40 = (System_Reflection_MethodBase_o *)sub_1B649E4(v39, v39[4]);
        v41 = 11;
        goto LABEL_20;
      }
      supportServantListViewManager = (SupportServantListViewManager_o *)*v37;
      if ( !*v37 )
        goto LABEL_106;
      if ( tabModeKind == 3 )
      {
        v48 = BYTE4(supportServantListViewManager->fields.itemList);
        v49 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v49 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_OnSelectItem__);
        v50 = (System_Reflection_MethodBase_o *)sub_1B649E4(v49, v49[4]);
        if ( !v48 )
        {
          OverwriteAssetSoundName__PlaySystemSe(v50, 2, 0LL);
          this->fields.state = 2;
          v43 = this->fields.supportServantListViewManager;
          v44 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64C4C(SupportServantListViewManager_CallbackFunc_TypeInfo);
          v46 = (int)Method_SupportServantSelectMenu_OnSelectItem__;
LABEL_21:
          v47 = v44;
          SupportServantListViewManager_CallbackFunc___ctor(v44, (Il2CppObject *)this, v46, v45);
          if ( v43 )
          {
            SupportServantListViewManager__SetMode(v43, 2, v47, 0LL);
            return;
          }
LABEL_106:
          sub_1B64C5C(supportServantListViewManager, v31);
        }
        OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0LL);
        supportServantListViewManager = (SupportServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        dragParentObject = (int64_t)supportServantListViewManager->fields.dragParentObject;
        if ( !dragParentObject )
          goto LABEL_35;
        if ( !*v37 )
          goto LABEL_106;
        userServantEntity = (*v37)->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_106;
        v54 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v109.fields.fakeValue = v54;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v108 = v109;
        if ( dragParentObject == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v108, 0LL) )
        {
LABEL_35:
          SupportServantSelectMenu__PushRequest(this, *v37, v51);
          return;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
                   dragParentObject,
                   (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Entity )
          goto LABEL_106;
        v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
        klass = Entity[5].klass;
        monitor = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v110.fields.currentCryptoKey = klass;
        *(_QWORD *)&v110.fields.fakeValue = monitor;
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                                             v110,
                                                                             0LL);
        if ( !v65 )
          goto LABEL_106;
        v68 = DataMasterBase_object__object__int___GetEntity(
                v65,
                (int32_t)supportServantListViewManager,
                (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                0LL);
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                                             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                                             0LL);
        if ( !Master_object )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                             (ServantLimitImageMaster_o *)Master_object,
                                                                             v70,
                                                                             (int32_t)supportServantListViewManager,
                                                                             0LL);
        if ( !*v37 )
          goto LABEL_106;
        v71 = (int)supportServantListViewManager;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_SvtId(
                                                                             *v37,
                                                                             0LL);
        if ( !*v37 )
          goto LABEL_106;
        v72 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v37)->fields.userServantEntity;
        if ( !v72 )
          goto LABEL_106;
        v73 = (int)supportServantListViewManager;
        v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v72[6], 0LL);
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       (ServantLimitImageMaster_o *)Master_object,
                                       v73,
                                       v74,
                                       0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
        v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
        v78 = sub_1B64AA8(object___TypeInfo, 6LL);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
        if ( !v78 )
          goto LABEL_106;
        v82 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64B3C(
                                                                                   supportServantListViewManager,
                                                                                   *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0LL )
        {
          if ( !*(_DWORD *)(v78 + 24) )
            goto LABEL_107;
          *(_QWORD *)(v78 + 32) = v82;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v78 + 32), (int32_t)v82, v80, v81);
          if ( !v68 )
            goto LABEL_106;
          supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                               (ServantEntity_o *)v68,
                                                                               0LL);
          v85 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64B3C(
                                                                                     supportServantListViewManager,
                                                                                     *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v78 + 24) <= 1u )
              goto LABEL_107;
            *(_QWORD *)(v78 + 40) = v85;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v78 + 40), (int32_t)v85, v83, v84);
            supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(
                                                                                 (ServantEntity_o *)v68,
                                                                                 v71,
                                                                                 -1,
                                                                                 0LL);
            v88 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64B3C(
                                                                                       supportServantListViewManager,
                                                                                       *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v78 + 24) <= 2u )
                goto LABEL_107;
              *(_QWORD *)(v78 + 48) = v88;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v78 + 48), (int32_t)v88, v86, v87);
              if ( !*v37 )
                goto LABEL_106;
              supportServantListViewManager = (SupportServantListViewManager_o *)(*v37)->fields.userServantEntity;
              if ( !supportServantListViewManager )
                goto LABEL_106;
              v89 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
              supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(v89, 0LL);
              v92 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64B3C(
                                                                                         supportServantListViewManager,
                                                                                         *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v78 + 24) <= 3u )
                  goto LABEL_107;
                *(_QWORD *)(v78 + 56) = v92;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v78 + 56), (int32_t)v92, v90, v91);
                if ( !*v37 )
                  goto LABEL_106;
                supportServantListViewManager = (SupportServantListViewManager_o *)(*v37)->fields.servantEntity;
                if ( !supportServantListViewManager )
                  goto LABEL_106;
                supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                                     (ServantEntity_o *)supportServantListViewManager,
                                                                                     0LL);
                v95 = supportServantListViewManager;
                if ( !supportServantListViewManager
                  || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64B3C(
                                                                                           supportServantListViewManager,
                                                                                           *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v78 + 24) <= 4u )
                    goto LABEL_107;
                  *(_QWORD *)(v78 + 64) = v95;
                  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v78 + 64), (int32_t)v95, v93, v94);
                  if ( !*v37 )
                    goto LABEL_106;
                  supportServantListViewManager = (SupportServantListViewManager_o *)(*v37)->fields.servantEntity;
                  if ( !supportServantListViewManager )
                    goto LABEL_106;
                  supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(
                                                                                       (ServantEntity_o *)supportServantListViewManager,
                                                                                       ServantLimitCountSealAfter,
                                                                                       -1,
                                                                                       0LL);
                  v98 = supportServantListViewManager;
                  if ( !supportServantListViewManager
                    || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64B3C(
                                                                                             supportServantListViewManager,
                                                                                             *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v78 + 24) > 5u )
                    {
                      *(_QWORD *)(v78 + 72) = v98;
                      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v78 + 72), (int32_t)v98, v96, v97);
                      v99 = System_String__Format_61399644(v77, (System_Object_array *)v78, 0LL);
                      v100 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v103 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64C4C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v103,
                        (Il2CppObject *)v29,
                        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__,
                        0LL);
                      supportServantListViewManager = (SupportServantListViewManager_o *)BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( !Instance )
                        goto LABEL_106;
                      CommonUI__OpenConfirmDialog_30347344(
                        (CommonUI_o *)Instance,
                        v76,
                        v99,
                        v100,
                        v101,
                        v103,
                        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                        0,
                        0,
                        0LL);
                      return;
                    }
LABEL_107:
                    sub_1B64C64(supportServantListViewManager, v31);
                  }
                }
              }
            }
          }
        }
        v107 = sub_1B64C80();
        sub_1B64B28(v107, 0LL);
      }
      if ( BYTE4(supportServantListViewManager->fields.sort) )
      {
        v55 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v55 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_OnSelectItem__);
        v56 = (System_Reflection_MethodBase_o *)sub_1B649E4(v55, v55[4]);
        OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0LL);
        SupportServantSelectMenu__Init(this, v57);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v37 )
          goto LABEL_106;
        classPos = this->fields.classPos;
        v60 = (*v37)->fields.userServantEntity;
        v61 = 2;
      }
      else
      {
        if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(
               (SupportServantListViewItem_o *)supportServantListViewManager,
               0LL) )
        {
          goto LABEL_50;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)*v37;
        if ( !*v37 )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_IsUseServant(
                                                                             (SupportServantListViewItem_o *)supportServantListViewManager,
                                                                             0LL);
        if ( ((unsigned __int8)supportServantListViewManager & 1) != 0 )
          goto LABEL_50;
        v62 = *v37;
        if ( !*v37 )
          goto LABEL_106;
        if ( v62->fields.isEventJoin || v62->fields.isUseInSet )
        {
LABEL_50:
          v63 = Method_SupportServantSelectMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
            v63 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_OnSelectItem__);
          v40 = (System_Reflection_MethodBase_o *)sub_1B649E4(v63, v63[4]);
          v41 = 2;
LABEL_20:
          OverwriteAssetSoundName__PlaySystemSe(v40, v41, 0LL);
          v43 = this->fields.supportServantListViewManager;
          v44 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64C4C(SupportServantListViewManager_CallbackFunc_TypeInfo);
          v46 = (int)Method_SupportServantSelectMenu_OnSelectItem__;
          goto LABEL_21;
        }
        v104 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v104 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_OnSelectItem__);
        v105 = (System_Reflection_MethodBase_o *)sub_1B649E4(v104, v104[4]);
        OverwriteAssetSoundName__PlaySystemSe(v105, 0, 0LL);
        SupportServantSelectMenu__Init(this, v106);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v37 )
          goto LABEL_106;
        classPos = this->fields.classPos;
        v60 = (*v37)->fields.userServantEntity;
        v61 = 1;
      }
      SupportServantSelectMenu__Callback(this, v61, classPos, v60, v58);
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
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  UnityEngine_GameObject_o *v26; // x27
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v31; // x20

  if ( (byte_49FB682 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, supportServantData);
    sub_1B64A00(&SupportServantListViewManager_CallbackFunc_TypeInfo, v18);
    sub_1B64A00(&Method_SupportServantSelectMenu_EndOpen__, v19);
    sub_1B64A00(&Method_SupportServantSelectMenu_OnSelectItem__, v20);
    sub_1B64A00(&StringLiteral_4499/*"ClassPos"*/, v21);
    byte_49FB682 = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v22, v23);
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
  if ( UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4499/*"ClassPos"*/, -1, 0LL) != classPos )
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
  TitleInfoControl__setBackBtnSprite_36880424((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
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
    0LL);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v28 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64C4C(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v29);
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__SetMode(supportServantListViewManager, 1, v28, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = (UnityEngine_GameObject_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                   (SupportServantListViewManager_o *)gameObject,
                                                   0LL),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_1B64C5C(gameObject, v25);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v31 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v31, 0LL);
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
  DataManager_o *limitCountSupport; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v25; // x0
  __int128 v26; // q1
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  Il2CppObject *Request_object; // x0
  __int128 v29; // q1
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w29
  bool IsLock; // w21
  char v36; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_49FB68D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B64A00(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B64A00(&NetworkManager_TypeInfo, v6);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B64A00(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__, v12);
    byte_49FB68D = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v15->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1B64C5C(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_SynchronizationContext_o *)v47,
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

  if ( (byte_49FB67F & 1) == 0 )
  {
    sub_1B64A00(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49FB67F = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
  SupportServantSelectMenu__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__endCancelButton(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x4

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_7:
      sub_1B64C5C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_33117980(supportServantListViewManager, 3, 0LL);
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL);
  if ( !supportServantListViewManager )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
  SupportServantSelectMenu__Callback(this, 0, -1, 0LL, v5);
}


void __fastcall SupportServantSelectMenu__onClickChoiceTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_49FB687 & 1) == 0 )
  {
    sub_1B64A00(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_SupportServantSelectMenu_EndClickTabChoice__, v3);
    sub_1B64A00(&Method_SupportServantSelectMenu_onClickChoiceTabButton__, v4);
    byte_49FB687 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantSelectMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64C4C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          v10);
        SupportServantSelectMenu__statusRequest(this, v9, v11);
        return;
      }
      v12 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64C4C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabChoice__,
        v13);
      SupportServantSelectMenu__statusRequest(this, v12, v14);
    }
    SupportServantSelectMenu__setModeTabKind(this, 2, v7);
  }
}


void __fastcall SupportServantSelectMenu__onClickLockTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_49FB686 & 1) == 0 )
  {
    sub_1B64A00(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_SupportServantSelectMenu_EndClickTabLock__, v3);
    sub_1B64A00(&Method_SupportServantSelectMenu_onClickLockTabButton__, v4);
    byte_49FB686 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantSelectMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_onClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64C4C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          v10);
        SupportServantSelectMenu__statusRequest(this, v9, v11);
        return;
      }
      v12 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64C4C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabLock__,
        v13);
      SupportServantSelectMenu__statusRequest(this, v12, v14);
    }
    SupportServantSelectMenu__setModeTabKind(this, 1, v7);
  }
}


void __fastcall SupportServantSelectMenu__onClickNormalTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49FB685 & 1) == 0 )
  {
    sub_1B64A00(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_SupportServantSelectMenu_EndClickTabNormal__, v3);
    sub_1B64A00(&Method_SupportServantSelectMenu_onClickNormalTabButton__, v4);
    byte_49FB685 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantSelectMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_onClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64C4C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabNormal__,
      v8);
    SupportServantSelectMenu__statusRequest(this, v7, v9);
  }
}


void __fastcall SupportServantSelectMenu__onClickPushTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49FB688 & 1) == 0 )
  {
    sub_1B64A00(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_SupportServantSelectMenu_EndClickTabPush__, v3);
    sub_1B64A00(&Method_SupportServantSelectMenu_onClickPushTabButton__, v4);
    byte_49FB688 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_SupportServantSelectMenu_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_SupportServantSelectMenu_onClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64C4C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabPush__,
      v8);
    SupportServantSelectMenu__statusRequest(this, v7, v9);
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

  if ( (byte_49FB680 & 1) == 0 )
  {
    sub_1B64A00(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49FB680 = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
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
  System_String_o **v22; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v24; // w0
  System_String_o **v25; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v27; // w0
  System_String_o **v28; // x8
  UICommonButton_o *pushTabButton; // x21
  bool v30; // w0
  __int64 *v31; // x8
  UILabel_o *explanationLabel; // x21
  __int64 *v33; // x8
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v35; // x21
  const MethodInfo *v36; // x3

  if ( (byte_49FB689 & 1) == 0 )
  {
    sub_1B64A00(&SupportServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&Method_SupportServantSelectMenu_OnSelectItem__, v6);
    sub_1B64A00(&StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v7);
    sub_1B64A00(&StringLiteral_17594/*"button_push_reg"*/, v8);
    sub_1B64A00(&StringLiteral_17595/*"button_push_unreg"*/, v9);
    sub_1B64A00(&StringLiteral_17580/*"button_allchoice_reg"*/, v10);
    sub_1B64A00(&StringLiteral_17583/*"button_alllock_unreg"*/, v11);
    sub_1B64A00(&StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v12);
    sub_1B64A00(&StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v13);
    sub_1B64A00(&StringLiteral_17596/*"button_select_reg"*/, v14);
    sub_1B64A00(&StringLiteral_12415/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v15);
    sub_1B64A00(&StringLiteral_17597/*"button_select_unreg"*/, v16);
    sub_1B64A00(&StringLiteral_17582/*"button_alllock_reg"*/, v17);
    sub_1B64A00(&StringLiteral_17581/*"button_allchoice_unreg"*/, v18);
    byte_49FB689 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    v20 = this->fields.normalTabButton;
    if ( !v20 )
      goto LABEL_48;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
    UICommonButton__SetColliderEnable(v20, enabled, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v22 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17597/*"button_select_unreg"*/ : &StringLiteral_17596/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v22, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_48;
    v24 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v24, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v25 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17582/*"button_alllock_reg"*/ : &StringLiteral_17583/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v25, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_48;
    v27 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v27, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v28 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17580/*"button_allchoice_reg"*/ : &StringLiteral_17581/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v28, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0LL);
    pushTabButton = this->fields.pushTabButton;
    if ( !pushTabButton )
      goto LABEL_48;
    v30 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
    UICommonButton__SetColliderEnable(pushTabButton, v30, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    if ( this->fields.tabModeKind == 3 )
      v31 = &StringLiteral_17594/*"button_push_reg"*/;
    else
      v31 = &StringLiteral_17595/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v31, 0LL);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_12415/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_41:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v33, 0LL);
        if ( !explanationLabel )
          goto LABEL_48;
        UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0LL);
LABEL_43:
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.supportServantListViewManager;
        if ( !normalTabButton )
          goto LABEL_48;
        LOBYTE(normalTabButton[20].klass) = this->fields.tabModeKind != 0;
        if ( this->fields.state == 2 )
        {
          SupportServantListViewManager__UpdateItemState(
            (SupportServantListViewManager_o *)normalTabButton,
            modeKind == 3,
            0LL);
          supportServantListViewManager = this->fields.supportServantListViewManager;
          v35 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64C4C(SupportServantListViewManager_CallbackFunc_TypeInfo);
          SupportServantListViewManager_CallbackFunc___ctor(
            v35,
            (Il2CppObject *)this,
            (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
            v36);
          if ( supportServantListViewManager )
          {
            SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v35, 0LL);
            return;
          }
LABEL_48:
          sub_1B64C5C(normalTabButton, *(_QWORD *)&modeKind);
        }
        SupportServantListViewManager__SetMode_33117980((SupportServantListViewManager_o *)normalTabButton, 1, 0LL);
        break;
      default:
        goto LABEL_43;
    }
  }
}


void __fastcall SupportServantSelectMenu__statusRequest(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t tabModeKind; // w8
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  System_Int64_array *v13; // x1
  System_Int64_array *v14; // x2
  bool v15; // w4
  bool v16; // w5
  int32_t v17; // w2
  int32_t v18; // w3
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  System_Int64_array *v20; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FB68B & 1) == 0 )
  {
    sub_1B64A00(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B64A00(&NetworkManager_TypeInfo, v5);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B64A00(&Method_SupportServantSelectMenu_EndStatusSync__, v7);
    byte_49FB68B = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v20 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( SupportServantListViewManager__GetSwapChoiceList(supportServantListViewManager, &choiceList, &v20, 0LL) )
    {
      this->fields.requestCallback = callback;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v17, v18);
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v19,
                                                                           (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v14 = v20;
        v13 = choiceList;
        v16 = 1;
        v15 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B64C5C(supportServantListViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( SupportServantListViewManager__GetSwapLockList(supportServantListViewManager, &lockList, &unlockList, 0LL) )
    {
      this->fields.requestCallback = callback;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v12,
                                                                           (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v14 = unlockList;
        v13 = lockList;
        v15 = 1;
        v16 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v13,
          v14,
          0,
          v15,
          v16,
          0LL);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_CallbackFunc___ctor(
        SupportServantSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A9698;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A9638;
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  _QWORD v16[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v17; // [xsp+10h] [xbp-60h]
  int32_t v18; // [xsp+28h] [xbp-48h] BYREF
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF

  v18 = classPos;
  v19 = result;
  if ( (byte_49FB690 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B64A00(&SupportSelectRootComponent_ResultKind_TypeInfo, v11);
    byte_49FB690 = 1;
  }
  v17 = 0u;
  v16[0] = j_il2cpp_value_box_0(
             SupportSelectRootComponent_ResultKind_TypeInfo,
             &v19,
             *(_QWORD *)&classPos,
             entity,
             callback);
  v16[1] = j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  *(_QWORD *)&v17 = entity;
  return (System_IAsyncResult_o *)sub_1B649B4(this, v16, callback, object);
}


void __fastcall SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall SupportServantSelectMenu_CallbackFunc__Invoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, UserServantEntity_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    classPos,
    entity,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_RequestCallbackFunc___ctor(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A96F8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A96B0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_49FB691 & 1) == 0 )
  {
    sub_1B64A00(&bool_TypeInfo, isRequest);
    byte_49FB691 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v9, callback, object);
}


void __fastcall SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall SupportServantSelectMenu_RequestCallbackFunc__Invoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  CommonUI_o *v11; // x20
  System_Action_o *_9__1; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  struct SupportServantSelectMenu_o *_4__this; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3

  if ( (byte_49FB692 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, isDecide);
    sub_1B64A00(&SupportServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64A00(&Method_SupportServantSelectMenu_OnSelectItem__, v7);
    sub_1B64A00(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__, v8);
    byte_49FB692 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_30348004(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B64C5C(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v17 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64C4C(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v18);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v17, 0LL);
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64C5C(this, method);
  SupportServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}