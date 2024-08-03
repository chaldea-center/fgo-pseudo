void __fastcall PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F85C2 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F85C2 = 1;
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
  const MethodInfo *v10; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *Item; // x2

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, n, (int32_t)method);
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1B64324(0LL);
      Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, v10);
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
    sub_1B64324(0LL);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_32069188(this, 0LL, v2);
}


void __fastcall PartyServantSelectMenu__Close_32069188(
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_49F85B0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_PartyServantSelectMenu_EndClose__, v6);
    byte_49F85B0 = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1B64324(0LL);
  PartyServantListViewManager__SetMode_32055500(partyServantListViewManager, 1, v7);
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v9, v10);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCardFavoriteRequest(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  PartyServantListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_49F85C0 & 1) == 0 )
  {
    sub_1B640C8(&PartyServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    byte_49F85C0 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v6 = this->fields.partyServantListViewManager,
        v9 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                             PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                             v7,
                                                             v8),
        PartyServantListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v10),
        !v6) )
  {
    sub_1B64324(partyServantListViewManager);
  }
  v6->fields.callbackFunc = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.callbackFunc, (int32_t)v9, v11, v12);
  PartyServantListViewManager__SetMode_32055500(v6, 2, v13);
}


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
      sub_1B64324(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_32055500(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__Callback(this, 0, -1, v3);
}


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
      sub_1B64324(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_32055500(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__Callback(this, 1, -1, v3);
}


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
      sub_1B64324(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_32055500(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 2, 0, v3);
}


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
      sub_1B64324(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_32055500(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 1, 0, v3);
}


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
      sub_1B64324(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_32055500(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 3, 0, v3);
}


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
      sub_1B64324(partyServantListViewManager);
    }
    PartyServantListViewManager__SetMode_32055500(partyServantListViewManager, 3, v6);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
  __int64 v8; // x1
  __int64 v9; // x2
  PartyServantListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_49F85BC & 1) == 0 )
  {
    sub_1B640C8(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    byte_49F85BC = 1;
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
  v10 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                        PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                        v8,
                                                        v9);
  PartyServantListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v11);
  if ( !v7
    || (v7->fields.callbackFunc = v10,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->fields.callbackFunc, (int32_t)v10, v12, v13),
        PartyServantListViewManager__SetMode_32055500(v7, 2, v14),
        (partyServantListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_1B64324(partyServantListViewManager);
  }
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)partyServantListViewManager + 16), 0LL) )
    PartyServantSelectMenu__Callback(this, 3, -1, v15);
}


void __fastcall PartyServantSelectMenu__EndCloseShowServantQuestJump(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F85BD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49F85BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialSelect; // w2
  const MethodInfo *v5; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_1B64324(0LL);
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
  const MethodInfo *v10; // x2
  PartyServantListViewManager_o *tutorialMaskBase; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x21
  float v19; // s0
  float v20; // s3
  float v21; // s4
  int v22; // s1
  int v23; // s5
  int v24; // s6
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  PartyServantListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x2
  ServantStatusBattleListViewItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v35; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_49F85AE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&PartyServantListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&FSUtility_TypeInfo, v5);
    sub_1B640C8(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__, v6);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnSelectItem__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49F85AE = 1;
  }
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v29 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                          PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                          v27,
                                                          v28);
    PartyServantListViewManager_CallbackFunc___ctor(
      v29,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      v30);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v29;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&partyServantListViewManager->fields.callbackFunc,
        (int32_t)v29,
        v31,
        v32);
      PartyServantListViewManager__SetMode_32055500(partyServantListViewManager, 2, v33);
      goto LABEL_17;
    }
LABEL_20:
    sub_1B64324(tutorialMaskBase);
  }
  v9 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v9, 0, v2);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  PartyServantListViewManager__SetMode_32055500(tutorialMaskBase, 1, v10);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_17;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
    goto LABEL_20;
  v19 = -367.0;
  v20 = -450.0;
  if ( !IsUnderVista )
    v20 = -442.0;
  if ( IsUnderVista )
    v19 = -375.0;
  v21 = -30.0;
  v22 = 1120403456;
  v23 = 1125515264;
  v24 = 1127481344;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v19,
    0.0,
    *(UnityEngine_Rect_o *)&v20,
    v18,
    0LL);
LABEL_17:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc;
  v35 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1B6406C(p_openCallbackFunc, 0, v12, v13);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v35->fields.m_target)(
      v35->fields.original_method_info,
      *(_QWORD *)&v35->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *statusTabButton; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  PartyServantListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2

  if ( (byte_49F85AF & 1) == 0 )
  {
    sub_1B640C8(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnSelectItem__, v3);
    byte_49F85AF = 1;
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
        v8 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                             PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                             v6,
                                                             v7),
        PartyServantListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v9),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_1B64324(statusTabButton);
  }
  partyServantListViewManager->fields.callbackFunc = v8;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v8,
    v10,
    v11);
  PartyServantListViewManager__SetMode_32055500(partyServantListViewManager, 5, v12);
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x21

  if ( (byte_49F85BA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_PartyServantSelectMenu_EndCloseShowServant__, v7);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_49F85BA = 1;
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
          PartyServantListViewManager__SetMode_32055500(partyServantListViewManager, v12, v11);
          goto LABEL_19;
        }
LABEL_17:
        v12 = 3;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1B64324(partyServantListViewManager);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_49F81D6 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, isDecide);
    byte_49F81D6 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v17, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x23
  __int64 v15; // x0

  if ( (byte_49F85BB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_49F85BB = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_1B64324(v15);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
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
    sub_1B6406C(p_requedstCallback, 0, (int32_t)method, v3);
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
    sub_1B64324(0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_49F85B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_PartyServantSelectMenu_EndClickCancel__, method);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnClickCancel__, v3);
    sub_1B640C8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F85B3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1B64324(0LL);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    v6 = Method_PartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    v10 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                            PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                            v8,
                                                            v9);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickCancel__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v10, v11);
  }
}


void __fastcall PartyServantSelectMenu__OnClickDecide(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_49F85B2 & 1) == 0 )
  {
    sub_1B640C8(&Method_PartyServantSelectMenu_EndClickDecide__, method);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnClickDecide__, v3);
    sub_1B640C8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F85B2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyServantSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                           PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                           v7,
                                                           v8);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickDecide__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v9, v10);
  }
}


void __fastcall PartyServantSelectMenu__OnClickScaleChange(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v7; // x1
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_49F85BE & 1) == 0 )
  {
    sub_1B640C8(&Method_PartyServantSelectMenu_OnClickScaleChange__, method);
    byte_49F85BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ChangeIconScale(partyServantListViewManager, v5),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                                           partyServantListViewManager,
                                                                           v7),
          !scaleChangeTabSprite) )
    {
      sub_1B64324(partyServantListViewManager);
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
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_49F85B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_PartyServantSelectMenu_EndClickTabChoice__, method);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnClickTabChoice__, v3);
    sub_1B640C8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F85B6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v11 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v11, v12);
        return;
      }
      v13 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                              PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                              v7,
                                                              v8);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabChoice__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v13, v14);
    }
    PartyServantSelectMenu__SetTabKind(this, 2, 0, v9);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabLock(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_49F85B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_PartyServantSelectMenu_EndClickTabLock__, method);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnClickTabLock__, v3);
    sub_1B640C8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F85B5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v11 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v11, v12);
        return;
      }
      v13 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                              PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                              v7,
                                                              v8);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabLock__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v13, v14);
    }
    PartyServantSelectMenu__SetTabKind(this, 1, 0, v9);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabPush(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_49F85B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_PartyServantSelectMenu_EndClickTabPush__, method);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnClickTabPush__, v3);
    sub_1B640C8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F85B7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PartyServantSelectMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                           PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                           v7,
                                                           v8);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabPush__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v9, v10);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabStatus(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_49F85B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_PartyServantSelectMenu_EndClickTabStatus__, method);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnClickTabStatus__, v3);
    sub_1B640C8(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F85B4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                           PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                           v7,
                                                           v8);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabStatus__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v9, v10);
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
  int32_t v33; // w2
  int32_t v34; // w3
  const MethodInfo *v35; // x2
  int32_t v36; // w3
  int32_t state; // w8
  PartyServantListViewItem_o *Item; // x1
  int32_t tutorialMode; // w8
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  Il2CppObject *Instance; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  System_Action_o *v45; // x21
  PartyServantListViewItem_o **v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  const MethodInfo *v49; // x3
  PartyServantListViewItem_o *v50; // x8
  unsigned int commonRestrictionId; // w10
  unsigned int v52; // w20
  int32_t modeKind; // w8
  struct PartyServantListViewManager_o *v54; // x20
  PartyServantListViewManager_CallbackFunc_o *v55; // x0
  const MethodInfo *v56; // x3
  intptr_t v57; // w2
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  PartyServantSelectMenu_o *v62; // x0
  int32_t v63; // w1
  PartyServantListViewItem_o *v64; // x1
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  PartyServantListViewManager_CallbackFunc_c *v71; // x0
  _BOOL4 isEnabled; // w23
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  const MethodInfo *v75; // x2
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v78; // q1
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  _QWORD *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  struct PartyServantListViewManager_CallbackFunc_o *v84; // x21
  int32_t v85; // w2
  int32_t v86; // w3
  const MethodInfo *v87; // x2
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v89; // x19
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v92; // x25
  Il2CppObject *Master_object; // x19
  int32_t v94; // w22
  const MethodInfo *v95; // x1
  int32_t v96; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  int32_t v98; // w22
  int32_t v99; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v101; // x19
  System_String_o *v102; // x22
  __int64 v103; // x23
  int32_t Rarity; // w26
  __int64 v105; // x1
  int32_t v106; // w2
  int32_t v107; // w3
  PartyServantListViewManager_o *v108; // x26
  int32_t v109; // w2
  int32_t v110; // w3
  PartyServantListViewManager_o *v111; // x26
  int32_t v112; // w2
  int32_t v113; // w3
  PartyServantListViewManager_o *v114; // x25
  int32_t v115; // w0
  int32_t v116; // w2
  int32_t v117; // w3
  PartyServantListViewManager_o *v118; // x25
  int32_t v119; // w2
  int32_t v120; // w3
  PartyServantListViewManager_o *v121; // x25
  int32_t v122; // w2
  int32_t v123; // w3
  PartyServantListViewManager_o *v124; // x21
  System_String_o *v125; // x21
  System_String_o *v126; // x22
  System_String_o *v127; // x23
  Il2CppObject *v128; // x24
  __int64 v129; // x1
  __int64 v130; // x2
  CommonConfirmDialog_ClickDelegate_o *v131; // x25
  __int64 v132; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16

  if ( (byte_49F85B9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&BalanceConfig_TypeInfo, v7);
    sub_1B640C8(&PartyServantListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    sub_1B640C8(&object___TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_1B640C8(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__, v20);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnSelectItem__, v21);
    sub_1B640C8(&Rarity_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B640C8(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__, v25);
    sub_1B640C8(&PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo, v26);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v27);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v28);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v29);
    sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v30);
    byte_49F85B9 = 1;
  }
  v31 = sub_1B64314(PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
  PartyServantSelectMenu___c__DisplayClass68_0___ctor((PartyServantSelectMenu___c__DisplayClass68_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_122;
  *(_QWORD *)(v31 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 16), (int32_t)this, v33, v34);
  state = this->fields.state;
  if ( state == 7 )
  {
    tutorialMode = this->fields.tutorialMode;
    this->fields.tutorialSelect = n;
    if ( tutorialMode != 2 )
      return;
    this->fields.state = 8;
    v40 = Method_PartyServantSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v40 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnSelectItem__);
    v41 = (System_Reflection_MethodBase_o *)sub_1B640AC(v40, v40[4]);
    OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v45 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v43, v44);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v45, 0LL);
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
    Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, v35);
  }
  *(_QWORD *)(v31 + 24) = Item;
  v46 = (PartyServantListViewItem_o **)(v31 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 24), (int32_t)Item, (int32_t)v35, v36);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      this->fields.state = 2;
      v54 = this->fields.partyServantListViewManager;
      v55 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                            PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                            v47,
                                                            v48);
      v57 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    else
    {
      v64 = *v46;
      if ( !*v46 )
        goto LABEL_122;
      if ( v64->fields.userServantEntity )
      {
        PartyServantSelectMenu__OpenServantDetail_32075804(this, v64, 1, v49);
        return;
      }
      v79 = Method_PartyServantSelectMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v79 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnSelectItem__);
      v80 = (System_Reflection_MethodBase_o *)sub_1B640AC(v79, v79[4]);
LABEL_70:
      OverwriteAssetSoundName__PlaySystemSe(v80, 2, 0LL);
      v54 = this->fields.partyServantListViewManager;
      v55 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                            PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                            v82,
                                                            v83);
      v57 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    goto LABEL_71;
  }
  if ( kind == 2 )
  {
    switch ( this->fields.modeKind )
    {
      case 0:
        v50 = *v46;
        if ( !*v46 )
          goto LABEL_122;
        if ( !v50->fields.isBase && v50->fields.isQuestRestriction || v50->fields.isSame )
          goto LABEL_65;
        commonRestrictionId = v50->fields.commonRestrictionId;
        v52 = commonRestrictionId >> 31;
        if ( !v50->fields.isBase && (commonRestrictionId & 0x80000000) != 0 )
        {
          if ( v50->fields.isLeave
            || (v50->fields.fatigureTime & 0x8000000000000000LL) == 0
            || v50->fields._IsAllOutBattle_k__BackingField
            || v50->fields._IsDataLost_k__BackingField
            || v50->fields._TimesToRestart_k__BackingField > 0 )
          {
LABEL_65:
            LOBYTE(v52) = 0;
          }
          else
          {
            LOBYTE(v52) = !v50->fields._IsClearedWave_k__BackingField;
          }
        }
        v81 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v81 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnSelectItem__);
        v80 = (System_Reflection_MethodBase_o *)sub_1B640AC(v81, v81[4]);
        if ( (v52 & 1) == 0 )
          goto LABEL_70;
        OverwriteAssetSoundName__PlaySystemSe(v80, 0, 0LL);
        v63 = 1;
        v62 = this;
        v61 = n;
        this->fields.state = 3;
        goto LABEL_35;
      case 1:
        v65 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v65 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnSelectItem__);
        v66 = (System_Reflection_MethodBase_o *)sub_1B640AC(v65, v65[4]);
        OverwriteAssetSoundName__PlaySystemSe(v66, 11, 0LL);
        if ( !*v46 )
          goto LABEL_122;
        (*v46)->fields.isSwapLock ^= 1u;
        goto LABEL_47;
      case 2:
        v69 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v69 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnSelectItem__);
        v70 = (System_Reflection_MethodBase_o *)sub_1B640AC(v69, v69[4]);
        OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0LL);
        if ( !*v46 )
          goto LABEL_122;
        (*v46)->fields.isSwapChoice ^= 1u;
LABEL_47:
        this->fields.state = 2;
        v54 = this->fields.partyServantListViewManager;
        v71 = PartyServantListViewManager_CallbackFunc_TypeInfo;
        goto LABEL_48;
      case 3:
        if ( !*v46 )
          goto LABEL_122;
        isEnabled = (*v46)->fields.isEnabled;
        v73 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v73 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnSelectItem__);
        v74 = (System_Reflection_MethodBase_o *)sub_1B640AC(v73, v73[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v74, 0, 0LL);
          partyServantListViewManager = (PartyServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          dragParentObject = (int64_t)partyServantListViewManager->fields.dragParentObject;
          if ( !dragParentObject )
          {
LABEL_60:
            PartyServantSelectMenu__PushRequest(this, *v46, v75);
            return;
          }
          if ( !*v46 )
            goto LABEL_122;
          userServantEntity = (*v46)->fields.userServantEntity;
          if ( !userServantEntity )
            goto LABEL_122;
          v78 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v134.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v134.fields.fakeValue = v78;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v133 = v134;
          if ( dragParentObject == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v133, 0LL) )
            goto LABEL_60;
          partyServantListViewManager = (PartyServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          partyServantListViewManager = (PartyServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                           (DataManager_o *)partyServantListViewManager,
                                                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager,
                     dragParentObject,
                     (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          partyServantListViewManager = (PartyServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_122;
          partyServantListViewManager = (PartyServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                           (DataManager_o *)partyServantListViewManager,
                                                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_122;
          v89 = (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v135.fields.currentCryptoKey = klass;
          *(_QWORD *)&v135.fields.fakeValue = monitor;
          partyServantListViewManager = (PartyServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                           v135,
                                                                           0LL);
          if ( !v89 )
            goto LABEL_122;
          v92 = DataMasterBase_object__object__int___GetEntity(
                  v89,
                  (int32_t)partyServantListViewManager,
                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                  0LL);
          partyServantListViewManager = (PartyServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                                           0LL);
          if ( !Master_object )
            goto LABEL_122;
          partyServantListViewManager = (PartyServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                           (ServantLimitImageMaster_o *)Master_object,
                                                                           v94,
                                                                           (int32_t)partyServantListViewManager,
                                                                           0LL);
          if ( !*v46 )
            goto LABEL_122;
          v96 = (int)partyServantListViewManager;
          partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewItem__get_SvtId(*v46, v95);
          if ( !*v46 )
            goto LABEL_122;
          v97 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v46)->fields.userServantEntity;
          if ( !v97 )
            goto LABEL_122;
          v98 = (int)partyServantListViewManager;
          v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v97[6], 0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         (ServantLimitImageMaster_o *)Master_object,
                                         v98,
                                         v99,
                                         0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v102 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v103 = sub_1B64170(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          partyServantListViewManager = (PartyServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
          if ( !v103 )
            goto LABEL_122;
          v108 = partyServantListViewManager;
          if ( !partyServantListViewManager
            || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B64204(
                                                                                 partyServantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0LL )
          {
            if ( !*(_DWORD *)(v103 + 24) )
              goto LABEL_123;
            *(_QWORD *)(v103 + 32) = v108;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v103 + 32), (int32_t)v108, v106, v107);
            if ( !v92 )
              goto LABEL_122;
            partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getClassName(
                                                                             (ServantEntity_o *)v92,
                                                                             0LL);
            v111 = partyServantListViewManager;
            if ( !partyServantListViewManager
              || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B64204(
                                                                                   partyServantListViewManager,
                                                                                   *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v103 + 24) <= 1u )
                goto LABEL_123;
              *(_QWORD *)(v103 + 40) = v111;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v103 + 40), (int32_t)v111, v109, v110);
              partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getName(
                                                                               (ServantEntity_o *)v92,
                                                                               v96,
                                                                               -1,
                                                                               0LL);
              v114 = partyServantListViewManager;
              if ( !partyServantListViewManager
                || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B64204(
                                                                                     partyServantListViewManager,
                                                                                     *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v103 + 24) <= 2u )
                  goto LABEL_123;
                *(_QWORD *)(v103 + 48) = v114;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v103 + 48), (int32_t)v114, v112, v113);
                if ( !*v46 )
                  goto LABEL_122;
                partyServantListViewManager = (PartyServantListViewManager_o *)(*v46)->fields.userServantEntity;
                if ( !partyServantListViewManager )
                  goto LABEL_122;
                v115 = UserServantEntity__getRarity((UserServantEntity_o *)partyServantListViewManager, 0LL);
                partyServantListViewManager = (PartyServantListViewManager_o *)Rarity__getRarityType(v115, 0LL);
                v118 = partyServantListViewManager;
                if ( !partyServantListViewManager
                  || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B64204(
                                                                                       partyServantListViewManager,
                                                                                       *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v103 + 24) <= 3u )
                    goto LABEL_123;
                  *(_QWORD *)(v103 + 56) = v118;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v103 + 56), (int32_t)v118, v116, v117);
                  if ( !*v46 )
                    goto LABEL_122;
                  partyServantListViewManager = (PartyServantListViewManager_o *)(*v46)->fields.servantEntity;
                  if ( !partyServantListViewManager )
                    goto LABEL_122;
                  partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getClassName(
                                                                                   (ServantEntity_o *)partyServantListViewManager,
                                                                                   0LL);
                  v121 = partyServantListViewManager;
                  if ( !partyServantListViewManager
                    || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B64204(
                                                                                         partyServantListViewManager,
                                                                                         *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v103 + 24) <= 4u )
                      goto LABEL_123;
                    *(_QWORD *)(v103 + 64) = v121;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v103 + 64), (int32_t)v121, v119, v120);
                    if ( !*v46 )
                      goto LABEL_122;
                    partyServantListViewManager = (PartyServantListViewManager_o *)(*v46)->fields.servantEntity;
                    if ( !partyServantListViewManager )
                      goto LABEL_122;
                    partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getName(
                                                                                     (ServantEntity_o *)partyServantListViewManager,
                                                                                     ServantLimitCountSealAfter,
                                                                                     -1,
                                                                                     0LL);
                    v124 = partyServantListViewManager;
                    if ( !partyServantListViewManager
                      || (partyServantListViewManager = (PartyServantListViewManager_o *)sub_1B64204(
                                                                                           partyServantListViewManager,
                                                                                           *(_QWORD *)(*(_QWORD *)v103 + 64LL))) != 0LL )
                    {
                      if ( *(_DWORD *)(v103 + 24) > 5u )
                      {
                        *(_QWORD *)(v103 + 72) = v124;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v103 + 72), (int32_t)v124, v122, v123);
                        v125 = System_String__Format_61389904(v102, (System_Object_array *)v103, 0LL);
                        v126 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v127 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        v128 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v131 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                        v129,
                                                                        v130);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v131,
                          (Il2CppObject *)v31,
                          Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__,
                          0LL);
                        partyServantListViewManager = (PartyServantListViewManager_o *)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        if ( v128 )
                        {
                          CommonUI__OpenConfirmDialog_30344968(
                            (CommonUI_o *)v128,
                            v101,
                            v125,
                            v126,
                            v127,
                            v131,
                            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                            0,
                            0,
                            0LL);
                          return;
                        }
LABEL_122:
                        sub_1B64324(partyServantListViewManager);
                      }
LABEL_123:
                      sub_1B6432C(partyServantListViewManager, v105);
                    }
                  }
                }
              }
            }
          }
          v132 = sub_1B64348();
          sub_1B641F0(v132, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v74, 2, 0LL);
        this->fields.state = 2;
        v54 = this->fields.partyServantListViewManager;
        v71 = PartyServantListViewManager_CallbackFunc_TypeInfo;
LABEL_48:
        v55 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64314(v71, v67, v68);
        v57 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
        break;
      default:
        return;
    }
LABEL_71:
    v84 = v55;
    PartyServantListViewManager_CallbackFunc___ctor(v55, (Il2CppObject *)this, v57, v56);
    if ( v54 )
    {
      v54->fields.callbackFunc = v84;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->fields.callbackFunc, (int32_t)v84, v85, v86);
      PartyServantListViewManager__SetMode_32055500(v54, 2, v87);
      return;
    }
    goto LABEL_122;
  }
  v58 = Method_PartyServantSelectMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
    v58 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OnSelectItem__);
  v59 = (System_Reflection_MethodBase_o *)sub_1B640AC(v58, v58[4]);
  OverwriteAssetSoundName__PlaySystemSe(v59, 1, 0LL);
  v61 = -1;
  this->fields.state = 3;
  v62 = this;
  v63 = 0;
LABEL_35:
  PartyServantSelectMenu__Callback(v62, v63, v61, v60);
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
  const MethodInfo *v37; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_o *v41; // x20

  v18 = this;
  if ( (byte_49F85AC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseDeckItemList);
    this = (PartyServantSelectMenu_o *)sub_1B640C8(&Method_PartyServantSelectMenu_EndOpen__, v19);
    byte_49F85AC = 1;
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
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v18->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)partyItem,
        num);
      v18->fields.openCallbackFunc = openCallback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.openCallbackFunc, (int32_t)openCallback, v22, v23);
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
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.callbackFunc, (int32_t)callback, v26, v27);
          v18->fields.openCallbackFunc = openCallback;
          sub_1B6406C(
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
                    TitleInfoControl__setBackBtnSprite_36875508((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
                        PartyServantListViewManager__SetMode_32055500((PartyServantListViewManager_o *)this, 1, v35);
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
                                                               v37);
                          if ( scaleChangeTabSprite )
                          {
                            UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
                            v18->fields.state = 1;
                            v41 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v39, v40);
                            System_Action___ctor(v41, (Il2CppObject *)v18, Method_PartyServantSelectMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)v18, v41, 0LL);
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
      sub_1B64324(this);
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
      PartyServantSelectMenu__OpenServantDetail_32075804(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        v5);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_32055500(partyServantListViewManager, 4, v7);
        return;
      }
    }
LABEL_7:
    sub_1B64324(partyServantListViewManager);
  }
}


void __fastcall PartyServantSelectMenu__OpenServantDetail_32075804(
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
  __int64 v18; // x1
  struct ServantEntity_o *equipServantEntity; // x8
  struct System_Int64_array *equipIdList; // x8
  int32_t partyIndex; // w23
  int32_t PartyListViewItemMenuKind_k__BackingField; // w24
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  UserServantEntity_o *v26; // x21
  CommonUI_o *v27; // x22
  System_Int64_array *v28; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  ServantStatusDialog_ResultDelegate_o *v30; // x24
  ServantStatusDialog_ResultDelegate_o *v31; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v32; // x24
  ServantStatusDialog_EndIndividualityDelegate_o *v33; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-60h]

  if ( (byte_49F85C1 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, partyServantListViewItem);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B640C8(&Method_PartyServantSelectMenu_EndShowServantWithQuest__, v8);
    sub_1B640C8(&Method_PartyServantSelectMenu_EndShowServant__, v9);
    sub_1B640C8(&Method_PartyServantSelectMenu_OpenServantDetail__, v10);
    sub_1B640C8(&ServantStatusDialog_ResultDelegate_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_49F85C1 = 1;
  }
  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_28;
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
  if ( isPlaySe )
  {
    v14 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1B640E0(Method_PartyServantSelectMenu_OpenServantDetail__);
    v15 = (System_Reflection_MethodBase_o *)sub_1B640AC(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  }
  this->fields.state = 5;
  if ( !partyServantListViewItem )
    goto LABEL_28;
  userServantEntity = partyServantListViewItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_28;
  v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v34 = v35;
  partyServantListViewManager = (ListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                       &v34,
                                                       0LL);
  this->fields._SelectUserSvtId_k__BackingField = (int64_t)partyServantListViewManager;
  equipServantEntity = partyServantListViewItem->fields.equipServantEntity;
  if ( equipServantEntity )
  {
    equipIdList = partyServantListViewItem->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_28;
    if ( !equipIdList->max_length )
      sub_1B6432C(partyServantListViewManager, v18);
    equipServantEntity = (struct ServantEntity_o *)equipIdList->m_Items[0];
  }
  this->fields._SelectServantEquipId_k__BackingField = (int64_t)equipServantEntity;
  partyIndex = partyServantListViewItem->fields.partyIndex;
  PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = partyServantListViewItem->fields.userServantEntity;
  v27 = (CommonUI_o *)Instance;
  if ( (partyIndex & 0x80000000) != 0 )
  {
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v31 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64314(ServantStatusDialog_ResultDelegate_TypeInfo, v24, v25);
      ServantStatusDialog_ResultDelegate___ctor(
        v31,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( !v27 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30355996(v27, 0, v26, v31, this->fields.canMoveCombine, 0LL);
    }
    else
    {
      v33 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1B64314(
                                                                ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                                v24,
                                                                v25);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v33,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0LL);
      if ( !v27 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30355760(v27, 0, v26, v33, this->fields.canMoveCombine, 0LL);
    }
  }
  else
  {
    v28 = partyServantListViewItem->fields.equipIdList;
    questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v30 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64314(ServantStatusDialog_ResultDelegate_TypeInfo, v24, v25);
      ServantStatusDialog_ResultDelegate___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( v27 )
      {
        CommonUI__OpenServantStatusDialog_30356504(
          v27,
          0,
          v26,
          v28,
          questRestrictionInfo,
          v30,
          this->fields.canMoveCombine,
          0LL);
        return;
      }
LABEL_28:
      sub_1B64324(partyServantListViewManager);
    }
    v32 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1B64314(
                                                              ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                              v24,
                                                              v25);
    ServantStatusDialog_EndIndividualityDelegate___ctor(
      v32,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServant__,
      0LL);
    if ( !v27 )
      goto LABEL_28;
    CommonUI__OpenServantStatusDialog_30356232(
      v27,
      0,
      v26,
      v28,
      questRestrictionInfo,
      v32,
      this->fields.canMoveCombine,
      0LL);
  }
}


void __fastcall PartyServantSelectMenu__Open_32068156(
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
  UnityEngine_GameObject_o *v27; // x25
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x6
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x20

  if ( (byte_49F85AD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, partyItem);
    sub_1B640C8(&Method_PartyServantSelectMenu_EndOpen__, v17);
    byte_49F85AD = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v19 = 1 << state;
    if ( (v19 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, num, tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v20, v21);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v22);
      PartyServantSelectMenu__EndOpen(this, v23);
    }
    else if ( (v19 & 0x11) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, num, tutorialMode);
      this->fields.openCallbackFunc = openCallback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v24, v25);
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
      TitleInfoControl__setBackBtnSprite_36875508((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_32050540(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v29);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_32055500((PartyServantListViewManager_o *)gameObject, 1, v30),
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
                                                       v31),
            !scaleChangeTabSprite) )
      {
LABEL_19:
        sub_1B64324(gameObject);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v35 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v33, v34);
      System_Action___ctor(v35, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v35, 0LL);
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
  DataManager_o *v14; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v24; // x0
  __int128 v25; // q1
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  Il2CppObject *Request_object; // x0
  __int128 v30; // q1
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w26
  int32_t v33; // w27
  int32_t v34; // w28
  int32_t v35; // w29
  bool IsLock; // w21
  char v37; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_49F85BF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__, v9);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49F85BF = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v14 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v14 || !userServantEntity )
    goto LABEL_18;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
  if ( !v16 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v14->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v14->fields.masterLoadThreads;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v28,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v37 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v42 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v41;
  *(_QWORD *)&v55.fields.currentCryptoKey = v42;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !v31 )
LABEL_18:
    sub_1B64324(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    imageLimitCount,
    v32,
    v33,
    v34,
    v35,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v46,
    IsLock,
    v37 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != (struct System_Threading_SynchronizationContext_o *)v48,
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
  __int64 v43; // x1
  __int64 v44; // x2
  PartyServantListViewManager_CallbackFunc_o *v45; // x21
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w1

  if ( (byte_49F85B1 & 1) == 0 )
  {
    sub_1B640C8(&PartyServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnSelectItem__, v9);
    sub_1B640C8(&StringLiteral_17591/*"button_push_reg"*/, v10);
    sub_1B640C8(&StringLiteral_17592/*"button_push_unreg"*/, v11);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v12);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v13);
    sub_1B640C8(&StringLiteral_10282/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/, v14);
    sub_1B640C8(&StringLiteral_10285/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/, v15);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v16);
    sub_1B640C8(&StringLiteral_10283/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/, v17);
    sub_1B640C8(&StringLiteral_10284/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/, v18);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v19);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v20);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v21);
    byte_49F85B1 = 1;
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
    v24 = &StringLiteral_17593/*"button_select_reg"*/;
    if ( modeKind )
      v24 = &StringLiteral_17594/*"button_select_unreg"*/;
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
    v29 = &StringLiteral_17579/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v29 = &StringLiteral_17580/*"button_alllock_unreg"*/;
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
    v32 = &StringLiteral_17577/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v32 = &StringLiteral_17578/*"button_allchoice_unreg"*/;
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
      v36 = &StringLiteral_17591/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v36 = &StringLiteral_17592/*"button_push_unreg"*/;
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
        v40 = &StringLiteral_10285/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_50;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10283/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_50;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10282/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_50;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10284/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
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
      v49 = 1;
      goto LABEL_58;
    }
LABEL_59:
    sub_1B64324(statusTabButton);
  }
  if ( !statusTabButton )
    goto LABEL_59;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)statusTabButton,
    modeKind,
    (const MethodInfo *)isInit);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  v45 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                        PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                        v43,
                                                        v44);
  PartyServantListViewManager_CallbackFunc___ctor(
    v45,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v46);
  if ( !partyServantListViewManager )
    goto LABEL_59;
  partyServantListViewManager->fields.callbackFunc = v45;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&partyServantListViewManager->fields.callbackFunc,
    (int32_t)v45,
    v47,
    v48);
  v49 = 2;
  statusTabButton = (UnityEngine_Behaviour_o *)partyServantListViewManager;
LABEL_58:
  PartyServantListViewManager__SetMode_32055500(
    (PartyServantListViewManager_o *)statusTabButton,
    v49,
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
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w4
  bool v19; // w5
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *v25; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49F85B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_PartyServantSelectMenu_EndStatusSync__, v7);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_49F85B8 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v25 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapChoiceList(partyServantListViewManager, &choiceList, &v25, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v20, v21);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v22, v23);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v24,
                                                                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v17 = v25;
        v16 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B64324(partyServantListViewManager);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v11, v12);
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v15,
                                                                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v17 = unlockList;
        v16 = lockList;
        v18 = 1;
        v19 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)partyServantListViewManager,
          v16,
          v17,
          0,
          v18,
          v19,
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

  if ( (byte_49F85AA & 1) == 0 )
  {
    sub_1B640C8(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49F85AA = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1B645E4(v8);
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

  if ( (byte_49F85AB & 1) == 0 )
  {
    sub_1B640C8(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49F85AB = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1B645E4(v8);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A6D14;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A6CBC;
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
  if ( (byte_49F85C4 & 1) == 0 )
  {
    sub_1B640C8(&PartyServantSelectMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_49F85C4 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A6D70;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A6D28;
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
  if ( (byte_49F85C5 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49F85C5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v11; // x2
  CommonUI_o *v12; // x20
  System_Action_o *_9__1; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  struct PartyServantSelectMenu_o *_4__this; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x19
  PartyServantListViewManager_CallbackFunc_o *v20; // x21

  if ( (byte_49F85C6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&PartyServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_PartyServantSelectMenu_OnSelectItem__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__, v8);
    byte_49F85C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v14, v15);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_30345628(v12, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(Instance);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  partyServantListViewManager = _4__this->fields.partyServantListViewManager;
  v20 = (PartyServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                        PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                        v16,
                                                        v17);
  PartyServantListViewManager_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !partyServantListViewManager )
    goto LABEL_12;
  PartyServantListViewManager__SetMode(partyServantListViewManager, 2, v20, 0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  PartyServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  PartyServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}