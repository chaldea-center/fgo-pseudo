void RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D28631 & 1) == 0 )
  {
    sub_1C94098(&BaseMenu_TypeInfo);
    byte_4D28631 = 1;
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
    sub_1C942F0(0, method);
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

  if ( (byte_4D2862C & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2862C = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
LABEL_9:
      sub_1C942F0(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_35508096(supportServantListViewManager, 3, 0);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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

  if ( (byte_4D28630 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_4D28630 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, 0),
        v5 = this->fields.supportServantListViewManager,
        v6 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          0),
        !v5) )
  {
    sub_1C942F0(supportServantListViewManager, result);
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
      sub_1C942F0(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_35508096(supportServantListViewManager, 3, 0);
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
      sub_1C942F0(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_35508096(supportServantListViewManager, 3, 0);
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
      sub_1C942F0(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_35508096(supportServantListViewManager, 3, 0);
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
      sub_1C942F0(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_35508096(supportServantListViewManager, 3, 0);
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
    sub_1C9403C(p_requestCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4D28623 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_12624/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_4D28623 = 1;
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
                                                                                      (System_String_o *)StringLiteral_12624/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                                      0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0),
        (normalTabButton = this->fields.normalTabButton) == 0) )
  {
LABEL_9:
    sub_1C942F0(supportServantListViewManager, method);
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
    sub_1C942F0(0, method);
  RecommendSupportServantSelectListViewManager__SetMode_35508096(supportServantListViewManager, 3, 0);
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
  const MethodInfo *v8; // x2

  if ( (byte_4D2862B & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    sub_1C94098(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C94098(&StringLiteral_12731/*"SelectIndex"*/);
    byte_4D2862B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12731/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0) )
    {
      sub_1C942F0(Instance, v6);
    }
    ListViewManager__SetScrollBarValue(Instance, 0);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndCancelButton__,
      0);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v8);
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
  const MethodInfo *v8; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4D28628 & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    sub_1C94098(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D28628 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          0);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
        0);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v10);
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
  const MethodInfo *v8; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4D28627 & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    sub_1C94098(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D28627 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          0);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
        0);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v10);
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
  const MethodInfo *v6; // x2

  if ( (byte_4D28626 & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    sub_1C94098(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D28626 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__,
      0);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v5, v6);
  }
}


void RecommendSupportServantSelectListMenu__OnClickPushTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4D28629 & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    sub_1C94098(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D28629 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabPush__,
      0);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v5, v6);
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

  if ( (byte_4D2862E & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    byte_4D2862E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
      sub_1C942F0(supportServantListViewManager, v5);
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
  __int64 v7; // x20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  __int64 v9; // x1
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
  RecommendSupportServantSelectListViewItem_o **v23; // x19
  int32_t tabModeKind; // w8
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  int32_t v27; // w1
  _QWORD *v28; // x0
  RecommendSupportServantSelectListViewManager_o *v29; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v30; // x20
  RecommendSupportServantSelectListViewItem_o *v31; // x0
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  const MethodInfo *v34; // x2
  const MethodInfo_3994D88 *v35; // x3
  int64_t dropList; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v38; // q0
  __int128 v39; // q1
  int64_t v40; // x24
  const MethodInfo_3993B78 *v41; // x3
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  const MethodInfo *v44; // x1
  RecommendSupportData_o *clipRange; // x19
  const MethodInfo_3ABA574 *v46; // x0
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  _QWORD *v49; // x0
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  const MethodInfo *v52; // x1
  UserGameEntity_o *SelfUserGame; // x20
  struct ListViewObject_o *v54; // x8
  RecommendSupportData_o *v55; // x20
  const MethodInfo *v56; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v61; // x27
  UserServantEntity_o *v62; // x8
  int32_t m_CancellationTokenSource; // w28
  int32_t v64; // w26
  Il2CppObject *Master_object; // x0
  ServantLimitImageMaster_o *v66; // x22
  System_String_o *v67; // x23
  __int64 v68; // x24
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  RecommendSupportServantSelectListViewManager_o *v75; // x28
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  RecommendSupportServantSelectListViewManager_o *v82; // x27
  void *v83; // x27
  Il2CppClass *v84; // x28
  int32_t v85; // w0
  Il2CppClass *v86; // x8
  int32_t v87; // w25
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  RecommendSupportServantSelectListViewManager_o *v94; // x25
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  RecommendSupportServantSelectListViewManager_o *v101; // x25
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  RecommendSupportServantSelectListViewManager_o *v108; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v109; // x8
  int32_t v110; // w19
  int32_t v111; // w0
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  RecommendSupportServantSelectListViewManager_o *v118; // x19
  System_String_o *v119; // x19
  System_String_o *v120; // x22
  System_String_o *v121; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v123; // x25
  __int64 v124; // x0
  System_String_o *title; // [xsp+48h] [xbp-158h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+50h] [xbp-150h] BYREF
  __int128 v127; // [xsp+70h] [xbp-130h]
  __int128 v128; // [xsp+80h] [xbp-120h]
  _BYTE v129[40]; // [xsp+90h] [xbp-110h] BYREF
  _OWORD v130[2]; // [xsp+C0h] [xbp-E0h] BYREF
  __int128 v131; // [xsp+E0h] [xbp-C0h]
  _OWORD v132[2]; // [xsp+F0h] [xbp-B0h] BYREF
  _BYTE v133[39]; // [xsp+110h] [xbp-90h] BYREF
  __int64 v134; // [xsp+138h] [xbp-68h]
  System_Nullable_T__o v135; // 0:x0.16
  System_Nullable_long__o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16

  v134 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4D28625 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_long___ctor__);
    sub_1C94098(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1C94098(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_long__get_HasValue__);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__);
    sub_1C94098(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
    sub_1C94098(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C94098(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4D28625 = 1;
  }
  memset(v133, 0, sizeof(v133));
  v131 = 0u;
  memset(v132, 0, 23);
  v7 = sub_1C942E4(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  RecommendSupportServantSelectListMenu___c__DisplayClass24_0___ctor(
    (RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *)v7,
    0);
  if ( !v7 )
    goto LABEL_129;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Item, v16, v17, v18, v19, v20, v21);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v23 )
      RecommendSupportServantSelectListViewItem__SwapChoice(*v23, 0);
    v28 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v26 = (System_Reflection_MethodBase_o *)sub_1C9407C(v28, v28[4]);
    v27 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v23 )
      RecommendSupportServantSelectListViewItem__SwapLock(*v23, 0);
    v25 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v26 = (System_Reflection_MethodBase_o *)sub_1C9407C(v25, v25[4]);
    v27 = 11;
LABEL_22:
    OverwriteAssetSoundName__PlaySystemSe(v26, v27, 0, 0);
    goto LABEL_23;
  }
  v31 = *v23;
  if ( tabModeKind != 3 )
  {
    if ( v31 )
    {
      if ( v31->fields._IsBase_k__BackingField )
      {
        v42 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v42 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v43 = (System_Reflection_MethodBase_o *)sub_1C9407C(v42, v42[4]);
        OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0, 0);
        RecommendSupportServantSelectListMenu__Init(this, v44);
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_129;
        clipRange = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !clipRange )
          goto LABEL_129;
        RecommendSupportData__RemoveServantData(
          clipRange,
          (int32_t)supportServantListViewManager->fields.dragParentObject,
          0);
        v46 = (const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_76;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v31, 0) )
        goto LABEL_62;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v23;
      if ( !*v23 )
        goto LABEL_129;
      if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             0) )
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
             0) )
      {
LABEL_62:
        v49 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v49 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v26 = (System_Reflection_MethodBase_o *)sub_1C9407C(v49, v49[4]);
        v27 = 2;
        goto LABEL_22;
      }
    }
    v50 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v50 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v51 = (System_Reflection_MethodBase_o *)sub_1C9407C(v50, v50[4]);
    OverwriteAssetSoundName__PlaySystemSe(v51, 0, 0, 0);
    RecommendSupportServantSelectListMenu__Init(this, v52);
    if ( !*v23 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_129;
    if ( !SelfUserGame )
      goto LABEL_129;
    v54 = (struct ListViewObject_o *)supportServantListViewManager->fields.clipRange;
    if ( !v54 )
      goto LABEL_129;
    v54->fields.mCollider = (struct UnityEngine_Collider_o *)SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_129;
    v55 = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v23 || !v55 )
      goto LABEL_129;
    RecommendSupportData__SetServantData(
      v55,
      (int32_t)supportServantListViewManager->fields.dragParentObject,
      (*v23)->fields._UserServant_k__BackingField,
      0);
    v46 = (const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_76:
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance(v46);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v56);
      return;
    }
    goto LABEL_129;
  }
  if ( v31 && !v31->fields._IsEnabled_k__BackingField )
  {
    v47 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v47 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v48 = (System_Reflection_MethodBase_o *)sub_1C9407C(v47, v47[4]);
    OverwriteAssetSoundName__PlaySystemSe(v48, 2, 0, 0);
    this->fields.state = 2;
LABEL_23:
    v29 = this->fields.supportServantListViewManager;
    v30 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
      v30,
      (Il2CppObject *)this,
      (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
      0);
    if ( v29 )
    {
      RecommendSupportServantSelectListViewManager__SetMode(v29, 2, v30, 0);
      return;
    }
LABEL_129:
    sub_1C942F0(supportServantListViewManager, v9);
  }
  v32 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_1C940B0(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v33 = (System_Reflection_MethodBase_o *)sub_1C9407C(v32, v32[4]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  dropList = (int64_t)supportServantListViewManager->fields.dropList;
  if ( !dropList )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v23, v34);
    return;
  }
  if ( *v23 )
  {
    UserServant_k__BackingField = (*v23)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_129;
    v38 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v39 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v135.fields.hasValue = v129;
    v135.fields.value = (Il2CppObject *)v130;
    memset(v129, 0, sizeof(v129));
    v127 = v38;
    v128 = v39;
    v130[0] = v38;
    v130[1] = v39;
    System_Nullable_ObscuredLong____ctor(
      v135,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v35);
    *(_QWORD *)((char *)v132 + 15) = *(_QWORD *)&v129[32];
    v131 = *(_OWORD *)&v129[1];
    v132[0] = *(_OWORD *)&v129[17];
    if ( v129[0] )
      v40 = dropList;
    else
      v40 = 0;
    *(_OWORD *)v133 = *(_OWORD *)&v129[1];
    *(_OWORD *)&v133[16] = *(_OWORD *)&v129[17];
    *(_QWORD *)&v133[31] = *(_QWORD *)((char *)v132 + 15);
    if ( v129[0] )
    {
      *(_OWORD *)v129 = *(_OWORD *)&v133[7];
      *(_OWORD *)&v129[16] = *(_OWORD *)&v133[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v126 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v129;
      v136.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v126, 0);
      *(_QWORD *)&v136.fields.hasValue = v130;
      v130[0] = 0u;
      System_Nullable_long____ctor(v136, Method_System_Nullable_long___ctor__, v41);
      if ( LOBYTE(v130[0]) )
      {
        if ( v40 == *((_QWORD *)&v130[0] + 1) )
          goto LABEL_43;
      }
    }
  }
  else
  {
    v131 = 0u;
    memset(v132, 0, 23);
    memset(v133, 0, sizeof(v133));
  }
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
             dropList,
             (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_129;
  v58 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v137.fields.currentCryptoKey = klass;
  *(_QWORD *)&v137.fields.fakeValue = monitor;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                                                      v137,
                                                                                      0);
  if ( !v58 )
    goto LABEL_129;
  v61 = DataMasterBase_object__object__int___GetEntity(
          v58,
          (int32_t)supportServantListViewManager,
          (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                                      (UserServantEntity_o *)Entity,
                                                                                      0,
                                                                                      0);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  if ( !*v23 )
    goto LABEL_129;
  v62 = (*v23)->fields._UserServant_k__BackingField;
  if ( !v62 )
    goto LABEL_129;
  m_CancellationTokenSource = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                                      v62,
                                                                                      0,
                                                                                      0);
  if ( !supportServantListViewManager )
    goto LABEL_129;
  v64 = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( *v23 )
  {
    v66 = (ServantLimitImageMaster_o *)Master_object;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    title = LocalizationManager__Get((System_String_o *)StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v68 = sub_1C94140(object___TypeInfo, 6);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(
                                                                                        m_CancellationTokenSource,
                                                                                        0);
    if ( !v68 )
      goto LABEL_129;
    v75 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C941D4(
                                                                                              supportServantListViewManager,
                                                                                              *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v68 + 24) )
        goto LABEL_130;
      *(_QWORD *)(v68 + 32) = v75;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 32), (int32_t)v75, v69, v70, v71, v72, v73, v74);
      if ( !v61 )
        goto LABEL_129;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                          (ServantEntity_o *)v61,
                                                                                          0);
      v82 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C941D4(
                                                                                                supportServantListViewManager,
                                                                                                *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v68 + 24) <= 1u )
          goto LABEL_130;
        *(_QWORD *)(v68 + 40) = v82;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 40), (int32_t)v82, v76, v77, v78, v79, v80, v81);
        v84 = Entity[5].klass;
        v83 = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v138.fields.currentCryptoKey = v84;
        *(_QWORD *)&v138.fields.fakeValue = v83;
        v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v138, 0);
        v86 = Entity[6].klass;
        *(_QWORD *)&v139.fields.fakeValue = Entity[6].monitor;
        v87 = v85;
        *(_QWORD *)&v139.fields.currentCryptoKey = v86;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                                                            v139,
                                                                                            0);
        if ( !v66 )
          goto LABEL_129;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                            v66,
                                                                                            v87,
                                                                                            (int32_t)supportServantListViewManager,
                                                                                            1,
                                                                                            0);
        v94 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C941D4(
                                                                                                  supportServantListViewManager,
                                                                                                  *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v68 + 24) <= 2u )
            goto LABEL_130;
          *(_QWORD *)(v68 + 48) = v94;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 48), (int32_t)v94, v88, v89, v90, v91, v92, v93);
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(
                                                                                              v64,
                                                                                              0);
          v101 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C941D4(
                                                                                                    supportServantListViewManager,
                                                                                                    *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v68 + 24) <= 3u )
              goto LABEL_130;
            *(_QWORD *)(v68 + 56) = v101;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 56), (int32_t)v101, v95, v96, v97, v98, v99, v100);
            if ( !*v23 )
              goto LABEL_129;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v23)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_129;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                                (ServantEntity_o *)supportServantListViewManager,
                                                                                                0);
            v108 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C941D4(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v68 + 24) <= 4u )
                goto LABEL_130;
              *(_QWORD *)(v68 + 64) = v108;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 64), (int32_t)v108, v102, v103, v104, v105, v106, v107);
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v23;
              if ( !*v23 )
                goto LABEL_129;
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewItem__get_SvtId(
                                                                                                  (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
                                                                                                  0);
              if ( !*v23 )
                goto LABEL_129;
              v109 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields._UserServant_k__BackingField;
              if ( !v109 )
                goto LABEL_129;
              v110 = (int)supportServantListViewManager;
              v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v109[6], 0);
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                                  v66,
                                                                                                  v110,
                                                                                                  v111,
                                                                                                  1,
                                                                                                  0);
              v118 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1C941D4(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v68 + 24) > 5u )
                {
                  *(_QWORD *)(v68 + 72) = v118;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)(v68 + 72),
                    (int32_t)v118,
                    v112,
                    v113,
                    v114,
                    v115,
                    v116,
                    v117);
                  v119 = System_String__Format_64459188(v67, (System_Object_array *)v68, 0);
                  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                  v121 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v123 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v123,
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
                    CommonUI__OpenConfirmDialog_31583464(
                      (CommonUI_o *)Instance,
                      title,
                      v119,
                      v120,
                      v121,
                      v123,
                      HIDWORD(supportServantListViewManager->fields.sort[2].fields.isPresentBoxFilterList),
                      (int32_t)supportServantListViewManager->fields.sort[2].fields.isSvtEquipEffectFilterDic,
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
                sub_1C942F8(supportServantListViewManager);
              }
            }
          }
        }
      }
    }
    v124 = sub_1C94314();
    sub_1C941C0(v124, 0);
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

  if ( (byte_4D28624 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C94098(&StringLiteral_12731/*"SelectIndex"*/);
    byte_4D28624 = 1;
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
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v6 = *((_DWORD *)gameObject + 30);
  if ( v6 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12731/*"SelectIndex"*/, -1, 0) )
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
  TitleInfoControl__setBackBtnSprite_40657648((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v8 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v9 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  v11 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C942F0(gameObject, v4);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
  this->fields.state = 2;
  v13 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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

  if ( (byte_4D2862F & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2862F = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  UserServant_k__BackingField = selectItem->fields._UserServant_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v43, 0);
  v18 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                      UserServant_k__BackingField->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          UserServant_k__BackingField->fields.dispLimitCount,
          0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          UserServant_k__BackingField->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          UserServant_k__BackingField->fields.iconLimitCount,
          0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          UserServant_k__BackingField->fields.portraitLimitCount,
          0);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServant_k__BackingField, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                  UserServant_k__BackingField->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                       UserServant_k__BackingField->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          UserServant_k__BackingField->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C942F0(limitCountSupport, v6);
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

  if ( (byte_4D2862A & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C94098(&StringLiteral_11705/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C94098(&StringLiteral_17742/*"button_push_reg"*/);
    sub_1C94098(&StringLiteral_17743/*"button_push_unreg"*/);
    sub_1C94098(&StringLiteral_17728/*"button_allchoice_reg"*/);
    sub_1C94098(&StringLiteral_17731/*"button_alllock_unreg"*/);
    sub_1C94098(&StringLiteral_11703/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C94098(&StringLiteral_11704/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C94098(&StringLiteral_17744/*"button_select_reg"*/);
    sub_1C94098(&StringLiteral_12624/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_1C94098(&StringLiteral_17745/*"button_select_unreg"*/);
    sub_1C94098(&StringLiteral_17730/*"button_alllock_reg"*/);
    sub_1C94098(&StringLiteral_17729/*"button_allchoice_unreg"*/);
    byte_4D2862A = 1;
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
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17745/*"button_select_unreg"*/ : &StringLiteral_17744/*"button_select_reg"*/);
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
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17730/*"button_alllock_reg"*/ : &StringLiteral_17731/*"button_alllock_unreg"*/);
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
    v14 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17728/*"button_allchoice_reg"*/ : &StringLiteral_17729/*"button_allchoice_unreg"*/);
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
      v17 = &StringLiteral_17742/*"button_push_reg"*/;
    else
      v17 = &StringLiteral_17743/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v17, 0);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_12624/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11704/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11703/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11705/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
          v21 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
          sub_1C942F0(normalTabButton, *(_QWORD *)&modeKind);
        }
        RecommendSupportServantSelectListViewManager__SetMode_35508096(
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

  if ( (byte_4D2862D & 1) == 0 )
  {
    sub_1C94098(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2862D = 1;
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
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v24,
                                                                                          (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v15 = v25;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C942F0(supportServantListViewManager, callback);
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
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v13,
                                                                                          (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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

  if ( (byte_4D28632 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    byte_4D28632 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v4 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0);
  if ( !supportServantListViewManager )
    sub_1C942F0(v5, v6);
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
  sub_1C9403C(
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
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC36D0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC3688;
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
  if ( (byte_4D28635 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D28635 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_4D28636 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__);
    byte_4D28636 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31583752(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_1C942F0(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v17 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C942E4(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v18);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  supportServantListViewManager->fields.callbackFunc = v17;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
    (int32_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  RecommendSupportServantSelectListViewManager__SetMode_35508096(supportServantListViewManager, 2, v25);
}


void RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(0, method);
  RecommendSupportServantSelectListMenu__PushRequest(_4__this, this->fields.item, 0);
}