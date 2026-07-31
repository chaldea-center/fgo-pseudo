void PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934221 & 1) == 0 )
  {
    sub_21FFC50(&BaseMenu_TypeInfo);
    byte_5934221 = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__Callback(
        PartyServantSelectMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct PartyServantSelectMenu_CallbackFunc_o *v10; // x22
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *Item; // x2

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, *(System_String_o **)&n, (System_String_o *)method, v4, v5, v6, v7);
    if ( n < 0 )
    {
      Item = 0;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_21FFECC(0, v14);
      Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, v15);
    }
    ((void (__fastcall *)(intptr_t, _QWORD, PartyServantListViewItem_o *, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      (unsigned int)result,
      Item,
      v10->fields.method);
  }
}


void PartyServantSelectMenu__ClearScrollValue(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0

  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_21FFECC(0, method);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0);
}


void PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_41416392(this, 0, v2);
}


void PartyServantSelectMenu__Close_41416392(
        PartyServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Action_c *v15; // x0
  System_Action_o *v16; // x20

  if ( (byte_593420F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_EndClose__);
    byte_593420F = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_21FFECC(0, v6);
  PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, 1, v7);
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = System_Action_TypeInfo;
  this->fields.state = 4;
  v16 = (System_Action_o *)sub_21FFEBC(v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0);
}


void PartyServantSelectMenu__EndCardFavoriteRequest(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v5; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_593421F & 1) == 0 )
  {
    sub_21FFC50(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnSelectItem__);
    byte_593421F = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v5 = this->fields.partyServantListViewManager,
        v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_21FFEBC(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v7),
        !v5) )
  {
    sub_21FFECC(partyServantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  PartyServantListViewManager__SetMode_41401300(v5, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__EndClickCancel(PartyServantSelectMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0) )
    {
      sub_21FFECC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__Callback(this, 0, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__EndClickDecide(PartyServantSelectMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0) )
    {
      sub_21FFECC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__Callback(this, 1, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__EndClickTabChoice(
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
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0) )
    {
      sub_21FFECC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 2, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__EndClickTabLock(PartyServantSelectMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0) )
    {
      sub_21FFECC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__EndClickTabPush(PartyServantSelectMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0) )
    {
      sub_21FFECC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 3, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__EndClickTabStatus(
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
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0) )
    {
      sub_21FFECC(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 0, 0, v3);
}


void PartyServantSelectMenu__EndClose(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  PartyServantSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void PartyServantSelectMenu__EndCloseShowServant(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  void *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v5; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_593421B & 1) == 0 )
  {
    sub_21FFC50(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_593421B = 1;
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
  v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_21FFEBC(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v7);
  if ( !v5
    || (v5->fields.callbackFunc = v6,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v5->fields.callbackFunc,
          (int32_t)v6,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        PartyServantListViewManager__SetMode_41401300(v5, 2, v14),
        (partyServantListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_8:
    sub_21FFECC(partyServantListViewManager, method);
  }
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)partyServantListViewManager + 24), 0) )
    PartyServantSelectMenu__Callback(this, 3, -1, v15);
}


void PartyServantSelectMenu__EndCloseShowServantQuestJump(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_593421C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593421C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialSelect; // w2
  const MethodInfo *v5; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_21FFECC(0, method);
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0);
  tutorialSelect = this->fields.tutorialSelect;
  this->fields.state = 3;
  PartyServantSelectMenu__Callback(this, 1, tutorialSelect, v5);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__EndOpen(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyServantListViewManager_o *tutorialMaskBase; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v18; // x21
  float v19; // s3 OVERLAPPED
  float v20; // s0 OVERLAPPED
  float v21; // s4
  int v22; // s1
  int v23; // s5
  int v24; // s6
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v27; // x21
  const MethodInfo *v28; // x3
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  const MethodInfo *v35; // x2
  MissionNaviTransitionBoardItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v37; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_593420D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593420D = 1;
  }
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v27 = (PartyServantListViewManager_CallbackFunc_o *)sub_21FFEBC(PartyServantListViewManager_CallbackFunc_TypeInfo);
    PartyServantListViewManager_CallbackFunc___ctor(
      v27,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      v28);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v27;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&partyServantListViewManager->fields.callbackFunc,
        (int32_t)v27,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, 2, v35);
      goto LABEL_16;
    }
LABEL_19:
    sub_21FFECC(tutorialMaskBase, v5);
  }
  v4 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v4, 0, v2);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_19;
  PartyServantListViewManager__SetMode_41401300(tutorialMaskBase, 1, v6);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_16;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0);
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v14, v15);
  IsUnderVista = FSUtility__IsUnderVista(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0);
  if ( !Instance )
    goto LABEL_19;
  v19 = -450.0;
  v20 = -367.0;
  v21 = -30.0;
  if ( IsUnderVista )
    v20 = -375.0;
  else
    v19 = -442.0;
  v22 = 1120403456;
  v23 = 1125515264;
  v24 = 1127481344;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v20,
    0.0,
    *(UnityEngine_Rect_o *)&v19,
    v18,
    0);
LABEL_16:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc;
  v37 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0;
    sub_21FFBF4(p_openCallbackFunc, 0, v8, v9, v10, v11, v12, v13);
    ((void (__fastcall *)(intptr_t, intptr_t))v37->fields.invoke_impl)(v37->fields.method_code, v37->fields.method);
  }
}


void PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  PartyServantListViewManager_CallbackFunc_c *v4; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_593420E & 1) == 0 )
  {
    sub_21FFC50(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnSelectItem__);
    byte_593420E = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(statusTabButton, 1, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(statusTabButton, 1, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
    statusTabButton,
    0,
    0,
    statusTabButton->klass[1]._1.implementedInterfaces);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
    statusTabButton,
    1,
    statusTabButton->klass[1]._1.namespaze);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(statusTabButton, 1, 0);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton
    || (((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
          statusTabButton,
          0,
          0,
          statusTabButton->klass[1]._1.implementedInterfaces),
        v4 = PartyServantListViewManager_CallbackFunc_TypeInfo,
        partyServantListViewManager = this->fields.partyServantListViewManager,
        this->fields.state = 7,
        v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_21FFEBC(v4),
        PartyServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v7),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_21FFECC(statusTabButton, method);
  }
  partyServantListViewManager->fields.callbackFunc = v6;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, 5, v14);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__EndShowServant(
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

  if ( (byte_5934219 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_EndCloseShowServant__);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5934219 = 1;
  }
  if ( isDecide )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_22;
    PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, (const MethodInfo *)isNeedSort);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( isNeedSort )
    {
      if ( !partyServantListViewManager )
        goto LABEL_22;
      v9 = 4;
LABEL_19:
      PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, v9, v8);
      goto LABEL_20;
    }
LABEL_17:
    if ( !partyServantListViewManager )
      goto LABEL_22;
    v9 = 3;
    goto LABEL_19;
  }
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, isDecide, isNeedSort);
  if ( !byte_5934082 )
  {
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_5934082 = 1;
  }
  v10 = RandomLimitCountManager_TypeInfo;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, isDecide, isNeedSort);
    v10 = RandomLimitCountManager_TypeInfo;
  }
  if ( v10->static_fields->enableRandomLimitCount )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_22;
    PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, (const MethodInfo *)isNeedSort);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    goto LABEL_17;
  }
LABEL_20:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServant__, 0);
  if ( !Instance )
LABEL_22:
    sub_21FFECC(partyServantListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__EndShowServantWithQuest(
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

  if ( (byte_593421A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593421A = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0);
    if ( !Instance )
      sub_21FFECC(v11, v12);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0);
  }
  PartyServantSelectMenu__EndShowServant(this, isDecide, isNeedSort, *(const MethodInfo **)&questId);
}


void PartyServantSelectMenu__EndStatusSync(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyServantSelectMenu_RequestCallbackFunc_o *requedstCallback; // x19

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    this->fields.requedstCallback = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requedstCallback->fields.invoke_impl)(
      requedstCallback->fields.method_code,
      1,
      requedstCallback->fields.method);
  }
}


int32_t PartyServantSelectMenu__GetModeKind(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


void PartyServantSelectMenu__Init(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  PartyServantListViewManager_o *partyServantListViewManager; // x0

  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_21FFECC(0, method);
  PartyServantListViewManager__DestroyList(partyServantListViewManager, method);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void PartyServantSelectMenu__OnClickCancel(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_5934212 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyServantSelectMenu_EndClickCancel__);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnClickCancel__);
    sub_21FFC50(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_5934212 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_21FFECC(0, method);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0);
    }
    this->fields.state = 3;
    v4 = Method_PartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_21FFEBC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickCancel__,
      v7);
    PartyServantSelectMenu__StatusRequest(this, v6, v8);
  }
}


void PartyServantSelectMenu__OnClickDecide(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_5934211 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyServantSelectMenu_EndClickDecide__);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnClickDecide__);
    sub_21FFC50(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_5934211 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyServantSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_21FFEBC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickDecide__,
      v6);
    PartyServantSelectMenu__StatusRequest(this, v5, v7);
  }
}


void PartyServantSelectMenu__OnClickScaleChange(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_593421D & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyServantSelectMenu_OnClickScaleChange__);
    byte_593421D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ChangeIconScale(partyServantListViewManager, v5),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                                           partyServantListViewManager,
                                                                           v5),
          !scaleChangeTabSprite) )
    {
      sub_21FFECC(partyServantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)partyServantListViewManager, 0);
  }
}


void PartyServantSelectMenu__OnClickTabChoice(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_5934215 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyServantSelectMenu_EndClickTabChoice__);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnClickTabChoice__);
    sub_21FFC50(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_5934215 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_21FFEBC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          v8);
        PartyServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_21FFEBC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabChoice__,
        v11);
      PartyServantSelectMenu__StatusRequest(this, v10, v12);
    }
    PartyServantSelectMenu__SetTabKind(this, 2, 0, v5);
  }
}


void PartyServantSelectMenu__OnClickTabLock(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_5934214 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyServantSelectMenu_EndClickTabLock__);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnClickTabLock__);
    sub_21FFC50(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_5934214 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_21FFEBC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          v8);
        PartyServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_21FFEBC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabLock__,
        v11);
      PartyServantSelectMenu__StatusRequest(this, v10, v12);
    }
    PartyServantSelectMenu__SetTabKind(this, 1, 0, v5);
  }
}


void PartyServantSelectMenu__OnClickTabPush(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_5934216 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyServantSelectMenu_EndClickTabPush__);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnClickTabPush__);
    sub_21FFC50(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_5934216 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_PartyServantSelectMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_21FFEBC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabPush__,
      v6);
    PartyServantSelectMenu__StatusRequest(this, v5, v7);
  }
}


void PartyServantSelectMenu__OnClickTabStatus(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_5934213 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyServantSelectMenu_EndClickTabStatus__);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnClickTabStatus__);
    sub_21FFC50(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_5934213 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_21FFEBC(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabStatus__,
      v6);
    PartyServantSelectMenu__StatusRequest(this, v5, v7);
  }
}


void PartyServantSelectMenu__OnSelectItem(
        PartyServantSelectMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 partyServantListViewManager; // x0
  PartyServantListViewItem_o *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  MethodInfo *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t state; // w8
  PartyServantListViewItem_o *Item; // x1
  int32_t tutorialMode; // w8
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v28; // x21
  PartyServantListViewItem_o **v29; // x21
  const MethodInfo *v30; // x4
  int32_t v31; // w8
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  unsigned int modeKind; // w8
  struct PartyServantListViewManager_o *v35; // x20
  PartyServantListViewManager_CallbackFunc_o *v36; // x0
  const MethodInfo *v37; // x3
  void *v38; // x2
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  const MethodInfo *v41; // x3
  PartyServantSelectMenu_o *v42; // x0
  int32_t v43; // w1
  int32_t v44; // w2
  _BOOL4 isEnabled; // w23
  System_Reflection_MethodBase_o *v46; // x0
  const MethodInfo *v47; // x2
  int64_t v48; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v50; // q1
  PartyServantListViewItem_o *v51; // x8
  System_Reflection_MethodBase_o *v52; // x0
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  struct PartyServantListViewManager_CallbackFunc_o *v57; // x21
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  const MethodInfo *v64; // x2
  __int64 v65; // x25
  __int64 v66; // x1
  __int64 v67; // x2
  ServantEntity_o *ServantEntity; // x26
  PartyServantListViewManager_o *v69; // x19
  __int128 v70; // q1
  int v71; // w8
  const MethodInfo *v72; // x2
  __int64 v73; // x2
  int32_t v74; // w28
  int32_t rarityId; // w27
  __int64 v76; // x1
  __int64 v77; // x2
  Il2CppObject *Master_object; // x22
  System_String_o *v79; // x19
  System_String_o *v80; // x23
  __int64 v81; // x1
  __int64 v82; // x2
  System_Object_array *v83; // x24
  __int64 v84; // x28
  System_String_o *ClassName; // x28
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x26
  __int64 v89; // x28
  int32_t v90; // w0
  __int64 v91; // x8
  int32_t v92; // w25
  System_String_o *LimitCountSealedServantName; // x25
  System_String_o *RarityType; // x25
  System_String_o *v95; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v96; // x8
  int32_t v97; // w21
  int32_t v98; // w0
  System_String_o *v99; // x21
  System_String_o *v100; // x21
  System_String_o *v101; // x22
  System_String_o *v102; // x23
  Il2CppObject *v103; // x24
  CommonConfirmDialog_ClickDelegate_o *v104; // x25
  __int64 v105; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+80h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  if ( (byte_5934218 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__0__);
    sub_21FFC50(&PartyServantSelectMenu___c__DisplayClass69_0_TypeInfo);
    sub_21FFC50(&StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_5934218 = 1;
  }
  v7 = sub_21FFEBC(PartyServantSelectMenu___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_103;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  state = this->fields.state;
  if ( state == 7 )
  {
    tutorialMode = this->fields.tutorialMode;
    this->fields.tutorialSelect = n;
    if ( tutorialMode == 2 )
    {
      this->fields.state = 8;
      v25 = Method_PartyServantSelectMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v25 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnSelectItem__);
      v26 = (System_Reflection_MethodBase_o *)sub_21FFC34(v25, v25[4]);
      OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0);
      if ( Instance )
      {
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v28, 0);
        return;
      }
      goto LABEL_103;
    }
    return;
  }
  if ( state != 2 )
    return;
  if ( n < 0 )
  {
    Item = 0;
  }
  else
  {
    partyServantListViewManager = (__int64)this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_103;
    Item = PartyServantListViewManager__GetItem((PartyServantListViewManager_o *)partyServantListViewManager, n, v16);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v29 = (PartyServantListViewItem_o **)(v7 + 24);
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v7 + 24),
    (int32_t)Item,
    (System_String_o *)v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind < 3 )
      {
        v35 = this->fields.partyServantListViewManager;
        this->fields.state = 2;
        v36 = (PartyServantListViewManager_CallbackFunc_o *)sub_21FFEBC(PartyServantListViewManager_CallbackFunc_TypeInfo);
        v38 = Method_PartyServantSelectMenu_OnSelectItem__;
        goto LABEL_65;
      }
      return;
    }
    v9 = *v29;
    if ( !*v29 )
      goto LABEL_103;
    if ( v9->fields.userServantEntity )
    {
      PartyServantSelectMenu__OpenServantDetail_41422340(this, v9, 1, 0, v30);
      return;
    }
    goto LABEL_62;
  }
  if ( kind != 2 )
  {
    v39 = Method_PartyServantSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v39 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnSelectItem__);
    v40 = (System_Reflection_MethodBase_o *)sub_21FFC34(v39, v39[4]);
    OverwriteAssetSoundName__PlaySystemSe(v40, 1, 0, 0);
    v42 = this;
    v43 = 0;
    v44 = -1;
    goto LABEL_30;
  }
  v31 = this->fields.modeKind;
  if ( v31 <= 1 )
  {
    if ( v31 )
    {
      if ( v31 == 1 )
      {
        v32 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v32 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnSelectItem__);
        v33 = (System_Reflection_MethodBase_o *)sub_21FFC34(v32, v32[4]);
        OverwriteAssetSoundName__PlaySystemSe(v33, 11, 0, 0);
        partyServantListViewManager = (__int64)*v29;
        if ( !*v29 )
          goto LABEL_103;
        PartyServantListViewItem__SwapLock((PartyServantListViewItem_o *)partyServantListViewManager, 0);
LABEL_58:
        v35 = this->fields.partyServantListViewManager;
        this->fields.state = 2;
LABEL_59:
        v36 = (PartyServantListViewManager_CallbackFunc_o *)sub_21FFEBC(PartyServantListViewManager_CallbackFunc_TypeInfo);
        v38 = Method_PartyServantSelectMenu_OnSelectItem__;
        goto LABEL_65;
      }
      return;
    }
    partyServantListViewManager = (__int64)*v29;
    if ( !*v29 )
      goto LABEL_103;
    if ( (*(_BYTE *)(partyServantListViewManager + 200) || !*(_BYTE *)(partyServantListViewManager + 233))
      && !*(_BYTE *)(partyServantListViewManager + 210)
      && !*(_BYTE *)(partyServantListViewManager + 211) )
    {
      partyServantListViewManager = PartyServantListViewItem__get_IsRestricted(
                                      (PartyServantListViewItem_o *)partyServantListViewManager,
                                      0);
      if ( (partyServantListViewManager & 1) == 0 )
      {
        v51 = *v29;
        if ( !*v29 )
          goto LABEL_103;
        if ( v51->fields.isBase
          || !v51->fields.isLeave
          && v51->fields.fatigureTime < 0
          && !v51->fields._IsAllOutBattle_k__BackingField
          && !v51->fields._IsDataLost_k__BackingField
          && v51->fields._TimesToRestart_k__BackingField <= 0
          && !v51->fields._IsClearedWave_k__BackingField )
        {
          v52 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_PartyServantSelectMenu_OnSelectItem__);
          OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0, 0);
          v42 = this;
          v43 = 1;
          v44 = n;
LABEL_30:
          this->fields.state = 3;
          PartyServantSelectMenu__Callback(v42, v43, v44, v41);
          return;
        }
      }
    }
LABEL_62:
    v55 = Method_PartyServantSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v55 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnSelectItem__);
    v56 = (System_Reflection_MethodBase_o *)sub_21FFC34(v55, v55[4]);
    OverwriteAssetSoundName__PlaySystemSe(v56, 2, 0, 0);
    v35 = this->fields.partyServantListViewManager;
    v36 = (PartyServantListViewManager_CallbackFunc_o *)sub_21FFEBC(PartyServantListViewManager_CallbackFunc_TypeInfo);
    v38 = Method_PartyServantSelectMenu_OnSelectItem__;
LABEL_65:
    v57 = v36;
    PartyServantListViewManager_CallbackFunc___ctor(v36, (Il2CppObject *)this, (intptr_t)v38, v37);
    if ( v35 )
    {
      v35->fields.callbackFunc = v57;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v35->fields.callbackFunc,
        (int32_t)v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      PartyServantListViewManager__SetMode_41401300(v35, 2, v64);
      return;
    }
    goto LABEL_103;
  }
  if ( v31 == 2 )
  {
    v53 = Method_PartyServantSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v53 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OnSelectItem__);
    v54 = (System_Reflection_MethodBase_o *)sub_21FFC34(v53, v53[4]);
    OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0, 0);
    partyServantListViewManager = (__int64)*v29;
    if ( !*v29 )
      goto LABEL_103;
    PartyServantListViewItem__SwapChoice((PartyServantListViewItem_o *)partyServantListViewManager, 0);
    goto LABEL_58;
  }
  if ( v31 == 3 )
  {
    if ( !*v29 )
      goto LABEL_103;
    isEnabled = (*v29)->fields.isEnabled;
    v46 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_PartyServantSelectMenu_OnSelectItem__);
    if ( !isEnabled )
    {
      OverwriteAssetSoundName__PlaySystemSe(v46, 2, 0, 0);
      v35 = this->fields.partyServantListViewManager;
      this->fields.state = 2;
      goto LABEL_59;
    }
    OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0, 0);
    partyServantListViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( !partyServantListViewManager )
      goto LABEL_103;
    v48 = *(_QWORD *)(partyServantListViewManager + 128);
    if ( !v48 )
      goto LABEL_42;
    if ( !*v29 )
      goto LABEL_103;
    userServantEntity = (*v29)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_103;
    v50 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v108.fields.fakeValue = v50;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v47);
    v107 = v108;
    if ( v48 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v107, 0) )
    {
LABEL_42:
      PartyServantSelectMenu__PushRequest(this, *v29, v47);
      return;
    }
    partyServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !partyServantListViewManager )
      goto LABEL_103;
    partyServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)partyServantListViewManager,
                                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !partyServantListViewManager )
      goto LABEL_103;
    partyServantListViewManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager,
                                             v48,
                                             (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !partyServantListViewManager )
      goto LABEL_103;
    v65 = partyServantListViewManager;
    ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)partyServantListViewManager, -1, 0);
    v69 = this->fields.partyServantListViewManager;
    v70 = *(_OWORD *)(v65 + 32);
    v71 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)(v65 + 16);
    *(_OWORD *)&v108.fields.fakeValue = v70;
    if ( !v71 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v66, v67);
    v106 = v108;
    partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v106, 0);
    if ( !v69 )
      goto LABEL_103;
    partyServantListViewManager = (__int64)PartyServantListViewManager__GetItemByUserServantID(
                                             v69,
                                             partyServantListViewManager,
                                             v72);
    if ( !partyServantListViewManager || !*v29 )
      goto LABEL_103;
    v74 = *(_DWORD *)(partyServantListViewManager + 156);
    rarityId = (*v29)->fields.rarityId;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v73);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76, v77);
    v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v83 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 6);
    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v81, v82);
    partyServantListViewManager = (__int64)Rarity__getRarityType(v74, 0);
    if ( !v83 )
      goto LABEL_103;
    v84 = partyServantListViewManager;
    sub_1FEB8A8(v83, partyServantListViewManager);
    partyServantListViewManager = sub_1FEB274(v83, 0, v84);
    if ( !ServantEntity )
      goto LABEL_103;
    ClassName = ServantEntity__getClassName(ServantEntity, 0);
    sub_1FEB8A8(v83, ClassName);
    sub_1FEB274(v83, 1, ClassName);
    v89 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v88 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v86, v87);
    *(_QWORD *)&v109.fields.currentCryptoKey = v89;
    *(_QWORD *)&v109.fields.fakeValue = v88;
    v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v109, 0);
    v91 = *(_QWORD *)(v65 + 96);
    *(_QWORD *)&v110.fields.fakeValue = *(_QWORD *)(v65 + 104);
    v92 = v90;
    *(_QWORD *)&v110.fields.currentCryptoKey = v91;
    partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v110, 0);
    if ( !Master_object )
      goto LABEL_103;
    LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                    (ServantLimitImageMaster_o *)Master_object,
                                    v92,
                                    partyServantListViewManager,
                                    1,
                                    1,
                                    0);
    sub_1FEB8A8(v83, LimitCountSealedServantName);
    sub_1FEB274(v83, 2, LimitCountSealedServantName);
    RarityType = Rarity__getRarityType(rarityId, 0);
    sub_1FEB8A8(v83, RarityType);
    partyServantListViewManager = sub_1FEB274(v83, 3, RarityType);
    if ( !*v29 )
      goto LABEL_103;
    partyServantListViewManager = (__int64)(*v29)->fields._ServantEntity_k__BackingField;
    if ( !partyServantListViewManager )
      goto LABEL_103;
    v95 = ServantEntity__getClassName((ServantEntity_o *)partyServantListViewManager, 0);
    sub_1FEB8A8(v83, v95);
    sub_1FEB274(v83, 4, v95);
    partyServantListViewManager = (__int64)*v29;
    if ( !*v29 )
      goto LABEL_103;
    partyServantListViewManager = PartyServantListViewItem__get_ServantId(
                                    (PartyServantListViewItem_o *)partyServantListViewManager,
                                    0);
    if ( !*v29 )
      goto LABEL_103;
    v96 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v29)->fields.userServantEntity;
    if ( !v96 )
      goto LABEL_103;
    v97 = partyServantListViewManager;
    v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v96[6], 0);
    v99 = ServantLimitImageMaster__GetLimitCountSealedServantName(
            (ServantLimitImageMaster_o *)Master_object,
            v97,
            v98,
            1,
            1,
            0);
    sub_1FEB8A8(v83, v99);
    sub_1FEB274(v83, 5, v99);
    v100 = System_String__Format_75484712(v80, v83, 0);
    v101 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
    v102 = LocalizationManager__Get((System_String_o *)StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
    v103 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v104 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v104,
      (Il2CppObject *)v7,
      Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__0__,
      0);
    partyServantListViewManager = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v105);
    if ( !v103 )
LABEL_103:
      sub_21FFECC(partyServantListViewManager, v9);
    CommonUI__OpenConfirmDialog_37292168(
      (CommonUI_o *)v103,
      v79,
      v100,
      v101,
      v102,
      v104,
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


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__Open(
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1
  PartyOrganizationListViewItem_o *Member; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct PartyOrganizationListViewItem_o *v42; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  UnityEngine_GameObject_o *gameObject; // x26
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x7
  const MethodInfo *v53; // x2
  FollowerQuestInfomationDraw_o *questInfomationDraw; // x22
  struct PartyOrganizationListViewItem_o *v55; // x8
  int32_t InitPos_k__BackingField; // w23
  PartyServantSelectMenu_o *v57; // x3
  FollowerQuestInfomationDraw_o *v58; // x0
  QuestRestrictionInfo_o *v59; // x1
  int32_t v60; // w2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v62; // x20

  v18 = this;
  if ( (byte_593420B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (PartyServantSelectMenu_o *)sub_21FFC50(&Method_PartyServantSelectMenu_EndOpen__);
    byte_593420B = 1;
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
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v18->fields.callbackFunc,
        (int32_t)callback,
        (System_String_o *)partyItem,
        *(System_String_o **)&num,
        tutorialMode,
        (int32_t)setupInfo,
        (bool)questRestrictionInfo,
        (bool)callback);
      v18->fields.openCallbackFunc = openCallback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v18->fields.openCallbackFunc,
        (int32_t)openCallback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 0, v27);
      PartyServantSelectMenu__EndOpen(v18, v28);
      return;
    }
    if ( (v20 & 0x11) != 0 )
    {
      if ( partyItem )
      {
        Member = PartyListViewItem__GetMember(partyItem, num, 0);
        v18->fields.member = Member;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v18->fields.member,
          (int32_t)Member,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        v42 = v18->fields.member;
        if ( v42 )
        {
          userServantEntity = v42->fields.userServantEntity;
          v18->fields.tutorialMode = tutorialMode;
          v18->fields.callbackFunc = callback;
          v18->fields.isSelectedSvt = userServantEntity != 0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v18->fields.callbackFunc,
            (int32_t)callback,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          v18->fields.openCallbackFunc = openCallback;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v18->fields.openCallbackFunc,
            (int32_t)openCallback,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          this = (PartyServantSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (PartyServantSelectMenu_o *)v18->fields.bgTxtSprite;
            if ( this )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              this = (PartyServantSelectMenu_o *)BgTxtManager__IsActiveBgTxt(0);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0);
                PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 1, v51);
                this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                if ( this )
                {
                  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0, 1, 0, 74, 0);
                  this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                  if ( this )
                  {
                    TitleInfoControl__setBackBtnSprite_46820572((TitleInfoControl_o *)this, 1, 0, 0, 0);
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
                        v52);
                      this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                      if ( this )
                      {
                        PartyServantListViewManager__SetMode_41401300((PartyServantListViewManager_o *)this, 1, v53);
                        questInfomationDraw = v18->fields.questInfomationDraw;
                        v55 = v18->fields.member;
                        if ( partyItem->fields.menuKind == 9 )
                        {
                          if ( !v55 )
                            goto LABEL_27;
                          InitPos_k__BackingField = v55->fields._InitPos_k__BackingField;
                          this = (PartyServantSelectMenu_o *)PartyListViewItem__GetWaveBattleEnemyClassIds(
                                                               partyItem,
                                                               1,
                                                               0);
                          if ( !questInfomationDraw )
                            goto LABEL_27;
                          v57 = this;
                          v58 = questInfomationDraw;
                          v59 = questRestrictionInfo;
                          v60 = InitPos_k__BackingField;
                        }
                        else
                        {
                          if ( !v55 || !questInfomationDraw )
                            goto LABEL_27;
                          v60 = v55->fields._InitPos_k__BackingField;
                          v58 = v18->fields.questInfomationDraw;
                          v59 = questRestrictionInfo;
                          v57 = 0;
                        }
                        FollowerQuestInfomationDraw__SetInfomation(v58, v59, v60, (System_Int32_array *)v57, 0);
                        this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                        if ( this )
                        {
                          scaleChangeTabSprite = v18->fields.scaleChangeTabSprite;
                          this = (PartyServantSelectMenu_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                               (PartyServantListViewManager_o *)this,
                                                               (const MethodInfo *)baseDeckItemList);
                          if ( scaleChangeTabSprite )
                          {
                            UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0);
                            v18->fields.state = 1;
                            v62 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                            System_Action___ctor(v62, (Il2CppObject *)v18, Method_PartyServantSelectMenu_EndOpen__, 0);
                            BaseMenu__Open((BaseMenu_o *)v18, v62, 0);
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
LABEL_27:
      sub_21FFECC(this, baseDeckItemList);
    }
  }
}


void PartyServantSelectMenu__OpenServantDetail(
        PartyServantSelectMenu_o *this,
        int64_t userServantId,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v7; // x4
  struct PartyServantListViewManager_o *v8; // x8
  const MethodInfo *v9; // x2

  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_7;
  partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetPartyServantListViewItem(
                                                                   partyServantListViewManager,
                                                                   userServantId,
                                                                   (const MethodInfo *)openCallback);
  if ( partyServantListViewManager )
  {
    v8 = this->fields.partyServantListViewManager;
    if ( v8 )
    {
      BYTE4(partyServantListViewManager->fields.bonusFilterKindLabel) = 1;
      v8->fields._IsFocus_k__BackingField = 1;
      this->fields.canMoveCombine = 1;
      PartyServantSelectMenu__OpenServantDetail_41422340(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        openCallback,
        v7);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, 4, v9);
        return;
      }
    }
LABEL_7:
    sub_21FFECC(partyServantListViewManager, userServantId);
  }
}


void PartyServantSelectMenu__OpenServantDetail_41422340(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *partyServantListViewItem,
        bool isPlaySe,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v14; // q1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Int64_array *equipIdList; // x1
  BalanceConfig_c *v22; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t PartyListViewItemMenuKind_k__BackingField; // w22
  Il2CppObject *Instance; // x0
  UserServantEntity_o *v26; // x21
  bool v27; // zf
  CommonUI_o *v28; // x22
  ServantStatusDialog_ResultDelegate_o *v29; // x23
  ServantStatusDialog_EndIndividualityDelegate_o *v30; // x23
  Il2CppObject *v31; // x25
  UserServantEntity_o *v32; // x23
  System_Int64_array *v33; // x24
  ServantStatusDialog_ResultDelegate_o *v34; // x26
  struct PartyOrganizationListViewItem_o *member; // x8
  bool IsParty; // w0
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  bool v38; // w24
  bool isChangeFriendShipSkill; // w28
  System_Int64_array *v40; // x23
  int32_t BaseServantId; // w25
  __int64 v42; // x2
  struct PartyOrganizationListViewItem_o *v43; // x8
  Il2CppObject *Master_object; // x25
  __int64 v45; // x2
  struct UserServantEntity_o *v46; // x8
  UserServantGrandEntity_o *v47; // x25
  __int128 v48; // q0
  __int128 v49; // q1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x24
  int v51; // w8
  Il2CppObject *v52; // x26
  UserServantEntity_o *v53; // x25
  ServantStatusDialog_EndIndividualityDelegate_o *v54; // x27
  _BOOL4 isRestrictionActiveGrandBoard; // w27
  Il2CppObject *v56; // x26
  System_Int64_array *v57; // x23
  UserServantEntity_o *v58; // x24
  ServantStatusDialog_EndIndividualityDelegate_o *v59; // x25
  _BOOL4 canMoveCombine; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+70h] [xbp-80h]

  if ( (byte_5934220 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_EndShowServantWithQuest__);
    sub_21FFC50(&Method_PartyServantSelectMenu_EndShowServant__);
    sub_21FFC50(&Method_PartyServantSelectMenu_OpenServantDetail__);
    sub_21FFC50(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5934220 = 1;
  }
  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_63;
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0);
  if ( isPlaySe )
  {
    v11 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_21FFC68(Method_PartyServantSelectMenu_OpenServantDetail__);
    v12 = (System_Reflection_MethodBase_o *)sub_21FFC34(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
  }
  this->fields.state = 5;
  if ( !partyServantListViewItem )
    goto LABEL_63;
  userServantEntity = partyServantListViewItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_63;
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v14;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
      partyServantListViewItem,
      v10);
  v62 = v63;
  this->fields._SelectUserSvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                    &v62,
                                                    0);
  equipIdList = partyServantListViewItem->fields.equipIdList;
  if ( !equipIdList )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, 0, v15);
      v22 = BalanceConfig_TypeInfo;
    }
    equipIdList = (struct System_Int64_array *)sub_21FFD10(
                                                 long___TypeInfo,
                                                 (unsigned int)v22->static_fields->SvtEquipMax);
  }
  this->fields._SelectServantEquipIds_k__BackingField = equipIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SelectServantEquipIds_k__BackingField,
    (int32_t)equipIdList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !this->fields.member )
    goto LABEL_23;
  partyServantListViewManager = (ListViewManager_o *)PartyServantListViewItem__get_IsParty(partyServantListViewItem, 0);
  if ( ((unsigned __int8)partyServantListViewManager & 1) == 0 )
  {
    partyServantListViewManager = (ListViewManager_o *)PartyServantListViewItem__get_IsOrganizedWave(
                                                         partyServantListViewItem,
                                                         0);
    if ( ((unsigned __int8)partyServantListViewManager & 1) == 0 )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.member;
      if ( !partyServantListViewManager )
        goto LABEL_63;
      partyServantListViewManager = (ListViewManager_o *)PartyOrganizationListViewItem__get_IsGrandRelatedRestriction(
                                                           (PartyOrganizationListViewItem_o *)partyServantListViewManager,
                                                           0);
      if ( ((unsigned __int8)partyServantListViewManager & 1) == 0 )
      {
LABEL_23:
        PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v26 = partyServantListViewItem->fields.userServantEntity;
        v27 = PartyListViewItemMenuKind_k__BackingField == 8;
        v28 = (CommonUI_o *)Instance;
        if ( v27 )
        {
          v29 = (ServantStatusDialog_ResultDelegate_o *)sub_21FFEBC(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v29,
            (Il2CppObject *)this,
            Method_PartyServantSelectMenu_EndShowServantWithQuest__,
            0);
          if ( v28 )
          {
            CommonUI__OpenServantStatusDialog_37302652(v28, 0, v26, v29, this->fields.canMoveCombine, openCallback, 0);
            return;
          }
        }
        else
        {
          v30 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v30,
            (Il2CppObject *)this,
            Method_PartyServantSelectMenu_EndShowServant__,
            0);
          if ( v28 )
          {
            CommonUI__OpenServantStatusDialog_37302404(v28, 0, v26, v30, this->fields.canMoveCombine, openCallback, 0);
            return;
          }
        }
        goto LABEL_63;
      }
    }
  }
  if ( partyServantListViewItem->fields.isConvertOverwriteImage )
    questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
  else
    questRestrictionInfo = 0;
  if ( partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField == 8 )
  {
    v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v32 = partyServantListViewItem->fields.userServantEntity;
    v33 = partyServantListViewItem->fields.equipIdList;
    v34 = (ServantStatusDialog_ResultDelegate_o *)sub_21FFEBC(ServantStatusDialog_ResultDelegate_TypeInfo);
    ServantStatusDialog_ResultDelegate___ctor(
      v34,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServantWithQuest__,
      0);
    if ( v31 )
    {
      CommonUI__OpenServantStatusDialog_37303216(
        (CommonUI_o *)v31,
        0,
        v32,
        v33,
        questRestrictionInfo,
        v34,
        this->fields.canMoveCombine,
        openCallback,
        partyServantListViewItem->fields._TempOverwriteTreasureDeviceLv_k__BackingField,
        0);
      return;
    }
LABEL_63:
    sub_21FFECC(partyServantListViewManager, partyServantListViewItem);
  }
  member = this->fields.member;
  if ( !member )
    goto LABEL_63;
  if ( !member->fields.isRestrictionGrandServant )
    goto LABEL_57;
  if ( !partyServantListViewItem->fields._IsGrandSameServant_k__BackingField )
  {
    partyServantListViewManager = (ListViewManager_o *)partyServantListViewItem->fields.userServantEntity;
    if ( !partyServantListViewManager )
      goto LABEL_63;
    partyServantListViewManager = (ListViewManager_o *)UserServantEntity__IsGrandServant(
                                                         (UserServantEntity_o *)partyServantListViewManager,
                                                         0);
    if ( ((unsigned __int8)partyServantListViewManager & 1) == 0 )
    {
      member = this->fields.member;
      if ( !member )
        goto LABEL_63;
LABEL_57:
      isRestrictionActiveGrandBoard = member->fields.isRestrictionActiveGrandBoard;
      v56 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v58 = partyServantListViewItem->fields.userServantEntity;
      v57 = partyServantListViewItem->fields.equipIdList;
      v59 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v59,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0);
      if ( isRestrictionActiveGrandBoard )
      {
        partyServantListViewManager = (ListViewManager_o *)partyServantListViewItem->fields.userServantEntity;
        if ( !partyServantListViewManager )
          goto LABEL_63;
        canMoveCombine = this->fields.canMoveCombine;
        partyServantListViewManager = (ListViewManager_o *)UserServantEntity__IsGrandServant(
                                                             (UserServantEntity_o *)partyServantListViewManager,
                                                             0);
        if ( !v56 )
          goto LABEL_63;
        CommonUI__OpenServantStatusDialog_37302900(
          (CommonUI_o *)v56,
          0,
          v58,
          v57,
          questRestrictionInfo,
          v59,
          canMoveCombine,
          openCallback,
          (unsigned __int8)partyServantListViewManager & 1,
          0,
          partyServantListViewItem->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField,
          partyServantListViewItem->fields._TempOverwriteTreasureDeviceLv_k__BackingField,
          0);
      }
      else
      {
        if ( !v56 )
          goto LABEL_63;
        CommonUI__OpenServantStatusDialog_37302900(
          (CommonUI_o *)v56,
          0,
          v58,
          v57,
          questRestrictionInfo,
          v59,
          this->fields.canMoveCombine,
          openCallback,
          0,
          0,
          0,
          partyServantListViewItem->fields._TempOverwriteTreasureDeviceLv_k__BackingField,
          0);
      }
      return;
    }
  }
  IsParty = PartyServantListViewItem__get_IsParty(partyServantListViewItem, 0);
  baseItem = partyServantListViewItem->fields.baseItem;
  v38 = IsParty;
  if ( baseItem )
    isChangeFriendShipSkill = baseItem->fields._EquipFriendShipSkillChange_k__BackingField > 0;
  else
    isChangeFriendShipSkill = 0;
  partyServantListViewManager = (ListViewManager_o *)this->fields.member;
  if ( !partyServantListViewManager )
    goto LABEL_63;
  partyServantListViewManager = (ListViewManager_o *)PartyOrganizationListViewItem__GetEquipList(
                                                       (PartyOrganizationListViewItem_o *)partyServantListViewManager,
                                                       0);
  if ( !this->fields.member )
    goto LABEL_63;
  v40 = (System_Int64_array *)partyServantListViewManager;
  BaseServantId = PartyOrganizationListViewItem__get_BaseServantId(this->fields.member, 0);
  partyServantListViewManager = (ListViewManager_o *)PartyServantListViewItem__get_BaseServantId(
                                                       partyServantListViewItem,
                                                       0);
  if ( BaseServantId != (_DWORD)partyServantListViewManager )
    goto LABEL_46;
  v43 = this->fields.member;
  if ( !v43 )
    goto LABEL_63;
  if ( v43->fields.isFollower )
  {
LABEL_46:
    v40 = partyServantListViewItem->fields.equipIdList;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, partyServantListViewItem, v42);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    partyServantListViewManager = (ListViewManager_o *)PartyServantListViewItem__get_BaseServantId(
                                                         partyServantListViewItem,
                                                         0);
    if ( !Master_object )
      goto LABEL_63;
    partyServantListViewManager = (ListViewManager_o *)UserServantGrandMaster__GetEntityFromSvtId(
                                                         (UserServantGrandMaster_o *)Master_object,
                                                         (int32_t)partyServantListViewManager,
                                                         0);
    if ( partyServantListViewManager )
    {
      v46 = partyServantListViewItem->fields.userServantEntity;
      if ( !v46 )
        goto LABEL_63;
      v47 = (UserServantGrandEntity_o *)partyServantListViewManager;
      v48 = *(_OWORD *)&v46->fields.id.fields.currentCryptoKey;
      v49 = *(_OWORD *)&v46->fields.id.fields.fakeValue;
      dropObjectList = partyServantListViewManager->fields.dropObjectList;
      v51 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v63.fields.currentCryptoKey = v48;
      *(_OWORD *)&v63.fields.fakeValue = v49;
      if ( !v51 )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          partyServantListViewItem,
          v45);
      v61 = v63;
      v38 = dropObjectList == (struct System_Collections_Generic_List_ListViewDropObject__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                                                                &v61,
                                                                                                0);
      isChangeFriendShipSkill = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v47, 0) > 0;
    }
  }
  v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v53 = partyServantListViewItem->fields.userServantEntity;
  v54 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
  ServantStatusDialog_EndIndividualityDelegate___ctor(
    v54,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndShowServant__,
    0);
  if ( !v52 )
    goto LABEL_63;
  CommonUI__OpenServantStatusDialog_37302900(
    (CommonUI_o *)v52,
    0,
    v53,
    v40,
    questRestrictionInfo,
    v54,
    this->fields.canMoveCombine,
    openCallback,
    v38,
    !v38,
    isChangeFriendShipSkill,
    partyServantListViewItem->fields._TempOverwriteTreasureDeviceLv_k__BackingField,
    0);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__Open_41415344(
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v40; // x1
  UnityEngine_GameObject_o *v41; // x25
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x6
  const MethodInfo *v44; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v46; // x20

  if ( (byte_593420C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_EndOpen__);
    byte_593420C = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v18 = 1 << state;
    if ( (v18 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        *(System_String_o **)&num,
        *(System_String_o **)&tutorialMode,
        (int32_t)setupInfo,
        (int32_t)questRestrictionInfo,
        (bool)callback,
        (bool)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v25);
      PartyServantSelectMenu__EndOpen(this, v26);
    }
    else if ( (v18 & 0x11) != 0 )
    {
      this->fields.member = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.member,
        0,
        *(System_String_o **)&num,
        *(System_String_o **)&tutorialMode,
        (int32_t)setupInfo,
        (int32_t)questRestrictionInfo,
        (bool)callback,
        (bool)openCallback);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      this->fields.openCallbackFunc = openCallback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
        (int32_t)openCallback,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
      if ( !gameObject )
        goto LABEL_19;
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0);
      if ( !v41 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(v41, (unsigned __int8)gameObject & 1, 0);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 1, v42);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0, 1, 0, 74, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setBackBtnSprite_46820572((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_41395720(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v43);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_41401300((PartyServantListViewManager_o *)gameObject, 1, v44),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.questInfomationDraw) == 0)
        || (FollowerQuestInfomationDraw__SetInfomation(
              (FollowerQuestInfomationDraw_o *)gameObject,
              questRestrictionInfo,
              0,
              0,
              0),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager) == 0)
        || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
            gameObject = (UnityEngine_GameObject_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                       (PartyServantListViewManager_o *)gameObject,
                                                       v40),
            !scaleChangeTabSprite) )
      {
LABEL_19:
        sub_21FFECC(gameObject, v40);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
      this->fields.state = 1;
      v46 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v46, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v46, 0);
    }
  }
}


void PartyServantSelectMenu__PushRequest(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_593421E & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593421E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_21FFECC(Instance, v6);
  CardFavoriteRequest__beginRequestPush((CardFavoriteRequest_o *)Instance, selectItem->fields.userServantEntity, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__SetTabKind(
        PartyServantSelectMenu_o *this,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  bool v7; // w21
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v9; // x8
  bool v10; // w22
  UICommonButton_o *v11; // x21
  bool enabled; // w0
  __int64 *v13; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v15; // w0
  __int64 *v16; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v18; // w0
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *pushTabButton; // x21
  __int64 *v22; // x8
  UICommonButton_o *v23; // x21
  bool v24; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v26; // x8
  int32_t state; // w8
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1

  if ( (byte_5934210 & 1) == 0 )
  {
    sub_21FFC50(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_21FFC50(&StringLiteral_18393/*"button_push_reg"*/);
    sub_21FFC50(&StringLiteral_18394/*"button_push_unreg"*/);
    sub_21FFC50(&StringLiteral_18379/*"button_allchoice_reg"*/);
    sub_21FFC50(&StringLiteral_18382/*"button_alllock_unreg"*/);
    sub_21FFC50(&StringLiteral_10715/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/);
    sub_21FFC50(&StringLiteral_10718/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/);
    sub_21FFC50(&StringLiteral_18395/*"button_select_reg"*/);
    sub_21FFC50(&StringLiteral_10716/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/);
    sub_21FFC50(&StringLiteral_10717/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/);
    sub_21FFC50(&StringLiteral_18396/*"button_select_unreg"*/);
    sub_21FFC50(&StringLiteral_18381/*"button_alllock_reg"*/);
    sub_21FFC50(&StringLiteral_18380/*"button_allchoice_unreg"*/);
    byte_5934210 = 1;
  }
  v7 = !this->fields.isInitTab || isInit;
  if ( v7 || this->fields.modeKind != modeKind )
  {
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_63;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *, const MethodInfo *))statusTabButton->klass[1]._1.name)(
      statusTabButton,
      1,
      statusTabButton->klass[1]._1.namespaze,
      method);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_63;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
    if ( !statusTabButton )
      goto LABEL_63;
    v9 = &StringLiteral_18395/*"button_select_reg"*/;
    if ( modeKind )
      v9 = &StringLiteral_18396/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_63;
    v10 = !v7;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                   statusTabButton,
                                                   0,
                                                   !v7,
                                                   statusTabButton->klass[1]._1.implementedInterfaces);
    v11 = this->fields.statusTabButton;
    if ( !v11 )
      goto LABEL_63;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
    UICommonButton__SetColliderEnable(v11, enabled, v10, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_63;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
      statusTabButton,
      1,
      statusTabButton->klass[1]._1.namespaze);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_63;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !statusTabButton )
      goto LABEL_63;
    v13 = &StringLiteral_18382/*"button_alllock_unreg"*/;
    if ( modeKind == 1 )
      v13 = &StringLiteral_18381/*"button_alllock_reg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v13, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_63;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                   statusTabButton,
                                                   0,
                                                   v10,
                                                   statusTabButton->klass[1]._1.implementedInterfaces);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_63;
    v15 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
    UICommonButton__SetColliderEnable(lockTabButton, v15, v10, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_63;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
      statusTabButton,
      1,
      statusTabButton->klass[1]._1.namespaze);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_63;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !statusTabButton )
      goto LABEL_63;
    v16 = &StringLiteral_18380/*"button_allchoice_unreg"*/;
    if ( modeKind == 2 )
      v16 = &StringLiteral_18379/*"button_allchoice_reg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v16, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_63;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                   statusTabButton,
                                                   0,
                                                   v10,
                                                   statusTabButton->klass[1]._1.implementedInterfaces);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_63;
    v18 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
    UICommonButton__SetColliderEnable(choiceTabButton, v18, v10, 0);
    pushTabButton = (UnityEngine_Object_o *)this->fields.pushTabButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    if ( UnityEngine_Object__op_Inequality(pushTabButton, 0, 0) )
    {
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_63;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
        statusTabButton,
        1,
        statusTabButton->klass[1]._1.namespaze);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
      if ( !statusTabButton )
        goto LABEL_63;
      v22 = &StringLiteral_18394/*"button_push_unreg"*/;
      if ( modeKind == 3 )
        v22 = &StringLiteral_18393/*"button_push_reg"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v22, 0);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_63;
      statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                     statusTabButton,
                                                     0,
                                                     v10,
                                                     statusTabButton->klass[1]._1.implementedInterfaces);
      v23 = this->fields.pushTabButton;
      if ( !v23 )
        goto LABEL_63;
      v24 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
      UICommonButton__SetColliderEnable(v23, v24, v10, 0);
    }
    if ( modeKind > 1 )
    {
      if ( modeKind == 2 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, isInit);
        v26 = &StringLiteral_10715/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
      }
      else
      {
        if ( modeKind != 3 )
          goto LABEL_56;
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, isInit);
        v26 = &StringLiteral_10717/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
      }
    }
    else if ( modeKind )
    {
      if ( modeKind != 1 )
        goto LABEL_56;
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, isInit);
      v26 = &StringLiteral_10716/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
    }
    else
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, isInit);
      v26 = &StringLiteral_10718/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
    }
    statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v26, 0);
    if ( !explanationLabel )
      goto LABEL_63;
    UILabel__set_text(explanationLabel, (System_String_o *)statusTabButton, 0);
  }
LABEL_56:
  state = this->fields.state;
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.partyServantListViewManager;
  this->fields.isInitTab = 1;
  this->fields.modeKind = modeKind;
  if ( state != 2 )
  {
    if ( statusTabButton )
    {
      v37 = 1;
      goto LABEL_62;
    }
LABEL_63:
    sub_21FFECC(statusTabButton, *(_QWORD *)&modeKind);
  }
  if ( !statusTabButton )
    goto LABEL_63;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)statusTabButton,
    modeKind,
    (const MethodInfo *)isInit);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  v29 = (PartyServantListViewManager_CallbackFunc_o *)sub_21FFEBC(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v30);
  if ( !partyServantListViewManager )
    goto LABEL_63;
  partyServantListViewManager->fields.callbackFunc = v29;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  statusTabButton = (UnityEngine_Behaviour_o *)partyServantListViewManager;
  v37 = 2;
LABEL_62:
  PartyServantListViewManager__SetMode_41401300(
    (PartyServantListViewManager_o *)statusTabButton,
    v37,
    (const MethodInfo *)isInit);
}


void PartyServantSelectMenu__StatusRequest(
        PartyServantSelectMenu_o *this,
        PartyServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Int64_array *v17; // x1
  System_Int64_array *v18; // x2
  bool v19; // w4
  bool v20; // w5
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Int64_array *v30; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5934217 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_EndStatusSync__);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5934217 = 1;
  }
  modeKind = this->fields.modeKind;
  unlockList = 0;
  lockList = 0;
  v30 = 0;
  choiceList = 0;
  if ( modeKind == 2 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapChoiceList(partyServantListViewManager, &choiceList, &v30, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28, v29);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v27,
                                                                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v18 = v30;
        v17 = choiceList;
        v19 = 0;
        v20 = 1;
        goto LABEL_17;
      }
LABEL_21:
      sub_21FFECC(partyServantListViewManager, callback);
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
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v14,
                                                                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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


void PartyServantSelectMenu__add_callbackFunc(
        PartyServantSelectMenu_o *this,
        PartyServantSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyServantSelectMenu_o *v13; // x0
  PartyServantSelectMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5934209 & 1) == 0 )
  {
    sub_21FFC50(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    byte_5934209 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyServantSelectMenu_CallbackFunc_c *)v8->klass != PartyServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyServantSelectMenu_o *)sub_220024C(v8, PartyServantSelectMenu_CallbackFunc_TypeInfo, v9, v10);
  PartyServantSelectMenu__remove_callbackFunc(v13, v14, v15);
}


System_Int64_array *PartyServantSelectMenu__get_SelectServantEquipIds(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectServantEquipIds_k__BackingField;
}


int64_t PartyServantSelectMenu__get_SelectUserSvtId(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  return this->fields._SelectUserSvtId_k__BackingField;
}


void PartyServantSelectMenu__remove_callbackFunc(
        PartyServantSelectMenu_o *this,
        PartyServantSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyServantSelectMenu_o *v13; // x0
  int64_t v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_593420A & 1) == 0 )
  {
    sub_21FFC50(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    byte_593420A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyServantSelectMenu_CallbackFunc_c *)v8->klass != PartyServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyServantSelectMenu_o *)sub_220024C(v8, PartyServantSelectMenu_CallbackFunc_TypeInfo, v9, v10);
  PartyServantSelectMenu__set_SelectUserSvtId(v13, v14, v15);
}


void PartyServantSelectMenu__set_SelectServantEquipIds(
        PartyServantSelectMenu_o *this,
        System_Int64_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SelectServantEquipIds_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SelectServantEquipIds_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyServantSelectMenu__set_SelectUserSvtId(
        PartyServantSelectMenu_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._SelectUserSvtId_k__BackingField = value;
}


void PartyServantSelectMenu_CallbackFunc___ctor(
        PartyServantSelectMenu_CallbackFunc_o *this,
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
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF1EEC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF1E94;
}


System_IAsyncResult_o *PartyServantSelectMenu_CallbackFunc__BeginInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_5934222 & 1) == 0 )
  {
    sub_21FFC50(&PartyServantSelectMenu_ResultKind_TypeInfo);
    byte_5934222 = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12);
  v11[1] = item;
  return (System_IAsyncResult_o *)sub_21FFC04(this, v11, callback, object);
}


void PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void PartyServantSelectMenu_CallbackFunc__Invoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, PartyServantListViewItem_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    item,
    this->fields.method);
}


void PartyServantSelectMenu_RequestCallbackFunc___ctor(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1FF1F48;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF1F00;
}


System_IAsyncResult_o *PartyServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
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


void PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void PartyServantSelectMenu_RequestCallbackFunc__Invoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void PartyServantSelectMenu___c__DisplayClass69_0___ctor(
        PartyServantSelectMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PartyServantSelectMenu___c__DisplayClass69_0___OnSelectItem_b__0(
        PartyServantSelectMenu___c__DisplayClass69_0_o *this,
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
  struct PartyServantSelectMenu_o *_4__this; // x20
  struct PartyServantListViewManager_o *partyServantListViewManager; // x19
  PartyServantListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x2

  if ( (byte_5934223 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__1__);
    byte_5934223 = 1;
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
        Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__1__,
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
  partyServantListViewManager = _4__this->fields.partyServantListViewManager;
  _4__this->fields.state = 2;
  v17 = (PartyServantListViewManager_CallbackFunc_o *)sub_21FFEBC(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v18);
  if ( !partyServantListViewManager )
    goto LABEL_12;
  partyServantListViewManager->fields.callbackFunc = v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  PartyServantListViewManager__SetMode_41401300(partyServantListViewManager, 2, v25);
}


void PartyServantSelectMenu___c__DisplayClass69_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  PartyServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}