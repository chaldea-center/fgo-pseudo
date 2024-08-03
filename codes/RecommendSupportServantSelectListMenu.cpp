void __fastcall RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F87A4 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F87A4 = 1;
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
    sub_1B64324(0LL);
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

  if ( (byte_49F879F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, isRequest);
    byte_49F879F = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B64324(supportServantListViewManager);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32290352(supportServantListViewManager, 3, 0LL);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v6);
}


void __fastcall RecommendSupportServantSelectListMenu__EndCardFavoriteRequest(
        RecommendSupportServantSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  RecommendSupportServantSelectListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_49F87A3 & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    byte_49F87A3 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, 0LL),
        v6 = this->fields.supportServantListViewManager,
        v9 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                              RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                                              v7,
                                                                              v8),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          0LL),
        !v6) )
  {
    sub_1B64324(supportServantListViewManager);
  }
  RecommendSupportServantSelectListViewManager__SetMode(v6, 2, v9, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu__EndClickTabChoice(
        RecommendSupportServantSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64324(supportServantListViewManager);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32290352(supportServantListViewManager, 3, 0LL);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 2, method);
}


void __fastcall RecommendSupportServantSelectListMenu__EndClickTabLock(
        RecommendSupportServantSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64324(supportServantListViewManager);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32290352(supportServantListViewManager, 3, 0LL);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 1, method);
}


void __fastcall RecommendSupportServantSelectListMenu__EndClickTabNormal(
        RecommendSupportServantSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64324(supportServantListViewManager);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32290352(supportServantListViewManager, 3, 0LL);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 0, method);
}


void __fastcall RecommendSupportServantSelectListMenu__EndClickTabPush(
        RecommendSupportServantSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64324(supportServantListViewManager);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32290352(supportServantListViewManager, 3, 0LL);
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
    sub_1B6406C(p_requestCallback, 0, (int32_t)method, v3);
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
  __int64 v3; // x1
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v8; // x2

  if ( (byte_49F8796 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_12411/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v3);
    byte_49F8796 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportServantSelectListViewManager__DestroyList(supportServantListViewManager, 0LL);
  this->fields.state = 0;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_12411/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                                      0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1B64324(supportServantListViewManager);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0LL);
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 0, v8);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu__ModifyItem(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1B64324(0LL);
  RecommendSupportServantSelectListViewManager__SetMode_32290352(supportServantListViewManager, 3, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickCancel(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  ListViewManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_49F879E & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__, method);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__, v3);
    sub_1B640C8(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_12515/*"SelectIndex"*/, v6);
    byte_49F879E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12515/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0LL),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64324(Instance);
    }
    ListViewManager__SetScrollBarValue(Instance, 0LL);
    v12 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                           RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                           v10,
                                                                           v11);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndCancelButton__,
      0LL);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v12, v13);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickChoiceTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_49F879B & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__, method);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__, v3);
    sub_1B640C8(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F879B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                               RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                               v7,
                                                                               v8);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          0LL);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                             RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                             v7,
                                                                             v8);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
        0LL);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v12, v13);
    }
    RecommendSupportServantSelectListMenu__SetModeTabKind(this, 2, v8);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickLockTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_49F879A & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__, method);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__, v3);
    sub_1B640C8(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F879A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                               RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                               v7,
                                                                               v8);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          0LL);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                             RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                             v7,
                                                                             v8);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
        0LL);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v12, v13);
    }
    RecommendSupportServantSelectListMenu__SetModeTabKind(this, 1, v8);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickNormalTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_49F8799 & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__, method);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__, v3);
    sub_1B640C8(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F8799 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                          RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                          v7,
                                                                          v8);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__,
      0LL);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v10);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickPushTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_49F879C & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__, method);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__, v3);
    sub_1B640C8(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F879C = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                          RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                          v7,
                                                                          v8);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabPush__,
      0LL);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v10);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickScaleChange(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_49F87A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__, method);
    byte_49F87A1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ChangeIconScale(supportServantListViewManager, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                                                                                              supportServantListViewManager,
                                                                                              0LL),
          !scaleChangeTabSprite) )
    {
      sub_1B64324(supportServantListViewManager);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantListViewManager, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu__OnSelectItem(
        RecommendSupportServantSelectListMenu_o *this,
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  RecommendSupportServantSelectListViewItem_o *Item; // x1
  RecommendSupportServantSelectListViewItem_o **v43; // x19
  int32_t tabModeKind; // w8
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  int32_t v47; // w1
  _QWORD *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  RecommendSupportServantSelectListViewManager_o *v51; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v52; // x20
  RecommendSupportServantSelectListViewItem_o *v53; // x0
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  const MethodInfo *v56; // x2
  const MethodInfo_35CF248 *v57; // x3
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v60; // q0
  __int128 v61; // q1
  int64_t v62; // x24
  const MethodInfo_35CE514 *v63; // x3
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  const MethodInfo *v66; // x1
  RecommendSupportData_o *clipRange; // x19
  const MethodInfo_36EC03C *v68; // x0
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  RecommendSupportServantSelectListViewItem_o *v71; // x8
  _QWORD *v72; // x0
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  const MethodInfo *v75; // x1
  UserGameEntity_o *SelfUserGame; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v77; // x8
  RecommendSupportData_o *v78; // x20
  const MethodInfo *v79; // x2
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v81; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v84; // x25
  Il2CppObject *Master_object; // x21
  int32_t v86; // w22
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v88; // w27
  struct UserServantEntity_o *v89; // x8
  int32_t v90; // w22
  __int64 v91; // x23
  __int64 v92; // x24
  int32_t v93; // w0
  int32_t v94; // w24
  System_String_o *v95; // x21
  System_String_o *v96; // x22
  __int64 v97; // x23
  int32_t Rarity; // w26
  __int64 v99; // x1
  int32_t v100; // w2
  int32_t v101; // w3
  RecommendSupportServantSelectListViewManager_o *v102; // x26
  int32_t v103; // w2
  int32_t v104; // w3
  RecommendSupportServantSelectListViewManager_o *v105; // x26
  int32_t v106; // w2
  int32_t v107; // w3
  RecommendSupportServantSelectListViewManager_o *v108; // x25
  int32_t v109; // w0
  int32_t v110; // w2
  int32_t v111; // w3
  RecommendSupportServantSelectListViewManager_o *v112; // x25
  int32_t v113; // w2
  int32_t v114; // w3
  RecommendSupportServantSelectListViewManager_o *v115; // x25
  int32_t v116; // w2
  int32_t v117; // w3
  RecommendSupportServantSelectListViewManager_o *v118; // x19
  System_String_o *v119; // x19
  System_String_o *v120; // x22
  System_String_o *v121; // x23
  Il2CppObject *Instance; // x24
  __int64 v123; // x1
  __int64 v124; // x2
  CommonConfirmDialog_ClickDelegate_o *v125; // x25
  __int64 v126; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+10h] [xbp-150h] BYREF
  __int128 v128; // [xsp+30h] [xbp-130h]
  __int128 v129; // [xsp+40h] [xbp-120h]
  _BYTE v130[40]; // [xsp+50h] [xbp-110h] BYREF
  __int128 v131[2]; // [xsp+80h] [xbp-E0h] BYREF
  __int128 v132; // [xsp+A0h] [xbp-C0h]
  _OWORD v133[2]; // [xsp+B0h] [xbp-B0h] BYREF
  char v134[39]; // [xsp+D0h] [xbp-90h] BYREF
  __int64 v135; // [xsp+F8h] [xbp-68h]
  System_Nullable_T__o v136; // 0:x0.16
  System_Nullable_long__o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16

  v135 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_49F8798 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&Method_System_Nullable_long__GetValueOrDefault__, v16);
    sub_1B640C8(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__, v17);
    sub_1B640C8(&Method_System_Nullable_long___ctor__, v18);
    sub_1B640C8(&Method_System_Nullable_ObscuredLong___ctor__, v19);
    sub_1B640C8(&Method_System_Nullable_ObscuredLong__get_HasValue__, v20);
    sub_1B640C8(&Method_System_Nullable_long__get_HasValue__, v21);
    sub_1B640C8(&object___TypeInfo, v22);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1B640C8(&Rarity_TypeInfo, v25);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v26);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v28);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__, v30);
    sub_1B640C8(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo, v31);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v32);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v33);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v34);
    sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v35);
    byte_49F8798 = 1;
  }
  memset(v134, 0, sizeof(v134));
  v132 = 0u;
  memset(v133, 0, 23);
  v36 = sub_1B64314(
          RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo,
          *(_QWORD *)&kind,
          *(_QWORD *)&offset);
  RecommendSupportServantSelectListMenu___c__DisplayClass24_0___ctor(
    (RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *)v36,
    0LL);
  if ( !v36 )
    goto LABEL_127;
  *(_QWORD *)(v36 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 16), (int32_t)this, v38, v39);
  if ( this->fields.state != 2 )
    return;
  if ( (offset & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_127;
    Item = RecommendSupportServantSelectListViewManager__GetItem(supportServantListViewManager, offset, 0LL);
  }
  *(_QWORD *)(v36 + 24) = Item;
  v43 = (RecommendSupportServantSelectListViewItem_o **)(v36 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 24), (int32_t)Item, v40, v41);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v43 )
      RecommendSupportServantSelectListViewItem__SwapChoice(*v43, 0LL);
    v48 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v48 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v46 = (System_Reflection_MethodBase_o *)sub_1B640AC(v48, v48[4]);
    v47 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v43 )
      RecommendSupportServantSelectListViewItem__SwapLock(*v43, 0LL);
    v45 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v46 = (System_Reflection_MethodBase_o *)sub_1B640AC(v45, v45[4]);
    v47 = 11;
LABEL_22:
    OverwriteAssetSoundName__PlaySystemSe(v46, v47, 0LL);
    goto LABEL_23;
  }
  v53 = *v43;
  if ( tabModeKind != 3 )
  {
    if ( v53 )
    {
      if ( v53->fields._IsBase_k__BackingField )
      {
        v64 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v64 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v65 = (System_Reflection_MethodBase_o *)sub_1B640AC(v64, v64[4]);
        OverwriteAssetSoundName__PlaySystemSe(v65, 0, 0LL);
        RecommendSupportServantSelectListMenu__Init(this, v66);
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_127;
        clipRange = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !clipRange )
          goto LABEL_127;
        RecommendSupportData__RemoveServantData(
          clipRange,
          (int32_t)supportServantListViewManager->fields.dragParentObject,
          0LL);
        v68 = (const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_75;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v53, 0LL) )
        goto LABEL_61;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v43;
      if ( !*v43 )
        goto LABEL_127;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewItem__get_IsUseServant(
                                                                                          (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
                                                                                          0LL);
      if ( ((unsigned __int8)supportServantListViewManager & 1) != 0 )
        goto LABEL_61;
      v71 = *v43;
      if ( !*v43 )
        goto LABEL_127;
      if ( v71->fields._IsEventJoin_k__BackingField || v71->fields._IsUseInSet_k__BackingField )
      {
LABEL_61:
        v72 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v72 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v46 = (System_Reflection_MethodBase_o *)sub_1B640AC(v72, v72[4]);
        v47 = 2;
        goto LABEL_22;
      }
    }
    v73 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v73 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v74 = (System_Reflection_MethodBase_o *)sub_1B640AC(v73, v73[4]);
    OverwriteAssetSoundName__PlaySystemSe(v74, 0, 0LL);
    RecommendSupportServantSelectListMenu__Init(this, v75);
    if ( !*v43 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_127;
    if ( !SelfUserGame )
      goto LABEL_127;
    v77 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)supportServantListViewManager->fields.clipRange;
    if ( !v77 )
      goto LABEL_127;
    v77->m_Items[1].fields.currentCryptoKey = SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_127;
    v78 = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v43 || !v78 )
      goto LABEL_127;
    RecommendSupportData__SetServantData(
      v78,
      (int32_t)supportServantListViewManager->fields.dragParentObject,
      (*v43)->fields._UserServant_k__BackingField,
      0LL);
    v68 = (const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_75:
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance(v68);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v79);
      return;
    }
    goto LABEL_127;
  }
  if ( v53 && !v53->fields._IsEnabled_k__BackingField )
  {
    v69 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v69 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v70 = (System_Reflection_MethodBase_o *)sub_1B640AC(v69, v69[4]);
    OverwriteAssetSoundName__PlaySystemSe(v70, 2, 0LL);
    this->fields.state = 2;
LABEL_23:
    v51 = this->fields.supportServantListViewManager;
    v52 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                           RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                                           v49,
                                                                           v50);
    RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
      v52,
      (Il2CppObject *)this,
      (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
      0LL);
    if ( v51 )
    {
      RecommendSupportServantSelectListViewManager__SetMode(v51, 2, v52, 0LL);
      return;
    }
LABEL_127:
    sub_1B64324(supportServantListViewManager);
  }
  v54 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v54 = (_QWORD *)sub_1B640E0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v55 = (System_Reflection_MethodBase_o *)sub_1B640AC(v54, v54[4]);
  OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0LL);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  dragParentObject = (int64_t)supportServantListViewManager->fields.dragParentObject;
  if ( !dragParentObject )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v43, v56);
    return;
  }
  if ( *v43 )
  {
    UserServant_k__BackingField = (*v43)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_127;
    v60 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v61 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v136.fields.hasValue = v130;
    v136.fields.value = (Il2CppObject *)v131;
    memset(v130, 0, sizeof(v130));
    v128 = v60;
    v129 = v61;
    v131[0] = v60;
    v131[1] = v61;
    System_Nullable_ObscuredLong____ctor(
      v136,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v57);
    *(_QWORD *)((char *)v133 + 15) = *(_QWORD *)&v130[32];
    v132 = *(_OWORD *)&v130[1];
    v133[0] = *(_OWORD *)&v130[17];
    if ( v130[0] )
      v62 = dragParentObject;
    else
      v62 = 0LL;
    *(_OWORD *)v134 = *(_OWORD *)&v130[1];
    *(_OWORD *)&v134[16] = *(_OWORD *)&v130[17];
    *(_QWORD *)&v134[31] = *(_QWORD *)((char *)v133 + 15);
    if ( v130[0] )
    {
      *(_OWORD *)v130 = *(_OWORD *)&v134[7];
      *(_OWORD *)&v130[16] = *(_OWORD *)&v134[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v127 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v130;
      v137.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v127, 0LL);
      *(_QWORD *)&v137.fields.hasValue = v131;
      v131[0] = 0uLL;
      System_Nullable_long____ctor(v137, Method_System_Nullable_long___ctor__, v63);
      if ( LOBYTE(v131[0]) )
      {
        if ( v62 == *((_QWORD *)&v131[0] + 1) )
          goto LABEL_43;
      }
    }
  }
  else
  {
    v132 = 0u;
    memset(v133, 0, 23);
    memset(v134, 0, sizeof(v134));
  }
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
             dragParentObject,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_127;
  v81 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v138.fields.currentCryptoKey = klass;
  *(_QWORD *)&v138.fields.fakeValue = monitor;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                                      v138,
                                                                                      0LL);
  if ( !v81 )
    goto LABEL_127;
  v84 = DataMasterBase_object__object__int___GetEntity(
          v81,
          (int32_t)supportServantListViewManager,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0LL);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                                                      0LL);
  if ( !Master_object )
    goto LABEL_127;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 v86,
                                 (int32_t)supportServantListViewManager,
                                 0LL);
  if ( *v43 )
  {
    v88 = ServantLimitCountSealAfter;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewItem__get_SvtId(
                                                                                        *v43,
                                                                                        0LL);
    if ( !*v43 )
      goto LABEL_127;
    v89 = (*v43)->fields._UserServant_k__BackingField;
    if ( !v89 )
      goto LABEL_127;
    v90 = (int)supportServantListViewManager;
    v92 = *(_QWORD *)&v89->fields.limitCount.fields.currentCryptoKey;
    v91 = *(_QWORD *)&v89->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v139.fields.currentCryptoKey = v92;
    *(_QWORD *)&v139.fields.fakeValue = v91;
    v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v139, 0LL);
    v94 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
            (ServantLimitImageMaster_o *)Master_object,
            v90,
            v93,
            0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v95 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v96 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v97 = sub_1B64170(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v97 )
      goto LABEL_127;
    v102 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B64204(
                                                                                              supportServantListViewManager,
                                                                                              *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v97 + 24) )
        goto LABEL_128;
      *(_QWORD *)(v97 + 32) = v102;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v97 + 32), (int32_t)v102, v100, v101);
      if ( !v84 )
        goto LABEL_127;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                          (ServantEntity_o *)v84,
                                                                                          0LL);
      v105 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B64204(
                                                                                                supportServantListViewManager,
                                                                                                *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v97 + 24) <= 1u )
          goto LABEL_128;
        *(_QWORD *)(v97 + 40) = v105;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v97 + 40), (int32_t)v105, v103, v104);
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getName(
                                                                                            (ServantEntity_o *)v84,
                                                                                            v88,
                                                                                            -1,
                                                                                            0LL);
        v108 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B64204(
                                                                                                  supportServantListViewManager,
                                                                                                  *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v97 + 24) <= 2u )
            goto LABEL_128;
          *(_QWORD *)(v97 + 48) = v108;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v97 + 48), (int32_t)v108, v106, v107);
          if ( !*v43 )
            goto LABEL_127;
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v43)->fields._UserServant_k__BackingField;
          if ( !supportServantListViewManager )
            goto LABEL_127;
          v109 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(
                                                                                              v109,
                                                                                              0LL);
          v112 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B64204(
                                                                                                    supportServantListViewManager,
                                                                                                    *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v97 + 24) <= 3u )
              goto LABEL_128;
            *(_QWORD *)(v97 + 56) = v112;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v97 + 56), (int32_t)v112, v110, v111);
            if ( !*v43 )
              goto LABEL_127;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v43)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_127;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                                (ServantEntity_o *)supportServantListViewManager,
                                                                                                0LL);
            v115 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B64204(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v97 + 24) <= 4u )
                goto LABEL_128;
              *(_QWORD *)(v97 + 64) = v115;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v97 + 64), (int32_t)v115, v113, v114);
              if ( !*v43 )
                goto LABEL_127;
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v43)->fields._Servant_k__BackingField;
              if ( !supportServantListViewManager )
                goto LABEL_127;
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getName(
                                                                                                  (ServantEntity_o *)supportServantListViewManager,
                                                                                                  v94,
                                                                                                  -1,
                                                                                                  0LL);
              v118 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B64204(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v97 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v97 + 24) > 5u )
                {
                  *(_QWORD *)(v97 + 72) = v118;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v97 + 72), (int32_t)v118, v116, v117);
                  v119 = System_String__Format_61389904(v96, (System_Object_array *)v97, 0LL);
                  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v121 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v125 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v123,
                                                                  v124);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v125,
                    (Il2CppObject *)v36,
                    Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__,
                    0LL);
                  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30344968(
                      (CommonUI_o *)Instance,
                      v95,
                      v119,
                      v120,
                      v121,
                      v125,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_127;
                }
LABEL_128:
                sub_1B6432C(supportServantListViewManager, v99);
              }
            }
          }
        }
      }
    }
    v126 = sub_1B64348();
    sub_1B641F0(v126, 0LL);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__Open(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x20
  int v10; // w20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportData_o *v12; // x21
  int32_t v13; // w22
  RecommendSupportServantSelectListViewManager_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v17; // x21
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x20

  if ( (byte_49F8797 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_12515/*"SelectIndex"*/, v7);
    byte_49F8797 = 1;
  }
  RecommendSupportServantSelectListMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_20;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v9 )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)gameObject & 1, 0LL);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v10 = *((_DWORD *)gameObject + 30);
  if ( v10 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12515/*"SelectIndex"*/, -1, 0LL) )
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
  TitleInfoControl__setBackBtnSprite_36875508((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v12 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v13 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  if ( !supportServantListViewManager )
    goto LABEL_20;
  RecommendSupportServantSelectListViewManager__CreateList(
    supportServantListViewManager,
    v12,
    v13,
    *((EventUpValSetupInfo_o **)gameObject + 13),
    0LL);
  v14 = this->fields.supportServantListViewManager;
  v17 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                         RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                                         v15,
                                                                         v16);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0LL);
  if ( !v14
    || (RecommendSupportServantSelectListViewManager__SetMode(v14, 1, v17, 0LL),
        (gameObject = this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                       (RecommendSupportServantSelectListViewManager_o *)gameObject,
                       0LL),
        !scaleChangeTabSprite) )
  {
LABEL_20:
    sub_1B64324(gameObject);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v21, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu__PushRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListViewItem_o *selectItem,
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
  DataManager_o *v14; // x23
  struct UserServantEntity_o *UserServant_k__BackingField; // x19
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v24; // x0
  __int128 v25; // q1
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  Il2CppObject *Request_object; // x0
  __int128 v30; // q1
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w26
  int32_t v33; // w27
  int32_t v34; // w28
  int32_t v35; // w29
  bool IsLock; // w21
  char v37; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_49F87A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__, v9);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49F87A2 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v14 = limitCountSupport;
  UserServant_k__BackingField = selectItem->fields._UserServant_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v14 || !UserServant_k__BackingField )
    goto LABEL_18;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
  if ( !v16 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  context = v14->fields.context;
  p_fields = &UserServant_k__BackingField->fields;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  v25 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v14->fields.masterLoadThreads;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v28,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      UserServant_k__BackingField->fields.imageLimitCount,
                      0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          UserServant_k__BackingField->fields.dispLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          UserServant_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          UserServant_k__BackingField->fields.iconLimitCount,
          0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          UserServant_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServant_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v37 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  UserServant_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       UserServant_k__BackingField->fields.randomLimitCount,
                       0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          UserServant_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v42 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v41;
  *(_QWORD *)&v55.fields.currentCryptoKey = v42;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !v31 )
LABEL_18:
    sub_1B64324(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    imageLimitCount,
    v32,
    v33,
    v34,
    v35,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v46,
    IsLock,
    v37 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != (struct System_Threading_SynchronizationContext_o *)v48,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu__SetModeTabKind(
        RecommendSupportServantSelectListMenu_o *this,
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
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v37; // x21

  if ( (byte_49F879D & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1B640C8(&StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v7);
    sub_1B640C8(&StringLiteral_17591/*"button_push_reg"*/, v8);
    sub_1B640C8(&StringLiteral_17592/*"button_push_unreg"*/, v9);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v10);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v11);
    sub_1B640C8(&StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v12);
    sub_1B640C8(&StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v13);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v14);
    sub_1B640C8(&StringLiteral_12411/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v15);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v16);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v17);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v18);
    byte_49F879D = 1;
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
    v22 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17594/*"button_select_unreg"*/ : &StringLiteral_17593/*"button_select_reg"*/);
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
    v25 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17579/*"button_alllock_reg"*/ : &StringLiteral_17580/*"button_alllock_unreg"*/);
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
    v28 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17577/*"button_allchoice_reg"*/ : &StringLiteral_17578/*"button_allchoice_unreg"*/);
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
      v31 = &StringLiteral_17591/*"button_push_reg"*/;
    else
      v31 = &StringLiteral_17592/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v31, 0LL);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_12411/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_41:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v33, 0LL);
        if ( !explanationLabel )
          goto LABEL_48;
        UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0LL);
LABEL_43:
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.supportServantListViewManager;
        if ( !normalTabButton )
          goto LABEL_48;
        LOBYTE(normalTabButton[19].fields.m_CachedPtr) = this->fields.tabModeKind != 0;
        if ( this->fields.state == 2 )
        {
          RecommendSupportServantSelectListViewManager__UpdateItemState(
            (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
            modeKind == 3,
            0LL);
          supportServantListViewManager = this->fields.supportServantListViewManager;
          v37 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                                 RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                                                 v35,
                                                                                 v36);
          RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
            v37,
            (Il2CppObject *)this,
            (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
            0LL);
          if ( supportServantListViewManager )
          {
            RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v37, 0LL);
            return;
          }
LABEL_48:
          sub_1B64324(normalTabButton);
        }
        RecommendSupportServantSelectListViewManager__SetMode_32290352(
          (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
          1,
          0LL);
        break;
      default:
        goto LABEL_43;
    }
  }
}


void __fastcall RecommendSupportServantSelectListMenu__StatusRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  System_Int64_array *v24; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49F87A0 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_49F87A0 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v24 = 0LL;
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
           &v24,
           0LL) )
    {
      this->fields.requestCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v19, v20);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v23,
                                                                                          (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v16 = v24;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B64324(supportServantListViewManager);
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
           0LL) )
    {
      this->fields.requestCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v14,
                                                                                          (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v16 = unlockList;
        v15 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v15,
          v16,
          0,
          v17,
          v18,
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
  __int64 v2; // x2
  __int64 v4; // x1
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49F87A5 & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    byte_49F87A5 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v6 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                        RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                                        method,
                                                                        v2);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager )
    sub_1B64324(v7);
  RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v6, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A7488;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7440;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_49F87A8 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49F87A8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__0(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  CommonUI_o *v12; // x20
  System_Action_o *_9__1; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  struct RecommendSupportServantSelectListMenu_o *_4__this; // x20
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x2

  if ( (byte_49F87A9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__, v8);
    byte_49F87A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v14, v15);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_30345628(v12, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(Instance);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v20 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                         RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                                         v16,
                                                                         v17);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v21);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  supportServantListViewManager->fields.callbackFunc = v20;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&supportServantListViewManager->fields.callbackFunc,
    (int32_t)v20,
    v22,
    v23);
  RecommendSupportServantSelectListViewManager__SetMode_32290352(supportServantListViewManager, 2, v24);
}


void __fastcall RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  RecommendSupportServantSelectListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}