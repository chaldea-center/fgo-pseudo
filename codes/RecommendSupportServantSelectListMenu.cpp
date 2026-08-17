void RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C55A & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596C55A = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void RecommendSupportServantSelectListMenu__Awake(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportServantSelectListMenu__ClearScrollValue(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_2213CDC(0, method);
  ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListMenu__EndCancelButton(
        RecommendSupportServantSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_596C555 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C555 = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
LABEL_9:
      sub_2213CDC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_41679616(supportServantListViewManager, 4, v6);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, 0);
}


void RecommendSupportServantSelectListMenu__EndCardFavoriteRequest(
        RecommendSupportServantSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  struct RecommendSupportServantSelectListViewManager_o *v5; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596C559 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_596C559 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v5 = this->fields.supportServantListViewManager,
        v6 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          v7),
        !v5) )
  {
    sub_2213CDC(supportServantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  RecommendSupportServantSelectListViewManager__SetMode_41651552(v5, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListMenu__EndClickTabChoice(
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
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_2213CDC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_41679616(supportServantListViewManager, 4, v5);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListMenu__EndClickTabLock(
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
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_2213CDC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_41679616(supportServantListViewManager, 4, v5);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListMenu__EndClickTabNormal(
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
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_2213CDC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_41679616(supportServantListViewManager, 4, v5);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListMenu__EndClickTabPush(
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
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_2213CDC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_41679616(supportServantListViewManager, 4, v5);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 3, method);
}


void RecommendSupportServantSelectListMenu__EndStatusSync(
        RecommendSupportServantSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_requestCallback; // x0
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v9; // x19
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback;
  v9 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0;
    sub_2213A04(p_requestCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      1,
      v9->fields.method);
  }
}


void RecommendSupportServantSelectListMenu__Init(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  LocalizationManager_c *v6; // x0
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v10; // x2

  if ( (byte_596C54C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_13096/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_596C54C = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportServantSelectListViewManager__DestroyList(supportServantListViewManager, method);
  v6 = LocalizationManager_TypeInfo;
  explanationLabel = this->fields.explanationLabel;
  this->fields.state = 0;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, v4, v5);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_13096/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                                      0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0),
        (normalTabButton = this->fields.normalTabButton) == 0) )
  {
LABEL_9:
    sub_2213CDC(supportServantListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0);
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 0, v10);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void RecommendSupportServantSelectListMenu__ModifyItem(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_2213CDC(0, method);
  RecommendSupportServantSelectListViewManager__RequestListObject_41679616(supportServantListViewManager, 4, v2);
}


void RecommendSupportServantSelectListMenu__OnClickCancel(
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

  if ( (byte_596C554 & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    sub_2213A60(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&StringLiteral_13213/*"SelectIndex"*/);
    byte_596C554 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_13213/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0) )
    {
      sub_2213CDC(Instance, v6);
    }
    ListViewManager__SetScrollBarValue(Instance, 0);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndCancelButton__,
      v8);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
  }
}


void RecommendSupportServantSelectListMenu__OnClickChoiceTabButton(
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

  if ( (byte_596C551 & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    sub_2213A60(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_596C551 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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


void RecommendSupportServantSelectListMenu__OnClickLockTabButton(
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

  if ( (byte_596C550 & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    sub_2213A60(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_596C550 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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


void RecommendSupportServantSelectListMenu__OnClickNormalTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_596C54F & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    sub_2213A60(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_596C54F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__,
      v6);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v5, v7);
  }
}


void RecommendSupportServantSelectListMenu__OnClickPushTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_596C552 & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    sub_2213A60(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_596C552 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabPush__,
      v6);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v5, v7);
  }
}


void RecommendSupportServantSelectListMenu__OnClickScaleChange(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_596C557 & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    byte_596C557 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ChangeIconScale(supportServantListViewManager, v5),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                                                                                              supportServantListViewManager,
                                                                                              v5),
          !scaleChangeTabSprite) )
    {
      sub_2213CDC(supportServantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantListViewManager, 0);
  }
}


void RecommendSupportServantSelectListMenu__OnSelectItem(
        RecommendSupportServantSelectListMenu_o *this,
        int32_t kind,
        int32_t offset,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 supportServantListViewManager; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  MethodInfo *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  RecommendSupportServantSelectListViewItem_o *Item; // x1
  RecommendSupportServantSelectListViewItem_o **v23; // x21
  const MethodInfo *v24; // x1
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListViewItem_o *v26; // x0
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  int32_t v29; // w1
  _QWORD *v30; // x0
  struct RecommendSupportServantSelectListViewManager_o *v31; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v32; // x21
  const MethodInfo *v33; // x3
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  const MethodInfo *v40; // x2
  System_Reflection_MethodBase_o *v41; // x0
  const MethodInfo *v42; // x2
  const MethodInfo_45E5BF4 *v43; // x3
  int64_t v44; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v46; // q2
  __int64 v47; // x1
  __int64 v48; // x2
  const MethodInfo_45E4A50 *v49; // x3
  System_Reflection_MethodBase_o *v50; // x0
  const MethodInfo *v51; // x1
  RecommendSupportData_o *v52; // x19
  System_Reflection_MethodBase_o *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  const MethodInfo *v55; // x1
  UserGameEntity_o *SelfUserGame; // x19
  __int64 v57; // x8
  const MethodInfo_47A29F8 *v58; // x0
  RecommendSupportData_o *v59; // x19
  __int64 v60; // x25
  ServantEntity_o *ServantEntity; // x27
  int32_t v62; // w28
  __int64 v63; // x2
  int32_t v64; // w26
  Il2CppObject *Master_object; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  ServantLimitImageMaster_o *v68; // x22
  System_String_o *v69; // x20
  System_String_o *v70; // x23
  __int64 v71; // x1
  __int64 v72; // x2
  System_Object_array *v73; // x24
  __int64 v74; // x28
  System_String_o *ClassName; // x28
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x27
  __int64 v79; // x28
  int32_t v80; // w0
  __int64 v81; // x8
  int32_t v82; // w25
  System_String_o *LimitCountSealedServantName; // x25
  System_String_o *RarityType; // x25
  System_String_o *v85; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *Servant_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v87; // x8
  int32_t v88; // w21
  int32_t v89; // w0
  System_String_o *v90; // x21
  System_String_o *v91; // x21
  System_String_o *v92; // x22
  System_String_o *v93; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v95; // x25
  __int64 v96; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+50h] [xbp-150h] BYREF
  __int128 v98; // [xsp+70h] [xbp-130h]
  __int128 v99; // [xsp+80h] [xbp-120h]
  _OWORD v100[3]; // [xsp+90h] [xbp-110h] BYREF
  _OWORD v101[2]; // [xsp+C0h] [xbp-E0h] BYREF
  __int128 v102; // [xsp+E0h] [xbp-C0h]
  _OWORD v103[2]; // [xsp+F0h] [xbp-B0h] BYREF
  _BYTE v104[39]; // [xsp+110h] [xbp-90h] BYREF
  __int64 v105; // [xsp+138h] [xbp-68h]
  System_Nullable_T__o v106; // 0:x0.16
  System_Nullable_long__o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  v105 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_596C54E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_long___ctor__);
    sub_2213A60(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_2213A60(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_long__get_HasValue__);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__);
    sub_2213A60(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
    sub_2213A60(&StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_596C54E = 1;
  }
  v102 = 0u;
  memset(v103, 0, 23);
  memset(v104, 0, sizeof(v104));
  v7 = sub_2213CCC(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_95;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.state == 2 )
  {
    if ( offset < 0 )
    {
      Item = 0;
    }
    else
    {
      supportServantListViewManager = (__int64)this->fields.supportServantListViewManager;
      if ( !supportServantListViewManager )
        goto LABEL_95;
      Item = RecommendSupportServantSelectListViewManager__GetItem(
               (RecommendSupportServantSelectListViewManager_o *)supportServantListViewManager,
               offset,
               v16);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v23 = (RecommendSupportServantSelectListViewItem_o **)(v7 + 24);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v7 + 24),
      (int32_t)Item,
      (System_String_o *)v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      v26 = *v23;
      if ( tabModeKind != 3 )
      {
        if ( tabModeKind == 2 )
        {
          if ( v26 )
            v26->fields._IsSwapChoice_k__BackingField ^= 1u;
          v30 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
            v30 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
          v28 = (System_Reflection_MethodBase_o *)sub_2213A44(v30, v30[4]);
          v29 = 0;
          goto LABEL_23;
        }
        if ( tabModeKind == 1 )
        {
          if ( v26 )
            v26->fields._IsSwapLock_k__BackingField ^= 1u;
          v27 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
            v27 = (_QWORD *)sub_2213A78(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
          v28 = (System_Reflection_MethodBase_o *)sub_2213A44(v27, v27[4]);
          v29 = 11;
          goto LABEL_23;
        }
        if ( v26 )
        {
          if ( v26->fields._IsBase_k__BackingField )
          {
            v50 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
            OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0, 0);
            RecommendSupportServantSelectListMenu__Init(this, v51);
            supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
            if ( !supportServantListViewManager )
              goto LABEL_95;
            v52 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
            supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
            if ( !supportServantListViewManager || !v52 )
              goto LABEL_95;
            RecommendSupportData__RemoveServantData(v52, *(_DWORD *)(supportServantListViewManager + 120), 0);
LABEL_62:
            supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
            if ( !supportServantListViewManager )
              goto LABEL_95;
            RecommendSupportSelectControl__SetState(
              (RecommendSupportSelectControl_o *)supportServantListViewManager,
              0,
              0);
            return;
          }
          if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v26, v24) )
            goto LABEL_52;
          supportServantListViewManager = (__int64)*v23;
          if ( !*v23 )
            goto LABEL_95;
          if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(
                 (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
                 v9) )
          {
            goto LABEL_52;
          }
          supportServantListViewManager = (__int64)*v23;
          if ( !*v23 )
            goto LABEL_95;
          if ( *(_BYTE *)(supportServantListViewManager + 174)
            || *(_BYTE *)(supportServantListViewManager + 240)
            || RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
                 (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
                 v9) )
          {
LABEL_52:
            v28 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
            v29 = 2;
LABEL_23:
            OverwriteAssetSoundName__PlaySystemSe(v28, v29, 0, 0);
            v31 = this->fields.supportServantListViewManager;
            goto LABEL_24;
          }
        }
        v54 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0, 0);
        RecommendSupportServantSelectListMenu__Init(this, v55);
        if ( !*v23 )
          return;
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_95;
        if ( !SelfUserGame )
          goto LABEL_95;
        v57 = *(_QWORD *)(supportServantListViewManager + 112);
        if ( !v57 )
          goto LABEL_95;
        v58 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        *(_QWORD *)(v57 + 64) = SelfUserGame->fields.pushUserSvtId;
        supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance(v58);
        if ( !supportServantListViewManager )
          goto LABEL_95;
        v59 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
        supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !*v23 || !v59 )
          goto LABEL_95;
        RecommendSupportData__SetServantData(
          v59,
          *(_DWORD *)(supportServantListViewManager + 120),
          (*v23)->fields._UserServant_k__BackingField,
          0);
        goto LABEL_62;
      }
      if ( v26 && !v26->fields._IsEnabled_k__BackingField )
      {
        v53 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        OverwriteAssetSoundName__PlaySystemSe(v53, 2, 0, 0);
        v31 = this->fields.supportServantListViewManager;
        this->fields.state = 2;
LABEL_24:
        v32 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v32,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          v33);
        if ( v31 )
        {
          v31->fields.callbackFunc = v32;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v31->fields.callbackFunc,
            (int32_t)v32,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          RecommendSupportServantSelectListViewManager__SetMode_41651552(v31, 2, v40);
          return;
        }
LABEL_95:
        sub_2213CDC(supportServantListViewManager, v9);
      }
      v41 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
      OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0, 0);
      supportServantListViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      v44 = *(_QWORD *)(supportServantListViewManager + 128);
      if ( !v44 )
      {
LABEL_37:
        RecommendSupportServantSelectListMenu__PushRequest(this, *v23, v42);
        return;
      }
      if ( *v23 )
      {
        UserServant_k__BackingField = (*v23)->fields._UserServant_k__BackingField;
        if ( !UserServant_k__BackingField )
          goto LABEL_95;
        v46 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
        *(_QWORD *)&v106.fields.hasValue = v100;
        v106.fields.value = (Il2CppObject *)v101;
        v98 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
        v99 = v46;
        v101[0] = v98;
        v101[1] = v46;
        memset(v100, 0, 40);
        System_Nullable_ObscuredLong____ctor(
          v106,
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
          v43);
        *(_QWORD *)((char *)v103 + 15) = *(_QWORD *)&v100[2];
        v102 = *(_OWORD *)((char *)v100 + 1);
        v103[0] = *(_OWORD *)((char *)&v100[1] + 1);
        *(_OWORD *)v104 = *(_OWORD *)((char *)v100 + 1);
        *(_OWORD *)&v104[16] = *(_OWORD *)((char *)&v100[1] + 1);
        *(_QWORD *)&v104[31] = *(_QWORD *)((char *)v103 + 15);
        if ( LOBYTE(v100[0]) )
        {
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47, v48);
          v97 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)&v104[7];
          v107.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v97, 0);
          *(_QWORD *)&v107.fields.hasValue = v100;
          v100[0] = 0u;
          System_Nullable_long____ctor(v107, Method_System_Nullable_long___ctor__, v49);
          if ( LOBYTE(v100[0]) )
          {
            if ( v44 == *((_QWORD *)&v100[0] + 1) )
              goto LABEL_37;
          }
        }
      }
      else
      {
        v102 = 0u;
        memset(v103, 0, 23);
        memset(v104, 0, sizeof(v104));
      }
      supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      supportServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)supportServantListViewManager,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      supportServantListViewManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
                                                 v44,
                                                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      v60 = supportServantListViewManager;
      ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)supportServantListViewManager, -1, 0);
      supportServantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v60, 0, 0);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      if ( !*v23 )
        goto LABEL_95;
      if ( !(*v23)->fields._UserServant_k__BackingField )
        goto LABEL_95;
      v62 = *(_DWORD *)(supportServantListViewManager + 24);
      supportServantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus(
                                                 (*v23)->fields._UserServant_k__BackingField,
                                                 0,
                                                 0);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      v64 = *(_DWORD *)(supportServantListViewManager + 24);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v63);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      if ( *v23 )
      {
        v68 = (ServantLimitImageMaster_o *)Master_object;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66, v67);
        v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
        v70 = LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
        v73 = (System_Object_array *)sub_2213B20(object___TypeInfo, 6);
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v71, v72);
        supportServantListViewManager = (__int64)Rarity__getRarityType(v62, 0);
        if ( !v73 )
          goto LABEL_95;
        v74 = supportServantListViewManager;
        sub_1FFE8F8(v73, supportServantListViewManager);
        supportServantListViewManager = sub_1FFE2C4(v73, 0, v74);
        if ( !ServantEntity )
          goto LABEL_95;
        ClassName = ServantEntity__getClassName(ServantEntity, 0);
        sub_1FFE8F8(v73, ClassName);
        sub_1FFE2C4(v73, 1, ClassName);
        v79 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
        v78 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v76, v77);
        *(_QWORD *)&v108.fields.currentCryptoKey = v79;
        *(_QWORD *)&v108.fields.fakeValue = v78;
        v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v108, 0);
        v81 = *(_QWORD *)(v60 + 96);
        *(_QWORD *)&v109.fields.fakeValue = *(_QWORD *)(v60 + 104);
        v82 = v80;
        *(_QWORD *)&v109.fields.currentCryptoKey = v81;
        supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v109, 0);
        if ( !v68 )
          goto LABEL_95;
        LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                        v68,
                                        v82,
                                        supportServantListViewManager,
                                        1,
                                        1,
                                        0);
        sub_1FFE8F8(v73, LimitCountSealedServantName);
        sub_1FFE2C4(v73, 2, LimitCountSealedServantName);
        RarityType = Rarity__getRarityType(v64, 0);
        sub_1FFE8F8(v73, RarityType);
        supportServantListViewManager = sub_1FFE2C4(v73, 3, RarityType);
        if ( !*v23 )
          goto LABEL_95;
        supportServantListViewManager = (__int64)(*v23)->fields._Servant_k__BackingField;
        if ( !supportServantListViewManager )
          goto LABEL_95;
        v85 = ServantEntity__getClassName((ServantEntity_o *)supportServantListViewManager, 0);
        sub_1FFE8F8(v73, v85);
        supportServantListViewManager = sub_1FFE2C4(v73, 4, v85);
        if ( !*v23 )
          goto LABEL_95;
        Servant_k__BackingField = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields._Servant_k__BackingField;
        if ( !Servant_k__BackingField )
          goto LABEL_95;
        supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                          Servant_k__BackingField[1],
                                          0);
        if ( !*v23 )
          goto LABEL_95;
        v87 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields._UserServant_k__BackingField;
        if ( !v87 )
          goto LABEL_95;
        v88 = supportServantListViewManager;
        v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v87[6], 0);
        v90 = ServantLimitImageMaster__GetLimitCountSealedServantName(v68, v88, v89, 1, 1, 0);
        sub_1FFE8F8(v73, v90);
        sub_1FFE2C4(v73, 5, v90);
        v91 = System_String__Format_75698016(v70, v73, 0);
        v92 = LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
        v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v95 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v95,
          (Il2CppObject *)v7,
          Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__,
          0);
        supportServantListViewManager = (__int64)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v96);
        if ( !Instance )
          goto LABEL_95;
        CommonUI__OpenConfirmDialog_37373584(
          (CommonUI_o *)Instance,
          v69,
          v91,
          v92,
          v93,
          v95,
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
    }
  }
}


void RecommendSupportServantSelectListMenu__Open(
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_c *v22; // x0
  System_Action_o *v23; // x20

  if ( (byte_596C54D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&StringLiteral_13213/*"SelectIndex"*/);
    byte_596C54D = 1;
  }
  RecommendSupportServantSelectListMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_20;
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0);
  if ( !v5 )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(v5, (unsigned __int8)gameObject & 1, 0);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v6 = *((_DWORD *)gameObject + 30);
  if ( v6 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_13213/*"SelectIndex"*/, -1, 0) )
  {
    gameObject = this->fields.supportServantListViewManager;
    if ( !gameObject )
      goto LABEL_20;
    ListViewManager__ClearScrollBarValue((ListViewManager_o *)gameObject, 1, 0);
  }
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0, 1, 0, 74, 0);
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v8 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v9 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  v12 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v13);
  if ( !v11
    || (v11->fields.callbackFunc = v12,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v11->fields.callbackFunc,
          (int32_t)v12,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        RecommendSupportServantSelectListViewManager__SetMode_41651552(v11, 1, v20),
        (gameObject = this->fields.supportServantListViewManager) == 0)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                       (RecommendSupportServantSelectListViewManager_o *)gameObject,
                       v4),
        !scaleChangeTabSprite) )
  {
LABEL_20:
    sub_2213CDC(gameObject, v4);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
  v22 = System_Action_TypeInfo;
  this->fields.state = 2;
  v23 = (System_Action_o *)sub_2213CCC(v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v23, 0);
}


void RecommendSupportServantSelectListMenu__PushRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_596C558 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C558 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_2213CDC(Instance, v6);
  CardFavoriteRequest__beginRequestPush(
    (CardFavoriteRequest_o *)Instance,
    selectItem->fields._UserServant_k__BackingField,
    0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListMenu__SetModeTabKind(
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
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x21
  __int64 *v21; // x8
  int32_t state; // w9
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1

  if ( (byte_596C553 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_2213A60(&StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_2213A60(&StringLiteral_18431/*"button_push_reg"*/);
    sub_2213A60(&StringLiteral_18432/*"button_push_unreg"*/);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_2213A60(&StringLiteral_18433/*"button_select_reg"*/);
    sub_2213A60(&StringLiteral_13096/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_18434/*"button_select_unreg"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    byte_596C553 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
    v6 = this->fields.normalTabButton;
    if ( !v6 )
      goto LABEL_53;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0);
    UICommonButton__SetColliderEnable(v6, enabled, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_18434/*"button_select_unreg"*/ : &StringLiteral_18433/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_53;
    v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
    UICommonButton__SetColliderEnable(lockTabButton, v10, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_18419/*"button_alllock_reg"*/ : &StringLiteral_18420/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v11, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_53;
    v13 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
    UICommonButton__SetColliderEnable(choiceTabButton, v13, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    v14 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_18417/*"button_allchoice_reg"*/ : &StringLiteral_18418/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v14, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0);
    pushTabButton = this->fields.pushTabButton;
    if ( !pushTabButton )
      goto LABEL_53;
    v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
    UICommonButton__SetColliderEnable(pushTabButton, v16, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    if ( this->fields.tabModeKind == 3 )
      v17 = &StringLiteral_18431/*"button_push_reg"*/;
    else
      v17 = &StringLiteral_18432/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v17, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind > 1 )
    {
      if ( tabModeKind == 2 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v18);
        v21 = &StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      }
      if ( tabModeKind == 3 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v18);
        v21 = &StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
        goto LABEL_45;
      }
    }
    else
    {
      if ( !tabModeKind )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v18);
        v21 = &StringLiteral_13096/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_45;
      }
      if ( tabModeKind == 1 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v18);
        v21 = &StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
LABEL_45:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v21, 0);
        if ( !explanationLabel )
          goto LABEL_53;
        UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0);
      }
    }
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.supportServantListViewManager;
    if ( normalTabButton )
    {
      state = this->fields.state;
      LOBYTE(normalTabButton[19].fields.m_CachedPtr) = this->fields.tabModeKind != 0;
      if ( state != 2 )
      {
        v32 = 1;
        goto LABEL_52;
      }
      RecommendSupportServantSelectListViewManager__UpdateItemState(
        (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
        modeKind == 3,
        v18);
      supportServantListViewManager = this->fields.supportServantListViewManager;
      v24 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
      RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
        v25);
      if ( supportServantListViewManager )
      {
        supportServantListViewManager->fields.callbackFunc = v24;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
          (int32_t)v24,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        normalTabButton = (UnityEngine_Behaviour_o *)supportServantListViewManager;
        v32 = 2;
LABEL_52:
        RecommendSupportServantSelectListViewManager__SetMode_41651552(
          (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
          v32,
          v18);
        return;
      }
    }
LABEL_53:
    sub_2213CDC(normalTabButton, *(_QWORD *)&modeKind);
  }
}


void RecommendSupportServantSelectListMenu__StatusRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Int64_array *v17; // x1
  System_Int64_array *v18; // x2
  bool v19; // w4
  bool v20; // w5
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Int64_array *v30; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596C556 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596C556 = 1;
  }
  tabModeKind = this->fields.tabModeKind;
  unlockList = 0;
  lockList = 0;
  v30 = 0;
  choiceList = 0;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( RecommendSupportServantSelectListViewManager__GetSwapChoiceList(
           supportServantListViewManager,
           &choiceList,
           &v30,
           v3) )
    {
      this->fields.requestCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28, v29);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v27,
                                                                                          (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v18 = v30;
        v17 = choiceList;
        v19 = 0;
        v20 = 1;
        goto LABEL_17;
      }
LABEL_21:
      sub_2213CDC(supportServantListViewManager, callback);
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v14,
                                                                                          (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v18 = unlockList;
        v17 = lockList;
        v19 = 1;
        v20 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v17,
          v18,
          0,
          v19,
          v20,
          0);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void RecommendSupportServantSelectListMenu___Open_b__22_0(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_CallbackFunc_c *v3; // x0
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  if ( (byte_596C55B & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_596C55B = 1;
  }
  v3 = RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  v5 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_2213CCC(v3);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v6);
  if ( !supportServantListViewManager )
    sub_2213CDC(v7, v8);
  supportServantListViewManager->fields.callbackFunc = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  RecommendSupportServantSelectListViewManager__SetMode_41651552(supportServantListViewManager, 2, v15);
}


void RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200572C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20056E4;
}


System_IAsyncResult_o *RecommendSupportServantSelectListMenu_RequestCallbackFunc__BeginInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void RecommendSupportServantSelectListMenu_RequestCallbackFunc__Invoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void RecommendSupportServantSelectListMenu___c__DisplayClass24_0___ctor(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__0(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct RecommendSupportServantSelectListMenu_o *_4__this; // x20
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x2

  if ( (byte_596C55C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__);
    byte_596C55C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  _4__this->fields.state = 2;
  v17 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_2213CCC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v18);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  supportServantListViewManager->fields.callbackFunc = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
    (int32_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  RecommendSupportServantSelectListViewManager__SetMode_41651552(supportServantListViewManager, 2, v25);
}


void RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  RecommendSupportServantSelectListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}