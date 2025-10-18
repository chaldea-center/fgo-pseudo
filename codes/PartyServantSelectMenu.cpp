void PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C3ED3C & 1) == 0 )
  {
    sub_1C37058(&BaseMenu_TypeInfo);
    byte_4C3ED3C = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void PartyServantSelectMenu__Callback(
        PartyServantSelectMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct PartyServantSelectMenu_CallbackFunc_o *v6; // x22
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  const MethodInfo *v10; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *Item; // x2

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, n, method);
    if ( n < 0 )
    {
      Item = 0;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1C372B4(0);
      Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, v10);
    }
    ((void (__fastcall *)(intptr_t, _QWORD, PartyServantListViewItem_o *, intptr_t))v6->fields.invoke_impl)(
      v6->fields.method_code,
      (unsigned int)result,
      Item,
      v6->fields.method);
  }
}


void PartyServantSelectMenu__ClearScrollValue(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0

  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1C372B4(0);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0);
}


void PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_34687012(this, 0, v2);
}


void PartyServantSelectMenu__Close_34687012(
        PartyServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4C3ED2A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_EndClose__);
    byte_4C3ED2A = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1C372B4(0);
  PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, 1, v6);
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v8, v9);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4C3ED3A & 1) == 0 )
  {
    sub_1C37058(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_OnSelectItem__);
    byte_4C3ED3A = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v5 = this->fields.partyServantListViewManager,
        v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C372A4(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v7),
        !v5) )
  {
    sub_1C372B4(partyServantListViewManager);
  }
  v5->fields.callbackFunc = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9);
  PartyServantListViewManager__SetMode_34671824(v5, 2, v10);
}


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
      sub_1C372B4(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__Callback(this, 0, -1, v3);
}


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
      sub_1C372B4(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__Callback(this, 1, -1, v3);
}


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
      sub_1C372B4(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 2, 0, v3);
}


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
      sub_1C372B4(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 1, 0, v3);
}


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
      sub_1C372B4(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 3, 0, v3);
}


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
      sub_1C372B4(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 0, 0, v3);
}


void PartyServantSelectMenu__EndClose(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  PartyServantSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_4C3ED36 & 1) == 0 )
  {
    sub_1C37058(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C3ED36 = 1;
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
  v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C372A4(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v7);
  if ( !v5
    || (v5->fields.callbackFunc = v6,
        sub_1C36FFC((CGThumbnailListItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9),
        PartyServantListViewManager__SetMode_34671824(v5, 2, v10),
        (partyServantListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_8:
    sub_1C372B4(partyServantListViewManager);
  }
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)partyServantListViewManager + 21), 0) )
    PartyServantSelectMenu__Callback(this, 3, -1, v11);
}


void PartyServantSelectMenu__EndCloseShowServantQuestJump(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3ED37 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3ED37 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialSelect; // w2
  const MethodInfo *v5; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_1C372B4(0);
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
  const MethodInfo *v5; // x2
  PartyServantListViewManager_o *tutorialMaskBase; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v11; // x21
  float v12; // s0 OVERLAPPED
  float v13; // s3 OVERLAPPED
  float v14; // s4
  int v15; // s1
  int v16; // s5
  int v17; // s6
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  CGThumbnailListItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v26; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4C3ED28 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&FSUtility_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__);
    sub_1C37058(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3ED28 = 1;
  }
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v20 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C372A4(PartyServantListViewManager_CallbackFunc_TypeInfo);
    PartyServantListViewManager_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      v21);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v20;
      sub_1C36FFC((CGThumbnailListItem_o *)&partyServantListViewManager->fields.callbackFunc, (int32_t)v20, v22, v23);
      PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, 2, v24);
      goto LABEL_16;
    }
LABEL_19:
    sub_1C372B4(tutorialMaskBase);
  }
  v4 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v4, 0, v2);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_19;
  PartyServantListViewManager__SetMode_34671824(tutorialMaskBase, 1, v5);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_16;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0);
  if ( !Instance )
    goto LABEL_19;
  v12 = -367.0;
  v13 = -450.0;
  if ( IsUnderVista )
    v12 = -375.0;
  else
    v13 = -442.0;
  v14 = -30.0;
  v15 = 1120403456;
  v16 = 1125515264;
  v17 = 1127481344;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v12,
    0.0,
    *(UnityEngine_Rect_o *)&v13,
    v11,
    0);
LABEL_16:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (CGThumbnailListItem_o *)&this->fields.openCallbackFunc;
  v26 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0;
    sub_1C36FFC(p_openCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v26->fields.invoke_impl)(v26->fields.method_code, v26->fields.method);
  }
}


void PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C3ED29 & 1) == 0 )
  {
    sub_1C37058(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_OnSelectItem__);
    byte_4C3ED29 = 1;
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
  if ( !statusTabButton
    || (UnityEngine_Behaviour__set_enabled(statusTabButton, 1, 0),
        (statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton) == 0)
    || (((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
          statusTabButton,
          0,
          0,
          statusTabButton->klass[1]._1.implementedInterfaces),
        this->fields.state = 7,
        partyServantListViewManager = this->fields.partyServantListViewManager,
        v5 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C372A4(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v6),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_1C372B4(statusTabButton);
  }
  partyServantListViewManager->fields.callbackFunc = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&partyServantListViewManager->fields.callbackFunc, (int32_t)v5, v7, v8);
  PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, 5, v9);
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

  if ( (byte_4C3ED34 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_EndCloseShowServant__);
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3ED34 = 1;
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
          PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, v9, v8);
          goto LABEL_19;
        }
LABEL_17:
        v9 = 3;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1C372B4(partyServantListViewManager);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3EB9E )
  {
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    byte_4C3EB9E = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServant__, 0);
  if ( !Instance )
    goto LABEL_21;
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

  if ( (byte_4C3ED35 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3ED35 = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0);
    if ( !Instance )
      sub_1C372B4(v11);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0);
  }
  PartyServantSelectMenu__EndShowServant(this, isDecide, isNeedSort, *(const MethodInfo **)&questId);
}


void PartyServantSelectMenu__EndStatusSync(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct PartyServantSelectMenu_RequestCallbackFunc_o *requedstCallback; // x19
  CGThumbnailListItem_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (CGThumbnailListItem_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0;
    sub_1C36FFC(p_requedstCallback, 0, (int32_t)method, v3);
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
    sub_1C372B4(0);
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

  if ( (byte_4C3ED2D & 1) == 0 )
  {
    sub_1C37058(&Method_PartyServantSelectMenu_EndClickCancel__);
    sub_1C37058(&Method_PartyServantSelectMenu_OnClickCancel__);
    sub_1C37058(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4C3ED2D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1C372B4(0);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0);
    }
    this->fields.state = 3;
    v4 = Method_PartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C372A4(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C3ED2C & 1) == 0 )
  {
    sub_1C37058(&Method_PartyServantSelectMenu_EndClickDecide__);
    sub_1C37058(&Method_PartyServantSelectMenu_OnClickDecide__);
    sub_1C37058(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4C3ED2C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyServantSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C372A4(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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
  const MethodInfo *v7; // x1
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4C3ED38 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyServantSelectMenu_OnClickScaleChange__);
    byte_4C3ED38 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ChangeIconScale(partyServantListViewManager, v5),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                                           partyServantListViewManager,
                                                                           v7),
          !scaleChangeTabSprite) )
    {
      sub_1C372B4(partyServantListViewManager);
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

  if ( (byte_4C3ED30 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyServantSelectMenu_EndClickTabChoice__);
    sub_1C37058(&Method_PartyServantSelectMenu_OnClickTabChoice__);
    sub_1C37058(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4C3ED30 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C372A4(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          v8);
        PartyServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C372A4(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C3ED2F & 1) == 0 )
  {
    sub_1C37058(&Method_PartyServantSelectMenu_EndClickTabLock__);
    sub_1C37058(&Method_PartyServantSelectMenu_OnClickTabLock__);
    sub_1C37058(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4C3ED2F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C372A4(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          v8);
        PartyServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C372A4(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C3ED31 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyServantSelectMenu_EndClickTabPush__);
    sub_1C37058(&Method_PartyServantSelectMenu_OnClickTabPush__);
    sub_1C37058(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4C3ED31 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_PartyServantSelectMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C372A4(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C3ED2E & 1) == 0 )
  {
    sub_1C37058(&Method_PartyServantSelectMenu_EndClickTabStatus__);
    sub_1C37058(&Method_PartyServantSelectMenu_OnClickTabStatus__);
    sub_1C37058(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4C3ED2E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C372A4(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  int32_t state; // w8
  PartyServantListViewItem_o *Item; // x1
  int32_t tutorialMode; // w8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v19; // x21
  PartyServantListViewItem_o **v20; // x21
  const MethodInfo *v21; // x4
  PartyServantListViewItem_o *v22; // x8
  bool v23; // w20
  int32_t modeKind; // w8
  struct PartyServantListViewManager_o *v25; // x20
  PartyServantListViewManager_CallbackFunc_o *v26; // x0
  const MethodInfo *v27; // x3
  void *v28; // x2
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  PartyServantSelectMenu_o *v33; // x0
  int32_t v34; // w1
  PartyServantListViewItem_o *v35; // x1
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  _BOOL4 isEnabled; // w23
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  const MethodInfo *v43; // x2
  int64_t v44; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v46; // q1
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  _QWORD *v49; // x0
  struct PartyServantListViewManager_CallbackFunc_o *v50; // x21
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v58; // x0
  Il2CppObject v59; // q0
  PartyServantListViewManager_o *v60; // x19
  ServantEntity_o *v61; // x27
  const MethodInfo *v62; // x2
  int32_t v63; // w28
  int32_t rarityId; // w26
  Il2CppObject *Master_object; // x23
  System_String_o *v66; // x19
  System_String_o *v67; // x22
  __int64 v68; // x24
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 v71; // x28
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  __int64 v74; // x27
  int32_t v75; // w0
  Il2CppClass *v76; // x8
  int32_t v77; // w25
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  __int64 v80; // x25
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  __int64 v83; // x25
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  __int64 v86; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v87; // x8
  int32_t v88; // w21
  int32_t v89; // w0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  __int64 v92; // x21
  System_String_o *v93; // x21
  System_String_o *v94; // x22
  System_String_o *v95; // x23
  Il2CppObject *v96; // x24
  CommonConfirmDialog_ClickDelegate_o *v97; // x25
  __int64 v98; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+80h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_4C3ED33 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__);
    sub_1C37058(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1C37058(&Rarity_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__0__);
    sub_1C37058(&PartyServantSelectMenu___c__DisplayClass69_0_TypeInfo);
    sub_1C37058(&StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C37058(&StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_11951/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4C3ED33 = 1;
  }
  v7 = sub_1C372A4(PartyServantSelectMenu___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_126;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  state = this->fields.state;
  if ( state == 7 )
  {
    tutorialMode = this->fields.tutorialMode;
    this->fields.tutorialSelect = n;
    if ( tutorialMode != 2 )
      return;
    this->fields.state = 8;
    v16 = Method_PartyServantSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnSelectItem__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C3703C(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v19, 0);
      return;
    }
    goto LABEL_126;
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
      goto LABEL_126;
    Item = PartyServantListViewManager__GetItem((PartyServantListViewManager_o *)partyServantListViewManager, n, v11);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v20 = (PartyServantListViewItem_o **)(v7 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v11, v12);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      this->fields.state = 2;
      v25 = this->fields.partyServantListViewManager;
      v26 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C372A4(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v28 = Method_PartyServantSelectMenu_OnSelectItem__;
    }
    else
    {
      v35 = *v20;
      if ( !*v20 )
        goto LABEL_126;
      if ( v35->fields.userServantEntity )
      {
        PartyServantSelectMenu__OpenServantDetail_34693888(this, v35, 1, 0, v21);
        return;
      }
      v47 = Method_PartyServantSelectMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v47 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnSelectItem__);
      v48 = (System_Reflection_MethodBase_o *)sub_1C3703C(v47, v47[4]);
LABEL_67:
      OverwriteAssetSoundName__PlaySystemSe(v48, 2, 0, 0);
      v25 = this->fields.partyServantListViewManager;
      v26 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C372A4(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v28 = Method_PartyServantSelectMenu_OnSelectItem__;
    }
    goto LABEL_68;
  }
  if ( kind == 2 )
  {
    switch ( this->fields.modeKind )
    {
      case 0:
        partyServantListViewManager = (__int64)*v20;
        if ( !*v20 )
          goto LABEL_126;
        if ( !*(_BYTE *)(partyServantListViewManager + 224) && *(_BYTE *)(partyServantListViewManager + 257) )
          goto LABEL_62;
        if ( *(_BYTE *)(partyServantListViewManager + 234) )
          goto LABEL_62;
        if ( *(_BYTE *)(partyServantListViewManager + 235) )
          goto LABEL_62;
        partyServantListViewManager = PartyServantListViewItem__get_IsRestricted(
                                        (PartyServantListViewItem_o *)partyServantListViewManager,
                                        0);
        if ( (partyServantListViewManager & 1) != 0 )
          goto LABEL_62;
        v22 = *v20;
        if ( !*v20 )
          goto LABEL_126;
        if ( v22->fields.isBase )
        {
          v23 = 1;
        }
        else if ( v22->fields.isLeave
               || (v22->fields.fatigureTime & 0x8000000000000000LL) == 0
               || v22->fields._IsAllOutBattle_k__BackingField
               || v22->fields._IsDataLost_k__BackingField
               || v22->fields._TimesToRestart_k__BackingField > 0 )
        {
LABEL_62:
          v23 = 0;
        }
        else
        {
          v23 = !v22->fields._IsClearedWave_k__BackingField;
        }
        v49 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v49 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnSelectItem__);
        v48 = (System_Reflection_MethodBase_o *)sub_1C3703C(v49, v49[4]);
        if ( !v23 )
          goto LABEL_67;
        OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0, 0);
        v34 = 1;
        v33 = this;
        v32 = n;
        this->fields.state = 3;
        goto LABEL_32;
      case 1:
        v36 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v36 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnSelectItem__);
        v37 = (System_Reflection_MethodBase_o *)sub_1C3703C(v36, v36[4]);
        OverwriteAssetSoundName__PlaySystemSe(v37, 11, 0, 0);
        partyServantListViewManager = (__int64)*v20;
        if ( !*v20 )
          goto LABEL_126;
        PartyServantListViewItem__SwapLock((PartyServantListViewItem_o *)partyServantListViewManager, 0);
        goto LABEL_44;
      case 2:
        v38 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v38 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnSelectItem__);
        v39 = (System_Reflection_MethodBase_o *)sub_1C3703C(v38, v38[4]);
        OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0, 0);
        partyServantListViewManager = (__int64)*v20;
        if ( !*v20 )
          goto LABEL_126;
        PartyServantListViewItem__SwapChoice((PartyServantListViewItem_o *)partyServantListViewManager, 0);
LABEL_44:
        v25 = this->fields.partyServantListViewManager;
        this->fields.state = 2;
        goto LABEL_45;
      case 3:
        if ( !*v20 )
          goto LABEL_126;
        isEnabled = (*v20)->fields.isEnabled;
        v41 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v41 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnSelectItem__);
        v42 = (System_Reflection_MethodBase_o *)sub_1C3703C(v41, v41[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0, 0);
          partyServantListViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          v44 = *(_QWORD *)(partyServantListViewManager + 128);
          if ( !v44 )
          {
LABEL_57:
            PartyServantSelectMenu__PushRequest(this, *v20, v43);
            return;
          }
          if ( !*v20 )
            goto LABEL_126;
          userServantEntity = (*v20)->fields.userServantEntity;
          if ( !userServantEntity )
            goto LABEL_126;
          v46 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v101.fields.fakeValue = v46;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v100 = v101;
          if ( v44 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v100, 0) )
            goto LABEL_57;
          partyServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          partyServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager,
                     v44,
                     (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          partyServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          partyServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_126;
          v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v102.fields.currentCryptoKey = klass;
          *(_QWORD *)&v102.fields.fakeValue = monitor;
          partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v102, 0);
          if ( !v55 )
            goto LABEL_126;
          v58 = DataMasterBase_object__object__int___GetEntity(
                  v55,
                  partyServantListViewManager,
                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v59 = Entity[2];
          v60 = this->fields.partyServantListViewManager;
          v61 = (ServantEntity_o *)v58;
          *(Il2CppObject *)&v101.fields.currentCryptoKey = Entity[1];
          *(Il2CppObject *)&v101.fields.fakeValue = v59;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v99 = v101;
          partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v99, 0);
          if ( !v60 )
            goto LABEL_126;
          partyServantListViewManager = (__int64)PartyServantListViewManager__GetItemByUserServantID(
                                                   v60,
                                                   partyServantListViewManager,
                                                   v62);
          if ( !partyServantListViewManager || !*v20 )
            goto LABEL_126;
          v63 = *(_DWORD *)(partyServantListViewManager + 180);
          rarityId = (*v20)->fields.rarityId;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11951/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
          v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
          v68 = sub_1C37100(object___TypeInfo, 6);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          partyServantListViewManager = (__int64)Rarity__getRarityType(v63, 0);
          if ( !v68 )
            goto LABEL_126;
          v71 = partyServantListViewManager;
          if ( !partyServantListViewManager
            || (partyServantListViewManager = sub_1C37194(
                                                partyServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v68 + 24) )
              goto LABEL_127;
            *(_QWORD *)(v68 + 32) = v71;
            sub_1C36FFC((CGThumbnailListItem_o *)(v68 + 32), v71, v69, v70);
            if ( !v61 )
              goto LABEL_126;
            partyServantListViewManager = (__int64)ServantEntity__getClassName(v61, 0);
            v74 = partyServantListViewManager;
            if ( !partyServantListViewManager
              || (partyServantListViewManager = sub_1C37194(
                                                  partyServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v68 + 24) <= 1u )
                goto LABEL_127;
              *(_QWORD *)(v68 + 40) = v74;
              sub_1C36FFC((CGThumbnailListItem_o *)(v68 + 40), v74, v72, v73);
              v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                      0);
              v76 = Entity[6].klass;
              *(_QWORD *)&v103.fields.fakeValue = Entity[6].monitor;
              v77 = v75;
              *(_QWORD *)&v103.fields.currentCryptoKey = v76;
              partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v103, 0);
              if ( !Master_object )
                goto LABEL_126;
              partyServantListViewManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                       (ServantLimitImageMaster_o *)Master_object,
                                                       v77,
                                                       partyServantListViewManager,
                                                       1,
                                                       0);
              v80 = partyServantListViewManager;
              if ( !partyServantListViewManager
                || (partyServantListViewManager = sub_1C37194(
                                                    partyServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v68 + 24) <= 2u )
                  goto LABEL_127;
                *(_QWORD *)(v68 + 48) = v80;
                sub_1C36FFC((CGThumbnailListItem_o *)(v68 + 48), v80, v78, v79);
                partyServantListViewManager = (__int64)Rarity__getRarityType(rarityId, 0);
                v83 = partyServantListViewManager;
                if ( !partyServantListViewManager
                  || (partyServantListViewManager = sub_1C37194(
                                                      partyServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v68 + 24) <= 3u )
                    goto LABEL_127;
                  *(_QWORD *)(v68 + 56) = v83;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v68 + 56), v83, v81, v82);
                  if ( !*v20 )
                    goto LABEL_126;
                  partyServantListViewManager = (__int64)(*v20)->fields.servantEntity;
                  if ( !partyServantListViewManager )
                    goto LABEL_126;
                  partyServantListViewManager = (__int64)ServantEntity__getClassName(
                                                           (ServantEntity_o *)partyServantListViewManager,
                                                           0);
                  v86 = partyServantListViewManager;
                  if ( !partyServantListViewManager
                    || (partyServantListViewManager = sub_1C37194(
                                                        partyServantListViewManager,
                                                        *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v68 + 24) <= 4u )
                      goto LABEL_127;
                    *(_QWORD *)(v68 + 64) = v86;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v68 + 64), v86, v84, v85);
                    partyServantListViewManager = (__int64)*v20;
                    if ( !*v20 )
                      goto LABEL_126;
                    partyServantListViewManager = PartyServantListViewItem__get_SvtId(
                                                    (PartyServantListViewItem_o *)partyServantListViewManager,
                                                    0);
                    if ( !*v20 )
                      goto LABEL_126;
                    v87 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v20)->fields.userServantEntity;
                    if ( !v87 )
                      goto LABEL_126;
                    v88 = partyServantListViewManager;
                    v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v87[6], 0);
                    partyServantListViewManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                             (ServantLimitImageMaster_o *)Master_object,
                                                             v88,
                                                             v89,
                                                             1,
                                                             0);
                    v92 = partyServantListViewManager;
                    if ( !partyServantListViewManager
                      || (partyServantListViewManager = sub_1C37194(
                                                          partyServantListViewManager,
                                                          *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v68 + 24) > 5u )
                      {
                        *(_QWORD *)(v68 + 72) = v92;
                        sub_1C36FFC((CGThumbnailListItem_o *)(v68 + 72), v92, v90, v91);
                        v93 = System_String__Format_63603084(v67, (System_Object_array *)v68, 0);
                        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                        v95 = LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                        v96 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v97 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v97,
                          (Il2CppObject *)v7,
                          Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__0__,
                          0);
                        partyServantListViewManager = (__int64)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          partyServantListViewManager = (__int64)BalanceConfig_TypeInfo;
                        }
                        if ( v96 )
                        {
                          CommonUI__OpenConfirmDialog_31208316(
                            (CommonUI_o *)v96,
                            v66,
                            v93,
                            v94,
                            v95,
                            v97,
                            *(_DWORD *)(*(_QWORD *)(partyServantListViewManager + 184) + 512LL),
                            *(_DWORD *)(*(_QWORD *)(partyServantListViewManager + 184) + 524LL),
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
LABEL_126:
                        sub_1C372B4(partyServantListViewManager);
                      }
LABEL_127:
                      sub_1C372BC(partyServantListViewManager);
                    }
                  }
                }
              }
            }
          }
          v98 = sub_1C372D8();
          sub_1C37180(v98, 0);
        }
        OverwriteAssetSoundName__PlaySystemSe(v42, 2, 0, 0);
        this->fields.state = 2;
        v25 = this->fields.partyServantListViewManager;
LABEL_45:
        v26 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C372A4(PartyServantListViewManager_CallbackFunc_TypeInfo);
        v28 = Method_PartyServantSelectMenu_OnSelectItem__;
        break;
      default:
        return;
    }
LABEL_68:
    v50 = v26;
    PartyServantListViewManager_CallbackFunc___ctor(v26, (Il2CppObject *)this, (intptr_t)v28, v27);
    if ( v25 )
    {
      v25->fields.callbackFunc = v50;
      sub_1C36FFC((CGThumbnailListItem_o *)&v25->fields.callbackFunc, (int32_t)v50, v51, v52);
      PartyServantListViewManager__SetMode_34671824(v25, 2, v53);
      return;
    }
    goto LABEL_126;
  }
  v29 = Method_PartyServantSelectMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
    v29 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OnSelectItem__);
  v30 = (System_Reflection_MethodBase_o *)sub_1C3703C(v29, v29[4]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 1, 0, 0);
  v32 = -1;
  this->fields.state = 3;
  v33 = this;
  v34 = 0;
LABEL_32:
  PartyServantSelectMenu__Callback(v33, v34, v32, v31);
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct PartyOrganizationListViewItem_o *v30; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UnityEngine_GameObject_o *gameObject; // x26
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x7
  const MethodInfo *v37; // x2
  struct PartyOrganizationListViewItem_o *v38; // x8
  FollowerQuestInfomationDraw_o *questInfomationDraw; // x23
  int32_t InitPos_k__BackingField; // w22
  PartyServantSelectMenu_o *v41; // x3
  const MethodInfo *v42; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v44; // x20

  v18 = this;
  if ( (byte_4C3ED26 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (PartyServantSelectMenu_o *)sub_1C37058(&Method_PartyServantSelectMenu_EndOpen__);
    byte_4C3ED26 = 1;
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
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&v18->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        *(const MethodInfo **)&num);
      v18->fields.openCallbackFunc = openCallback;
      sub_1C36FFC((CGThumbnailListItem_o *)&v18->fields.openCallbackFunc, (int32_t)openCallback, v21, v22);
      PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 0, v23);
      PartyServantSelectMenu__EndOpen(v18, v24);
      return;
    }
    if ( (v20 & 0x11) != 0 )
    {
      if ( partyItem )
      {
        Member = PartyListViewItem__GetMember(partyItem, num, 0);
        v18->fields.member = Member;
        sub_1C36FFC((CGThumbnailListItem_o *)&v18->fields.member, (int32_t)Member, v26, v27);
        v30 = v18->fields.member;
        if ( v30 )
        {
          userServantEntity = v30->fields.userServantEntity;
          v18->fields.tutorialMode = tutorialMode;
          v18->fields.isSelectedSvt = userServantEntity != 0;
          v18->fields.callbackFunc = callback;
          sub_1C36FFC((CGThumbnailListItem_o *)&v18->fields.callbackFunc, (int32_t)callback, v28, v29);
          v18->fields.openCallbackFunc = openCallback;
          sub_1C36FFC((CGThumbnailListItem_o *)&v18->fields.openCallbackFunc, (int32_t)openCallback, v32, v33);
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
                PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 1, v35);
                this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                if ( this )
                {
                  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0, 1, 0, 73, 0);
                  this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                  if ( this )
                  {
                    TitleInfoControl__setBackBtnSprite_39841600((TitleInfoControl_o *)this, 1, 0, 0, 0);
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
                        v36);
                      this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                      if ( this )
                      {
                        PartyServantListViewManager__SetMode_34671824((PartyServantListViewManager_o *)this, 1, v37);
                        v38 = v18->fields.member;
                        if ( v38 )
                        {
                          questInfomationDraw = v18->fields.questInfomationDraw;
                          InitPos_k__BackingField = v38->fields._InitPos_k__BackingField;
                          if ( partyItem->fields.menuKind == 9 )
                          {
                            this = (PartyServantSelectMenu_o *)PartyListViewItem__GetWaveBattleEnemyClassIds(
                                                                 partyItem,
                                                                 1,
                                                                 0);
                            if ( !questInfomationDraw )
                              goto LABEL_26;
                            v41 = this;
                          }
                          else
                          {
                            if ( !questInfomationDraw )
                              goto LABEL_26;
                            v41 = 0;
                          }
                          FollowerQuestInfomationDraw__SetInfomation(
                            questInfomationDraw,
                            questRestrictionInfo,
                            InitPos_k__BackingField,
                            (System_Int32_array *)v41,
                            0);
                          this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                          if ( this )
                          {
                            scaleChangeTabSprite = v18->fields.scaleChangeTabSprite;
                            this = (PartyServantSelectMenu_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                                 (PartyServantListViewManager_o *)this,
                                                                 v42);
                            if ( scaleChangeTabSprite )
                            {
                              UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0);
                              v18->fields.state = 1;
                              v44 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                              System_Action___ctor(v44, (Il2CppObject *)v18, Method_PartyServantSelectMenu_EndOpen__, 0);
                              BaseMenu__Open((BaseMenu_o *)v18, v44, 0);
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
      }
LABEL_26:
      sub_1C372B4(this);
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
      v8->fields._IsFocus_k__BackingField = 1;
      LOBYTE(partyServantListViewManager->fields.scaleType) = 1;
      this->fields.canMoveCombine = 1;
      PartyServantSelectMenu__OpenServantDetail_34693888(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        openCallback,
        v7);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, 4, v9);
        return;
      }
    }
LABEL_7:
    sub_1C372B4(partyServantListViewManager);
  }
}


void PartyServantSelectMenu__OpenServantDetail_34693888(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *partyServantListViewItem,
        bool isPlaySe,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v13; // q1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Int64_array *equipIdList; // x1
  BalanceConfig_c *v17; // x0
  struct PartyOrganizationListViewItem_o *member; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  Il2CppObject *Instance; // x0
  System_Int64_array *v21; // x21
  UserServantEntity_o *v22; // x23
  CommonUI_o *v23; // x24
  ServantStatusDialog_ResultDelegate_o *v24; // x25
  struct PartyOrganizationListViewItem_o *v25; // x8
  bool IsParty; // w0
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  bool v28; // w24
  bool isChangeFriendShipSkill; // w28
  Il2CppObject *v30; // x0
  System_Int64_array *v31; // x21
  UserServantEntity_o *v32; // x23
  CommonUI_o *v33; // x24
  ServantStatusDialog_EndIndividualityDelegate_o *v34; // x25
  int32_t PartyListViewItemMenuKind_k__BackingField; // w22
  Il2CppObject *v36; // x0
  UserServantEntity_o *v37; // x21
  bool v38; // zf
  CommonUI_o *v39; // x22
  ServantStatusDialog_ResultDelegate_o *v40; // x23
  System_Int64_array *v41; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v43; // w25
  Il2CppObject *Master_object; // x25
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q0
  UserServantGrandEntity_o *v47; // x25
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x24
  Il2CppObject *v49; // x0
  UserServantEntity_o *v50; // x21
  CommonUI_o *v51; // x25
  ServantStatusDialog_EndIndividualityDelegate_o *v52; // x26
  ServantStatusDialog_EndIndividualityDelegate_o *v53; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+60h] [xbp-80h]

  if ( (byte_4C3ED3B & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_EndShowServantWithQuest__);
    sub_1C37058(&Method_PartyServantSelectMenu_EndShowServant__);
    sub_1C37058(&Method_PartyServantSelectMenu_OpenServantDetail__);
    sub_1C37058(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3ED3B = 1;
  }
  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_57;
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0);
  if ( isPlaySe )
  {
    v10 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C37070(Method_PartyServantSelectMenu_OpenServantDetail__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C3703C(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
  }
  this->fields.state = 5;
  if ( !partyServantListViewItem )
    goto LABEL_57;
  userServantEntity = partyServantListViewItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_57;
  v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v56.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v55 = v56;
  this->fields._SelectUserSvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                    &v55,
                                                    0);
  equipIdList = partyServantListViewItem->fields.equipIdList;
  if ( !equipIdList )
  {
    v17 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    equipIdList = (struct System_Int64_array *)sub_1C37100(
                                                 long___TypeInfo,
                                                 (unsigned int)v17->static_fields->SvtEquipMax);
  }
  this->fields._SelectServantEquipIds_k__BackingField = equipIdList;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._SelectServantEquipIds_k__BackingField,
    (int32_t)equipIdList,
    v14,
    v15);
  partyServantListViewManager = (ListViewManager_o *)PartyServantListViewItem__get_IsParty(partyServantListViewItem, 0);
  if ( ((unsigned __int8)partyServantListViewManager & 1) != 0 )
    goto LABEL_60;
  partyServantListViewManager = (ListViewManager_o *)PartyServantListViewItem__get_IsOrganizedWave(
                                                       partyServantListViewItem,
                                                       0);
  if ( ((unsigned __int8)partyServantListViewManager & 1) != 0 )
    goto LABEL_60;
  member = this->fields.member;
  if ( !member )
    goto LABEL_57;
  if ( member->fields.isRestrictionGrandServant )
  {
LABEL_60:
    if ( partyServantListViewItem->fields.isConvertOverwriteImage )
      questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
    else
      questRestrictionInfo = 0;
    if ( partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = partyServantListViewItem->fields.userServantEntity;
      v21 = partyServantListViewItem->fields.equipIdList;
      v23 = (CommonUI_o *)Instance;
      v24 = (ServantStatusDialog_ResultDelegate_o *)sub_1C372A4(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v24,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0);
      if ( v23 )
      {
        CommonUI__OpenServantStatusDialog_31219644(
          v23,
          0,
          v22,
          v21,
          questRestrictionInfo,
          v24,
          this->fields.canMoveCombine,
          openCallback,
          0);
        return;
      }
LABEL_57:
      sub_1C372B4(partyServantListViewManager);
    }
    v25 = this->fields.member;
    if ( !v25 )
      goto LABEL_57;
    if ( !v25->fields.isRestrictionGrandServant )
      goto LABEL_33;
    if ( partyServantListViewItem->fields._IsGrandSameServant_k__BackingField )
      goto LABEL_31;
    partyServantListViewManager = (ListViewManager_o *)partyServantListViewItem->fields.userServantEntity;
    if ( !partyServantListViewManager )
      goto LABEL_57;
    if ( UserServantEntity__IsGrandServant((UserServantEntity_o *)partyServantListViewManager, 0) )
    {
LABEL_31:
      IsParty = PartyServantListViewItem__get_IsParty(partyServantListViewItem, 0);
      baseItem = partyServantListViewItem->fields.baseItem;
      v28 = IsParty;
      if ( baseItem )
        isChangeFriendShipSkill = baseItem->fields._EquipFriendShipSkillChange_k__BackingField > 0;
      else
        isChangeFriendShipSkill = 0;
      partyServantListViewManager = (ListViewManager_o *)this->fields.member;
      if ( !partyServantListViewManager )
        goto LABEL_57;
      partyServantListViewManager = (ListViewManager_o *)PartyOrganizationListViewItem__GetEquipList(
                                                           (PartyOrganizationListViewItem_o *)partyServantListViewManager,
                                                           0);
      if ( !this->fields.member )
        goto LABEL_57;
      v41 = (System_Int64_array *)partyServantListViewManager;
      SvtId = PartyOrganizationListViewItem__get_SvtId(this->fields.member, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(SvtId, 0);
      if ( v43 != PartyServantListViewItem__get_SvtId(partyServantListViewItem, 0) )
      {
        v41 = partyServantListViewItem->fields.equipIdList;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
        partyServantListViewManager = (ListViewManager_o *)PartyServantListViewItem__get_SvtId(
                                                             partyServantListViewItem,
                                                             0);
        if ( !Master_object )
          goto LABEL_57;
        partyServantListViewManager = (ListViewManager_o *)UserServantGrandMaster__GetEntityFromSvtId(
                                                             (UserServantGrandMaster_o *)Master_object,
                                                             (int32_t)partyServantListViewManager,
                                                             0);
        if ( partyServantListViewManager )
        {
          v45 = partyServantListViewItem->fields.userServantEntity;
          if ( !v45 )
            goto LABEL_57;
          v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
          v47 = (UserServantGrandEntity_o *)partyServantListViewManager;
          dropObjectList = partyServantListViewManager->fields.dropObjectList;
          *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v56.fields.fakeValue = v46;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v54 = v56;
          v28 = dropObjectList == (struct System_Collections_Generic_List_ListViewDropObject__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                                                                    &v54,
                                                                                                    0);
          isChangeFriendShipSkill = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v47, 0) > 0;
        }
      }
      v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v50 = partyServantListViewItem->fields.userServantEntity;
      v51 = (CommonUI_o *)v49;
      v52 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C372A4(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v52,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0);
      if ( !v51 )
        goto LABEL_57;
      CommonUI__OpenServantStatusDialog_31219336(
        v51,
        0,
        v50,
        v41,
        questRestrictionInfo,
        v52,
        this->fields.canMoveCombine,
        openCallback,
        v28,
        !v28,
        isChangeFriendShipSkill,
        0);
    }
    else
    {
LABEL_33:
      v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v32 = partyServantListViewItem->fields.userServantEntity;
      v31 = partyServantListViewItem->fields.equipIdList;
      v33 = (CommonUI_o *)v30;
      v34 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C372A4(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v34,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0);
      if ( !v33 )
        goto LABEL_57;
      CommonUI__OpenServantStatusDialog_31219336(
        v33,
        0,
        v32,
        v31,
        questRestrictionInfo,
        v34,
        this->fields.canMoveCombine,
        openCallback,
        0,
        0,
        0,
        0);
    }
  }
  else
  {
    PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
    v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v37 = partyServantListViewItem->fields.userServantEntity;
    v38 = PartyListViewItemMenuKind_k__BackingField == 8;
    v39 = (CommonUI_o *)v36;
    if ( v38 )
    {
      v40 = (ServantStatusDialog_ResultDelegate_o *)sub_1C372A4(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v40,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0);
      if ( !v39 )
        goto LABEL_57;
      CommonUI__OpenServantStatusDialog_31219088(v39, 0, v37, v40, this->fields.canMoveCombine, openCallback, 0);
    }
    else
    {
      v53 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C372A4(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v53,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0);
      if ( !v39 )
        goto LABEL_57;
      CommonUI__OpenServantStatusDialog_31218840(v39, 0, v37, v53, this->fields.canMoveCombine, openCallback, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyServantSelectMenu__Open_34685980(
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
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v26; // x25
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x6
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v32; // x20

  if ( (byte_4C3ED27 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_EndOpen__);
    byte_4C3ED27 = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v18 = 1 << state;
    if ( (v18 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        num,
        *(const MethodInfo **)&tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v19, v20);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v21);
      PartyServantSelectMenu__EndOpen(this, v22);
    }
    else if ( (v18 & 0x11) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        num,
        *(const MethodInfo **)&tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v23, v24);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
      if ( !gameObject )
        goto LABEL_19;
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0);
      if ( !v26 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(v26, (unsigned __int8)gameObject & 1, 0);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 1, v27);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0, 1, 0, 73, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setBackBtnSprite_39841600((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_34666512(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v28);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_34671824((PartyServantListViewManager_o *)gameObject, 1, v29),
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
                                                       v30),
            !scaleChangeTabSprite) )
      {
LABEL_19:
        sub_1C372B4(gameObject);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
      this->fields.state = 1;
      v32 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v32, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v32, 0);
    }
  }
}


void PartyServantSelectMenu__PushRequest(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  DataManager_o *v6; // x23
  struct UserServantEntity_o *userServantEntity; // x19
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

  if ( (byte_4C3ED39 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3ED39 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v6 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v6 || !userServantEntity )
    goto LABEL_18;
  v8 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v6->fields.m_CachedPtr;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
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
  v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v6->fields.writeMasterDataThread;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v13;
  v39 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v42 = v43;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v42, 0);
  v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v6->fields.context;
  v38 = v16;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v17;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v41, 0);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v18,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v20 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v21 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v40.fields.fakeValue = v20;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v40, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                      userServantEntity->fields.imageLimitCount,
                      0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(userServantEntity->fields.dispLimitCount, 0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          userServantEntity->fields.commandCardLimitCount,
          0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(userServantEntity->fields.iconLimitCount, 0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          userServantEntity->fields.portraitLimitCount,
          0);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                  userServantEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                       userServantEntity->fields.randomLimitCount,
                       0);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          userServantEntity->fields.randomLimitCountSupport,
          0);
  v32 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
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
  bool v10; // w23
  _BOOL4 v11; // w21
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
  CGThumbnailListItem_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1

  if ( (byte_4C3ED2B & 1) == 0 )
  {
    sub_1C37058(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1C37058(&StringLiteral_17654/*"button_push_reg"*/);
    sub_1C37058(&StringLiteral_17655/*"button_push_unreg"*/);
    sub_1C37058(&StringLiteral_17640/*"button_allchoice_reg"*/);
    sub_1C37058(&StringLiteral_17643/*"button_alllock_unreg"*/);
    sub_1C37058(&StringLiteral_10316/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/);
    sub_1C37058(&StringLiteral_10319/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/);
    sub_1C37058(&StringLiteral_17656/*"button_select_reg"*/);
    sub_1C37058(&StringLiteral_10317/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/);
    sub_1C37058(&StringLiteral_10318/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/);
    sub_1C37058(&StringLiteral_17657/*"button_select_unreg"*/);
    sub_1C37058(&StringLiteral_17642/*"button_alllock_reg"*/);
    sub_1C37058(&StringLiteral_17641/*"button_allchoice_unreg"*/);
    byte_4C3ED2B = 1;
  }
  v7 = !this->fields.isInitTab || isInit;
  if ( v7 || this->fields.modeKind != modeKind )
  {
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *, const MethodInfo *))statusTabButton->klass[1]._1.name)(
      statusTabButton,
      1,
      statusTabButton->klass[1]._1.namespaze,
      method);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
    if ( !statusTabButton )
      goto LABEL_59;
    v9 = &StringLiteral_17656/*"button_select_reg"*/;
    if ( modeKind )
      v9 = &StringLiteral_17657/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    v10 = !v7;
    v11 = !v7;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _BOOL4, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                   statusTabButton,
                                                   0,
                                                   v11,
                                                   statusTabButton->klass[1]._1.implementedInterfaces);
    v12 = this->fields.statusTabButton;
    if ( !v12 )
      goto LABEL_59;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
    UICommonButton__SetColliderEnable(v12, enabled, v11, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
      statusTabButton,
      1,
      statusTabButton->klass[1]._1.namespaze);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !statusTabButton )
      goto LABEL_59;
    v14 = &StringLiteral_17642/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v14 = &StringLiteral_17643/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v14, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                   statusTabButton,
                                                   0,
                                                   v10,
                                                   statusTabButton->klass[1]._1.implementedInterfaces);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_59;
    v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
    UICommonButton__SetColliderEnable(lockTabButton, v16, v10, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
      statusTabButton,
      1,
      statusTabButton->klass[1]._1.namespaze);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !statusTabButton )
      goto LABEL_59;
    v17 = &StringLiteral_17640/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v17 = &StringLiteral_17641/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v17, 0);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                   statusTabButton,
                                                   0,
                                                   v10,
                                                   statusTabButton->klass[1]._1.implementedInterfaces);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_59;
    v19 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
    UICommonButton__SetColliderEnable(choiceTabButton, v19, v10, 0);
    pushTabButton = (UnityEngine_Object_o *)this->fields.pushTabButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushTabButton, 0, 0) )
    {
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_59;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))statusTabButton->klass[1]._1.name)(
        statusTabButton,
        1,
        statusTabButton->klass[1]._1.namespaze);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_59;
      UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
      if ( !statusTabButton )
        goto LABEL_59;
      v21 = &StringLiteral_17654/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v21 = &StringLiteral_17655/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v21, 0);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_59;
      statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppClass **))statusTabButton->klass[1]._1.nestedTypes)(
                                                     statusTabButton,
                                                     0,
                                                     v10,
                                                     statusTabButton->klass[1]._1.implementedInterfaces);
      v22 = this->fields.pushTabButton;
      if ( !v22 )
        goto LABEL_59;
      v23 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
      UICommonButton__SetColliderEnable(v22, v23, v10, 0);
    }
    switch ( modeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_10319/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_50;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_10317/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_50;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_10316/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_50;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_10318/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
LABEL_50:
        statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v25, 0);
        if ( !explanationLabel )
          goto LABEL_59;
        UILabel__set_text(explanationLabel, (System_String_o *)statusTabButton, 0);
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
    sub_1C372B4(statusTabButton);
  }
  if ( !statusTabButton )
    goto LABEL_59;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)statusTabButton,
    modeKind,
    (const MethodInfo *)isInit);
  partyServantListViewManager = (CGThumbnailListItem_o *)this->fields.partyServantListViewManager;
  v28 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C372A4(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v29);
  if ( !partyServantListViewManager )
    goto LABEL_59;
  partyServantListViewManager[3].klass = (CGThumbnailListItem_c *)v28;
  sub_1C36FFC(partyServantListViewManager + 3, (int32_t)v28, v30, v31);
  v32 = 2;
  statusTabButton = (UnityEngine_Behaviour_o *)partyServantListViewManager;
LABEL_58:
  PartyServantListViewManager__SetMode_34671824(
    (PartyServantListViewManager_o *)statusTabButton,
    v32,
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  System_Int64_array *v11; // x1
  System_Int64_array *v12; // x2
  bool v13; // w4
  bool v14; // w5
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3ED32 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_EndStatusSync__);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C3ED32 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v18 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapChoiceList(partyServantListViewManager, &choiceList, &v18, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v15, v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v17,
                                                                       (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v12 = v18;
        v11 = choiceList;
        v14 = 1;
        v13 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C372B4(partyServantListViewManager);
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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v8, v9);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v10,
                                                                       (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
  __int64 v9; // x0
  bool v10; // zf
  PartyServantSelectMenu_o *v11; // x0
  PartyServantSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3ED24 & 1) == 0 )
  {
    sub_1C37058(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4C3ED24 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1C37574(v8);
  PartyServantSelectMenu__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  PartyServantSelectMenu_o *v11; // x0
  int64_t v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3ED25 & 1) == 0 )
  {
    sub_1C37058(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4C3ED25 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1C37574(v8);
  PartyServantSelectMenu__set_SelectUserSvtId(v11, v12, v13);
}


void PartyServantSelectMenu__set_SelectServantEquipIds(
        PartyServantSelectMenu_o *this,
        System_Int64_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SelectServantEquipIds_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._SelectServantEquipIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A76480;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76428;
}


System_IAsyncResult_o *PartyServantSelectMenu_CallbackFunc__BeginInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  if ( (byte_4C3ED3D & 1) == 0 )
  {
    sub_1C37058(&PartyServantSelectMenu_ResultKind_TypeInfo);
    byte_4C3ED3D = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             PartyServantSelectMenu_ResultKind_TypeInfo,
             &v14,
             item,
             callback,
             object,
             method,
             v6,
             v7);
  v13[1] = item;
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  this->fields.invoke_impl = (intptr_t)sub_1A764DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76494;
}


System_IAsyncResult_o *PartyServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
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
  if ( (byte_4C3ED3E & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3ED3E = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  CommonUI_o *v6; // x20
  System_Action_o *_9__1; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct PartyServantSelectMenu_o *_4__this; // x20
  struct PartyServantListViewManager_o *partyServantListViewManager; // x19
  PartyServantListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4C3ED3F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__1__);
    byte_4C3ED3F = 1;
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
        Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__1__,
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
  partyServantListViewManager = _4__this->fields.partyServantListViewManager;
  v12 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C372A4(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v13);
  if ( !partyServantListViewManager )
    goto LABEL_12;
  partyServantListViewManager->fields.callbackFunc = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&partyServantListViewManager->fields.callbackFunc, (int32_t)v12, v14, v15);
  PartyServantListViewManager__SetMode_34671824(partyServantListViewManager, 2, v16);
}


void PartyServantSelectMenu___c__DisplayClass69_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C372B4(this);
  PartyServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}