void __fastcall RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1E0EC & 1) == 0 )
  {
    sub_1C3B764(&BaseMenu_TypeInfo, method);
    byte_4C1E0EC = 1;
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
    sub_1C3B9C0(0LL, method);
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

  if ( (byte_4C1E0E7 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, isRequest);
    byte_4C1E0E7 = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1C3B9C0(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_33816680(supportServantListViewManager, 3, 0LL);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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

  if ( (byte_4C1E0EB & 1) == 0 )
  {
    sub_1C3B764(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, result);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    byte_4C1E0EB = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, 0LL),
        v6 = this->fields.supportServantListViewManager,
        v7 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          0LL),
        !v6) )
  {
    sub_1C3B9C0(supportServantListViewManager, result);
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
      sub_1C3B9C0(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_33816680(supportServantListViewManager, 3, 0LL);
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
      sub_1C3B9C0(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_33816680(supportServantListViewManager, 3, 0LL);
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
      sub_1C3B9C0(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_33816680(supportServantListViewManager, 3, 0LL);
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
      sub_1C3B9C0(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_33816680(supportServantListViewManager, 3, 0LL);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 3, method);
}


void __fastcall RecommendSupportServantSelectListMenu__EndStatusSync(
        RecommendSupportServantSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_requestCallback; // x0
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v9; // x19
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (PartyOrganizationUtility_o *)&this->fields.requestCallback;
  v9 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0LL;
    sub_1C3B708(p_requestCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      1LL,
      *(_QWORD *)&v9->fields.extra_arg);
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

  if ( (byte_4C1E0DE & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_12747/*"StateQuestAfterActionEnd"*/, v3);
    byte_4C1E0DE = 1;
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
                                                                                      (System_String_o *)StringLiteral_12747/*"StateQuestAfterActionEnd"*/,
                                                                                      0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1C3B9C0(supportServantListViewManager, method);
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
    sub_1C3B9C0(0LL, method);
  RecommendSupportServantSelectListViewManager__SetMode_33816680(supportServantListViewManager, 3, 0LL);
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

  if ( (byte_4C1E0E6 & 1) == 0 )
  {
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__, method);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__, v3);
    sub_1C3B764(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5);
    sub_1C3B764(&StringLiteral_12860/*"SvtEqCombine"*/, v6);
    byte_4C1E0E6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3B748(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12860/*"SvtEqCombine"*/,
            (int32_t)Instance->fields.dragParentObject,
            0LL),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1C3B9C0(Instance, v10);
    }
    ListViewManager__SetScrollBarValue(Instance, 0LL);
    v11 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C1E0E3 & 1) == 0 )
  {
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__, method);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__, v3);
    sub_1C3B764(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1E0E3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          v10);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C1E0E2 & 1) == 0 )
  {
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__, method);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__, v3);
    sub_1C3B764(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1E0E2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          v10);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C1E0E1 & 1) == 0 )
  {
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__, method);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__, v3);
    sub_1C3B764(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1E0E1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C1E0E4 & 1) == 0 )
  {
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__, method);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__, v3);
    sub_1C3B764(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1E0E4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C1E0E9 & 1) == 0 )
  {
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__, method);
    byte_4C1E0E9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
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
      sub_1C3B9C0(supportServantListViewManager, v5);
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
  int64_t supportServantListViewManager; // x0
  const MethodInfo *v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  RecommendSupportServantSelectListViewItem_o *Item; // x1
  RecommendSupportServantSelectListViewItem_o **v52; // x20
  const MethodInfo *v53; // x1
  int32_t tabModeKind; // w8
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  int32_t v57; // w1
  _QWORD *v58; // x0
  RecommendSupportServantSelectListViewManager_o *v59; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v60; // x20
  RecommendSupportServantSelectListViewItem_o *v61; // x0
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  const MethodInfo *v64; // x2
  const MethodInfo_37A98E0 *v65; // x3
  int64_t v66; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v68; // q0
  __int128 v69; // q1
  int64_t v70; // x24
  const MethodInfo_37A8BAC *v71; // x3
  _QWORD *v72; // x0
  System_Reflection_MethodBase_o *v73; // x0
  const MethodInfo *v74; // x1
  RecommendSupportData_o *v75; // x19
  const MethodInfo_38C8734 *v76; // x0
  _QWORD *v77; // x0
  System_Reflection_MethodBase_o *v78; // x0
  _QWORD *v79; // x0
  _QWORD *v80; // x0
  System_Reflection_MethodBase_o *v81; // x0
  const MethodInfo *v82; // x1
  UserGameEntity_o *SelfUserGame; // x19
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v84; // x8
  RecommendSupportData_o *v85; // x19
  const MethodInfo *v86; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v88; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v91; // x26
  Il2CppObject *Master_object; // x0
  ServantLimitImageMaster_o *v93; // x23
  System_String_o *v94; // x21
  System_String_o *v95; // x22
  __int64 v96; // x24
  int32_t Rarity; // w27
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x27
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x26
  void *v112; // x26
  Il2CppClass *v113; // x27
  int32_t v114; // w0
  Il2CppClass *v115; // x8
  int32_t v116; // w25
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  int64_t v123; // x25
  int32_t v124; // w0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x25
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  int64_t v138; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v139; // x8
  int32_t v140; // w20
  int32_t v141; // w0
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int64_t v148; // x20
  System_String_o *v149; // x20
  System_String_o *v150; // x22
  System_String_o *v151; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v153; // x25
  __int64 v154; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+50h] [xbp-150h] BYREF
  __int128 v156; // [xsp+70h] [xbp-130h]
  __int128 v157; // [xsp+80h] [xbp-120h]
  _BYTE v158[40]; // [xsp+90h] [xbp-110h] BYREF
  __int128 v159[2]; // [xsp+C0h] [xbp-E0h] BYREF
  __int128 v160; // [xsp+E0h] [xbp-C0h]
  _OWORD v161[2]; // [xsp+F0h] [xbp-B0h] BYREF
  char v162[39]; // [xsp+110h] [xbp-90h] BYREF
  __int64 v163; // [xsp+138h] [xbp-68h]
  System_Nullable_T__o v164; // 0:x0.16
  System_Nullable_long__o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16

  v163 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4C1E0E0 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1C3B764(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1C3B764(&DataManager_TypeInfo, v12);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1C3B764(&LocalizationManager_TypeInfo, v15);
    sub_1C3B764(&Method_System_Nullable_long__GetValueOrDefault__, v16);
    sub_1C3B764(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__, v17);
    sub_1C3B764(&Method_System_Nullable_long___ctor__, v18);
    sub_1C3B764(&Method_System_Nullable_ObscuredLong___ctor__, v19);
    sub_1C3B764(&Method_System_Nullable_ObscuredLong__get_HasValue__, v20);
    sub_1C3B764(&Method_System_Nullable_long__get_HasValue__, v21);
    sub_1C3B764(&object___TypeInfo, v22);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1C3B764(&Rarity_TypeInfo, v25);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v26);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_1C3B764(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v28);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__, v30);
    sub_1C3B764(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo, v31);
    sub_1C3B764(&StringLiteral_12145/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, v32);
    sub_1C3B764(&StringLiteral_12143/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, v33);
    sub_1C3B764(&StringLiteral_12144/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, v34);
    sub_1C3B764(&StringLiteral_12146/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v35);
    byte_4C1E0E0 = 1;
  }
  memset(v162, 0, sizeof(v162));
  v160 = 0u;
  memset(v161, 0, 23);
  v36 = sub_1C3B9B0(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_127;
  *(_QWORD *)(v36 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)this, v39, v40, v41, v42, v43, v44);
  if ( this->fields.state != 2 )
    return;
  if ( (offset & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    supportServantListViewManager = (int64_t)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_127;
    Item = RecommendSupportServantSelectListViewManager__GetItem(
             (RecommendSupportServantSelectListViewManager_o *)supportServantListViewManager,
             offset,
             0LL);
  }
  *(_QWORD *)(v36 + 24) = Item;
  v52 = (RecommendSupportServantSelectListViewItem_o **)(v36 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 24), (int64_t)Item, v45, v46, v47, v48, v49, v50);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v52 )
      (*v52)->fields._IsSwapChoice_k__BackingField ^= 1u;
    v58 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v58 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v56 = (System_Reflection_MethodBase_o *)sub_1C3B748(v58, v58[4]);
    v57 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v52 )
      (*v52)->fields._IsSwapLock_k__BackingField ^= 1u;
    v55 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v55 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v56 = (System_Reflection_MethodBase_o *)sub_1C3B748(v55, v55[4]);
    v57 = 11;
LABEL_22:
    OverwriteAssetSoundName__PlaySystemSe(v56, v57, 0, 0LL);
    goto LABEL_23;
  }
  v61 = *v52;
  if ( tabModeKind != 3 )
  {
    if ( v61 )
    {
      if ( v61->fields._IsBase_k__BackingField )
      {
        v72 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v72 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v73 = (System_Reflection_MethodBase_o *)sub_1C3B748(v72, v72[4]);
        OverwriteAssetSoundName__PlaySystemSe(v73, 0, 0, 0LL);
        RecommendSupportServantSelectListMenu__Init(this, v74);
        supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_127;
        v75 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
        supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !v75 )
          goto LABEL_127;
        RecommendSupportData__RemoveServantData(v75, *(_DWORD *)(supportServantListViewManager + 120), 0LL);
        v76 = (const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_76;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v61, v53) )
        goto LABEL_62;
      supportServantListViewManager = (int64_t)*v52;
      if ( !*v52 )
        goto LABEL_127;
      if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v38) )
      {
        goto LABEL_62;
      }
      supportServantListViewManager = (int64_t)*v52;
      if ( !*v52 )
        goto LABEL_127;
      if ( *(_BYTE *)(supportServantListViewManager + 166)
        || *(_BYTE *)(supportServantListViewManager + 220)
        || RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v38) )
      {
LABEL_62:
        v79 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v79 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v56 = (System_Reflection_MethodBase_o *)sub_1C3B748(v79, v79[4]);
        v57 = 2;
        goto LABEL_22;
      }
    }
    v80 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v80 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v81 = (System_Reflection_MethodBase_o *)sub_1C3B748(v80, v80[4]);
    OverwriteAssetSoundName__PlaySystemSe(v81, 0, 0, 0LL);
    RecommendSupportServantSelectListMenu__Init(this, v82);
    if ( !*v52 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_127;
    if ( !SelfUserGame )
      goto LABEL_127;
    v84 = *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array **)(supportServantListViewManager + 112);
    if ( !v84 )
      goto LABEL_127;
    v84->m_Items[1].fields.currentCryptoKey = SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_127;
    v85 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v52 || !v85 )
      goto LABEL_127;
    RecommendSupportData__SetServantData(
      v85,
      *(_DWORD *)(supportServantListViewManager + 120),
      (*v52)->fields._UserServant_k__BackingField,
      0LL);
    v76 = (const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_76:
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance(v76);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v86);
      return;
    }
    goto LABEL_127;
  }
  if ( v61 && !v61->fields._IsEnabled_k__BackingField )
  {
    v77 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v77 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v78 = (System_Reflection_MethodBase_o *)sub_1C3B748(v77, v77[4]);
    OverwriteAssetSoundName__PlaySystemSe(v78, 2, 0, 0LL);
    this->fields.state = 2;
LABEL_23:
    v59 = this->fields.supportServantListViewManager;
    v60 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
      v60,
      (Il2CppObject *)this,
      (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
      0LL);
    if ( v59 )
    {
      RecommendSupportServantSelectListViewManager__SetMode(v59, 2, v60, 0LL);
      return;
    }
LABEL_127:
    sub_1C3B9C0(supportServantListViewManager, v38);
  }
  v62 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v62 = (_QWORD *)sub_1C3B77C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v63 = (System_Reflection_MethodBase_o *)sub_1C3B748(v62, v62[4]);
  OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0, 0LL);
  supportServantListViewManager = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  v66 = *(_QWORD *)(supportServantListViewManager + 120);
  if ( !v66 )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v52, v64);
    return;
  }
  if ( *v52 )
  {
    UserServant_k__BackingField = (*v52)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_127;
    v68 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v69 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v164.fields.hasValue = v158;
    v164.fields.value = (Il2CppObject *)v159;
    memset(v158, 0, sizeof(v158));
    v156 = v68;
    v157 = v69;
    v159[0] = v68;
    v159[1] = v69;
    System_Nullable_ObscuredLong____ctor(
      v164,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v65);
    *(_QWORD *)((char *)v161 + 15) = *(_QWORD *)&v158[32];
    v160 = *(_OWORD *)&v158[1];
    v161[0] = *(_OWORD *)&v158[17];
    if ( v158[0] )
      v70 = v66;
    else
      v70 = 0LL;
    *(_OWORD *)v162 = *(_OWORD *)&v158[1];
    *(_OWORD *)&v162[16] = *(_OWORD *)&v158[17];
    *(_QWORD *)&v162[31] = *(_QWORD *)((char *)v161 + 15);
    if ( v158[0] )
    {
      *(_OWORD *)v158 = *(_OWORD *)&v162[7];
      *(_OWORD *)&v158[16] = *(_OWORD *)&v162[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v155 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v158;
      v165.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v155, 0LL);
      *(_QWORD *)&v165.fields.hasValue = v159;
      v159[0] = 0uLL;
      System_Nullable_long____ctor(v165, Method_System_Nullable_long___ctor__, v71);
      if ( LOBYTE(v159[0]) )
      {
        if ( v70 == *((_QWORD *)&v159[0] + 1) )
          goto LABEL_43;
      }
    }
  }
  else
  {
    v160 = 0u;
    memset(v161, 0, 23);
    memset(v162, 0, sizeof(v162));
  }
  supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  supportServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                             (DataManager_o *)supportServantListViewManager,
                                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
             v66,
             (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  supportServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                             (DataManager_o *)supportServantListViewManager,
                                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_127;
  v88 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v166.fields.currentCryptoKey = klass;
  *(_QWORD *)&v166.fields.fakeValue = monitor;
  supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v166, 0LL);
  if ( !v88 )
    goto LABEL_127;
  v91 = DataMasterBase_object__object__int___GetEntity(
          v88,
          supportServantListViewManager,
          (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( *v52 )
  {
    v93 = (ServantLimitImageMaster_o *)Master_object;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0LL);
    v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, 0LL);
    v96 = sub_1C3B80C(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    supportServantListViewManager = (int64_t)Rarity__getRarityType(Rarity, 0LL);
    if ( !v96 )
      goto LABEL_127;
    v104 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = sub_1C3B8A0(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v96 + 24) )
        goto LABEL_128;
      *(_QWORD *)(v96 + 32) = v104;
      sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 32), v104, v98, v99, v100, v101, v102, v103);
      if ( !v91 )
        goto LABEL_127;
      supportServantListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v91, 0LL);
      v111 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = sub_1C3B8A0(
                                              supportServantListViewManager,
                                              *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v96 + 24) <= 1u )
          goto LABEL_128;
        *(_QWORD *)(v96 + 40) = v111;
        sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 40), v111, v105, v106, v107, v108, v109, v110);
        v113 = Entity[5].klass;
        v112 = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v167.fields.currentCryptoKey = v113;
        *(_QWORD *)&v167.fields.fakeValue = v112;
        v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v167, 0LL);
        v115 = Entity[6].klass;
        *(_QWORD *)&v168.fields.fakeValue = Entity[6].monitor;
        v116 = v114;
        *(_QWORD *)&v168.fields.currentCryptoKey = v115;
        supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v168, 0LL);
        if ( !v93 )
          goto LABEL_127;
        supportServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   v93,
                                                   v116,
                                                   supportServantListViewManager,
                                                   1,
                                                   0LL);
        v123 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = sub_1C3B8A0(
                                                supportServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v96 + 24) <= 2u )
            goto LABEL_128;
          *(_QWORD *)(v96 + 48) = v123;
          sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 48), v123, v117, v118, v119, v120, v121, v122);
          if ( !*v52 )
            goto LABEL_127;
          supportServantListViewManager = (int64_t)(*v52)->fields._UserServant_k__BackingField;
          if ( !supportServantListViewManager )
            goto LABEL_127;
          v124 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
          supportServantListViewManager = (int64_t)Rarity__getRarityType(v124, 0LL);
          v131 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = sub_1C3B8A0(
                                                  supportServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v96 + 24) <= 3u )
              goto LABEL_128;
            *(_QWORD *)(v96 + 56) = v131;
            sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 56), v131, v125, v126, v127, v128, v129, v130);
            if ( !*v52 )
              goto LABEL_127;
            supportServantListViewManager = (int64_t)(*v52)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_127;
            supportServantListViewManager = (int64_t)ServantEntity__getClassName(
                                                       (ServantEntity_o *)supportServantListViewManager,
                                                       0LL);
            v138 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = sub_1C3B8A0(
                                                    supportServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v96 + 24) <= 4u )
                goto LABEL_128;
              *(_QWORD *)(v96 + 64) = v138;
              sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 64), v138, v132, v133, v134, v135, v136, v137);
              supportServantListViewManager = (int64_t)*v52;
              if ( !*v52 )
                goto LABEL_127;
              supportServantListViewManager = RecommendSupportServantSelectListViewItem__get_SvtId(
                                                (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
                                                v38);
              if ( !*v52 )
                goto LABEL_127;
              v139 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v52)->fields._UserServant_k__BackingField;
              if ( !v139 )
                goto LABEL_127;
              v140 = supportServantListViewManager;
              v141 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v139[6], 0LL);
              supportServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                         v93,
                                                         v140,
                                                         v141,
                                                         1,
                                                         0LL);
              v148 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = sub_1C3B8A0(
                                                      supportServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v96 + 24) > 5u )
                {
                  *(_QWORD *)(v96 + 72) = v148;
                  sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 72), v148, v142, v143, v144, v145, v146, v147);
                  v149 = System_String__Format_63383120(v95, (System_Object_array *)v96, 0LL);
                  v150 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, 0LL);
                  v151 = LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v153 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v153,
                    (Il2CppObject *)v36,
                    Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__,
                    0LL);
                  supportServantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    supportServantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_31232212(
                      (CommonUI_o *)Instance,
                      v94,
                      v149,
                      v150,
                      v151,
                      v153,
                      *(_DWORD *)(*(_QWORD *)(supportServantListViewManager + 184) + 488LL),
                      *(_DWORD *)(*(_QWORD *)(supportServantListViewManager + 184) + 500LL),
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
                sub_1C3B9C8(supportServantListViewManager, v38);
              }
            }
          }
        }
      }
    }
    v154 = sub_1C3B9E4();
    sub_1C3B88C(v154, 0LL);
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

  if ( (byte_4C1E0DF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    sub_1C3B764(&StringLiteral_12860/*"SvtEqCombine"*/, v7);
    byte_4C1E0DF = 1;
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
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v11 = *((_DWORD *)gameObject + 30);
  if ( v11 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12860/*"SvtEqCombine"*/, -1, 0LL) )
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
  TitleInfoControl__setBackBtnSprite_38560752((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v13 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v14 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  v16 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C3B9C0(gameObject, v9);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v18 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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

  if ( (byte_4C1E0EA & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1C3B764(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__, v9);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C1E0EA = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  UserServant_k__BackingField = selectItem->fields._UserServant_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v51, 0LL);
  v26 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                      UserServant_k__BackingField->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          UserServant_k__BackingField->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          UserServant_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          UserServant_k__BackingField->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          UserServant_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServant_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                  UserServant_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                       UserServant_k__BackingField->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          UserServant_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1C3B9C0(limitCountSupport, v14);
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

  if ( (byte_4C1E0E5 & 1) == 0 )
  {
    sub_1C3B764(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1C3B764(&StringLiteral_11860/*"SHOP_SCENE_VOICE_STONE"*/, v7);
    sub_1C3B764(&StringLiteral_18003/*"csIBM1026"*/, v8);
    sub_1C3B764(&StringLiteral_18004/*"csIBM273"*/, v9);
    sub_1C3B764(&StringLiteral_17989/*"criFsWebInstaller_Create() failed."*/, v10);
    sub_1C3B764(&StringLiteral_17992/*"critobj01"*/, v11);
    sub_1C3B764(&StringLiteral_11858/*"SHOP_SCENE_VOICE_SPECIAL"*/, v12);
    sub_1C3B764(&StringLiteral_11859/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/, v13);
    sub_1C3B764(&StringLiteral_18005/*"csIBM277"*/, v14);
    sub_1C3B764(&StringLiteral_12747/*"StateQuestAfterActionEnd"*/, v15);
    sub_1C3B764(&StringLiteral_18006/*"csIBM278"*/, v16);
    sub_1C3B764(&StringLiteral_17991/*"crimson"*/, v17);
    sub_1C3B764(&StringLiteral_17990/*"criMovie"*/, v18);
    byte_4C1E0E5 = 1;
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
    v22 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_18006/*"csIBM278"*/ : &StringLiteral_18005/*"csIBM277"*/);
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
    v25 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17991/*"crimson"*/ : &StringLiteral_17992/*"critobj01"*/);
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
    v28 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17989/*"criFsWebInstaller_Create() failed."*/ : &StringLiteral_17990/*"criMovie"*/);
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
      v31 = &StringLiteral_18003/*"csIBM1026"*/;
    else
      v31 = &StringLiteral_18004/*"csIBM273"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v31, 0LL);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_12747/*"StateQuestAfterActionEnd"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11859/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11858/*"SHOP_SCENE_VOICE_SPECIAL"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11860/*"SHOP_SCENE_VOICE_STONE"*/;
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
          v35 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
          sub_1C3B9C0(normalTabButton, *(_QWORD *)&modeKind);
        }
        RecommendSupportServantSelectListViewManager__SetMode_33816680(
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int64_array *v17; // x1
  System_Int64_array *v18; // x2
  bool v19; // w4
  bool v20; // w5
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  System_Int64_array *v28; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C1E0E8 & 1) == 0 )
  {
    sub_1C3B764(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__, v6);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4C1E0E8 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v28 = 0LL;
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
           &v28,
           0LL) )
    {
      this->fields.requestCallback = callback;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v27,
                                                                                          (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v18 = v28;
        v17 = choiceList;
        v20 = 1;
        v19 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C3B9C0(supportServantListViewManager, callback);
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
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v16,
                                                                                          (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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

  if ( (byte_4C1E0ED & 1) == 0 )
  {
    sub_1C3B764(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v3);
    byte_4C1E0ED = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v5 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager )
    sub_1C3B9C0(v6, v7);
  RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A77B10;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A77AC8;
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
  if ( (byte_4C1E0EE & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isRequest);
    byte_4C1E0EE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct RecommendSupportServantSelectListMenu_o *_4__this; // x20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v21; // x21

  if ( (byte_4C1E0EF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__, v8);
    byte_4C1E0EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_31232440(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1C3B9C0(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v21 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C3B9B0(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  RecommendSupportServantSelectListViewManager__SetMode(supportServantListViewManager, 2, v21, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C3B9C0(this, method);
  RecommendSupportServantSelectListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}