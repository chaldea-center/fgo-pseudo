void __fastcall RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57473 & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A57473 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu__Awake(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportServantSelectListMenu__ClearScrollValue(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1B8880C(0LL, method);
  ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu__EndCancelButton(
        RecommendSupportServantSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4A5746E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A5746E = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B8880C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_32555168(supportServantListViewManager, 4, v6);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu__EndCardFavoriteRequest(
        RecommendSupportServantSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  struct RecommendSupportServantSelectListViewManager_o *v5; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A57472 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_4A57472 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v5 = this->fields.supportServantListViewManager,
        v6 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          v7),
        !v5) )
  {
    sub_1B8880C(supportServantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9);
  RecommendSupportServantSelectListViewManager__SetMode_32525832(v5, 2, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu__EndClickTabChoice(
        RecommendSupportServantSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B8880C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_32555168(supportServantListViewManager, 4, v5);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu__EndClickTabLock(
        RecommendSupportServantSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B8880C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_32555168(supportServantListViewManager, 4, v5);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu__EndClickTabNormal(
        RecommendSupportServantSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B8880C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_32555168(supportServantListViewManager, 4, v5);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu__EndClickTabPush(
        RecommendSupportServantSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B8880C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_32555168(supportServantListViewManager, 4, v5);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 3, method);
}


void __fastcall RecommendSupportServantSelectListMenu__EndStatusSync(
        RecommendSupportServantSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_requestCallback; // x0
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v5; // x19
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *requestCallback; // t1

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


void __fastcall RecommendSupportServantSelectListMenu__Init(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4A57465 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12466/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_4A57465 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportServantSelectListViewManager__DestroyList(supportServantListViewManager, method);
  this->fields.state = 0;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)LocalizationManager__Get(
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
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 0, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu__ModifyItem(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1B8880C(0LL, method);
  RecommendSupportServantSelectListViewManager__RequestListObject_32555168(supportServantListViewManager, 4, v2);
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickCancel(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewManager_o *Instance; // x0
  __int64 v6; // x1
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4A5746D & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    sub_1B885B0(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&StringLiteral_12576/*"SelectIndex"*/);
    byte_4A5746D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12576/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0LL),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B8880C(Instance, v6);
    }
    ListViewManager__SetScrollBarValue(Instance, 0LL);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndCancelButton__,
      v8);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickChoiceTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4A5746A & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    sub_1B885B0(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A5746A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
        v11);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v10, v12);
    }
    RecommendSupportServantSelectListMenu__SetModeTabKind(this, 2, v5);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickLockTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4A57469 & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    sub_1B885B0(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57469 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
        v11);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v10, v12);
    }
    RecommendSupportServantSelectListMenu__SetModeTabKind(this, 1, v5);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickNormalTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A57468 & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    sub_1B885B0(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57468 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__,
      v6);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v5, v7);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickPushTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A5746B & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    sub_1B885B0(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A5746B = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabPush__,
      v6);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v5, v7);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickScaleChange(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4A57470 & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    byte_4A57470 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ChangeIconScale(supportServantListViewManager, v5),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                                                                                              supportServantListViewManager,
                                                                                              v5),
          !scaleChangeTabSprite) )
    {
      sub_1B8880C(supportServantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantListViewManager, 0LL);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnSelectItem(
        RecommendSupportServantSelectListMenu_o *this,
        int32_t kind,
        int32_t offset,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 supportServantListViewManager; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  int32_t v13; // w3
  RecommendSupportServantSelectListViewItem_o *Item; // x1
  RecommendSupportServantSelectListViewItem_o **v15; // x19
  const MethodInfo *v16; // x1
  int32_t tabModeKind; // w8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  int32_t v20; // w1
  _QWORD *v21; // x0
  struct RecommendSupportServantSelectListViewManager_o *v22; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v23; // x20
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x2
  RecommendSupportServantSelectListViewItem_o *v28; // x0
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  const MethodInfo *v31; // x2
  const MethodInfo_361B780 *v32; // x3
  int64_t v33; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v35; // q0
  __int128 v36; // q1
  int64_t v37; // x24
  const MethodInfo_361AA4C *v38; // x3
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  const MethodInfo *v41; // x1
  RecommendSupportData_o *v42; // x19
  const MethodInfo_3739718 *v43; // x0
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  _QWORD *v46; // x0
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  const MethodInfo *v49; // x1
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v51; // x8
  RecommendSupportData_o *v52; // x20
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v57; // x25
  Il2CppObject *Master_object; // x21
  int32_t v59; // w22
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v61; // x1
  int32_t v62; // w27
  struct UserServantEntity_o *v63; // x8
  int32_t v64; // w22
  __int64 v65; // x23
  __int64 v66; // x24
  int32_t v67; // w0
  int32_t v68; // w24
  System_String_o *v69; // x21
  System_String_o *v70; // x22
  __int64 v71; // x23
  int32_t Rarity; // w26
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x26
  int32_t v76; // w2
  int32_t v77; // w3
  __int64 v78; // x26
  int32_t v79; // w2
  int32_t v80; // w3
  __int64 v81; // x25
  int32_t v82; // w0
  int32_t v83; // w2
  int32_t v84; // w3
  __int64 v85; // x25
  int32_t v86; // w2
  int32_t v87; // w3
  __int64 v88; // x25
  int32_t v89; // w2
  int32_t v90; // w3
  __int64 v91; // x19
  System_String_o *v92; // x19
  System_String_o *v93; // x22
  System_String_o *v94; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v96; // x25
  __int64 v97; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+10h] [xbp-150h] BYREF
  __int128 v99; // [xsp+30h] [xbp-130h]
  __int128 v100; // [xsp+40h] [xbp-120h]
  _BYTE v101[40]; // [xsp+50h] [xbp-110h] BYREF
  __int128 v102[2]; // [xsp+80h] [xbp-E0h] BYREF
  __int128 v103; // [xsp+A0h] [xbp-C0h]
  _OWORD v104[2]; // [xsp+B0h] [xbp-B0h] BYREF
  char v105[39]; // [xsp+D0h] [xbp-90h] BYREF
  __int64 v106; // [xsp+F8h] [xbp-68h]
  System_Nullable_T__o v107; // 0:x0.16
  System_Nullable_long__o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  v106 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4A57467 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_long___ctor__);
    sub_1B885B0(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1B885B0(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_long__get_HasValue__);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__);
    sub_1B885B0(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A57467 = 1;
  }
  memset(v105, 0, sizeof(v105));
  v103 = 0u;
  memset(v104, 0, 23);
  v7 = sub_1B887FC(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_128;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  if ( this->fields.state != 2 )
    return;
  if ( (offset & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    supportServantListViewManager = (__int64)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_128;
    Item = RecommendSupportServantSelectListViewManager__GetItem(
             (RecommendSupportServantSelectListViewManager_o *)supportServantListViewManager,
             offset,
             v12);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v15 = (RecommendSupportServantSelectListViewItem_o **)(v7 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v12, v13);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v15 )
      (*v15)->fields._IsSwapChoice_k__BackingField ^= 1u;
    v21 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v21, v21[4]);
    v20 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v15 )
      (*v15)->fields._IsSwapLock_k__BackingField ^= 1u;
    v18 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v18, v18[4]);
    v20 = 11;
LABEL_22:
    OverwriteAssetSoundName__PlaySystemSe(v19, v20, 0LL);
    goto LABEL_23;
  }
  v28 = *v15;
  if ( tabModeKind != 3 )
  {
    if ( v28 )
    {
      if ( v28->fields._IsBase_k__BackingField )
      {
        v39 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v39 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v40 = (System_Reflection_MethodBase_o *)sub_1B88594(v39, v39[4]);
        OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0LL);
        RecommendSupportServantSelectListMenu__Init(this, v41);
        supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_128;
        v42 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
        supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !v42 )
          goto LABEL_128;
        RecommendSupportData__RemoveServantData(v42, *(_DWORD *)(supportServantListViewManager + 120), 0LL);
        v43 = (const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_76;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v28, v16) )
        goto LABEL_62;
      supportServantListViewManager = (__int64)*v15;
      if ( !*v15 )
        goto LABEL_128;
      if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v9) )
      {
        goto LABEL_62;
      }
      supportServantListViewManager = (__int64)*v15;
      if ( !*v15 )
        goto LABEL_128;
      if ( *(_BYTE *)(supportServantListViewManager + 166)
        || *(_BYTE *)(supportServantListViewManager + 220)
        || RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v9) )
      {
LABEL_62:
        v46 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v46 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v46, v46[4]);
        v20 = 2;
        goto LABEL_22;
      }
    }
    v47 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v47 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v48 = (System_Reflection_MethodBase_o *)sub_1B88594(v47, v47[4]);
    OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0LL);
    RecommendSupportServantSelectListMenu__Init(this, v49);
    if ( !*v15 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_128;
    if ( !SelfUserGame )
      goto LABEL_128;
    v51 = *(_QWORD *)(supportServantListViewManager + 112);
    if ( !v51 )
      goto LABEL_128;
    *(_QWORD *)(v51 + 64) = SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_128;
    v52 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
    supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v15 || !v52 )
      goto LABEL_128;
    RecommendSupportData__SetServantData(
      v52,
      *(_DWORD *)(supportServantListViewManager + 120),
      (*v15)->fields._UserServant_k__BackingField,
      0LL);
    v43 = (const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_76:
    supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance(v43);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, 0LL);
      return;
    }
    goto LABEL_128;
  }
  if ( v28 && !v28->fields._IsEnabled_k__BackingField )
  {
    v44 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v44 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v45 = (System_Reflection_MethodBase_o *)sub_1B88594(v44, v44[4]);
    OverwriteAssetSoundName__PlaySystemSe(v45, 2, 0LL);
    this->fields.state = 2;
LABEL_23:
    v22 = this->fields.supportServantListViewManager;
    v23 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
      v24);
    if ( v22 )
    {
      v22->fields.callbackFunc = v23;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->fields.callbackFunc, (int32_t)v23, v25, v26);
      RecommendSupportServantSelectListViewManager__SetMode_32525832(v22, 2, v27);
      return;
    }
LABEL_128:
    sub_1B8880C(supportServantListViewManager, v9);
  }
  v29 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v29 = (_QWORD *)sub_1B885C8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v30 = (System_Reflection_MethodBase_o *)sub_1B88594(v29, v29[4]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
  supportServantListViewManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !supportServantListViewManager )
    goto LABEL_128;
  v33 = *(_QWORD *)(supportServantListViewManager + 120);
  if ( !v33 )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v15, v31);
    return;
  }
  if ( *v15 )
  {
    UserServant_k__BackingField = (*v15)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_128;
    v35 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v36 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v107.fields.hasValue = v101;
    v107.fields.value = (Il2CppObject *)v102;
    memset(v101, 0, sizeof(v101));
    v99 = v35;
    v100 = v36;
    v102[0] = v35;
    v102[1] = v36;
    System_Nullable_ObscuredLong____ctor(
      v107,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v32);
    *(_QWORD *)((char *)v104 + 15) = *(_QWORD *)&v101[32];
    v103 = *(_OWORD *)&v101[1];
    v104[0] = *(_OWORD *)&v101[17];
    if ( v101[0] )
      v37 = v33;
    else
      v37 = 0LL;
    *(_OWORD *)v105 = *(_OWORD *)&v101[1];
    *(_OWORD *)&v105[16] = *(_OWORD *)&v101[17];
    *(_QWORD *)&v105[31] = *(_QWORD *)((char *)v104 + 15);
    if ( v101[0] )
    {
      *(_OWORD *)v101 = *(_OWORD *)&v105[7];
      *(_OWORD *)&v101[16] = *(_OWORD *)&v105[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v98 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v101;
      v108.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v98, 0LL);
      *(_QWORD *)&v108.fields.hasValue = v102;
      v102[0] = 0uLL;
      System_Nullable_long____ctor(v108, Method_System_Nullable_long___ctor__, v38);
      if ( LOBYTE(v102[0]) )
      {
        if ( v37 == *((_QWORD *)&v102[0] + 1) )
          goto LABEL_43;
      }
    }
  }
  else
  {
    v103 = 0u;
    memset(v104, 0, 23);
    memset(v105, 0, sizeof(v105));
  }
  supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_128;
  supportServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)supportServantListViewManager,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_128;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
             v33,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_128;
  supportServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)supportServantListViewManager,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_128;
  v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v109.fields.currentCryptoKey = klass;
  *(_QWORD *)&v109.fields.fakeValue = monitor;
  supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v109, 0LL);
  if ( !v54 )
    goto LABEL_128;
  v57 = DataMasterBase_object__object__int___GetEntity(
          v54,
          supportServantListViewManager,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0LL);
  supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                    0LL);
  if ( !Master_object )
    goto LABEL_128;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 v59,
                                 supportServantListViewManager,
                                 0LL);
  if ( *v15 )
  {
    v62 = ServantLimitCountSealAfter;
    supportServantListViewManager = RecommendSupportServantSelectListViewItem__get_SvtId(*v15, v61);
    if ( !*v15 )
      goto LABEL_128;
    v63 = (*v15)->fields._UserServant_k__BackingField;
    if ( !v63 )
      goto LABEL_128;
    v64 = supportServantListViewManager;
    v66 = *(_QWORD *)&v63->fields.limitCount.fields.currentCryptoKey;
    v65 = *(_QWORD *)&v63->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v110.fields.currentCryptoKey = v66;
    *(_QWORD *)&v110.fields.fakeValue = v65;
    v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v110, 0LL);
    v68 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
            (ServantLimitImageMaster_o *)Master_object,
            v64,
            v67,
            0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v70 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v71 = sub_1B88658(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    supportServantListViewManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v71 )
      goto LABEL_128;
    v75 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = sub_1B886EC(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v71 + 24) )
        goto LABEL_129;
      *(_QWORD *)(v71 + 32) = v75;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 32), v75, v73, v74);
      if ( !v57 )
        goto LABEL_128;
      supportServantListViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v57, 0LL);
      v78 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = sub_1B886EC(
                                              supportServantListViewManager,
                                              *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v71 + 24) <= 1u )
          goto LABEL_129;
        *(_QWORD *)(v71 + 40) = v78;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 40), v78, v76, v77);
        supportServantListViewManager = (__int64)ServantEntity__getName((ServantEntity_o *)v57, v62, -1, 0LL);
        v81 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = sub_1B886EC(
                                                supportServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v71 + 24) <= 2u )
            goto LABEL_129;
          *(_QWORD *)(v71 + 48) = v81;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 48), v81, v79, v80);
          if ( !*v15 )
            goto LABEL_128;
          supportServantListViewManager = (__int64)(*v15)->fields._UserServant_k__BackingField;
          if ( !supportServantListViewManager )
            goto LABEL_128;
          v82 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
          supportServantListViewManager = (__int64)Rarity__getRarityType(v82, 0LL);
          v85 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = sub_1B886EC(
                                                  supportServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v71 + 24) <= 3u )
              goto LABEL_129;
            *(_QWORD *)(v71 + 56) = v85;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 56), v85, v83, v84);
            if ( !*v15 )
              goto LABEL_128;
            supportServantListViewManager = (__int64)(*v15)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_128;
            supportServantListViewManager = (__int64)ServantEntity__getClassName(
                                                       (ServantEntity_o *)supportServantListViewManager,
                                                       0LL);
            v88 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = sub_1B886EC(
                                                    supportServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v71 + 24) <= 4u )
                goto LABEL_129;
              *(_QWORD *)(v71 + 64) = v88;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 64), v88, v86, v87);
              if ( !*v15 )
                goto LABEL_128;
              supportServantListViewManager = (__int64)(*v15)->fields._Servant_k__BackingField;
              if ( !supportServantListViewManager )
                goto LABEL_128;
              supportServantListViewManager = (__int64)ServantEntity__getName(
                                                         (ServantEntity_o *)supportServantListViewManager,
                                                         v68,
                                                         -1,
                                                         0LL);
              v91 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = sub_1B886EC(
                                                      supportServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v71 + 24) > 5u )
                {
                  *(_QWORD *)(v71 + 72) = v91;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 72), v91, v89, v90);
                  v92 = System_String__Format_61721540(v70, (System_Object_array *)v71, 0LL);
                  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v96 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v96,
                    (Il2CppObject *)v7,
                    Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__,
                    0LL);
                  supportServantListViewManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30493912(
                      (CommonUI_o *)Instance,
                      v69,
                      v92,
                      v93,
                      v94,
                      v96,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_128;
                }
LABEL_129:
                sub_1B88814(supportServantListViewManager, v9);
              }
            }
          }
        }
      }
    }
    v97 = sub_1B88830();
    sub_1B886D8(v97, 0LL);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__Open(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  void *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  int v6; // w20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportData_o *v8; // x21
  int32_t v9; // w22
  const MethodInfo *v10; // x4
  struct RecommendSupportServantSelectListViewManager_o *v11; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v18; // x20

  if ( (byte_4A57466 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&StringLiteral_12576/*"SelectIndex"*/);
    byte_4A57466 = 1;
  }
  RecommendSupportServantSelectListMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_20;
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v5 )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(v5, (unsigned __int8)gameObject & 1, 0LL);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v6 = *((_DWORD *)gameObject + 30);
  if ( v6 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12576/*"SelectIndex"*/, -1, 0LL) )
  {
    gameObject = this->fields.supportServantListViewManager;
    if ( !gameObject )
      goto LABEL_20;
    ListViewManager__ClearScrollBarValue((ListViewManager_o *)gameObject, 1, 0LL);
  }
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 70, 0LL);
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setBackBtnSprite_37184884((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v8 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v9 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  if ( !supportServantListViewManager )
    goto LABEL_20;
  RecommendSupportServantSelectListViewManager__CreateList(
    supportServantListViewManager,
    v8,
    v9,
    *((EventUpValSetupInfo_o **)gameObject + 13),
    v10);
  v11 = this->fields.supportServantListViewManager;
  v12 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v13);
  if ( !v11
    || (v11->fields.callbackFunc = v12,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fields.callbackFunc, (int32_t)v12, v14, v15),
        RecommendSupportServantSelectListViewManager__SetMode_32525832(v11, 1, v16),
        (gameObject = this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                       (RecommendSupportServantSelectListViewManager_o *)gameObject,
                       v4),
        !scaleChangeTabSprite) )
  {
LABEL_20:
    sub_1B8880C(gameObject, v4);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v18, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu__PushRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *UserServant_k__BackingField; // x19
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

  if ( (byte_4A57471 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57471 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  UserServant_k__BackingField = selectItem->fields._UserServant_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !UserServant_k__BackingField )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.fakeValue;
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
  v14 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  context = v7->fields.context;
  p_fields = &UserServant_k__BackingField->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
  v18 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v7->fields.masterLoadThreads;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      UserServant_k__BackingField->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserServant_k__BackingField->fields.dispLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserServant_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserServant_k__BackingField->fields.iconLimitCount,
          0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserServant_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServant_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  UserServant_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       UserServant_k__BackingField->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          UserServant_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.fakeValue;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu__SetModeTabKind(
        RecommendSupportServantSelectListMenu_o *this,
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
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v22; // x21
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1

  if ( (byte_4A5746C & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
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
    byte_4A5746C = 1;
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
          v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17664/*"button_select_unreg"*/ : &StringLiteral_17663/*"button_select_reg"*/);
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
                v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17649/*"button_alllock_reg"*/ : &StringLiteral_17650/*"button_alllock_unreg"*/);
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
                                               ? &StringLiteral_17647/*"button_allchoice_reg"*/
                                               : &StringLiteral_17648/*"button_allchoice_unreg"*/);
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
                                v20 = &StringLiteral_12466/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
                                goto LABEL_41;
                              case 1:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v20 = &StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
                                goto LABEL_41;
                              case 2:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v20 = &StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
                                goto LABEL_41;
                              case 3:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v20 = &StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_41:
                                normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                                               (System_String_o *)*v20,
                                                                               0LL);
                                if ( !explanationLabel )
                                  break;
                                UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0LL);
LABEL_43:
                                normalTabButton = (UnityEngine_Behaviour_o *)this->fields.supportServantListViewManager;
                                if ( !normalTabButton )
                                  break;
                                LOBYTE(normalTabButton[19].fields.m_CachedPtr) = this->fields.tabModeKind != 0;
                                if ( this->fields.state != 2 )
                                {
                                  v26 = 1;
                                  goto LABEL_48;
                                }
                                RecommendSupportServantSelectListViewManager__UpdateItemState(
                                  (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
                                  modeKind == 3,
                                  v18);
                                supportServantListViewManager = this->fields.supportServantListViewManager;
                                v22 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
                                RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
                                  v22,
                                  (Il2CppObject *)this,
                                  (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
                                  v23);
                                if ( supportServantListViewManager )
                                {
                                  supportServantListViewManager->fields.callbackFunc = v22;
                                  sub_1B88554(
                                    (ServantStatusBattleListViewItem_o *)&supportServantListViewManager->fields.callbackFunc,
                                    (int32_t)v22,
                                    v24,
                                    v25);
                                  v26 = 2;
                                  normalTabButton = (UnityEngine_Behaviour_o *)supportServantListViewManager;
LABEL_48:
                                  RecommendSupportServantSelectListViewManager__SetMode_32525832(
                                    (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
                                    v26,
                                    v18);
                                  return;
                                }
                                break;
                              default:
                                goto LABEL_43;
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
    sub_1B8880C(normalTabButton, *(_QWORD *)&modeKind);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__StatusRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  System_Int64_array *v11; // x1
  System_Int64_array *v12; // x2
  bool v13; // w4
  bool v14; // w5
  int32_t v15; // w2
  int32_t v16; // w3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5746F & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5746F = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v18 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( RecommendSupportServantSelectListViewManager__GetSwapChoiceList(
           supportServantListViewManager,
           &choiceList,
           &v18,
           v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v15, v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v17,
                                                                                          (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v12 = v18;
        v11 = choiceList;
        v14 = 1;
        v13 = 0;
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
    if ( RecommendSupportServantSelectListViewManager__GetSwapLockList(
           supportServantListViewManager,
           &lockList,
           &unlockList,
           v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v8, v9);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v10,
                                                                                          (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v12 = unlockList;
        v11 = lockList;
        v13 = 1;
        v14 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v11,
          v12,
          0,
          v13,
          v14,
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


void __fastcall RecommendSupportServantSelectListMenu___Open_b__22_0(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A57474 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_4A57474 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v4 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v5);
  if ( !supportServantListViewManager )
    sub_1B8880C(v6, v7);
  supportServantListViewManager->fields.callbackFunc = v4;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&supportServantListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9);
  RecommendSupportServantSelectListViewManager__SetMode_32525832(supportServantListViewManager, 2, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_19C9C7C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9C34;
}


System_IAsyncResult_o *__fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc__BeginInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4A57475 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A57475 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc__Invoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall RecommendSupportServantSelectListMenu___c__DisplayClass24_0___ctor(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__0(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct RecommendSupportServantSelectListMenu_o *_4__this; // x20
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2

  if ( (byte_4A57476 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__);
    byte_4A57476 = 1;
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
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
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
  v13 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B887FC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v14);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  supportServantListViewManager->fields.callbackFunc = v13;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&supportServantListViewManager->fields.callbackFunc,
    (int32_t)v13,
    v15,
    v16);
  RecommendSupportServantSelectListViewManager__SetMode_32525832(supportServantListViewManager, 2, v17);
}


void __fastcall RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  RecommendSupportServantSelectListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}