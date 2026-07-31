void RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934429 & 1) == 0 )
  {
    sub_21FFC50(&BaseMenu_TypeInfo);
    byte_5934429 = 1;
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
    sub_21FFECC(0, method);
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

  if ( (byte_5934424 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_5934424 = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
LABEL_9:
      sub_21FFECC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_41663924(supportServantListViewManager, 3, 0);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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

  if ( (byte_5934428 & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_5934428 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, 0),
        v5 = this->fields.supportServantListViewManager,
        v6 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          0),
        !v5) )
  {
    sub_21FFECC(supportServantListViewManager, result);
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
      sub_21FFECC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_41663924(supportServantListViewManager, 3, 0);
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
      sub_21FFECC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_41663924(supportServantListViewManager, 3, 0);
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
      sub_21FFECC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_41663924(supportServantListViewManager, 3, 0);
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
      sub_21FFECC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_41663924(supportServantListViewManager, 3, 0);
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
    sub_21FFBF4(p_requestCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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

  if ( (byte_593441B & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13070/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_593441B = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportServantSelectListViewManager__DestroyList(supportServantListViewManager, 0);
  v6 = LocalizationManager_TypeInfo;
  explanationLabel = this->fields.explanationLabel;
  this->fields.state = 0;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, v4, v5);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_13070/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                                      0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0),
        (normalTabButton = this->fields.normalTabButton) == 0) )
  {
LABEL_9:
    sub_21FFECC(supportServantListViewManager, method);
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
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_21FFECC(0, method);
  RecommendSupportServantSelectListViewManager__SetMode_41663924(supportServantListViewManager, 3, 0);
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

  if ( (byte_5934423 & 1) == 0 )
  {
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    sub_21FFC50(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_21FFC50(&StringLiteral_13186/*"SelectIndex"*/);
    byte_5934423 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_13186/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0) )
    {
      sub_21FFECC(Instance, v6);
    }
    ListViewManager__SetScrollBarValue(Instance, 0);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_5934420 & 1) == 0 )
  {
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    sub_21FFC50(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_5934420 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_593441F & 1) == 0 )
  {
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    sub_21FFC50(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_593441F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_593441E & 1) == 0 )
  {
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    sub_21FFC50(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_593441E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_5934421 & 1) == 0 )
  {
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    sub_21FFC50(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_5934421 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_5934426 & 1) == 0 )
  {
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    byte_5934426 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
      sub_21FFECC(supportServantListViewManager, v5);
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
  System_String_o *v16; // x2
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
  RecommendSupportServantSelectListViewManager_o *v31; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v32; // x21
  System_Reflection_MethodBase_o *v33; // x0
  const MethodInfo *v34; // x2
  const MethodInfo_45B1ABC *v35; // x3
  int64_t v36; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v38; // q2
  __int64 v39; // x1
  __int64 v40; // x2
  const MethodInfo_45B0918 *v41; // x3
  System_Reflection_MethodBase_o *v42; // x0
  const MethodInfo *v43; // x1
  RecommendSupportData_o *v44; // x19
  System_Reflection_MethodBase_o *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  const MethodInfo *v47; // x1
  UserGameEntity_o *SelfUserGame; // x19
  __int64 v49; // x8
  const MethodInfo_476E8C0 *v50; // x0
  RecommendSupportData_o *v51; // x19
  const MethodInfo *v52; // x2
  __int64 v53; // x25
  ServantEntity_o *ServantEntity; // x27
  int32_t v55; // w28
  __int64 v56; // x2
  int32_t v57; // w26
  Il2CppObject *Master_object; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  ServantLimitImageMaster_o *v61; // x22
  System_String_o *v62; // x20
  System_String_o *v63; // x23
  __int64 v64; // x1
  __int64 v65; // x2
  System_Object_array *v66; // x24
  __int64 v67; // x28
  System_String_o *ClassName; // x28
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x27
  __int64 v72; // x28
  int32_t v73; // w0
  __int64 v74; // x8
  int32_t v75; // w25
  System_String_o *LimitCountSealedServantName; // x25
  System_String_o *RarityType; // x25
  System_String_o *v78; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *Servant_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v80; // x8
  int32_t v81; // w21
  int32_t v82; // w0
  System_String_o *v83; // x21
  System_String_o *v84; // x21
  System_String_o *v85; // x22
  System_String_o *v86; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v88; // x25
  __int64 v89; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+50h] [xbp-150h] BYREF
  __int128 v91; // [xsp+70h] [xbp-130h]
  __int128 v92; // [xsp+80h] [xbp-120h]
  _OWORD v93[3]; // [xsp+90h] [xbp-110h] BYREF
  _OWORD v94[2]; // [xsp+C0h] [xbp-E0h] BYREF
  __int128 v95; // [xsp+E0h] [xbp-C0h]
  _OWORD v96[2]; // [xsp+F0h] [xbp-B0h] BYREF
  _BYTE v97[39]; // [xsp+110h] [xbp-90h] BYREF
  __int64 v98; // [xsp+138h] [xbp-68h]
  System_Nullable_T__o v99; // 0:x0.16
  System_Nullable_long__o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16

  v98 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_593441D & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_long___ctor__);
    sub_21FFC50(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_21FFC50(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_long__get_HasValue__);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__);
    sub_21FFC50(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
    sub_21FFC50(&StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_593441D = 1;
  }
  v95 = 0u;
  memset(v96, 0, 23);
  memset(v97, 0, sizeof(v97));
  v7 = sub_21FFEBC(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_95;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
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
               0);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v23 = (RecommendSupportServantSelectListViewItem_o **)(v7 + 24);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)Item, v16, v17, v18, v19, v20, v21);
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
            v30 = (_QWORD *)sub_21FFC68(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
          v28 = (System_Reflection_MethodBase_o *)sub_21FFC34(v30, v30[4]);
          v29 = 0;
          goto LABEL_23;
        }
        if ( tabModeKind == 1 )
        {
          if ( v26 )
            v26->fields._IsSwapLock_k__BackingField ^= 1u;
          v27 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
            v27 = (_QWORD *)sub_21FFC68(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
          v28 = (System_Reflection_MethodBase_o *)sub_21FFC34(v27, v27[4]);
          v29 = 11;
          goto LABEL_23;
        }
        if ( v26 )
        {
          if ( v26->fields._IsBase_k__BackingField )
          {
            v42 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
            OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0, 0);
            RecommendSupportServantSelectListMenu__Init(this, v43);
            supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
            if ( !supportServantListViewManager )
              goto LABEL_95;
            v44 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
            supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
            if ( !supportServantListViewManager || !v44 )
              goto LABEL_95;
            RecommendSupportData__RemoveServantData(v44, *(_DWORD *)(supportServantListViewManager + 120), 0);
LABEL_62:
            supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
            if ( !supportServantListViewManager )
              goto LABEL_95;
            RecommendSupportSelectControl__SetState(
              (RecommendSupportSelectControl_o *)supportServantListViewManager,
              0,
              v52);
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
            v28 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
            v29 = 2;
LABEL_23:
            OverwriteAssetSoundName__PlaySystemSe(v28, v29, 0, 0);
            v31 = this->fields.supportServantListViewManager;
            goto LABEL_24;
          }
        }
        v46 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0, 0);
        RecommendSupportServantSelectListMenu__Init(this, v47);
        if ( !*v23 )
          return;
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_95;
        if ( !SelfUserGame )
          goto LABEL_95;
        v49 = *(_QWORD *)(supportServantListViewManager + 112);
        if ( !v49 )
          goto LABEL_95;
        v50 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        *(_QWORD *)(v49 + 64) = SelfUserGame->fields.pushUserSvtId;
        supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance(v50);
        if ( !supportServantListViewManager )
          goto LABEL_95;
        v51 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
        supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !*v23 || !v51 )
          goto LABEL_95;
        RecommendSupportData__SetServantData(
          v51,
          *(_DWORD *)(supportServantListViewManager + 120),
          (*v23)->fields._UserServant_k__BackingField,
          0);
        goto LABEL_62;
      }
      if ( v26 && !v26->fields._IsEnabled_k__BackingField )
      {
        v45 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        OverwriteAssetSoundName__PlaySystemSe(v45, 2, 0, 0);
        v31 = this->fields.supportServantListViewManager;
        this->fields.state = 2;
LABEL_24:
        v32 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v32,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          0);
        if ( v31 )
        {
          RecommendSupportServantSelectListViewManager__SetMode(v31, 2, v32, 0);
          return;
        }
LABEL_95:
        sub_21FFECC(supportServantListViewManager, v9);
      }
      v33 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0);
      supportServantListViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      v36 = *(_QWORD *)(supportServantListViewManager + 128);
      if ( !v36 )
      {
LABEL_37:
        RecommendSupportServantSelectListMenu__PushRequest(this, *v23, v34);
        return;
      }
      if ( *v23 )
      {
        UserServant_k__BackingField = (*v23)->fields._UserServant_k__BackingField;
        if ( !UserServant_k__BackingField )
          goto LABEL_95;
        v38 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
        *(_QWORD *)&v99.fields.hasValue = v93;
        v99.fields.value = (Il2CppObject *)v94;
        v91 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
        v92 = v38;
        v94[0] = v91;
        v94[1] = v38;
        memset(v93, 0, 40);
        System_Nullable_ObscuredLong____ctor(
          v99,
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
          v35);
        *(_QWORD *)((char *)v96 + 15) = *(_QWORD *)&v93[2];
        v95 = *(_OWORD *)((char *)v93 + 1);
        v96[0] = *(_OWORD *)((char *)&v93[1] + 1);
        *(_OWORD *)v97 = *(_OWORD *)((char *)v93 + 1);
        *(_OWORD *)&v97[16] = *(_OWORD *)((char *)&v93[1] + 1);
        *(_QWORD *)&v97[31] = *(_QWORD *)((char *)v96 + 15);
        if ( LOBYTE(v93[0]) )
        {
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39, v40);
          v90 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)&v97[7];
          v100.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v90, 0);
          *(_QWORD *)&v100.fields.hasValue = v93;
          v93[0] = 0u;
          System_Nullable_long____ctor(v100, Method_System_Nullable_long___ctor__, v41);
          if ( LOBYTE(v93[0]) )
          {
            if ( v36 == *((_QWORD *)&v93[0] + 1) )
              goto LABEL_37;
          }
        }
      }
      else
      {
        v95 = 0u;
        memset(v96, 0, 23);
        memset(v97, 0, sizeof(v97));
      }
      supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      supportServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)supportServantListViewManager,
                                                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      supportServantListViewManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
                                                 v36,
                                                 (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      v53 = supportServantListViewManager;
      ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)supportServantListViewManager, -1, 0);
      supportServantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v53, 0, 0);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      if ( !*v23 )
        goto LABEL_95;
      if ( !(*v23)->fields._UserServant_k__BackingField )
        goto LABEL_95;
      v55 = *(_DWORD *)(supportServantListViewManager + 24);
      supportServantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus(
                                                 (*v23)->fields._UserServant_k__BackingField,
                                                 0,
                                                 0);
      if ( !supportServantListViewManager )
        goto LABEL_95;
      v57 = *(_DWORD *)(supportServantListViewManager + 24);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v56);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      if ( *v23 )
      {
        v61 = (ServantLimitImageMaster_o *)Master_object;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59, v60);
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
        v66 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 6);
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v64, v65);
        supportServantListViewManager = (__int64)Rarity__getRarityType(v55, 0);
        if ( !v66 )
          goto LABEL_95;
        v67 = supportServantListViewManager;
        sub_1FEB8A8(v66, supportServantListViewManager);
        supportServantListViewManager = sub_1FEB274(v66, 0, v67);
        if ( !ServantEntity )
          goto LABEL_95;
        ClassName = ServantEntity__getClassName(ServantEntity, 0);
        sub_1FEB8A8(v66, ClassName);
        sub_1FEB274(v66, 1, ClassName);
        v72 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
        v71 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v69, v70);
        *(_QWORD *)&v101.fields.currentCryptoKey = v72;
        *(_QWORD *)&v101.fields.fakeValue = v71;
        v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v101, 0);
        v74 = *(_QWORD *)(v53 + 96);
        *(_QWORD *)&v102.fields.fakeValue = *(_QWORD *)(v53 + 104);
        v75 = v73;
        *(_QWORD *)&v102.fields.currentCryptoKey = v74;
        supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v102, 0);
        if ( !v61 )
          goto LABEL_95;
        LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                        v61,
                                        v75,
                                        supportServantListViewManager,
                                        1,
                                        1,
                                        0);
        sub_1FEB8A8(v66, LimitCountSealedServantName);
        sub_1FEB274(v66, 2, LimitCountSealedServantName);
        RarityType = Rarity__getRarityType(v57, 0);
        sub_1FEB8A8(v66, RarityType);
        supportServantListViewManager = sub_1FEB274(v66, 3, RarityType);
        if ( !*v23 )
          goto LABEL_95;
        supportServantListViewManager = (__int64)(*v23)->fields._Servant_k__BackingField;
        if ( !supportServantListViewManager )
          goto LABEL_95;
        v78 = ServantEntity__getClassName((ServantEntity_o *)supportServantListViewManager, 0);
        sub_1FEB8A8(v66, v78);
        supportServantListViewManager = sub_1FEB274(v66, 4, v78);
        if ( !*v23 )
          goto LABEL_95;
        Servant_k__BackingField = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields._Servant_k__BackingField;
        if ( !Servant_k__BackingField )
          goto LABEL_95;
        supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                          Servant_k__BackingField[1],
                                          0);
        if ( !*v23 )
          goto LABEL_95;
        v80 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields._UserServant_k__BackingField;
        if ( !v80 )
          goto LABEL_95;
        v81 = supportServantListViewManager;
        v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v80[6], 0);
        v83 = ServantLimitImageMaster__GetLimitCountSealedServantName(v61, v81, v82, 1, 1, 0);
        sub_1FEB8A8(v66, v83);
        sub_1FEB274(v66, 5, v83);
        v84 = System_String__Format_75484712(v63, v66, 0);
        v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
        v86 = LocalizationManager__Get((System_String_o *)StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v88 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v88,
          (Il2CppObject *)v7,
          Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__,
          0);
        supportServantListViewManager = (__int64)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v89);
        if ( !Instance )
          goto LABEL_95;
        CommonUI__OpenConfirmDialog_37292168(
          (CommonUI_o *)Instance,
          v62,
          v84,
          v85,
          v86,
          v88,
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  int v6; // w20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportData_o *v8; // x21
  int32_t v9; // w22
  RecommendSupportServantSelectListViewManager_o *v10; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v11; // x21
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_c *v13; // x0
  System_Action_o *v14; // x20

  if ( (byte_593441C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_21FFC50(&StringLiteral_13186/*"SelectIndex"*/);
    byte_593441C = 1;
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
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v6 = *((_DWORD *)gameObject + 30);
  if ( v6 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_13186/*"SelectIndex"*/, -1, 0) )
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
  TitleInfoControl__setBackBtnSprite_46820572((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v8 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v9 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  v11 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
    sub_21FFECC(gameObject, v4);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
  v13 = System_Action_TypeInfo;
  this->fields.state = 2;
  v14 = (System_Action_o *)sub_21FFEBC(v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v14, 0);
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

  if ( (byte_5934427 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5934427 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_21FFECC(Instance, v6);
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
  __int64 v18; // x2
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x21
  __int64 *v21; // x8
  int32_t state; // w9
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v24; // x21

  if ( (byte_5934422 & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_21FFC50(&StringLiteral_12143/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_21FFC50(&StringLiteral_18393/*"button_push_reg"*/);
    sub_21FFC50(&StringLiteral_18394/*"button_push_unreg"*/);
    sub_21FFC50(&StringLiteral_18379/*"button_allchoice_reg"*/);
    sub_21FFC50(&StringLiteral_18382/*"button_alllock_unreg"*/);
    sub_21FFC50(&StringLiteral_12141/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_21FFC50(&StringLiteral_12142/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_21FFC50(&StringLiteral_18395/*"button_select_reg"*/);
    sub_21FFC50(&StringLiteral_13070/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_18396/*"button_select_unreg"*/);
    sub_21FFC50(&StringLiteral_18381/*"button_alllock_reg"*/);
    sub_21FFC50(&StringLiteral_18380/*"button_allchoice_unreg"*/);
    byte_5934422 = 1;
  }
  if ( this->fields.tabModeKind == modeKind )
    return;
  normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
  this->fields.tabModeKind = modeKind;
  if ( !normalTabButton )
    goto LABEL_52;
  UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
  v6 = this->fields.normalTabButton;
  if ( !v6 )
    goto LABEL_52;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0);
  UICommonButton__SetColliderEnable(v6, enabled, 1, 0);
  normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
  if ( !normalTabButton )
    goto LABEL_52;
  v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_18396/*"button_select_unreg"*/ : &StringLiteral_18395/*"button_select_reg"*/);
  UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
  normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !normalTabButton )
    goto LABEL_52;
  UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_52;
  v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
  UICommonButton__SetColliderEnable(lockTabButton, v10, 1, 0);
  normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !normalTabButton )
    goto LABEL_52;
  v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_18381/*"button_alllock_reg"*/ : &StringLiteral_18382/*"button_alllock_unreg"*/);
  UISprite__set_spriteName((UISprite_o *)normalTabButton, *v11, 0);
  normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !normalTabButton )
    goto LABEL_52;
  UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_52;
  v13 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
  UICommonButton__SetColliderEnable(choiceTabButton, v13, 1, 0);
  normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !normalTabButton )
    goto LABEL_52;
  v14 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_18379/*"button_allchoice_reg"*/ : &StringLiteral_18380/*"button_allchoice_unreg"*/);
  UISprite__set_spriteName((UISprite_o *)normalTabButton, *v14, 0);
  normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !normalTabButton )
    goto LABEL_52;
  UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_52;
  v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
  UICommonButton__SetColliderEnable(pushTabButton, v16, 1, 0);
  normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
  if ( !normalTabButton )
    goto LABEL_52;
  if ( this->fields.tabModeKind == 3 )
    v17 = &StringLiteral_18393/*"button_push_reg"*/;
  else
    v17 = &StringLiteral_18394/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v17, 0);
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind > 1 )
  {
    if ( tabModeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v18);
      v21 = &StringLiteral_12141/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      goto LABEL_45;
    }
    if ( tabModeKind == 3 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v18);
      v21 = &StringLiteral_12143/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
      v21 = &StringLiteral_13070/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
      goto LABEL_45;
    }
    if ( tabModeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v18);
      v21 = &StringLiteral_12142/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
LABEL_45:
      normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v21, 0);
      if ( !explanationLabel )
        goto LABEL_52;
      UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0);
    }
  }
  normalTabButton = (UnityEngine_Behaviour_o *)this->fields.supportServantListViewManager;
  if ( !normalTabButton )
    goto LABEL_52;
  state = this->fields.state;
  LOBYTE(normalTabButton[19].fields.m_CachedPtr) = this->fields.tabModeKind != 0;
  if ( state == 2 )
  {
    RecommendSupportServantSelectListViewManager__UpdateItemState(
      (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
      modeKind == 3,
      0);
    supportServantListViewManager = this->fields.supportServantListViewManager;
    v24 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
      0);
    if ( supportServantListViewManager )
    {
      RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v24, 0);
      return;
    }
LABEL_52:
    sub_21FFECC(normalTabButton, *(_QWORD *)&modeKind);
  }
  RecommendSupportServantSelectListViewManager__SetMode_41663924(
    (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
    1,
    0);
}


void RecommendSupportServantSelectListMenu__StatusRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w4
  bool v19; // w5
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Int64_array *v29; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5934425 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5934425 = 1;
  }
  tabModeKind = this->fields.tabModeKind;
  unlockList = 0;
  lockList = 0;
  v29 = 0;
  choiceList = 0;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( RecommendSupportServantSelectListViewManager__GetSwapChoiceList(
           supportServantListViewManager,
           &choiceList,
           &v29,
           0) )
    {
      this->fields.requestCallback = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27, v28);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v26,
                                                                                          (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v17 = v29;
        v16 = choiceList;
        v18 = 0;
        v19 = 1;
        goto LABEL_17;
      }
LABEL_21:
      sub_21FFECC(supportServantListViewManager, callback);
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
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v13,
                                                                                          (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v17 = unlockList;
        v16 = lockList;
        v18 = 1;
        v19 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v16,
          v17,
          0,
          v18,
          v19,
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
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_593442A & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_593442A = 1;
  }
  v3 = RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  v5 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_21FFEBC(v3);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0);
  if ( !supportServantListViewManager )
    sub_21FFECC(v6, v7);
  RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v5, 0);
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF2750;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF2708;
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
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_593442B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__);
    byte_593442B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37292452(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  _4__this->fields.state = 2;
  v17 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_21FFEBC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
    sub_21FFECC(this, method);
  RecommendSupportServantSelectListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}