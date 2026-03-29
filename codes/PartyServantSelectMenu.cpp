void PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C5CA & 1) == 0 )
  {
    sub_1C93AD4(&BaseMenu_TypeInfo);
    byte_4D2C5CA = 1;
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct PartyServantSelectMenu_CallbackFunc_o *v10; // x22
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *Item; // x2

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, n, (int32_t)method, v4, v5, v6, v7);
    if ( n < 0 )
    {
      Item = 0;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1C93D2C(0, v14);
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
    sub_1C93D2C(0, method);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0);
}


void PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_35206116(this, 0, v2);
}


void PartyServantSelectMenu__Close_35206116(
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
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Action_o *v15; // x20

  if ( (byte_4D2C5B8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndClose__);
    byte_4D2C5B8 = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1C93D2C(0, v6);
  PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, 1, v7);
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v15, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4D2C5C8 & 1) == 0 )
  {
    sub_1C93AD4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnSelectItem__);
    byte_4D2C5C8 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v5 = this->fields.partyServantListViewManager,
        v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C93D20(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v7),
        !v5) )
  {
    sub_1C93D2C(partyServantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  PartyServantListViewManager__SetMode_35190912(v5, 2, v14);
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
      sub_1C93D2C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, 3, v6);
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
      sub_1C93D2C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, 3, v6);
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
      sub_1C93D2C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, 3, v6);
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
      sub_1C93D2C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, 3, v6);
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
      sub_1C93D2C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, 3, v6);
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
      sub_1C93D2C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 0, 0, v3);
}


void PartyServantSelectMenu__EndClose(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  PartyServantSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_4D2C5C4 & 1) == 0 )
  {
    sub_1C93AD4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2C5C4 = 1;
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
  v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C93D20(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v7);
  if ( !v5
    || (v5->fields.callbackFunc = v6,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13),
        PartyServantListViewManager__SetMode_35190912(v5, 2, v14),
        (partyServantListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_8:
    sub_1C93D2C(partyServantListViewManager, method);
  }
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)partyServantListViewManager + 24), 0) )
    PartyServantSelectMenu__Callback(this, 3, -1, v15);
}


void PartyServantSelectMenu__EndCloseShowServantQuestJump(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2C5C5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2C5C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialSelect; // w2
  const MethodInfo *v5; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_1C93D2C(0, method);
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0);
  tutorialSelect = this->fields.tutorialSelect;
  this->fields.state = 3;
  PartyServantSelectMenu__Callback(this, 1, tutorialSelect, v5);
}


void PartyServantSelectMenu__EndOpen(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyServantListViewManager_o *tutorialMaskBase; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v16; // x21
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  const MethodInfo *v27; // x2
  GrandQuestFolderBoardItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v29; // x20
  struct System_Action_o *openCallbackFunc; // t1
  UnityEngine_Vector2_o v31; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v32; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4D2C5B6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C5B6 = 1;
  }
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v19 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C93D20(PartyServantListViewManager_CallbackFunc_TypeInfo);
    PartyServantListViewManager_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      v20);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v19;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&partyServantListViewManager->fields.callbackFunc,
        (int32_t)v19,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, 2, v27);
      goto LABEL_16;
    }
LABEL_19:
    sub_1C93D2C(tutorialMaskBase, v5);
  }
  v4 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v4, 0, v2);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_19;
  PartyServantListViewManager__SetMode_35190912(tutorialMaskBase, 1, v6);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_16;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0);
  if ( !Instance )
    goto LABEL_19;
  v31.fields.x = -367.0;
  v32.fields.m_XMin = -450.0;
  if ( IsUnderVista )
    v31.fields.x = -375.0;
  else
    v32.fields.m_XMin = -442.0;
  v32.fields.m_YMin = -30.0;
  v31.fields.y = 100.0;
  v32.fields.m_Width = 150.0;
  v32.fields.m_Height = 180.0;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v31, 0.0, v32, v16, 0);
LABEL_16:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc;
  v29 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0;
    sub_1C93A78(p_openCallbackFunc, 0, v8, v9, v10, v11, v12, v13);
    ((void (__fastcall *)(intptr_t, intptr_t))v29->fields.invoke_impl)(v29->fields.method_code, v29->fields.method);
  }
}


void PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2C5B7 & 1) == 0 )
  {
    sub_1C93AD4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnSelectItem__);
    byte_4D2C5B7 = 1;
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
        v5 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C93D20(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v6),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_1C93D2C(statusTabButton, method);
  }
  partyServantListViewManager->fields.callbackFunc = v5;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, 5, v13);
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

  if ( (byte_4D2C5C2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndCloseShowServant__);
    sub_1C93AD4(&RandomLimitCountManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C5C2 = 1;
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
          PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, v9, v8);
          goto LABEL_19;
        }
LABEL_17:
        v9 = 3;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1C93D2C(partyServantListViewManager, isDecide);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4D2C259 )
  {
    sub_1C93AD4(&RandomLimitCountManager_TypeInfo);
    byte_4D2C259 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  __int64 v12; // x1

  if ( (byte_4D2C5C3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C5C3 = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0);
    if ( !Instance )
      sub_1C93D2C(v11, v12);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0);
  }
  PartyServantSelectMenu__EndShowServant(this, isDecide, isNeedSort, *(const MethodInfo **)&questId);
}


void PartyServantSelectMenu__EndStatusSync(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PartyServantSelectMenu_RequestCallbackFunc_o *requedstCallback; // x19
  GrandQuestFolderBoardItem_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0;
    sub_1C93A78(p_requedstCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
    sub_1C93D2C(0, method);
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

  if ( (byte_4D2C5BB & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndClickCancel__);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnClickCancel__);
    sub_1C93AD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C5BB = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1C93D2C(0, method);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0);
    }
    this->fields.state = 3;
    v4 = Method_PartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C93D20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C5BA & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndClickDecide__);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnClickDecide__);
    sub_1C93AD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C5BA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyServantSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C93D20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C5C6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnClickScaleChange__);
    byte_4D2C5C6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
      sub_1C93D2C(partyServantListViewManager, v5);
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

  if ( (byte_4D2C5BE & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndClickTabChoice__);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnClickTabChoice__);
    sub_1C93AD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C5BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C93D20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          v8);
        PartyServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C93D20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C5BD & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndClickTabLock__);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnClickTabLock__);
    sub_1C93AD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C5BD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C93D20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          v8);
        PartyServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C93D20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C5BF & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndClickTabPush__);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnClickTabPush__);
    sub_1C93AD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C5BF = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_PartyServantSelectMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C93D20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C5BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndClickTabStatus__);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnClickTabStatus__);
    sub_1C93AD4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C5BC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1C93D20(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t state; // w8
  PartyServantListViewItem_o *Item; // x1
  int32_t tutorialMode; // w8
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v28; // x21
  PartyServantListViewItem_o **v29; // x21
  const MethodInfo *v30; // x4
  PartyServantListViewItem_o *v31; // x8
  bool v32; // w20
  int32_t modeKind; // w8
  struct PartyServantListViewManager_o *v34; // x20
  PartyServantListViewManager_CallbackFunc_o *v35; // x0
  const MethodInfo *v36; // x3
  void *v37; // x2
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  PartyServantSelectMenu_o *v42; // x0
  int32_t v43; // w1
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  _BOOL4 isEnabled; // w23
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  const MethodInfo *v51; // x2
  int64_t v52; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v54; // q1
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  _QWORD *v57; // x0
  struct PartyServantListViewManager_CallbackFunc_o *v58; // x21
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  const MethodInfo *v65; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v70; // x0
  Il2CppObject v71; // q0
  PartyServantListViewManager_o *v72; // x19
  ServantEntity_o *v73; // x27
  const MethodInfo *v74; // x2
  int32_t v75; // w28
  int32_t rarityId; // w26
  Il2CppObject *Master_object; // x23
  System_String_o *v78; // x19
  System_String_o *v79; // x22
  __int64 v80; // x24
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  __int64 v87; // x28
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  __int64 v94; // x27
  int32_t v95; // w0
  Il2CppClass *v96; // x8
  int32_t v97; // w25
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  __int64 v104; // x25
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  __int64 v111; // x25
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  __int64 v118; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v119; // x8
  int32_t v120; // w21
  int32_t v121; // w0
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  __int64 v128; // x21
  System_String_o *v129; // x21
  System_String_o *v130; // x22
  System_String_o *v131; // x23
  Il2CppObject *v132; // x24
  CommonConfirmDialog_ClickDelegate_o *v133; // x25
  __int64 v134; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+80h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16

  if ( (byte_4D2C5C1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1C93AD4(&Rarity_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__0__);
    sub_1C93AD4(&PartyServantSelectMenu___c__DisplayClass69_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_12037/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_12036/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_12038/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4D2C5C1 = 1;
  }
  v7 = sub_1C93D20(PartyServantSelectMenu___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_126;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  state = this->fields.state;
  if ( state == 7 )
  {
    tutorialMode = this->fields.tutorialMode;
    this->fields.tutorialSelect = n;
    if ( tutorialMode != 2 )
      return;
    this->fields.state = 8;
    v25 = Method_PartyServantSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnSelectItem__);
    v26 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v28, 0);
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
    Item = PartyServantListViewManager__GetItem((PartyServantListViewManager_o *)partyServantListViewManager, n, v16);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v29 = (PartyServantListViewItem_o **)(v7 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v16, v17, v18, v19, v20, v21);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      this->fields.state = 2;
      v34 = this->fields.partyServantListViewManager;
      v35 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C93D20(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v37 = Method_PartyServantSelectMenu_OnSelectItem__;
    }
    else
    {
      v9 = *v29;
      if ( !*v29 )
        goto LABEL_126;
      if ( v9->fields.userServantEntity )
      {
        PartyServantSelectMenu__OpenServantDetail_35212992(this, v9, 1, 0, v30);
        return;
      }
      v55 = Method_PartyServantSelectMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v55 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnSelectItem__);
      v56 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v55, v55[4]);
LABEL_67:
      OverwriteAssetSoundName__PlaySystemSe(v56, 2, 0, 0);
      v34 = this->fields.partyServantListViewManager;
      v35 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C93D20(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v37 = Method_PartyServantSelectMenu_OnSelectItem__;
    }
    goto LABEL_68;
  }
  if ( kind == 2 )
  {
    switch ( this->fields.modeKind )
    {
      case 0:
        partyServantListViewManager = (__int64)*v29;
        if ( !*v29 )
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
        v31 = *v29;
        if ( !*v29 )
          goto LABEL_126;
        if ( v31->fields.isBase )
        {
          v32 = 1;
        }
        else if ( v31->fields.isLeave
               || (v31->fields.fatigureTime & 0x8000000000000000LL) == 0
               || v31->fields._IsAllOutBattle_k__BackingField
               || v31->fields._IsDataLost_k__BackingField
               || v31->fields._TimesToRestart_k__BackingField > 0 )
        {
LABEL_62:
          v32 = 0;
        }
        else
        {
          v32 = !v31->fields._IsClearedWave_k__BackingField;
        }
        v57 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v57 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnSelectItem__);
        v56 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v57, v57[4]);
        if ( !v32 )
          goto LABEL_67;
        OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0, 0);
        v43 = 1;
        v42 = this;
        v41 = n;
        this->fields.state = 3;
        goto LABEL_32;
      case 1:
        v44 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v44 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnSelectItem__);
        v45 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v44, v44[4]);
        OverwriteAssetSoundName__PlaySystemSe(v45, 11, 0, 0);
        partyServantListViewManager = (__int64)*v29;
        if ( !*v29 )
          goto LABEL_126;
        PartyServantListViewItem__SwapLock((PartyServantListViewItem_o *)partyServantListViewManager, 0);
        goto LABEL_44;
      case 2:
        v46 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v46 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnSelectItem__);
        v47 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v46, v46[4]);
        OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0, 0);
        partyServantListViewManager = (__int64)*v29;
        if ( !*v29 )
          goto LABEL_126;
        PartyServantListViewItem__SwapChoice((PartyServantListViewItem_o *)partyServantListViewManager, 0);
LABEL_44:
        v34 = this->fields.partyServantListViewManager;
        this->fields.state = 2;
        goto LABEL_45;
      case 3:
        if ( !*v29 )
          goto LABEL_126;
        isEnabled = (*v29)->fields.isEnabled;
        v49 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v49 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnSelectItem__);
        v50 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v49, v49[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0, 0);
          partyServantListViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          v52 = *(_QWORD *)(partyServantListViewManager + 128);
          if ( !v52 )
          {
LABEL_57:
            PartyServantSelectMenu__PushRequest(this, *v29, v51);
            return;
          }
          if ( !*v29 )
            goto LABEL_126;
          userServantEntity = (*v29)->fields.userServantEntity;
          if ( !userServantEntity )
            goto LABEL_126;
          v54 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v137.fields.fakeValue = v54;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v136 = v137;
          if ( v52 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v136, 0) )
            goto LABEL_57;
          partyServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          partyServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager,
                     v52,
                     (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          partyServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          partyServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_126;
          v67 = (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v138.fields.currentCryptoKey = klass;
          *(_QWORD *)&v138.fields.fakeValue = monitor;
          partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v138, 0);
          if ( !v67 )
            goto LABEL_126;
          v70 = DataMasterBase_object__object__int___GetEntity(
                  v67,
                  partyServantListViewManager,
                  (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v71 = Entity[2];
          v72 = this->fields.partyServantListViewManager;
          v73 = (ServantEntity_o *)v70;
          *(Il2CppObject *)&v137.fields.currentCryptoKey = Entity[1];
          *(Il2CppObject *)&v137.fields.fakeValue = v71;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v135 = v137;
          partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v135, 0);
          if ( !v72 )
            goto LABEL_126;
          partyServantListViewManager = (__int64)PartyServantListViewManager__GetItemByUserServantID(
                                                   v72,
                                                   partyServantListViewManager,
                                                   v74);
          if ( !partyServantListViewManager || !*v29 )
            goto LABEL_126;
          v75 = *(_DWORD *)(partyServantListViewManager + 180);
          rarityId = (*v29)->fields.rarityId;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
          v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12037/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
          v80 = sub_1C93B7C(object___TypeInfo, 6);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          partyServantListViewManager = (__int64)Rarity__getRarityType(v75, 0);
          if ( !v80 )
            goto LABEL_126;
          v87 = partyServantListViewManager;
          if ( !partyServantListViewManager
            || (partyServantListViewManager = sub_1C93C10(
                                                partyServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v80 + 24) )
              goto LABEL_127;
            *(_QWORD *)(v80 + 32) = v87;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 32), v87, v81, v82, v83, v84, v85, v86);
            if ( !v73 )
              goto LABEL_126;
            partyServantListViewManager = (__int64)ServantEntity__getClassName(v73, 0);
            v94 = partyServantListViewManager;
            if ( !partyServantListViewManager
              || (partyServantListViewManager = sub_1C93C10(
                                                  partyServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v80 + 24) <= 1u )
                goto LABEL_127;
              *(_QWORD *)(v80 + 40) = v94;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 40), v94, v88, v89, v90, v91, v92, v93);
              v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                      0);
              v96 = Entity[6].klass;
              *(_QWORD *)&v139.fields.fakeValue = Entity[6].monitor;
              v97 = v95;
              *(_QWORD *)&v139.fields.currentCryptoKey = v96;
              partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v139, 0);
              if ( !Master_object )
                goto LABEL_126;
              partyServantListViewManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                       (ServantLimitImageMaster_o *)Master_object,
                                                       v97,
                                                       partyServantListViewManager,
                                                       1,
                                                       0);
              v104 = partyServantListViewManager;
              if ( !partyServantListViewManager
                || (partyServantListViewManager = sub_1C93C10(
                                                    partyServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v80 + 24) <= 2u )
                  goto LABEL_127;
                *(_QWORD *)(v80 + 48) = v104;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 48), v104, v98, v99, v100, v101, v102, v103);
                partyServantListViewManager = (__int64)Rarity__getRarityType(rarityId, 0);
                v111 = partyServantListViewManager;
                if ( !partyServantListViewManager
                  || (partyServantListViewManager = sub_1C93C10(
                                                      partyServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v80 + 24) <= 3u )
                    goto LABEL_127;
                  *(_QWORD *)(v80 + 56) = v111;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 56), v111, v105, v106, v107, v108, v109, v110);
                  if ( !*v29 )
                    goto LABEL_126;
                  partyServantListViewManager = (__int64)(*v29)->fields.servantEntity;
                  if ( !partyServantListViewManager )
                    goto LABEL_126;
                  partyServantListViewManager = (__int64)ServantEntity__getClassName(
                                                           (ServantEntity_o *)partyServantListViewManager,
                                                           0);
                  v118 = partyServantListViewManager;
                  if ( !partyServantListViewManager
                    || (partyServantListViewManager = sub_1C93C10(
                                                        partyServantListViewManager,
                                                        *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v80 + 24) <= 4u )
                      goto LABEL_127;
                    *(_QWORD *)(v80 + 64) = v118;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 64), v118, v112, v113, v114, v115, v116, v117);
                    partyServantListViewManager = (__int64)*v29;
                    if ( !*v29 )
                      goto LABEL_126;
                    partyServantListViewManager = PartyServantListViewItem__get_SvtId(
                                                    (PartyServantListViewItem_o *)partyServantListViewManager,
                                                    0);
                    if ( !*v29 )
                      goto LABEL_126;
                    v119 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v29)->fields.userServantEntity;
                    if ( !v119 )
                      goto LABEL_126;
                    v120 = partyServantListViewManager;
                    v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v119[6], 0);
                    partyServantListViewManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                             (ServantLimitImageMaster_o *)Master_object,
                                                             v120,
                                                             v121,
                                                             1,
                                                             0);
                    v128 = partyServantListViewManager;
                    if ( !partyServantListViewManager
                      || (partyServantListViewManager = sub_1C93C10(
                                                          partyServantListViewManager,
                                                          *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v80 + 24) > 5u )
                      {
                        *(_QWORD *)(v80 + 72) = v128;
                        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 72), v128, v122, v123, v124, v125, v126, v127);
                        v129 = System_String__Format_64467168(v79, (System_Object_array *)v80, 0);
                        v130 = LocalizationManager__Get((System_String_o *)StringLiteral_12036/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                        v131 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                        v132 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v133 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v133,
                          (Il2CppObject *)v7,
                          Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__0__,
                          0);
                        partyServantListViewManager = (__int64)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          partyServantListViewManager = (__int64)BalanceConfig_TypeInfo;
                        }
                        if ( v132 )
                        {
                          CommonUI__OpenConfirmDialog_31581040(
                            (CommonUI_o *)v132,
                            v78,
                            v129,
                            v130,
                            v131,
                            v133,
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
                        sub_1C93D2C(partyServantListViewManager, v9);
                      }
LABEL_127:
                      sub_1C93D34(partyServantListViewManager);
                    }
                  }
                }
              }
            }
          }
          v134 = sub_1C93D50();
          sub_1C93BFC(v134, 0);
        }
        OverwriteAssetSoundName__PlaySystemSe(v50, 2, 0, 0);
        this->fields.state = 2;
        v34 = this->fields.partyServantListViewManager;
LABEL_45:
        v35 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C93D20(PartyServantListViewManager_CallbackFunc_TypeInfo);
        v37 = Method_PartyServantSelectMenu_OnSelectItem__;
        break;
      default:
        return;
    }
LABEL_68:
    v58 = v35;
    PartyServantListViewManager_CallbackFunc___ctor(v35, (Il2CppObject *)this, (intptr_t)v37, v36);
    if ( v34 )
    {
      v34->fields.callbackFunc = v58;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v34->fields.callbackFunc, (int32_t)v58, v59, v60, v61, v62, v63, v64);
      PartyServantListViewManager__SetMode_35190912(v34, 2, v65);
      return;
    }
    goto LABEL_126;
  }
  v38 = Method_PartyServantSelectMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OnSelectItem__);
  v39 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v38, v38[4]);
  OverwriteAssetSoundName__PlaySystemSe(v39, 1, 0, 0);
  v41 = -1;
  this->fields.state = 3;
  v42 = this;
  v43 = 0;
LABEL_32:
  PartyServantSelectMenu__Callback(v42, v43, v41, v40);
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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct PartyOrganizationListViewItem_o *v42; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  UnityEngine_GameObject_o *gameObject; // x26
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x7
  const MethodInfo *v53; // x2
  struct PartyOrganizationListViewItem_o *v54; // x8
  FollowerQuestInfomationDraw_o *questInfomationDraw; // x23
  int32_t InitPos_k__BackingField; // w22
  PartyServantSelectMenu_o *v57; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v59; // x20

  v18 = this;
  if ( (byte_4D2C5B4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (PartyServantSelectMenu_o *)sub_1C93AD4(&Method_PartyServantSelectMenu_EndOpen__);
    byte_4D2C5B4 = 1;
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v18->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        num,
        *(System_String_o **)&tutorialMode,
        (int32_t)setupInfo,
        (int64_t)questRestrictionInfo,
        (System_String_o *)callback);
      v18->fields.openCallbackFunc = openCallback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v18->fields.openCallbackFunc,
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
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->fields.member, (int32_t)Member, v30, v31, v32, v33, v34, v35);
        v42 = v18->fields.member;
        if ( v42 )
        {
          userServantEntity = v42->fields.userServantEntity;
          v18->fields.tutorialMode = tutorialMode;
          v18->fields.isSelectedSvt = userServantEntity != 0;
          v18->fields.callbackFunc = callback;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v18->fields.callbackFunc,
            (int32_t)callback,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          v18->fields.openCallbackFunc = openCallback;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v18->fields.openCallbackFunc,
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
                    TitleInfoControl__setBackBtnSprite_40620696((TitleInfoControl_o *)this, 1, 0, 0, 0);
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
                        PartyServantListViewManager__SetMode_35190912((PartyServantListViewManager_o *)this, 1, v53);
                        v54 = v18->fields.member;
                        if ( v54 )
                        {
                          questInfomationDraw = v18->fields.questInfomationDraw;
                          InitPos_k__BackingField = v54->fields._InitPos_k__BackingField;
                          if ( partyItem->fields.menuKind == 9 )
                          {
                            this = (PartyServantSelectMenu_o *)PartyListViewItem__GetWaveBattleEnemyClassIds(
                                                                 partyItem,
                                                                 1,
                                                                 0);
                            if ( !questInfomationDraw )
                              goto LABEL_26;
                            v57 = this;
                          }
                          else
                          {
                            if ( !questInfomationDraw )
                              goto LABEL_26;
                            v57 = 0;
                          }
                          FollowerQuestInfomationDraw__SetInfomation(
                            questInfomationDraw,
                            questRestrictionInfo,
                            InitPos_k__BackingField,
                            (System_Int32_array *)v57,
                            0);
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
                              v59 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                              System_Action___ctor(v59, (Il2CppObject *)v18, Method_PartyServantSelectMenu_EndOpen__, 0);
                              BaseMenu__Open((BaseMenu_o *)v18, v59, 0);
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
      sub_1C93D2C(this, baseDeckItemList);
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
      BYTE4(partyServantListViewManager->fields.extremelySmallSizeSeed) = 1;
      this->fields.canMoveCombine = 1;
      PartyServantSelectMenu__OpenServantDetail_35212992(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        openCallback,
        v7);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, 4, v9);
        return;
      }
    }
LABEL_7:
    sub_1C93D2C(partyServantListViewManager, userServantId);
  }
}


void PartyServantSelectMenu__OpenServantDetail_35212992(
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Int64_array *equipIdList; // x1
  BalanceConfig_c *v21; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t PartyListViewItemMenuKind_k__BackingField; // w22
  Il2CppObject *Instance; // x0
  UserServantEntity_o *v25; // x21
  bool v26; // zf
  CommonUI_o *v27; // x22
  ServantStatusDialog_ResultDelegate_o *v28; // x23
  ServantStatusDialog_EndIndividualityDelegate_o *v29; // x23
  Il2CppObject *v30; // x0
  UserServantEntity_o *v31; // x23
  System_Int64_array *v32; // x24
  CommonUI_o *v33; // x25
  ServantStatusDialog_ResultDelegate_o *v34; // x26
  struct PartyOrganizationListViewItem_o *member; // x8
  bool IsParty; // w0
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  bool v38; // w24
  bool v39; // w28
  System_Int64_array *v40; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v42; // w25
  struct PartyOrganizationListViewItem_o *v43; // x8
  Il2CppObject *Master_object; // x25
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q0
  UserServantGrandEntity_o *v47; // x25
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x24
  Il2CppObject *v49; // x0
  UserServantEntity_o *v50; // x25
  CommonUI_o *v51; // x26
  ServantStatusDialog_EndIndividualityDelegate_o *v52; // x27
  _BOOL4 isRestrictionActiveGrandBoard; // w27
  Il2CppObject *v54; // x0
  UserServantEntity_o *v55; // x23
  System_Int64_array *v56; // x24
  CommonUI_o *v57; // x26
  ServantStatusDialog_EndIndividualityDelegate_o *v58; // x25
  _BOOL4 canMoveCombine; // w20
  bool v60; // w6
  bool tempOverwriteTdLv; // [xsp+0h] [xbp-F0h]
  bool isChangeFriendShipSkill; // [xsp+10h] [xbp-E0h]
  int32_t TempOverwriteTreasureDeviceLv_k__BackingField; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+70h] [xbp-80h]

  if ( (byte_4D2C5C9 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndShowServantWithQuest__);
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndShowServant__);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OpenServantDetail__);
    sub_1C93AD4(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C5C9 = 1;
  }
  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_66;
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0);
  if ( isPlaySe )
  {
    v10 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C93AEC(Method_PartyServantSelectMenu_OpenServantDetail__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
  }
  this->fields.state = 5;
  if ( !partyServantListViewItem )
    goto LABEL_66;
  userServantEntity = partyServantListViewItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_66;
  v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v65 = v66;
  this->fields._SelectUserSvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                    &v65,
                                                    0);
  equipIdList = partyServantListViewItem->fields.equipIdList;
  if ( !equipIdList )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    equipIdList = (struct System_Int64_array *)sub_1C93B7C(
                                                 long___TypeInfo,
                                                 (unsigned int)v21->static_fields->SvtEquipMax);
  }
  this->fields._SelectServantEquipIds_k__BackingField = equipIdList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SelectServantEquipIds_k__BackingField,
    (int32_t)equipIdList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
        goto LABEL_66;
      partyServantListViewManager = (ListViewManager_o *)PartyOrganizationListViewItem__get_IsGrandRelatedRestriction(
                                                           (PartyOrganizationListViewItem_o *)partyServantListViewManager,
                                                           0);
      if ( ((unsigned __int8)partyServantListViewManager & 1) == 0 )
      {
LABEL_23:
        PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v25 = partyServantListViewItem->fields.userServantEntity;
        v26 = PartyListViewItemMenuKind_k__BackingField == 8;
        v27 = (CommonUI_o *)Instance;
        if ( v26 )
        {
          v28 = (ServantStatusDialog_ResultDelegate_o *)sub_1C93D20(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v28,
            (Il2CppObject *)this,
            Method_PartyServantSelectMenu_EndShowServantWithQuest__,
            0);
          if ( v27 )
          {
            CommonUI__OpenServantStatusDialog_31591412(v27, 0, v25, v28, this->fields.canMoveCombine, openCallback, 0);
            return;
          }
        }
        else
        {
          v29 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C93D20(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v29,
            (Il2CppObject *)this,
            Method_PartyServantSelectMenu_EndShowServant__,
            0);
          if ( v27 )
          {
            CommonUI__OpenServantStatusDialog_31591164(v27, 0, v25, v29, this->fields.canMoveCombine, openCallback, 0);
            return;
          }
        }
        goto LABEL_66;
      }
    }
  }
  if ( partyServantListViewItem->fields.isConvertOverwriteImage )
    questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
  else
    questRestrictionInfo = 0;
  if ( partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField == 8 )
  {
    v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v31 = partyServantListViewItem->fields.userServantEntity;
    v32 = partyServantListViewItem->fields.equipIdList;
    v33 = (CommonUI_o *)v30;
    v34 = (ServantStatusDialog_ResultDelegate_o *)sub_1C93D20(ServantStatusDialog_ResultDelegate_TypeInfo);
    ServantStatusDialog_ResultDelegate___ctor(
      v34,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServantWithQuest__,
      0);
    if ( v33 )
    {
      CommonUI__OpenServantStatusDialog_31591976(
        v33,
        0,
        v31,
        v32,
        questRestrictionInfo,
        v34,
        this->fields.canMoveCombine,
        openCallback,
        partyServantListViewItem->fields._TempOverwriteTreasureDeviceLv_k__BackingField,
        0);
      return;
    }
LABEL_66:
    sub_1C93D2C(partyServantListViewManager, partyServantListViewItem);
  }
  member = this->fields.member;
  if ( !member )
    goto LABEL_66;
  if ( !member->fields.isRestrictionGrandServant )
    goto LABEL_59;
  if ( !partyServantListViewItem->fields._IsGrandSameServant_k__BackingField )
  {
    partyServantListViewManager = (ListViewManager_o *)partyServantListViewItem->fields.userServantEntity;
    if ( !partyServantListViewManager )
      goto LABEL_66;
    partyServantListViewManager = (ListViewManager_o *)UserServantEntity__IsGrandServant(
                                                         (UserServantEntity_o *)partyServantListViewManager,
                                                         0);
    if ( ((unsigned __int8)partyServantListViewManager & 1) == 0 )
    {
      member = this->fields.member;
      if ( !member )
        goto LABEL_66;
LABEL_59:
      isRestrictionActiveGrandBoard = member->fields.isRestrictionActiveGrandBoard;
      v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v55 = partyServantListViewItem->fields.userServantEntity;
      v56 = partyServantListViewItem->fields.equipIdList;
      v57 = (CommonUI_o *)v54;
      v58 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C93D20(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v58,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0);
      canMoveCombine = this->fields.canMoveCombine;
      if ( isRestrictionActiveGrandBoard )
      {
        partyServantListViewManager = (ListViewManager_o *)partyServantListViewItem->fields.userServantEntity;
        if ( !partyServantListViewManager )
          goto LABEL_66;
        partyServantListViewManager = (ListViewManager_o *)UserServantEntity__IsGrandServant(
                                                             (UserServantEntity_o *)partyServantListViewManager,
                                                             0);
        if ( !v57 )
          goto LABEL_66;
        v60 = canMoveCombine;
        TempOverwriteTreasureDeviceLv_k__BackingField = partyServantListViewItem->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
        isChangeFriendShipSkill = partyServantListViewItem->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField;
        tempOverwriteTdLv = (unsigned __int8)partyServantListViewManager & 1;
      }
      else
      {
        if ( !v57 )
          goto LABEL_66;
        v60 = canMoveCombine;
        TempOverwriteTreasureDeviceLv_k__BackingField = partyServantListViewItem->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
        isChangeFriendShipSkill = 0;
        tempOverwriteTdLv = 0;
      }
      CommonUI__OpenServantStatusDialog_31591660(
        v57,
        0,
        v55,
        v56,
        questRestrictionInfo,
        v58,
        v60,
        openCallback,
        tempOverwriteTdLv,
        0,
        isChangeFriendShipSkill,
        TempOverwriteTreasureDeviceLv_k__BackingField,
        0);
      return;
    }
  }
  IsParty = PartyServantListViewItem__get_IsParty(partyServantListViewItem, 0);
  baseItem = partyServantListViewItem->fields.baseItem;
  v38 = IsParty;
  if ( baseItem )
    v39 = baseItem->fields._EquipFriendShipSkillChange_k__BackingField > 0;
  else
    v39 = 0;
  partyServantListViewManager = (ListViewManager_o *)this->fields.member;
  if ( !partyServantListViewManager )
    goto LABEL_66;
  partyServantListViewManager = (ListViewManager_o *)PartyOrganizationListViewItem__GetEquipList(
                                                       (PartyOrganizationListViewItem_o *)partyServantListViewManager,
                                                       0);
  if ( !this->fields.member )
    goto LABEL_66;
  v40 = (System_Int64_array *)partyServantListViewManager;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this->fields.member, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(SvtId, 0);
  partyServantListViewManager = (ListViewManager_o *)PartyServantListViewItem__get_SvtId(partyServantListViewItem, 0);
  if ( v42 != (_DWORD)partyServantListViewManager )
    goto LABEL_48;
  v43 = this->fields.member;
  if ( !v43 )
    goto LABEL_66;
  if ( v43->fields.isFollower )
  {
LABEL_48:
    v40 = partyServantListViewItem->fields.equipIdList;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    partyServantListViewManager = (ListViewManager_o *)PartyServantListViewItem__get_SvtId(partyServantListViewItem, 0);
    if ( !Master_object )
      goto LABEL_66;
    partyServantListViewManager = (ListViewManager_o *)UserServantGrandMaster__GetEntityFromSvtId(
                                                         (UserServantGrandMaster_o *)Master_object,
                                                         (int32_t)partyServantListViewManager,
                                                         0);
    if ( partyServantListViewManager )
    {
      v45 = partyServantListViewItem->fields.userServantEntity;
      if ( !v45 )
        goto LABEL_66;
      v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
      v47 = (UserServantGrandEntity_o *)partyServantListViewManager;
      dropObjectList = partyServantListViewManager->fields.dropObjectList;
      *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v66.fields.fakeValue = v46;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v64 = v66;
      v38 = dropObjectList == (struct System_Collections_Generic_List_ListViewDropObject__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                                                                &v64,
                                                                                                0);
      v39 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v47, 0) > 0;
    }
  }
  v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v50 = partyServantListViewItem->fields.userServantEntity;
  v51 = (CommonUI_o *)v49;
  v52 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C93D20(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
  ServantStatusDialog_EndIndividualityDelegate___ctor(
    v52,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndShowServant__,
    0);
  if ( !v51 )
    goto LABEL_66;
  CommonUI__OpenServantStatusDialog_31591660(
    v51,
    0,
    v50,
    v40,
    questRestrictionInfo,
    v52,
    this->fields.canMoveCombine,
    openCallback,
    v38,
    !v38,
    v39,
    partyServantListViewItem->fields._TempOverwriteTreasureDeviceLv_k__BackingField,
    0);
}


void PartyServantSelectMenu__Open_35205068(
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
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v40; // x1
  UnityEngine_GameObject_o *v41; // x25
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x6
  const MethodInfo *v44; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v46; // x20

  if ( (byte_4D2C5B5 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndOpen__);
    byte_4D2C5B5 = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v18 = 1 << state;
    if ( (v18 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        num,
        tutorialMode,
        (System_String_o *)setupInfo,
        (int32_t)questRestrictionInfo,
        (int64_t)callback,
        (System_String_o *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.member,
        0,
        num,
        tutorialMode,
        (System_String_o *)setupInfo,
        (int32_t)questRestrictionInfo,
        (int64_t)callback,
        (System_String_o *)openCallback);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      this->fields.openCallbackFunc = openCallback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
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
      TitleInfoControl__setBackBtnSprite_40620696((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_35185360(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v43);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_35190912((PartyServantListViewManager_o *)gameObject, 1, v44),
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
        sub_1C93D2C(gameObject, v40);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
      this->fields.state = 1;
      v46 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userServantEntity; // x19
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

  if ( (byte_4D2C5C7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C5C7 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userServantEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v7->fields.writeMasterDataThread;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v43, 0);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                      userServantEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userServantEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          userServantEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userServantEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          userServantEntity->fields.portraitLimitCount,
          0);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                  userServantEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                       userServantEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          userServantEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C93D2C(limitCountSupport, v6);
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
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w1

  if ( (byte_4D2C5B9 & 1) == 0 )
  {
    sub_1C93AD4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1C93AD4(&StringLiteral_17792/*"button_push_reg"*/);
    sub_1C93AD4(&StringLiteral_17793/*"button_push_unreg"*/);
    sub_1C93AD4(&StringLiteral_17778/*"button_allchoice_reg"*/);
    sub_1C93AD4(&StringLiteral_17781/*"button_alllock_unreg"*/);
    sub_1C93AD4(&StringLiteral_10379/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/);
    sub_1C93AD4(&StringLiteral_10382/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/);
    sub_1C93AD4(&StringLiteral_17794/*"button_select_reg"*/);
    sub_1C93AD4(&StringLiteral_10380/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/);
    sub_1C93AD4(&StringLiteral_10381/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/);
    sub_1C93AD4(&StringLiteral_17795/*"button_select_unreg"*/);
    sub_1C93AD4(&StringLiteral_17780/*"button_alllock_reg"*/);
    sub_1C93AD4(&StringLiteral_17779/*"button_allchoice_unreg"*/);
    byte_4D2C5B9 = 1;
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
    v9 = &StringLiteral_17794/*"button_select_reg"*/;
    if ( modeKind )
      v9 = &StringLiteral_17795/*"button_select_unreg"*/;
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
    v14 = &StringLiteral_17780/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v14 = &StringLiteral_17781/*"button_alllock_unreg"*/;
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
    v17 = &StringLiteral_17778/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v17 = &StringLiteral_17779/*"button_allchoice_unreg"*/;
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
      v21 = &StringLiteral_17792/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v21 = &StringLiteral_17793/*"button_push_unreg"*/;
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
        v25 = &StringLiteral_10382/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_50;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_10380/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_50;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_10379/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_50;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_10381/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
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
      v36 = 1;
      goto LABEL_58;
    }
LABEL_59:
    sub_1C93D2C(statusTabButton, *(_QWORD *)&modeKind);
  }
  if ( !statusTabButton )
    goto LABEL_59;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)statusTabButton,
    modeKind,
    (const MethodInfo *)isInit);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  v28 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C93D20(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v29);
  if ( !partyServantListViewManager )
    goto LABEL_59;
  partyServantListViewManager->fields.callbackFunc = v28;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = 2;
  statusTabButton = (UnityEngine_Behaviour_o *)partyServantListViewManager;
LABEL_58:
  PartyServantListViewManager__SetMode_35190912(
    (PartyServantListViewManager_o *)statusTabButton,
    v36,
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  System_Int64_array *v26; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D2C5C0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_EndStatusSync__);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2C5C0 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v26 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapChoiceList(partyServantListViewManager, &choiceList, &v26, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v25,
                                                                       (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v16 = v26;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C93D2C(partyServantListViewManager, callback);
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v14,
                                                                       (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v16 = unlockList;
        v15 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)partyServantListViewManager,
          v15,
          v16,
          0,
          v17,
          v18,
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

  if ( (byte_4D2C5B2 & 1) == 0 )
  {
    sub_1C93AD4(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4D2C5B2 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1C940C8(v8);
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

  if ( (byte_4D2C5B3 & 1) == 0 )
  {
    sub_1C93AD4(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4D2C5B3 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1C940C8(v8);
  PartyServantSelectMenu__set_SelectUserSvtId(v11, v12, v13);
}


void PartyServantSelectMenu__set_SelectServantEquipIds(
        PartyServantSelectMenu_o *this,
        System_Int64_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SelectServantEquipIds_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SelectServantEquipIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC3300;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC32A8;
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
  if ( (byte_4D2C5CB & 1) == 0 )
  {
    sub_1C93AD4(&PartyServantSelectMenu_ResultKind_TypeInfo);
    byte_4D2C5CB = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12);
  v11[1] = item;
  return sub_1C93A88(this, v11, callback, object);
}


void PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC335C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC3314;
}


System_IAsyncResult_o *PartyServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4D2C5CC & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2C5CC = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct PartyServantSelectMenu_o *_4__this; // x20
  struct PartyServantListViewManager_o *partyServantListViewManager; // x19
  PartyServantListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_4D2C5CD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__1__);
    byte_4D2C5CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu___c__DisplayClass69_0__OnSelectItem_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31581328(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_1C93D2C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  partyServantListViewManager = _4__this->fields.partyServantListViewManager;
  v17 = (PartyServantListViewManager_CallbackFunc_o *)sub_1C93D20(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v18);
  if ( !partyServantListViewManager )
    goto LABEL_12;
  partyServantListViewManager->fields.callbackFunc = v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  PartyServantListViewManager__SetMode_35190912(partyServantListViewManager, 2, v25);
}


void PartyServantSelectMenu___c__DisplayClass69_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  PartyServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}