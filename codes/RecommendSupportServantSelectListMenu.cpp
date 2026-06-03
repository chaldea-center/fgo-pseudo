void RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E73430 & 1) == 0 )
  {
    sub_1D0F0B4(&BaseMenu_TypeInfo);
    byte_4E73430 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
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
    sub_1D0F30C(0, method);
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

  if ( (byte_4E7342B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4E7342B = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
LABEL_9:
      sub_1D0F30C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_36055608(supportServantListViewManager, 3, 0);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v6);
}


void RecommendSupportServantSelectListMenu__EndCardFavoriteRequest(
        RecommendSupportServantSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  RecommendSupportServantSelectListViewManager_o *v5; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_4E7342F & 1) == 0 )
  {
    sub_1D0F0B4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_4E7342F = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, 0),
        v5 = this->fields.supportServantListViewManager,
        v6 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          0),
        !v5) )
  {
    sub_1D0F30C(supportServantListViewManager, result);
  }
  RecommendSupportServantSelectListViewManager__SetMode(v5, 2, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportServantSelectListMenu__EndClickTabChoice(
        RecommendSupportServantSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_1D0F30C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_36055608(supportServantListViewManager, 3, 0);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_1D0F30C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_36055608(supportServantListViewManager, 3, 0);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_1D0F30C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_36055608(supportServantListViewManager, 3, 0);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_1D0F30C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_36055608(supportServantListViewManager, 3, 0);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 3, method);
}


void RecommendSupportServantSelectListMenu__EndStatusSync(
        RecommendSupportServantSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_requestCallback; // x0
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v9; // x19
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback;
  v9 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0;
    sub_1D0F058(p_requestCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4E73422 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12749/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_4E73422 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportServantSelectListViewManager__DestroyList(supportServantListViewManager, 0);
  this->fields.state = 0;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_12749/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                                      0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0),
        (normalTabButton = this->fields.normalTabButton) == 0) )
  {
LABEL_9:
    sub_1D0F30C(supportServantListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0);
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 0, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void RecommendSupportServantSelectListMenu__ModifyItem(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1D0F30C(0, method);
  RecommendSupportServantSelectListViewManager__SetMode_36055608(supportServantListViewManager, 3, 0);
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

  if ( (byte_4E7342A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    sub_1D0F0B4(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1D0F0B4(&StringLiteral_12862/*"SelectIndex"*/);
    byte_4E7342A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12862/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0) )
    {
      sub_1D0F30C(Instance, v6);
    }
    ListViewManager__SetScrollBarValue(Instance, 0);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4E73427 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    sub_1D0F0B4(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4E73427 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4E73426 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    sub_1D0F0B4(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4E73426 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4E73425 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    sub_1D0F0B4(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4E73425 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4E73428 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    sub_1D0F0B4(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4E73428 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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
  __int64 v5; // x1
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4E7342D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    byte_4E7342D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ChangeIconScale(supportServantListViewManager, 0),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                                                                                              supportServantListViewManager,
                                                                                              0),
          !scaleChangeTabSprite) )
    {
      sub_1D0F30C(supportServantListViewManager, v5);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  RecommendSupportServantSelectListViewItem_o *Item; // x1
  RecommendSupportServantSelectListViewItem_o **v23; // x20
  const MethodInfo *v24; // x1
  int32_t tabModeKind; // w8
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  int32_t v28; // w1
  _QWORD *v29; // x0
  RecommendSupportServantSelectListViewManager_o *v30; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v31; // x20
  RecommendSupportServantSelectListViewItem_o *v32; // x0
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x2
  const MethodInfo_3A85C84 *v36; // x3
  int64_t v37; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v39; // q0
  __int128 v40; // q1
  int64_t v41; // x24
  const MethodInfo_3A84A74 *v42; // x3
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  const MethodInfo *v45; // x1
  RecommendSupportData_o *v46; // x19
  const MethodInfo_3BAC684 *v47; // x0
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  _QWORD *v50; // x0
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  const MethodInfo *v53; // x1
  UserGameEntity_o *SelfUserGame; // x19
  __int64 v55; // x8
  RecommendSupportData_o *v56; // x19
  const MethodInfo *v57; // x2
  __int64 v58; // x26
  ServantEntity_o *ServantEntity; // x27
  UserServantEntity_o *v60; // x8
  int32_t v61; // w28
  int32_t v62; // w25
  Il2CppObject *Master_object; // x0
  ServantLimitImageMaster_o *v64; // x22
  System_String_o *v65; // x21
  System_String_o *v66; // x23
  __int64 v67; // x24
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  __int64 v74; // x28
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  __int64 v81; // x28
  __int64 v82; // x27
  __int64 v83; // x28
  int32_t v84; // w0
  __int64 v85; // x8
  int32_t v86; // w26
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  __int64 v93; // x26
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  __int64 v100; // x25
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  __int64 v107; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *Servant_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v109; // x8
  int32_t v110; // w20
  int32_t v111; // w0
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  __int64 v118; // x20
  System_String_o *v119; // x20
  System_String_o *v120; // x22
  System_String_o *v121; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v123; // x25
  __int64 v124; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+50h] [xbp-150h] BYREF
  __int128 v126; // [xsp+70h] [xbp-130h]
  __int128 v127; // [xsp+80h] [xbp-120h]
  _BYTE v128[40]; // [xsp+90h] [xbp-110h] BYREF
  _OWORD v129[2]; // [xsp+C0h] [xbp-E0h] BYREF
  __int128 v130; // [xsp+E0h] [xbp-C0h]
  _OWORD v131[2]; // [xsp+F0h] [xbp-B0h] BYREF
  _BYTE v132[39]; // [xsp+110h] [xbp-90h] BYREF
  __int64 v133; // [xsp+138h] [xbp-68h]
  System_Nullable_T__o v134; // 0:x0.16
  System_Nullable_long__o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16

  v133 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4E73424 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1D0F0B4(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1D0F0B4(&Method_System_Nullable_long___ctor__);
    sub_1D0F0B4(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1D0F0B4(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1D0F0B4(&Method_System_Nullable_long__get_HasValue__);
    sub_1D0F0B4(&object___TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Rarity_TypeInfo);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__);
    sub_1D0F0B4(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12121/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1D0F0B4(&StringLiteral_12119/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1D0F0B4(&StringLiteral_12120/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1D0F0B4(&StringLiteral_12122/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4E73424 = 1;
  }
  memset(v132, 0, sizeof(v132));
  v130 = 0u;
  memset(v131, 0, 23);
  v7 = sub_1D0F300(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_126;
  *(_QWORD *)(v7 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.state != 2 )
    return;
  if ( offset < 0 )
  {
    Item = 0;
  }
  else
  {
    supportServantListViewManager = (__int64)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_126;
    Item = RecommendSupportServantSelectListViewManager__GetItem(
             (RecommendSupportServantSelectListViewManager_o *)supportServantListViewManager,
             offset,
             0);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v23 = (RecommendSupportServantSelectListViewItem_o **)(v7 + 24);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Item, v16, v17, v18, v19, v20, v21);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v23 )
      (*v23)->fields._IsSwapChoice_k__BackingField ^= 1u;
    v29 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v27 = (System_Reflection_MethodBase_o *)sub_1D0F098(v29, v29[4]);
    v28 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v23 )
      (*v23)->fields._IsSwapLock_k__BackingField ^= 1u;
    v26 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v27 = (System_Reflection_MethodBase_o *)sub_1D0F098(v26, v26[4]);
    v28 = 11;
LABEL_22:
    OverwriteAssetSoundName__PlaySystemSe(v27, v28, 0, 0);
    goto LABEL_23;
  }
  v32 = *v23;
  if ( tabModeKind != 3 )
  {
    if ( v32 )
    {
      if ( v32->fields._IsBase_k__BackingField )
      {
        v43 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v43 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v44 = (System_Reflection_MethodBase_o *)sub_1D0F098(v43, v43[4]);
        OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0, 0);
        RecommendSupportServantSelectListMenu__Init(this, v45);
        supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_126;
        v46 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
        supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !v46 )
          goto LABEL_126;
        RecommendSupportData__RemoveServantData(v46, *(_DWORD *)(supportServantListViewManager + 120), 0);
        v47 = (const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_76;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v32, v24) )
        goto LABEL_62;
      supportServantListViewManager = (__int64)*v23;
      if ( !*v23 )
        goto LABEL_126;
      if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v9) )
      {
        goto LABEL_62;
      }
      supportServantListViewManager = (__int64)*v23;
      if ( !*v23 )
        goto LABEL_126;
      if ( *(_BYTE *)(supportServantListViewManager + 174)
        || *(_BYTE *)(supportServantListViewManager + 240)
        || RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v9) )
      {
LABEL_62:
        v50 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v50 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v27 = (System_Reflection_MethodBase_o *)sub_1D0F098(v50, v50[4]);
        v28 = 2;
        goto LABEL_22;
      }
    }
    v51 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v51 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v52 = (System_Reflection_MethodBase_o *)sub_1D0F098(v51, v51[4]);
    OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0, 0);
    RecommendSupportServantSelectListMenu__Init(this, v53);
    if ( !*v23 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_126;
    if ( !SelfUserGame )
      goto LABEL_126;
    v55 = *(_QWORD *)(supportServantListViewManager + 112);
    if ( !v55 )
      goto LABEL_126;
    *(_QWORD *)(v55 + 64) = SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_126;
    v56 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
    supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v23 || !v56 )
      goto LABEL_126;
    RecommendSupportData__SetServantData(
      v56,
      *(_DWORD *)(supportServantListViewManager + 120),
      (*v23)->fields._UserServant_k__BackingField,
      0);
    v47 = (const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_76:
    supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance(v47);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v57);
      return;
    }
    goto LABEL_126;
  }
  if ( v32 && !v32->fields._IsEnabled_k__BackingField )
  {
    v48 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v48 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v49 = (System_Reflection_MethodBase_o *)sub_1D0F098(v48, v48[4]);
    OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0, 0);
    this->fields.state = 2;
LABEL_23:
    v30 = this->fields.supportServantListViewManager;
    v31 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)this,
      (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
      0);
    if ( v30 )
    {
      RecommendSupportServantSelectListViewManager__SetMode(v30, 2, v31, 0);
      return;
    }
LABEL_126:
    sub_1D0F30C(supportServantListViewManager, v9);
  }
  v33 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1D0F0CC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v34 = (System_Reflection_MethodBase_o *)sub_1D0F098(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0, 0);
  supportServantListViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !supportServantListViewManager )
    goto LABEL_126;
  v37 = *(_QWORD *)(supportServantListViewManager + 128);
  if ( !v37 )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v23, v35);
    return;
  }
  if ( *v23 )
  {
    UserServant_k__BackingField = (*v23)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_126;
    v39 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v40 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v134.fields.hasValue = v128;
    v134.fields.value = (Il2CppObject *)v129;
    memset(v128, 0, sizeof(v128));
    v126 = v39;
    v127 = v40;
    v129[0] = v39;
    v129[1] = v40;
    System_Nullable_ObscuredLong____ctor(
      v134,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v36);
    *(_QWORD *)((char *)v131 + 15) = *(_QWORD *)&v128[32];
    v130 = *(_OWORD *)&v128[1];
    v131[0] = *(_OWORD *)&v128[17];
    if ( v128[0] )
      v41 = v37;
    else
      v41 = 0;
    *(_OWORD *)v132 = *(_OWORD *)&v128[1];
    *(_OWORD *)&v132[16] = *(_OWORD *)&v128[17];
    *(_QWORD *)&v132[31] = *(_QWORD *)((char *)v131 + 15);
    if ( v128[0] )
    {
      *(_OWORD *)v128 = *(_OWORD *)&v132[7];
      *(_OWORD *)&v128[16] = *(_OWORD *)&v132[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v125 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v128;
      v135.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v125, 0);
      *(_QWORD *)&v135.fields.hasValue = v129;
      v129[0] = 0u;
      System_Nullable_long____ctor(v135, Method_System_Nullable_long___ctor__, v42);
      if ( LOBYTE(v129[0]) )
      {
        if ( v41 == *((_QWORD *)&v129[0] + 1) )
          goto LABEL_43;
      }
    }
  }
  else
  {
    v130 = 0u;
    memset(v131, 0, 23);
    memset(v132, 0, sizeof(v132));
  }
  supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_126;
  supportServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)supportServantListViewManager,
                                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_126;
  supportServantListViewManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
                                             v37,
                                             (const MethodInfo_353832C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !supportServantListViewManager )
    goto LABEL_126;
  v58 = supportServantListViewManager;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)supportServantListViewManager, -1, 0);
  supportServantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v58, 0, 0);
  if ( !supportServantListViewManager )
    goto LABEL_126;
  if ( !*v23 )
    goto LABEL_126;
  v60 = (*v23)->fields._UserServant_k__BackingField;
  if ( !v60 )
    goto LABEL_126;
  v61 = *(_DWORD *)(supportServantListViewManager + 24);
  supportServantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus(v60, 0, 0);
  if ( !supportServantListViewManager )
    goto LABEL_126;
  v62 = *(_DWORD *)(supportServantListViewManager + 24);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( *v23 )
  {
    v64 = (ServantLimitImageMaster_o *)Master_object;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12122/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12121/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v67 = sub_1D0F15C(object___TypeInfo, 6);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    supportServantListViewManager = (__int64)Rarity__getRarityType(v61, 0);
    if ( !v67 )
      goto LABEL_126;
    v74 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = sub_1D0F1F0(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v67 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v67 + 24) )
        goto LABEL_127;
      *(_QWORD *)(v67 + 32) = v74;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v67 + 32), v74, v68, v69, v70, v71, v72, v73);
      if ( !ServantEntity )
        goto LABEL_126;
      supportServantListViewManager = (__int64)ServantEntity__getClassName(ServantEntity, 0);
      v81 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = sub_1D0F1F0(
                                              supportServantListViewManager,
                                              *(_QWORD *)(*(_QWORD *)v67 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v67 + 24) <= 1u )
          goto LABEL_127;
        *(_QWORD *)(v67 + 40) = v81;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v67 + 40), v81, v75, v76, v77, v78, v79, v80);
        v83 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
        v82 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v136.fields.currentCryptoKey = v83;
        *(_QWORD *)&v136.fields.fakeValue = v82;
        v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v136, 0);
        v85 = *(_QWORD *)(v58 + 96);
        *(_QWORD *)&v137.fields.fakeValue = *(_QWORD *)(v58 + 104);
        v86 = v84;
        *(_QWORD *)&v137.fields.currentCryptoKey = v85;
        supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v137, 0);
        if ( !v64 )
          goto LABEL_126;
        supportServantListViewManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   v64,
                                                   v86,
                                                   supportServantListViewManager,
                                                   1,
                                                   1,
                                                   0);
        v93 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = sub_1D0F1F0(
                                                supportServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v67 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v67 + 24) <= 2u )
            goto LABEL_127;
          *(_QWORD *)(v67 + 48) = v93;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v67 + 48), v93, v87, v88, v89, v90, v91, v92);
          supportServantListViewManager = (__int64)Rarity__getRarityType(v62, 0);
          v100 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = sub_1D0F1F0(
                                                  supportServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v67 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v67 + 24) <= 3u )
              goto LABEL_127;
            *(_QWORD *)(v67 + 56) = v100;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v67 + 56), v100, v94, v95, v96, v97, v98, v99);
            if ( !*v23 )
              goto LABEL_126;
            supportServantListViewManager = (__int64)(*v23)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_126;
            supportServantListViewManager = (__int64)ServantEntity__getClassName(
                                                       (ServantEntity_o *)supportServantListViewManager,
                                                       0);
            v107 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = sub_1D0F1F0(
                                                    supportServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v67 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v67 + 24) <= 4u )
                goto LABEL_127;
              *(_QWORD *)(v67 + 64) = v107;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v67 + 64), v107, v101, v102, v103, v104, v105, v106);
              if ( !*v23 )
                goto LABEL_126;
              Servant_k__BackingField = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields._Servant_k__BackingField;
              if ( !Servant_k__BackingField )
                goto LABEL_126;
              supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                Servant_k__BackingField[1],
                                                0);
              if ( !*v23 )
                goto LABEL_126;
              v109 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields._UserServant_k__BackingField;
              if ( !v109 )
                goto LABEL_126;
              v110 = supportServantListViewManager;
              v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v109[6], 0);
              supportServantListViewManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                         v64,
                                                         v110,
                                                         v111,
                                                         1,
                                                         1,
                                                         0);
              v118 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = sub_1D0F1F0(
                                                      supportServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v67 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v67 + 24) > 5u )
                {
                  *(_QWORD *)(v67 + 72) = v118;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v67 + 72), v118, v112, v113, v114, v115, v116, v117);
                  v119 = System_String__Format_65604216(v66, (System_Object_array *)v67, 0);
                  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_12120/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                  v121 = LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v123 = (CommonConfirmDialog_ClickDelegate_o *)sub_1D0F300(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v123,
                    (Il2CppObject *)v7,
                    Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__,
                    0);
                  supportServantListViewManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    supportServantListViewManager = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_32086984(
                      (CommonUI_o *)Instance,
                      v65,
                      v119,
                      v120,
                      v121,
                      v123,
                      *(_DWORD *)(*(_QWORD *)(supportServantListViewManager + 184) + 508LL),
                      *(_DWORD *)(*(_QWORD *)(supportServantListViewManager + 184) + 520LL),
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
                    return;
                  }
                  goto LABEL_126;
                }
LABEL_127:
                sub_1D0F314(supportServantListViewManager);
              }
            }
          }
        }
      }
    }
    v124 = sub_1D0F330();
    sub_1D0F1DC(v124, 0);
  }
}


void RecommendSupportServantSelectListMenu__Open(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  int v6; // w20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportData_o *v8; // x21
  int32_t v9; // w22
  RecommendSupportServantSelectListViewManager_o *v10; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v11; // x21
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v13; // x20

  if ( (byte_4E73423 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1D0F0B4(&StringLiteral_12862/*"SelectIndex"*/);
    byte_4E73423 = 1;
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
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v6 = *((_DWORD *)gameObject + 30);
  if ( v6 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12862/*"SelectIndex"*/, -1, 0) )
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
  TitleInfoControl__setBackBtnSprite_41257740((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v8 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v9 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  if ( !supportServantListViewManager )
    goto LABEL_20;
  RecommendSupportServantSelectListViewManager__CreateList(
    supportServantListViewManager,
    v8,
    v9,
    *((EventUpValSetupInfo_o **)gameObject + 13),
    0);
  v10 = this->fields.supportServantListViewManager;
  v11 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0);
  if ( !v10
    || (RecommendSupportServantSelectListViewManager__SetMode(v10, 1, v11, 0),
        (gameObject = this->fields.supportServantListViewManager) == 0)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                       (RecommendSupportServantSelectListViewManager_o *)gameObject,
                       0),
        !scaleChangeTabSprite) )
  {
LABEL_20:
    sub_1D0F30C(gameObject, v4);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
  this->fields.state = 2;
  v13 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v13, 0);
}


void RecommendSupportServantSelectListMenu__PushRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21

  if ( (byte_4E7342E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7342E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_1D0F30C(Instance, v6);
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
  UILabel_o *explanationLabel; // x21
  __int64 *v19; // x8
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v21; // x21

  if ( (byte_4E73429 & 1) == 0 )
  {
    sub_1D0F0B4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1D0F0B4(&StringLiteral_11828/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1D0F0B4(&StringLiteral_17923/*"button_push_reg"*/);
    sub_1D0F0B4(&StringLiteral_17924/*"button_push_unreg"*/);
    sub_1D0F0B4(&StringLiteral_17909/*"button_allchoice_reg"*/);
    sub_1D0F0B4(&StringLiteral_17912/*"button_alllock_unreg"*/);
    sub_1D0F0B4(&StringLiteral_11826/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1D0F0B4(&StringLiteral_11827/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1D0F0B4(&StringLiteral_17925/*"button_select_reg"*/);
    sub_1D0F0B4(&StringLiteral_12749/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_1D0F0B4(&StringLiteral_17926/*"button_select_unreg"*/);
    sub_1D0F0B4(&StringLiteral_17911/*"button_alllock_reg"*/);
    sub_1D0F0B4(&StringLiteral_17910/*"button_allchoice_unreg"*/);
    byte_4E73429 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
    v6 = this->fields.normalTabButton;
    if ( !v6 )
      goto LABEL_48;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0);
    UICommonButton__SetColliderEnable(v6, enabled, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17926/*"button_select_unreg"*/ : &StringLiteral_17925/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_48;
    v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
    UICommonButton__SetColliderEnable(lockTabButton, v10, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17911/*"button_alllock_reg"*/ : &StringLiteral_17912/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v11, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_48;
    v13 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
    UICommonButton__SetColliderEnable(choiceTabButton, v13, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v14 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17909/*"button_allchoice_reg"*/ : &StringLiteral_17910/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v14, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0);
    pushTabButton = this->fields.pushTabButton;
    if ( !pushTabButton )
      goto LABEL_48;
    v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
    UICommonButton__SetColliderEnable(pushTabButton, v16, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    if ( this->fields.tabModeKind == 3 )
      v17 = &StringLiteral_17923/*"button_push_reg"*/;
    else
      v17 = &StringLiteral_17924/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v17, 0);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_12749/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11827/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11826/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11828/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_41:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v19, 0);
        if ( !explanationLabel )
          goto LABEL_48;
        UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0);
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
            0);
          supportServantListViewManager = this->fields.supportServantListViewManager;
          v21 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
          RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
            v21,
            (Il2CppObject *)this,
            (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
            0);
          if ( supportServantListViewManager )
          {
            RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v21, 0);
            return;
          }
LABEL_48:
          sub_1D0F30C(normalTabButton, *(_QWORD *)&modeKind);
        }
        RecommendSupportServantSelectListViewManager__SetMode_36055608(
          (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
          1,
          0);
        break;
      default:
        goto LABEL_43;
    }
  }
}


void RecommendSupportServantSelectListMenu__StatusRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x1
  System_Int64_array *v15; // x2
  bool v16; // w4
  bool v17; // w5
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *v25; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4E7342C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4E7342C = 1;
  }
  unlockList = 0;
  lockList = 0;
  v25 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( RecommendSupportServantSelectListViewManager__GetSwapChoiceList(
           supportServantListViewManager,
           &choiceList,
           &v25,
           0) )
    {
      this->fields.requestCallback = callback;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v24,
                                                                                          (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v15 = v25;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1D0F30C(supportServantListViewManager, callback);
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
           0) )
    {
      this->fields.requestCallback = callback;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v13,
                                                                                          (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4E73431 & 1) == 0 )
  {
    sub_1D0F0B4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_4E73431 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v4 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0);
  if ( !supportServantListViewManager )
    sub_1D0F30C(v5, v6);
  RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v4, 0);
}


void RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1D0F174(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B385A0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B38558;
}


System_IAsyncResult_o *RecommendSupportServantSelectListMenu_RequestCallbackFunc__BeginInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4E73432 & 1) == 0 )
  {
    sub_1D0F0B4(&bool_TypeInfo);
    byte_4E73432 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1D0F068(this, v9, callback, object);
}


void RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct RecommendSupportServantSelectListMenu_o *_4__this; // x20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_4E73433 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__);
    byte_4E73433 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_32087272(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_1D0F30C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v17 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1D0F300(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v17, 0);
}


void RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1D0F30C(this, method);
  RecommendSupportServantSelectListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}