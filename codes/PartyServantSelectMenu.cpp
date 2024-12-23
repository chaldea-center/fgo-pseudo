void __fastcall PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4B62ACE & 1) == 0 )
  {
    sub_1BE4ACC(&BaseMenu_TypeInfo, method);
    byte_4B62ACE = 1;
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
  const MethodInfo *v15; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *Item; // x2

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BE4A70(p_callbackFunc, 0LL, *(int64_t *)&n, (int32_t)method, v4, v5, v6, v7);
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1BE4D28(0LL, v14);
      Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, v15);
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
    sub_1BE4D28(0LL, method);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_33018336(this, 0LL, v2);
}


void __fastcall PartyServantSelectMenu__Close_33018336(
        PartyServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_4B62ABC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndClose__, v6);
    byte_4B62ABC = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1BE4D28(0LL, v7);
  PartyServantListViewManager__SetMode_33005120(partyServantListViewManager, 1, v8);
  this->fields.closeCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.state = 4;
  v16 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4B62ACC & 1) == 0 )
  {
    sub_1BE4ACC(&PartyServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    byte_4B62ACC = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v6 = this->fields.partyServantListViewManager,
        v7 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BE4D18(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v8),
        !v6) )
  {
    sub_1BE4D28(partyServantListViewManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v6->fields.callbackFunc, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  PartyServantListViewManager__SetMode_33005120(v6, 2, v15);
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
      sub_1BE4D28(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33005120(partyServantListViewManager, 3, v6);
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
      sub_1BE4D28(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33005120(partyServantListViewManager, 3, v6);
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
      sub_1BE4D28(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33005120(partyServantListViewManager, 3, v6);
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
      sub_1BE4D28(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33005120(partyServantListViewManager, 3, v6);
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
      sub_1BE4D28(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33005120(partyServantListViewManager, 3, v6);
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
      sub_1BE4D28(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_33005120(partyServantListViewManager, 3, v6);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3

  if ( (byte_4B62AC8 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    byte_4B62AC8 = 1;
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
  v8 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BE4D18(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v9);
  if ( !v7
    || (v7->fields.callbackFunc = v8,
        sub_1BE4A70((PartyOrganizationUtility_o *)&v7->fields.callbackFunc, (int64_t)v8, v10, v11, v12, v13, v14, v15),
        PartyServantListViewManager__SetMode_33005120(v7, 2, v16),
        (partyServantListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_1BE4D28(partyServantListViewManager, method);
  }
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)partyServantListViewManager + 18), 0LL) )
    PartyServantSelectMenu__Callback(this, 3, -1, v17);
}


void __fastcall PartyServantSelectMenu__EndCloseShowServantQuestJump(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B62AC9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B62AC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialSelect; // w2
  const MethodInfo *v5; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_1BE4D28(0LL, method);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v21; // x21
  float v22; // s0
  float v23; // s3
  float v24; // s4
  int v25; // s1
  int v26; // s5
  int v27; // s6
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x2
  PartyOrganizationUtility_o *p_openCallbackFunc; // x19
  struct System_Action_o *v40; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4B62ABA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&PartyServantListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1BE4ACC(&FSUtility_TypeInfo, v5);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__, v6);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnSelectItem__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4B62ABA = 1;
  }
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v30 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BE4D18(PartyServantListViewManager_CallbackFunc_TypeInfo);
    PartyServantListViewManager_CallbackFunc___ctor(
      v30,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      v31);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v30;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&partyServantListViewManager->fields.callbackFunc,
        (int64_t)v30,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      PartyServantListViewManager__SetMode_33005120(partyServantListViewManager, 2, v38);
      goto LABEL_17;
    }
LABEL_20:
    sub_1BE4D28(tutorialMaskBase, v10);
  }
  v9 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v9, 0, v2);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  PartyServantListViewManager__SetMode_33005120(tutorialMaskBase, 1, v11);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_17;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
    goto LABEL_20;
  v22 = -367.0;
  v23 = -450.0;
  if ( !IsUnderVista )
    v23 = -442.0;
  if ( IsUnderVista )
    v22 = -375.0;
  v24 = -30.0;
  v25 = 1120403456;
  v26 = 1125515264;
  v27 = 1127481344;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v22,
    0.0,
    *(UnityEngine_Rect_o *)&v23,
    v21,
    0LL);
LABEL_17:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc;
  v40 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1BE4A70(p_openCallbackFunc, 0LL, v13, v14, v15, v16, v17, v18);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v40->fields.m_target)(
      v40->fields.original_method_info,
      *(_QWORD *)&v40->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *statusTabButton; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4B62ABB & 1) == 0 )
  {
    sub_1BE4ACC(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnSelectItem__, v3);
    byte_4B62ABB = 1;
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
        v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BE4D18(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v7),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_1BE4D28(statusTabButton, method);
  }
  partyServantListViewManager->fields.callbackFunc = v6;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&partyServantListViewManager->fields.callbackFunc,
    (int64_t)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  PartyServantListViewManager__SetMode_33005120(partyServantListViewManager, 5, v14);
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

  if ( (byte_4B62AC6 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndCloseShowServant__, v7);
    sub_1BE4ACC(&RandomLimitCountManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4B62AC6 = 1;
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
          PartyServantListViewManager__SetMode_33005120(partyServantListViewManager, v12, v11);
          goto LABEL_19;
        }
LABEL_17:
        v12 = 3;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1BE4D28(partyServantListViewManager, isDecide);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B62AD0 )
  {
    sub_1BE4ACC(&RandomLimitCountManager_TypeInfo, isDecide);
    byte_4B62AD0 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
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

  if ( (byte_4B62AC7 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4B62AC7 = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_1BE4D28(v13, v14);
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
    sub_1BE4A70(p_requedstCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BE4D28(0LL, method);
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

  if ( (byte_4B62ABF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndClickCancel__, method);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnClickCancel__, v3);
    sub_1BE4ACC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B62ABF = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1BE4D28(0LL, method);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    v6 = Method_PartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    v8 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BE4D18(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4B62ABE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndClickDecide__, method);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnClickDecide__, v3);
    sub_1BE4ACC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B62ABE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyServantSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BE4D18(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4B62ACA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnClickScaleChange__, method);
    byte_4B62ACA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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
      sub_1BE4D28(partyServantListViewManager, v5);
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

  if ( (byte_4B62AC2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndClickTabChoice__, method);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnClickTabChoice__, v3);
    sub_1BE4ACC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B62AC2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BE4D18(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v9, v10);
        return;
      }
      v11 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BE4D18(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4B62AC1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndClickTabLock__, method);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnClickTabLock__, v3);
    sub_1BE4ACC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B62AC1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BE4D18(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v9, v10);
        return;
      }
      v11 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BE4D18(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4B62AC3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndClickTabPush__, method);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnClickTabPush__, v3);
    sub_1BE4ACC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B62AC3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PartyServantSelectMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BE4D18(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4B62AC0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndClickTabStatus__, method);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnClickTabStatus__, v3);
    sub_1BE4ACC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4B62AC0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyServantSelectMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BE4D18(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
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
  int64_t partyServantListViewManager; // x0
  PartyServantListViewItem_o *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  const MethodInfo *v40; // x2
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
  unsigned int commonRestrictionId; // w10
  unsigned int v57; // w20
  int32_t modeKind; // w8
  struct PartyServantListViewManager_o *v59; // x20
  PartyServantListViewManager_CallbackFunc_o *v60; // x0
  const MethodInfo *v61; // x3
  intptr_t v62; // w2
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  const MethodInfo *v65; // x3
  int32_t v66; // w2
  PartyServantSelectMenu_o *v67; // x0
  int32_t v68; // w1
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  _QWORD *v71; // x0
  System_Reflection_MethodBase_o *v72; // x0
  PartyServantListViewManager_CallbackFunc_c *v73; // x0
  _BOOL4 isEnabled; // w23
  _QWORD *v75; // x0
  System_Reflection_MethodBase_o *v76; // x0
  const MethodInfo *v77; // x2
  int64_t v78; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v80; // q1
  _QWORD *v81; // x0
  System_Reflection_MethodBase_o *v82; // x0
  _QWORD *v83; // x0
  int64_t v84; // x21
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  const MethodInfo *v91; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v93; // x19
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v96; // x26
  Il2CppObject *Master_object; // x24
  System_String_o *v98; // x19
  System_String_o *v99; // x22
  __int64 v100; // x23
  int32_t Rarity; // w27
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x27
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x26
  int32_t v116; // w0
  Il2CppClass *v117; // x8
  int32_t v118; // w25
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  int64_t v125; // x25
  int32_t v126; // w0
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x25
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  int64_t v140; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v141; // x8
  int32_t v142; // w21
  int32_t v143; // w0
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  int64_t v150; // x21
  System_String_o *v151; // x21
  System_String_o *v152; // x22
  System_String_o *v153; // x23
  Il2CppObject *v154; // x24
  CommonConfirmDialog_ClickDelegate_o *v155; // x25
  __int64 v156; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16

  if ( (byte_4B62AC5 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v7);
    sub_1BE4ACC(&PartyServantListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_1BE4ACC(&DataManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v16);
    sub_1BE4ACC(&object___TypeInfo, v17);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__, v20);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnSelectItem__, v21);
    sub_1BE4ACC(&Rarity_TypeInfo, v22);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BE4ACC(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__, v25);
    sub_1BE4ACC(&PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo, v26);
    sub_1BE4ACC(&StringLiteral_12064/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v27);
    sub_1BE4ACC(&StringLiteral_12062/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v28);
    sub_1BE4ACC(&StringLiteral_12063/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v29);
    sub_1BE4ACC(&StringLiteral_12065/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v30);
    byte_4B62AC5 = 1;
  }
  v31 = sub_1BE4D18(PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo);
  PartyServantSelectMenu___c__DisplayClass68_0___ctor((PartyServantSelectMenu___c__DisplayClass68_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_120;
  *(_QWORD *)(v31 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)this, v34, v35, v36, v37, v38, v39);
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
      v49 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnSelectItem__);
    v50 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v49, v49[4]);
    OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v52 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v52, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v52, 0LL);
      return;
    }
    goto LABEL_120;
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
      goto LABEL_120;
    Item = PartyServantListViewManager__GetItem((PartyServantListViewManager_o *)partyServantListViewManager, n, v40);
  }
  *(_QWORD *)(v31 + 24) = Item;
  v53 = (PartyServantListViewItem_o **)(v31 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)Item, (int64_t)v40, v41, v42, v43, v44, v45);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      this->fields.state = 2;
      v59 = this->fields.partyServantListViewManager;
      v60 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BE4D18(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v62 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    else
    {
      v33 = *v53;
      if ( !*v53 )
        goto LABEL_120;
      if ( v33->fields.userServantEntity )
      {
        PartyServantSelectMenu__OpenServantDetail_33024884(this, v33, 1, v54);
        return;
      }
      v81 = Method_PartyServantSelectMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v81 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnSelectItem__);
      v82 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v81, v81[4]);
LABEL_70:
      OverwriteAssetSoundName__PlaySystemSe(v82, 2, 0LL);
      v59 = this->fields.partyServantListViewManager;
      v60 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BE4D18(PartyServantListViewManager_CallbackFunc_TypeInfo);
      v62 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    goto LABEL_71;
  }
  if ( kind == 2 )
  {
    switch ( this->fields.modeKind )
    {
      case 0:
        v55 = *v53;
        if ( !*v53 )
          goto LABEL_120;
        if ( !v55->fields.isBase && v55->fields.isQuestRestriction || v55->fields.isSame )
          goto LABEL_65;
        commonRestrictionId = v55->fields.commonRestrictionId;
        v57 = commonRestrictionId >> 31;
        if ( !v55->fields.isBase && (commonRestrictionId & 0x80000000) != 0 )
        {
          if ( v55->fields.isLeave
            || (v55->fields.fatigureTime & 0x8000000000000000LL) == 0
            || v55->fields._IsAllOutBattle_k__BackingField
            || v55->fields._IsDataLost_k__BackingField
            || v55->fields._TimesToRestart_k__BackingField > 0 )
          {
LABEL_65:
            LOBYTE(v57) = 0;
          }
          else
          {
            LOBYTE(v57) = !v55->fields._IsClearedWave_k__BackingField;
          }
        }
        v83 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v83 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnSelectItem__);
        v82 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v83, v83[4]);
        if ( (v57 & 1) == 0 )
          goto LABEL_70;
        OverwriteAssetSoundName__PlaySystemSe(v82, 0, 0LL);
        v68 = 1;
        v67 = this;
        v66 = n;
        this->fields.state = 3;
        goto LABEL_35;
      case 1:
        v69 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v69 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnSelectItem__);
        v70 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v69, v69[4]);
        OverwriteAssetSoundName__PlaySystemSe(v70, 11, 0LL);
        if ( !*v53 )
          goto LABEL_120;
        (*v53)->fields.isSwapLock ^= 1u;
        goto LABEL_47;
      case 2:
        v71 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v71 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnSelectItem__);
        v72 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v71, v71[4]);
        OverwriteAssetSoundName__PlaySystemSe(v72, 0, 0LL);
        if ( !*v53 )
          goto LABEL_120;
        (*v53)->fields.isSwapChoice ^= 1u;
LABEL_47:
        this->fields.state = 2;
        v59 = this->fields.partyServantListViewManager;
        v73 = PartyServantListViewManager_CallbackFunc_TypeInfo;
        goto LABEL_48;
      case 3:
        if ( !*v53 )
          goto LABEL_120;
        isEnabled = (*v53)->fields.isEnabled;
        v75 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v75 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnSelectItem__);
        v76 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v75, v75[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v76, 0, 0LL);
          partyServantListViewManager = (int64_t)UserGameMaster__getSelfUserGame(0LL);
          if ( !partyServantListViewManager )
            goto LABEL_120;
          v78 = *(_QWORD *)(partyServantListViewManager + 120);
          if ( !v78 )
          {
LABEL_60:
            PartyServantSelectMenu__PushRequest(this, *v53, v77);
            return;
          }
          if ( !*v53 )
            goto LABEL_120;
          userServantEntity = (*v53)->fields.userServantEntity;
          if ( !userServantEntity )
            goto LABEL_120;
          v80 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v158.fields.fakeValue = v80;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v157 = v158;
          if ( v78 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v157, 0LL) )
            goto LABEL_60;
          partyServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_120;
          partyServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !partyServantListViewManager )
            goto LABEL_120;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager,
                     v78,
                     (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          partyServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_120;
          partyServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_120;
          v93 = (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v159.fields.currentCryptoKey = klass;
          *(_QWORD *)&v159.fields.fakeValue = monitor;
          partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v159, 0LL);
          if ( !v93 )
            goto LABEL_120;
          v96 = DataMasterBase_object__object__int___GetEntity(
                  v93,
                  partyServantListViewManager,
                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12065/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12064/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v100 = sub_1BE4B74(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          partyServantListViewManager = (int64_t)Rarity__getRarityType(Rarity, 0LL);
          if ( !v100 )
            goto LABEL_120;
          v108 = partyServantListViewManager;
          if ( !partyServantListViewManager
            || (partyServantListViewManager = sub_1BE4C08(
                                                partyServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v100 + 24) )
              goto LABEL_121;
            *(_QWORD *)(v100 + 32) = v108;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v100 + 32), v108, v102, v103, v104, v105, v106, v107);
            if ( !v96 )
              goto LABEL_120;
            partyServantListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v96, 0LL);
            v115 = partyServantListViewManager;
            if ( !partyServantListViewManager
              || (partyServantListViewManager = sub_1BE4C08(
                                                  partyServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v100 + 24) <= 1u )
                goto LABEL_121;
              *(_QWORD *)(v100 + 40) = v115;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v100 + 40), v115, v109, v110, v111, v112, v113, v114);
              v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                       0LL);
              v117 = Entity[6].klass;
              *(_QWORD *)&v160.fields.fakeValue = Entity[6].monitor;
              v118 = v116;
              *(_QWORD *)&v160.fields.currentCryptoKey = v117;
              partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                              v160,
                                              0LL);
              if ( !Master_object )
                goto LABEL_120;
              partyServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                       (ServantLimitImageMaster_o *)Master_object,
                                                       v118,
                                                       partyServantListViewManager,
                                                       0LL);
              v125 = partyServantListViewManager;
              if ( !partyServantListViewManager
                || (partyServantListViewManager = sub_1BE4C08(
                                                    partyServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v100 + 24) <= 2u )
                  goto LABEL_121;
                *(_QWORD *)(v100 + 48) = v125;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v100 + 48), v125, v119, v120, v121, v122, v123, v124);
                if ( !*v53 )
                  goto LABEL_120;
                partyServantListViewManager = (int64_t)(*v53)->fields.userServantEntity;
                if ( !partyServantListViewManager )
                  goto LABEL_120;
                v126 = UserServantEntity__getRarity((UserServantEntity_o *)partyServantListViewManager, 0LL);
                partyServantListViewManager = (int64_t)Rarity__getRarityType(v126, 0LL);
                v133 = partyServantListViewManager;
                if ( !partyServantListViewManager
                  || (partyServantListViewManager = sub_1BE4C08(
                                                      partyServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v100 + 24) <= 3u )
                    goto LABEL_121;
                  *(_QWORD *)(v100 + 56) = v133;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v100 + 56), v133, v127, v128, v129, v130, v131, v132);
                  if ( !*v53 )
                    goto LABEL_120;
                  partyServantListViewManager = (int64_t)(*v53)->fields.servantEntity;
                  if ( !partyServantListViewManager )
                    goto LABEL_120;
                  partyServantListViewManager = (int64_t)ServantEntity__getClassName(
                                                           (ServantEntity_o *)partyServantListViewManager,
                                                           0LL);
                  v140 = partyServantListViewManager;
                  if ( !partyServantListViewManager
                    || (partyServantListViewManager = sub_1BE4C08(
                                                        partyServantListViewManager,
                                                        *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v100 + 24) <= 4u )
                      goto LABEL_121;
                    *(_QWORD *)(v100 + 64) = v140;
                    sub_1BE4A70((PartyOrganizationUtility_o *)(v100 + 64), v140, v134, v135, v136, v137, v138, v139);
                    partyServantListViewManager = (int64_t)*v53;
                    if ( !*v53 )
                      goto LABEL_120;
                    partyServantListViewManager = PartyServantListViewItem__get_SvtId(
                                                    (PartyServantListViewItem_o *)partyServantListViewManager,
                                                    (const MethodInfo *)v33);
                    if ( !*v53 )
                      goto LABEL_120;
                    v141 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v53)->fields.userServantEntity;
                    if ( !v141 )
                      goto LABEL_120;
                    v142 = partyServantListViewManager;
                    v143 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v141[6], 0LL);
                    partyServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                             (ServantLimitImageMaster_o *)Master_object,
                                                             v142,
                                                             v143,
                                                             0LL);
                    v150 = partyServantListViewManager;
                    if ( !partyServantListViewManager
                      || (partyServantListViewManager = sub_1BE4C08(
                                                          partyServantListViewManager,
                                                          *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v100 + 24) > 5u )
                      {
                        *(_QWORD *)(v100 + 72) = v150;
                        sub_1BE4A70((PartyOrganizationUtility_o *)(v100 + 72), v150, v144, v145, v146, v147, v148, v149);
                        v151 = System_String__Format_62713316(v99, (System_Object_array *)v100, 0LL);
                        v152 = LocalizationManager__Get((System_String_o *)StringLiteral_12063/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v153 = LocalizationManager__Get((System_String_o *)StringLiteral_12062/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        v154 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v155 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v155,
                          (Il2CppObject *)v31,
                          Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__,
                          0LL);
                        partyServantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        if ( v154 )
                        {
                          CommonUI__OpenConfirmDialog_30873636(
                            (CommonUI_o *)v154,
                            v98,
                            v151,
                            v152,
                            v153,
                            v155,
                            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                            0,
                            0,
                            0LL);
                          return;
                        }
LABEL_120:
                        sub_1BE4D28(partyServantListViewManager, v33);
                      }
LABEL_121:
                      sub_1BE4D30(partyServantListViewManager, v33);
                    }
                  }
                }
              }
            }
          }
          v156 = sub_1BE4D4C();
          sub_1BE4BF4(v156, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v76, 2, 0LL);
        this->fields.state = 2;
        v59 = this->fields.partyServantListViewManager;
        v73 = PartyServantListViewManager_CallbackFunc_TypeInfo;
LABEL_48:
        v60 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BE4D18(v73);
        v62 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
        break;
      default:
        return;
    }
LABEL_71:
    v84 = (int64_t)v60;
    PartyServantListViewManager_CallbackFunc___ctor(v60, (Il2CppObject *)this, v62, v61);
    if ( v59 )
    {
      v59->fields.callbackFunc = (struct PartyServantListViewManager_CallbackFunc_o *)v84;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v59->fields.callbackFunc, v84, v85, v86, v87, v88, v89, v90);
      PartyServantListViewManager__SetMode_33005120(v59, 2, v91);
      return;
    }
    goto LABEL_120;
  }
  v63 = Method_PartyServantSelectMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
    v63 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OnSelectItem__);
  v64 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v63, v63[4]);
  OverwriteAssetSoundName__PlaySystemSe(v64, 1, 0LL);
  v66 = -1;
  this->fields.state = 3;
  v67 = this;
  v68 = 0;
LABEL_35:
  PartyServantSelectMenu__Callback(v67, v68, v66, v65);
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
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  struct TitleInfoControl_o *titleInfo; // x8
  PartyServantSelectMenu_o *v25; // x26
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x7
  const MethodInfo *v29; // x2
  System_Int32_array *waveBattleEnemyClassIds; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v32; // x20

  v18 = this;
  if ( (byte_4B62AB8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, baseDeckItemList);
    this = (PartyServantSelectMenu_o *)sub_1BE4ACC(&Method_PartyServantSelectMenu_EndOpen__, v19);
    byte_4B62AB8 = 1;
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
      sub_1BE4A70(&v18->fields.callbackFunc);
      v18->fields.openCallbackFunc = openCallback;
      sub_1BE4A70(&v18->fields.openCallbackFunc);
      PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 0, v22);
      PartyServantSelectMenu__EndOpen(v18, v23);
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
          v25 = this;
          v18->fields.tutorialMode = tutorialMode;
          v18->fields.isSelectedSvt = titleInfo != 0LL;
          v18->fields.callbackFunc = callback;
          sub_1BE4A70(&v18->fields.callbackFunc);
          v18->fields.openCallbackFunc = openCallback;
          sub_1BE4A70(&v18->fields.openCallbackFunc);
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
                PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 1, v27);
                this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                if ( this )
                {
                  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 71, 0LL);
                  this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                  if ( this )
                  {
                    TitleInfoControl__setBackBtnSprite_38070848((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
                        v28);
                      this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                      if ( this )
                      {
                        PartyServantListViewManager__SetMode_33005120((PartyServantListViewManager_o *)this, 1, v29);
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
                          HIDWORD(v25[1].fields.baseWindow),
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
                            v32 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                            System_Action___ctor(v32, (Il2CppObject *)v18, Method_PartyServantSelectMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)v18, v32, 0LL);
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
      sub_1BE4D28(this, baseDeckItemList);
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
      PartyServantSelectMenu__OpenServantDetail_33024884(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        v5);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_33005120(partyServantListViewManager, 4, v7);
        return;
      }
    }
LABEL_7:
    sub_1BE4D28(partyServantListViewManager, userServantId);
  }
}


void __fastcall PartyServantSelectMenu__OpenServantDetail_33024884(
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

  if ( (byte_4B62ACD & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, partyServantListViewItem);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndShowServantWithQuest__, v8);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndShowServant__, v9);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OpenServantDetail__, v10);
    sub_1BE4ACC(&ServantStatusDialog_ResultDelegate_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4B62ACD = 1;
  }
  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_28;
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
  if ( isPlaySe )
  {
    v14 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BE4AE4(Method_PartyServantSelectMenu_OpenServantDetail__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v14, v14[4]);
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
  partyServantListViewManager = (ListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
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
      sub_1BE4D30(partyServantListViewManager, partyServantListViewItem);
    equipServantEntity = (struct ServantEntity_o *)equipIdList->m_Items[0];
  }
  this->fields._SelectServantEquipId_k__BackingField = (int64_t)equipServantEntity;
  partyIndex = partyServantListViewItem->fields.partyIndex;
  PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = partyServantListViewItem->fields.userServantEntity;
  v24 = (CommonUI_o *)Instance;
  if ( (partyIndex & 0x80000000) != 0 )
  {
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v28 = (ServantStatusDialog_ResultDelegate_o *)sub_1BE4D18(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v28,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( !v24 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30884668(v24, 0, v23, v28, this->fields.canMoveCombine, 0LL);
    }
    else
    {
      v30 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0LL);
      if ( !v24 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30884432(v24, 0, v23, v30, this->fields.canMoveCombine, 0LL);
    }
  }
  else
  {
    v25 = partyServantListViewItem->fields.equipIdList;
    questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v27 = (ServantStatusDialog_ResultDelegate_o *)sub_1BE4D18(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v27,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( v24 )
      {
        CommonUI__OpenServantStatusDialog_30885176(
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
      sub_1BE4D28(partyServantListViewManager, partyServantListViewItem);
    }
    v29 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    ServantStatusDialog_EndIndividualityDelegate___ctor(
      v29,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServant__,
      0LL);
    if ( !v24 )
      goto LABEL_28;
    CommonUI__OpenServantStatusDialog_30884904(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__Open_33017304(
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
  const MethodInfo *v35; // x1
  UnityEngine_GameObject_o *v36; // x25
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x6
  const MethodInfo *v39; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v41; // x20

  if ( (byte_4B62AB9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, partyItem);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndOpen__, v17);
    byte_4B62AB9 = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v19 = 1 << state;
    if ( (v19 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        *(int64_t *)&num,
        tutorialMode,
        (System_String_o *)setupInfo,
        (BattleSetupInfo_o *)questRestrictionInfo,
        (FollowerInfo_o *)callback,
        (PartyListViewItem_o *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_1BE4A70(
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
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        *(int64_t *)&num,
        tutorialMode,
        (System_String_o *)setupInfo,
        (BattleSetupInfo_o *)questRestrictionInfo,
        (FollowerInfo_o *)callback,
        (PartyListViewItem_o *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_1BE4A70(
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
      TitleInfoControl__setBackBtnSprite_38070848((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_33000160(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v38);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_33005120((PartyServantListViewManager_o *)gameObject, 1, v39),
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
                                                       v35),
            !scaleChangeTabSprite) )
      {
LABEL_19:
        sub_1BE4D28(gameObject, v35);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v41 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v41, 0LL);
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

  if ( (byte_4B62ACB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__, v9);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B62ACB = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1BE4D28(limitCountSupport, v14);
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
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int32_t v51; // w1

  if ( (byte_4B62ABD & 1) == 0 )
  {
    sub_1BE4ACC(&PartyServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnSelectItem__, v9);
    sub_1BE4ACC(&StringLiteral_17889/*"button_push_reg"*/, v10);
    sub_1BE4ACC(&StringLiteral_17890/*"button_push_unreg"*/, v11);
    sub_1BE4ACC(&StringLiteral_17875/*"button_allchoice_reg"*/, v12);
    sub_1BE4ACC(&StringLiteral_17878/*"button_alllock_unreg"*/, v13);
    sub_1BE4ACC(&StringLiteral_10491/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/, v14);
    sub_1BE4ACC(&StringLiteral_10494/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/, v15);
    sub_1BE4ACC(&StringLiteral_17891/*"button_select_reg"*/, v16);
    sub_1BE4ACC(&StringLiteral_10492/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/, v17);
    sub_1BE4ACC(&StringLiteral_10493/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/, v18);
    sub_1BE4ACC(&StringLiteral_17892/*"button_select_unreg"*/, v19);
    sub_1BE4ACC(&StringLiteral_17877/*"button_alllock_reg"*/, v20);
    sub_1BE4ACC(&StringLiteral_17876/*"button_allchoice_unreg"*/, v21);
    byte_4B62ABD = 1;
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
    v24 = &StringLiteral_17891/*"button_select_reg"*/;
    if ( modeKind )
      v24 = &StringLiteral_17892/*"button_select_unreg"*/;
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
    v29 = &StringLiteral_17877/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v29 = &StringLiteral_17878/*"button_alllock_unreg"*/;
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
    v32 = &StringLiteral_17875/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v32 = &StringLiteral_17876/*"button_allchoice_unreg"*/;
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
      v36 = &StringLiteral_17889/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v36 = &StringLiteral_17890/*"button_push_unreg"*/;
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
        v40 = &StringLiteral_10494/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_50;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10492/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_50;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10491/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_50;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_10493/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
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
      v51 = 1;
      goto LABEL_58;
    }
LABEL_59:
    sub_1BE4D28(statusTabButton, *(_QWORD *)&modeKind);
  }
  if ( !statusTabButton )
    goto LABEL_59;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)statusTabButton,
    modeKind,
    (const MethodInfo *)isInit);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  v43 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BE4D18(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v43,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v44);
  if ( !partyServantListViewManager )
    goto LABEL_59;
  partyServantListViewManager->fields.callbackFunc = v43;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&partyServantListViewManager->fields.callbackFunc,
    (int64_t)v43,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = 2;
  statusTabButton = (UnityEngine_Behaviour_o *)partyServantListViewManager;
LABEL_58:
  PartyServantListViewManager__SetMode_33005120(
    (PartyServantListViewManager_o *)statusTabButton,
    v51,
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // x1
  System_Int64_array *v19; // x2
  bool v20; // w4
  bool v21; // w5
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  System_Int64_array *v29; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B62AC4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_EndStatusSync__, v7);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4B62AC4 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v29 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapChoiceList(partyServantListViewManager, &choiceList, &v29, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v28,
                                                                       (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v19 = v29;
        v18 = choiceList;
        v21 = 1;
        v20 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BE4D28(partyServantListViewManager, callback);
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
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v17,
                                                                       (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v19 = unlockList;
        v18 = lockList;
        v20 = 1;
        v21 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)partyServantListViewManager,
          v18,
          v19,
          0,
          v20,
          v21,
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

  if ( (byte_4B62AB6 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B62AB6 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1BE4FE8(v8);
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

  if ( (byte_4B62AB7 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B62AB7 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1BE4FE8(v8);
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A21840;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A217E8;
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
  if ( (byte_4B62BCC & 1) == 0 )
  {
    sub_1BE4ACC(&PartyServantSelectMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4B62BCC = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12, item, callback, object);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v11, callback, object);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A2189C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A21854;
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
  if ( (byte_4B62BCD & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, isRequest);
    byte_4B62BCD = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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

  if ( (byte_4B62BCE & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&PartyServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BE4ACC(&Method_PartyServantSelectMenu_OnSelectItem__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__, v8);
    byte_4B62BCE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_30874304(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1BE4D28(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  partyServantListViewManager = _4__this->fields.partyServantListViewManager;
  v21 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BE4D18(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !partyServantListViewManager )
    goto LABEL_12;
  PartyServantListViewManager__SetMode(partyServantListViewManager, 2, v21, 0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  PartyServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BE4D28(0LL, method);
  PartyServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}