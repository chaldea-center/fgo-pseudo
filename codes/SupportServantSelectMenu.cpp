void __fastcall SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A57C53 & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A57C53 = 1;
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
    sub_1B88554(p_callbackFunc, 0, classPos, (int32_t)entity);
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
    sub_1B8880C(0LL, method);
  ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0LL);
}


void __fastcall SupportServantSelectMenu__EndCardFavoriteRequest(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  SupportServantListViewManager_o *v5; // x20
  SupportServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4A57C52 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantSelectMenu_OnSelectItem__);
    byte_4A57C52 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, 0LL),
        v5 = this->fields.supportServantListViewManager,
        v6 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantListViewManager_CallbackFunc_TypeInfo),
        SupportServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          v7),
        !v5) )
  {
    sub_1B8880C(supportServantListViewManager, result);
  }
  SupportServantListViewManager__SetMode(v5, 2, v6, 0LL);
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
      sub_1B8880C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_33382544(supportServantListViewManager, 3, 0LL);
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
      sub_1B8880C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_33382544(supportServantListViewManager, 3, 0LL);
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
      sub_1B8880C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_33382544(supportServantListViewManager, 3, 0LL);
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
      sub_1B8880C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_33382544(supportServantListViewManager, 3, 0LL);
  }
  SupportServantSelectMenu__setModeTabKind(this, 3, method);
}


void __fastcall SupportServantSelectMenu__EndOpen(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A57C47 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantSelectMenu_OnSelectItem__);
    byte_4A57C47 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v4 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v5);
  if ( !supportServantListViewManager )
    sub_1B8880C(v6, v7);
  SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v4, 0LL);
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
    sub_1B88554(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      1LL,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall SupportServantSelectMenu__Init(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4A57C45 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12466/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_4A57C45 = 1;
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
                                                                       (System_String_o *)StringLiteral_12466/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                       0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(supportServantListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0LL);
  SupportServantSelectMenu__setModeTabKind(this, 0, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantSelectMenu__ModifyItem(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1B8880C(0LL, method);
  SupportServantListViewManager__SetMode_33382544(supportServantListViewManager, 3, 0LL);
}


void __fastcall SupportServantSelectMenu__OnClickCancel(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewManager_o *supportServantListViewManager; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4A57C4E & 1) == 0 )
  {
    sub_1B885B0(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantSelectMenu_OnClickCancel__);
    sub_1B885B0(&Method_SupportServantSelectMenu_endCancelButton__);
    sub_1B885B0(&StringLiteral_4521/*"ClassPos"*/);
    byte_4A57C4E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4521/*"ClassPos"*/, this->fields.classPos, 0LL);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_1B8880C(0LL, v5);
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0LL);
    v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_endCancelButton__,
      v8);
    SupportServantSelectMenu__statusRequest(this, v7, v9);
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

  if ( (byte_4A57C50 & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportServantSelectMenu_OnClickScaleChange__);
    byte_4A57C50 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
      sub_1B8880C(supportServantListViewManager, v5);
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
  __int64 v7; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  SupportServantListViewItem_o *Item; // x1
  SupportServantListViewItem_o **v15; // x19
  int32_t tabModeKind; // w8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  int32_t v19; // w1
  _QWORD *v20; // x0
  SupportServantListViewManager_o *v21; // x19
  SupportServantListViewManager_CallbackFunc_o *v22; // x0
  const MethodInfo *v23; // x3
  intptr_t v24; // w2
  SupportServantListViewManager_CallbackFunc_o *v25; // x20
  _BOOL4 v26; // w23
  _QWORD *v27; // x8
  System_Reflection_MethodBase_o *v28; // x0
  const MethodInfo *v29; // x2
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v32; // q1
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x4
  int32_t classPos; // w2
  UserServantEntity_o *v38; // x3
  int32_t v39; // w1
  SupportServantListViewItem_o *v40; // x8
  _QWORD *v41; // x0
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v46; // x25
  Il2CppObject *Master_object; // x21
  int32_t v48; // w22
  int32_t v49; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x8
  int32_t v51; // w22
  int32_t v52; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v54; // x21
  System_String_o *v55; // x22
  __int64 v56; // x23
  int32_t Rarity; // w26
  int32_t v58; // w2
  int32_t v59; // w3
  SupportServantListViewManager_o *v60; // x26
  int32_t v61; // w2
  int32_t v62; // w3
  SupportServantListViewManager_o *v63; // x26
  int32_t v64; // w2
  int32_t v65; // w3
  SupportServantListViewManager_o *v66; // x25
  int32_t v67; // w0
  int32_t v68; // w2
  int32_t v69; // w3
  SupportServantListViewManager_o *v70; // x25
  int32_t v71; // w2
  int32_t v72; // w3
  SupportServantListViewManager_o *v73; // x25
  int32_t v74; // w2
  int32_t v75; // w3
  SupportServantListViewManager_o *v76; // x19
  System_String_o *v77; // x19
  System_String_o *v78; // x22
  System_String_o *v79; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v81; // x25
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x0
  const MethodInfo *v84; // x1
  __int64 v85; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_4A57C48 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1B885B0(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__);
    sub_1B885B0(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A57C48 = 1;
  }
  v7 = sub_1B887FC(SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_106;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
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
    *(_QWORD *)(v7 + 24) = Item;
    v15 = (SupportServantListViewItem_o **)(v7 + 24);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)Item, v12, v13);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        supportServantListViewManager = (SupportServantListViewManager_o *)*v15;
        if ( !*v15 )
          goto LABEL_106;
        SupportServantListViewItem__SwapChoice((SupportServantListViewItem_o *)supportServantListViewManager, 0LL);
        v20 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v20 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_OnSelectItem__);
        v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v20, v20[4]);
        v19 = 0;
        goto LABEL_20;
      }
      if ( tabModeKind == 1 )
      {
        supportServantListViewManager = (SupportServantListViewManager_o *)*v15;
        if ( !*v15 )
          goto LABEL_106;
        SupportServantListViewItem__SwapLock((SupportServantListViewItem_o *)supportServantListViewManager, 0LL);
        v17 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v17 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_OnSelectItem__);
        v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v17, v17[4]);
        v19 = 11;
        goto LABEL_20;
      }
      supportServantListViewManager = (SupportServantListViewManager_o *)*v15;
      if ( !*v15 )
        goto LABEL_106;
      if ( tabModeKind == 3 )
      {
        v26 = BYTE4(supportServantListViewManager->fields.itemList);
        v27 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v27 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_OnSelectItem__);
        v28 = (System_Reflection_MethodBase_o *)sub_1B88594(v27, v27[4]);
        if ( !v26 )
        {
          OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0LL);
          this->fields.state = 2;
          v21 = this->fields.supportServantListViewManager;
          v22 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantListViewManager_CallbackFunc_TypeInfo);
          v24 = (int)Method_SupportServantSelectMenu_OnSelectItem__;
LABEL_21:
          v25 = v22;
          SupportServantListViewManager_CallbackFunc___ctor(v22, (Il2CppObject *)this, v24, v23);
          if ( v21 )
          {
            SupportServantListViewManager__SetMode(v21, 2, v25, 0LL);
            return;
          }
LABEL_106:
          sub_1B8880C(supportServantListViewManager, v9);
        }
        OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0LL);
        supportServantListViewManager = (SupportServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        dragParentObject = (int64_t)supportServantListViewManager->fields.dragParentObject;
        if ( !dragParentObject )
          goto LABEL_35;
        if ( !*v15 )
          goto LABEL_106;
        userServantEntity = (*v15)->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_106;
        v32 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v87.fields.fakeValue = v32;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v86 = v87;
        if ( dragParentObject == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v86, 0LL) )
        {
LABEL_35:
          SupportServantSelectMenu__PushRequest(this, *v15, v29);
          return;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
                   dragParentObject,
                   (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Entity )
          goto LABEL_106;
        v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
        klass = Entity[5].klass;
        monitor = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v88.fields.currentCryptoKey = klass;
        *(_QWORD *)&v88.fields.fakeValue = monitor;
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                             v88,
                                                                             0LL);
        if ( !v43 )
          goto LABEL_106;
        v46 = DataMasterBase_object__object__int___GetEntity(
                v43,
                (int32_t)supportServantListViewManager,
                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                0LL);
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                                             0LL);
        if ( !Master_object )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                             (ServantLimitImageMaster_o *)Master_object,
                                                                             v48,
                                                                             (int32_t)supportServantListViewManager,
                                                                             0LL);
        if ( !*v15 )
          goto LABEL_106;
        v49 = (int)supportServantListViewManager;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_SvtId(
                                                                             *v15,
                                                                             0LL);
        if ( !*v15 )
          goto LABEL_106;
        v50 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v15)->fields.userServantEntity;
        if ( !v50 )
          goto LABEL_106;
        v51 = (int)supportServantListViewManager;
        v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v50[6], 0LL);
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       (ServantLimitImageMaster_o *)Master_object,
                                       v51,
                                       v52,
                                       0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
        v56 = sub_1B88658(object___TypeInfo, 6LL);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
        if ( !v56 )
          goto LABEL_106;
        v60 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B886EC(
                                                                                   supportServantListViewManager,
                                                                                   *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0LL )
        {
          if ( !*(_DWORD *)(v56 + 24) )
            goto LABEL_107;
          *(_QWORD *)(v56 + 32) = v60;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 32), (int32_t)v60, v58, v59);
          if ( !v46 )
            goto LABEL_106;
          supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                               (ServantEntity_o *)v46,
                                                                               0LL);
          v63 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B886EC(
                                                                                     supportServantListViewManager,
                                                                                     *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v56 + 24) <= 1u )
              goto LABEL_107;
            *(_QWORD *)(v56 + 40) = v63;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 40), (int32_t)v63, v61, v62);
            supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(
                                                                                 (ServantEntity_o *)v46,
                                                                                 v49,
                                                                                 -1,
                                                                                 0LL);
            v66 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B886EC(
                                                                                       supportServantListViewManager,
                                                                                       *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v56 + 24) <= 2u )
                goto LABEL_107;
              *(_QWORD *)(v56 + 48) = v66;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 48), (int32_t)v66, v64, v65);
              if ( !*v15 )
                goto LABEL_106;
              supportServantListViewManager = (SupportServantListViewManager_o *)(*v15)->fields.userServantEntity;
              if ( !supportServantListViewManager )
                goto LABEL_106;
              v67 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
              supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(v67, 0LL);
              v70 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B886EC(
                                                                                         supportServantListViewManager,
                                                                                         *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v56 + 24) <= 3u )
                  goto LABEL_107;
                *(_QWORD *)(v56 + 56) = v70;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 56), (int32_t)v70, v68, v69);
                if ( !*v15 )
                  goto LABEL_106;
                supportServantListViewManager = (SupportServantListViewManager_o *)(*v15)->fields.servantEntity;
                if ( !supportServantListViewManager )
                  goto LABEL_106;
                supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                                     (ServantEntity_o *)supportServantListViewManager,
                                                                                     0LL);
                v73 = supportServantListViewManager;
                if ( !supportServantListViewManager
                  || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B886EC(
                                                                                           supportServantListViewManager,
                                                                                           *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v56 + 24) <= 4u )
                    goto LABEL_107;
                  *(_QWORD *)(v56 + 64) = v73;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 64), (int32_t)v73, v71, v72);
                  if ( !*v15 )
                    goto LABEL_106;
                  supportServantListViewManager = (SupportServantListViewManager_o *)(*v15)->fields.servantEntity;
                  if ( !supportServantListViewManager )
                    goto LABEL_106;
                  supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(
                                                                                       (ServantEntity_o *)supportServantListViewManager,
                                                                                       ServantLimitCountSealAfter,
                                                                                       -1,
                                                                                       0LL);
                  v76 = supportServantListViewManager;
                  if ( !supportServantListViewManager
                    || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B886EC(
                                                                                             supportServantListViewManager,
                                                                                             *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v56 + 24) > 5u )
                    {
                      *(_QWORD *)(v56 + 72) = v76;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 72), (int32_t)v76, v74, v75);
                      v77 = System_String__Format_61721540(v55, (System_Object_array *)v56, 0LL);
                      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                      v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v81 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v81,
                        (Il2CppObject *)v7,
                        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__,
                        0LL);
                      supportServantListViewManager = (SupportServantListViewManager_o *)BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( !Instance )
                        goto LABEL_106;
                      CommonUI__OpenConfirmDialog_30493912(
                        (CommonUI_o *)Instance,
                        v54,
                        v77,
                        v78,
                        v79,
                        v81,
                        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                        0,
                        0,
                        0LL);
                      return;
                    }
LABEL_107:
                    sub_1B88814(supportServantListViewManager, v9);
                  }
                }
              }
            }
          }
        }
        v85 = sub_1B88830();
        sub_1B886D8(v85, 0LL);
      }
      if ( BYTE4(supportServantListViewManager->fields.sort) )
      {
        v33 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v33 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_OnSelectItem__);
        v34 = (System_Reflection_MethodBase_o *)sub_1B88594(v33, v33[4]);
        OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
        SupportServantSelectMenu__Init(this, v35);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v15 )
          goto LABEL_106;
        classPos = this->fields.classPos;
        v38 = (*v15)->fields.userServantEntity;
        v39 = 2;
      }
      else
      {
        if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(
               (SupportServantListViewItem_o *)supportServantListViewManager,
               0LL) )
        {
          goto LABEL_50;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)*v15;
        if ( !*v15 )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_IsUseServant(
                                                                             (SupportServantListViewItem_o *)supportServantListViewManager,
                                                                             0LL);
        if ( ((unsigned __int8)supportServantListViewManager & 1) != 0 )
          goto LABEL_50;
        v40 = *v15;
        if ( !*v15 )
          goto LABEL_106;
        if ( v40->fields.isEventJoin || v40->fields.isUseInSet )
        {
LABEL_50:
          v41 = Method_SupportServantSelectMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
            v41 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_OnSelectItem__);
          v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v41, v41[4]);
          v19 = 2;
LABEL_20:
          OverwriteAssetSoundName__PlaySystemSe(v18, v19, 0LL);
          v21 = this->fields.supportServantListViewManager;
          v22 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantListViewManager_CallbackFunc_TypeInfo);
          v24 = (int)Method_SupportServantSelectMenu_OnSelectItem__;
          goto LABEL_21;
        }
        v82 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v82 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_OnSelectItem__);
        v83 = (System_Reflection_MethodBase_o *)sub_1B88594(v82, v82[4]);
        OverwriteAssetSoundName__PlaySystemSe(v83, 0, 0LL);
        SupportServantSelectMenu__Init(this, v84);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v15 )
          goto LABEL_106;
        classPos = this->fields.classPos;
        v38 = (*v15)->fields.userServantEntity;
        v39 = 1;
      }
      SupportServantSelectMenu__Callback(this, v39, classPos, v38, v36);
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
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  UnityEngine_GameObject_o *v22; // x27
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v27; // x20

  if ( (byte_4A57C46 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantSelectMenu_EndOpen__);
    sub_1B885B0(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1B885B0(&StringLiteral_4521/*"ClassPos"*/);
    byte_4A57C46 = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v22 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v22, (unsigned __int8)gameObject & 1, 0LL);
  this->fields.classPos = classPos;
  if ( UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4521/*"ClassPos"*/, -1, 0LL) != classPos )
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
  TitleInfoControl__setBackBtnSprite_37184884((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
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
  v24 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v25);
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__SetMode(supportServantListViewManager, 1, v24, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = (UnityEngine_GameObject_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                   (SupportServantListViewManager_o *)gameObject,
                                                   0LL),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_1B8880C(gameObject, v21);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v27, 0LL);
}


void __fastcall SupportServantSelectMenu__PushRequest(
        SupportServantSelectMenu_o *this,
        SupportServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v17; // x0
  __int128 v18; // q1
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  Il2CppObject *Request_object; // x0
  __int128 v21; // q1
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w26
  int32_t v24; // w27
  int32_t v25; // w28
  int32_t v26; // w29
  bool IsLock; // w21
  char v28; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A57C51 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__);
    byte_4A57C51 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userServantEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v7->fields.masterLoadThreads;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
  if ( !v22 )
LABEL_18:
    sub_1B8880C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_SynchronizationContext_o *)v39,
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

  if ( (byte_4A57C43 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4A57C43 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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
      sub_1B8880C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_33382544(supportServantListViewManager, 3, 0LL);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4A57C4B & 1) == 0 )
  {
    sub_1B885B0(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantSelectMenu_EndClickTabChoice__);
    sub_1B885B0(&Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    byte_4A57C4B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          v8);
        SupportServantSelectMenu__statusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabChoice__,
        v11);
      SupportServantSelectMenu__statusRequest(this, v10, v12);
    }
    SupportServantSelectMenu__setModeTabKind(this, 2, v5);
  }
}


void __fastcall SupportServantSelectMenu__onClickLockTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4A57C4A & 1) == 0 )
  {
    sub_1B885B0(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantSelectMenu_EndClickTabLock__);
    sub_1B885B0(&Method_SupportServantSelectMenu_onClickLockTabButton__);
    byte_4A57C4A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          v8);
        SupportServantSelectMenu__statusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabLock__,
        v11);
      SupportServantSelectMenu__statusRequest(this, v10, v12);
    }
    SupportServantSelectMenu__setModeTabKind(this, 1, v5);
  }
}


void __fastcall SupportServantSelectMenu__onClickNormalTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A57C49 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantSelectMenu_EndClickTabNormal__);
    sub_1B885B0(&Method_SupportServantSelectMenu_onClickNormalTabButton__);
    byte_4A57C49 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabNormal__,
      v6);
    SupportServantSelectMenu__statusRequest(this, v5, v7);
  }
}


void __fastcall SupportServantSelectMenu__onClickPushTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A57C4C & 1) == 0 )
  {
    sub_1B885B0(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantSelectMenu_EndClickTabPush__);
    sub_1B885B0(&Method_SupportServantSelectMenu_onClickPushTabButton__);
    byte_4A57C4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_SupportServantSelectMenu_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantSelectMenu_onClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabPush__,
      v6);
    SupportServantSelectMenu__statusRequest(this, v5, v7);
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

  if ( (byte_4A57C44 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4A57C44 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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
  UILabel_o *explanationLabel; // x21
  __int64 *v19; // x8
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3

  if ( (byte_4A57C4D & 1) == 0 )
  {
    sub_1B885B0(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1B885B0(&StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1B885B0(&StringLiteral_17661/*"button_push_reg"*/);
    sub_1B885B0(&StringLiteral_17662/*"button_push_unreg"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_12466/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A57C4D = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    v6 = this->fields.normalTabButton;
    if ( !v6 )
      goto LABEL_48;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
    UICommonButton__SetColliderEnable(v6, enabled, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17664/*"button_select_unreg"*/ : &StringLiteral_17663/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_48;
    v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v10, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17649/*"button_alllock_reg"*/ : &StringLiteral_17650/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v11, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_48;
    v13 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v13, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v14 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17647/*"button_allchoice_reg"*/ : &StringLiteral_17648/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v14, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0LL);
    pushTabButton = this->fields.pushTabButton;
    if ( !pushTabButton )
      goto LABEL_48;
    v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
    UICommonButton__SetColliderEnable(pushTabButton, v16, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    if ( this->fields.tabModeKind == 3 )
      v17 = &StringLiteral_17661/*"button_push_reg"*/;
    else
      v17 = &StringLiteral_17662/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v17, 0LL);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_12466/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_41:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v19, 0LL);
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
          v21 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantListViewManager_CallbackFunc_TypeInfo);
          SupportServantListViewManager_CallbackFunc___ctor(
            v21,
            (Il2CppObject *)this,
            (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
            v22);
          if ( supportServantListViewManager )
          {
            SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v21, 0LL);
            return;
          }
LABEL_48:
          sub_1B8880C(normalTabButton, *(_QWORD *)&modeKind);
        }
        SupportServantListViewManager__SetMode_33382544((SupportServantListViewManager_o *)normalTabButton, 1, 0LL);
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
  int32_t tabModeKind; // w8
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  System_Int64_array *v10; // x1
  System_Int64_array *v11; // x2
  bool v12; // w4
  bool v13; // w5
  int32_t v14; // w2
  int32_t v15; // w3
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int64_array *v17; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A57C4F & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantSelectMenu_EndStatusSync__);
    byte_4A57C4F = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v17 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( SupportServantListViewManager__GetSwapChoiceList(supportServantListViewManager, &choiceList, &v17, 0LL) )
    {
      this->fields.requestCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v14, v15);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v16,
                                                                           (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v11 = v17;
        v10 = choiceList;
        v13 = 1;
        v12 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B8880C(supportServantListViewManager, callback);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v7, v8);
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v9,
                                                                           (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v11 = unlockList;
        v10 = lockList;
        v12 = 1;
        v13 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v10,
          v11,
          0,
          v12,
          v13,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CB554;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CB4F4;
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  _QWORD v15[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v16; // [xsp+10h] [xbp-60h]
  int32_t v17; // [xsp+28h] [xbp-48h] BYREF
  int32_t v18; // [xsp+2Ch] [xbp-44h] BYREF

  v17 = classPos;
  v18 = result;
  if ( (byte_4A57C54 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&SupportSelectRootComponent_ResultKind_TypeInfo);
    byte_4A57C54 = 1;
  }
  v16 = 0u;
  v15[0] = j_il2cpp_value_box_0(
             SupportSelectRootComponent_ResultKind_TypeInfo,
             &v18,
             *(_QWORD *)&classPos,
             entity,
             callback);
  v15[1] = j_il2cpp_value_box_0(int_TypeInfo, &v17, v11, v12, v13);
  *(_QWORD *)&v16 = entity;
  return (System_IAsyncResult_o *)sub_1B88564(this, v15, callback, object);
}


void __fastcall SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CB5B4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CB56C;
}


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
  if ( (byte_4A57C55 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A57C55 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__0(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct SupportServantSelectMenu_o *_4__this; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3

  if ( (byte_4A57C56 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1B885B0(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__);
    byte_4A57C56 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v13 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v14);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v13, 0LL);
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  SupportServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}