void __fastcall PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49FA6B2 & 1) == 0 )
  {
    sub_1B64870(&BaseMenu_TypeInfo, method);
    byte_49FA6B2 = 1;
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
    sub_1B64814(p_callbackFunc, 0, n, (int32_t)method);
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1B64ACC(0LL, v10);
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
    sub_1B64ACC(0LL, method);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_32071072(this, 0LL, v2);
}


void __fastcall PartyServantSelectMenu__Close_32071072(
        PartyServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Action_o *v12; // x20

  if ( (byte_49FA6A0 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&Method_PartyServantSelectMenu_EndClose__, v6);
    byte_49FA6A0 = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1B64ACC(0LL, v7);
  PartyServantListViewManager__SetMode_32057384(partyServantListViewManager, 1, v8);
  this->fields.closeCallbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v10, v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCardFavoriteRequest(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v6; // x20
  PartyServantListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_49FA6B0 & 1) == 0 )
  {
    sub_1B64870(&PartyServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B64870(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    byte_49FA6B0 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v6 = this->fields.partyServantListViewManager,
        v7 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64ABC(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v8),
        !v6) )
  {
    sub_1B64ACC(partyServantListViewManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10);
  PartyServantListViewManager__SetMode_32057384(v6, 2, v11);
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
      sub_1B64ACC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32057384(partyServantListViewManager, 3, v6);
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
      sub_1B64ACC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32057384(partyServantListViewManager, 3, v6);
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
      sub_1B64ACC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32057384(partyServantListViewManager, 3, v6);
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
      sub_1B64ACC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32057384(partyServantListViewManager, 3, v6);
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
      sub_1B64ACC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32057384(partyServantListViewManager, 3, v6);
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
      sub_1B64ACC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32057384(partyServantListViewManager, 3, v6);
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
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__EndCloseShowServant(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  void *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v7; // x20
  PartyServantListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3

  if ( (byte_49FA6AC & 1) == 0 )
  {
    sub_1B64870(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    sub_1B64870(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    byte_49FA6AC = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager )
    goto LABEL_8;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)partyServantListViewManager,
    this->fields.modeKind,
    v2);
  v7 = this->fields.partyServantListViewManager;
  v8 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64ABC(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v9);
  if ( !v7
    || (v7->fields.callbackFunc = v8,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v7->fields.callbackFunc, (int32_t)v8, v10, v11),
        PartyServantListViewManager__SetMode_32057384(v7, 2, v12),
        (partyServantListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_1B64ACC(partyServantListViewManager, method);
  }
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)partyServantListViewManager + 16), 0LL) )
    PartyServantSelectMenu__Callback(this, 3, -1, v13);
}


void __fastcall PartyServantSelectMenu__EndCloseShowServantQuestJump(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49FA6AD & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49FA6AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialSelect; // w2
  const MethodInfo *v5; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_1B64ACC(0LL, method);
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  tutorialSelect = this->fields.tutorialSelect;
  this->fields.state = 3;
  PartyServantSelectMenu__Callback(this, 1, tutorialSelect, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndOpen(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  PartyServantListViewManager_o *tutorialMaskBase; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v17; // x21
  float v18; // s0
  float v19; // s3
  float v20; // s4
  int v21; // s1
  int v22; // s5
  int v23; // s6
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v26; // x21
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  int32_t v29; // w3
  const MethodInfo *v30; // x2
  ServantStatusBattleListViewItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v32; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_49FA69E & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&PartyServantListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1B64870(&FSUtility_TypeInfo, v5);
    sub_1B64870(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__, v6);
    sub_1B64870(&Method_PartyServantSelectMenu_OnSelectItem__, v7);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49FA69E = 1;
  }
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v26 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64ABC(PartyServantListViewManager_CallbackFunc_TypeInfo);
    PartyServantListViewManager_CallbackFunc___ctor(
      v26,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      v27);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v26;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&partyServantListViewManager->fields.callbackFunc,
        (int32_t)v26,
        v28,
        v29);
      PartyServantListViewManager__SetMode_32057384(partyServantListViewManager, 2, v30);
      goto LABEL_17;
    }
LABEL_20:
    sub_1B64ACC(tutorialMaskBase, v10);
  }
  v9 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v9, 0, v2);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  PartyServantListViewManager__SetMode_32057384(tutorialMaskBase, 1, v11);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_17;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
    goto LABEL_20;
  v18 = -367.0;
  v19 = -450.0;
  if ( !IsUnderVista )
    v19 = -442.0;
  if ( IsUnderVista )
    v18 = -375.0;
  v20 = -30.0;
  v21 = 1120403456;
  v22 = 1125515264;
  v23 = 1127481344;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v18,
    0.0,
    *(UnityEngine_Rect_o *)&v19,
    v17,
    0LL);
LABEL_17:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc;
  v32 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1B64814(p_openCallbackFunc, 0, v13, v14);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v32->fields.m_target)(
      v32->fields.original_method_info,
      *(_QWORD *)&v32->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *statusTabButton; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_49FA69F & 1) == 0 )
  {
    sub_1B64870(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_PartyServantSelectMenu_OnSelectItem__, v3);
    byte_49FA69F = 1;
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
        v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64ABC(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v7),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_1B64ACC(statusTabButton, method);
  }
  partyServantListViewManager->fields.callbackFunc = v6;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v6,
    v8,
    v9);
  PartyServantListViewManager__SetMode_32057384(partyServantListViewManager, 5, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndShowServant(
        PartyServantSelectMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v11; // x2
  int32_t v12; // w1
  RandomLimitCountManager_c *v13; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v15; // x21

  if ( (byte_49FA6AA & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_PartyServantSelectMenu_EndCloseShowServant__, v7);
    sub_1B64870(&RandomLimitCountManager_TypeInfo, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_49FA6AA = 1;
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
          v12 = 4;
LABEL_18:
          PartyServantListViewManager__SetMode_32057384(partyServantListViewManager, v12, v11);
          goto LABEL_19;
        }
LABEL_17:
        v12 = 3;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1B64ACC(partyServantListViewManager, isDecide);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_49FA2C6 )
  {
    sub_1B64870(&RandomLimitCountManager_TypeInfo, isDecide);
    byte_49FA2C6 = 1;
  }
  v13 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v13 = RandomLimitCountManager_TypeInfo;
  }
  if ( v13->static_fields->enableRandomLimitCount )
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndShowServantWithQuest(
        PartyServantSelectMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x22
  System_Action_o *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_49FA6AB & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_49FA6AB = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_1B64ACC(v13, v14);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
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
    sub_1B64814(p_requedstCallback, 0, (int32_t)method, v3);
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
    sub_1B64ACC(0LL, method);
  PartyServantListViewManager__DestroyList(partyServantListViewManager, method);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyServantSelectMenu__OnClickCancel(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_49FA6A3 & 1) == 0 )
  {
    sub_1B64870(&Method_PartyServantSelectMenu_EndClickCancel__, method);
    sub_1B64870(&Method_PartyServantSelectMenu_OnClickCancel__, v3);
    sub_1B64870(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA6A3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1B64ACC(0LL, method);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    v6 = Method_PartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    v8 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64ABC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickCancel__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v8, v9);
  }
}


void __fastcall PartyServantSelectMenu__OnClickDecide(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_49FA6A2 & 1) == 0 )
  {
    sub_1B64870(&Method_PartyServantSelectMenu_EndClickDecide__, method);
    sub_1B64870(&Method_PartyServantSelectMenu_OnClickDecide__, v3);
    sub_1B64870(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA6A2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyServantSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64ABC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickDecide__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v7, v8);
  }
}


void __fastcall PartyServantSelectMenu__OnClickScaleChange(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_49FA6AE & 1) == 0 )
  {
    sub_1B64870(&Method_PartyServantSelectMenu_OnClickScaleChange__, method);
    byte_49FA6AE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
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
      sub_1B64ACC(partyServantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)partyServantListViewManager, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabChoice(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_49FA6A6 & 1) == 0 )
  {
    sub_1B64870(&Method_PartyServantSelectMenu_EndClickTabChoice__, method);
    sub_1B64870(&Method_PartyServantSelectMenu_OnClickTabChoice__, v3);
    sub_1B64870(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA6A6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64ABC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v9, v10);
        return;
      }
      v11 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64ABC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabChoice__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v11, v12);
    }
    PartyServantSelectMenu__SetTabKind(this, 2, 0, v7);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabLock(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_49FA6A5 & 1) == 0 )
  {
    sub_1B64870(&Method_PartyServantSelectMenu_EndClickTabLock__, method);
    sub_1B64870(&Method_PartyServantSelectMenu_OnClickTabLock__, v3);
    sub_1B64870(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA6A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64ABC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v9, v10);
        return;
      }
      v11 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64ABC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabLock__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v11, v12);
    }
    PartyServantSelectMenu__SetTabKind(this, 1, 0, v7);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabPush(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_49FA6A7 & 1) == 0 )
  {
    sub_1B64870(&Method_PartyServantSelectMenu_EndClickTabPush__, method);
    sub_1B64870(&Method_PartyServantSelectMenu_OnClickTabPush__, v3);
    sub_1B64870(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA6A7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PartyServantSelectMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64ABC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabPush__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v7, v8);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabStatus(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_49FA6A4 & 1) == 0 )
  {
    sub_1B64870(&Method_PartyServantSelectMenu_EndClickTabStatus__, method);
    sub_1B64870(&Method_PartyServantSelectMenu_OnClickTabStatus__, v3);
    sub_1B64870(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA6A4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64ABC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabStatus__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__OnSelectItem(
        PartyServantSelectMenu_o *this,
        int32_t kind,
        int32_t n,
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
  __int64 v31; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x2
  int32_t v37; // w3
  int32_t state; // w8
  PartyServantListViewItem_o *Item; // x1
  int32_t tutorialMode; // w8
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v44; // x21
  PartyServantListViewItem_o **v45; // x21
  const MethodInfo *v46; // x3
  PartyServantListViewItem_o *v47; // x8
  unsigned int commonRestrictionId; // w10
  unsigned int v49; // w20
  int32_t modeKind; // w8
  struct PartyServantListViewManager_o *v51; // x20
  PartyServantListViewManager_CallbackFunc_o *v52; // x0
  const MethodInfo *v53; // x3
  intptr_t v54; // w2
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  PartyServantSelectMenu_o *v59; // x0
  int32_t v60; // w1
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  PartyServantListViewManager_CallbackFunc_c *v65; // x0
  _BOOL4 isEnabled; // w23
  _QWORD *v67; // x0
  System_Reflection_MethodBase_o *v68; // x0
  const MethodInfo *v69; // x2
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v72; // q1
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  _QWORD *v75; // x0
  struct PartyServantListViewManager_CallbackFunc_o *v76; // x21
  int32_t v77; // w2
  int32_t v78; // w3
  const MethodInfo *v79; // x2
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v81; // x19
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v84; // x25
  Il2CppObject *Master_object; // x19
  int32_t v86; // w22
  int32_t v87; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v88; // x8
  int32_t v89; // w22
  int32_t v90; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v92; // x19
  System_String_o *v93; // x22
  __int64 v94; // x23
  int32_t Rarity; // w26
  int32_t v96; // w2
  int32_t v97; // w3
  PartyServantListViewManager_o *v98; // x26
  int32_t v99; // w2
  int32_t v100; // w3
  PartyServantListViewManager_o *v101; // x26
  int32_t v102; // w2
  int32_t v103; // w3
  PartyServantListViewManager_o *v104; // x25
  int32_t v105; // w0
  int32_t v106; // w2
  int32_t v107; // w3
  PartyServantListViewManager_o *v108; // x25
  int32_t v109; // w2
  int32_t v110; // w3
  PartyServantListViewManager_o *v111; // x25
  int32_t v112; // w2
  int32_t v113; // w3
  PartyServantListViewManager_o *v114; // x21
  System_String_o *v115; // x21
  System_String_o *v116; // x22
  System_String_o *v117; // x23
  Il2CppObject *v118; // x24
  CommonConfirmDialog_ClickDelegate_o *v119; // x25
  __int64 v120; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  if ( (byte_49FA6A9 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&BalanceConfig_TypeInfo, v7);
    sub_1B64870(&PartyServantListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B64870(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_1B64870(&DataManager_TypeInfo, v13);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1B64870(&LocalizationManager_TypeInfo, v16);
    sub_1B64870(&object___TypeInfo, v17);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_1B64870(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__, v20);
    sub_1B64870(&Method_PartyServantSelectMenu_OnSelectItem__, v21);
    sub_1B64870(&Rarity_TypeInfo, v22);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B64870(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__, v25);
    sub_1B64870(&PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo, v26);
    sub_1B64870(&StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v27);
    sub_1B64870(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v28);
    sub_1B64870(&StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v29);
    sub_1B64870(&StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v30);
    byte_49FA6A9 = 1;
  }
  v31 = sub_1B64ABC(PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo);
  PartyServantSelectMenu___c__DisplayClass68_0___ctor((PartyServantSelectMenu___c__DisplayClass68_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_122;
  *(_QWORD *)(v31 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v31 + 16), (int32_t)this, v34, v35);
  state = this->fields.state;
  if ( state == 7 )
  {
    tutorialMode = this->fields.tutorialMode;
    this->fields.tutorialSelect = n;
    if ( tutorialMode != 2 )
      return;
    this->fields.state = 8;
    v41 = Method_PartyServantSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v41 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnSelectItem__);
    v42 = (System_Reflection_MethodBase_o *)sub_1B64854(v41, v41[4]);
    OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v44 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v44, 0LL);
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
    Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, v36);
  }
  *(_QWORD *)(v31 + 24) = Item;
  v45 = (PartyServantListViewItem_o **)(v31 + 24);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v31 + 24), (int32_t)Item, (int32_t)v36, v37);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      this->fields.state = 2;
      v51 = this->fields.partyServantListViewManager;
      v52 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64ABC(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v54 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    else
    {
      v33 = *v45;
      if ( !*v45 )
        goto LABEL_122;
      if ( v33->fields.userServantEntity )
      {
        PartyServantSelectMenu__OpenServantDetail_32077688(this, v33, 1, v46);
        return;
      }
      v73 = Method_PartyServantSelectMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v73 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnSelectItem__);
      v74 = (System_Reflection_MethodBase_o *)sub_1B64854(v73, v73[4]);
LABEL_70:
      OverwriteAssetSoundName__PlaySystemSe(v74, 2, 0LL);
      v51 = this->fields.partyServantListViewManager;
      v52 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64ABC(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v54 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    goto LABEL_71;
  }
  if ( kind == 2 )
  {
    switch ( this->fields.modeKind )
    {
      case 0:
        v47 = *v45;
        if ( !*v45 )
          goto LABEL_122;
        if ( !v47->fields.isBase && v47->fields.isQuestRestriction || v47->fields.isSame )
          goto LABEL_65;
        commonRestrictionId = v47->fields.commonRestrictionId;
        v49 = commonRestrictionId >> 31;
        if ( !v47->fields.isBase && (commonRestrictionId & 0x80000000) != 0 )
        {
          if ( v47->fields.isLeave
            || (v47->fields.fatigureTime & 0x8000000000000000LL) == 0
            || v47->fields._IsAllOutBattle_k__BackingField
            || v47->fields._IsDataLost_k__BackingField
            || v47->fields._TimesToRestart_k__BackingField > 0 )
          {
LABEL_65:
            LOBYTE(v49) = 0;
          }
          else
          {
            LOBYTE(v49) = !v47->fields._IsClearedWave_k__BackingField;
          }
        }
        v75 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v75 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnSelectItem__);
        v74 = (System_Reflection_MethodBase_o *)sub_1B64854(v75, v75[4]);
        if ( (v49 & 1) == 0 )
          goto LABEL_70;
        OverwriteAssetSoundName__PlaySystemSe(v74, 0, 0LL);
        v60 = 1;
        v59 = this;
        v58 = n;
        this->fields.state = 3;
        goto LABEL_35;
      case 1:
        v61 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v61 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnSelectItem__);
        v62 = (System_Reflection_MethodBase_o *)sub_1B64854(v61, v61[4]);
        OverwriteAssetSoundName__PlaySystemSe(v62, 11, 0LL);
        if ( !*v45 )
          goto LABEL_122;
        (*v45)->fields.isSwapLock ^= 1u;
        goto LABEL_47;
      case 2:
        v63 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v63 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnSelectItem__);
        v64 = (System_Reflection_MethodBase_o *)sub_1B64854(v63, v63[4]);
        OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0LL);
        if ( !*v45 )
          goto LABEL_122;
        (*v45)->fields.isSwapChoice ^= 1u;
LABEL_47:
        this->fields.state = 2;
        v51 = this->fields.partyServantListViewManager;
        v65 = PartyServantListViewManager_CallbackFunc_TypeInfo;
        goto LABEL_48;
      case 3:
        if ( !*v45 )
          goto LABEL_122;
        isEnabled = (*v45)->fields.isEnabled;
        v67 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v67 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnSelectItem__);
        v68 = (System_Reflection_MethodBase_o *)sub_1B64854(v67, v67[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v68, 0, 0LL);
          partyServantListViewManager = (PartyServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          dragParentObject = (int64_t)partyServantListViewManager->fields.dragParentObject;
          if ( !dragParentObject )
          {
LABEL_60:
            PartyServantSelectMenu__PushRequest(this, *v45, v69);
            return;
          }
          if ( !*v45 )
            goto LABEL_122;
          userServantEntity = (*v45)->fields.userServantEntity;
          if ( !userServantEntity )
            goto LABEL_122;
          v72 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v122.fields.fakeValue = v72;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v121 = v122;
          if ( dragParentObject == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v121, 0LL) )
            goto LABEL_60;
          partyServantListViewManager = (PartyServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          partyServantListViewManager = (PartyServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                           (DataManager_o *)partyServantListViewManager,
                                                                           (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager,
                     dragParentObject,
                     (const MethodInfo_30D632C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          partyServantListViewManager = (PartyServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          partyServantListViewManager = (PartyServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                           (DataManager_o *)partyServantListViewManager,
                                                                           (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_122;
          v81 = (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v123.fields.currentCryptoKey = klass;
          *(_QWORD *)&v123.fields.fakeValue = monitor;
          partyServantListViewManager = (PartyServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                           v123,
                                                                           0LL);
          if ( !v81 )
            goto LABEL_122;
          v84 = DataMasterBase_object__object__int___GetEntity(
                  v81,
                  (int32_t)partyServantListViewManager,
                  (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                  0LL);
          partyServantListViewManager = (PartyServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                                           0LL);
          if ( !Master_object )
            goto LABEL_122;
          partyServantListViewManager = (PartyServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                           (ServantLimitImageMaster_o *)Master_object,
                                                                           v86,
                                                                           (int32_t)partyServantListViewManager,
                                                                           0LL);
          if ( !*v45 )
            goto LABEL_122;
          v87 = (int)partyServantListViewManager;
          partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewItem__get_SvtId(
                                                                           *v45,
                                                                           (const MethodInfo *)v33);
          if ( !*v45 )
            goto LABEL_122;
          v88 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v45)->fields.userServantEntity;
          if ( !v88 )
            goto LABEL_122;
          v89 = (int)partyServantListViewManager;
          v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v88[6], 0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         (ServantLimitImageMaster_o *)Master_object,
                                         v89,
                                         v90,
                                         0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v92 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v93 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v94 = sub_1B64918(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          partyServantListViewManager = (PartyServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
          if ( !v94 )
            goto LABEL_122;
          v98 = partyServantListViewManager;
          if ( !partyServantListViewManager
            || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B649AC(
                                                                                 partyServantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
          {
            if ( !*(_DWORD *)(v94 + 24) )
              goto LABEL_123;
            *(_QWORD *)(v94 + 32) = v98;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v94 + 32), (int32_t)v98, v96, v97);
            if ( !v84 )
              goto LABEL_122;
            partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getClassName(
                                                                             (ServantEntity_o *)v84,
                                                                             0LL);
            v101 = partyServantListViewManager;
            if ( !partyServantListViewManager
              || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B649AC(
                                                                                   partyServantListViewManager,
                                                                                   *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v94 + 24) <= 1u )
                goto LABEL_123;
              *(_QWORD *)(v94 + 40) = v101;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v94 + 40), (int32_t)v101, v99, v100);
              partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getName(
                                                                               (ServantEntity_o *)v84,
                                                                               v87,
                                                                               -1,
                                                                               0LL);
              v104 = partyServantListViewManager;
              if ( !partyServantListViewManager
                || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B649AC(
                                                                                     partyServantListViewManager,
                                                                                     *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v94 + 24) <= 2u )
                  goto LABEL_123;
                *(_QWORD *)(v94 + 48) = v104;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v94 + 48), (int32_t)v104, v102, v103);
                if ( !*v45 )
                  goto LABEL_122;
                partyServantListViewManager = (PartyServantListViewManager_o *)(*v45)->fields.userServantEntity;
                if ( !partyServantListViewManager )
                  goto LABEL_122;
                v105 = UserServantEntity__getRarity((UserServantEntity_o *)partyServantListViewManager, 0LL);
                partyServantListViewManager = (PartyServantListViewManager_o *)Rarity__getRarityType(v105, 0LL);
                v108 = partyServantListViewManager;
                if ( !partyServantListViewManager
                  || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B649AC(
                                                                                       partyServantListViewManager,
                                                                                       *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v94 + 24) <= 3u )
                    goto LABEL_123;
                  *(_QWORD *)(v94 + 56) = v108;
                  sub_1B64814((ServantStatusBattleListViewItem_o *)(v94 + 56), (int32_t)v108, v106, v107);
                  if ( !*v45 )
                    goto LABEL_122;
                  partyServantListViewManager = (PartyServantListViewManager_o *)(*v45)->fields.servantEntity;
                  if ( !partyServantListViewManager )
                    goto LABEL_122;
                  partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getClassName(
                                                                                   (ServantEntity_o *)partyServantListViewManager,
                                                                                   0LL);
                  v111 = partyServantListViewManager;
                  if ( !partyServantListViewManager
                    || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B649AC(
                                                                                         partyServantListViewManager,
                                                                                         *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v94 + 24) <= 4u )
                      goto LABEL_123;
                    *(_QWORD *)(v94 + 64) = v111;
                    sub_1B64814((ServantStatusBattleListViewItem_o *)(v94 + 64), (int32_t)v111, v109, v110);
                    if ( !*v45 )
                      goto LABEL_122;
                    partyServantListViewManager = (PartyServantListViewManager_o *)(*v45)->fields.servantEntity;
                    if ( !partyServantListViewManager )
                      goto LABEL_122;
                    partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getName(
                                                                                     (ServantEntity_o *)partyServantListViewManager,
                                                                                     ServantLimitCountSealAfter,
                                                                                     -1,
                                                                                     0LL);
                    v114 = partyServantListViewManager;
                    if ( !partyServantListViewManager
                      || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B649AC(
                                                                                           partyServantListViewManager,
                                                                                           *(_QWORD *)(*(_QWORD *)v94 + 64LL))) != 0LL )
                    {
                      if ( *(_DWORD *)(v94 + 24) > 5u )
                      {
                        *(_QWORD *)(v94 + 72) = v114;
                        sub_1B64814((ServantStatusBattleListViewItem_o *)(v94 + 72), (int32_t)v114, v112, v113);
                        v115 = System_String__Format_61398084(v93, (System_Object_array *)v94, 0LL);
                        v116 = LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v117 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        v118 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v119 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64ABC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v119,
                          (Il2CppObject *)v31,
                          Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__,
                          0LL);
                        partyServantListViewManager = (PartyServantListViewManager_o *)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        if ( v118 )
                        {
                          CommonUI__OpenConfirmDialog_30346936(
                            (CommonUI_o *)v118,
                            v92,
                            v115,
                            v116,
                            v117,
                            v119,
                            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                            0,
                            0,
                            0LL);
                          return;
                        }
LABEL_122:
                        sub_1B64ACC(partyServantListViewManager, v33);
                      }
LABEL_123:
                      sub_1B64AD4(partyServantListViewManager, v33);
                    }
                  }
                }
              }
            }
          }
          v120 = sub_1B64AF0();
          sub_1B64998(v120, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v68, 2, 0LL);
        this->fields.state = 2;
        v51 = this->fields.partyServantListViewManager;
        v65 = PartyServantListViewManager_CallbackFunc_TypeInfo;
LABEL_48:
        v52 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64ABC(v65);
        v54 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
        break;
      default:
        return;
    }
LABEL_71:
    v76 = v52;
    PartyServantListViewManager_CallbackFunc___ctor(v52, (Il2CppObject *)this, v54, v53);
    if ( v51 )
    {
      v51->fields.callbackFunc = v76;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v51->fields.callbackFunc, (int32_t)v76, v77, v78);
      PartyServantListViewManager__SetMode_32057384(v51, 2, v79);
      return;
    }
    goto LABEL_122;
  }
  v55 = Method_PartyServantSelectMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
    v55 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OnSelectItem__);
  v56 = (System_Reflection_MethodBase_o *)sub_1B64854(v55, v55[4]);
  OverwriteAssetSoundName__PlaySystemSe(v56, 1, 0LL);
  v58 = -1;
  this->fields.state = 3;
  v59 = this;
  v60 = 0;
LABEL_35:
  PartyServantSelectMenu__Callback(v59, v60, v58, v57);
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
  __int64 v19; // x1
  unsigned int state; // w8
  int v21; // w8
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  struct TitleInfoControl_o *titleInfo; // x8
  PartyServantSelectMenu_o *v29; // x26
  int32_t v30; // w2
  int32_t v31; // w3
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x7
  const MethodInfo *v35; // x2
  System_Int32_array *waveBattleEnemyClassIds; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v38; // x20

  v18 = this;
  if ( (byte_49FA69C & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, baseDeckItemList);
    this = (PartyServantSelectMenu_o *)sub_1B64870(&Method_PartyServantSelectMenu_EndOpen__, v19);
    byte_49FA69C = 1;
  }
  state = v18->fields.state;
  v18->fields.canMoveCombine = inCanMoveCombine;
  if ( state <= 7 )
  {
    v21 = 1 << state;
    if ( (v21 & 0xCC) != 0 )
    {
      v18->fields.tutorialMode = tutorialMode;
      v18->fields.callbackFunc = callback;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&v18->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        num);
      v18->fields.openCallbackFunc = openCallback;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v18->fields.openCallbackFunc, (int32_t)openCallback, v22, v23);
      PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 0, v24);
      PartyServantSelectMenu__EndOpen(v18, v25);
      return;
    }
    if ( (v21 & 0x11) != 0 )
    {
      if ( partyItem )
      {
        this = (PartyServantSelectMenu_o *)PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( this )
        {
          titleInfo = this->fields.titleInfo;
          v29 = this;
          v18->fields.tutorialMode = tutorialMode;
          v18->fields.isSelectedSvt = titleInfo != 0LL;
          v18->fields.callbackFunc = callback;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&v18->fields.callbackFunc, (int32_t)callback, v26, v27);
          v18->fields.openCallbackFunc = openCallback;
          sub_1B64814(
            (ServantStatusBattleListViewItem_o *)&v18->fields.openCallbackFunc,
            (int32_t)openCallback,
            v30,
            v31);
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
                PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 1, v33);
                this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                if ( this )
                {
                  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 70, 0LL);
                  this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                  if ( this )
                  {
                    TitleInfoControl__setBackBtnSprite_36880072((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
                        v34);
                      this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                      if ( this )
                      {
                        PartyServantListViewManager__SetMode_32057384((PartyServantListViewManager_o *)this, 1, v35);
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
                          HIDWORD(v29[1].fields.baseWindow),
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
                            v38 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                            System_Action___ctor(v38, (Il2CppObject *)v18, Method_PartyServantSelectMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)v18, v38, 0LL);
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
      sub_1B64ACC(this, baseDeckItemList);
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
      PartyServantSelectMenu__OpenServantDetail_32077688(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        v5);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_32057384(partyServantListViewManager, 4, v7);
        return;
      }
    }
LABEL_7:
    sub_1B64ACC(partyServantListViewManager, userServantId);
  }
}


void __fastcall PartyServantSelectMenu__OpenServantDetail_32077688(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *partyServantListViewItem,
        bool isPlaySe,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v17; // q1
  struct ServantEntity_o *equipServantEntity; // x8
  struct System_Int64_array *equipIdList; // x8
  int32_t partyIndex; // w23
  int32_t PartyListViewItemMenuKind_k__BackingField; // w24
  Il2CppObject *Instance; // x0
  UserServantEntity_o *v23; // x21
  CommonUI_o *v24; // x22
  System_Int64_array *v25; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  ServantStatusDialog_ResultDelegate_o *v27; // x24
  ServantStatusDialog_ResultDelegate_o *v28; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v29; // x24
  ServantStatusDialog_EndIndividualityDelegate_o *v30; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-60h]

  if ( (byte_49FA6B1 & 1) == 0 )
  {
    sub_1B64870(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, partyServantListViewItem);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B64870(&Method_PartyServantSelectMenu_EndShowServantWithQuest__, v8);
    sub_1B64870(&Method_PartyServantSelectMenu_EndShowServant__, v9);
    sub_1B64870(&Method_PartyServantSelectMenu_OpenServantDetail__, v10);
    sub_1B64870(&ServantStatusDialog_ResultDelegate_TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_49FA6B1 = 1;
  }
  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_28;
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
  if ( isPlaySe )
  {
    v14 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1B64888(Method_PartyServantSelectMenu_OpenServantDetail__);
    v15 = (System_Reflection_MethodBase_o *)sub_1B64854(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  }
  this->fields.state = 5;
  if ( !partyServantListViewItem )
    goto LABEL_28;
  userServantEntity = partyServantListViewItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_28;
  v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v31 = v32;
  partyServantListViewManager = (ListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(
                                                       &v31,
                                                       0LL);
  this->fields._SelectUserSvtId_k__BackingField = (int64_t)partyServantListViewManager;
  equipServantEntity = partyServantListViewItem->fields.equipServantEntity;
  if ( equipServantEntity )
  {
    equipIdList = partyServantListViewItem->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_28;
    if ( !equipIdList->max_length )
      sub_1B64AD4(partyServantListViewManager, partyServantListViewItem);
    equipServantEntity = (struct ServantEntity_o *)equipIdList->m_Items[0];
  }
  this->fields._SelectServantEquipId_k__BackingField = (int64_t)equipServantEntity;
  partyIndex = partyServantListViewItem->fields.partyIndex;
  PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = partyServantListViewItem->fields.userServantEntity;
  v24 = (CommonUI_o *)Instance;
  if ( (partyIndex & 0x80000000) != 0 )
  {
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v28 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64ABC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v28,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( !v24 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30357964(v24, 0, v23, v28, this->fields.canMoveCombine, 0LL);
    }
    else
    {
      v30 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0LL);
      if ( !v24 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30357728(v24, 0, v23, v30, this->fields.canMoveCombine, 0LL);
    }
  }
  else
  {
    v25 = partyServantListViewItem->fields.equipIdList;
    questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v27 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64ABC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v27,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( v24 )
      {
        CommonUI__OpenServantStatusDialog_30358472(
          v24,
          0,
          v23,
          v25,
          questRestrictionInfo,
          v27,
          this->fields.canMoveCombine,
          0LL);
        return;
      }
LABEL_28:
      sub_1B64ACC(partyServantListViewManager, partyServantListViewItem);
    }
    v29 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    ServantStatusDialog_EndIndividualityDelegate___ctor(
      v29,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServant__,
      0LL);
    if ( !v24 )
      goto LABEL_28;
    CommonUI__OpenServantStatusDialog_30358200(
      v24,
      0,
      v23,
      v25,
      questRestrictionInfo,
      v29,
      this->fields.canMoveCombine,
      0LL);
  }
}


void __fastcall PartyServantSelectMenu__Open_32070040(
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
  __int64 v17; // x1
  unsigned int state; // w8
  int v19; // w8
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v27; // x1
  UnityEngine_GameObject_o *v28; // x25
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x6
  const MethodInfo *v31; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v33; // x20

  if ( (byte_49FA69D & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, partyItem);
    sub_1B64870(&Method_PartyServantSelectMenu_EndOpen__, v17);
    byte_49FA69D = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v19 = 1 << state;
    if ( (v19 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, num, tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v20, v21);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v22);
      PartyServantSelectMenu__EndOpen(this, v23);
    }
    else if ( (v19 & 0x11) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, num, tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v24, v25);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
      if ( !gameObject )
        goto LABEL_19;
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
      if ( !v28 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(v28, (unsigned __int8)gameObject & 1, 0LL);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 1, v29);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 70, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setBackBtnSprite_36880072((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_32052424(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v30);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_32057384((PartyServantListViewManager_o *)gameObject, 1, v31),
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
                                                       v27),
            !scaleChangeTabSprite) )
      {
LABEL_19:
        sub_1B64ACC(gameObject, v27);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v33 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v33, 0LL);
    }
  }
}


void __fastcall PartyServantSelectMenu__PushRequest(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *selectItem,
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
  struct UserServantEntity_o *userServantEntity; // x19
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

  if ( (byte_49FA6AF & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B64870(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B64870(&NetworkManager_TypeInfo, v6);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B64870(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__, v9);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FA6AF = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
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
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v15->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
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
void __fastcall PartyServantSelectMenu__SetTabKind(
        PartyServantSelectMenu_o *this,
        int32_t modeKind,
        bool isInit,
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
  bool v22; // w21
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v24; // x8
  bool v25; // w23
  unsigned int v26; // w21
  UICommonButton_o *v27; // x22
  bool enabled; // w0
  __int64 *v29; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v31; // w0
  __int64 *v32; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v34; // w0
  UnityEngine_Object_o *pushTabButton; // x21
  __int64 *v36; // x8
  UICommonButton_o *v37; // x22
  bool v38; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v40; // x8
  int32_t state; // w8
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v43; // x21
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w1

  if ( (byte_49FA6A1 & 1) == 0 )
  {
    sub_1B64870(&PartyServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B64870(&LocalizationManager_TypeInfo, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    sub_1B64870(&Method_PartyServantSelectMenu_OnSelectItem__, v9);
    sub_1B64870(&StringLiteral_17593/*"button_push_reg"*/, v10);
    sub_1B64870(&StringLiteral_17594/*"button_push_unreg"*/, v11);
    sub_1B64870(&StringLiteral_17579/*"button_allchoice_reg"*/, v12);
    sub_1B64870(&StringLiteral_17582/*"button_alllock_unreg"*/, v13);
    sub_1B64870(&StringLiteral_10283/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/, v14);
    sub_1B64870(&StringLiteral_10286/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/, v15);
    sub_1B64870(&StringLiteral_17595/*"button_select_reg"*/, v16);
    sub_1B64870(&StringLiteral_10284/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/, v17);
    sub_1B64870(&StringLiteral_10285/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/, v18);
    sub_1B64870(&StringLiteral_17596/*"button_select_unreg"*/, v19);
    sub_1B64870(&StringLiteral_17581/*"button_alllock_reg"*/, v20);
    sub_1B64870(&StringLiteral_17580/*"button_allchoice_unreg"*/, v21);
    byte_49FA6A1 = 1;
  }
  v22 = !this->fields.isInitTab || isInit;
  if ( v22 || this->fields.modeKind != modeKind )
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
    v24 = &StringLiteral_17595/*"button_select_reg"*/;
    if ( modeKind )
      v24 = &StringLiteral_17596/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v24, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    v25 = !v22;
    v26 = !v22;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v26,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    v27 = this->fields.statusTabButton;
    if ( !v27 )
      goto LABEL_59;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(v27, enabled, v26, 0LL);
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
    v29 = &StringLiteral_17581/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v29 = &StringLiteral_17582/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v29, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v25,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_59;
    v31 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v31, v25, 0LL);
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
    v32 = &StringLiteral_17579/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v32 = &StringLiteral_17580/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v32, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v25,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_59;
    v34 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v34, v25, 0LL);
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
      v36 = &StringLiteral_17593/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v36 = &StringLiteral_17594/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v36, 0LL);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_59;
      statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                     statusTabButton,
                                                     0LL,
                                                     v25,
                                                     statusTabButton->klass[1]._1.interfaceOffsets);
      v37 = this->fields.pushTabButton;
      if ( !v37 )
        goto LABEL_59;
      v38 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
      UICommonButton__SetColliderEnable(v37, v38, v25, 0LL);
    }
    switch ( modeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10286/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_50;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10284/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_50;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10283/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_50;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10285/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
LABEL_50:
        statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v40, 0LL);
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
      v47 = 1;
      goto LABEL_58;
    }
LABEL_59:
    sub_1B64ACC(statusTabButton, *(_QWORD *)&modeKind);
  }
  if ( !statusTabButton )
    goto LABEL_59;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)statusTabButton,
    modeKind,
    (const MethodInfo *)isInit);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  v43 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64ABC(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v43,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v44);
  if ( !partyServantListViewManager )
    goto LABEL_59;
  partyServantListViewManager->fields.callbackFunc = v43;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v43,
    v45,
    v46);
  v47 = 2;
  statusTabButton = (UnityEngine_Behaviour_o *)partyServantListViewManager;
LABEL_58:
  PartyServantListViewManager__SetMode_32057384(
    (PartyServantListViewManager_o *)statusTabButton,
    v47,
    (const MethodInfo *)isInit);
}


void __fastcall PartyServantSelectMenu__StatusRequest(
        PartyServantSelectMenu_o *this,
        PartyServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x1
  System_Int64_array *v15; // x2
  bool v16; // w4
  bool v17; // w5
  int32_t v18; // w2
  int32_t v19; // w3
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  System_Int64_array *v21; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FA6A8 & 1) == 0 )
  {
    sub_1B64870(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B64870(&NetworkManager_TypeInfo, v6);
    sub_1B64870(&Method_PartyServantSelectMenu_EndStatusSync__, v7);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_49FA6A8 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v21 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapChoiceList(partyServantListViewManager, &choiceList, &v21, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v18, v19);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v20,
                                                                       (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v15 = v21;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B64ACC(partyServantListViewManager, callback);
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
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v11, v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v13,
                                                                       (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v15 = unlockList;
        v14 = lockList;
        v16 = 1;
        v17 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)partyServantListViewManager,
          v14,
          v15,
          0,
          v16,
          v17,
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

  if ( (byte_49FA69A & 1) == 0 )
  {
    sub_1B64870(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49FA69A = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1B64D8C(v8);
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

  if ( (byte_49FA69B & 1) == 0 )
  {
    sub_1B64870(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49FA69B = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1B64D8C(v8);
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
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A74BC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7464;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_49FA6B4 & 1) == 0 )
  {
    sub_1B64870(&PartyServantSelectMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_49FA6B4 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12, item, callback, object);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1B64824(this, v11, callback, object);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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
  this->fields.m_target = (Il2CppObject *)sub_19A7518;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A74D0;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_49FA6B5 & 1) == 0 )
  {
    sub_1B64870(&bool_TypeInfo, isRequest);
    byte_49FA6B5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___OnSelectItem_b__0(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
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
  struct PartyServantSelectMenu_o *_4__this; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x19
  PartyServantListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_49FA6B6 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&PartyServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B64870(&Method_PartyServantSelectMenu_OnSelectItem__, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B64870(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__, v8);
    byte_49FA6B6 = 1;
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
        Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__,
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
  partyServantListViewManager = _4__this->fields.partyServantListViewManager;
  v17 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64ABC(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !partyServantListViewManager )
    goto LABEL_12;
  PartyServantListViewManager__SetMode(partyServantListViewManager, 2, v17, 0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  PartyServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  PartyServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}