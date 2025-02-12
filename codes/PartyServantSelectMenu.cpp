void __fastcall PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BC3A9D & 1) == 0 )
  {
    sub_1C1ABD4(&BaseMenu_TypeInfo, method);
    byte_4BC3A9D = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__Callback(
        PartyServantSelectMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct PartyServantSelectMenu_CallbackFunc_o *v10; // x22
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  __int64 v14; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *Item; // x2

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C1AB78(p_callbackFunc, 0LL, *(int64_t *)&n, (int32_t)method, v4, v5, v6, v7);
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1C1AE30(0LL, v14);
      Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, 0LL);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, PartyServantListViewItem_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      (unsigned int)result,
      Item,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__ClearScrollValue(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0

  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1C1AE30(0LL, method);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_33394208(this, 0LL, v2);
}


void __fastcall PartyServantSelectMenu__Close_33394208(
        PartyServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Action_o *v15; // x20

  if ( (byte_4BC3A8B & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, callback);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndClose__, v6);
    byte_4BC3A8B = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1C1AE30(0LL, v7);
  PartyServantListViewManager__SetMode_33261980(partyServantListViewManager, 1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v15, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCardFavoriteRequest(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewManager_o *v6; // x20
  PartyServantListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4BC3A9B & 1) == 0 )
  {
    sub_1C1ABD4(&PartyServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    byte_4BC3A9B = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, 0LL),
        v6 = this->fields.partyServantListViewManager,
        v7 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C1AE20(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v8),
        !v6) )
  {
    sub_1C1AE30(partyServantListViewManager, result);
  }
  PartyServantListViewManager__SetMode(v6, 2, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndClickCancel(
        PartyServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, 0LL),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1C1AE30(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33261980(partyServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, 0LL),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1C1AE30(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33261980(partyServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, 0LL),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1C1AE30(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33261980(partyServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, 0LL),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1C1AE30(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33261980(partyServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, 0LL),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1C1AE30(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33261980(partyServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, 0LL),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_1C1AE30(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33261980(partyServantListViewManager, 3, 0LL);
  }
  PartyServantSelectMenu__SetTabKind(this, 0, 0, v3);
}


void __fastcall PartyServantSelectMenu__EndClose(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  PartyServantSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__EndCloseShowServant(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *partyServantListViewManager; // x0
  PartyServantListViewManager_o *v6; // x20
  PartyServantListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  if ( (byte_4BC3A97 & 1) == 0 )
  {
    sub_1C1ABD4(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnSelectItem__, v3);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    byte_4BC3A97 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(
          (PartyServantListViewManager_o *)partyServantListViewManager,
          this->fields.modeKind,
          0LL),
        v6 = this->fields.partyServantListViewManager,
        v7 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C1AE20(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v8),
        !v6)
    || (PartyServantListViewManager__SetMode(v6, 2, v7, 0LL),
        (partyServantListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
    sub_1C1AE30(partyServantListViewManager, method);
  }
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)partyServantListViewManager + 19), 0LL) )
    PartyServantSelectMenu__Callback(this, 3, -1, v9);
}


void __fastcall PartyServantSelectMenu__EndCloseShowServantQuestJump(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BC3A98 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4BC3A98 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialSelect; // w2
  const MethodInfo *v5; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_1C1AE30(0LL, method);
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
  PartyServantListViewManager_o *tutorialMaskBase; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v20; // x21
  float v21; // s0
  float v22; // s3
  float v23; // s4
  int v24; // s1
  int v25; // s5
  int v26; // s6
  int32_t modeKind; // w1
  PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  PartyOrganizationUtility_o *p_openCallbackFunc; // x19
  struct System_Action_o *v32; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4BC3A89 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&PartyServantListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1C1ABD4(&FSUtility_TypeInfo, v5);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__, v6);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnSelectItem__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4BC3A89 = 1;
  }
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v29 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C1AE20(PartyServantListViewManager_CallbackFunc_TypeInfo);
    PartyServantListViewManager_CallbackFunc___ctor(
      v29,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      v30);
    if ( partyServantListViewManager )
    {
      PartyServantListViewManager__SetMode(partyServantListViewManager, 2, v29, 0LL);
      goto LABEL_17;
    }
LABEL_20:
    sub_1C1AE30(tutorialMaskBase, v10);
  }
  v9 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v9, 0, v2);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  PartyServantListViewManager__SetMode_33261980(tutorialMaskBase, 1, 0LL);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_17;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
    goto LABEL_20;
  v21 = -367.0;
  v22 = -450.0;
  if ( !IsUnderVista )
    v22 = -442.0;
  if ( IsUnderVista )
    v21 = -375.0;
  v23 = -30.0;
  v24 = 1120403456;
  v25 = 1125515264;
  v26 = 1127481344;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v21,
    0.0,
    *(UnityEngine_Rect_o *)&v22,
    v20,
    0LL);
LABEL_17:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc;
  v32 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1C1AB78(p_openCallbackFunc, 0LL, v12, v13, v14, v15, v16, v17);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v32->fields.m_target)(
      v32->fields.original_method_info,
      *(_QWORD *)&v32->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *statusTabButton; // x0
  PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4BC3A8A & 1) == 0 )
  {
    sub_1C1ABD4(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnSelectItem__, v3);
    byte_4BC3A8A = 1;
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
        v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C1AE20(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v7),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_1C1AE30(statusTabButton, method);
  }
  PartyServantListViewManager__SetMode(partyServantListViewManager, 5, v6, 0LL);
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
  int32_t v11; // w1
  RandomLimitCountManager_c *v12; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v14; // x21

  if ( (byte_4BC3A95 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndCloseShowServant__, v7);
    sub_1C1ABD4(&RandomLimitCountManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4BC3A95 = 1;
  }
  if ( isDecide )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( partyServantListViewManager )
    {
      PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, 0LL);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        if ( isNeedSort )
        {
          v11 = 4;
LABEL_18:
          PartyServantListViewManager__SetMode_33261980(partyServantListViewManager, v11, 0LL);
          goto LABEL_19;
        }
LABEL_17:
        v11 = 3;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1C1AE30(partyServantListViewManager, isDecide);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BC3A75 )
  {
    sub_1C1ABD4(&RandomLimitCountManager_TypeInfo, isDecide);
    byte_4BC3A75 = 1;
  }
  v12 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v12 = RandomLimitCountManager_TypeInfo;
  }
  if ( v12->static_fields->enableRandomLimitCount )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( partyServantListViewManager )
    {
      PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, 0LL);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
        goto LABEL_17;
    }
    goto LABEL_21;
  }
LABEL_19:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
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

  if ( (byte_4BC3A96 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4BC3A96 = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_1C1AE30(v13, v14);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct PartyServantSelectMenu_RequestCallbackFunc_o *requedstCallback; // x19
  PartyOrganizationUtility_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (PartyOrganizationUtility_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0LL;
    sub_1C1AB78(p_requedstCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1C1AE30(0LL, method);
  PartyServantListViewManager__DestroyList(partyServantListViewManager, 0LL);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4BC3A8E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndClickCancel__, method);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnClickCancel__, v3);
    sub_1C1ABD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BC3A8E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1C1AE30(0LL, method);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    v6 = Method_PartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
    v8 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C1AE20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickCancel__,
      v9);
    PartyServantSelectMenu__StatusRequest(this, v8, v10);
  }
}


void __fastcall PartyServantSelectMenu__OnClickDecide(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4BC3A8D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndClickDecide__, method);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnClickDecide__, v3);
    sub_1C1ABD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BC3A8D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyServantSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C1AE20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickDecide__,
      v8);
    PartyServantSelectMenu__StatusRequest(this, v7, v9);
  }
}


void __fastcall PartyServantSelectMenu__OnClickScaleChange(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4BC3A99 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnClickScaleChange__, method);
    byte_4BC3A99 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ChangeIconScale(partyServantListViewManager, 0LL),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                                           partyServantListViewManager,
                                                                           0LL),
          !scaleChangeTabSprite) )
    {
      sub_1C1AE30(partyServantListViewManager, v5);
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
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4BC3A91 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndClickTabChoice__, method);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnClickTabChoice__, v3);
    sub_1C1ABD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BC3A91 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C1AE20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          v10);
        PartyServantSelectMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C1AE20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabChoice__,
        v13);
      PartyServantSelectMenu__StatusRequest(this, v12, v14);
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
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4BC3A90 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndClickTabLock__, method);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnClickTabLock__, v3);
    sub_1C1ABD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BC3A90 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C1AE20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          v10);
        PartyServantSelectMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C1AE20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabLock__,
        v13);
      PartyServantSelectMenu__StatusRequest(this, v12, v14);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4BC3A92 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndClickTabPush__, method);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnClickTabPush__, v3);
    sub_1C1ABD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BC3A92 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PartyServantSelectMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C1AE20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabPush__,
      v8);
    PartyServantSelectMenu__StatusRequest(this, v7, v9);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabStatus(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4BC3A8F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndClickTabStatus__, method);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnClickTabStatus__, v3);
    sub_1C1ABD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BC3A8F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C1AE20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabStatus__,
      v8);
    PartyServantSelectMenu__StatusRequest(this, v7, v9);
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
  int64_t partyServantListViewManager; // x0
  PartyServantListViewItem_o *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int32_t state; // w8
  PartyServantListViewItem_o *Item; // x1
  int32_t tutorialMode; // w8
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v52; // x21
  PartyServantListViewItem_o **v53; // x21
  const MethodInfo *v54; // x3
  PartyServantListViewItem_o *v55; // x8
  bool v56; // w20
  int32_t modeKind; // w8
  PartyServantListViewManager_o *v58; // x20
  PartyServantListViewManager_CallbackFunc_o *v59; // x0
  const MethodInfo *v60; // x3
  intptr_t v61; // w2
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  PartyServantSelectMenu_o *v66; // x0
  int32_t v67; // w1
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  _QWORD *v70; // x0
  System_Reflection_MethodBase_o *v71; // x0
  _BOOL4 isEnabled; // w23
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  const MethodInfo *v75; // x2
  int64_t v76; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v78; // q1
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  _QWORD *v81; // x0
  PartyServantListViewManager_CallbackFunc_o *v82; // x21
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // x19
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v87; // x26
  Il2CppObject *Master_object; // x24
  System_String_o *v89; // x19
  System_String_o *v90; // x22
  __int64 v91; // x23
  int32_t Rarity; // w27
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x27
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x26
  int32_t v107; // w0
  Il2CppClass *v108; // x8
  int32_t v109; // w25
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x25
  int32_t v117; // w0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x25
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v132; // x8
  int32_t v133; // w21
  int32_t v134; // w0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  int64_t v141; // x21
  System_String_o *v142; // x21
  System_String_o *v143; // x22
  System_String_o *v144; // x23
  Il2CppObject *v145; // x24
  CommonConfirmDialog_ClickDelegate_o *v146; // x25
  __int64 v147; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16

  if ( (byte_4BC3A94 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&BalanceConfig_TypeInfo, v7);
    sub_1C1ABD4(&PartyServantListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1C1ABD4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_1C1ABD4(&DataManager_TypeInfo, v13);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v16);
    sub_1C1ABD4(&object___TypeInfo, v17);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__, v20);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnSelectItem__, v21);
    sub_1C1ABD4(&Rarity_TypeInfo, v22);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1C1ABD4(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__, v25);
    sub_1C1ABD4(&PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo, v26);
    sub_1C1ABD4(&StringLiteral_12103/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v27);
    sub_1C1ABD4(&StringLiteral_12101/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v28);
    sub_1C1ABD4(&StringLiteral_12102/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v29);
    sub_1C1ABD4(&StringLiteral_12104/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v30);
    byte_4BC3A94 = 1;
  }
  v31 = sub_1C1AE20(PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_123;
  *(_QWORD *)(v31 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)this, v34, v35, v36, v37, v38, v39);
  state = this->fields.state;
  if ( state == 7 )
  {
    tutorialMode = this->fields.tutorialMode;
    this->fields.tutorialSelect = n;
    if ( tutorialMode != 2 )
      return;
    this->fields.state = 8;
    v49 = Method_PartyServantSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v49 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnSelectItem__);
    v50 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v49, v49[4]);
    OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v52 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v52, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v52, 0LL);
      return;
    }
    goto LABEL_123;
  }
  if ( state != 2 )
    return;
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    partyServantListViewManager = (int64_t)this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_123;
    Item = PartyServantListViewManager__GetItem((PartyServantListViewManager_o *)partyServantListViewManager, n, 0LL);
  }
  *(_QWORD *)(v31 + 24) = Item;
  v53 = (PartyServantListViewItem_o **)(v31 + 24);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)Item, v40, v41, v42, v43, v44, v45);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      this->fields.state = 2;
      v58 = this->fields.partyServantListViewManager;
      v59 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C1AE20(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v61 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    else
    {
      v33 = *v53;
      if ( !*v53 )
        goto LABEL_123;
      if ( v33->fields.userServantEntity )
      {
        PartyServantSelectMenu__OpenServantDetail_33401016(this, v33, 1, v54);
        return;
      }
      v79 = Method_PartyServantSelectMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v79 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnSelectItem__);
      v80 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v79, v79[4]);
LABEL_67:
      OverwriteAssetSoundName__PlaySystemSe(v80, 2, 0, 0LL);
      v58 = this->fields.partyServantListViewManager;
      v59 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C1AE20(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v61 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    goto LABEL_68;
  }
  if ( kind == 2 )
  {
    switch ( this->fields.modeKind )
    {
      case 0:
        partyServantListViewManager = (int64_t)*v53;
        if ( !*v53 )
          goto LABEL_123;
        if ( !*(_BYTE *)(partyServantListViewManager + 200) && *(_BYTE *)(partyServantListViewManager + 233) )
          goto LABEL_62;
        if ( *(_BYTE *)(partyServantListViewManager + 211) )
          goto LABEL_62;
        if ( *(_BYTE *)(partyServantListViewManager + 212) )
          goto LABEL_62;
        partyServantListViewManager = PartyServantListViewItem__get_IsRestricted(
                                        (PartyServantListViewItem_o *)partyServantListViewManager,
                                        0LL);
        if ( (partyServantListViewManager & 1) != 0 )
          goto LABEL_62;
        v55 = *v53;
        if ( !*v53 )
          goto LABEL_123;
        if ( v55->fields.isBase )
        {
          v56 = 1;
        }
        else if ( v55->fields.isLeave
               || (v55->fields.fatigureTime & 0x8000000000000000LL) == 0
               || v55->fields._IsAllOutBattle_k__BackingField
               || v55->fields._IsDataLost_k__BackingField
               || v55->fields._TimesToRestart_k__BackingField > 0 )
        {
LABEL_62:
          v56 = 0;
        }
        else
        {
          v56 = !v55->fields._IsClearedWave_k__BackingField;
        }
        v81 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v81 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnSelectItem__);
        v80 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v81, v81[4]);
        if ( !v56 )
          goto LABEL_67;
        OverwriteAssetSoundName__PlaySystemSe(v80, 0, 0, 0LL);
        v67 = 1;
        v66 = this;
        v65 = n;
        this->fields.state = 3;
        goto LABEL_32;
      case 1:
        v68 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v68 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnSelectItem__);
        v69 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v68, v68[4]);
        OverwriteAssetSoundName__PlaySystemSe(v69, 11, 0, 0LL);
        partyServantListViewManager = (int64_t)*v53;
        if ( !*v53 )
          goto LABEL_123;
        PartyServantListViewItem__SwapLock((PartyServantListViewItem_o *)partyServantListViewManager, 0LL);
        goto LABEL_44;
      case 2:
        v70 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v70 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnSelectItem__);
        v71 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v70, v70[4]);
        OverwriteAssetSoundName__PlaySystemSe(v71, 0, 0, 0LL);
        partyServantListViewManager = (int64_t)*v53;
        if ( !*v53 )
          goto LABEL_123;
        PartyServantListViewItem__SwapChoice((PartyServantListViewItem_o *)partyServantListViewManager, 0LL);
LABEL_44:
        v58 = this->fields.partyServantListViewManager;
        this->fields.state = 2;
        goto LABEL_45;
      case 3:
        if ( !*v53 )
          goto LABEL_123;
        isEnabled = (*v53)->fields.isEnabled;
        v73 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v73 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnSelectItem__);
        v74 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v73, v73[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v74, 0, 0, 0LL);
          partyServantListViewManager = (int64_t)UserGameMaster__getSelfUserGame(0LL);
          if ( !partyServantListViewManager )
            goto LABEL_123;
          v76 = *(_QWORD *)(partyServantListViewManager + 120);
          if ( !v76 )
          {
LABEL_57:
            PartyServantSelectMenu__PushRequest(this, *v53, v75);
            return;
          }
          if ( !*v53 )
            goto LABEL_123;
          userServantEntity = (*v53)->fields.userServantEntity;
          if ( !userServantEntity )
            goto LABEL_123;
          v78 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v149.fields.fakeValue = v78;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v148 = v149;
          if ( v76 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v148, 0LL) )
            goto LABEL_57;
          partyServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_123;
          partyServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !partyServantListViewManager )
            goto LABEL_123;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager,
                     v76,
                     (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          partyServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_123;
          partyServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_123;
          v84 = (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v150.fields.currentCryptoKey = klass;
          *(_QWORD *)&v150.fields.fakeValue = monitor;
          partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v150, 0LL);
          if ( !v84 )
            goto LABEL_123;
          v87 = DataMasterBase_object__object__int___GetEntity(
                  v84,
                  partyServantListViewManager,
                  (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12104/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v90 = LocalizationManager__Get((System_String_o *)StringLiteral_12103/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v91 = sub_1C1AC7C(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          partyServantListViewManager = (int64_t)Rarity__getRarityType(Rarity, 0LL);
          if ( !v91 )
            goto LABEL_123;
          v99 = partyServantListViewManager;
          if ( !partyServantListViewManager
            || (partyServantListViewManager = sub_1C1AD10(
                                                partyServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v91 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v91 + 24) )
              goto LABEL_124;
            *(_QWORD *)(v91 + 32) = v99;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v91 + 32), v99, v93, v94, v95, v96, v97, v98);
            if ( !v87 )
              goto LABEL_123;
            partyServantListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v87, 0LL);
            v106 = partyServantListViewManager;
            if ( !partyServantListViewManager
              || (partyServantListViewManager = sub_1C1AD10(
                                                  partyServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v91 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v91 + 24) <= 1u )
                goto LABEL_124;
              *(_QWORD *)(v91 + 40) = v106;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v91 + 40), v106, v100, v101, v102, v103, v104, v105);
              v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                       0LL);
              v108 = Entity[6].klass;
              *(_QWORD *)&v151.fields.fakeValue = Entity[6].monitor;
              v109 = v107;
              *(_QWORD *)&v151.fields.currentCryptoKey = v108;
              partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                              v151,
                                              0LL);
              if ( !Master_object )
                goto LABEL_123;
              partyServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                       (ServantLimitImageMaster_o *)Master_object,
                                                       v109,
                                                       partyServantListViewManager,
                                                       1,
                                                       0LL);
              v116 = partyServantListViewManager;
              if ( !partyServantListViewManager
                || (partyServantListViewManager = sub_1C1AD10(
                                                    partyServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v91 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v91 + 24) <= 2u )
                  goto LABEL_124;
                *(_QWORD *)(v91 + 48) = v116;
                sub_1C1AB78((PartyOrganizationUtility_o *)(v91 + 48), v116, v110, v111, v112, v113, v114, v115);
                if ( !*v53 )
                  goto LABEL_123;
                partyServantListViewManager = (int64_t)(*v53)->fields.userServantEntity;
                if ( !partyServantListViewManager )
                  goto LABEL_123;
                v117 = UserServantEntity__getRarity((UserServantEntity_o *)partyServantListViewManager, 0LL);
                partyServantListViewManager = (int64_t)Rarity__getRarityType(v117, 0LL);
                v124 = partyServantListViewManager;
                if ( !partyServantListViewManager
                  || (partyServantListViewManager = sub_1C1AD10(
                                                      partyServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v91 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v91 + 24) <= 3u )
                    goto LABEL_124;
                  *(_QWORD *)(v91 + 56) = v124;
                  sub_1C1AB78((PartyOrganizationUtility_o *)(v91 + 56), v124, v118, v119, v120, v121, v122, v123);
                  if ( !*v53 )
                    goto LABEL_123;
                  partyServantListViewManager = (int64_t)(*v53)->fields.servantEntity;
                  if ( !partyServantListViewManager )
                    goto LABEL_123;
                  partyServantListViewManager = (int64_t)ServantEntity__getClassName(
                                                           (ServantEntity_o *)partyServantListViewManager,
                                                           0LL);
                  v131 = partyServantListViewManager;
                  if ( !partyServantListViewManager
                    || (partyServantListViewManager = sub_1C1AD10(
                                                        partyServantListViewManager,
                                                        *(_QWORD *)(*(_QWORD *)v91 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v91 + 24) <= 4u )
                      goto LABEL_124;
                    *(_QWORD *)(v91 + 64) = v131;
                    sub_1C1AB78((PartyOrganizationUtility_o *)(v91 + 64), v131, v125, v126, v127, v128, v129, v130);
                    partyServantListViewManager = (int64_t)*v53;
                    if ( !*v53 )
                      goto LABEL_123;
                    partyServantListViewManager = PartyServantListViewItem__get_SvtId(
                                                    (PartyServantListViewItem_o *)partyServantListViewManager,
                                                    0LL);
                    if ( !*v53 )
                      goto LABEL_123;
                    v132 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v53)->fields.userServantEntity;
                    if ( !v132 )
                      goto LABEL_123;
                    v133 = partyServantListViewManager;
                    v134 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v132[6], 0LL);
                    partyServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                             (ServantLimitImageMaster_o *)Master_object,
                                                             v133,
                                                             v134,
                                                             1,
                                                             0LL);
                    v141 = partyServantListViewManager;
                    if ( !partyServantListViewManager
                      || (partyServantListViewManager = sub_1C1AD10(
                                                          partyServantListViewManager,
                                                          *(_QWORD *)(*(_QWORD *)v91 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v91 + 24) > 5u )
                      {
                        *(_QWORD *)(v91 + 72) = v141;
                        sub_1C1AB78((PartyOrganizationUtility_o *)(v91 + 72), v141, v135, v136, v137, v138, v139, v140);
                        v142 = System_String__Format_63054876(v90, (System_Object_array *)v91, 0LL);
                        v143 = LocalizationManager__Get((System_String_o *)StringLiteral_12102/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v144 = LocalizationManager__Get((System_String_o *)StringLiteral_12101/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        v145 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v146 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C1AE20(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v146,
                          (Il2CppObject *)v31,
                          Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__,
                          0LL);
                        partyServantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        if ( v145 )
                        {
                          CommonUI__OpenConfirmDialog_31098796(
                            (CommonUI_o *)v145,
                            v89,
                            v142,
                            v143,
                            v144,
                            v146,
                            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                            0,
                            0,
                            0LL);
                          return;
                        }
LABEL_123:
                        sub_1C1AE30(partyServantListViewManager, v33);
                      }
LABEL_124:
                      sub_1C1AE38(partyServantListViewManager, v33);
                    }
                  }
                }
              }
            }
          }
          v147 = sub_1C1AE54();
          sub_1C1ACFC(v147, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v74, 2, 0, 0LL);
        this->fields.state = 2;
        v58 = this->fields.partyServantListViewManager;
LABEL_45:
        v59 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C1AE20(PartyServantListViewManager_CallbackFunc_TypeInfo);
        v61 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
        break;
      default:
        return;
    }
LABEL_68:
    v82 = v59;
    PartyServantListViewManager_CallbackFunc___ctor(v59, (Il2CppObject *)this, v61, v60);
    if ( v58 )
    {
      PartyServantListViewManager__SetMode(v58, 2, v82, 0LL);
      return;
    }
    goto LABEL_123;
  }
  v62 = Method_PartyServantSelectMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
    v62 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OnSelectItem__);
  v63 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v62, v62[4]);
  OverwriteAssetSoundName__PlaySystemSe(v63, 1, 0, 0LL);
  v65 = -1;
  this->fields.state = 3;
  v66 = this;
  v67 = 0;
LABEL_32:
  PartyServantSelectMenu__Callback(v66, v67, v65, v64);
}


// local variable allocation has failed, the output may be wrong!
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct TitleInfoControl_o *titleInfo; // x8
  PartyServantSelectMenu_o *v37; // x26
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v45; // x3
  System_Int32_array *waveBattleEnemyClassIds; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v48; // x20

  v18 = this;
  if ( (byte_4BC3A87 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, baseDeckItemList);
    this = (PartyServantSelectMenu_o *)sub_1C1ABD4(&Method_PartyServantSelectMenu_EndOpen__, v19);
    byte_4BC3A87 = 1;
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
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v18->fields.callbackFunc,
        (int64_t)callback,
        (int64_t)partyItem,
        num,
        *(System_String_o **)&tutorialMode,
        (BattleSetupInfo_o *)setupInfo,
        (FollowerInfo_o *)questRestrictionInfo,
        (PartyListViewItem_o *)callback);
      v18->fields.openCallbackFunc = openCallback;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v18->fields.openCallbackFunc,
        (int64_t)openCallback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 0, v28);
      PartyServantSelectMenu__EndOpen(v18, v29);
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
          v37 = this;
          v18->fields.tutorialMode = tutorialMode;
          v18->fields.isSelectedSvt = titleInfo != 0LL;
          v18->fields.callbackFunc = callback;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&v18->fields.callbackFunc,
            (int64_t)callback,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          v18->fields.openCallbackFunc = openCallback;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&v18->fields.openCallbackFunc,
            (int64_t)openCallback,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
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
                PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 1, v45);
                this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                if ( this )
                {
                  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 71, 0LL);
                  this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                  if ( this )
                  {
                    TitleInfoControl__setBackBtnSprite_38338644((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
                        0LL);
                      this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                      if ( this )
                      {
                        PartyServantListViewManager__SetMode_33261980((PartyServantListViewManager_o *)this, 1, 0LL);
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
                          HIDWORD(v37[1].fields.baseWindow),
                          waveBattleEnemyClassIds,
                          0LL);
                        this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                        if ( this )
                        {
                          scaleChangeTabSprite = v18->fields.scaleChangeTabSprite;
                          this = (PartyServantSelectMenu_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                               (PartyServantListViewManager_o *)this,
                                                               0LL);
                          if ( scaleChangeTabSprite )
                          {
                            UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
                            v18->fields.state = 1;
                            v48 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
                            System_Action___ctor(v48, (Il2CppObject *)v18, Method_PartyServantSelectMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)v18, v48, 0LL);
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
      sub_1C1AE30(this, baseDeckItemList);
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

  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_7;
  partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetPartyServantListViewItem(
                                                                   partyServantListViewManager,
                                                                   userServantId,
                                                                   0LL);
  if ( partyServantListViewManager )
  {
    v6 = this->fields.partyServantListViewManager;
    if ( v6 )
    {
      v6->fields._IsFocus_k__BackingField = 1;
      BYTE4(partyServantListViewManager->fields.normalSizeSeed) = 1;
      this->fields.canMoveCombine = 1;
      PartyServantSelectMenu__OpenServantDetail_33401016(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        v5);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_33261980(partyServantListViewManager, 4, 0LL);
        return;
      }
    }
LABEL_7:
    sub_1C1AE30(partyServantListViewManager, userServantId);
  }
}


void __fastcall PartyServantSelectMenu__OpenServantDetail_33401016(
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
  struct PartyServantListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v17; // q1
  int64_t v18; // x8
  struct System_Int64_array *equipIdList; // x8
  bool IsParty; // w0
  int32_t PartyListViewItemMenuKind_k__BackingField; // w24
  bool v22; // w23
  Il2CppObject *Instance; // x0
  UserServantEntity_o *v24; // x21
  CommonUI_o *v25; // x22
  System_Int64_array *v26; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  ServantStatusDialog_ResultDelegate_o *v28; // x24
  ServantStatusDialog_ResultDelegate_o *v29; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v30; // x24
  ServantStatusDialog_EndIndividualityDelegate_o *v31; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-60h]

  if ( (byte_4BC3A9C & 1) == 0 )
  {
    sub_1C1ABD4(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, partyServantListViewItem);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndShowServantWithQuest__, v8);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndShowServant__, v9);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OpenServantDetail__, v10);
    sub_1C1ABD4(&ServantStatusDialog_ResultDelegate_TypeInfo, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4BC3A9C = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_28;
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)partyServantListViewManager, 1, 0LL);
  if ( isPlaySe )
  {
    v14 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C1ABEC(Method_PartyServantSelectMenu_OpenServantDetail__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
  }
  this->fields.state = 5;
  if ( !partyServantListViewItem )
    goto LABEL_28;
  userServantEntity = partyServantListViewItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_28;
  v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v33;
  this->fields._SelectUserSvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                    &v32,
                                                    0LL);
  partyServantListViewManager = (struct PartyServantListViewManager_o *)PartyServantListViewItem__get_IsEquip(
                                                                          partyServantListViewItem,
                                                                          0LL);
  v18 = 0LL;
  if ( ((unsigned __int8)partyServantListViewManager & 1) != 0 )
  {
    equipIdList = partyServantListViewItem->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_28;
    if ( !equipIdList->max_length )
      sub_1C1AE38(partyServantListViewManager, partyServantListViewItem);
    v18 = equipIdList->m_Items[0];
  }
  this->fields._SelectServantEquipId_k__BackingField = v18;
  IsParty = PartyServantListViewItem__get_IsParty(partyServantListViewItem, 0LL);
  PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
  v22 = IsParty;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = partyServantListViewItem->fields.userServantEntity;
  v25 = (CommonUI_o *)Instance;
  if ( v22 )
  {
    v26 = partyServantListViewItem->fields.equipIdList;
    questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v28 = (ServantStatusDialog_ResultDelegate_o *)sub_1C1AE20(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v28,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( v25 )
      {
        CommonUI__OpenServantStatusDialog_31110336(
          v25,
          0,
          v24,
          v26,
          questRestrictionInfo,
          v28,
          this->fields.canMoveCombine,
          0LL);
        return;
      }
LABEL_28:
      sub_1C1AE30(partyServantListViewManager, partyServantListViewItem);
    }
    v30 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C1AE20(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    ServantStatusDialog_EndIndividualityDelegate___ctor(
      v30,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServant__,
      0LL);
    if ( !v25 )
      goto LABEL_28;
    CommonUI__OpenServantStatusDialog_31110064(
      v25,
      0,
      v24,
      v26,
      questRestrictionInfo,
      v30,
      this->fields.canMoveCombine,
      0LL);
  }
  else if ( PartyListViewItemMenuKind_k__BackingField == 8 )
  {
    v29 = (ServantStatusDialog_ResultDelegate_o *)sub_1C1AE20(ServantStatusDialog_ResultDelegate_TypeInfo);
    ServantStatusDialog_ResultDelegate___ctor(
      v29,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServantWithQuest__,
      0LL);
    if ( !v25 )
      goto LABEL_28;
    CommonUI__OpenServantStatusDialog_31109828(v25, 0, v24, v29, this->fields.canMoveCombine, 0LL);
  }
  else
  {
    v31 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C1AE20(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    ServantStatusDialog_EndIndividualityDelegate___ctor(
      v31,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServant__,
      0LL);
    if ( !v25 )
      goto LABEL_28;
    CommonUI__OpenServantStatusDialog_31109592(v25, 0, v24, v31, this->fields.canMoveCombine, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__Open_33393172(
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  UnityEngine_GameObject_o *v36; // x25
  const MethodInfo *v37; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v39; // x20

  if ( (byte_4BC3A88 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, partyItem);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndOpen__, v17);
    byte_4BC3A88 = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v19 = 1 << state;
    if ( (v19 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        *(int64_t *)&num,
        tutorialMode,
        (System_String_o *)setupInfo,
        (BattleSetupInfo_o *)questRestrictionInfo,
        (FollowerInfo_o *)callback,
        (PartyListViewItem_o *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
        (int64_t)openCallback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v26);
      PartyServantSelectMenu__EndOpen(this, v27);
    }
    else if ( (v19 & 0x11) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        *(int64_t *)&num,
        tutorialMode,
        (System_String_o *)setupInfo,
        (BattleSetupInfo_o *)questRestrictionInfo,
        (FollowerInfo_o *)callback,
        (PartyListViewItem_o *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
        (int64_t)openCallback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
      if ( !gameObject )
        goto LABEL_19;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
      if ( !v36 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(v36, (unsigned __int8)gameObject & 1, 0LL);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 1, v37);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 71, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setBackBtnSprite_38338644((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_33257088(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_33261980((PartyServantListViewManager_o *)gameObject, 1, 0LL),
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
                                                       0LL),
            !scaleChangeTabSprite) )
      {
LABEL_19:
        sub_1C1AE30(gameObject, v35);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v39 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v39, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v39, 0LL);
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

  if ( (byte_4BC3A9A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__, v9);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BC3A9A = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1C1AE30(limitCountSupport, v14);
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
  PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v43; // x21
  const MethodInfo *v44; // x3

  if ( (byte_4BC3A8C & 1) == 0 )
  {
    sub_1C1ABD4(&PartyServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnSelectItem__, v9);
    sub_1C1ABD4(&StringLiteral_17945/*"button_push_reg"*/, v10);
    sub_1C1ABD4(&StringLiteral_17946/*"button_push_unreg"*/, v11);
    sub_1C1ABD4(&StringLiteral_17931/*"button_allchoice_reg"*/, v12);
    sub_1C1ABD4(&StringLiteral_17934/*"button_alllock_unreg"*/, v13);
    sub_1C1ABD4(&StringLiteral_10525/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/, v14);
    sub_1C1ABD4(&StringLiteral_10528/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/, v15);
    sub_1C1ABD4(&StringLiteral_17947/*"button_select_reg"*/, v16);
    sub_1C1ABD4(&StringLiteral_10526/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/, v17);
    sub_1C1ABD4(&StringLiteral_10527/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/, v18);
    sub_1C1ABD4(&StringLiteral_17948/*"button_select_unreg"*/, v19);
    sub_1C1ABD4(&StringLiteral_17933/*"button_alllock_reg"*/, v20);
    sub_1C1ABD4(&StringLiteral_17932/*"button_allchoice_unreg"*/, v21);
    byte_4BC3A8C = 1;
  }
  v22 = !this->fields.isInitTab || isInit;
  if ( v22 || this->fields.modeKind != modeKind )
  {
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_58;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *, const MethodInfo *))statusTabButton->klass[1]._1.namespaze)(
      statusTabButton,
      1LL,
      statusTabButton->klass[1]._1.byval_arg.data,
      method);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
    if ( !statusTabButton )
      goto LABEL_58;
    v24 = &StringLiteral_17947/*"button_select_reg"*/;
    if ( modeKind )
      v24 = &StringLiteral_17948/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v24, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_58;
    v25 = !v22;
    v26 = !v22;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v26,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    v27 = this->fields.statusTabButton;
    if ( !v27 )
      goto LABEL_58;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(v27, enabled, v26, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_58;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
      statusTabButton,
      1LL,
      statusTabButton->klass[1]._1.byval_arg.data);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !statusTabButton )
      goto LABEL_58;
    v29 = &StringLiteral_17933/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v29 = &StringLiteral_17934/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v29, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_58;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v25,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_58;
    v31 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v31, v25, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_58;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
      statusTabButton,
      1LL,
      statusTabButton->klass[1]._1.byval_arg.data);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !statusTabButton )
      goto LABEL_58;
    v32 = &StringLiteral_17931/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v32 = &StringLiteral_17932/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v32, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_58;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v25,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_58;
    v34 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v34, v25, 0LL);
    pushTabButton = (UnityEngine_Object_o *)this->fields.pushTabButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushTabButton, 0LL, 0LL) )
    {
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_58;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
        statusTabButton,
        1LL,
        statusTabButton->klass[1]._1.byval_arg.data);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_58;
      UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0LL);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
      if ( !statusTabButton )
        goto LABEL_58;
      v36 = &StringLiteral_17945/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v36 = &StringLiteral_17946/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v36, 0LL);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_58;
      statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                     statusTabButton,
                                                     0LL,
                                                     v25,
                                                     statusTabButton->klass[1]._1.interfaceOffsets);
      v37 = this->fields.pushTabButton;
      if ( !v37 )
        goto LABEL_58;
      v38 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
      UICommonButton__SetColliderEnable(v37, v38, v25, 0LL);
    }
    switch ( modeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10528/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_50;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10526/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_50;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10525/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_50;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10527/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
LABEL_50:
        statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v40, 0LL);
        if ( !explanationLabel )
          goto LABEL_58;
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
  if ( state == 2 )
  {
    if ( statusTabButton )
    {
      PartyServantListViewManager__UpdateItemState((PartyServantListViewManager_o *)statusTabButton, modeKind, 0LL);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      v43 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C1AE20(PartyServantListViewManager_CallbackFunc_TypeInfo);
      PartyServantListViewManager_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
        v44);
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode(partyServantListViewManager, 2, v43, 0LL);
        return;
      }
    }
LABEL_58:
    sub_1C1AE30(statusTabButton, *(_QWORD *)&modeKind);
  }
  if ( !statusTabButton )
    goto LABEL_58;
  PartyServantListViewManager__SetMode_33261980((PartyServantListViewManager_o *)statusTabButton, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__StatusRequest(
        PartyServantSelectMenu_o *this,
        PartyServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t modeKind; // w8
  PartyServantListViewManager_o *partyServantListViewManager; // x0
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

  if ( (byte_4BC3A93 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_EndStatusSync__, v6);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4BC3A93 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v28 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapChoiceList(partyServantListViewManager, &choiceList, &v28, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v27,
                                                                       (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v18 = v28;
        v17 = choiceList;
        v20 = 1;
        v19 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C1AE30(partyServantListViewManager, callback);
    }
  }
  else if ( modeKind == 1 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapLockList(partyServantListViewManager, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v16,
                                                                       (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v18 = unlockList;
        v17 = lockList;
        v19 = 1;
        v20 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)partyServantListViewManager,
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

  if ( (byte_4BC3A85 & 1) == 0 )
  {
    sub_1C1ABD4(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4BC3A85 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1C1B0F0(v8);
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

  if ( (byte_4BC3A86 & 1) == 0 )
  {
    sub_1C1ABD4(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4BC3A86 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1C1B0F0(v8);
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
  sub_1C1AB78(
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
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A56E9C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A56E44;
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
  if ( (byte_4BC3A9E & 1) == 0 )
  {
    sub_1C1ABD4(&PartyServantSelectMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4BC3A9E = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12, item, callback, object);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v11, callback, object);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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
  sub_1C1AB78(
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
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A56EF8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A56EB0;
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
  if ( (byte_4BC3A9F & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, isRequest);
    byte_4BC3A9F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct PartyServantSelectMenu_o *_4__this; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x19
  PartyServantListViewManager_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3

  if ( (byte_4BC3AA0 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&PartyServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1C1ABD4(&Method_PartyServantSelectMenu_OnSelectItem__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__, v8);
    byte_4BC3AA0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_31099464(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1C1AE30(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  partyServantListViewManager = _4__this->fields.partyServantListViewManager;
  v21 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C1AE20(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v22);
  if ( !partyServantListViewManager )
    goto LABEL_12;
  PartyServantListViewManager__SetMode(partyServantListViewManager, 2, v21, 0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C1AE30(this, method);
  PartyServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}