void __fastcall RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B18522 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseMenu_TypeInfo, method);
    byte_4B18522 = 1;
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
    sub_1BCB254(0LL, method);
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
  const MethodInfo *v7; // x2

  if ( (byte_4B1851D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, isRequest);
    byte_4B1851D = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1BCB254(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_34165476(supportServantListViewManager, 4, v6);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v7);
}


void __fastcall RecommendSupportServantSelectListMenu__EndCardFavoriteRequest(
        RecommendSupportServantSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  struct RecommendSupportServantSelectListViewManager_o *v6; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4B18521 & 1) == 0 )
  {
    sub_1BCAFF8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, result);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    byte_4B18521 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v6 = this->fields.supportServantListViewManager,
        v7 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          v8),
        !v6) )
  {
    sub_1BCB254(supportServantListViewManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10);
  RecommendSupportServantSelectListViewManager__SetMode_34135852(v6, 2, v11);
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
      sub_1BCB254(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_34165476(supportServantListViewManager, 4, v5);
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
      sub_1BCB254(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_34165476(supportServantListViewManager, 4, v5);
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
      sub_1BCB254(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_34165476(supportServantListViewManager, 4, v5);
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
      sub_1BCB254(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_34165476(supportServantListViewManager, 4, v5);
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
    sub_1BCAF9C(p_requestCallback, 0, (int32_t)method, v3);
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

  if ( (byte_4B18514 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_12462/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v3);
    byte_4B18514 = 1;
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
                                                                                      (System_String_o *)StringLiteral_12462/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                                      0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1BCB254(supportServantListViewManager, method);
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
  const MethodInfo *v2; // x2
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1BCB254(0LL, method);
  RecommendSupportServantSelectListViewManager__RequestListObject_34165476(supportServantListViewManager, 4, v2);
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

  if ( (byte_4B1851C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__, method);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__, v3);
    sub_1BCAFF8(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5);
    sub_1BCAFF8(&StringLiteral_12563/*"SelectIndex"*/, v6);
    byte_4B1851C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12563/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0LL),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1BCB254(Instance, v10);
    }
    ListViewManager__SetScrollBarValue(Instance, 0LL);
    v11 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4B18519 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__, method);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__, v3);
    sub_1BCAFF8(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B18519 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          v10);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4B18518 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__, method);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__, v3);
    sub_1BCAFF8(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B18518 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          v10);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4B18517 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__, method);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__, v3);
    sub_1BCAFF8(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B18517 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4B1851A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__, method);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__, v3);
    sub_1BCAFF8(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B1851A = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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
  const MethodInfo *v5; // x1
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4B1851F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__, method);
    byte_4B1851F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
      sub_1BCB254(supportServantListViewManager, v5);
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
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x3
  RecommendSupportServantSelectListViewItem_o *Item; // x1
  RecommendSupportServantSelectListViewItem_o **v44; // x20
  const MethodInfo *v45; // x1
  int32_t tabModeKind; // w8
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  int32_t v49; // w1
  _QWORD *v50; // x0
  struct RecommendSupportServantSelectListViewManager_o *v51; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v52; // x20
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x2
  RecommendSupportServantSelectListViewItem_o *v57; // x0
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  const MethodInfo *v60; // x2
  const MethodInfo_37DA2E8 *v61; // x3
  int64_t dropList; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v64; // q0
  __int128 v65; // q1
  int64_t v66; // x24
  const MethodInfo_37D95B4 *v67; // x3
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  const MethodInfo *v70; // x1
  RecommendSupportData_o *clipRange; // x19
  const MethodInfo_38F8AD8 *v72; // x0
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  _QWORD *v75; // x0
  _QWORD *v76; // x0
  System_Reflection_MethodBase_o *v77; // x0
  const MethodInfo *v78; // x1
  UserGameEntity_o *SelfUserGame; // x19
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v80; // x8
  RecommendSupportData_o *v81; // x19
  const MethodInfo *v82; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v87; // x27
  UserServantEntity_o *v88; // x8
  int32_t m_CancellationTokenSource; // w28
  int32_t v90; // w26
  Il2CppObject *Master_object; // x0
  ServantLimitImageMaster_o *v92; // x22
  System_String_o *v93; // x23
  __int64 v94; // x24
  __int64 v95; // x2
  const MethodInfo *v96; // x3
  RecommendSupportServantSelectListViewManager_o *v97; // x28
  const MethodInfo *v98; // x3
  RecommendSupportServantSelectListViewManager_o *v99; // x27
  void *v100; // x27
  Il2CppClass *v101; // x28
  int32_t v102; // w0
  Il2CppClass *v103; // x8
  int32_t v104; // w25
  const MethodInfo *v105; // x3
  RecommendSupportServantSelectListViewManager_o *v106; // x25
  const MethodInfo *v107; // x3
  RecommendSupportServantSelectListViewManager_o *v108; // x25
  const MethodInfo *v109; // x3
  RecommendSupportServantSelectListViewManager_o *v110; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v111; // x8
  int32_t v112; // w20
  int32_t v113; // w0
  const MethodInfo *v114; // x3
  RecommendSupportServantSelectListViewManager_o *v115; // x20
  System_String_o *v116; // x20
  System_String_o *v117; // x22
  System_String_o *v118; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v120; // x25
  __int64 v121; // x0
  System_String_o *title; // [xsp+48h] [xbp-158h]
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
  if ( (byte_4B18516 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1BCAFF8(&DataManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_System_Nullable_long__GetValueOrDefault__, v16);
    sub_1BCAFF8(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__, v17);
    sub_1BCAFF8(&Method_System_Nullable_long___ctor__, v18);
    sub_1BCAFF8(&Method_System_Nullable_ObscuredLong___ctor__, v19);
    sub_1BCAFF8(&Method_System_Nullable_ObscuredLong__get_HasValue__, v20);
    sub_1BCAFF8(&Method_System_Nullable_long__get_HasValue__, v21);
    sub_1BCAFF8(&object___TypeInfo, v22);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1BCAFF8(&Rarity_TypeInfo, v25);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v26);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v28);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__, v30);
    sub_1BCAFF8(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo, v31);
    sub_1BCAFF8(&StringLiteral_11845/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v32);
    sub_1BCAFF8(&StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v33);
    sub_1BCAFF8(&StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v34);
    sub_1BCAFF8(&StringLiteral_11846/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v35);
    byte_4B18516 = 1;
  }
  memset(v130, 0, sizeof(v130));
  v128 = 0u;
  memset(v129, 0, 23);
  v36 = sub_1BCB244(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_129;
  *(_QWORD *)(v36 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 16), (int32_t)this, v39, v40);
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
      goto LABEL_129;
    Item = RecommendSupportServantSelectListViewManager__GetItem(supportServantListViewManager, offset, v41);
  }
  *(_QWORD *)(v36 + 24) = Item;
  v44 = (RecommendSupportServantSelectListViewItem_o **)(v36 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 24), (int32_t)Item, (int32_t)v41, v42);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v44 )
      (*v44)->fields._IsSwapChoice_k__BackingField ^= 1u;
    v50 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v50 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v48 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v50, v50[4]);
    v49 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v44 )
      (*v44)->fields._IsSwapLock_k__BackingField ^= 1u;
    v47 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v47 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v48 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v47, v47[4]);
    v49 = 11;
LABEL_22:
    OverwriteAssetSoundName__PlaySystemSe(v48, v49, 0, 0LL);
    goto LABEL_23;
  }
  v57 = *v44;
  if ( tabModeKind != 3 )
  {
    if ( v57 )
    {
      if ( v57->fields._IsBase_k__BackingField )
      {
        v68 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v68 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v69 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v68, v68[4]);
        OverwriteAssetSoundName__PlaySystemSe(v69, 0, 0, 0LL);
        RecommendSupportServantSelectListMenu__Init(this, v70);
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_129;
        clipRange = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !clipRange )
          goto LABEL_129;
        RecommendSupportData__RemoveServantData(
          clipRange,
          (int32_t)supportServantListViewManager->fields.dragParentObject,
          0LL);
        v72 = (const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_76;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v57, v45) )
        goto LABEL_62;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v44;
      if ( !*v44 )
        goto LABEL_129;
      if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v38) )
      {
        goto LABEL_62;
      }
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v44;
      if ( !*v44 )
        goto LABEL_129;
      if ( BYTE2(supportServantListViewManager->fields.clipOffset.fields.y)
        || LOBYTE(supportServantListViewManager->fields.topItem)
        || RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v38) )
      {
LABEL_62:
        v75 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v75 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v48 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v75, v75[4]);
        v49 = 2;
        goto LABEL_22;
      }
    }
    v76 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v76 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v77 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v76, v76[4]);
    OverwriteAssetSoundName__PlaySystemSe(v77, 0, 0, 0LL);
    RecommendSupportServantSelectListMenu__Init(this, v78);
    if ( !*v44 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_129;
    if ( !SelfUserGame )
      goto LABEL_129;
    v80 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)supportServantListViewManager->fields.clipRange;
    if ( !v80 )
      goto LABEL_129;
    v80->m_Items[1].fields.currentCryptoKey = SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_129;
    v81 = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v44 || !v81 )
      goto LABEL_129;
    RecommendSupportData__SetServantData(
      v81,
      (int32_t)supportServantListViewManager->fields.dragParentObject,
      (*v44)->fields._UserServant_k__BackingField,
      0LL);
    v72 = (const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_76:
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance(v72);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v82);
      return;
    }
    goto LABEL_129;
  }
  if ( v57 && !v57->fields._IsEnabled_k__BackingField )
  {
    v73 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v73 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v74 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v73, v73[4]);
    OverwriteAssetSoundName__PlaySystemSe(v74, 2, 0, 0LL);
    this->fields.state = 2;
LABEL_23:
    v51 = this->fields.supportServantListViewManager;
    v52 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
      v52,
      (Il2CppObject *)this,
      (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
      v53);
    if ( v51 )
    {
      v51->fields.callbackFunc = v52;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v51->fields.callbackFunc, (int32_t)v52, v54, v55);
      RecommendSupportServantSelectListViewManager__SetMode_34135852(v51, 2, v56);
      return;
    }
LABEL_129:
    sub_1BCB254(supportServantListViewManager, v38);
  }
  v58 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v58 = (_QWORD *)sub_1BCB010(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v59 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v58, v58[4]);
  OverwriteAssetSoundName__PlaySystemSe(v59, 0, 0, 0LL);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  dropList = (int64_t)supportServantListViewManager->fields.dropList;
  if ( !dropList )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v44, v60);
    return;
  }
  if ( *v44 )
  {
    UserServant_k__BackingField = (*v44)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_129;
    v64 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v65 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v132.fields.hasValue = v126;
    v132.fields.value = (Il2CppObject *)v127;
    memset(v126, 0, sizeof(v126));
    v124 = v64;
    v125 = v65;
    v127[0] = v64;
    v127[1] = v65;
    System_Nullable_ObscuredLong____ctor(
      v132,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v61);
    *(_QWORD *)((char *)v129 + 15) = *(_QWORD *)&v126[32];
    v128 = *(_OWORD *)&v126[1];
    v129[0] = *(_OWORD *)&v126[17];
    if ( v126[0] )
      v66 = dropList;
    else
      v66 = 0LL;
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
      v133.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v123, 0LL);
      *(_QWORD *)&v133.fields.hasValue = v127;
      v127[0] = 0uLL;
      System_Nullable_long____ctor(v133, Method_System_Nullable_long___ctor__, v67);
      if ( LOBYTE(v127[0]) )
      {
        if ( v66 == *((_QWORD *)&v127[0] + 1) )
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
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
             dropList,
             (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_129;
  v84 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v134.fields.currentCryptoKey = klass;
  *(_QWORD *)&v134.fields.fakeValue = monitor;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                                      v134,
                                                                                      0LL);
  if ( !v84 )
    goto LABEL_129;
  v87 = DataMasterBase_object__object__int___GetEntity(
          v84,
          (int32_t)supportServantListViewManager,
          (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                                      (UserServantEntity_o *)Entity,
                                                                                      0LL,
                                                                                      0LL);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  if ( !*v44 )
    goto LABEL_129;
  v88 = (*v44)->fields._UserServant_k__BackingField;
  if ( !v88 )
    goto LABEL_129;
  m_CancellationTokenSource = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                                      v88,
                                                                                      0LL,
                                                                                      0LL);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  v90 = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( *v44 )
  {
    v92 = (ServantLimitImageMaster_o *)Master_object;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    title = LocalizationManager__Get((System_String_o *)StringLiteral_11846/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v93 = LocalizationManager__Get((System_String_o *)StringLiteral_11845/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v94 = sub_1BCB0A0(object___TypeInfo, 6LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(
                                                                                        m_CancellationTokenSource,
                                                                                        0LL);
    if ( !v94 )
      goto LABEL_129;
    v97 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1BCB134(
                                                                                              supportServantListViewManager,
                                                                                              *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v94 + 24) )
        goto LABEL_130;
      *(_QWORD *)(v94 + 32) = v97;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v94 + 32), (int32_t)v97, v95, v96);
      if ( !v87 )
        goto LABEL_129;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                          (ServantEntity_o *)v87,
                                                                                          0LL);
      v99 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1BCB134(
                                                                                                supportServantListViewManager,
                                                                                                *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v94 + 24) <= 1u )
          goto LABEL_130;
        *(_QWORD *)(v94 + 40) = v99;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v94 + 40), (int32_t)v99, v95, v98);
        v101 = Entity[5].klass;
        v100 = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v135.fields.currentCryptoKey = v101;
        *(_QWORD *)&v135.fields.fakeValue = v100;
        v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v135, 0LL);
        v103 = Entity[6].klass;
        *(_QWORD *)&v136.fields.fakeValue = Entity[6].monitor;
        v104 = v102;
        *(_QWORD *)&v136.fields.currentCryptoKey = v103;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                                            v136,
                                                                                            0LL);
        if ( !v92 )
          goto LABEL_129;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                            v92,
                                                                                            v104,
                                                                                            (int32_t)supportServantListViewManager,
                                                                                            1,
                                                                                            0LL);
        v106 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1BCB134(
                                                                                                  supportServantListViewManager,
                                                                                                  *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v94 + 24) <= 2u )
            goto LABEL_130;
          *(_QWORD *)(v94 + 48) = v106;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v94 + 48), (int32_t)v106, v95, v105);
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(
                                                                                              v90,
                                                                                              0LL);
          v108 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1BCB134(
                                                                                                    supportServantListViewManager,
                                                                                                    *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v94 + 24) <= 3u )
              goto LABEL_130;
            *(_QWORD *)(v94 + 56) = v108;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v94 + 56), (int32_t)v108, v95, v107);
            if ( !*v44 )
              goto LABEL_129;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v44)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_129;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                                (ServantEntity_o *)supportServantListViewManager,
                                                                                                0LL);
            v110 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1BCB134(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v94 + 24) <= 4u )
                goto LABEL_130;
              *(_QWORD *)(v94 + 64) = v110;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v94 + 64), (int32_t)v110, v95, v109);
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v44;
              if ( !*v44 )
                goto LABEL_129;
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewItem__get_SvtId(
                                                                                                  (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
                                                                                                  v38);
              if ( !*v44 )
                goto LABEL_129;
              v111 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v44)->fields._UserServant_k__BackingField;
              if ( !v111 )
                goto LABEL_129;
              v112 = (int)supportServantListViewManager;
              v113 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v111[6], 0LL);
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                                  v92,
                                                                                                  v112,
                                                                                                  v113,
                                                                                                  1,
                                                                                                  0LL);
              v115 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1BCB134(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v94 + 24) > 5u )
                {
                  *(_QWORD *)(v94 + 72) = v115;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v94 + 72), (int32_t)v115, v95, v114);
                  v116 = System_String__Format_62491852(v93, (System_Object_array *)v94, 0LL);
                  v117 = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v120 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v120,
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
                    CommonUI__OpenConfirmDialog_30763852(
                      (CommonUI_o *)Instance,
                      title,
                      v116,
                      v117,
                      v118,
                      v120,
                      (int32_t)supportServantListViewManager->fields.sort[2].fields.isPresentBoxFilterList,
                      HIDWORD(supportServantListViewManager->fields.sort[2].fields.isPresentBoxRarityFilterList),
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
                  goto LABEL_129;
                }
LABEL_130:
                sub_1BCB25C(supportServantListViewManager, v38, v95);
              }
            }
          }
        }
      }
    }
    v121 = sub_1BCB278();
    sub_1BCB120(v121, 0LL);
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
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  int v11; // w20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportData_o *v13; // x21
  int32_t v14; // w22
  const MethodInfo *v15; // x4
  struct RecommendSupportServantSelectListViewManager_o *v16; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v23; // x20

  if ( (byte_4B18515 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    sub_1BCAFF8(&StringLiteral_12563/*"SelectIndex"*/, v7);
    byte_4B18515 = 1;
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
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v11 = *((_DWORD *)gameObject + 30);
  if ( v11 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12563/*"SelectIndex"*/, -1, 0LL) )
  {
    gameObject = this->fields.supportServantListViewManager;
    if ( !gameObject )
      goto LABEL_20;
    ListViewManager__ClearScrollBarValue((ListViewManager_o *)gameObject, 1, 0LL);
  }
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 73, 0LL);
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setBackBtnSprite_39034208((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v13 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v14 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  if ( !supportServantListViewManager )
    goto LABEL_20;
  RecommendSupportServantSelectListViewManager__CreateList(
    supportServantListViewManager,
    v13,
    v14,
    *((EventUpValSetupInfo_o **)gameObject + 13),
    v15);
  v16 = this->fields.supportServantListViewManager;
  v17 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v18);
  if ( !v16
    || (v16->fields.callbackFunc = v17,
        sub_1BCAF9C((CGThumbnailListItem_o *)&v16->fields.callbackFunc, (int32_t)v17, v19, v20),
        RecommendSupportServantSelectListViewManager__SetMode_34135852(v16, 1, v21),
        (gameObject = this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                       (RecommendSupportServantSelectListViewManager_o *)gameObject,
                       v9),
        !scaleChangeTabSprite) )
  {
LABEL_20:
    sub_1BCB254(gameObject, v9);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v23 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v23, 0LL);
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
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
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
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4B18520 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__, v9);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B18520 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  UserServant_k__BackingField = selectItem->fields._UserServant_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  p_fields = &UserServant_k__BackingField->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v51, 0LL);
  v26 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  context = v15->fields.context;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                      UserServant_k__BackingField->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          UserServant_k__BackingField->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          UserServant_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          UserServant_k__BackingField->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          UserServant_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServant_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                  UserServant_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                       UserServant_k__BackingField->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          UserServant_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1BCB254(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    context == (struct System_Threading_SynchronizationContext_o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_Thread_o *)v47,
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
  const MethodInfo *v32; // x2
  UILabel_o *explanationLabel; // x21
  __int64 *v34; // x8
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v36; // x21
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1

  if ( (byte_4B1851B & 1) == 0 )
  {
    sub_1BCAFF8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1BCAFF8(&StringLiteral_11553/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v7);
    sub_1BCAFF8(&StringLiteral_17507/*"button_push_reg"*/, v8);
    sub_1BCAFF8(&StringLiteral_17508/*"button_push_unreg"*/, v9);
    sub_1BCAFF8(&StringLiteral_17493/*"button_allchoice_reg"*/, v10);
    sub_1BCAFF8(&StringLiteral_17496/*"button_alllock_unreg"*/, v11);
    sub_1BCAFF8(&StringLiteral_11551/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v12);
    sub_1BCAFF8(&StringLiteral_11552/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v13);
    sub_1BCAFF8(&StringLiteral_17509/*"button_select_reg"*/, v14);
    sub_1BCAFF8(&StringLiteral_12462/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v15);
    sub_1BCAFF8(&StringLiteral_17510/*"button_select_unreg"*/, v16);
    sub_1BCAFF8(&StringLiteral_17495/*"button_alllock_reg"*/, v17);
    sub_1BCAFF8(&StringLiteral_17494/*"button_allchoice_unreg"*/, v18);
    byte_4B1851B = 1;
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
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
        if ( normalTabButton )
        {
          v22 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17510/*"button_select_unreg"*/ : &StringLiteral_17509/*"button_select_reg"*/);
          UISprite__set_spriteName((UISprite_o *)normalTabButton, *v22, 0LL);
          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
          if ( normalTabButton )
          {
            UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
            lockTabButton = this->fields.lockTabButton;
            if ( lockTabButton )
            {
              v24 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
              UICommonButton__SetColliderEnable(lockTabButton, v24, 1, 0LL);
              normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
              if ( normalTabButton )
              {
                v25 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17495/*"button_alllock_reg"*/ : &StringLiteral_17496/*"button_alllock_unreg"*/);
                UISprite__set_spriteName((UISprite_o *)normalTabButton, *v25, 0LL);
                normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
                if ( normalTabButton )
                {
                  UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
                  choiceTabButton = this->fields.choiceTabButton;
                  if ( choiceTabButton )
                  {
                    v27 = UnityEngine_Behaviour__get_enabled(
                            (UnityEngine_Behaviour_o *)this->fields.choiceTabButton,
                            0LL);
                    UICommonButton__SetColliderEnable(choiceTabButton, v27, 1, 0LL);
                    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
                    if ( normalTabButton )
                    {
                      v28 = (System_String_o **)(this->fields.tabModeKind == 2
                                               ? &StringLiteral_17493/*"button_allchoice_reg"*/
                                               : &StringLiteral_17494/*"button_allchoice_unreg"*/);
                      UISprite__set_spriteName((UISprite_o *)normalTabButton, *v28, 0LL);
                      normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
                      if ( normalTabButton )
                      {
                        UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0LL);
                        pushTabButton = this->fields.pushTabButton;
                        if ( pushTabButton )
                        {
                          v30 = UnityEngine_Behaviour__get_enabled(
                                  (UnityEngine_Behaviour_o *)this->fields.pushTabButton,
                                  0LL);
                          UICommonButton__SetColliderEnable(pushTabButton, v30, 1, 0LL);
                          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
                          if ( normalTabButton )
                          {
                            if ( this->fields.tabModeKind == 3 )
                              v31 = &StringLiteral_17507/*"button_push_reg"*/;
                            else
                              v31 = &StringLiteral_17508/*"button_push_unreg"*/;
                            UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v31, 0LL);
                            switch ( this->fields.tabModeKind )
                            {
                              case 0:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v34 = &StringLiteral_12462/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
                                goto LABEL_41;
                              case 1:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v34 = &StringLiteral_11552/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
                                goto LABEL_41;
                              case 2:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v34 = &StringLiteral_11551/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
                                goto LABEL_41;
                              case 3:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v34 = &StringLiteral_11553/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_41:
                                normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                                               (System_String_o *)*v34,
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
                                  v40 = 1;
                                  goto LABEL_48;
                                }
                                RecommendSupportServantSelectListViewManager__UpdateItemState(
                                  (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
                                  modeKind == 3,
                                  v32);
                                supportServantListViewManager = this->fields.supportServantListViewManager;
                                v36 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
                                RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
                                  v36,
                                  (Il2CppObject *)this,
                                  (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
                                  v37);
                                if ( supportServantListViewManager )
                                {
                                  supportServantListViewManager->fields.callbackFunc = v36;
                                  sub_1BCAF9C(
                                    (CGThumbnailListItem_o *)&supportServantListViewManager->fields.callbackFunc,
                                    (int32_t)v36,
                                    v38,
                                    v39);
                                  v40 = 2;
                                  normalTabButton = (UnityEngine_Behaviour_o *)supportServantListViewManager;
LABEL_48:
                                  RecommendSupportServantSelectListViewManager__SetMode_34135852(
                                    (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
                                    v40,
                                    v32);
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
    sub_1BCB254(normalTabButton, *(_QWORD *)&modeKind);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__StatusRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x1
  System_Int64_array *v15; // x2
  bool v16; // w4
  bool v17; // w5
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  System_Int64_array *v21; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1851E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__, v7);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4B1851E = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v21 = 0LL;
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
           &v21,
           v3) )
    {
      this->fields.requestCallback = callback;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v18, v19);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v20,
                                                                                          (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v15 = v21;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BCB254(supportServantListViewManager, callback);
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
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v11, v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v13,
                                                                                          (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v15 = unlockList;
        v14 = lockList;
        v16 = 1;
        v17 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v14,
          v15,
          0,
          v16,
          v17,
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
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4B18523 & 1) == 0 )
  {
    sub_1BCAFF8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v3);
    byte_4B18523 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v5 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v6);
  if ( !supportServantListViewManager )
    sub_1BCB254(v7, v8);
  supportServantListViewManager->fields.callbackFunc = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&supportServantListViewManager->fields.callbackFunc, (int32_t)v5, v9, v10);
  RecommendSupportServantSelectListViewManager__SetMode_34135852(supportServantListViewManager, 2, v11);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A10874;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1082C;
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
  if ( (byte_4B18524 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isRequest);
    byte_4B18524 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2

  if ( (byte_4B18525 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BCAFF8(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__, v8);
    byte_4B18525 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_30764080(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1BCB254(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v17 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCB244(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v18);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  supportServantListViewManager->fields.callbackFunc = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&supportServantListViewManager->fields.callbackFunc, (int32_t)v17, v19, v20);
  RecommendSupportServantSelectListViewManager__SetMode_34135852(supportServantListViewManager, 2, v21);
}


void __fastcall RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCB254(this, method);
  RecommendSupportServantSelectListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}