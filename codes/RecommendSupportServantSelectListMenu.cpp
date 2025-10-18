void RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3EF30 & 1) == 0 )
  {
    sub_1C37058(&BaseMenu_TypeInfo);
    byte_4C3EF30 = 1;
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
    sub_1C372B4(0);
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

  if ( (byte_4C3EF2B & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C3EF2B = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
LABEL_9:
      sub_1C372B4(supportServantListViewManager);
    }
    RecommendSupportServantSelectListViewManager__SetMode_34927172(supportServantListViewManager, 3, 0);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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

  if ( (byte_4C3EF2F & 1) == 0 )
  {
    sub_1C37058(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_4C3EF2F = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, 0),
        v5 = this->fields.supportServantListViewManager,
        v6 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          0),
        !v5) )
  {
    sub_1C372B4(supportServantListViewManager);
  }
  RecommendSupportServantSelectListViewManager__SetMode(v5, 2, v6, 0);
}


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
      sub_1C372B4(supportServantListViewManager);
    }
    RecommendSupportServantSelectListViewManager__SetMode_34927172(supportServantListViewManager, 3, 0);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 2, method);
}


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
      sub_1C372B4(supportServantListViewManager);
    }
    RecommendSupportServantSelectListViewManager__SetMode_34927172(supportServantListViewManager, 3, 0);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 1, method);
}


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
      sub_1C372B4(supportServantListViewManager);
    }
    RecommendSupportServantSelectListViewManager__SetMode_34927172(supportServantListViewManager, 3, 0);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 0, method);
}


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
      sub_1C372B4(supportServantListViewManager);
    }
    RecommendSupportServantSelectListViewManager__SetMode_34927172(supportServantListViewManager, 3, 0);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 3, method);
}


void RecommendSupportServantSelectListMenu__EndStatusSync(
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
    p_requestCallback->klass = 0;
    sub_1C36FFC(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      1,
      v5->fields.method);
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

  if ( (byte_4C3EF22 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_12569/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_4C3EF22 = 1;
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
                                                                                      (System_String_o *)StringLiteral_12569/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                                      0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0),
        (normalTabButton = this->fields.normalTabButton) == 0) )
  {
LABEL_9:
    sub_1C372B4(supportServantListViewManager);
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
    sub_1C372B4(0);
  RecommendSupportServantSelectListViewManager__SetMode_34927172(supportServantListViewManager, 3, 0);
}


void RecommendSupportServantSelectListMenu__OnClickCancel(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewManager_o *Instance; // x0
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C3EF2A & 1) == 0 )
  {
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    sub_1C37058(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C37058(&StringLiteral_12677/*"SelectIndex"*/);
    byte_4C3EF2A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12677/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0) )
    {
      sub_1C372B4(Instance);
    }
    ListViewManager__SetScrollBarValue(Instance, 0);
    v6 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndCancelButton__,
      v7);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v6, v8);
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

  if ( (byte_4C3EF27 & 1) == 0 )
  {
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    sub_1C37058(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4C3EF27 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C3EF26 & 1) == 0 )
  {
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    sub_1C37058(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4C3EF26 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          v8);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C3EF25 & 1) == 0 )
  {
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    sub_1C37058(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4C3EF25 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C3EF28 & 1) == 0 )
  {
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    sub_1C37058(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4C3EF28 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4C3EF2D & 1) == 0 )
  {
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    byte_4C3EF2D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
      sub_1C372B4(supportServantListViewManager);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  RecommendSupportServantSelectListViewItem_o *Item; // x1
  RecommendSupportServantSelectListViewItem_o **v14; // x20
  const MethodInfo *v15; // x1
  int32_t tabModeKind; // w8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  int32_t v19; // w1
  _QWORD *v20; // x0
  RecommendSupportServantSelectListViewManager_o *v21; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v22; // x20
  RecommendSupportServantSelectListViewItem_o *v23; // x0
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo_38CA140 *v27; // x3
  int64_t dropList; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v30; // q0
  __int128 v31; // q1
  int64_t v32; // x24
  const MethodInfo_38C8F30 *v33; // x3
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x1
  RecommendSupportData_o *clipRange; // x19
  const MethodInfo_39ED16C *v38; // x0
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  _QWORD *v43; // x0
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  const MethodInfo *v46; // x1
  UserGameEntity_o *SelfUserGame; // x19
  struct ListViewObject_o *v48; // x8
  RecommendSupportData_o *v49; // x19
  const MethodInfo *v50; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v55; // x27
  UserServantEntity_o *v56; // x8
  int32_t m_CancellationTokenSource; // w28
  int32_t v58; // w26
  Il2CppObject *Master_object; // x0
  ServantLimitImageMaster_o *v60; // x22
  System_String_o *v61; // x23
  __int64 v62; // x24
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  RecommendSupportServantSelectListViewManager_o *v65; // x28
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  RecommendSupportServantSelectListViewManager_o *v68; // x27
  void *v69; // x27
  Il2CppClass *v70; // x28
  int32_t v71; // w0
  Il2CppClass *v72; // x8
  int32_t v73; // w25
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  RecommendSupportServantSelectListViewManager_o *v76; // x25
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  RecommendSupportServantSelectListViewManager_o *v79; // x25
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  RecommendSupportServantSelectListViewManager_o *v82; // x25
  const MethodInfo *v83; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  int32_t v85; // w20
  int32_t v86; // w0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  RecommendSupportServantSelectListViewManager_o *v89; // x20
  System_String_o *v90; // x20
  System_String_o *v91; // x22
  System_String_o *v92; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v94; // x25
  __int64 v95; // x0
  System_String_o *title; // [xsp+48h] [xbp-158h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+50h] [xbp-150h] BYREF
  __int128 v98; // [xsp+70h] [xbp-130h]
  __int128 v99; // [xsp+80h] [xbp-120h]
  _BYTE v100[40]; // [xsp+90h] [xbp-110h] BYREF
  _OWORD v101[2]; // [xsp+C0h] [xbp-E0h] BYREF
  __int128 v102; // [xsp+E0h] [xbp-C0h]
  _OWORD v103[2]; // [xsp+F0h] [xbp-B0h] BYREF
  _BYTE v104[39]; // [xsp+110h] [xbp-90h] BYREF
  __int64 v105; // [xsp+138h] [xbp-68h]
  System_Nullable_T__o v106; // 0:x0.16
  System_Nullable_long__o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  v105 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4C3EF24 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_long___ctor__);
    sub_1C37058(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1C37058(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_long__get_HasValue__);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Rarity_TypeInfo);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__);
    sub_1C37058(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
    sub_1C37058(&StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C37058(&StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_11951/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4C3EF24 = 1;
  }
  memset(v104, 0, sizeof(v104));
  v102 = 0u;
  memset(v103, 0, 23);
  v7 = sub_1C372A4(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_129;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
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
  v14 = (RecommendSupportServantSelectListViewItem_o **)(v7 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)Item, v11, v12);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v14 )
      (*v14)->fields._IsSwapChoice_k__BackingField ^= 1u;
    v20 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C3703C(v20, v20[4]);
    v19 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v14 )
      (*v14)->fields._IsSwapLock_k__BackingField ^= 1u;
    v17 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C3703C(v17, v17[4]);
    v19 = 11;
LABEL_22:
    OverwriteAssetSoundName__PlaySystemSe(v18, v19, 0, 0);
    goto LABEL_23;
  }
  v23 = *v14;
  if ( tabModeKind != 3 )
  {
    if ( v23 )
    {
      if ( v23->fields._IsBase_k__BackingField )
      {
        v34 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v34 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v35 = (System_Reflection_MethodBase_o *)sub_1C3703C(v34, v34[4]);
        OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0, 0);
        RecommendSupportServantSelectListMenu__Init(this, v36);
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_129;
        clipRange = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !clipRange )
          goto LABEL_129;
        RecommendSupportData__RemoveServantData(
          clipRange,
          (int32_t)supportServantListViewManager->fields.dragParentObject,
          0);
        v38 = (const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_76;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v23, v15) )
        goto LABEL_62;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v14;
      if ( !*v14 )
        goto LABEL_129;
      if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v41) )
      {
        goto LABEL_62;
      }
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v14;
      if ( !*v14 )
        goto LABEL_129;
      if ( *(&supportServantListViewManager->fields.isLoop + 2)
        || LOBYTE(supportServantListViewManager->fields.bottomItem)
        || RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v42) )
      {
LABEL_62:
        v43 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v43 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v18 = (System_Reflection_MethodBase_o *)sub_1C3703C(v43, v43[4]);
        v19 = 2;
        goto LABEL_22;
      }
    }
    v44 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v44 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v45 = (System_Reflection_MethodBase_o *)sub_1C3703C(v44, v44[4]);
    OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0, 0);
    RecommendSupportServantSelectListMenu__Init(this, v46);
    if ( !*v14 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_129;
    if ( !SelfUserGame )
      goto LABEL_129;
    v48 = (struct ListViewObject_o *)supportServantListViewManager->fields.clipRange;
    if ( !v48 )
      goto LABEL_129;
    v48->fields.mCollider = (struct UnityEngine_Collider_o *)SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_129;
    v49 = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v14 || !v49 )
      goto LABEL_129;
    RecommendSupportData__SetServantData(
      v49,
      (int32_t)supportServantListViewManager->fields.dragParentObject,
      (*v14)->fields._UserServant_k__BackingField,
      0);
    v38 = (const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_76:
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance(v38);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v50);
      return;
    }
    goto LABEL_129;
  }
  if ( v23 && !v23->fields._IsEnabled_k__BackingField )
  {
    v39 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v39 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v40 = (System_Reflection_MethodBase_o *)sub_1C3703C(v39, v39[4]);
    OverwriteAssetSoundName__PlaySystemSe(v40, 2, 0, 0);
    this->fields.state = 2;
LABEL_23:
    v21 = this->fields.supportServantListViewManager;
    v22 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
      0);
    if ( v21 )
    {
      RecommendSupportServantSelectListViewManager__SetMode(v21, 2, v22, 0);
      return;
    }
LABEL_129:
    sub_1C372B4(supportServantListViewManager);
  }
  v24 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1C37070(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v25 = (System_Reflection_MethodBase_o *)sub_1C3703C(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  dropList = (int64_t)supportServantListViewManager->fields.dropList;
  if ( !dropList )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v14, v26);
    return;
  }
  if ( *v14 )
  {
    UserServant_k__BackingField = (*v14)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_129;
    v30 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v31 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v106.fields.hasValue = v100;
    v106.fields.value = (Il2CppObject *)v101;
    memset(v100, 0, sizeof(v100));
    v98 = v30;
    v99 = v31;
    v101[0] = v30;
    v101[1] = v31;
    System_Nullable_ObscuredLong____ctor(
      v106,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v27);
    *(_QWORD *)((char *)v103 + 15) = *(_QWORD *)&v100[32];
    v102 = *(_OWORD *)&v100[1];
    v103[0] = *(_OWORD *)&v100[17];
    if ( v100[0] )
      v32 = dropList;
    else
      v32 = 0;
    *(_OWORD *)v104 = *(_OWORD *)&v100[1];
    *(_OWORD *)&v104[16] = *(_OWORD *)&v100[17];
    *(_QWORD *)&v104[31] = *(_QWORD *)((char *)v103 + 15);
    if ( v100[0] )
    {
      *(_OWORD *)v100 = *(_OWORD *)&v104[7];
      *(_OWORD *)&v100[16] = *(_OWORD *)&v104[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v97 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v100;
      v107.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v97, 0);
      *(_QWORD *)&v107.fields.hasValue = v101;
      v101[0] = 0u;
      System_Nullable_long____ctor(v107, Method_System_Nullable_long___ctor__, v33);
      if ( LOBYTE(v101[0]) )
      {
        if ( v32 == *((_QWORD *)&v101[0] + 1) )
          goto LABEL_43;
      }
    }
  }
  else
  {
    v102 = 0u;
    memset(v103, 0, 23);
    memset(v104, 0, sizeof(v104));
  }
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
             dropList,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_129;
  v52 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v108.fields.currentCryptoKey = klass;
  *(_QWORD *)&v108.fields.fakeValue = monitor;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                                      v108,
                                                                                      0);
  if ( !v52 )
    goto LABEL_129;
  v55 = DataMasterBase_object__object__int___GetEntity(
          v52,
          (int32_t)supportServantListViewManager,
          (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                                      (UserServantEntity_o *)Entity,
                                                                                      0,
                                                                                      0);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  if ( !*v14 )
    goto LABEL_129;
  v56 = (*v14)->fields._UserServant_k__BackingField;
  if ( !v56 )
    goto LABEL_129;
  m_CancellationTokenSource = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                                      v56,
                                                                                      0,
                                                                                      0);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  v58 = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( *v14 )
  {
    v60 = (ServantLimitImageMaster_o *)Master_object;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    title = LocalizationManager__Get((System_String_o *)StringLiteral_11951/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v62 = sub_1C37100(object___TypeInfo, 6);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(
                                                                                        m_CancellationTokenSource,
                                                                                        0);
    if ( !v62 )
      goto LABEL_129;
    v65 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C37194(
                                                                                              supportServantListViewManager,
                                                                                              *(_QWORD *)(*(_QWORD *)v62 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v62 + 24) )
        goto LABEL_130;
      *(_QWORD *)(v62 + 32) = v65;
      sub_1C36FFC((CGThumbnailListItem_o *)(v62 + 32), (int32_t)v65, v63, v64);
      if ( !v55 )
        goto LABEL_129;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                          (ServantEntity_o *)v55,
                                                                                          0);
      v68 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C37194(
                                                                                                supportServantListViewManager,
                                                                                                *(_QWORD *)(*(_QWORD *)v62 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v62 + 24) <= 1u )
          goto LABEL_130;
        *(_QWORD *)(v62 + 40) = v68;
        sub_1C36FFC((CGThumbnailListItem_o *)(v62 + 40), (int32_t)v68, v66, v67);
        v70 = Entity[5].klass;
        v69 = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v109.fields.currentCryptoKey = v70;
        *(_QWORD *)&v109.fields.fakeValue = v69;
        v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v109, 0);
        v72 = Entity[6].klass;
        *(_QWORD *)&v110.fields.fakeValue = Entity[6].monitor;
        v73 = v71;
        *(_QWORD *)&v110.fields.currentCryptoKey = v72;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                                            v110,
                                                                                            0);
        if ( !v60 )
          goto LABEL_129;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                            v60,
                                                                                            v73,
                                                                                            (int32_t)supportServantListViewManager,
                                                                                            1,
                                                                                            0);
        v76 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C37194(
                                                                                                  supportServantListViewManager,
                                                                                                  *(_QWORD *)(*(_QWORD *)v62 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v62 + 24) <= 2u )
            goto LABEL_130;
          *(_QWORD *)(v62 + 48) = v76;
          sub_1C36FFC((CGThumbnailListItem_o *)(v62 + 48), (int32_t)v76, v74, v75);
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(
                                                                                              v58,
                                                                                              0);
          v79 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C37194(
                                                                                                    supportServantListViewManager,
                                                                                                    *(_QWORD *)(*(_QWORD *)v62 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v62 + 24) <= 3u )
              goto LABEL_130;
            *(_QWORD *)(v62 + 56) = v79;
            sub_1C36FFC((CGThumbnailListItem_o *)(v62 + 56), (int32_t)v79, v77, v78);
            if ( !*v14 )
              goto LABEL_129;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v14)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_129;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                                (ServantEntity_o *)supportServantListViewManager,
                                                                                                0);
            v82 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C37194(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v62 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v62 + 24) <= 4u )
                goto LABEL_130;
              *(_QWORD *)(v62 + 64) = v82;
              sub_1C36FFC((CGThumbnailListItem_o *)(v62 + 64), (int32_t)v82, v80, v81);
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v14;
              if ( !*v14 )
                goto LABEL_129;
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewItem__get_SvtId(
                                                                                                  (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
                                                                                                  v83);
              if ( !*v14 )
                goto LABEL_129;
              v84 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v14)->fields._UserServant_k__BackingField;
              if ( !v84 )
                goto LABEL_129;
              v85 = (int)supportServantListViewManager;
              v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v84[6], 0);
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                                  v60,
                                                                                                  v85,
                                                                                                  v86,
                                                                                                  1,
                                                                                                  0);
              v89 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C37194(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v62 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v62 + 24) > 5u )
                {
                  *(_QWORD *)(v62 + 72) = v89;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v62 + 72), (int32_t)v89, v87, v88);
                  v90 = System_String__Format_63603084(v61, (System_Object_array *)v62, 0);
                  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v94 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v94,
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
                    CommonUI__OpenConfirmDialog_31208316(
                      (CommonUI_o *)Instance,
                      title,
                      v90,
                      v91,
                      v92,
                      v94,
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
                sub_1C372BC(supportServantListViewManager);
              }
            }
          }
        }
      }
    }
    v95 = sub_1C372D8();
    sub_1C37180(v95, 0);
  }
}


void RecommendSupportServantSelectListMenu__Open(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  void *gameObject; // x0
  UnityEngine_GameObject_o *v4; // x20
  int v5; // w20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportData_o *v7; // x21
  int32_t v8; // w22
  RecommendSupportServantSelectListViewManager_o *v9; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v10; // x21
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v12; // x20

  if ( (byte_4C3EF23 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C37058(&StringLiteral_12677/*"SelectIndex"*/);
    byte_4C3EF23 = 1;
  }
  RecommendSupportServantSelectListMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_20;
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0);
  if ( !v4 )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(v4, (unsigned __int8)gameObject & 1, 0);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v5 = *((_DWORD *)gameObject + 30);
  if ( v5 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12677/*"SelectIndex"*/, -1, 0) )
  {
    gameObject = this->fields.supportServantListViewManager;
    if ( !gameObject )
      goto LABEL_20;
    ListViewManager__ClearScrollBarValue((ListViewManager_o *)gameObject, 1, 0);
  }
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0, 1, 0, 73, 0);
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setBackBtnSprite_39841600((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v7 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v8 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  if ( !supportServantListViewManager )
    goto LABEL_20;
  RecommendSupportServantSelectListViewManager__CreateList(
    supportServantListViewManager,
    v7,
    v8,
    *((EventUpValSetupInfo_o **)gameObject + 13),
    0);
  v9 = this->fields.supportServantListViewManager;
  v10 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0);
  if ( !v9
    || (RecommendSupportServantSelectListViewManager__SetMode(v9, 1, v10, 0),
        (gameObject = this->fields.supportServantListViewManager) == 0)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                       (RecommendSupportServantSelectListViewManager_o *)gameObject,
                       0),
        !scaleChangeTabSprite) )
  {
LABEL_20:
    sub_1C372B4(gameObject);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
  this->fields.state = 2;
  v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v12, 0);
}


void RecommendSupportServantSelectListMenu__PushRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  DataManager_o *v6; // x23
  struct UserServantEntity_o *UserServant_k__BackingField; // x19
  UserServantCollectionMaster_o *v8; // x21
  int64_t m_CachedPtr; // x22
  __int64 v10; // x24
  __int64 v11; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v13; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v16; // x0
  __int128 v17; // q1
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  Il2CppObject *Request_object; // x0
  __int128 v20; // q1
  CardFavoriteRequest_o *v21; // x20
  int32_t v22; // w26
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w29
  bool IsLock; // w21
  char v27; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v36; // [xsp+60h] [xbp-100h]
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v38; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v39; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4C3EF2E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3EF2E = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v6 = limitCountSupport;
  UserServant_k__BackingField = selectItem->fields._UserServant_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v6 || !UserServant_k__BackingField )
    goto LABEL_18;
  v8 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v6->fields.m_CachedPtr;
  v11 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v11;
  *(_QWORD *)&v44.fields.fakeValue = v10;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v44, 0);
  if ( !v8 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v13 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  writeMasterDataThread = v6->fields.writeMasterDataThread;
  p_fields = &UserServant_k__BackingField->fields;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v13;
  v39 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v42 = v43;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v42, 0);
  v17 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  context = v6->fields.context;
  v38 = v16;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v17;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v41, 0);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v18,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v20 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v21 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v40.fields.fakeValue = v20;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v40, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                      UserServant_k__BackingField->fields.imageLimitCount,
                      0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          UserServant_k__BackingField->fields.dispLimitCount,
          0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          UserServant_k__BackingField->fields.commandCardLimitCount,
          0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          UserServant_k__BackingField->fields.iconLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          UserServant_k__BackingField->fields.portraitLimitCount,
          0);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServant_k__BackingField, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                  UserServant_k__BackingField->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                       UserServant_k__BackingField->fields.randomLimitCount,
                       0);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          UserServant_k__BackingField->fields.randomLimitCountSupport,
          0);
  v32 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v45.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v45, 0);
  if ( !v21 )
LABEL_18:
    sub_1C372B4(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v21,
    targetUsrSVtId,
    imageLimitCount,
    v22,
    v23,
    v24,
    v25,
    context == (struct System_Threading_SynchronizationContext_o *)v36,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v39 != (struct System_Threading_Thread_o *)v38,
    0);
}


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

  if ( (byte_4C3EF29 & 1) == 0 )
  {
    sub_1C37058(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C37058(&StringLiteral_11658/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C37058(&StringLiteral_17654/*"button_push_reg"*/);
    sub_1C37058(&StringLiteral_17655/*"button_push_unreg"*/);
    sub_1C37058(&StringLiteral_17640/*"button_allchoice_reg"*/);
    sub_1C37058(&StringLiteral_17643/*"button_alllock_unreg"*/);
    sub_1C37058(&StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C37058(&StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C37058(&StringLiteral_17656/*"button_select_reg"*/);
    sub_1C37058(&StringLiteral_12569/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_17657/*"button_select_unreg"*/);
    sub_1C37058(&StringLiteral_17642/*"button_alllock_reg"*/);
    sub_1C37058(&StringLiteral_17641/*"button_allchoice_unreg"*/);
    byte_4C3EF29 = 1;
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
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17657/*"button_select_unreg"*/ : &StringLiteral_17656/*"button_select_reg"*/);
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
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17642/*"button_alllock_reg"*/ : &StringLiteral_17643/*"button_alllock_unreg"*/);
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
    v14 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17640/*"button_allchoice_reg"*/ : &StringLiteral_17641/*"button_allchoice_unreg"*/);
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
      v17 = &StringLiteral_17654/*"button_push_reg"*/;
    else
      v17 = &StringLiteral_17655/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v17, 0);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_12569/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11658/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
          v21 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
          sub_1C372B4(normalTabButton);
        }
        RecommendSupportServantSelectListViewManager__SetMode_34927172(
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
  const MethodInfo *v8; // x3
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  System_Int64_array *v10; // x1
  System_Int64_array *v11; // x2
  bool v12; // w4
  bool v13; // w5
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int64_array *v17; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3EF2C & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C3EF2C = 1;
  }
  unlockList = 0;
  lockList = 0;
  v17 = 0;
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
           &v17,
           0) )
    {
      this->fields.requestCallback = callback;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v14, v15);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v16,
                                                                                          (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v11 = v17;
        v10 = choiceList;
        v13 = 1;
        v12 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C372B4(supportServantListViewManager);
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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v7, v8);
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v9,
                                                                                          (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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

  if ( (byte_4C3EF31 & 1) == 0 )
  {
    sub_1C37058(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_4C3EF31 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v4 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0);
  if ( !supportServantListViewManager )
    sub_1C372B4(v5);
  RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v4, 0);
}


void RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A76BF4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76BAC;
}


System_IAsyncResult_o *RecommendSupportServantSelectListMenu_RequestCallbackFunc__BeginInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isRequest;
  if ( (byte_4C3EF32 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3EF32 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  CommonUI_o *v6; // x20
  System_Action_o *_9__1; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct RecommendSupportServantSelectListMenu_o *_4__this; // x20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_4C3EF33 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__);
    byte_4C3EF33 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
    }
    if ( v6 )
    {
      CommonUI__CloseConfirmDialog_31208544(v6, _9__1, 0);
      return;
    }
LABEL_12:
    sub_1C372B4(Instance);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v12 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C372A4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v12, 0);
}


void RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C372B4(this);
  RecommendSupportServantSelectListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}