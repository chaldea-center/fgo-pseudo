void __fastcall RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FA894 & 1) == 0 )
  {
    sub_1B64870(&BaseMenu_TypeInfo, method);
    byte_49FA894 = 1;
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
    sub_1B64ACC(0LL, method);
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

  if ( (byte_49FA88F & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, isRequest);
    byte_49FA88F = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B64ACC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32291388(supportServantListViewManager, 3, 0LL);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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

  if ( (byte_49FA893 & 1) == 0 )
  {
    sub_1B64870(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    byte_49FA893 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, 0LL),
        v6 = this->fields.supportServantListViewManager,
        v7 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          0LL),
        !v6) )
  {
    sub_1B64ACC(supportServantListViewManager, result);
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
      sub_1B64ACC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32291388(supportServantListViewManager, 3, 0LL);
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
      sub_1B64ACC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32291388(supportServantListViewManager, 3, 0LL);
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
      sub_1B64ACC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32291388(supportServantListViewManager, 3, 0LL);
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
      sub_1B64ACC(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__SetMode_32291388(supportServantListViewManager, 3, 0LL);
  }
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 3, method);
}


void __fastcall RecommendSupportServantSelectListMenu__EndStatusSync(
        RecommendSupportServantSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_requestCallback; // x0
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v5; // x19
  struct RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requestCallback;
  v5 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0LL;
    sub_1B64814(p_requestCallback, 0, (int32_t)method, v3);
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

  if ( (byte_49FA886 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_12414/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v3);
    byte_49FA886 = 1;
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
                                                                                      (System_String_o *)StringLiteral_12414/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                                      0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1B64ACC(supportServantListViewManager, method);
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
    sub_1B64ACC(0LL, method);
  RecommendSupportServantSelectListViewManager__SetMode_32291388(supportServantListViewManager, 3, 0LL);
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
  const MethodInfo *v12; // x2

  if ( (byte_49FA88E & 1) == 0 )
  {
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__, method);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__, v3);
    sub_1B64870(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5);
    sub_1B64870(&StringLiteral_12518/*"SelectIndex"*/, v6);
    byte_49FA88E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B64854(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12518/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0LL),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64ACC(Instance, v10);
    }
    ListViewManager__SetScrollBarValue(Instance, 0LL);
    v11 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndCancelButton__,
      0LL);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v11, v12);
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
  const MethodInfo *v10; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_49FA88B & 1) == 0 )
  {
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__, method);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__, v3);
    sub_1B64870(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA88B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          0LL);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v10);
        return;
      }
      v11 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
        0LL);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v11, v12);
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
  const MethodInfo *v10; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_49FA88A & 1) == 0 )
  {
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__, method);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__, v3);
    sub_1B64870(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA88A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          0LL);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v9, v10);
        return;
      }
      v11 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
        0LL);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v11, v12);
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
  const MethodInfo *v8; // x2

  if ( (byte_49FA889 & 1) == 0 )
  {
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__, method);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__, v3);
    sub_1B64870(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA889 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__,
      0LL);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v8);
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
  const MethodInfo *v8; // x2

  if ( (byte_49FA88C & 1) == 0 )
  {
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__, method);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__, v3);
    sub_1B64870(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA88C = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabPush__,
      0LL);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v7, v8);
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

  if ( (byte_49FA891 & 1) == 0 )
  {
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__, method);
    byte_49FA891 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
      sub_1B64ACC(supportServantListViewManager, v5);
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
  __int64 v36; // x20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  RecommendSupportServantSelectListViewItem_o *Item; // x1
  RecommendSupportServantSelectListViewItem_o **v44; // x19
  int32_t tabModeKind; // w8
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  int32_t v48; // w1
  _QWORD *v49; // x0
  RecommendSupportServantSelectListViewManager_o *v50; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v51; // x20
  RecommendSupportServantSelectListViewItem_o *v52; // x0
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  const MethodInfo *v55; // x2
  const MethodInfo_35D1524 *v56; // x3
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v59; // q0
  __int128 v60; // q1
  int64_t v61; // x24
  const MethodInfo_35D07F0 *v62; // x3
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  const MethodInfo *v65; // x1
  RecommendSupportData_o *clipRange; // x19
  const MethodInfo_36EE318 *v67; // x0
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  _QWORD *v70; // x0
  _QWORD *v71; // x0
  System_Reflection_MethodBase_o *v72; // x0
  const MethodInfo *v73; // x1
  UserGameEntity_o *SelfUserGame; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v75; // x8
  RecommendSupportData_o *v76; // x20
  const MethodInfo *v77; // x2
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v79; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v82; // x25
  Il2CppObject *Master_object; // x21
  int32_t v84; // w22
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v86; // w27
  struct UserServantEntity_o *v87; // x8
  int32_t v88; // w22
  __int64 v89; // x23
  __int64 v90; // x24
  int32_t v91; // w0
  int32_t v92; // w24
  System_String_o *v93; // x21
  System_String_o *v94; // x22
  __int64 v95; // x23
  int32_t Rarity; // w26
  int32_t v97; // w2
  int32_t v98; // w3
  RecommendSupportServantSelectListViewManager_o *v99; // x26
  int32_t v100; // w2
  int32_t v101; // w3
  RecommendSupportServantSelectListViewManager_o *v102; // x26
  int32_t v103; // w2
  int32_t v104; // w3
  RecommendSupportServantSelectListViewManager_o *v105; // x25
  int32_t v106; // w0
  int32_t v107; // w2
  int32_t v108; // w3
  RecommendSupportServantSelectListViewManager_o *v109; // x25
  int32_t v110; // w2
  int32_t v111; // w3
  RecommendSupportServantSelectListViewManager_o *v112; // x25
  int32_t v113; // w2
  int32_t v114; // w3
  RecommendSupportServantSelectListViewManager_o *v115; // x19
  System_String_o *v116; // x19
  System_String_o *v117; // x22
  System_String_o *v118; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v120; // x25
  __int64 v121; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+10h] [xbp-150h] BYREF
  __int128 v123; // [xsp+30h] [xbp-130h]
  __int128 v124; // [xsp+40h] [xbp-120h]
  _BYTE v125[40]; // [xsp+50h] [xbp-110h] BYREF
  __int128 v126[2]; // [xsp+80h] [xbp-E0h] BYREF
  __int128 v127; // [xsp+A0h] [xbp-C0h]
  _OWORD v128[2]; // [xsp+B0h] [xbp-B0h] BYREF
  char v129[39]; // [xsp+D0h] [xbp-90h] BYREF
  __int64 v130; // [xsp+F8h] [xbp-68h]
  System_Nullable_T__o v131; // 0:x0.16
  System_Nullable_long__o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16

  v130 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_49FA888 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B64870(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1B64870(&DataManager_TypeInfo, v12);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1B64870(&LocalizationManager_TypeInfo, v15);
    sub_1B64870(&Method_System_Nullable_long__GetValueOrDefault__, v16);
    sub_1B64870(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__, v17);
    sub_1B64870(&Method_System_Nullable_long___ctor__, v18);
    sub_1B64870(&Method_System_Nullable_ObscuredLong___ctor__, v19);
    sub_1B64870(&Method_System_Nullable_ObscuredLong__get_HasValue__, v20);
    sub_1B64870(&Method_System_Nullable_long__get_HasValue__, v21);
    sub_1B64870(&object___TypeInfo, v22);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1B64870(&Rarity_TypeInfo, v25);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v26);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_1B64870(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v28);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__, v30);
    sub_1B64870(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo, v31);
    sub_1B64870(&StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v32);
    sub_1B64870(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v33);
    sub_1B64870(&StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v34);
    sub_1B64870(&StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v35);
    byte_49FA888 = 1;
  }
  memset(v129, 0, sizeof(v129));
  v127 = 0u;
  memset(v128, 0, 23);
  v36 = sub_1B64ABC(RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo);
  RecommendSupportServantSelectListMenu___c__DisplayClass24_0___ctor(
    (RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *)v36,
    0LL);
  if ( !v36 )
    goto LABEL_128;
  *(_QWORD *)(v36 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v36 + 16), (int32_t)this, v39, v40);
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
      goto LABEL_128;
    Item = RecommendSupportServantSelectListViewManager__GetItem(supportServantListViewManager, offset, 0LL);
  }
  *(_QWORD *)(v36 + 24) = Item;
  v44 = (RecommendSupportServantSelectListViewItem_o **)(v36 + 24);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v36 + 24), (int32_t)Item, v41, v42);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v44 )
      RecommendSupportServantSelectListViewItem__SwapChoice(*v44, 0LL);
    v49 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v49 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v47 = (System_Reflection_MethodBase_o *)sub_1B64854(v49, v49[4]);
    v48 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v44 )
      RecommendSupportServantSelectListViewItem__SwapLock(*v44, 0LL);
    v46 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v46 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v47 = (System_Reflection_MethodBase_o *)sub_1B64854(v46, v46[4]);
    v48 = 11;
LABEL_22:
    OverwriteAssetSoundName__PlaySystemSe(v47, v48, 0LL);
    goto LABEL_23;
  }
  v52 = *v44;
  if ( tabModeKind != 3 )
  {
    if ( v52 )
    {
      if ( v52->fields._IsBase_k__BackingField )
      {
        v63 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v63 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v64 = (System_Reflection_MethodBase_o *)sub_1B64854(v63, v63[4]);
        OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0LL);
        RecommendSupportServantSelectListMenu__Init(this, v65);
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_128;
        clipRange = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !clipRange )
          goto LABEL_128;
        RecommendSupportData__RemoveServantData(
          clipRange,
          (int32_t)supportServantListViewManager->fields.dragParentObject,
          0LL);
        v67 = (const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_76;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v52, 0LL) )
        goto LABEL_62;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v44;
      if ( !*v44 )
        goto LABEL_128;
      if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             0LL) )
      {
        goto LABEL_62;
      }
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)*v44;
      if ( !*v44 )
        goto LABEL_128;
      if ( BYTE2(supportServantListViewManager->fields.clipOffset.fields.y)
        || *(&supportServantListViewManager->fields.execObjectExtraFlag + 2)
        || RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             0LL) )
      {
LABEL_62:
        v70 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v70 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v47 = (System_Reflection_MethodBase_o *)sub_1B64854(v70, v70[4]);
        v48 = 2;
        goto LABEL_22;
      }
    }
    v71 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v71 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v72 = (System_Reflection_MethodBase_o *)sub_1B64854(v71, v71[4]);
    OverwriteAssetSoundName__PlaySystemSe(v72, 0, 0LL);
    RecommendSupportServantSelectListMenu__Init(this, v73);
    if ( !*v44 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_128;
    if ( !SelfUserGame )
      goto LABEL_128;
    v75 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)supportServantListViewManager->fields.clipRange;
    if ( !v75 )
      goto LABEL_128;
    v75->m_Items[1].fields.currentCryptoKey = SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_128;
    v76 = (RecommendSupportData_o *)supportServantListViewManager->fields.clipRange;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v44 || !v76 )
      goto LABEL_128;
    RecommendSupportData__SetServantData(
      v76,
      (int32_t)supportServantListViewManager->fields.dragParentObject,
      (*v44)->fields._UserServant_k__BackingField,
      0LL);
    v67 = (const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_76:
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance(v67);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, v77);
      return;
    }
    goto LABEL_128;
  }
  if ( v52 && !v52->fields._IsEnabled_k__BackingField )
  {
    v68 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v68 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v69 = (System_Reflection_MethodBase_o *)sub_1B64854(v68, v68[4]);
    OverwriteAssetSoundName__PlaySystemSe(v69, 2, 0LL);
    this->fields.state = 2;
LABEL_23:
    v50 = this->fields.supportServantListViewManager;
    v51 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
    RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
      v51,
      (Il2CppObject *)this,
      (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
      0LL);
    if ( v50 )
    {
      RecommendSupportServantSelectListViewManager__SetMode(v50, 2, v51, 0LL);
      return;
    }
LABEL_128:
    sub_1B64ACC(supportServantListViewManager, v38);
  }
  v53 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v53 = (_QWORD *)sub_1B64888(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v54 = (System_Reflection_MethodBase_o *)sub_1B64854(v53, v53[4]);
  OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0LL);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !supportServantListViewManager )
    goto LABEL_128;
  dragParentObject = (int64_t)supportServantListViewManager->fields.dragParentObject;
  if ( !dragParentObject )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v44, v55);
    return;
  }
  if ( *v44 )
  {
    UserServant_k__BackingField = (*v44)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_128;
    v59 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v60 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v131.fields.hasValue = v125;
    v131.fields.value = (Il2CppObject *)v126;
    memset(v125, 0, sizeof(v125));
    v123 = v59;
    v124 = v60;
    v126[0] = v59;
    v126[1] = v60;
    System_Nullable_ObscuredLong____ctor(
      v131,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v56);
    *(_QWORD *)((char *)v128 + 15) = *(_QWORD *)&v125[32];
    v127 = *(_OWORD *)&v125[1];
    v128[0] = *(_OWORD *)&v125[17];
    if ( v125[0] )
      v61 = dragParentObject;
    else
      v61 = 0LL;
    *(_OWORD *)v129 = *(_OWORD *)&v125[1];
    *(_OWORD *)&v129[16] = *(_OWORD *)&v125[17];
    *(_QWORD *)&v129[31] = *(_QWORD *)((char *)v128 + 15);
    if ( v125[0] )
    {
      *(_OWORD *)v125 = *(_OWORD *)&v129[7];
      *(_OWORD *)&v125[16] = *(_OWORD *)&v129[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v122 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v125;
      v132.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v122, 0LL);
      *(_QWORD *)&v132.fields.hasValue = v126;
      v126[0] = 0uLL;
      System_Nullable_long____ctor(v132, Method_System_Nullable_long___ctor__, v62);
      if ( LOBYTE(v126[0]) )
      {
        if ( v61 == *((_QWORD *)&v126[0] + 1) )
          goto LABEL_43;
      }
    }
  }
  else
  {
    v127 = 0u;
    memset(v128, 0, 23);
    memset(v129, 0, sizeof(v129));
  }
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_128;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_128;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
             dragParentObject,
             (const MethodInfo_30D632C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_128;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)supportServantListViewManager,
                                                                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_128;
  v79 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v133.fields.currentCryptoKey = klass;
  *(_QWORD *)&v133.fields.fakeValue = monitor;
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                                      v133,
                                                                                      0LL);
  if ( !v79 )
    goto LABEL_128;
  v82 = DataMasterBase_object__object__int___GetEntity(
          v79,
          (int32_t)supportServantListViewManager,
          (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
          0LL);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                                                      0LL);
  if ( !Master_object )
    goto LABEL_128;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 v84,
                                 (int32_t)supportServantListViewManager,
                                 0LL);
  if ( *v44 )
  {
    v86 = ServantLimitCountSealAfter;
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewItem__get_SvtId(
                                                                                        *v44,
                                                                                        0LL);
    if ( !*v44 )
      goto LABEL_128;
    v87 = (*v44)->fields._UserServant_k__BackingField;
    if ( !v87 )
      goto LABEL_128;
    v88 = (int)supportServantListViewManager;
    v90 = *(_QWORD *)&v87->fields.limitCount.fields.currentCryptoKey;
    v89 = *(_QWORD *)&v87->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v134.fields.currentCryptoKey = v90;
    *(_QWORD *)&v134.fields.fakeValue = v89;
    v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v134, 0LL);
    v92 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
            (ServantLimitImageMaster_o *)Master_object,
            v88,
            v91,
            0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v93 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v95 = sub_1B64918(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v95 )
      goto LABEL_128;
    v99 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B649AC(
                                                                                              supportServantListViewManager,
                                                                                              *(_QWORD *)(*(_QWORD *)v95 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v95 + 24) )
        goto LABEL_129;
      *(_QWORD *)(v95 + 32) = v99;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v95 + 32), (int32_t)v99, v97, v98);
      if ( !v82 )
        goto LABEL_128;
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                          (ServantEntity_o *)v82,
                                                                                          0LL);
      v102 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B649AC(
                                                                                                supportServantListViewManager,
                                                                                                *(_QWORD *)(*(_QWORD *)v95 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v95 + 24) <= 1u )
          goto LABEL_129;
        *(_QWORD *)(v95 + 40) = v102;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v95 + 40), (int32_t)v102, v100, v101);
        supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getName(
                                                                                            (ServantEntity_o *)v82,
                                                                                            v86,
                                                                                            -1,
                                                                                            0LL);
        v105 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B649AC(
                                                                                                  supportServantListViewManager,
                                                                                                  *(_QWORD *)(*(_QWORD *)v95 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v95 + 24) <= 2u )
            goto LABEL_129;
          *(_QWORD *)(v95 + 48) = v105;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v95 + 48), (int32_t)v105, v103, v104);
          if ( !*v44 )
            goto LABEL_128;
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v44)->fields._UserServant_k__BackingField;
          if ( !supportServantListViewManager )
            goto LABEL_128;
          v106 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)Rarity__getRarityType(
                                                                                              v106,
                                                                                              0LL);
          v109 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B649AC(
                                                                                                    supportServantListViewManager,
                                                                                                    *(_QWORD *)(*(_QWORD *)v95 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v95 + 24) <= 3u )
              goto LABEL_129;
            *(_QWORD *)(v95 + 56) = v109;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v95 + 56), (int32_t)v109, v107, v108);
            if ( !*v44 )
              goto LABEL_128;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v44)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_128;
            supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getClassName(
                                                                                                (ServantEntity_o *)supportServantListViewManager,
                                                                                                0LL);
            v112 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B649AC(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v95 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v95 + 24) <= 4u )
                goto LABEL_129;
              *(_QWORD *)(v95 + 64) = v112;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v95 + 64), (int32_t)v112, v110, v111);
              if ( !*v44 )
                goto LABEL_128;
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)(*v44)->fields._Servant_k__BackingField;
              if ( !supportServantListViewManager )
                goto LABEL_128;
              supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)ServantEntity__getName(
                                                                                                  (ServantEntity_o *)supportServantListViewManager,
                                                                                                  v92,
                                                                                                  -1,
                                                                                                  0LL);
              v115 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)sub_1B649AC(supportServantListViewManager, *(_QWORD *)(*(_QWORD *)v95 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v95 + 24) > 5u )
                {
                  *(_QWORD *)(v95 + 72) = v115;
                  sub_1B64814((ServantStatusBattleListViewItem_o *)(v95 + 72), (int32_t)v115, v113, v114);
                  v116 = System_String__Format_61398084(v94, (System_Object_array *)v95, 0LL);
                  v117 = LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v120 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64ABC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v120,
                    (Il2CppObject *)v36,
                    Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__,
                    0LL);
                  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30346936(
                      (CommonUI_o *)Instance,
                      v93,
                      v116,
                      v117,
                      v118,
                      v120,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_128;
                }
LABEL_129:
                sub_1B64AD4(supportServantListViewManager, v38);
              }
            }
          }
        }
      }
    }
    v121 = sub_1B64AF0();
    sub_1B64998(v121, 0LL);
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

  if ( (byte_49FA887 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    sub_1B64870(&StringLiteral_12518/*"SelectIndex"*/, v7);
    byte_49FA887 = 1;
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
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v11 = *((_DWORD *)gameObject + 30);
  if ( v11 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12518/*"SelectIndex"*/, -1, 0LL) )
  {
    gameObject = this->fields.supportServantListViewManager;
    if ( !gameObject )
      goto LABEL_20;
    ListViewManager__ClearScrollBarValue((ListViewManager_o *)gameObject, 1, 0LL);
  }
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 70, 0LL);
  gameObject = this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_20;
  TitleInfoControl__setBackBtnSprite_36880072((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v13 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v14 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  v16 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
    sub_1B64ACC(gameObject, v9);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v18 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
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

  if ( (byte_49FA892 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B64870(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B64870(&NetworkManager_TypeInfo, v6);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__, v9);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FA892 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  UserServant_k__BackingField = selectItem->fields._UserServant_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v51, 0LL);
  v26 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                      UserServant_k__BackingField->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          UserServant_k__BackingField->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          UserServant_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          UserServant_k__BackingField->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          UserServant_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServant_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                  UserServant_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                       UserServant_k__BackingField->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          UserServant_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1B64ACC(limitCountSupport, v14);
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

  if ( (byte_49FA88D & 1) == 0 )
  {
    sub_1B64870(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B64870(&LocalizationManager_TypeInfo, v5);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1B64870(&StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v7);
    sub_1B64870(&StringLiteral_17593/*"button_push_reg"*/, v8);
    sub_1B64870(&StringLiteral_17594/*"button_push_unreg"*/, v9);
    sub_1B64870(&StringLiteral_17579/*"button_allchoice_reg"*/, v10);
    sub_1B64870(&StringLiteral_17582/*"button_alllock_unreg"*/, v11);
    sub_1B64870(&StringLiteral_11571/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v12);
    sub_1B64870(&StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v13);
    sub_1B64870(&StringLiteral_17595/*"button_select_reg"*/, v14);
    sub_1B64870(&StringLiteral_12414/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v15);
    sub_1B64870(&StringLiteral_17596/*"button_select_unreg"*/, v16);
    sub_1B64870(&StringLiteral_17581/*"button_alllock_reg"*/, v17);
    sub_1B64870(&StringLiteral_17580/*"button_allchoice_unreg"*/, v18);
    byte_49FA88D = 1;
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
    v22 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17596/*"button_select_unreg"*/ : &StringLiteral_17595/*"button_select_reg"*/);
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
    v25 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17581/*"button_alllock_reg"*/ : &StringLiteral_17582/*"button_alllock_unreg"*/);
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
    v28 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17579/*"button_allchoice_reg"*/ : &StringLiteral_17580/*"button_allchoice_unreg"*/);
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
      v31 = &StringLiteral_17593/*"button_push_reg"*/;
    else
      v31 = &StringLiteral_17594/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v31, 0LL);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_12414/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11571/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
          v35 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
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
          sub_1B64ACC(normalTabButton, *(_QWORD *)&modeKind);
        }
        RecommendSupportServantSelectListViewManager__SetMode_32291388(
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
  int32_t v11; // w3
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  System_Int64_array *v13; // x1
  System_Int64_array *v14; // x2
  bool v15; // w4
  bool v16; // w5
  int32_t v17; // w2
  int32_t v18; // w3
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  System_Int64_array *v20; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FA890 & 1) == 0 )
  {
    sub_1B64870(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B64870(&NetworkManager_TypeInfo, v5);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__, v6);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_49FA890 = 1;
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
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v17, v18);
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v19,
                                                                                          (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v14 = v20;
        v13 = choiceList;
        v16 = 1;
        v15 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B64ACC(supportServantListViewManager, callback);
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
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v12,
                                                                                          (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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

  if ( (byte_49FA895 & 1) == 0 )
  {
    sub_1B64870(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v3);
    byte_49FA895 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v5 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager )
    sub_1B64ACC(v6, v7);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A7C30;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7BE8;
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
  if ( (byte_49FA898 & 1) == 0 )
  {
    sub_1B64870(&bool_TypeInfo, isRequest);
    byte_49FA898 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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
  int32_t v14; // w3
  struct RecommendSupportServantSelectListMenu_o *_4__this; // x20
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x2

  if ( (byte_49FA899 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B64870(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__, v8);
    byte_49FA899 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_30347596(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B64ACC(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v17 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1B64ABC(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v18);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  supportServantListViewManager->fields.callbackFunc = v17;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&supportServantListViewManager->fields.callbackFunc,
    (int32_t)v17,
    v19,
    v20);
  RecommendSupportServantSelectListViewManager__SetMode_32291388(supportServantListViewManager, 2, v21);
}


void __fastcall RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  RecommendSupportServantSelectListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}