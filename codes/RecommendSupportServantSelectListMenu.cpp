void RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2C7BB & 1) == 0 )
  {
    sub_1C93AD4(&BaseMenu_TypeInfo);
    byte_4D2C7BB = 1;
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
    sub_1C93D2C(0, method);
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

  if ( (byte_4D2C7B6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2C7B6 = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
LABEL_9:
      sub_1C93D2C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_35445256(supportServantListViewManager, 3, 0);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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

  if ( (byte_4D2C7BA & 1) == 0 )
  {
    sub_1C93AD4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_4D2C7BA = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, 0),
        v5 = this->fields.supportServantListViewManager,
        v6 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          0),
        !v5) )
  {
    sub_1C93D2C(supportServantListViewManager, result);
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
      sub_1C93D2C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_35445256(supportServantListViewManager, 3, 0);
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
      sub_1C93D2C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_35445256(supportServantListViewManager, 3, 0);
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
      sub_1C93D2C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_35445256(supportServantListViewManager, 3, 0);
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
      sub_1C93D2C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_35445256(supportServantListViewManager, 3, 0);
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
    sub_1C93A78(p_requestCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4D2C7AD & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_12664/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_4D2C7AD = 1;
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
                                                                                      (System_String_o *)StringLiteral_12664/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                                      0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0),
        (normalTabButton = this->fields.normalTabButton) == 0) )
  {
LABEL_9:
    sub_1C93D2C(supportServantListViewManager, method);
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
    sub_1C93D2C(0, method);
  RecommendSupportServantSelectListViewManager__SetMode_35445256(supportServantListViewManager, 3, 0);
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

  if ( (byte_4D2C7B5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    sub_1C93AD4(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C93AD4(&StringLiteral_12775/*"SelectIndex"*/);
    byte_4D2C7B5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12775/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0) )
    {
      sub_1C93D2C(Instance, v6);
    }
    ListViewManager__SetScrollBarValue(Instance, 0);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C7B2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    sub_1C93AD4(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C7B2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C7B1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    sub_1C93AD4(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C7B1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C7B0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    sub_1C93AD4(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C7B0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C7B3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    sub_1C93AD4(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C7B3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C7B8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    byte_4D2C7B8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
      sub_1C93D2C(supportServantListViewManager, v5);
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
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
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
  const MethodInfo_39A11A8 *v36; // x3
  int64_t dropList; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v39; // q0
  __int128 v40; // q1
  int64_t v41; // x24
  const MethodInfo_399FF98 *v42; // x3
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  const MethodInfo *v45; // x1
  RecommendSupportData_o *clipRange; // x19
  const MethodInfo_3AC52FC *v47; // x0
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  _QWORD *v50; // x0
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  const MethodInfo *v53; // x1
  UserGameEntity_o *SelfUserGame; // x19
  struct ListViewObject_o *v55; // x8
  RecommendSupportData_o *v56; // x19
  const MethodInfo *v57; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v62; // x27
  UserServantEntity_o *v63; // x8
  int32_t m_CancellationTokenSource; // w28
  int32_t v65; // w26
  Il2CppObject *Master_object; // x0
  ServantLimitImageMaster_o *v67; // x22
  System_String_o *v68; // x23
  __int64 v69; // x24
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  RecommendSupportServantSelectListViewManager_o *v76; // x28
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  RecommendSupportServantSelectListViewManager_o *v83; // x27
  void *v84; // x27
  Il2CppClass *v85; // x28
  int32_t v86; // w0
  Il2CppClass *v87; // x8
  int32_t v88; // w25
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  RecommendSupportServantSelectListViewManager_o *v95; // x25
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  RecommendSupportServantSelectListViewManager_o *v102; // x25
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  RecommendSupportServantSelectListViewManager_o *v109; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v110; // x8
  int32_t v111; // w20
  int32_t v112; // w0
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  RecommendSupportServantSelectListViewManager_o *v119; // x20
  System_String_o *v120; // x20
  System_String_o *v121; // x22
  System_String_o *v122; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v124; // x25
  __int64 v125; // x0
  System_String_o *title; // [xsp+48h] [xbp-158h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+50h] [xbp-150h] BYREF
  __int128 v128; // [xsp+70h] [xbp-130h]
  __int128 v129; // [xsp+80h] [xbp-120h]
  _BYTE v130[40]; // [xsp+90h] [xbp-110h] BYREF
  _OWORD v131[2]; // [xsp+C0h] [xbp-E0h] BYREF
  __int128 v132; // [xsp+E0h] [xbp-C0h]
  _OWORD v133[2]; // [xsp+F0h] [xbp-B0h] BYREF
  _BYTE v134[39]; // [xsp+110h] [xbp-90h] BYREF
  __int64 v135; // [xsp+138h] [xbp-68h]
  System_Nullable_T__o v136; // 0:x0.16
  System_Nullable_long__o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16

  v135 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4D2C7AF & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_long___ctor__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_long__get_HasValue__);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Rarity_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__);
    sub_1C93AD4(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_12037/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_12036/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_12038/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4D2C7AF = 1;
  }
  memset(v134, 0, sizeof(v134));
  v132 = 0u;
  memset(v133, 0, 23);
  v7 = sub_1C93D20(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_129;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.state != 2 )
    return;
  if ( offset < 0 )
  {
    Item = 0;
  }
  else
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_129;
    Item = RecommendSupportServantSelectListViewManager__GetItem(supportServantListViewManager, offset, 0);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v23 = (RecommendSupportServantSelectListViewItem_o **)(v7 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Item, v16, v17, v18, v19, v20, v21);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v23 )
      (*v23)->fields._IsSwapChoice_k__BackingField ^= 1u;
    v29 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v27 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v29, v29[4]);
    v28 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v23 )
      (*v23)->fields._IsSwapLock_k__BackingField ^= 1u;
    v26 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v27 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v26, v26[4]);
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
          v43 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v44 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v43, v43[4]);
        OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0, 0);
        RecommendSupportServantSelectListMenu__Init(this, v45);
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_129;
        clipRange = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !clipRange )
          goto LABEL_129;
        RecommendSupportData__RemoveServantData(
          clipRange,
          (int32_t)supportServantListViewManager->fields.dragParentObject,
          0);
        v47 = (const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_76;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v32, v24) )
        goto LABEL_62;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v23;
      if ( !*v23 )
        goto LABEL_129;
      if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v9) )
      {
        goto LABEL_62;
      }
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v23;
      if ( !*v23 )
        goto LABEL_129;
      if ( *(&supportServantListViewManager->fields.isLoop + 2)
        || LOBYTE(supportServantListViewManager->fields.bottomItem)
        || RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v9) )
      {
LABEL_62:
        v50 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v50 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v27 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v50, v50[4]);
        v28 = 2;
        goto LABEL_22;
      }
    }
    v51 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v51 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v52 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v51, v51[4]);
    OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0, 0);
    RecommendSupportServantSelectListMenu__Init(this, v53);
    if ( !*v23 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_129;
    if ( !SelfUserGame )
      goto LABEL_129;
    v55 = (struct ListViewObject_o *)supportServantListViewManager->fields.clipRange;
    if ( !v55 )
      goto LABEL_129;
    v55->fields.mCollider = (struct UnityEngine_Collider_o *)SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_129;
    v56 = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v23 || !v56 )
      goto LABEL_129;
    RecommendSupportData__SetServantData(
      v56,
      (int32_t)supportServantListViewManager->fields.dragParentObject,
      (*v23)->fields._UserServant_k__BackingField,
      0);
    v47 = (const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_76:
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance(v47);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v57);
      return;
    }
    goto LABEL_129;
  }
  if ( v32 && !v32->fields._IsEnabled_k__BackingField )
  {
    v48 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v48 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v49 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v48, v48[4]);
    OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0, 0);
    this->fields.state = 2;
LABEL_23:
    v30 = this->fields.supportServantListViewManager;
    v31 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
LABEL_129:
    sub_1C93D2C(supportServantListViewManager, v9);
  }
  v33 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1C93AEC(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v34 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0, 0);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  dropList = (int64_t)supportServantListViewManager->fields.dropList;
  if ( !dropList )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v23, v35);
    return;
  }
  if ( *v23 )
  {
    UserServant_k__BackingField = (*v23)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_129;
    v39 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v40 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v136.fields.hasValue = v130;
    v136.fields.value = (Il2CppObject *)v131;
    memset(v130, 0, sizeof(v130));
    v128 = v39;
    v129 = v40;
    v131[0] = v39;
    v131[1] = v40;
    System_Nullable_ObscuredLong____ctor(
      v136,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v36);
    *(_QWORD *)((char *)v133 + 15) = *(_QWORD *)&v130[32];
    v132 = *(_OWORD *)&v130[1];
    v133[0] = *(_OWORD *)&v130[17];
    if ( v130[0] )
      v41 = dropList;
    else
      v41 = 0;
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
      v137.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v127, 0);
      *(_QWORD *)&v137.fields.hasValue = v131;
      v131[0] = 0u;
      System_Nullable_long____ctor(v137, Method_System_Nullable_long___ctor__, v42);
      if ( LOBYTE(v131[0]) )
      {
        if ( v41 == *((_QWORD *)&v131[0] + 1) )
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
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
             dropList,
             (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_129;
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v138.fields.currentCryptoKey = klass;
  *(_QWORD *)&v138.fields.fakeValue = monitor;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                                      v138,
                                                                                      0);
  if ( !v59 )
    goto LABEL_129;
  v62 = DataMasterBase_object__object__int___GetEntity(
          v59,
          (int32_t)supportServantListViewManager,
          (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                                      (UserServantEntity_o *)Entity,
                                                                                      0,
                                                                                      0);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  if ( !*v23 )
    goto LABEL_129;
  v63 = (*v23)->fields._UserServant_k__BackingField;
  if ( !v63 )
    goto LABEL_129;
  m_CancellationTokenSource = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                                      v63,
                                                                                      0,
                                                                                      0);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  v65 = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( *v23 )
  {
    v67 = (ServantLimitImageMaster_o *)Master_object;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    title = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_12037/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v69 = sub_1C93B7C(object___TypeInfo, 6);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(
                                                                                        m_CancellationTokenSource,
                                                                                        0);
    if ( !v69 )
      goto LABEL_129;
    v76 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C93C10(
                                                                                              supportServantListViewManager,
                                                                                              *(_QWORD *)(*(_QWORD *)v69 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v69 + 24) )
        goto LABEL_130;
      *(_QWORD *)(v69 + 32) = v76;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v69 + 32), (int32_t)v76, v70, v71, v72, v73, v74, v75);
      if ( !v62 )
        goto LABEL_129;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                          (ServantEntity_o *)v62,
                                                                                          0);
      v83 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C93C10(
                                                                                                supportServantListViewManager,
                                                                                                *(_QWORD *)(*(_QWORD *)v69 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v69 + 24) <= 1u )
          goto LABEL_130;
        *(_QWORD *)(v69 + 40) = v83;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v69 + 40), (int32_t)v83, v77, v78, v79, v80, v81, v82);
        v85 = Entity[5].klass;
        v84 = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v139.fields.currentCryptoKey = v85;
        *(_QWORD *)&v139.fields.fakeValue = v84;
        v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v139, 0);
        v87 = Entity[6].klass;
        *(_QWORD *)&v140.fields.fakeValue = Entity[6].monitor;
        v88 = v86;
        *(_QWORD *)&v140.fields.currentCryptoKey = v87;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                                            v140,
                                                                                            0);
        if ( !v67 )
          goto LABEL_129;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                            v67,
                                                                                            v88,
                                                                                            (int32_t)supportServantListViewManager,
                                                                                            1,
                                                                                            0);
        v95 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C93C10(
                                                                                                  supportServantListViewManager,
                                                                                                  *(_QWORD *)(*(_QWORD *)v69 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v69 + 24) <= 2u )
            goto LABEL_130;
          *(_QWORD *)(v69 + 48) = v95;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v69 + 48), (int32_t)v95, v89, v90, v91, v92, v93, v94);
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(
                                                                                              v65,
                                                                                              0);
          v102 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C93C10(
                                                                                                    supportServantListViewManager,
                                                                                                    *(_QWORD *)(*(_QWORD *)v69 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v69 + 24) <= 3u )
              goto LABEL_130;
            *(_QWORD *)(v69 + 56) = v102;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v69 + 56), (int32_t)v102, v96, v97, v98, v99, v100, v101);
            if ( !*v23 )
              goto LABEL_129;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v23)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_129;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                                (ServantEntity_o *)supportServantListViewManager,
                                                                                                0);
            v109 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C93C10(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v69 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v69 + 24) <= 4u )
                goto LABEL_130;
              *(_QWORD *)(v69 + 64) = v109;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v69 + 64), (int32_t)v109, v103, v104, v105, v106, v107, v108);
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v23;
              if ( !*v23 )
                goto LABEL_129;
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewItem__get_SvtId(
                                                                                                  (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
                                                                                                  v9);
              if ( !*v23 )
                goto LABEL_129;
              v110 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields._UserServant_k__BackingField;
              if ( !v110 )
                goto LABEL_129;
              v111 = (int)supportServantListViewManager;
              v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v110[6], 0);
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                                  v67,
                                                                                                  v111,
                                                                                                  v112,
                                                                                                  1,
                                                                                                  0);
              v119 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C93C10(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v69 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v69 + 24) > 5u )
                {
                  *(_QWORD *)(v69 + 72) = v119;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)(v69 + 72),
                    (int32_t)v119,
                    v113,
                    v114,
                    v115,
                    v116,
                    v117,
                    v118);
                  v120 = System_String__Format_64467168(v68, (System_Object_array *)v69, 0);
                  v121 = LocalizationManager__Get((System_String_o *)StringLiteral_12036/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                  v122 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v124 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v124,
                    (Il2CppObject *)v7,
                    Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__,
                    0);
                  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)BalanceConfig_TypeInfo;
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_31581040(
                      (CommonUI_o *)Instance,
                      title,
                      v120,
                      v121,
                      v122,
                      v124,
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
                      0);
                    return;
                  }
                  goto LABEL_129;
                }
LABEL_130:
                sub_1C93D34(supportServantListViewManager);
              }
            }
          }
        }
      }
    }
    v125 = sub_1C93D50();
    sub_1C93BFC(v125, 0);
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

  if ( (byte_4D2C7AE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C93AD4(&StringLiteral_12775/*"SelectIndex"*/);
    byte_4D2C7AE = 1;
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
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v6 = *((_DWORD *)gameObject + 30);
  if ( v6 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12775/*"SelectIndex"*/, -1, 0) )
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
  TitleInfoControl__setBackBtnSprite_40620696((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v8 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v9 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  v11 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C93D2C(gameObject, v4);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
  this->fields.state = 2;
  v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v13, 0);
}


void RecommendSupportServantSelectListMenu__PushRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *UserServant_k__BackingField; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t m_CachedPtr; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
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
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4D2C7B9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C7B9 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  UserServant_k__BackingField = selectItem->fields._UserServant_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !UserServant_k__BackingField )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v14 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  writeMasterDataThread = v7->fields.writeMasterDataThread;
  p_fields = &UserServant_k__BackingField->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v43, 0);
  v18 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                      UserServant_k__BackingField->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          UserServant_k__BackingField->fields.dispLimitCount,
          0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          UserServant_k__BackingField->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          UserServant_k__BackingField->fields.iconLimitCount,
          0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          UserServant_k__BackingField->fields.portraitLimitCount,
          0);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServant_k__BackingField, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                  UserServant_k__BackingField->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                       UserServant_k__BackingField->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          UserServant_k__BackingField->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C93D2C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    context == (struct System_Threading_SynchronizationContext_o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_Thread_o *)v39,
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

  if ( (byte_4D2C7B4 & 1) == 0 )
  {
    sub_1C93AD4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C93AD4(&StringLiteral_11745/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C93AD4(&StringLiteral_17792/*"button_push_reg"*/);
    sub_1C93AD4(&StringLiteral_17793/*"button_push_unreg"*/);
    sub_1C93AD4(&StringLiteral_17778/*"button_allchoice_reg"*/);
    sub_1C93AD4(&StringLiteral_17781/*"button_alllock_unreg"*/);
    sub_1C93AD4(&StringLiteral_11743/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C93AD4(&StringLiteral_11744/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C93AD4(&StringLiteral_17794/*"button_select_reg"*/);
    sub_1C93AD4(&StringLiteral_12664/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_17795/*"button_select_unreg"*/);
    sub_1C93AD4(&StringLiteral_17780/*"button_alllock_reg"*/);
    sub_1C93AD4(&StringLiteral_17779/*"button_allchoice_unreg"*/);
    byte_4D2C7B4 = 1;
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
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17795/*"button_select_unreg"*/ : &StringLiteral_17794/*"button_select_reg"*/);
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
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17780/*"button_alllock_reg"*/ : &StringLiteral_17781/*"button_alllock_unreg"*/);
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
    v14 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17778/*"button_allchoice_reg"*/ : &StringLiteral_17779/*"button_allchoice_unreg"*/);
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
      v17 = &StringLiteral_17792/*"button_push_reg"*/;
    else
      v17 = &StringLiteral_17793/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v17, 0);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_12664/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11744/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11743/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11745/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
          v21 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
          sub_1C93D2C(normalTabButton, *(_QWORD *)&modeKind);
        }
        RecommendSupportServantSelectListViewManager__SetMode_35445256(
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

  if ( (byte_4D2C7B7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2C7B7 = 1;
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v24,
                                                                                          (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v15 = v25;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C93D2C(supportServantListViewManager, callback);
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v13,
                                                                                          (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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

  if ( (byte_4D2C7BC & 1) == 0 )
  {
    sub_1C93AD4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_4D2C7BC = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v4 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0);
  if ( !supportServantListViewManager )
    sub_1C93D2C(v5, v6);
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC3A74;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC3A2C;
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
  if ( (byte_4D2C7BD & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2C7BD = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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

  if ( (byte_4D2C7BE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__);
    byte_4D2C7BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31581328(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_1C93D2C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v17 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C93D20(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C93D2C(this, method);
  RecommendSupportServantSelectListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}