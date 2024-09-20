void __fastcall PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A57291 & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A57291 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyServantSelectMenu__Callback(
        PartyServantSelectMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct PartyServantSelectMenu_CallbackFunc_o *v6; // x22
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *Item; // x2

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, n, (int32_t)method);
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1B8880C(0LL, v10);
      Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, v11);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, PartyServantListViewItem_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      (unsigned int)result,
      Item,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__ClearScrollValue(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0

  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1B8880C(0LL, method);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_32333064(this, 0LL, v2);
}


void __fastcall PartyServantSelectMenu__Close_32333064(
        PartyServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Action_o *v11; // x20

  if ( (byte_4A5727F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_EndClose__);
    byte_4A5727F = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1B8880C(0LL, v6);
  PartyServantListViewManager__SetMode_32319108(partyServantListViewManager, 1, v7);
  this->fields.closeCallbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v9, v10);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCardFavoriteRequest(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v5; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A5728F & 1) == 0 )
  {
    sub_1B885B0(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnSelectItem__);
    byte_4A5728F = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v5 = this->fields.partyServantListViewManager,
        v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B887FC(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v7),
        !v5) )
  {
    sub_1B8880C(partyServantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9);
  PartyServantListViewManager__SetMode_32319108(v5, 2, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndClickCancel(
        PartyServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1B8880C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32319108(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__Callback(this, 0, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndClickDecide(
        PartyServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1B8880C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32319108(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__Callback(this, 1, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndClickTabChoice(
        PartyServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1B8880C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32319108(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 2, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndClickTabLock(
        PartyServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1B8880C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32319108(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndClickTabPush(
        PartyServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1B8880C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32319108(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 3, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndClickTabStatus(
        PartyServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1B8880C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32319108(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 0, 0, v3);
}


void __fastcall PartyServantSelectMenu__EndClose(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  PartyServantSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__EndCloseShowServant(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  void *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v5; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_4A5728B & 1) == 0 )
  {
    sub_1B885B0(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5728B = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager )
    goto LABEL_8;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)partyServantListViewManager,
    this->fields.modeKind,
    v2);
  v5 = this->fields.partyServantListViewManager;
  v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B887FC(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v7);
  if ( !v5
    || (v5->fields.callbackFunc = v6,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9),
        PartyServantListViewManager__SetMode_32319108(v5, 2, v10),
        (partyServantListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(partyServantListViewManager, method);
  }
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)partyServantListViewManager + 16), 0LL) )
    PartyServantSelectMenu__Callback(this, 3, -1, v11);
}


void __fastcall PartyServantSelectMenu__EndCloseShowServantQuestJump(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5728C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5728C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialSelect; // w2
  const MethodInfo *v5; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_1B8880C(0LL, method);
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  tutorialSelect = this->fields.tutorialSelect;
  this->fields.state = 3;
  PartyServantSelectMenu__Callback(this, 1, tutorialSelect, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndOpen(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyServantListViewManager_o *tutorialMaskBase; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v12; // x21
  float v13; // s0
  float v14; // s3
  float v15; // s4
  int v16; // s1
  int v17; // s5
  int v18; // s6
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x2
  ServantStatusBattleListViewItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v27; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4A5727D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5727D = 1;
  }
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v21 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B887FC(PartyServantListViewManager_CallbackFunc_TypeInfo);
    PartyServantListViewManager_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      v22);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v21;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&partyServantListViewManager->fields.callbackFunc,
        (int32_t)v21,
        v23,
        v24);
      PartyServantListViewManager__SetMode_32319108(partyServantListViewManager, 2, v25);
      goto LABEL_17;
    }
LABEL_20:
    sub_1B8880C(tutorialMaskBase, v5);
  }
  v4 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v4, 0, v2);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  PartyServantListViewManager__SetMode_32319108(tutorialMaskBase, 1, v6);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_17;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
    goto LABEL_20;
  v13 = -367.0;
  v14 = -450.0;
  if ( !IsUnderVista )
    v14 = -442.0;
  if ( IsUnderVista )
    v13 = -375.0;
  v15 = -30.0;
  v16 = 1120403456;
  v17 = 1125515264;
  v18 = 1127481344;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v13,
    0.0,
    *(UnityEngine_Rect_o *)&v14,
    v12,
    0LL);
LABEL_17:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc;
  v27 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1B88554(p_openCallbackFunc, 0, v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v27->fields.m_target)(
      v27->fields.original_method_info,
      *(_QWORD *)&v27->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_4A5727E & 1) == 0 )
  {
    sub_1B885B0(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnSelectItem__);
    byte_4A5727E = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(statusTabButton, 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(statusTabButton, 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton
    || (UnityEngine_Behaviour__set_enabled(statusTabButton, 1, 0LL),
        (statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton) == 0LL)
    || (((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
          statusTabButton,
          0LL,
          0LL,
          statusTabButton->klass[1]._1.interfaceOffsets),
        this->fields.state = 7,
        partyServantListViewManager = this->fields.partyServantListViewManager,
        v5 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B887FC(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v6),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_1B8880C(statusTabButton, method);
  }
  partyServantListViewManager->fields.callbackFunc = v5;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v7,
    v8);
  PartyServantListViewManager__SetMode_32319108(partyServantListViewManager, 5, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndShowServant(
        PartyServantSelectMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v8; // x2
  int32_t v9; // w1
  RandomLimitCountManager_c *v10; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v12; // x21

  if ( (byte_4A57289 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_EndCloseShowServant__);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57289 = 1;
  }
  if ( isDecide )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( partyServantListViewManager )
    {
      PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, (const MethodInfo *)isNeedSort);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        if ( isNeedSort )
        {
          v9 = 4;
LABEL_18:
          PartyServantListViewManager__SetMode_32319108(partyServantListViewManager, v9, v8);
          goto LABEL_19;
        }
LABEL_17:
        v9 = 3;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1B8880C(partyServantListViewManager, isDecide);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
  }
  v10 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v10 = RandomLimitCountManager_TypeInfo;
  }
  if ( v10->static_fields->enableRandomLimitCount )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( partyServantListViewManager )
    {
      PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, (const MethodInfo *)isNeedSort);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
        goto LABEL_17;
    }
    goto LABEL_21;
  }
LABEL_19:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndShowServantWithQuest(
        PartyServantSelectMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  System_Action_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A5728A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5728A = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_1B8880C(v11, v12);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0LL);
  }
  PartyServantSelectMenu__EndShowServant(this, isDecide, isNeedSort, *(const MethodInfo **)&questId);
}


void __fastcall PartyServantSelectMenu__EndStatusSync(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PartyServantSelectMenu_RequestCallbackFunc_o *requedstCallback; // x19
  ServantStatusBattleListViewItem_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0LL;
    sub_1B88554(p_requedstCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requedstCallback->fields.m_target)(
      requedstCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requedstCallback->fields.extra_arg);
  }
}


int32_t __fastcall PartyServantSelectMenu__GetModeKind(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


void __fastcall PartyServantSelectMenu__Init(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  PartyServantListViewManager_o *partyServantListViewManager; // x0

  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1B8880C(0LL, method);
  PartyServantListViewManager__DestroyList(partyServantListViewManager, method);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyServantSelectMenu__OnClickCancel(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4A57282 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyServantSelectMenu_EndClickCancel__);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnClickCancel__);
    sub_1B885B0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57282 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1B8880C(0LL, method);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    v4 = Method_PartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    v6 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickCancel__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v6, v7);
  }
}


void __fastcall PartyServantSelectMenu__OnClickDecide(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A57281 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyServantSelectMenu_EndClickDecide__);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnClickDecide__);
    sub_1B885B0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57281 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyServantSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickDecide__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v5, v6);
  }
}


void __fastcall PartyServantSelectMenu__OnClickScaleChange(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4A5728D & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyServantSelectMenu_OnClickScaleChange__);
    byte_4A5728D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ChangeIconScale(partyServantListViewManager, v5),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                                           partyServantListViewManager,
                                                                           v5),
          !scaleChangeTabSprite) )
    {
      sub_1B8880C(partyServantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)partyServantListViewManager, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabChoice(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4A57285 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyServantSelectMenu_EndClickTabChoice__);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnClickTabChoice__);
    sub_1B885B0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57285 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabChoice__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v9, v10);
    }
    PartyServantSelectMenu__SetTabKind(this, 2, 0, v5);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabLock(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4A57284 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyServantSelectMenu_EndClickTabLock__);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnClickTabLock__);
    sub_1B885B0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57284 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabLock__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v9, v10);
    }
    PartyServantSelectMenu__SetTabKind(this, 1, 0, v5);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabPush(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A57286 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyServantSelectMenu_EndClickTabPush__);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnClickTabPush__);
    sub_1B885B0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57286 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_PartyServantSelectMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabPush__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v5, v6);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabStatus(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A57283 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyServantSelectMenu_EndClickTabStatus__);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnClickTabStatus__);
    sub_1B885B0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57283 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B887FC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabStatus__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v5, v6);
  }
}


void __fastcall PartyServantSelectMenu__OnSelectItem(
        PartyServantSelectMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  int32_t v13; // w3
  int32_t state; // w8
  PartyServantListViewItem_o *Item; // x1
  int32_t tutorialMode; // w8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v20; // x21
  PartyServantListViewItem_o **v21; // x21
  const MethodInfo *v22; // x3
  PartyServantListViewItem_o *v23; // x8
  unsigned int commonRestrictionId; // w10
  unsigned int v25; // w20
  int32_t modeKind; // w8
  struct PartyServantListViewManager_o *v27; // x20
  PartyServantListViewManager_CallbackFunc_o *v28; // x0
  const MethodInfo *v29; // x3
  intptr_t v30; // w2
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  PartyServantSelectMenu_o *v35; // x0
  int32_t v36; // w1
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  PartyServantListViewManager_CallbackFunc_c *v41; // x0
  _BOOL4 isEnabled; // w23
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  const MethodInfo *v45; // x2
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v48; // q1
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  _QWORD *v51; // x0
  struct PartyServantListViewManager_CallbackFunc_o *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  const MethodInfo *v55; // x2
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x19
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v60; // x25
  Il2CppObject *Master_object; // x19
  int32_t v62; // w22
  int32_t v63; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x8
  int32_t v65; // w22
  int32_t v66; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v68; // x19
  System_String_o *v69; // x22
  __int64 v70; // x23
  int32_t Rarity; // w26
  int32_t v72; // w2
  int32_t v73; // w3
  PartyServantListViewManager_o *v74; // x26
  int32_t v75; // w2
  int32_t v76; // w3
  PartyServantListViewManager_o *v77; // x26
  int32_t v78; // w2
  int32_t v79; // w3
  PartyServantListViewManager_o *v80; // x25
  int32_t v81; // w0
  int32_t v82; // w2
  int32_t v83; // w3
  PartyServantListViewManager_o *v84; // x25
  int32_t v85; // w2
  int32_t v86; // w3
  PartyServantListViewManager_o *v87; // x25
  int32_t v88; // w2
  int32_t v89; // w3
  PartyServantListViewManager_o *v90; // x21
  System_String_o *v91; // x21
  System_String_o *v92; // x22
  System_String_o *v93; // x23
  Il2CppObject *v94; // x24
  CommonConfirmDialog_ClickDelegate_o *v95; // x25
  __int64 v96; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_4A57288 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__);
    sub_1B885B0(&PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A57288 = 1;
  }
  v7 = sub_1B887FC(PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo);
  PartyServantSelectMenu___c__DisplayClass68_0___ctor((PartyServantSelectMenu___c__DisplayClass68_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_122;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  state = this->fields.state;
  if ( state == 7 )
  {
    tutorialMode = this->fields.tutorialMode;
    this->fields.tutorialSelect = n;
    if ( tutorialMode != 2 )
      return;
    this->fields.state = 8;
    v17 = Method_PartyServantSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnSelectItem__);
    v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v20, 0LL);
      return;
    }
    goto LABEL_122;
  }
  if ( state != 2 )
    return;
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_122;
    Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, v12);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v21 = (PartyServantListViewItem_o **)(v7 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v12, v13);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      this->fields.state = 2;
      v27 = this->fields.partyServantListViewManager;
      v28 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B887FC(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v30 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    else
    {
      v9 = *v21;
      if ( !*v21 )
        goto LABEL_122;
      if ( v9->fields.userServantEntity )
      {
        PartyServantSelectMenu__OpenServantDetail_32339680(this, v9, 1, v22);
        return;
      }
      v49 = Method_PartyServantSelectMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v49 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnSelectItem__);
      v50 = (System_Reflection_MethodBase_o *)sub_1B88594(v49, v49[4]);
LABEL_70:
      OverwriteAssetSoundName__PlaySystemSe(v50, 2, 0LL);
      v27 = this->fields.partyServantListViewManager;
      v28 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B887FC(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v30 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    goto LABEL_71;
  }
  if ( kind == 2 )
  {
    switch ( this->fields.modeKind )
    {
      case 0:
        v23 = *v21;
        if ( !*v21 )
          goto LABEL_122;
        if ( !v23->fields.isBase && v23->fields.isQuestRestriction || v23->fields.isSame )
          goto LABEL_65;
        commonRestrictionId = v23->fields.commonRestrictionId;
        v25 = commonRestrictionId >> 31;
        if ( !v23->fields.isBase && (commonRestrictionId & 0x80000000) != 0 )
        {
          if ( v23->fields.isLeave
            || (v23->fields.fatigureTime & 0x8000000000000000LL) == 0
            || v23->fields._IsAllOutBattle_k__BackingField
            || v23->fields._IsDataLost_k__BackingField
            || v23->fields._TimesToRestart_k__BackingField > 0 )
          {
LABEL_65:
            LOBYTE(v25) = 0;
          }
          else
          {
            LOBYTE(v25) = !v23->fields._IsClearedWave_k__BackingField;
          }
        }
        v51 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v51 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnSelectItem__);
        v50 = (System_Reflection_MethodBase_o *)sub_1B88594(v51, v51[4]);
        if ( (v25 & 1) == 0 )
          goto LABEL_70;
        OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0LL);
        v36 = 1;
        v35 = this;
        v34 = n;
        this->fields.state = 3;
        goto LABEL_35;
      case 1:
        v37 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v37 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnSelectItem__);
        v38 = (System_Reflection_MethodBase_o *)sub_1B88594(v37, v37[4]);
        OverwriteAssetSoundName__PlaySystemSe(v38, 11, 0LL);
        if ( !*v21 )
          goto LABEL_122;
        (*v21)->fields.isSwapLock ^= 1u;
        goto LABEL_47;
      case 2:
        v39 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v39 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnSelectItem__);
        v40 = (System_Reflection_MethodBase_o *)sub_1B88594(v39, v39[4]);
        OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0LL);
        if ( !*v21 )
          goto LABEL_122;
        (*v21)->fields.isSwapChoice ^= 1u;
LABEL_47:
        this->fields.state = 2;
        v27 = this->fields.partyServantListViewManager;
        v41 = PartyServantListViewManager_CallbackFunc_TypeInfo;
        goto LABEL_48;
      case 3:
        if ( !*v21 )
          goto LABEL_122;
        isEnabled = (*v21)->fields.isEnabled;
        v43 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v43 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnSelectItem__);
        v44 = (System_Reflection_MethodBase_o *)sub_1B88594(v43, v43[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0LL);
          partyServantListViewManager = (PartyServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          dragParentObject = (int64_t)partyServantListViewManager->fields.dragParentObject;
          if ( !dragParentObject )
          {
LABEL_60:
            PartyServantSelectMenu__PushRequest(this, *v21, v45);
            return;
          }
          if ( !*v21 )
            goto LABEL_122;
          userServantEntity = (*v21)->fields.userServantEntity;
          if ( !userServantEntity )
            goto LABEL_122;
          v48 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v98.fields.fakeValue = v48;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v97 = v98;
          if ( dragParentObject == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v97, 0LL) )
            goto LABEL_60;
          partyServantListViewManager = (PartyServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          partyServantListViewManager = (PartyServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                           (DataManager_o *)partyServantListViewManager,
                                                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager,
                     dragParentObject,
                     (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          partyServantListViewManager = (PartyServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          partyServantListViewManager = (PartyServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                           (DataManager_o *)partyServantListViewManager,
                                                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_122;
          v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v99.fields.currentCryptoKey = klass;
          *(_QWORD *)&v99.fields.fakeValue = monitor;
          partyServantListViewManager = (PartyServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                           v99,
                                                                           0LL);
          if ( !v57 )
            goto LABEL_122;
          v60 = DataMasterBase_object__object__int___GetEntity(
                  v57,
                  (int32_t)partyServantListViewManager,
                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                  0LL);
          partyServantListViewManager = (PartyServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                                           0LL);
          if ( !Master_object )
            goto LABEL_122;
          partyServantListViewManager = (PartyServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                           (ServantLimitImageMaster_o *)Master_object,
                                                                           v62,
                                                                           (int32_t)partyServantListViewManager,
                                                                           0LL);
          if ( !*v21 )
            goto LABEL_122;
          v63 = (int)partyServantListViewManager;
          partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewItem__get_SvtId(
                                                                           *v21,
                                                                           (const MethodInfo *)v9);
          if ( !*v21 )
            goto LABEL_122;
          v64 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v21)->fields.userServantEntity;
          if ( !v64 )
            goto LABEL_122;
          v65 = (int)partyServantListViewManager;
          v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v64[6], 0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         (ServantLimitImageMaster_o *)Master_object,
                                         v65,
                                         v66,
                                         0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v70 = sub_1B88658(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          partyServantListViewManager = (PartyServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
          if ( !v70 )
            goto LABEL_122;
          v74 = partyServantListViewManager;
          if ( !partyServantListViewManager
            || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B886EC(
                                                                                 partyServantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v70 + 64LL))) != 0LL )
          {
            if ( !*(_DWORD *)(v70 + 24) )
              goto LABEL_123;
            *(_QWORD *)(v70 + 32) = v74;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 32), (int32_t)v74, v72, v73);
            if ( !v60 )
              goto LABEL_122;
            partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getClassName(
                                                                             (ServantEntity_o *)v60,
                                                                             0LL);
            v77 = partyServantListViewManager;
            if ( !partyServantListViewManager
              || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B886EC(
                                                                                   partyServantListViewManager,
                                                                                   *(_QWORD *)(*(_QWORD *)v70 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v70 + 24) <= 1u )
                goto LABEL_123;
              *(_QWORD *)(v70 + 40) = v77;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 40), (int32_t)v77, v75, v76);
              partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getName(
                                                                               (ServantEntity_o *)v60,
                                                                               v63,
                                                                               -1,
                                                                               0LL);
              v80 = partyServantListViewManager;
              if ( !partyServantListViewManager
                || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B886EC(
                                                                                     partyServantListViewManager,
                                                                                     *(_QWORD *)(*(_QWORD *)v70 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v70 + 24) <= 2u )
                  goto LABEL_123;
                *(_QWORD *)(v70 + 48) = v80;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 48), (int32_t)v80, v78, v79);
                if ( !*v21 )
                  goto LABEL_122;
                partyServantListViewManager = (PartyServantListViewManager_o *)(*v21)->fields.userServantEntity;
                if ( !partyServantListViewManager )
                  goto LABEL_122;
                v81 = UserServantEntity__getRarity((UserServantEntity_o *)partyServantListViewManager, 0LL);
                partyServantListViewManager = (PartyServantListViewManager_o *)Rarity__getRarityType(v81, 0LL);
                v84 = partyServantListViewManager;
                if ( !partyServantListViewManager
                  || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B886EC(
                                                                                       partyServantListViewManager,
                                                                                       *(_QWORD *)(*(_QWORD *)v70 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v70 + 24) <= 3u )
                    goto LABEL_123;
                  *(_QWORD *)(v70 + 56) = v84;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 56), (int32_t)v84, v82, v83);
                  if ( !*v21 )
                    goto LABEL_122;
                  partyServantListViewManager = (PartyServantListViewManager_o *)(*v21)->fields.servantEntity;
                  if ( !partyServantListViewManager )
                    goto LABEL_122;
                  partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getClassName(
                                                                                   (ServantEntity_o *)partyServantListViewManager,
                                                                                   0LL);
                  v87 = partyServantListViewManager;
                  if ( !partyServantListViewManager
                    || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B886EC(
                                                                                         partyServantListViewManager,
                                                                                         *(_QWORD *)(*(_QWORD *)v70 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v70 + 24) <= 4u )
                      goto LABEL_123;
                    *(_QWORD *)(v70 + 64) = v87;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 64), (int32_t)v87, v85, v86);
                    if ( !*v21 )
                      goto LABEL_122;
                    partyServantListViewManager = (PartyServantListViewManager_o *)(*v21)->fields.servantEntity;
                    if ( !partyServantListViewManager )
                      goto LABEL_122;
                    partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getName(
                                                                                     (ServantEntity_o *)partyServantListViewManager,
                                                                                     ServantLimitCountSealAfter,
                                                                                     -1,
                                                                                     0LL);
                    v90 = partyServantListViewManager;
                    if ( !partyServantListViewManager
                      || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B886EC(
                                                                                           partyServantListViewManager,
                                                                                           *(_QWORD *)(*(_QWORD *)v70 + 64LL))) != 0LL )
                    {
                      if ( *(_DWORD *)(v70 + 24) > 5u )
                      {
                        *(_QWORD *)(v70 + 72) = v90;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 72), (int32_t)v90, v88, v89);
                        v91 = System_String__Format_61721540(v69, (System_Object_array *)v70, 0LL);
                        v92 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v93 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        v94 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v95 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v95,
                          (Il2CppObject *)v7,
                          Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__,
                          0LL);
                        partyServantListViewManager = (PartyServantListViewManager_o *)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        if ( v94 )
                        {
                          CommonUI__OpenConfirmDialog_30493912(
                            (CommonUI_o *)v94,
                            v68,
                            v91,
                            v92,
                            v93,
                            v95,
                            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                            0,
                            0,
                            0LL);
                          return;
                        }
LABEL_122:
                        sub_1B8880C(partyServantListViewManager, v9);
                      }
LABEL_123:
                      sub_1B88814(partyServantListViewManager, v9);
                    }
                  }
                }
              }
            }
          }
          v96 = sub_1B88830();
          sub_1B886D8(v96, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v44, 2, 0LL);
        this->fields.state = 2;
        v27 = this->fields.partyServantListViewManager;
        v41 = PartyServantListViewManager_CallbackFunc_TypeInfo;
LABEL_48:
        v28 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B887FC(v41);
        v30 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
        break;
      default:
        return;
    }
LABEL_71:
    v52 = v28;
    PartyServantListViewManager_CallbackFunc___ctor(v28, (Il2CppObject *)this, v30, v29);
    if ( v27 )
    {
      v27->fields.callbackFunc = v52;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v27->fields.callbackFunc, (int32_t)v52, v53, v54);
      PartyServantListViewManager__SetMode_32319108(v27, 2, v55);
      return;
    }
    goto LABEL_122;
  }
  v31 = Method_PartyServantSelectMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
    v31 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OnSelectItem__);
  v32 = (System_Reflection_MethodBase_o *)sub_1B88594(v31, v31[4]);
  OverwriteAssetSoundName__PlaySystemSe(v32, 1, 0LL);
  v34 = -1;
  this->fields.state = 3;
  v35 = this;
  v36 = 0;
LABEL_35:
  PartyServantSelectMenu__Callback(v35, v36, v34, v33);
}


void __fastcall PartyServantSelectMenu__Open(
        PartyServantSelectMenu_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyServantSelectMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        bool inCanMoveCombine,
        const MethodInfo *method)
{
  PartyServantSelectMenu_o *v18; // x19
  unsigned int state; // w8
  int v20; // w8
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct TitleInfoControl_o *titleInfo; // x8
  PartyServantSelectMenu_o *v28; // x26
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x7
  const MethodInfo *v34; // x2
  System_Int32_array *waveBattleEnemyClassIds; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v37; // x20

  v18 = this;
  if ( (byte_4A5727B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (PartyServantSelectMenu_o *)sub_1B885B0(&Method_PartyServantSelectMenu_EndOpen__);
    byte_4A5727B = 1;
  }
  state = v18->fields.state;
  v18->fields.canMoveCombine = inCanMoveCombine;
  if ( state <= 7 )
  {
    v20 = 1 << state;
    if ( (v20 & 0xCC) != 0 )
    {
      v18->fields.tutorialMode = tutorialMode;
      v18->fields.callbackFunc = callback;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v18->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        num);
      v18->fields.openCallbackFunc = openCallback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->fields.openCallbackFunc, (int32_t)openCallback, v21, v22);
      PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 0, v23);
      PartyServantSelectMenu__EndOpen(v18, v24);
      return;
    }
    if ( (v20 & 0x11) != 0 )
    {
      if ( partyItem )
      {
        this = (PartyServantSelectMenu_o *)PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( this )
        {
          titleInfo = this->fields.titleInfo;
          v28 = this;
          v18->fields.tutorialMode = tutorialMode;
          v18->fields.isSelectedSvt = titleInfo != 0LL;
          v18->fields.callbackFunc = callback;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->fields.callbackFunc, (int32_t)callback, v25, v26);
          v18->fields.openCallbackFunc = openCallback;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v18->fields.openCallbackFunc,
            (int32_t)openCallback,
            v29,
            v30);
          this = (PartyServantSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (PartyServantSelectMenu_o *)v18->fields.bgTxtSprite;
            if ( this )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              this = (PartyServantSelectMenu_o *)BgTxtManager__IsActiveBgTxt(0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0LL);
                PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 1, v32);
                this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                if ( this )
                {
                  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 70, 0LL);
                  this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                  if ( this )
                  {
                    TitleInfoControl__setBackBtnSprite_37184884((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
                    this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                    if ( this )
                    {
                      PartyServantListViewManager__CreateList(
                        (PartyServantListViewManager_o *)this,
                        baseDeckItemList,
                        partyItem,
                        num,
                        tutorialMode,
                        setupInfo,
                        questRestrictionInfo,
                        v33);
                      this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                      if ( this )
                      {
                        PartyServantListViewManager__SetMode_32319108((PartyServantListViewManager_o *)this, 1, v34);
                        this = (PartyServantSelectMenu_o *)v18->fields.questInfomationDraw;
                        if ( partyItem->fields.menuKind == 9 )
                        {
                          if ( !this )
                            goto LABEL_25;
                          waveBattleEnemyClassIds = partyItem->fields.waveBattleEnemyClassIds;
                        }
                        else
                        {
                          if ( !this )
                            goto LABEL_25;
                          waveBattleEnemyClassIds = 0LL;
                        }
                        FollowerQuestInfomationDraw__SetInfomation(
                          (FollowerQuestInfomationDraw_o *)this,
                          questRestrictionInfo,
                          HIDWORD(v28[1].fields.baseWindow),
                          waveBattleEnemyClassIds,
                          0LL);
                        this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                        if ( this )
                        {
                          scaleChangeTabSprite = v18->fields.scaleChangeTabSprite;
                          this = (PartyServantSelectMenu_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                               (PartyServantListViewManager_o *)this,
                                                               (const MethodInfo *)baseDeckItemList);
                          if ( scaleChangeTabSprite )
                          {
                            UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
                            v18->fields.state = 1;
                            v37 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                            System_Action___ctor(v37, (Il2CppObject *)v18, Method_PartyServantSelectMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)v18, v37, 0LL);
                            return;
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
LABEL_25:
      sub_1B8880C(this, baseDeckItemList);
    }
  }
}


void __fastcall PartyServantSelectMenu__OpenServantDetail(
        PartyServantSelectMenu_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v5; // x3
  struct PartyServantListViewManager_o *v6; // x8
  const MethodInfo *v7; // x2

  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_7;
  partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetPartyServantListViewItem(
                                                                   partyServantListViewManager,
                                                                   userServantId,
                                                                   method);
  if ( partyServantListViewManager )
  {
    v6 = this->fields.partyServantListViewManager;
    if ( v6 )
    {
      v6->fields._IsFocus_k__BackingField = 1;
      BYTE4(partyServantListViewManager->fields.normalSizeSeed) = 1;
      this->fields.canMoveCombine = 1;
      PartyServantSelectMenu__OpenServantDetail_32339680(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        v5);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_32319108(partyServantListViewManager, 4, v7);
        return;
      }
    }
LABEL_7:
    sub_1B8880C(partyServantListViewManager, userServantId);
  }
}


void __fastcall PartyServantSelectMenu__OpenServantDetail_32339680(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *partyServantListViewItem,
        bool isPlaySe,
        const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v11; // q1
  struct ServantEntity_o *equipServantEntity; // x8
  struct System_Int64_array *equipIdList; // x8
  int32_t partyIndex; // w23
  int32_t PartyListViewItemMenuKind_k__BackingField; // w24
  Il2CppObject *Instance; // x0
  UserServantEntity_o *v17; // x21
  CommonUI_o *v18; // x22
  System_Int64_array *v19; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  ServantStatusDialog_ResultDelegate_o *v21; // x24
  ServantStatusDialog_ResultDelegate_o *v22; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v23; // x24
  ServantStatusDialog_EndIndividualityDelegate_o *v24; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-60h]

  if ( (byte_4A57290 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_EndShowServantWithQuest__);
    sub_1B885B0(&Method_PartyServantSelectMenu_EndShowServant__);
    sub_1B885B0(&Method_PartyServantSelectMenu_OpenServantDetail__);
    sub_1B885B0(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57290 = 1;
  }
  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_28;
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
  if ( isPlaySe )
  {
    v8 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B885C8(Method_PartyServantSelectMenu_OpenServantDetail__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  }
  this->fields.state = 5;
  if ( !partyServantListViewItem )
    goto LABEL_28;
  userServantEntity = partyServantListViewItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_28;
  v11 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v25 = v26;
  partyServantListViewManager = (ListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                       &v25,
                                                       0LL);
  this->fields._SelectUserSvtId_k__BackingField = (int64_t)partyServantListViewManager;
  equipServantEntity = partyServantListViewItem->fields.equipServantEntity;
  if ( equipServantEntity )
  {
    equipIdList = partyServantListViewItem->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_28;
    if ( !equipIdList->max_length )
      sub_1B88814(partyServantListViewManager, partyServantListViewItem);
    equipServantEntity = (struct ServantEntity_o *)equipIdList->m_Items[0];
  }
  this->fields._SelectServantEquipId_k__BackingField = (int64_t)equipServantEntity;
  partyIndex = partyServantListViewItem->fields.partyIndex;
  PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = partyServantListViewItem->fields.userServantEntity;
  v18 = (CommonUI_o *)Instance;
  if ( (partyIndex & 0x80000000) != 0 )
  {
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v22 = (ServantStatusDialog_ResultDelegate_o *)sub_1B887FC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v22,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( !v18 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30504960(v18, 0, v17, v22, this->fields.canMoveCombine, 0LL);
    }
    else
    {
      v24 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1B887FC(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v24,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0LL);
      if ( !v18 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30504724(v18, 0, v17, v24, this->fields.canMoveCombine, 0LL);
    }
  }
  else
  {
    v19 = partyServantListViewItem->fields.equipIdList;
    questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v21 = (ServantStatusDialog_ResultDelegate_o *)sub_1B887FC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v21,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( v18 )
      {
        CommonUI__OpenServantStatusDialog_30505468(
          v18,
          0,
          v17,
          v19,
          questRestrictionInfo,
          v21,
          this->fields.canMoveCombine,
          0LL);
        return;
      }
LABEL_28:
      sub_1B8880C(partyServantListViewManager, partyServantListViewItem);
    }
    v23 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1B887FC(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    ServantStatusDialog_EndIndividualityDelegate___ctor(
      v23,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServant__,
      0LL);
    if ( !v18 )
      goto LABEL_28;
    CommonUI__OpenServantStatusDialog_30505196(
      v18,
      0,
      v17,
      v19,
      questRestrictionInfo,
      v23,
      this->fields.canMoveCombine,
      0LL);
  }
}


void __fastcall PartyServantSelectMenu__Open_32332032(
        PartyServantSelectMenu_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyServantSelectMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  unsigned int state; // w8
  int v18; // w8
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x1
  UnityEngine_GameObject_o *v27; // x25
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x6
  const MethodInfo *v30; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v32; // x20

  if ( (byte_4A5727C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_EndOpen__);
    byte_4A5727C = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v18 = 1 << state;
    if ( (v18 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, num, tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v19, v20);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v21);
      PartyServantSelectMenu__EndOpen(this, v22);
    }
    else if ( (v18 & 0x11) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, num, tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v23, v24);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
      if ( !gameObject )
        goto LABEL_19;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
      if ( !v27 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(v27, (unsigned __int8)gameObject & 1, 0LL);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 1, v28);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 70, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setBackBtnSprite_37184884((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_32314148(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v29);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_32319108((PartyServantListViewManager_o *)gameObject, 1, v30),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.questInfomationDraw) == 0LL)
        || (FollowerQuestInfomationDraw__SetInfomation(
              (FollowerQuestInfomationDraw_o *)gameObject,
              questRestrictionInfo,
              0,
              0LL,
              0LL),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager) == 0LL)
        || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
            gameObject = (UnityEngine_GameObject_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                       (PartyServantListViewManager_o *)gameObject,
                                                       v26),
            !scaleChangeTabSprite) )
      {
LABEL_19:
        sub_1B8880C(gameObject, v26);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v32 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v32, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v32, 0LL);
    }
  }
}


void __fastcall PartyServantSelectMenu__PushRequest(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
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
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A5728E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5728E = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userServantEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v7->fields.masterLoadThreads;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
  if ( !v22 )
LABEL_18:
    sub_1B8880C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_SynchronizationContext_o *)v39,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__SetTabKind(
        PartyServantSelectMenu_o *this,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  bool v7; // w21
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v9; // x8
  bool v10; // w23
  unsigned int v11; // w21
  UICommonButton_o *v12; // x22
  bool enabled; // w0
  __int64 *v14; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v16; // w0
  __int64 *v17; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v19; // w0
  UnityEngine_Object_o *pushTabButton; // x21
  __int64 *v21; // x8
  UICommonButton_o *v22; // x22
  bool v23; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v25; // x8
  int32_t state; // w8
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1

  if ( (byte_4A57280 & 1) == 0 )
  {
    sub_1B885B0(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1B885B0(&StringLiteral_17661/*"button_push_reg"*/);
    sub_1B885B0(&StringLiteral_17662/*"button_push_unreg"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_10331/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_10334/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_10332/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_10333/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A57280 = 1;
  }
  v7 = !this->fields.isInitTab || isInit;
  if ( v7 || this->fields.modeKind != modeKind )
  {
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *, const MethodInfo *))statusTabButton->klass[1]._1.namespaze)(
      statusTabButton,
      1LL,
      statusTabButton->klass[1]._1.byval_arg.data,
      method);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
    if ( !statusTabButton )
      goto LABEL_59;
    v9 = &StringLiteral_17663/*"button_select_reg"*/;
    if ( modeKind )
      v9 = &StringLiteral_17664/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    v10 = !v7;
    v11 = !v7;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v11,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    v12 = this->fields.statusTabButton;
    if ( !v12 )
      goto LABEL_59;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(v12, enabled, v11, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
      statusTabButton,
      1LL,
      statusTabButton->klass[1]._1.byval_arg.data);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !statusTabButton )
      goto LABEL_59;
    v14 = &StringLiteral_17649/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v14 = &StringLiteral_17650/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v14, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v10,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_59;
    v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v16, v10, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
      statusTabButton,
      1LL,
      statusTabButton->klass[1]._1.byval_arg.data);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !statusTabButton )
      goto LABEL_59;
    v17 = &StringLiteral_17647/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v17 = &StringLiteral_17648/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v17, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v10,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_59;
    v19 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v19, v10, 0LL);
    pushTabButton = (UnityEngine_Object_o *)this->fields.pushTabButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushTabButton, 0LL, 0LL) )
    {
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_59;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
        statusTabButton,
        1LL,
        statusTabButton->klass[1]._1.byval_arg.data);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_59;
      UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0LL);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
      if ( !statusTabButton )
        goto LABEL_59;
      v21 = &StringLiteral_17661/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v21 = &StringLiteral_17662/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v21, 0LL);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_59;
      statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                     statusTabButton,
                                                     0LL,
                                                     v10,
                                                     statusTabButton->klass[1]._1.interfaceOffsets);
      v22 = this->fields.pushTabButton;
      if ( !v22 )
        goto LABEL_59;
      v23 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
      UICommonButton__SetColliderEnable(v22, v23, v10, 0LL);
    }
    switch ( modeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_10334/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_50;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_10332/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_50;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_10331/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_50;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_10333/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
LABEL_50:
        statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v25, 0LL);
        if ( !explanationLabel )
          goto LABEL_59;
        UILabel__set_text(explanationLabel, (System_String_o *)statusTabButton, 0LL);
        break;
      default:
        break;
    }
  }
  state = this->fields.state;
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.partyServantListViewManager;
  this->fields.isInitTab = 1;
  this->fields.modeKind = modeKind;
  if ( state != 2 )
  {
    if ( statusTabButton )
    {
      v32 = 1;
      goto LABEL_58;
    }
LABEL_59:
    sub_1B8880C(statusTabButton, *(_QWORD *)&modeKind);
  }
  if ( !statusTabButton )
    goto LABEL_59;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)statusTabButton,
    modeKind,
    (const MethodInfo *)isInit);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  v28 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B887FC(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v29);
  if ( !partyServantListViewManager )
    goto LABEL_59;
  partyServantListViewManager->fields.callbackFunc = v28;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v28,
    v30,
    v31);
  v32 = 2;
  statusTabButton = (UnityEngine_Behaviour_o *)partyServantListViewManager;
LABEL_58:
  PartyServantListViewManager__SetMode_32319108(
    (PartyServantListViewManager_o *)statusTabButton,
    v32,
    (const MethodInfo *)isInit);
}


void __fastcall PartyServantSelectMenu__StatusRequest(
        PartyServantSelectMenu_o *this,
        PartyServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  System_Int64_array *v11; // x1
  System_Int64_array *v12; // x2
  bool v13; // w4
  bool v14; // w5
  int32_t v15; // w2
  int32_t v16; // w3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A57287 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_EndStatusSync__);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A57287 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v18 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapChoiceList(partyServantListViewManager, &choiceList, &v18, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v15, v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v17,
                                                                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v12 = v18;
        v11 = choiceList;
        v14 = 1;
        v13 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B8880C(partyServantListViewManager, callback);
    }
  }
  else if ( modeKind == 1 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapLockList(partyServantListViewManager, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v8, v9);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v10,
                                                                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v12 = unlockList;
        v11 = lockList;
        v13 = 1;
        v14 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)partyServantListViewManager,
          v11,
          v12,
          0,
          v13,
          v14,
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


void __fastcall PartyServantSelectMenu__add_callbackFunc(
        PartyServantSelectMenu_o *this,
        PartyServantSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyServantSelectMenu_o *v11; // x0
  PartyServantSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A57279 & 1) == 0 )
  {
    sub_1B885B0(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4A57279 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyServantSelectMenu_CallbackFunc_c *)v8->klass != PartyServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1B88ACC(v8);
  PartyServantSelectMenu__remove_callbackFunc(v11, v12, v13);
}


int64_t __fastcall PartyServantSelectMenu__get_SelectServantEquipId(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectServantEquipId_k__BackingField;
}


int64_t __fastcall PartyServantSelectMenu__get_SelectUserSvtId(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectUserSvtId_k__BackingField;
}


void __fastcall PartyServantSelectMenu__remove_callbackFunc(
        PartyServantSelectMenu_o *this,
        PartyServantSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyServantSelectMenu_o *v11; // x0
  int64_t v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A5727A & 1) == 0 )
  {
    sub_1B885B0(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4A5727A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyServantSelectMenu_CallbackFunc_c *)v8->klass != PartyServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1B88ACC(v8);
  PartyServantSelectMenu__set_SelectUserSvtId(v11, v12, v13);
}


void __fastcall PartyServantSelectMenu__set_SelectServantEquipId(
        PartyServantSelectMenu_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._SelectServantEquipId_k__BackingField = value;
}


void __fastcall PartyServantSelectMenu__set_SelectUserSvtId(
        PartyServantSelectMenu_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._SelectUserSvtId_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu_CallbackFunc___ctor(
        PartyServantSelectMenu_CallbackFunc_o *this,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C9508;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C94B0;
}


System_IAsyncResult_o *__fastcall PartyServantSelectMenu_CallbackFunc__BeginInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_4A57293 & 1) == 0 )
  {
    sub_1B885B0(&PartyServantSelectMenu_ResultKind_TypeInfo);
    byte_4A57293 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12, item, callback, object);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1B88564(this, v11, callback, object);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__Invoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, PartyServantListViewItem_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    item,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu_RequestCallbackFunc___ctor(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9564;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C951C;
}


System_IAsyncResult_o *__fastcall PartyServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4A57294 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A57294 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__Invoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___ctor(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___OnSelectItem_b__0(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct PartyServantSelectMenu_o *_4__this; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x19
  PartyServantListViewManager_CallbackFunc_o *v13; // x21

  if ( (byte_4A57295 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__);
    byte_4A57295 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  partyServantListViewManager = _4__this->fields.partyServantListViewManager;
  v13 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B887FC(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !partyServantListViewManager )
    goto LABEL_12;
  PartyServantListViewManager__SetMode(partyServantListViewManager, 2, v13, 0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  PartyServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  PartyServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}