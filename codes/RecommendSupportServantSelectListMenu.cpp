void __fastcall RecommendSupportServantSelectListMenu___ctor(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12451 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B12451 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
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
    sub_1BCAA3C(0LL, method);
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

  if ( (byte_4B1244C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, isRequest, method);
    byte_4B1244C = 1;
  }
  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1BCAA3C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_33213684(supportServantListViewManager, 4, v6);
  }
  RecommendSupportServantSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  __int64 v5; // x2
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  struct RecommendSupportServantSelectListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_4B12450 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v4, v5);
    byte_4B12450 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (RecommendSupportServantSelectListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v7 = this->fields.supportServantListViewManager,
        v11 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                               RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                                               v8,
                                                                               v9,
                                                                               v10),
        RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
          v12),
        !v7) )
  {
    sub_1BCAA3C(supportServantListViewManager, result);
  }
  v7->fields.callbackFunc = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&v7->fields.callbackFunc, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  RecommendSupportServantSelectListViewManager__SetMode_33184412(v7, 2, v19);
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
      sub_1BCAA3C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_33213684(supportServantListViewManager, 4, v5);
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
      sub_1BCAA3C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_33213684(supportServantListViewManager, 4, v5);
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
      sub_1BCAA3C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_33213684(supportServantListViewManager, 4, v5);
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
      sub_1BCAA3C(supportServantListViewManager, isRequest);
    }
    RecommendSupportServantSelectListViewManager__RequestListObject_33213684(supportServantListViewManager, 4, v5);
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
    sub_1BCA784(p_requestCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  __int64 v7; // x1
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v11; // x2

  if ( (byte_4B12443 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12622/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v4, v5);
    byte_4B12443 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_9;
  RecommendSupportServantSelectListViewManager__DestroyList(supportServantListViewManager, method);
  this->fields.state = 0;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_12622/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                                      0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(supportServantListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0LL);
  RecommendSupportServantSelectListMenu__SetModeTabKind(this, 0, v11);
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
    sub_1BCAA3C(0LL, method);
  RecommendSupportServantSelectListViewManager__RequestListObject_33213684(supportServantListViewManager, 4, v2);
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickCancel(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  ListViewManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v19; // x20
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2

  if ( (byte_4B1244B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_EndCancelButton__, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_12734/*"SelectIndex"*/, v10, v11);
    byte_4B1244B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v12 = Method_RecommendSupportServantSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnClickCancel__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
    Instance = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || (UnityEngine_PlayerPrefs__SetInt(
            (System_String_o *)StringLiteral_12734/*"SelectIndex"*/,
            (int32_t)Instance->fields.dragParentObject,
            0LL),
          (Instance = (ListViewManager_o *)this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1BCAA3C(Instance, v15);
    }
    ListViewManager__SetScrollBarValue(Instance, 0LL);
    v19 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                           RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                           v16,
                                                                           v17,
                                                                           v18);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndCancelButton__,
      v20);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v19, v21);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickChoiceTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B12448 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__, v4, v5);
    sub_1BCA7E0(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B12448 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnClickChoiceTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v14 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                               RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                               v10,
                                                                               v11,
                                                                               v12);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
          v15);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                             RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                             v10,
                                                                             v11,
                                                                             v12);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabChoice__,
        v18);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v17, v19);
    }
    RecommendSupportServantSelectListMenu__SetModeTabKind(this, 2, v11);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickLockTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B12447 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__, v4, v5);
    sub_1BCA7E0(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B12447 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnClickLockTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v14 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                               RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                               v10,
                                                                               v11,
                                                                               v12);
        RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
          v15);
        RecommendSupportServantSelectListMenu__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                             RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                             v10,
                                                                             v11,
                                                                             v12);
      RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndClickTabLock__,
        v18);
      RecommendSupportServantSelectListMenu__StatusRequest(this, v17, v19);
    }
    RecommendSupportServantSelectListMenu__SetModeTabKind(this, 1, v11);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickNormalTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B12446 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__, v4, v5);
    sub_1BCA7E0(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B12446 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnClickNormalTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                           RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                           v10,
                                                                           v11,
                                                                           v12);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabNormal__,
      v14);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v13, v15);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickPushTabButton(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B12449 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_EndClickTabPush__, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__, v4, v5);
    sub_1BCA7E0(&RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B12449 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnClickPushTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                           RecommendSupportServantSelectListMenu_RequestCallbackFunc_TypeInfo,
                                                                           v10,
                                                                           v11,
                                                                           v12);
    RecommendSupportServantSelectListMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_RecommendSupportServantSelectListMenu_EndClickTabPush__,
      v14);
    RecommendSupportServantSelectListMenu__StatusRequest(this, v13, v15);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__OnClickScaleChange(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4B1244E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__, method, v2);
    byte_4B1244E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (RecommendSupportServantSelectListViewManager__ChangeIconScale(supportServantListViewManager, v6),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                                                                                              supportServantListViewManager,
                                                                                              v6),
          !scaleChangeTabSprite) )
    {
      sub_1BCAA3C(supportServantListViewManager, v6);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x19
  int64_t supportServantListViewManager; // x0
  const MethodInfo *v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  const MethodInfo *v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  RecommendSupportServantSelectListViewItem_o *Item; // x1
  RecommendSupportServantSelectListViewItem_o **v81; // x20
  const MethodInfo *v82; // x1
  int32_t tabModeKind; // w8
  _QWORD *v84; // x0
  System_Reflection_MethodBase_o *v85; // x0
  int32_t v86; // w1
  _QWORD *v87; // x0
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  struct RecommendSupportServantSelectListViewManager_o *v91; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v92; // x20
  const MethodInfo *v93; // x3
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  const MethodInfo *v100; // x2
  RecommendSupportServantSelectListViewItem_o *v101; // x0
  _QWORD *v102; // x0
  System_Reflection_MethodBase_o *v103; // x0
  const MethodInfo *v104; // x2
  const MethodInfo_36BFF60 *v105; // x3
  int64_t v106; // x22
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v108; // q0
  __int128 v109; // q1
  __int64 v110; // x1
  int64_t v111; // x24
  const MethodInfo_36BF22C *v112; // x3
  _QWORD *v113; // x0
  System_Reflection_MethodBase_o *v114; // x0
  const MethodInfo *v115; // x1
  RecommendSupportData_o *v116; // x19
  const MethodInfo_37DEB14 *v117; // x0
  _QWORD *v118; // x0
  System_Reflection_MethodBase_o *v119; // x0
  _QWORD *v120; // x0
  _QWORD *v121; // x0
  System_Reflection_MethodBase_o *v122; // x0
  const MethodInfo *v123; // x1
  UserGameEntity_o *SelfUserGame; // x19
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v125; // x8
  RecommendSupportData_o *v126; // x19
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v128; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  __int64 v131; // x1
  Il2CppObject *v132; // x26
  Il2CppObject *Master_object; // x0
  __int64 v134; // x1
  ServantLimitImageMaster_o *v135; // x23
  System_String_o *v136; // x21
  System_String_o *v137; // x22
  __int64 v138; // x24
  __int64 v139; // x1
  int32_t Rarity; // w27
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  int64_t v147; // x27
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  int64_t v154; // x26
  __int64 v155; // x1
  void *v156; // x26
  Il2CppClass *v157; // x27
  int32_t v158; // w0
  Il2CppClass *v159; // x8
  int32_t v160; // w25
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  int64_t v167; // x25
  int32_t v168; // w0
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  int64_t v175; // x25
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  int64_t v182; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v183; // x8
  int32_t v184; // w20
  int32_t v185; // w0
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  int64_t v192; // x20
  System_String_o *v193; // x20
  System_String_o *v194; // x22
  System_String_o *v195; // x23
  Il2CppObject *Instance; // x24
  __int64 v197; // x1
  __int64 v198; // x2
  __int64 v199; // x3
  CommonConfirmDialog_ClickDelegate_o *v200; // x25
  __int64 v201; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v202; // [xsp+20h] [xbp-150h] BYREF
  __int128 v203; // [xsp+40h] [xbp-130h]
  __int128 v204; // [xsp+50h] [xbp-120h]
  _BYTE v205[40]; // [xsp+60h] [xbp-110h] BYREF
  __int128 v206[2]; // [xsp+90h] [xbp-E0h] BYREF
  __int128 v207; // [xsp+B0h] [xbp-C0h]
  _OWORD v208[2]; // [xsp+C0h] [xbp-B0h] BYREF
  char v209[39]; // [xsp+E0h] [xbp-90h] BYREF
  __int64 v210; // [xsp+108h] [xbp-68h]
  System_Nullable_T__o v211; // 0:x0.16
  System_Nullable_long__o v212; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v213; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16

  v210 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4B12445 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&offset);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Nullable_long__GetValueOrDefault__, v25, v26);
    sub_1BCA7E0(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__, v27, v28);
    sub_1BCA7E0(&Method_System_Nullable_long___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Nullable_ObscuredLong___ctor__, v31, v32);
    sub_1BCA7E0(&Method_System_Nullable_ObscuredLong__get_HasValue__, v33, v34);
    sub_1BCA7E0(&Method_System_Nullable_long__get_HasValue__, v35, v36);
    sub_1BCA7E0(&object___TypeInfo, v37, v38);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41, v42);
    sub_1BCA7E0(&Rarity_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v45, v46);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v47, v48);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v49, v50);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51, v52);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__, v53, v54);
    sub_1BCA7E0(&RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo, v55, v56);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v63, v64);
    byte_4B12445 = 1;
  }
  memset(v209, 0, sizeof(v209));
  v207 = 0u;
  memset(v208, 0, 23);
  v65 = sub_1BCAA2C(
          RecommendSupportServantSelectListMenu___c__DisplayClass24_0_TypeInfo,
          *(_QWORD *)&kind,
          *(_QWORD *)&offset,
          method);
  System_Object___ctor((Il2CppObject *)v65, 0LL);
  if ( !v65 )
    goto LABEL_127;
  *(_QWORD *)(v65 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 16), (int64_t)this, v68, v69, v70, v71, v72, v73);
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
             v74);
  }
  *(_QWORD *)(v65 + 24) = Item;
  v81 = (RecommendSupportServantSelectListViewItem_o **)(v65 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 24), (int64_t)Item, (int64_t)v74, v75, v76, v77, v78, v79);
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( *v81 )
      (*v81)->fields._IsSwapChoice_k__BackingField ^= 1u;
    v87 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v87 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v85 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v87, v87[4]);
    v86 = 0;
    goto LABEL_22;
  }
  if ( tabModeKind == 1 )
  {
    if ( *v81 )
      (*v81)->fields._IsSwapLock_k__BackingField ^= 1u;
    v84 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v84 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v85 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v84, v84[4]);
    v86 = 11;
LABEL_22:
    OverwriteAssetSoundName__PlaySystemSe(v85, v86, 0LL);
    goto LABEL_23;
  }
  v101 = *v81;
  if ( tabModeKind != 3 )
  {
    if ( v101 )
    {
      if ( v101->fields._IsBase_k__BackingField )
      {
        v113 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v113 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v114 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v113, v113[4]);
        OverwriteAssetSoundName__PlaySystemSe(v114, 0, 0LL);
        RecommendSupportServantSelectListMenu__Init(this, v115);
        supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_127;
        v116 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
        supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
        if ( !supportServantListViewManager || !v116 )
          goto LABEL_127;
        RecommendSupportData__RemoveServantData(v116, *(_DWORD *)(supportServantListViewManager + 120), 0LL);
        v117 = (const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
        goto LABEL_76;
      }
      if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(v101, v82) )
        goto LABEL_62;
      supportServantListViewManager = (int64_t)*v81;
      if ( !*v81 )
        goto LABEL_127;
      if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v67) )
      {
        goto LABEL_62;
      }
      supportServantListViewManager = (int64_t)*v81;
      if ( !*v81 )
        goto LABEL_127;
      if ( *(_BYTE *)(supportServantListViewManager + 166)
        || *(_BYTE *)(supportServantListViewManager + 220)
        || RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
             (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
             v67) )
      {
LABEL_62:
        v120 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
          v120 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
        v85 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v120, v120[4]);
        v86 = 2;
        goto LABEL_22;
      }
    }
    v121 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v121 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v122 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v121, v121[4]);
    OverwriteAssetSoundName__PlaySystemSe(v122, 0, 0LL);
    RecommendSupportServantSelectListMenu__Init(this, v123);
    if ( !*v81 )
      return;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_127;
    if ( !SelfUserGame )
      goto LABEL_127;
    v125 = *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array **)(supportServantListViewManager + 112);
    if ( !v125 )
      goto LABEL_127;
    v125->m_Items[1].fields.currentCryptoKey = SelfUserGame->fields.pushUserSvtId;
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager )
      goto LABEL_127;
    v126 = *(RecommendSupportData_o **)(supportServantListViewManager + 112);
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !supportServantListViewManager || !*v81 || !v126 )
      goto LABEL_127;
    RecommendSupportData__SetServantData(
      v126,
      *(_DWORD *)(supportServantListViewManager + 120),
      (*v81)->fields._UserServant_k__BackingField,
      0LL);
    v117 = (const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
LABEL_76:
    supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance(v117);
    if ( supportServantListViewManager )
    {
      RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantListViewManager, 0, 0LL);
      return;
    }
    goto LABEL_127;
  }
  if ( v101 && !v101->fields._IsEnabled_k__BackingField )
  {
    v118 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
      v118 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
    v119 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v118, v118[4]);
    OverwriteAssetSoundName__PlaySystemSe(v119, 2, 0LL);
    this->fields.state = 2;
LABEL_23:
    v91 = this->fields.supportServantListViewManager;
    v92 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                           RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                                           v88,
                                                                           v89,
                                                                           v90);
    RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
      v92,
      (Il2CppObject *)this,
      (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
      v93);
    if ( v91 )
    {
      v91->fields.callbackFunc = v92;
      sub_1BCA784((PartyOrganizationUtility_o *)&v91->fields.callbackFunc, (int64_t)v92, v94, v95, v96, v97, v98, v99);
      RecommendSupportServantSelectListViewManager__SetMode_33184412(v91, 2, v100);
      return;
    }
LABEL_127:
    sub_1BCAA3C(supportServantListViewManager, v67);
  }
  v102 = Method_RecommendSupportServantSelectListMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_RecommendSupportServantSelectListMenu_OnSelectItem__ + 83) & 2) != 0 )
    v102 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportServantSelectListMenu_OnSelectItem__);
  v103 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v102, v102[4]);
  OverwriteAssetSoundName__PlaySystemSe(v103, 0, 0LL);
  supportServantListViewManager = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  v106 = *(_QWORD *)(supportServantListViewManager + 120);
  if ( !v106 )
  {
LABEL_43:
    RecommendSupportServantSelectListMenu__PushRequest(this, *v81, v104);
    return;
  }
  if ( *v81 )
  {
    UserServant_k__BackingField = (*v81)->fields._UserServant_k__BackingField;
    if ( !UserServant_k__BackingField )
      goto LABEL_127;
    v108 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
    v109 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
    *(_QWORD *)&v211.fields.hasValue = v205;
    v211.fields.value = (Il2CppObject *)v206;
    memset(v205, 0, sizeof(v205));
    v203 = v108;
    v204 = v109;
    v206[0] = v108;
    v206[1] = v109;
    System_Nullable_ObscuredLong____ctor(
      v211,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v105);
    *(_QWORD *)((char *)v208 + 15) = *(_QWORD *)&v205[32];
    v207 = *(_OWORD *)&v205[1];
    v208[0] = *(_OWORD *)&v205[17];
    if ( v205[0] )
      v111 = v106;
    else
      v111 = 0LL;
    *(_OWORD *)v209 = *(_OWORD *)&v205[1];
    *(_OWORD *)&v209[16] = *(_OWORD *)&v205[17];
    *(_QWORD *)&v209[31] = *(_QWORD *)((char *)v208 + 15);
    if ( v205[0] )
    {
      *(_OWORD *)v205 = *(_OWORD *)&v209[7];
      *(_OWORD *)&v205[16] = *(_OWORD *)&v209[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v110);
      v202 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v205;
      v212.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v202, 0LL);
      *(_QWORD *)&v212.fields.hasValue = v206;
      v206[0] = 0uLL;
      System_Nullable_long____ctor(v212, Method_System_Nullable_long___ctor__, v112);
      if ( LOBYTE(v206[0]) )
      {
        if ( v111 == *((_QWORD *)&v206[0] + 1) )
          goto LABEL_43;
      }
    }
  }
  else
  {
    v207 = 0u;
    memset(v208, 0, 23);
    memset(v209, 0, sizeof(v209));
  }
  supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  supportServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                             (DataManager_o *)supportServantListViewManager,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
             v106,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportServantListViewManager )
    goto LABEL_127;
  supportServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                             (DataManager_o *)supportServantListViewManager,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_127;
  v128 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67);
  *(_QWORD *)&v213.fields.currentCryptoKey = klass;
  *(_QWORD *)&v213.fields.fakeValue = monitor;
  supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v213, 0LL);
  if ( !v128 )
    goto LABEL_127;
  v132 = DataMasterBase_object__object__int___GetEntity(
           v128,
           supportServantListViewManager,
           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v131);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( *v81 )
  {
    v135 = (ServantLimitImageMaster_o *)Master_object;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v134);
    v136 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v137 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v138 = sub_1BCA888(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v139);
    supportServantListViewManager = (int64_t)Rarity__getRarityType(Rarity, 0LL);
    if ( !v138 )
      goto LABEL_127;
    v147 = supportServantListViewManager;
    if ( !supportServantListViewManager
      || (supportServantListViewManager = sub_1BCA91C(
                                            supportServantListViewManager,
                                            *(_QWORD *)(*(_QWORD *)v138 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v138 + 24) )
        goto LABEL_128;
      *(_QWORD *)(v138 + 32) = v147;
      sub_1BCA784((PartyOrganizationUtility_o *)(v138 + 32), v147, v141, v142, v143, v144, v145, v146);
      if ( !v132 )
        goto LABEL_127;
      supportServantListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v132, 0LL);
      v154 = supportServantListViewManager;
      if ( !supportServantListViewManager
        || (supportServantListViewManager = sub_1BCA91C(
                                              supportServantListViewManager,
                                              *(_QWORD *)(*(_QWORD *)v138 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v138 + 24) <= 1u )
          goto LABEL_128;
        *(_QWORD *)(v138 + 40) = v154;
        sub_1BCA784((PartyOrganizationUtility_o *)(v138 + 40), v154, v148, v149, v150, v151, v152, v153);
        v157 = Entity[5].klass;
        v156 = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v155);
        *(_QWORD *)&v214.fields.currentCryptoKey = v157;
        *(_QWORD *)&v214.fields.fakeValue = v156;
        v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v214, 0LL);
        v159 = Entity[6].klass;
        *(_QWORD *)&v215.fields.fakeValue = Entity[6].monitor;
        v160 = v158;
        *(_QWORD *)&v215.fields.currentCryptoKey = v159;
        supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v215, 0LL);
        if ( !v135 )
          goto LABEL_127;
        supportServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                   v135,
                                                   v160,
                                                   supportServantListViewManager,
                                                   0LL);
        v167 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = sub_1BCA91C(
                                                supportServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v138 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v138 + 24) <= 2u )
            goto LABEL_128;
          *(_QWORD *)(v138 + 48) = v167;
          sub_1BCA784((PartyOrganizationUtility_o *)(v138 + 48), v167, v161, v162, v163, v164, v165, v166);
          if ( !*v81 )
            goto LABEL_127;
          supportServantListViewManager = (int64_t)(*v81)->fields._UserServant_k__BackingField;
          if ( !supportServantListViewManager )
            goto LABEL_127;
          v168 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
          supportServantListViewManager = (int64_t)Rarity__getRarityType(v168, 0LL);
          v175 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = sub_1BCA91C(
                                                  supportServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v138 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v138 + 24) <= 3u )
              goto LABEL_128;
            *(_QWORD *)(v138 + 56) = v175;
            sub_1BCA784((PartyOrganizationUtility_o *)(v138 + 56), v175, v169, v170, v171, v172, v173, v174);
            if ( !*v81 )
              goto LABEL_127;
            supportServantListViewManager = (int64_t)(*v81)->fields._Servant_k__BackingField;
            if ( !supportServantListViewManager )
              goto LABEL_127;
            supportServantListViewManager = (int64_t)ServantEntity__getClassName(
                                                       (ServantEntity_o *)supportServantListViewManager,
                                                       0LL);
            v182 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = sub_1BCA91C(
                                                    supportServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v138 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v138 + 24) <= 4u )
                goto LABEL_128;
              *(_QWORD *)(v138 + 64) = v182;
              sub_1BCA784((PartyOrganizationUtility_o *)(v138 + 64), v182, v176, v177, v178, v179, v180, v181);
              supportServantListViewManager = (int64_t)*v81;
              if ( !*v81 )
                goto LABEL_127;
              supportServantListViewManager = RecommendSupportServantSelectListViewItem__get_SvtId(
                                                (RecommendSupportServantSelectListViewItem_o *)supportServantListViewManager,
                                                v67);
              if ( !*v81 )
                goto LABEL_127;
              v183 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v81)->fields._UserServant_k__BackingField;
              if ( !v183 )
                goto LABEL_127;
              v184 = supportServantListViewManager;
              v185 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v183[6], 0LL);
              supportServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                         v135,
                                                         v184,
                                                         v185,
                                                         0LL);
              v192 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = sub_1BCA91C(
                                                      supportServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v138 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v138 + 24) > 5u )
                {
                  *(_QWORD *)(v138 + 72) = v192;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v138 + 72), v192, v186, v187, v188, v189, v190, v191);
                  v193 = System_String__Format_62415728(v137, (System_Object_array *)v138, 0LL);
                  v194 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v195 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v200 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v197,
                                                                  v198,
                                                                  v199);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v200,
                    (Il2CppObject *)v65,
                    Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__0__,
                    0LL);
                  supportServantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v67);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30766228(
                      (CommonUI_o *)Instance,
                      v136,
                      v193,
                      v194,
                      v195,
                      v200,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_127;
                }
LABEL_128:
                sub_1BCAA44(supportServantListViewManager, v67);
              }
            }
          }
        }
      }
    }
    v201 = sub_1BCAA60();
    sub_1BCA908(v201, 0LL);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__Open(
        RecommendSupportServantSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  void *gameObject; // x0
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *v16; // x20
  int v17; // w20
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportData_o *v19; // x21
  int32_t v20; // w22
  const MethodInfo *v21; // x4
  struct RecommendSupportServantSelectListViewManager_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v26; // x21
  const MethodInfo *v27; // x3
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x20

  if ( (byte_4B12444 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v6, v7);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_12734/*"SelectIndex"*/, v12, v13);
    byte_4B12444 = 1;
  }
  RecommendSupportServantSelectListMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_20;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v16 )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(v16, (unsigned __int8)gameObject & 1, 0LL);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v17 = *((_DWORD *)gameObject + 30);
  if ( v17 != UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12734/*"SelectIndex"*/, -1, 0LL) )
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
  TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v19 = (RecommendSupportData_o *)*((_QWORD *)gameObject + 14);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  v20 = *((_DWORD *)gameObject + 30);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_20;
  if ( !supportServantListViewManager )
    goto LABEL_20;
  RecommendSupportServantSelectListViewManager__CreateList(
    supportServantListViewManager,
    v19,
    v20,
    *((EventUpValSetupInfo_o **)gameObject + 13),
    v21);
  v22 = this->fields.supportServantListViewManager;
  v26 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                         RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                                         v23,
                                                                         v24,
                                                                         v25);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v26,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v27);
  if ( !v22
    || (v22->fields.callbackFunc = v26,
        sub_1BCA784((PartyOrganizationUtility_o *)&v22->fields.callbackFunc, (int64_t)v26, v28, v29, v30, v31, v32, v33),
        RecommendSupportServantSelectListViewManager__SetMode_33184412(v22, 1, v34),
        (gameObject = this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = RecommendSupportServantSelectListViewManager__GetScaleButtonSpriteName(
                       (RecommendSupportServantSelectListViewManager_o *)gameObject,
                       v15),
        !scaleChangeTabSprite) )
  {
LABEL_20:
    sub_1BCAA3C(gameObject, v15);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_RecommendSupportServantSelectListMenu__Open_b__22_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v39, 0LL);
}


void __fastcall RecommendSupportServantSelectListMenu__PushRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *limitCountSupport; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x23
  struct UserServantEntity_o *UserServant_k__BackingField; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v30; // x1
  __int128 v31; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v34; // x0
  __int128 v35; // q1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  __int128 v42; // q1
  CardFavoriteRequest_o *v43; // x20
  int32_t v44; // w26
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w29
  bool IsLock; // w21
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v58; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v60; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v61; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B1244F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__, v13, v14);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B1244F = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v23 = limitCountSupport;
  UserServant_k__BackingField = selectItem->fields._UserServant_k__BackingField;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v23 || !UserServant_k__BackingField )
    goto LABEL_18;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v25 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  context = v23->fields.context;
  p_fields = &UserServant_k__BackingField->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  masterLoadThreads = v23->fields.masterLoadThreads;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      UserServant_k__BackingField->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserServant_k__BackingField->fields.dispLimitCount,
          0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserServant_k__BackingField->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserServant_k__BackingField->fields.iconLimitCount,
          0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserServant_k__BackingField->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserServant_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  UserServant_k__BackingField->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       UserServant_k__BackingField->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          UserServant_k__BackingField->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&UserServant_k__BackingField->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v67.fields.currentCryptoKey = v54;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
  if ( !v43 )
LABEL_18:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v43,
    targetUsrSVtId,
    imageLimitCount,
    v44,
    v45,
    v46,
    v47,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v58,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v61 != (struct System_Threading_SynchronizationContext_o *)v60,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListMenu__SetModeTabKind(
        RecommendSupportServantSelectListMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v34; // x21
  bool enabled; // w0
  System_String_o **v36; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v38; // w0
  System_String_o **v39; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v41; // w0
  System_String_o **v42; // x8
  UICommonButton_o *pushTabButton; // x21
  bool v44; // w0
  __int64 *v45; // x8
  const MethodInfo *v46; // x2
  UILabel_o *explanationLabel; // x21
  __int64 *v48; // x8
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v53; // x21
  const MethodInfo *v54; // x3
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int32_t v61; // w1

  if ( (byte_4B1244A & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v7, v8);
    sub_1BCA7E0(&StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12622/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v31, v32);
    byte_4B1244A = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( normalTabButton )
    {
      UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
      v34 = this->fields.normalTabButton;
      if ( v34 )
      {
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
        UICommonButton__SetColliderEnable(v34, enabled, 1, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
        if ( normalTabButton )
        {
          v36 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17842/*"button_select_unreg"*/ : &StringLiteral_17841/*"button_select_reg"*/);
          UISprite__set_spriteName((UISprite_o *)normalTabButton, *v36, 0LL);
          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
          if ( normalTabButton )
          {
            UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
            lockTabButton = this->fields.lockTabButton;
            if ( lockTabButton )
            {
              v38 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
              UICommonButton__SetColliderEnable(lockTabButton, v38, 1, 0LL);
              normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
              if ( normalTabButton )
              {
                v39 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17827/*"button_alllock_reg"*/ : &StringLiteral_17828/*"button_alllock_unreg"*/);
                UISprite__set_spriteName((UISprite_o *)normalTabButton, *v39, 0LL);
                normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
                if ( normalTabButton )
                {
                  UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
                  choiceTabButton = this->fields.choiceTabButton;
                  if ( choiceTabButton )
                  {
                    v41 = UnityEngine_Behaviour__get_enabled(
                            (UnityEngine_Behaviour_o *)this->fields.choiceTabButton,
                            0LL);
                    UICommonButton__SetColliderEnable(choiceTabButton, v41, 1, 0LL);
                    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
                    if ( normalTabButton )
                    {
                      v42 = (System_String_o **)(this->fields.tabModeKind == 2
                                               ? &StringLiteral_17825/*"button_allchoice_reg"*/
                                               : &StringLiteral_17826/*"button_allchoice_unreg"*/);
                      UISprite__set_spriteName((UISprite_o *)normalTabButton, *v42, 0LL);
                      normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
                      if ( normalTabButton )
                      {
                        UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0LL);
                        pushTabButton = this->fields.pushTabButton;
                        if ( pushTabButton )
                        {
                          v44 = UnityEngine_Behaviour__get_enabled(
                                  (UnityEngine_Behaviour_o *)this->fields.pushTabButton,
                                  0LL);
                          UICommonButton__SetColliderEnable(pushTabButton, v44, 1, 0LL);
                          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
                          if ( normalTabButton )
                          {
                            if ( this->fields.tabModeKind == 3 )
                              v45 = &StringLiteral_17839/*"button_push_reg"*/;
                            else
                              v45 = &StringLiteral_17840/*"button_push_unreg"*/;
                            UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v45, 0LL);
                            switch ( this->fields.tabModeKind )
                            {
                              case 0:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
                                v48 = &StringLiteral_12622/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
                                goto LABEL_41;
                              case 1:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
                                v48 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
                                goto LABEL_41;
                              case 2:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
                                v48 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
                                goto LABEL_41;
                              case 3:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
                                v48 = &StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_41:
                                normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                                               (System_String_o *)*v48,
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
                                  v61 = 1;
                                  goto LABEL_48;
                                }
                                RecommendSupportServantSelectListViewManager__UpdateItemState(
                                  (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
                                  modeKind == 3,
                                  v46);
                                supportServantListViewManager = this->fields.supportServantListViewManager;
                                v53 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCAA2C(RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v50, v51, v52);
                                RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
                                  v53,
                                  (Il2CppObject *)this,
                                  (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
                                  v54);
                                if ( supportServantListViewManager )
                                {
                                  supportServantListViewManager->fields.callbackFunc = v53;
                                  sub_1BCA784(
                                    (PartyOrganizationUtility_o *)&supportServantListViewManager->fields.callbackFunc,
                                    (int64_t)v53,
                                    v55,
                                    v56,
                                    v57,
                                    v58,
                                    v59,
                                    v60);
                                  v61 = 2;
                                  normalTabButton = (UnityEngine_Behaviour_o *)supportServantListViewManager;
LABEL_48:
                                  RecommendSupportServantSelectListViewManager__SetMode_33184412(
                                    (RecommendSupportServantSelectListViewManager_o *)normalTabButton,
                                    v61,
                                    v46);
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
    sub_1BCAA3C(normalTabButton, *(_QWORD *)&modeKind);
  }
}


void __fastcall RecommendSupportServantSelectListMenu__StatusRequest(
        RecommendSupportServantSelectListMenu_o *this,
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t tabModeKind; // w8
  RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  __int64 v24; // x1
  System_Int64_array *v25; // x1
  System_Int64_array *v26; // x2
  bool v27; // w4
  bool v28; // w5
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  NetworkManager_ResultCallbackFunc_o *v38; // x20
  __int64 v39; // x1
  System_Int64_array *v40; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1244D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_EndStatusSync__, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B1244D = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v40 = 0LL;
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
           &v40,
           v3) )
    {
      this->fields.requestCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v38 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v35,
                                                     v36,
                                                     v37);
      NetworkManager_ResultCallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v38,
                                                                                          (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v26 = v40;
        v25 = choiceList;
        v28 = 1;
        v27 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BCAA3C(supportServantListViewManager, callback);
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
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
      supportServantListViewManager = (RecommendSupportServantSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                          v23,
                                                                                          (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v26 = unlockList;
        v25 = lockList;
        v27 = 1;
        v28 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v25,
          v26,
          0,
          v27,
          v28,
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x20
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4B12452 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v5, v6);
    byte_4B12452 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v8 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                        RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                                        method,
                                                                        v2,
                                                                        v3);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v9);
  if ( !supportServantListViewManager )
    sub_1BCAA3C(v10, v11);
  supportServantListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&supportServantListViewManager->fields.callbackFunc,
    (int64_t)v8,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  RecommendSupportServantSelectListViewManager__SetMode_33184412(supportServantListViewManager, 2, v18);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A081E4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0819C;
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
  if ( (byte_4B12453 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B12453 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall RecommendSupportServantSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportServantSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  CommonUI_o *v17; // x20
  System_Action_o *_9__1; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x2
  __int64 v26; // x3
  struct RecommendSupportServantSelectListMenu_o *_4__this; // x20
  struct RecommendSupportServantSelectListViewManager_o *supportServantListViewManager; // x19
  RecommendSupportServantSelectListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x2

  if ( (byte_4B12454 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu_OnSelectItem__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__, v11, v12);
    byte_4B12454 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_RecommendSupportServantSelectListMenu___c__DisplayClass24_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v19, v20, v21, v22, v23, v24);
    }
    if ( v17 )
    {
      CommonUI__CloseConfirmDialog_30766896(v17, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(Instance, v14);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v29 = (RecommendSupportServantSelectListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                         RecommendSupportServantSelectListViewManager_CallbackFunc_TypeInfo,
                                                                         v14,
                                                                         v25,
                                                                         v26);
  RecommendSupportServantSelectListViewManager_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_RecommendSupportServantSelectListMenu_OnSelectItem__,
    v30);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  supportServantListViewManager->fields.callbackFunc = v29;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&supportServantListViewManager->fields.callbackFunc,
    (int64_t)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  RecommendSupportServantSelectListViewManager__SetMode_33184412(supportServantListViewManager, 2, v37);
}


void __fastcall RecommendSupportServantSelectListMenu___c__DisplayClass24_0___OnSelectItem_b__1(
        RecommendSupportServantSelectListMenu___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  RecommendSupportServantSelectListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}