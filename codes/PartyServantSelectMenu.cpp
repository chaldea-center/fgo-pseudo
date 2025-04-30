void __fastcall PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A4A322 & 1) == 0 )
  {
    sub_1B863B8(&BaseMenu_TypeInfo, method);
    byte_4A4A322 = 1;
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
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct PartyServantSelectMenu_CallbackFunc_o *v6; // x22
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  __int64 v10; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *Item; // x2

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B8635C(p_callbackFunc, 0, n, method);
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1B86614(0LL, v10);
      Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, 0LL);
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
    sub_1B86614(0LL, method);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_32983784(this, 0LL, v2);
}


void __fastcall PartyServantSelectMenu__Close_32983784(
        PartyServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_4A4A310 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_PartyServantSelectMenu_EndClose__, v6);
    byte_4A4A310 = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1B86614(0LL, v7);
  PartyServantListViewManager__SetMode_32969368(partyServantListViewManager, 1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v9, v10);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0LL);
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

  if ( (byte_4A4A320 & 1) == 0 )
  {
    sub_1B863B8(&PartyServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    byte_4A4A320 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, 0LL),
        v6 = this->fields.partyServantListViewManager,
        v7 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B86604(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v8),
        !v6) )
  {
    sub_1B86614(partyServantListViewManager, result);
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
      sub_1B86614(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32969368(partyServantListViewManager, 3, 0LL);
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
      sub_1B86614(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32969368(partyServantListViewManager, 3, 0LL);
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
      sub_1B86614(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32969368(partyServantListViewManager, 3, 0LL);
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
      sub_1B86614(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32969368(partyServantListViewManager, 3, 0LL);
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
      sub_1B86614(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32969368(partyServantListViewManager, 3, 0LL);
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
      sub_1B86614(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32969368(partyServantListViewManager, 3, 0LL);
  }
  PartyServantSelectMenu__SetTabKind(this, 0, 0, v3);
}


void __fastcall PartyServantSelectMenu__EndClose(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  PartyServantSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4A4A31C & 1) == 0 )
  {
    sub_1B863B8(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnSelectItem__, v3);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    byte_4A4A31C = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(
          (PartyServantListViewManager_o *)partyServantListViewManager,
          this->fields.modeKind,
          0LL),
        v6 = this->fields.partyServantListViewManager,
        v7 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B86604(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v8),
        !v6)
    || (PartyServantListViewManager__SetMode(v6, 2, v7, 0LL),
        (partyServantListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
    sub_1B86614(partyServantListViewManager, method);
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

  if ( (byte_4A4A31D & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4A4A31D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialSelect; // w2
  const MethodInfo *v5; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_1B86614(0LL, method);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v16; // x21
  float v17; // s0
  float v18; // s3
  float v19; // s4
  int v20; // s1
  int v21; // s5
  int v22; // s6
  int32_t modeKind; // w1
  PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v25; // x21
  const MethodInfo *v26; // x3
  CGThumbnailListItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v28; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4A4A30E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&PartyServantListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1B863B8(&FSUtility_TypeInfo, v5);
    sub_1B863B8(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__, v6);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnSelectItem__, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4A4A30E = 1;
  }
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v25 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B86604(PartyServantListViewManager_CallbackFunc_TypeInfo);
    PartyServantListViewManager_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      v26);
    if ( partyServantListViewManager )
    {
      PartyServantListViewManager__SetMode(partyServantListViewManager, 2, v25, 0LL);
      goto LABEL_17;
    }
LABEL_20:
    sub_1B86614(tutorialMaskBase, v10);
  }
  v9 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v9, 0, v2);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  PartyServantListViewManager__SetMode_32969368(tutorialMaskBase, 1, 0LL);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_17;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
    goto LABEL_20;
  v17 = -367.0;
  v18 = -450.0;
  if ( !IsUnderVista )
    v18 = -442.0;
  if ( IsUnderVista )
    v17 = -375.0;
  v19 = -30.0;
  v20 = 1120403456;
  v21 = 1125515264;
  v22 = 1127481344;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v17,
    0.0,
    *(UnityEngine_Rect_o *)&v18,
    v16,
    0LL);
LABEL_17:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (CGThumbnailListItem_o *)&this->fields.openCallbackFunc;
  v28 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1B8635C(p_openCallbackFunc, 0, v12, v13);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v28->fields.m_target)(
      v28->fields.original_method_info,
      *(_QWORD *)&v28->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *statusTabButton; // x0
  PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4A4A30F & 1) == 0 )
  {
    sub_1B863B8(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnSelectItem__, v3);
    byte_4A4A30F = 1;
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
        v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B86604(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v7),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_1B86614(statusTabButton, method);
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

  if ( (byte_4A4A31A & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&Method_PartyServantSelectMenu_EndCloseShowServant__, v7);
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4A4A31A = 1;
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
          PartyServantListViewManager__SetMode_32969368(partyServantListViewManager, v11, 0LL);
          goto LABEL_19;
        }
LABEL_17:
        v11 = 3;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1B86614(partyServantListViewManager, isDecide);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, isDecide);
    byte_4A4A1E0 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A4A31B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4A4A31B = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_1B86614(v13, v14);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
  }
  PartyServantSelectMenu__EndShowServant(this, isDecide, isNeedSort, *(const MethodInfo **)&questId);
}


void __fastcall PartyServantSelectMenu__EndStatusSync(
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
    p_requedstCallback->klass = 0LL;
    sub_1B8635C(p_requedstCallback, 0, (int32_t)method, v3);
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
    sub_1B86614(0LL, method);
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

  if ( (byte_4A4A313 & 1) == 0 )
  {
    sub_1B863B8(&Method_PartyServantSelectMenu_EndClickCancel__, method);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnClickCancel__, v3);
    sub_1B863B8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4A4A313 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1B86614(0LL, method);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    v6 = Method_PartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B8639C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
    v8 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4A4A312 & 1) == 0 )
  {
    sub_1B863B8(&Method_PartyServantSelectMenu_EndClickDecide__, method);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnClickDecide__, v3);
    sub_1B863B8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4A4A312 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyServantSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4A4A31E & 1) == 0 )
  {
    sub_1B863B8(&Method_PartyServantSelectMenu_OnClickScaleChange__, method);
    byte_4A4A31E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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
      sub_1B86614(partyServantListViewManager, v5);
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

  if ( (byte_4A4A316 & 1) == 0 )
  {
    sub_1B863B8(&Method_PartyServantSelectMenu_EndClickTabChoice__, method);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnClickTabChoice__, v3);
    sub_1B863B8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4A4A316 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          v10);
        PartyServantSelectMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4A4A315 & 1) == 0 )
  {
    sub_1B863B8(&Method_PartyServantSelectMenu_EndClickTabLock__, method);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnClickTabLock__, v3);
    sub_1B863B8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4A4A315 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          v10);
        PartyServantSelectMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4A4A317 & 1) == 0 )
  {
    sub_1B863B8(&Method_PartyServantSelectMenu_EndClickTabPush__, method);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnClickTabPush__, v3);
    sub_1B863B8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4A4A317 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PartyServantSelectMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4A4A314 & 1) == 0 )
  {
    sub_1B863B8(&Method_PartyServantSelectMenu_EndClickTabStatus__, method);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnClickTabStatus__, v3);
    sub_1B863B8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4A4A314 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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
  __int64 partyServantListViewManager; // x0
  PartyServantListViewItem_o *v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t state; // w8
  PartyServantListViewItem_o *Item; // x1
  int32_t tutorialMode; // w8
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v44; // x21
  PartyServantListViewItem_o **v45; // x21
  const MethodInfo *v46; // x4
  PartyServantListViewItem_o *v47; // x8
  bool v48; // w20
  int32_t modeKind; // w8
  PartyServantListViewManager_o *v50; // x20
  PartyServantListViewManager_CallbackFunc_o *v51; // x0
  const MethodInfo *v52; // x3
  intptr_t v53; // w2
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  PartyServantSelectMenu_o *v58; // x0
  int32_t v59; // w1
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  _BOOL4 isEnabled; // w23
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  const MethodInfo *v67; // x2
  int64_t v68; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v70; // q1
  _QWORD *v71; // x0
  System_Reflection_MethodBase_o *v72; // x0
  _QWORD *v73; // x0
  PartyServantListViewManager_CallbackFunc_o *v74; // x21
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v76; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v79; // x0
  Il2CppObject v80; // q0
  PartyServantListViewManager_o *v81; // x19
  ServantEntity_o *v82; // x27
  int32_t v83; // w28
  int32_t rarityId; // w26
  Il2CppObject *Master_object; // x23
  System_String_o *v86; // x19
  System_String_o *v87; // x22
  __int64 v88; // x24
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  __int64 v91; // x28
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  __int64 v94; // x27
  int32_t v95; // w0
  Il2CppClass *v96; // x8
  int32_t v97; // w25
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  __int64 v100; // x25
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  __int64 v103; // x25
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  __int64 v106; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v107; // x8
  int32_t v108; // w21
  int32_t v109; // w0
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  __int64 v112; // x21
  System_String_o *v113; // x21
  System_String_o *v114; // x22
  System_String_o *v115; // x23
  Il2CppObject *v116; // x24
  CommonConfirmDialog_ClickDelegate_o *v117; // x25
  __int64 v118; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+80h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  if ( (byte_4A4A319 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&BalanceConfig_TypeInfo, v7);
    sub_1B863B8(&PartyServantListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B863B8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_1B863B8(&DataManager_TypeInfo, v13);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1B863B8(&LocalizationManager_TypeInfo, v16);
    sub_1B863B8(&object___TypeInfo, v17);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_1B863B8(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__, v20);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnSelectItem__, v21);
    sub_1B863B8(&Rarity_TypeInfo, v22);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B863B8(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__, v25);
    sub_1B863B8(&PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo, v26);
    sub_1B863B8(&StringLiteral_11744/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v27);
    sub_1B863B8(&StringLiteral_11742/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v28);
    sub_1B863B8(&StringLiteral_11743/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v29);
    sub_1B863B8(&StringLiteral_11745/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v30);
    byte_4A4A319 = 1;
  }
  v31 = sub_1B86604(PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_126;
  *(_QWORD *)(v31 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v31 + 16), (int32_t)this, v34, v35);
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
      v41 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnSelectItem__);
    v42 = (System_Reflection_MethodBase_o *)sub_1B8639C(v41, v41[4]);
    OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v44 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v44, 0LL);
      return;
    }
    goto LABEL_126;
  }
  if ( state != 2 )
    return;
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    partyServantListViewManager = (__int64)this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_126;
    Item = PartyServantListViewManager__GetItem((PartyServantListViewManager_o *)partyServantListViewManager, n, 0LL);
  }
  *(_QWORD *)(v31 + 24) = Item;
  v45 = (PartyServantListViewItem_o **)(v31 + 24);
  sub_1B8635C((CGThumbnailListItem_o *)(v31 + 24), (int32_t)Item, v36, v37);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      this->fields.state = 2;
      v50 = this->fields.partyServantListViewManager;
      v51 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B86604(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v53 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    else
    {
      v33 = *v45;
      if ( !*v45 )
        goto LABEL_126;
      if ( v33->fields.userServantEntity )
      {
        PartyServantSelectMenu__OpenServantDetail_32990724(this, v33, 1, 0LL, v46);
        return;
      }
      v71 = Method_PartyServantSelectMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v71 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnSelectItem__);
      v72 = (System_Reflection_MethodBase_o *)sub_1B8639C(v71, v71[4]);
LABEL_67:
      OverwriteAssetSoundName__PlaySystemSe(v72, 2, 0, 0LL);
      v50 = this->fields.partyServantListViewManager;
      v51 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B86604(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v53 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    goto LABEL_68;
  }
  if ( kind == 2 )
  {
    switch ( this->fields.modeKind )
    {
      case 0:
        partyServantListViewManager = (__int64)*v45;
        if ( !*v45 )
          goto LABEL_126;
        if ( !*(_BYTE *)(partyServantListViewManager + 216) && *(_BYTE *)(partyServantListViewManager + 249) )
          goto LABEL_62;
        if ( *(_BYTE *)(partyServantListViewManager + 226) )
          goto LABEL_62;
        if ( *(_BYTE *)(partyServantListViewManager + 227) )
          goto LABEL_62;
        partyServantListViewManager = PartyServantListViewItem__get_IsRestricted(
                                        (PartyServantListViewItem_o *)partyServantListViewManager,
                                        0LL);
        if ( (partyServantListViewManager & 1) != 0 )
          goto LABEL_62;
        v47 = *v45;
        if ( !*v45 )
          goto LABEL_126;
        if ( v47->fields.isBase )
        {
          v48 = 1;
        }
        else if ( v47->fields.isLeave
               || (v47->fields.fatigureTime & 0x8000000000000000LL) == 0
               || v47->fields._IsAllOutBattle_k__BackingField
               || v47->fields._IsDataLost_k__BackingField
               || v47->fields._TimesToRestart_k__BackingField > 0 )
        {
LABEL_62:
          v48 = 0;
        }
        else
        {
          v48 = !v47->fields._IsClearedWave_k__BackingField;
        }
        v73 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v73 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnSelectItem__);
        v72 = (System_Reflection_MethodBase_o *)sub_1B8639C(v73, v73[4]);
        if ( !v48 )
          goto LABEL_67;
        OverwriteAssetSoundName__PlaySystemSe(v72, 0, 0, 0LL);
        v59 = 1;
        v58 = this;
        v57 = n;
        this->fields.state = 3;
        goto LABEL_32;
      case 1:
        v60 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v60 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnSelectItem__);
        v61 = (System_Reflection_MethodBase_o *)sub_1B8639C(v60, v60[4]);
        OverwriteAssetSoundName__PlaySystemSe(v61, 11, 0, 0LL);
        partyServantListViewManager = (__int64)*v45;
        if ( !*v45 )
          goto LABEL_126;
        PartyServantListViewItem__SwapLock((PartyServantListViewItem_o *)partyServantListViewManager, 0LL);
        goto LABEL_44;
      case 2:
        v62 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v62 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnSelectItem__);
        v63 = (System_Reflection_MethodBase_o *)sub_1B8639C(v62, v62[4]);
        OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0, 0LL);
        partyServantListViewManager = (__int64)*v45;
        if ( !*v45 )
          goto LABEL_126;
        PartyServantListViewItem__SwapChoice((PartyServantListViewItem_o *)partyServantListViewManager, 0LL);
LABEL_44:
        v50 = this->fields.partyServantListViewManager;
        this->fields.state = 2;
        goto LABEL_45;
      case 3:
        if ( !*v45 )
          goto LABEL_126;
        isEnabled = (*v45)->fields.isEnabled;
        v65 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v65 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnSelectItem__);
        v66 = (System_Reflection_MethodBase_o *)sub_1B8639C(v65, v65[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v66, 0, 0, 0LL);
          partyServantListViewManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          v68 = *(_QWORD *)(partyServantListViewManager + 120);
          if ( !v68 )
          {
LABEL_57:
            PartyServantSelectMenu__PushRequest(this, *v45, v67);
            return;
          }
          if ( !*v45 )
            goto LABEL_126;
          userServantEntity = (*v45)->fields.userServantEntity;
          if ( !userServantEntity )
            goto LABEL_126;
          v70 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v121.fields.fakeValue = v70;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v120 = v121;
          if ( v68 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v120, 0LL) )
            goto LABEL_57;
          partyServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          partyServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager,
                     v68,
                     (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          partyServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_126;
          partyServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_126;
          v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v122.fields.currentCryptoKey = klass;
          *(_QWORD *)&v122.fields.fakeValue = monitor;
          partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v122, 0LL);
          if ( !v76 )
            goto LABEL_126;
          v79 = DataMasterBase_object__object__int___GetEntity(
                  v76,
                  partyServantListViewManager,
                  (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v80 = Entity[2];
          v81 = this->fields.partyServantListViewManager;
          v82 = (ServantEntity_o *)v79;
          *(Il2CppObject *)&v121.fields.currentCryptoKey = Entity[1];
          *(Il2CppObject *)&v121.fields.fakeValue = v80;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v119 = v121;
          partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v119, 0LL);
          if ( !v81 )
            goto LABEL_126;
          partyServantListViewManager = (__int64)PartyServantListViewManager__GetItemByUserServantID(
                                                   v81,
                                                   partyServantListViewManager,
                                                   0LL);
          if ( !partyServantListViewManager || !*v45 )
            goto LABEL_126;
          v83 = *(_DWORD *)(partyServantListViewManager + 172);
          rarityId = (*v45)->fields.rarityId;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11745/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v87 = LocalizationManager__Get((System_String_o *)StringLiteral_11744/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v88 = sub_1B86460(object___TypeInfo, 6LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          partyServantListViewManager = (__int64)Rarity__getRarityType(v83, 0LL);
          if ( !v88 )
            goto LABEL_126;
          v91 = partyServantListViewManager;
          if ( !partyServantListViewManager
            || (partyServantListViewManager = sub_1B864F4(
                                                partyServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v88 + 24) )
              goto LABEL_127;
            *(_QWORD *)(v88 + 32) = v91;
            sub_1B8635C((CGThumbnailListItem_o *)(v88 + 32), v91, v89, v90);
            if ( !v82 )
              goto LABEL_126;
            partyServantListViewManager = (__int64)ServantEntity__getClassName(v82, 0LL);
            v94 = partyServantListViewManager;
            if ( !partyServantListViewManager
              || (partyServantListViewManager = sub_1B864F4(
                                                  partyServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v88 + 24) <= 1u )
                goto LABEL_127;
              *(_QWORD *)(v88 + 40) = v94;
              sub_1B8635C((CGThumbnailListItem_o *)(v88 + 40), v94, v92, v93);
              v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                      0LL);
              v96 = Entity[6].klass;
              *(_QWORD *)&v123.fields.fakeValue = Entity[6].monitor;
              v97 = v95;
              *(_QWORD *)&v123.fields.currentCryptoKey = v96;
              partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                              v123,
                                              0LL);
              if ( !Master_object )
                goto LABEL_126;
              partyServantListViewManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                       (ServantLimitImageMaster_o *)Master_object,
                                                       v97,
                                                       partyServantListViewManager,
                                                       1,
                                                       0LL);
              v100 = partyServantListViewManager;
              if ( !partyServantListViewManager
                || (partyServantListViewManager = sub_1B864F4(
                                                    partyServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v88 + 24) <= 2u )
                  goto LABEL_127;
                *(_QWORD *)(v88 + 48) = v100;
                sub_1B8635C((CGThumbnailListItem_o *)(v88 + 48), v100, v98, v99);
                partyServantListViewManager = (__int64)Rarity__getRarityType(rarityId, 0LL);
                v103 = partyServantListViewManager;
                if ( !partyServantListViewManager
                  || (partyServantListViewManager = sub_1B864F4(
                                                      partyServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v88 + 24) <= 3u )
                    goto LABEL_127;
                  *(_QWORD *)(v88 + 56) = v103;
                  sub_1B8635C((CGThumbnailListItem_o *)(v88 + 56), v103, v101, v102);
                  if ( !*v45 )
                    goto LABEL_126;
                  partyServantListViewManager = (__int64)(*v45)->fields.servantEntity;
                  if ( !partyServantListViewManager )
                    goto LABEL_126;
                  partyServantListViewManager = (__int64)ServantEntity__getClassName(
                                                           (ServantEntity_o *)partyServantListViewManager,
                                                           0LL);
                  v106 = partyServantListViewManager;
                  if ( !partyServantListViewManager
                    || (partyServantListViewManager = sub_1B864F4(
                                                        partyServantListViewManager,
                                                        *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v88 + 24) <= 4u )
                      goto LABEL_127;
                    *(_QWORD *)(v88 + 64) = v106;
                    sub_1B8635C((CGThumbnailListItem_o *)(v88 + 64), v106, v104, v105);
                    partyServantListViewManager = (__int64)*v45;
                    if ( !*v45 )
                      goto LABEL_126;
                    partyServantListViewManager = PartyServantListViewItem__get_SvtId(
                                                    (PartyServantListViewItem_o *)partyServantListViewManager,
                                                    0LL);
                    if ( !*v45 )
                      goto LABEL_126;
                    v107 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v45)->fields.userServantEntity;
                    if ( !v107 )
                      goto LABEL_126;
                    v108 = partyServantListViewManager;
                    v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v107[6], 0LL);
                    partyServantListViewManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                             (ServantLimitImageMaster_o *)Master_object,
                                                             v108,
                                                             v109,
                                                             1,
                                                             0LL);
                    v112 = partyServantListViewManager;
                    if ( !partyServantListViewManager
                      || (partyServantListViewManager = sub_1B864F4(
                                                          partyServantListViewManager,
                                                          *(_QWORD *)(*(_QWORD *)v88 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v88 + 24) > 5u )
                      {
                        *(_QWORD *)(v88 + 72) = v112;
                        sub_1B8635C((CGThumbnailListItem_o *)(v88 + 72), v112, v110, v111);
                        v113 = System_String__Format_61686604(v87, (System_Object_array *)v88, 0LL);
                        v114 = LocalizationManager__Get((System_String_o *)StringLiteral_11743/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v115 = LocalizationManager__Get((System_String_o *)StringLiteral_11742/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        v116 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v117 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B86604(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v117,
                          (Il2CppObject *)v31,
                          Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__,
                          0LL);
                        partyServantListViewManager = (__int64)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          partyServantListViewManager = (__int64)BalanceConfig_TypeInfo;
                        }
                        if ( v116 )
                        {
                          CommonUI__OpenConfirmDialog_30483432(
                            (CommonUI_o *)v116,
                            v86,
                            v113,
                            v114,
                            v115,
                            v117,
                            *(_DWORD *)(*(_QWORD *)(partyServantListViewManager + 184) + 488LL),
                            *(_DWORD *)(*(_QWORD *)(partyServantListViewManager + 184) + 500LL),
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
LABEL_126:
                        sub_1B86614(partyServantListViewManager, v33);
                      }
LABEL_127:
                      sub_1B8661C(partyServantListViewManager, v33);
                    }
                  }
                }
              }
            }
          }
          v118 = sub_1B86638();
          sub_1B864E0(v118, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v66, 2, 0, 0LL);
        this->fields.state = 2;
        v50 = this->fields.partyServantListViewManager;
LABEL_45:
        v51 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B86604(PartyServantListViewManager_CallbackFunc_TypeInfo);
        v53 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
        break;
      default:
        return;
    }
LABEL_68:
    v74 = v51;
    PartyServantListViewManager_CallbackFunc___ctor(v51, (Il2CppObject *)this, v53, v52);
    if ( v50 )
    {
      PartyServantListViewManager__SetMode(v50, 2, v74, 0LL);
      return;
    }
    goto LABEL_126;
  }
  v54 = Method_PartyServantSelectMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
    v54 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OnSelectItem__);
  v55 = (System_Reflection_MethodBase_o *)sub_1B8639C(v54, v54[4]);
  OverwriteAssetSoundName__PlaySystemSe(v55, 1, 0, 0LL);
  v57 = -1;
  this->fields.state = 3;
  v58 = this;
  v59 = 0;
LABEL_32:
  PartyServantSelectMenu__Callback(v58, v59, v57, v56);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct TitleInfoControl_o *titleInfo; // x8
  PartyServantSelectMenu_o *v29; // x26
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v33; // x3
  FollowerQuestInfomationDraw_o *questInfomationDraw; // x23
  int32_t closeTransform_high; // w22
  PartyServantSelectMenu_o *v36; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v38; // x20

  v18 = this;
  if ( (byte_4A4A30C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, baseDeckItemList);
    this = (PartyServantSelectMenu_o *)sub_1B863B8(&Method_PartyServantSelectMenu_EndOpen__, v19);
    byte_4A4A30C = 1;
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
      sub_1B8635C(
        (CGThumbnailListItem_o *)&v18->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        *(const MethodInfo **)&num);
      v18->fields.openCallbackFunc = openCallback;
      sub_1B8635C((CGThumbnailListItem_o *)&v18->fields.openCallbackFunc, (int32_t)openCallback, v22, v23);
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
          sub_1B8635C((CGThumbnailListItem_o *)&v18->fields.callbackFunc, (int32_t)callback, v26, v27);
          v18->fields.openCallbackFunc = openCallback;
          sub_1B8635C((CGThumbnailListItem_o *)&v18->fields.openCallbackFunc, (int32_t)openCallback, v30, v31);
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
                  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 71, 0LL);
                  this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                  if ( this )
                  {
                    TitleInfoControl__setBackBtnSprite_38089748((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
                        PartyServantListViewManager__SetMode_32969368((PartyServantListViewManager_o *)this, 1, 0LL);
                        questInfomationDraw = v18->fields.questInfomationDraw;
                        closeTransform_high = HIDWORD(v29[1].fields.closeTransform);
                        if ( partyItem->fields.menuKind == 9 )
                        {
                          this = (PartyServantSelectMenu_o *)PartyListViewItem__GetWaveBattleEnemyClassIds(
                                                               partyItem,
                                                               1,
                                                               0LL);
                          if ( !questInfomationDraw )
                            goto LABEL_25;
                          v36 = this;
                        }
                        else
                        {
                          if ( !questInfomationDraw )
                            goto LABEL_25;
                          v36 = 0LL;
                        }
                        FollowerQuestInfomationDraw__SetInfomation(
                          questInfomationDraw,
                          questRestrictionInfo,
                          closeTransform_high,
                          (System_Int32_array *)v36,
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
                            v38 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
      sub_1B86614(this, baseDeckItemList);
    }
  }
}


void __fastcall PartyServantSelectMenu__OpenServantDetail(
        PartyServantSelectMenu_o *this,
        int64_t userServantId,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v7; // x4
  struct PartyServantListViewManager_o *v8; // x8

  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_7;
  partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetPartyServantListViewItem(
                                                                   partyServantListViewManager,
                                                                   userServantId,
                                                                   0LL);
  if ( partyServantListViewManager )
  {
    v8 = this->fields.partyServantListViewManager;
    if ( v8 )
    {
      v8->fields._IsFocus_k__BackingField = 1;
      BYTE4(partyServantListViewManager->fields.extremelySmallSizeSeed) = 1;
      this->fields.canMoveCombine = 1;
      PartyServantSelectMenu__OpenServantDetail_32990724(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        openCallback,
        v7);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_32969368(partyServantListViewManager, 4, 0LL);
        return;
      }
    }
LABEL_7:
    sub_1B86614(partyServantListViewManager, userServantId);
  }
}


void __fastcall PartyServantSelectMenu__OpenServantDetail_32990724(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *partyServantListViewItem,
        bool isPlaySe,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v19; // q1
  int64_t v20; // x8
  struct System_Int64_array *equipIdList; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t PartyListViewItemMenuKind_k__BackingField; // w24
  Il2CppObject *Instance; // x0
  System_Int64_array *v25; // x21
  UserServantEntity_o *v26; // x23
  bool v27; // zf
  CommonUI_o *v28; // x24
  ServantStatusDialog_ResultDelegate_o *v29; // x25
  ServantStatusDialog_EndIndividualityDelegate_o *v30; // x25
  int32_t v31; // w22
  Il2CppObject *v32; // x0
  UserServantEntity_o *v33; // x21
  CommonUI_o *v34; // x22
  ServantStatusDialog_ResultDelegate_o *v35; // x23
  ServantStatusDialog_EndIndividualityDelegate_o *v36; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-60h]

  if ( (byte_4A4A321 & 1) == 0 )
  {
    sub_1B863B8(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, partyServantListViewItem);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B863B8(&Method_PartyServantSelectMenu_EndShowServantWithQuest__, v10);
    sub_1B863B8(&Method_PartyServantSelectMenu_EndShowServant__, v11);
    sub_1B863B8(&Method_PartyServantSelectMenu_OpenServantDetail__, v12);
    sub_1B863B8(&ServantStatusDialog_ResultDelegate_TypeInfo, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4A4A321 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_34;
  ListViewManager__ClearScrollBarValue((ListViewManager_o *)partyServantListViewManager, 1, 0LL);
  if ( isPlaySe )
  {
    v16 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1B863D0(Method_PartyServantSelectMenu_OpenServantDetail__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B8639C(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
  }
  this->fields.state = 5;
  if ( !partyServantListViewItem )
    goto LABEL_34;
  userServantEntity = partyServantListViewItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_34;
  v19 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v37 = v38;
  this->fields._SelectUserSvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(
                                                    &v37,
                                                    0LL);
  partyServantListViewManager = (struct PartyServantListViewManager_o *)PartyServantListViewItem__get_IsEquip(
                                                                          partyServantListViewItem,
                                                                          0LL);
  v20 = 0LL;
  if ( ((unsigned __int8)partyServantListViewManager & 1) != 0 )
  {
    equipIdList = partyServantListViewItem->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_34;
    if ( !equipIdList->max_length )
      sub_1B8661C(partyServantListViewManager, partyServantListViewItem);
    v20 = equipIdList->m_Items[0];
  }
  this->fields._SelectServantEquipId_k__BackingField = v20;
  if ( PartyServantListViewItem__get_IsParty(partyServantListViewItem, 0LL)
    || PartyServantListViewItem__get_IsOrganizedWave(partyServantListViewItem, 0LL) )
  {
    if ( partyServantListViewItem->fields.isConvertOverwriteImage )
      questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
    else
      questRestrictionInfo = 0LL;
    PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = partyServantListViewItem->fields.userServantEntity;
    v25 = partyServantListViewItem->fields.equipIdList;
    v27 = PartyListViewItemMenuKind_k__BackingField == 8;
    v28 = (CommonUI_o *)Instance;
    if ( v27 )
    {
      v29 = (ServantStatusDialog_ResultDelegate_o *)sub_1B86604(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v29,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( v28 )
      {
        CommonUI__OpenServantStatusDialog_30494564(
          v28,
          0,
          v26,
          v25,
          questRestrictionInfo,
          v29,
          this->fields.canMoveCombine,
          openCallback,
          0LL);
        return;
      }
    }
    else
    {
      v30 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1B86604(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0LL);
      if ( v28 )
      {
        CommonUI__OpenServantStatusDialog_30494292(
          v28,
          0,
          v26,
          v25,
          questRestrictionInfo,
          v30,
          this->fields.canMoveCombine,
          openCallback,
          0LL);
        return;
      }
    }
LABEL_34:
    sub_1B86614(partyServantListViewManager, partyServantListViewItem);
  }
  v31 = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
  v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = partyServantListViewItem->fields.userServantEntity;
  v27 = v31 == 8;
  v34 = (CommonUI_o *)v32;
  if ( v27 )
  {
    v35 = (ServantStatusDialog_ResultDelegate_o *)sub_1B86604(ServantStatusDialog_ResultDelegate_TypeInfo);
    ServantStatusDialog_ResultDelegate___ctor(
      v35,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServantWithQuest__,
      0LL);
    if ( !v34 )
      goto LABEL_34;
    CommonUI__OpenServantStatusDialog_30494044(v34, 0, v33, v35, this->fields.canMoveCombine, openCallback, 0LL);
  }
  else
  {
    v36 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1B86604(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    ServantStatusDialog_EndIndividualityDelegate___ctor(
      v36,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServant__,
      0LL);
    if ( !v34 )
      goto LABEL_34;
    CommonUI__OpenServantStatusDialog_30493796(v34, 0, v33, v36, this->fields.canMoveCombine, openCallback, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__Open_32982748(
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
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x25
  const MethodInfo *v29; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v31; // x20

  if ( (byte_4A4A30D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, partyItem);
    sub_1B863B8(&Method_PartyServantSelectMenu_EndOpen__, v17);
    byte_4A4A30D = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v19 = 1 << state;
    if ( (v19 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1B8635C(
        (CGThumbnailListItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        num,
        *(const MethodInfo **)&tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v20, v21);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v22);
      PartyServantSelectMenu__EndOpen(this, v23);
    }
    else if ( (v19 & 0x11) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1B8635C(
        (CGThumbnailListItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        num,
        *(const MethodInfo **)&tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v24, v25);
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
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 71, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setBackBtnSprite_38089748((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_32964148(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_32969368((PartyServantListViewManager_o *)gameObject, 1, 0LL),
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
        sub_1B86614(gameObject, v27);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v31 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v31, 0LL);
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

  if ( (byte_4A4A31F & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B863B8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B863B8(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__, v9);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A4A31F = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1B86614(limitCountSupport, v14);
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

  if ( (byte_4A4A311 & 1) == 0 )
  {
    sub_1B863B8(&PartyServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B863B8(&LocalizationManager_TypeInfo, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnSelectItem__, v9);
    sub_1B863B8(&StringLiteral_17427/*"button_push_reg"*/, v10);
    sub_1B863B8(&StringLiteral_17428/*"button_push_unreg"*/, v11);
    sub_1B863B8(&StringLiteral_17413/*"button_allchoice_reg"*/, v12);
    sub_1B863B8(&StringLiteral_17416/*"button_alllock_unreg"*/, v13);
    sub_1B863B8(&StringLiteral_10163/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/, v14);
    sub_1B863B8(&StringLiteral_10166/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/, v15);
    sub_1B863B8(&StringLiteral_17429/*"button_select_reg"*/, v16);
    sub_1B863B8(&StringLiteral_10164/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/, v17);
    sub_1B863B8(&StringLiteral_10165/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/, v18);
    sub_1B863B8(&StringLiteral_17430/*"button_select_unreg"*/, v19);
    sub_1B863B8(&StringLiteral_17415/*"button_alllock_reg"*/, v20);
    sub_1B863B8(&StringLiteral_17414/*"button_allchoice_unreg"*/, v21);
    byte_4A4A311 = 1;
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
    v24 = &StringLiteral_17429/*"button_select_reg"*/;
    if ( modeKind )
      v24 = &StringLiteral_17430/*"button_select_unreg"*/;
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
    v29 = &StringLiteral_17415/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v29 = &StringLiteral_17416/*"button_alllock_unreg"*/;
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
    v32 = &StringLiteral_17413/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v32 = &StringLiteral_17414/*"button_allchoice_unreg"*/;
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
      v36 = &StringLiteral_17427/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v36 = &StringLiteral_17428/*"button_push_unreg"*/;
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
        v40 = &StringLiteral_10166/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_50;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10164/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_50;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10163/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_50;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10165/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
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
      v43 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B86604(PartyServantListViewManager_CallbackFunc_TypeInfo);
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
    sub_1B86614(statusTabButton, *(_QWORD *)&modeKind);
  }
  if ( !statusTabButton )
    goto LABEL_58;
  PartyServantListViewManager__SetMode_32969368((PartyServantListViewManager_o *)statusTabButton, 1, 0LL);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  System_Int64_array *v13; // x1
  System_Int64_array *v14; // x2
  bool v15; // w4
  bool v16; // w5
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  System_Int64_array *v20; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A4A318 & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B863B8(&NetworkManager_TypeInfo, v5);
    sub_1B863B8(&Method_PartyServantSelectMenu_EndStatusSync__, v6);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4A4A318 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v20 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapChoiceList(partyServantListViewManager, &choiceList, &v20, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v17, v18);
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v19,
                                                                       (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v14 = v20;
        v13 = choiceList;
        v16 = 1;
        v15 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B86614(partyServantListViewManager, callback);
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
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v10, v11);
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v12,
                                                                       (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v14 = unlockList;
        v13 = lockList;
        v15 = 1;
        v16 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)partyServantListViewManager,
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

  if ( (byte_4A4A30A & 1) == 0 )
  {
    sub_1B863B8(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4A4A30A = 1;
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
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1B868D4(v8);
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

  if ( (byte_4A4A30B & 1) == 0 )
  {
    sub_1B863B8(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4A4A30B = 1;
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
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1B868D4(v8);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CD4E8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CD490;
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
  if ( (byte_4A4A323 & 1) == 0 )
  {
    sub_1B863B8(&PartyServantSelectMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4A4A323 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12, item, callback, object);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1B8636C(this, v11, callback, object);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CD544;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CD4FC;
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
  if ( (byte_4A4A324 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, isRequest);
    byte_4A4A324 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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
  const MethodInfo *v14; // x3
  struct PartyServantSelectMenu_o *_4__this; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x19
  PartyServantListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3

  if ( (byte_4A4A325 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&PartyServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B863B8(&Method_PartyServantSelectMenu_OnSelectItem__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__, v8);
    byte_4A4A325 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_30483660(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B86614(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  partyServantListViewManager = _4__this->fields.partyServantListViewManager;
  v17 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B86604(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v18);
  if ( !partyServantListViewManager )
    goto LABEL_12;
  PartyServantListViewManager__SetMode(partyServantListViewManager, 2, v17, 0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B86614(this, method);
  PartyServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}