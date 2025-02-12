void __fastcall RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB08C5 & 1) == 0 )
  {
    sub_1C13D24(&BaseMenu_TypeInfo, method);
    byte_4BB08C5 = 1;
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
    sub_1C13F80(0LL, method);
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

  if ( (byte_4BB08C0 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, isRequest);
    byte_4BB08C0 = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1C13F80(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_33573108(supportServantListViewManager, 4, v6);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, 0LL);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4BB08C4 & 1) == 0 )
  {
    sub_1C13D24(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, result);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    byte_4BB08C4 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v6 = this->fields.supportServantListViewManager,
        v7 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          v8),
        !v6) )
  {
    sub_1C13F80(supportServantListViewManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v6->fields.callbackFunc, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  RecommendSupportServantSelectListViewManager__SetMode_33543792(v6, 2, v15);
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
      sub_1C13F80(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_33573108(supportServantListViewManager, 4, v5);
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
      sub_1C13F80(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_33573108(supportServantListViewManager, 4, v5);
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
      sub_1C13F80(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_33573108(supportServantListViewManager, 4, v5);
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
      sub_1C13F80(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_33573108(supportServantListViewManager, 4, v5);
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
    sub_1C13CC8(p_requestCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4BB08B7 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_12688/*"SUPPORT_SELECT_NAME_BASE"*/, v3);
    byte_4BB08B7 = 1;
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
                                                                                      (System_String_o *)StringLiteral_12688/*"SUPPORT_SELECT_NAME_BASE"*/,
                                                                                      0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1C13F80(supportServantListViewManager, method);
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
    sub_1C13F80(0LL, method);
  RecommendSupportServantSelectListViewManager__RequestListObject_33573108(supportServantListViewManager, 4, v2);
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

  if ( (byte_4BB08BF & 1) == 0 )
  {
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__, method);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__, v3);
    sub_1C13D24(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5);
    sub_1C13D24(&StringLiteral_12801/*"See Other"*/, v6);
    byte_4BB08BF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12801/*"See Other"*/,
            (int32_t)Instance->fields.dragParentObject,
            0LL),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1C13F80(Instance, v10);
    }
    ListViewManager__SetScrollBarValue(Instance, 0LL);
    v11 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4BB08BC & 1) == 0 )
  {
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__, method);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__, v3);
    sub_1C13D24(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BB08BC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          v10);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4BB08BB & 1) == 0 )
  {
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__, method);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__, v3);
    sub_1C13D24(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BB08BB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          v10);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4BB08BA & 1) == 0 )
  {
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__, method);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__, v3);
    sub_1C13D24(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BB08BA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4BB08BD & 1) == 0 )
  {
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__, method);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__, v3);
    sub_1C13D24(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BB08BD = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4BB08C2 & 1) == 0 )
  {
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__, method);
    byte_4BB08C2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
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
      sub_1C13F80(supportServantListViewManager, v5);
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
  const MethodInfo *v45; // x2
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
  struct RecommendSupportServantSelectListViewManager_o *v59; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v60; // x20
  const MethodInfo *v61; // x3
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  const MethodInfo *v68; // x2
  RecommendSupportServantSelectListViewItem_o *v69; // x0
  _QWORD *v70; // x0
  System_Reflection_MethodBase_o *v71; // x0
  const MethodInfo *v72; // x2
  const MethodInfo_374A8BC *v73; // x3
  int64_t v74; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v76; // q0
  __int128 v77; // q1
  int64_t v78; // x24
  const MethodInfo_3749B88 *v79; // x3
  _QWORD *v80; // x0
  System_Reflection_MethodBase_o *v81; // x0
  const MethodInfo *v82; // x1
  RecommendSupportData_o *v83; // x19
  const MethodInfo_3869BD8 *v84; // x0
  _QWORD *v85; // x0
  System_Reflection_MethodBase_o *v86; // x0
  _QWORD *v87; // x0
  _QWORD *v88; // x0
  System_Reflection_MethodBase_o *v89; // x0
  const MethodInfo *v90; // x1
  UserGameEntity_o *SelfUserGame; // x19
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v92; // x8
  RecommendSupportData_o *v93; // x19
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v95; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v98; // x26
  Il2CppObject *Master_object; // x0
  ServantLimitImageMaster_o *v100; // x23
  System_String_o *v101; // x21
  System_String_o *v102; // x22
  __int64 v103; // x24
  int32_t Rarity; // w27
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x27
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  int64_t v118; // x26
  void *v119; // x26
  Il2CppClass *v120; // x27
  int32_t v121; // w0
  Il2CppClass *v122; // x8
  int32_t v123; // w25
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x25
  int32_t v131; // w0
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  int64_t v138; // x25
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  int64_t v145; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v146; // x8
  int32_t v147; // w20
  int32_t v148; // w0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  int64_t v155; // x20
  System_String_o *v156; // x20
  System_String_o *v157; // x22
  System_String_o *v158; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v160; // x25
  __int64 v161; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+20h] [xbp-150h] BYREF
  __int128 v163; // [xsp+40h] [xbp-130h]
  __int128 v164; // [xsp+50h] [xbp-120h]
  _BYTE v165[40]; // [xsp+60h] [xbp-110h] BYREF
  __int128 v166[2]; // [xsp+90h] [xbp-E0h] BYREF
  __int128 v167; // [xsp+B0h] [xbp-C0h]
  _OWORD v168[2]; // [xsp+C0h] [xbp-B0h] BYREF
  char v169[39]; // [xsp+E0h] [xbp-90h] BYREF
  __int64 v170; // [xsp+108h] [xbp-68h]
  System_Nullable_T__o v171; // 0:x0.16
  System_Nullable_long__o v172; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16

  v170 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4BB08B9 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1C13D24(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1C13D24(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1C13D24(&DataManager_TypeInfo, v12);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1C13D24(&LocalizationManager_TypeInfo, v15);
    sub_1C13D24(&Method_System_Nullable_long__GetValueOrDefault__, v16);
    sub_1C13D24(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__, v17);
    sub_1C13D24(&Method_System_Nullable_long___ctor__, v18);
    sub_1C13D24(&Method_System_Nullable_ObscuredLong___ctor__, v19);
    sub_1C13D24(&Method_System_Nullable_ObscuredLong__get_HasValue__, v20);
    sub_1C13D24(&Method_System_Nullable_long__get_HasValue__, v21);
    sub_1C13D24(&object___TypeInfo, v22);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1C13D24(&Rarity_TypeInfo, v25);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v26);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v28);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__, v30);
    sub_1C13D24(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo, v31);
    sub_1C13D24(&StringLiteral_12091/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v32);
    sub_1C13D24(&StringLiteral_12089/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v33);
    sub_1C13D24(&StringLiteral_12090/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v34);
    sub_1C13D24(&StringLiteral_12092/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v35);
    byte_4BB08B9 = 1;
  }
  memset(v169, 0, sizeof(v169));
  v167 = 0u;
  memset(v168, 0, 23);
  v36 = sub_1C13F70(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_127;
  *(_QWORD *)(v36 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)this, v39, v40, v41, v42, v43, v44);
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
             v45);
  }
  *(_QWORD *)(v36 + 24) = Item;
  v52 = (RecommendSupportServantSelectListViewItem_o **)(v36 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 24), (int64_t)Item, (int64_t)v45, v46, v47, v48, v49, v50);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v52 )
      (*v52)->fields._IsSwapChoice_k__BackingField ^= 1u;
    v58 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v58 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v56 = (System_Reflection_MethodBase_o *)sub_1C13D08(v58, v58[4]);
    v57 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v52 )
      (*v52)->fields._IsSwapLock_k__BackingField ^= 1u;
    v55 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v55 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v56 = (System_Reflection_MethodBase_o *)sub_1C13D08(v55, v55[4]);
    v57 = 11;
LABEL_22:
    OverwriteAssetSoundName__PlaySystemSe(v56, v57, 0, 0LL);
    goto LABEL_23;
  }
  v69 = *v52;
  if ( tabModeKind != 3 )
  {
    if ( v69 )
    {
      if ( v69->fields._IsBase_k__BackingField )
      {
        v80 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v80 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v81 = (System_Reflection_MethodBase_o *)sub_1C13D08(v80, v80[4]);
        OverwriteAssetSoundName__PlaySystemSe(v81, 0, 0, 0LL);
        RecommendSupportServantSelectListMenu__Init(this, v82);
        supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_127;
        v83 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
        supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !v83 )
          goto LABEL_127;
        RecommendSupportData__RemoveServantData(v83, *(_DWORD *)(supportServantListViewManager + 120), 0LL);
        v84 = (const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_76;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v69, v53) )
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
        v87 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v87 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v56 = (System_Reflection_MethodBase_o *)sub_1C13D08(v87, v87[4]);
        v57 = 2;
        goto LABEL_22;
      }
    }
    v88 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v88 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v89 = (System_Reflection_MethodBase_o *)sub_1C13D08(v88, v88[4]);
    OverwriteAssetSoundName__PlaySystemSe(v89, 0, 0, 0LL);
    RecommendSupportServantSelectListMenu__Init(this, v90);
    if ( !*v52 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_127;
    if ( !SelfUserGame )
      goto LABEL_127;
    v92 = *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array **)(supportServantListViewManager + 112);
    if ( !v92 )
      goto LABEL_127;
    v92->m_Items[1].fields.currentCryptoKey = SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_127;
    v93 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v52 || !v93 )
      goto LABEL_127;
    RecommendSupportData__SetServantData(
      v93,
      *(_DWORD *)(supportServantListViewManager + 120),
      (*v52)->fields._UserServant_k__BackingField,
      0LL);
    v84 = (const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_76:
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance(v84);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, 0LL);
      return;
    }
    goto LABEL_127;
  }
  if ( v69 && !v69->fields._IsEnabled_k__BackingField )
  {
    v85 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v85 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v86 = (System_Reflection_MethodBase_o *)sub_1C13D08(v85, v85[4]);
    OverwriteAssetSoundName__PlaySystemSe(v86, 2, 0, 0LL);
    this->fields.state = 2;
LABEL_23:
    v59 = this->fields.supportServantListViewManager;
    v60 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
      v60,
      (Il2CppObject *)this,
      (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
      v61);
    if ( v59 )
    {
      v59->fields.callbackFunc = v60;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v59->fields.callbackFunc, (int64_t)v60, v62, v63, v64, v65, v66, v67);
      RecommendSupportServantSelectListViewManager__SetMode_33543792(v59, 2, v68);
      return;
    }
LABEL_127:
    sub_1C13F80(supportServantListViewManager, v38);
  }
  v70 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v70 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v71 = (System_Reflection_MethodBase_o *)sub_1C13D08(v70, v70[4]);
  OverwriteAssetSoundName__PlaySystemSe(v71, 0, 0, 0LL);
  supportServantListViewManager = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  v74 = *(_QWORD *)(supportServantListViewManager + 120);
  if ( !v74 )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v52, v72);
    return;
  }
  if ( *v52 )
  {
    UserServant_k__BackingField = (*v52)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_127;
    v76 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v77 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v171.fields.hasValue = v165;
    v171.fields.value = (Il2CppObject *)v166;
    memset(v165, 0, sizeof(v165));
    v163 = v76;
    v164 = v77;
    v166[0] = v76;
    v166[1] = v77;
    System_Nullable_ObscuredLong____ctor(
      v171,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v73);
    *(_QWORD *)((char *)v168 + 15) = *(_QWORD *)&v165[32];
    v167 = *(_OWORD *)&v165[1];
    v168[0] = *(_OWORD *)&v165[17];
    if ( v165[0] )
      v78 = v74;
    else
      v78 = 0LL;
    *(_OWORD *)v169 = *(_OWORD *)&v165[1];
    *(_OWORD *)&v169[16] = *(_OWORD *)&v165[17];
    *(_QWORD *)&v169[31] = *(_QWORD *)((char *)v168 + 15);
    if ( v165[0] )
    {
      *(_OWORD *)v165 = *(_OWORD *)&v169[7];
      *(_OWORD *)&v165[16] = *(_OWORD *)&v169[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v162 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v165;
      v172.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v162, 0LL);
      *(_QWORD *)&v172.fields.hasValue = v166;
      v166[0] = 0uLL;
      System_Nullable_long____ctor(v172, Method_System_Nullable_long___ctor__, v79);
      if ( LOBYTE(v166[0]) )
      {
        if ( v78 == *((_QWORD *)&v166[0] + 1) )
          goto LABEL_43;
      }
    }
  }
  else
  {
    v167 = 0u;
    memset(v168, 0, 23);
    memset(v169, 0, sizeof(v169));
  }
  supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  supportServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                             (DataManager_o *)supportServantListViewManager,
                                             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
             v74,
             (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  supportServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                             (DataManager_o *)supportServantListViewManager,
                                             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_127;
  v95 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v173.fields.currentCryptoKey = klass;
  *(_QWORD *)&v173.fields.fakeValue = monitor;
  supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v173, 0LL);
  if ( !v95 )
    goto LABEL_127;
  v98 = DataMasterBase_object__object__int___GetEntity(
          v95,
          supportServantListViewManager,
          (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( *v52 )
  {
    v100 = (ServantLimitImageMaster_o *)Master_object;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v101 = LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v102 = LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
    v103 = sub_1C13DCC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    supportServantListViewManager = (int64_t)Rarity__getRarityType(Rarity, 0LL);
    if ( !v103 )
      goto LABEL_127;
    v111 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = sub_1C13E60(
                                            supportServantListViewManager,
                                            *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v103 + 24) )
        goto LABEL_128;
      *(_QWORD *)(v103 + 32) = v111;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v103 + 32), v111, v105, v106, v107, v108, v109, v110);
      if ( !v98 )
        goto LABEL_127;
      supportServantListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v98, 0LL);
      v118 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = sub_1C13E60(
                                              supportServantListViewManager,
                                              *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v103 + 24) <= 1u )
          goto LABEL_128;
        *(_QWORD *)(v103 + 40) = v118;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v103 + 40), v118, v112, v113, v114, v115, v116, v117);
        v120 = Entity[5].klass;
        v119 = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v174.fields.currentCryptoKey = v120;
        *(_QWORD *)&v174.fields.fakeValue = v119;
        v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v174, 0LL);
        v122 = Entity[6].klass;
        *(_QWORD *)&v175.fields.fakeValue = Entity[6].monitor;
        v123 = v121;
        *(_QWORD *)&v175.fields.currentCryptoKey = v122;
        supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v175, 0LL);
        if ( !v100 )
          goto LABEL_127;
        supportServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   v100,
                                                   v123,
                                                   supportServantListViewManager,
                                                   0LL);
        v130 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = sub_1C13E60(
                                                supportServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v103 + 24) <= 2u )
            goto LABEL_128;
          *(_QWORD *)(v103 + 48) = v130;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v103 + 48), v130, v124, v125, v126, v127, v128, v129);
          if ( !*v52 )
            goto LABEL_127;
          supportServantListViewManager = (int64_t)(*v52)->fields._UserServant_k__BackingField;
          if ( !supportServantListViewManager )
            goto LABEL_127;
          v131 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
          supportServantListViewManager = (int64_t)Rarity__getRarityType(v131, 0LL);
          v138 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = sub_1C13E60(
                                                  supportServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v103 + 24) <= 3u )
              goto LABEL_128;
            *(_QWORD *)(v103 + 56) = v138;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v103 + 56), v138, v132, v133, v134, v135, v136, v137);
            if ( !*v52 )
              goto LABEL_127;
            supportServantListViewManager = (int64_t)(*v52)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_127;
            supportServantListViewManager = (int64_t)ServantEntity__getClassName(
                                                       (ServantEntity_o *)supportServantListViewManager,
                                                       0LL);
            v145 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = sub_1C13E60(
                                                    supportServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v103 + 24) <= 4u )
                goto LABEL_128;
              *(_QWORD *)(v103 + 64) = v145;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v103 + 64), v145, v139, v140, v141, v142, v143, v144);
              supportServantListViewManager = (int64_t)*v52;
              if ( !*v52 )
                goto LABEL_127;
              supportServantListViewManager = RecommendSupportServantSelectListViewItem__get_SvtId(
                                                (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
                                                v38);
              if ( !*v52 )
                goto LABEL_127;
              v146 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v52)->fields._UserServant_k__BackingField;
              if ( !v146 )
                goto LABEL_127;
              v147 = supportServantListViewManager;
              v148 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v146[6], 0LL);
              supportServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                         v100,
                                                         v147,
                                                         v148,
                                                         0LL);
              v155 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = sub_1C13E60(
                                                      supportServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v103 + 24) > 5u )
                {
                  *(_QWORD *)(v103 + 72) = v155;
                  sub_1C13CC8((PartyOrganizationUtility_o *)(v103 + 72), v155, v149, v150, v151, v152, v153, v154);
                  v156 = System_String__Format_62982452(v102, (System_Object_array *)v103, 0LL);
                  v157 = LocalizationManager__Get((System_String_o *)StringLiteral_12090/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v158 = LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v160 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C13F70(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v160,
                    (Il2CppObject *)v36,
                    Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__,
                    0LL);
                  supportServantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_31070492(
                      (CommonUI_o *)Instance,
                      v101,
                      v156,
                      v157,
                      v158,
                      v160,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_127;
                }
LABEL_128:
                sub_1C13F88(supportServantListViewManager, v38);
              }
            }
          }
        }
      }
    }
    v161 = sub_1C13FA4();
    sub_1C13E4C(v161, 0LL);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v27; // x20

  if ( (byte_4BB08B8 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    sub_1C13D24(&StringLiteral_12801/*"See Other"*/, v7);
    byte_4BB08B8 = 1;
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
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v11 = *((_DWORD *)gameObject + 30);
  if ( v11 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12801/*"See Other"*/, -1, 0LL) )
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
  TitleInfoControl__setBackBtnSprite_38286168((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v13 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v14 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  v17 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v18);
  if ( !v16
    || (v16->fields.callbackFunc = v17,
        sub_1C13CC8((PartyOrganizationUtility_o *)&v16->fields.callbackFunc, (int64_t)v17, v19, v20, v21, v22, v23, v24),
        RecommendSupportServantSelectListViewManager__SetMode_33543792(v16, 1, v25),
        (gameObject = this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                       (RecommendSupportServantSelectListViewManager_o *)gameObject,
                       v9),
        !scaleChangeTabSprite) )
  {
LABEL_20:
    sub_1C13F80(gameObject, v9);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v27 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v27, 0LL);
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

  if ( (byte_4BB08C3 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1C13D24(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__, v9);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BB08C3 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  UserServant_k__BackingField = selectItem->fields._UserServant_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v51, 0LL);
  v26 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                      UserServant_k__BackingField->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          UserServant_k__BackingField->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          UserServant_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          UserServant_k__BackingField->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          UserServant_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServant_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                  UserServant_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                       UserServant_k__BackingField->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          UserServant_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1C13F80(limitCountSupport, v14);
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
  const MethodInfo *v32; // x2
  UILabel_o *explanationLabel; // x21
  __int64 *v34; // x8
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v36; // x21
  const MethodInfo *v37; // x3
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int32_t v44; // w1

  if ( (byte_4BB08BE & 1) == 0 )
  {
    sub_1C13D24(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1C13D24(&LocalizationManager_TypeInfo, v5);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1C13D24(&StringLiteral_11822/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/, v7);
    sub_1C13D24(&StringLiteral_17931/*"button_allchoice_reg"*/, v8);
    sub_1C13D24(&StringLiteral_17932/*"button_allchoice_unreg"*/, v9);
    sub_1C13D24(&StringLiteral_17917/*"buffStateNoticeName"*/, v10);
    sub_1C13D24(&StringLiteral_17920/*"bufferSize"*/, v11);
    sub_1C13D24(&StringLiteral_11820/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/, v12);
    sub_1C13D24(&StringLiteral_11821/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/, v13);
    sub_1C13D24(&StringLiteral_17933/*"button_alllock_reg"*/, v14);
    sub_1C13D24(&StringLiteral_12688/*"SUPPORT_SELECT_NAME_BASE"*/, v15);
    sub_1C13D24(&StringLiteral_17934/*"button_alllock_unreg"*/, v16);
    sub_1C13D24(&StringLiteral_17919/*"buffer is null"*/, v17);
    sub_1C13D24(&StringLiteral_17918/*"buffer"*/, v18);
    byte_4BB08BE = 1;
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
          v22 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17934/*"button_alllock_unreg"*/ : &StringLiteral_17933/*"button_alllock_reg"*/);
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
                v25 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17919/*"buffer is null"*/ : &StringLiteral_17920/*"bufferSize"*/);
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
                                               ? &StringLiteral_17917/*"buffStateNoticeName"*/
                                               : &StringLiteral_17918/*"buffer"*/);
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
                              v31 = &StringLiteral_17931/*"button_allchoice_reg"*/;
                            else
                              v31 = &StringLiteral_17932/*"button_allchoice_unreg"*/;
                            UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v31, 0LL);
                            switch ( this->fields.tabModeKind )
                            {
                              case 0:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v34 = &StringLiteral_12688/*"SUPPORT_SELECT_NAME_BASE"*/;
                                goto LABEL_41;
                              case 1:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v34 = &StringLiteral_11821/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/;
                                goto LABEL_41;
                              case 2:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v34 = &StringLiteral_11820/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/;
                                goto LABEL_41;
                              case 3:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v34 = &StringLiteral_11822/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/;
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
                                  v44 = 1;
                                  goto LABEL_48;
                                }
                                RecommendSupportServantSelectListViewManager__UpdateItemState(
                                  (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
                                  modeKind == 3,
                                  v32);
                                supportServantListViewManager = this->fields.supportServantListViewManager;
                                v36 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
                                RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
                                  v36,
                                  (Il2CppObject *)this,
                                  (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
                                  v37);
                                if ( supportServantListViewManager )
                                {
                                  supportServantListViewManager->fields.callbackFunc = v36;
                                  sub_1C13CC8(
                                    (PartyOrganizationUtility_o *)&supportServantListViewManager->fields.callbackFunc,
                                    (int64_t)v36,
                                    v38,
                                    v39,
                                    v40,
                                    v41,
                                    v42,
                                    v43);
                                  v44 = 2;
                                  normalTabButton = (UnityEngine_Behaviour_o *)supportServantListViewManager;
LABEL_48:
                                  RecommendSupportServantSelectListViewManager__SetMode_33543792(
                                    (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
                                    v44,
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
    sub_1C13F80(normalTabButton, *(_QWORD *)&modeKind);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // x1
  System_Int64_array *v19; // x2
  bool v20; // w4
  bool v21; // w5
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  System_Int64_array *v29; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BB08C1 & 1) == 0 )
  {
    sub_1C13D24(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__, v7);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4BB08C1 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v29 = 0LL;
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
           &v29,
           v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v28,
                                                                                          (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v19 = v29;
        v18 = choiceList;
        v21 = 1;
        v20 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C13F80(supportServantListViewManager, callback);
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
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v17,
                                                                                          (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v19 = unlockList;
        v18 = lockList;
        v20 = 1;
        v21 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v18,
          v19,
          0,
          v20,
          v21,
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4BB08C6 & 1) == 0 )
  {
    sub_1C13D24(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v3);
    byte_4BB08C6 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v5 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v6);
  if ( !supportServantListViewManager )
    sub_1C13F80(v7, v8);
  supportServantListViewManager->fields.callbackFunc = v5;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&supportServantListViewManager->fields.callbackFunc,
    (int64_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  RecommendSupportServantSelectListViewManager__SetMode_33543792(supportServantListViewManager, 2, v15);
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
  sub_1C13CC8(
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
  if ( (sub_1C13DE4(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A50810;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A507C8;
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
  if ( (byte_4BB08C7 & 1) == 0 )
  {
    sub_1C13D24(&bool_TypeInfo, isRequest);
    byte_4BB08C7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v9, callback, object);
}


void __fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x2

  if ( (byte_4BB08C8 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isDecide);
    sub_1C13D24(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C13D24(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__, v8);
    byte_4BB08C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_31071160(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1C13F80(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v21 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1C13F70(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v22);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  supportServantListViewManager->fields.callbackFunc = v21;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&supportServantListViewManager->fields.callbackFunc,
    (int64_t)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  RecommendSupportServantSelectListViewManager__SetMode_33543792(supportServantListViewManager, 2, v29);
}


void __fastcall RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C13F80(this, method);
  RecommendSupportServantSelectListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}