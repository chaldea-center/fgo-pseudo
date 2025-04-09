void __fastcall RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B6FDE & 1) == 0 )
  {
    sub_1B4CF90(&BaseMenu_TypeInfo, method);
    byte_49B6FDE = 1;
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
    sub_1B4D1EC(0LL, method);
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

  if ( (byte_49B6FD9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, isRequest);
    byte_49B6FD9 = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B4D1EC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32915760(supportServantListViewManager, 3, 0LL);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_49B6FDD & 1) == 0 )
  {
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    byte_49B6FDD = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, 0LL),
        v6 = this->fields.supportServantListViewManager,
        v7 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          0LL),
        !v6) )
  {
    sub_1B4D1EC(supportServantListViewManager, result);
  }
  RecommendSupportServantSelectListViewManager__SetMode(v6, 2, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1B4D1EC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32915760(supportServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B4D1EC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32915760(supportServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B4D1EC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32915760(supportServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B4D1EC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32915760(supportServantListViewManager, 3, 0LL);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 3, method);
}


void __fastcall RecommendSupportServantSelectListMenu__EndStatusSync(
        RecommendSupportServantSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_requestCallback; // x0
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v5; // x19
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (CGThumbnailListItem_o *)&this->fields.requestCallback;
  v5 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0LL;
    sub_1B4CF34(p_requestCallback, 0, (int32_t)method, v3);
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

  if ( (byte_49B6FD0 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_12277/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v3);
    byte_49B6FD0 = 1;
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
                                                                                      (System_String_o *)StringLiteral_12277/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                                      0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1B4D1EC(supportServantListViewManager, method);
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
    sub_1B4D1EC(0LL, method);
  RecommendSupportServantSelectListViewManager__SetMode_32915760(supportServantListViewManager, 3, 0LL);
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
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49B6FD8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__, method);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__, v3);
    sub_1B4CF90(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5);
    sub_1B4CF90(&StringLiteral_12382/*"SelectIndex"*/, v6);
    byte_49B6FD8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12382/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0LL),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B4D1EC(Instance, v10);
    }
    ListViewManager__SetScrollBarValue(Instance, 0LL);
    v11 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndCancelButton__,
      v12);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v11, v13);
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
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_49B6FD5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__, method);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__, v3);
    sub_1B4CF90(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49B6FD5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          v10);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
        v13);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v12, v14);
    }
    RecommendSupportServantSelectListMenu__SetModeTabKind(this, 2, v7);
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
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_49B6FD4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__, method);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__, v3);
    sub_1B4CF90(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49B6FD4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          v10);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
        v13);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v12, v14);
    }
    RecommendSupportServantSelectListMenu__SetModeTabKind(this, 1, v7);
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
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49B6FD3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__, method);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__, v3);
    sub_1B4CF90(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49B6FD3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__,
      v8);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
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
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49B6FD6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__, method);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__, v3);
    sub_1B4CF90(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49B6FD6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabPush__,
      v8);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickScaleChange(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_49B6FDB & 1) == 0 )
  {
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__, method);
    byte_49B6FDB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
      sub_1B4D1EC(supportServantListViewManager, v5);
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
  __int64 v36; // x19
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  RecommendSupportServantSelectListViewItem_o *Item; // x1
  RecommendSupportServantSelectListViewItem_o **v44; // x20
  const MethodInfo *v45; // x1
  int32_t tabModeKind; // w8
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  int32_t v49; // w1
  _QWORD *v50; // x0
  RecommendSupportServantSelectListViewManager_o *v51; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v52; // x20
  RecommendSupportServantSelectListViewItem_o *v53; // x0
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  const MethodInfo *v56; // x2
  const MethodInfo_369B0EC *v57; // x3
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v60; // q0
  __int128 v61; // q1
  int64_t v62; // x24
  const MethodInfo_369A3B8 *v63; // x3
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  const MethodInfo *v66; // x1
  RecommendSupportData_o *clipRange; // x19
  const MethodInfo_37B4410 *v68; // x0
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  _QWORD *v71; // x0
  _QWORD *v72; // x0
  System_Reflection_MethodBase_o *v73; // x0
  const MethodInfo *v74; // x1
  UserGameEntity_o *SelfUserGame; // x19
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v76; // x8
  RecommendSupportData_o *v77; // x19
  const MethodInfo *v78; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v80; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v83; // x26
  Il2CppObject *Master_object; // x0
  ServantLimitImageMaster_o *v85; // x23
  System_String_o *v86; // x21
  System_String_o *v87; // x22
  __int64 v88; // x24
  int32_t Rarity; // w27
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  RecommendSupportServantSelectListViewManager_o *v92; // x27
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  RecommendSupportServantSelectListViewManager_o *v95; // x26
  void *v96; // x26
  Il2CppClass *v97; // x27
  int32_t v98; // w0
  Il2CppClass *v99; // x8
  int32_t v100; // w25
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  RecommendSupportServantSelectListViewManager_o *v103; // x25
  int32_t v104; // w0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  RecommendSupportServantSelectListViewManager_o *v107; // x25
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  RecommendSupportServantSelectListViewManager_o *v110; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v111; // x8
  int32_t v112; // w20
  int32_t v113; // w0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  RecommendSupportServantSelectListViewManager_o *v116; // x20
  System_String_o *v117; // x20
  System_String_o *v118; // x22
  System_String_o *v119; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v121; // x25
  __int64 v122; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+50h] [xbp-150h] BYREF
  __int128 v124; // [xsp+70h] [xbp-130h]
  __int128 v125; // [xsp+80h] [xbp-120h]
  _BYTE v126[40]; // [xsp+90h] [xbp-110h] BYREF
  __int128 v127[2]; // [xsp+C0h] [xbp-E0h] BYREF
  __int128 v128; // [xsp+E0h] [xbp-C0h]
  _OWORD v129[2]; // [xsp+F0h] [xbp-B0h] BYREF
  char v130[39]; // [xsp+110h] [xbp-90h] BYREF
  __int64 v131; // [xsp+138h] [xbp-68h]
  System_Nullable_T__o v132; // 0:x0.16
  System_Nullable_long__o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16

  v131 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_49B6FD2 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B4CF90(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1B4CF90(&DataManager_TypeInfo, v12);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v15);
    sub_1B4CF90(&Method_System_Nullable_long__GetValueOrDefault__, v16);
    sub_1B4CF90(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__, v17);
    sub_1B4CF90(&Method_System_Nullable_long___ctor__, v18);
    sub_1B4CF90(&Method_System_Nullable_ObscuredLong___ctor__, v19);
    sub_1B4CF90(&Method_System_Nullable_ObscuredLong__get_HasValue__, v20);
    sub_1B4CF90(&Method_System_Nullable_long__get_HasValue__, v21);
    sub_1B4CF90(&object___TypeInfo, v22);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1B4CF90(&Rarity_TypeInfo, v25);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v26);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v28);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__, v30);
    sub_1B4CF90(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo, v31);
    sub_1B4CF90(&StringLiteral_11679/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v32);
    sub_1B4CF90(&StringLiteral_11677/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v33);
    sub_1B4CF90(&StringLiteral_11678/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v34);
    sub_1B4CF90(&StringLiteral_11680/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v35);
    byte_49B6FD2 = 1;
  }
  memset(v130, 0, sizeof(v130));
  v128 = 0u;
  memset(v129, 0, 23);
  v36 = sub_1B4D1DC(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_127;
  *(_QWORD *)(v36 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 16), (int32_t)this, v39, v40);
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
  v44 = (RecommendSupportServantSelectListViewItem_o **)(v36 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 24), (int32_t)Item, v41, v42);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v44 )
      (*v44)->fields._IsSwapChoice_k__BackingField ^= 1u;
    v50 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v50 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v48 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v50, v50[4]);
    v49 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v44 )
      (*v44)->fields._IsSwapLock_k__BackingField ^= 1u;
    v47 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v47 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v48 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v47, v47[4]);
    v49 = 11;
LABEL_22:
    OverwriteAssetSoundName__PlaySystemSe(v48, v49, 0, 0LL);
    goto LABEL_23;
  }
  v53 = *v44;
  if ( tabModeKind != 3 )
  {
    if ( v53 )
    {
      if ( v53->fields._IsBase_k__BackingField )
      {
        v64 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v64 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v65 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v64, v64[4]);
        OverwriteAssetSoundName__PlaySystemSe(v65, 0, 0, 0LL);
        RecommendSupportServantSelectListMenu__Init(this, v66);
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_127;
        clipRange = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !clipRange )
          goto LABEL_127;
        RecommendSupportData__RemoveServantData(
          clipRange,
          (int32_t)supportServantListViewManager->fields.dragParentObject,
          0LL);
        v68 = (const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_76;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v53, v45) )
        goto LABEL_62;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v44;
      if ( !*v44 )
        goto LABEL_127;
      if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v38) )
      {
        goto LABEL_62;
      }
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v44;
      if ( !*v44 )
        goto LABEL_127;
      if ( BYTE2(supportServantListViewManager->fields.clipOffset.fields.y)
        || *(&supportServantListViewManager->fields.execObjectExtraFlag + 2)
        || RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v38) )
      {
LABEL_62:
        v71 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v71 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v48 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v71, v71[4]);
        v49 = 2;
        goto LABEL_22;
      }
    }
    v72 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v72 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v73 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v72, v72[4]);
    OverwriteAssetSoundName__PlaySystemSe(v73, 0, 0, 0LL);
    RecommendSupportServantSelectListMenu__Init(this, v74);
    if ( !*v44 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_127;
    if ( !SelfUserGame )
      goto LABEL_127;
    v76 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)supportServantListViewManager->fields.clipRange;
    if ( !v76 )
      goto LABEL_127;
    v76->m_Items[1].fields.currentCryptoKey = SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_127;
    v77 = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v44 || !v77 )
      goto LABEL_127;
    RecommendSupportData__SetServantData(
      v77,
      (int32_t)supportServantListViewManager->fields.dragParentObject,
      (*v44)->fields._UserServant_k__BackingField,
      0LL);
    v68 = (const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_76:
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance(v68);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v78);
      return;
    }
    goto LABEL_127;
  }
  if ( v53 && !v53->fields._IsEnabled_k__BackingField )
  {
    v69 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v69 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v70 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v69, v69[4]);
    OverwriteAssetSoundName__PlaySystemSe(v70, 2, 0, 0LL);
    this->fields.state = 2;
LABEL_23:
    v51 = this->fields.supportServantListViewManager;
    v52 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
    sub_1B4D1EC(supportServantListViewManager, v38);
  }
  v54 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v54 = (_QWORD *)sub_1B4CFA8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v55 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v54, v54[4]);
  OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0, 0LL);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  dragParentObject = (int64_t)supportServantListViewManager->fields.dragParentObject;
  if ( !dragParentObject )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v44, v56);
    return;
  }
  if ( *v44 )
  {
    UserServant_k__BackingField = (*v44)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_127;
    v60 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v61 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v132.fields.hasValue = v126;
    v132.fields.value = (Il2CppObject *)v127;
    memset(v126, 0, sizeof(v126));
    v124 = v60;
    v125 = v61;
    v127[0] = v60;
    v127[1] = v61;
    System_Nullable_ObscuredLong____ctor(
      v132,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v57);
    *(_QWORD *)((char *)v129 + 15) = *(_QWORD *)&v126[32];
    v128 = *(_OWORD *)&v126[1];
    v129[0] = *(_OWORD *)&v126[17];
    if ( v126[0] )
      v62 = dragParentObject;
    else
      v62 = 0LL;
    *(_OWORD *)v130 = *(_OWORD *)&v126[1];
    *(_OWORD *)&v130[16] = *(_OWORD *)&v126[17];
    *(_QWORD *)&v130[31] = *(_QWORD *)((char *)v129 + 15);
    if ( v126[0] )
    {
      *(_OWORD *)v126 = *(_OWORD *)&v130[7];
      *(_OWORD *)&v126[16] = *(_OWORD *)&v130[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v123 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v126;
      v133.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v123, 0LL);
      *(_QWORD *)&v133.fields.hasValue = v127;
      v127[0] = 0uLL;
      System_Nullable_long____ctor(v133, Method_System_Nullable_long___ctor__, v63);
      if ( LOBYTE(v127[0]) )
      {
        if ( v62 == *((_QWORD *)&v127[0] + 1) )
          goto LABEL_43;
      }
    }
  }
  else
  {
    v128 = 0u;
    memset(v129, 0, 23);
    memset(v130, 0, sizeof(v130));
  }
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
             dragParentObject,
             (const MethodInfo_319FEF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_127;
  v80 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v134.fields.currentCryptoKey = klass;
  *(_QWORD *)&v134.fields.fakeValue = monitor;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                                                      v134,
                                                                                      0LL);
  if ( !v80 )
    goto LABEL_127;
  v83 = DataMasterBase_object__object__int___GetEntity(
          v80,
          (int32_t)supportServantListViewManager,
          (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( *v44 )
  {
    v85 = (ServantLimitImageMaster_o *)Master_object;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11680/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v87 = LocalizationManager__Get((System_String_o *)StringLiteral_11679/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v88 = sub_1B4D038(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v88 )
      goto LABEL_127;
    v92 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B4D0CC(
                                                                                              supportServantListViewManager,
                                                                                              *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v88 + 24) )
        goto LABEL_128;
      *(_QWORD *)(v88 + 32) = v92;
      sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 32), (int32_t)v92, v90, v91);
      if ( !v83 )
        goto LABEL_127;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                          (ServantEntity_o *)v83,
                                                                                          0LL);
      v95 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B4D0CC(
                                                                                                supportServantListViewManager,
                                                                                                *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v88 + 24) <= 1u )
          goto LABEL_128;
        *(_QWORD *)(v88 + 40) = v95;
        sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 40), (int32_t)v95, v93, v94);
        v97 = Entity[5].klass;
        v96 = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v135.fields.currentCryptoKey = v97;
        *(_QWORD *)&v135.fields.fakeValue = v96;
        v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v135, 0LL);
        v99 = Entity[6].klass;
        *(_QWORD *)&v136.fields.fakeValue = Entity[6].monitor;
        v100 = v98;
        *(_QWORD *)&v136.fields.currentCryptoKey = v99;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                                                            v136,
                                                                                            0LL);
        if ( !v85 )
          goto LABEL_127;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                            v85,
                                                                                            v100,
                                                                                            (int32_t)supportServantListViewManager,
                                                                                            1,
                                                                                            0LL);
        v103 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B4D0CC(
                                                                                                  supportServantListViewManager,
                                                                                                  *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v88 + 24) <= 2u )
            goto LABEL_128;
          *(_QWORD *)(v88 + 48) = v103;
          sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 48), (int32_t)v103, v101, v102);
          if ( !*v44 )
            goto LABEL_127;
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v44)->fields._UserServant_k__BackingField;
          if ( !supportServantListViewManager )
            goto LABEL_127;
          v104 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(
                                                                                              v104,
                                                                                              0LL);
          v107 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B4D0CC(
                                                                                                    supportServantListViewManager,
                                                                                                    *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v88 + 24) <= 3u )
              goto LABEL_128;
            *(_QWORD *)(v88 + 56) = v107;
            sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 56), (int32_t)v107, v105, v106);
            if ( !*v44 )
              goto LABEL_127;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v44)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_127;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                                (ServantEntity_o *)supportServantListViewManager,
                                                                                                0LL);
            v110 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B4D0CC(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v88 + 24) <= 4u )
                goto LABEL_128;
              *(_QWORD *)(v88 + 64) = v110;
              sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 64), (int32_t)v110, v108, v109);
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v44;
              if ( !*v44 )
                goto LABEL_127;
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewItem__get_SvtId(
                                                                                                  (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
                                                                                                  v38);
              if ( !*v44 )
                goto LABEL_127;
              v111 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v44)->fields._UserServant_k__BackingField;
              if ( !v111 )
                goto LABEL_127;
              v112 = (int)supportServantListViewManager;
              v113 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v111[6], 0LL);
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                                  v85,
                                                                                                  v112,
                                                                                                  v113,
                                                                                                  1,
                                                                                                  0LL);
              v116 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B4D0CC(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v88 + 24) > 5u )
                {
                  *(_QWORD *)(v88 + 72) = v116;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 72), (int32_t)v116, v114, v115);
                  v117 = System_String__Format_61134896(v87, (System_Object_array *)v88, 0LL);
                  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_11678/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v119 = LocalizationManager__Get((System_String_o *)StringLiteral_11677/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v121 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v121,
                    (Il2CppObject *)v36,
                    Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__,
                    0LL);
                  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)BalanceConfig_TypeInfo;
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30248496(
                      (CommonUI_o *)Instance,
                      v86,
                      v117,
                      v118,
                      v119,
                      v121,
                      supportServantListViewManager->fields.sort[2].fields.bonusKind2,
                      *(&supportServantListViewManager->fields.sort[2].fields.filter2Kind + 1),
                      15.0,
                      700,
                      0,
                      480,
                      -162.5,
                      0,
                      0,
                      240,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_127;
                }
LABEL_128:
                sub_1B4D1F4(supportServantListViewManager, v38);
              }
            }
          }
        }
      }
    }
    v122 = sub_1B4D210();
    sub_1B4D0B8(v122, 0LL);
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
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  int v11; // w20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportData_o *v13; // x21
  int32_t v14; // w22
  RecommendSupportServantSelectListViewManager_o *v15; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v16; // x21
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v18; // x20

  if ( (byte_49B6FD1 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    sub_1B4CF90(&StringLiteral_12382/*"SelectIndex"*/, v7);
    byte_49B6FD1 = 1;
  }
  RecommendSupportServantSelectListMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_20;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v10 )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(v10, (unsigned __int8)gameObject & 1, 0LL);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v11 = *((_DWORD *)gameObject + 30);
  if ( v11 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12382/*"SelectIndex"*/, -1, 0LL) )
  {
    gameObject = this->fields.supportServantListViewManager;
    if ( !gameObject )
      goto LABEL_20;
    ListViewManager__ClearScrollBarValue((ListViewManager_o *)gameObject, 1, 0LL);
  }
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 71, 0LL);
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setBackBtnSprite_37675944((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v13 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v14 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  if ( !supportServantListViewManager )
    goto LABEL_20;
  RecommendSupportServantSelectListViewManager__CreateList(
    supportServantListViewManager,
    v13,
    v14,
    *((EventUpValSetupInfo_o **)gameObject + 13),
    0LL);
  v15 = this->fields.supportServantListViewManager;
  v16 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0LL);
  if ( !v15
    || (RecommendSupportServantSelectListViewManager__SetMode(v15, 1, v16, 0LL),
        (gameObject = this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                       (RecommendSupportServantSelectListViewManager_o *)gameObject,
                       0LL),
        !scaleChangeTabSprite) )
  {
LABEL_20:
    sub_1B4D1EC(gameObject, v9);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v18 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v18, 0LL);
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
  __int64 v14; // x1
  DataManager_o *v15; // x23
  struct UserServantEntity_o *UserServant_k__BackingField; // x19
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

  if ( (byte_49B6FDC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B4CF90(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__, v9);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49B6FDC = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  UserServant_k__BackingField = selectItem->fields._UserServant_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !UserServant_k__BackingField )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  context = v15->fields.context;
  p_fields = &UserServant_k__BackingField->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v51, 0LL);
  v26 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                      UserServant_k__BackingField->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
          UserServant_k__BackingField->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
          UserServant_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
          UserServant_k__BackingField->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
          UserServant_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServant_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                  UserServant_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                       UserServant_k__BackingField->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
          UserServant_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1B4D1EC(limitCountSupport, v14);
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
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v35; // x21

  if ( (byte_49B6FD7 & 1) == 0 )
  {
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v5);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1B4CF90(&StringLiteral_11393/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v7);
    sub_1B4CF90(&StringLiteral_17351/*"button_push_reg"*/, v8);
    sub_1B4CF90(&StringLiteral_17352/*"button_push_unreg"*/, v9);
    sub_1B4CF90(&StringLiteral_17337/*"button_allchoice_reg"*/, v10);
    sub_1B4CF90(&StringLiteral_17340/*"button_alllock_unreg"*/, v11);
    sub_1B4CF90(&StringLiteral_11391/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v12);
    sub_1B4CF90(&StringLiteral_11392/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v13);
    sub_1B4CF90(&StringLiteral_17353/*"button_select_reg"*/, v14);
    sub_1B4CF90(&StringLiteral_12277/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v15);
    sub_1B4CF90(&StringLiteral_17354/*"button_select_unreg"*/, v16);
    sub_1B4CF90(&StringLiteral_17339/*"button_alllock_reg"*/, v17);
    sub_1B4CF90(&StringLiteral_17338/*"button_allchoice_unreg"*/, v18);
    byte_49B6FD7 = 1;
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
    v22 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17354/*"button_select_unreg"*/ : &StringLiteral_17353/*"button_select_reg"*/);
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
    v25 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17339/*"button_alllock_reg"*/ : &StringLiteral_17340/*"button_alllock_unreg"*/);
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
    v28 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17337/*"button_allchoice_reg"*/ : &StringLiteral_17338/*"button_allchoice_unreg"*/);
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
      v31 = &StringLiteral_17351/*"button_push_reg"*/;
    else
      v31 = &StringLiteral_17352/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v31, 0LL);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_12277/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11392/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11391/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11393/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
          v35 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
          RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
            v35,
            (Il2CppObject *)this,
            (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
            0LL);
          if ( supportServantListViewManager )
          {
            RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v35, 0LL);
            return;
          }
LABEL_48:
          sub_1B4D1EC(normalTabButton, *(_QWORD *)&modeKind);
        }
        RecommendSupportServantSelectListViewManager__SetMode_32915760(
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
  const MethodInfo *v11; // x3
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  System_Int64_array *v13; // x1
  System_Int64_array *v14; // x2
  bool v15; // w4
  bool v16; // w5
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  System_Int64_array *v20; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49B6FDA & 1) == 0 )
  {
    sub_1B4CF90(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__, v6);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_49B6FDA = 1;
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
    if ( RecommendSupportServantSelectListViewManager__GetSwapChoiceList(
           supportServantListViewManager,
           &choiceList,
           &v20,
           0LL) )
    {
      this->fields.requestCallback = callback;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v17, v18);
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v19,
                                                                                          (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v14 = v20;
        v13 = choiceList;
        v16 = 1;
        v15 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B4D1EC(supportServantListViewManager, callback);
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
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v12,
                                                                                          (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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


void __fastcall RecommendSupportServantSelectListMenu___Open_b__22_0(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_49B6FDF & 1) == 0 )
  {
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v3);
    byte_49B6FDF = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v5 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager )
    sub_1B4D1EC(v6, v7);
  RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v5, 0LL);
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19978D4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_199788C;
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
  if ( (byte_49B6FE0 & 1) == 0 )
  {
    sub_1B4CF90(&bool_TypeInfo, isRequest);
    byte_49B6FE0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v9, callback, object);
}


void __fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
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
  CommonUI_o *v11; // x20
  System_Action_o *_9__1; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct RecommendSupportServantSelectListMenu_o *_4__this; // x20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_49B6FE1 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B4CF90(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__, v8);
    byte_49B6FE1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_30248724(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B4D1EC(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v17 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B4D1DC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v17, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B4D1EC(this, method);
  RecommendSupportServantSelectListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}