void __fastcall PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12175 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B12175 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
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
    sub_1BCA784(p_callbackFunc, 0LL, *(int64_t *)&n, (int32_t)method, v4, v5, v6, v7);
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1BCAA3C(0LL, v14);
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
    sub_1BCAA3C(0LL, method);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_32884884(this, 0LL, v2);
}


void __fastcall PartyServantSelectMenu__Close_32884884(
        PartyServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x20

  if ( (byte_4B12163 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndClose__, v6, v7);
    byte_4B12163 = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1BCAA3C(0LL, v8);
  PartyServantListViewManager__SetMode_32871668(partyServantListViewManager, 1, v9);
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.state = 4;
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v20, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCardFavoriteRequest(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  PartyServantListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_4B12173 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyServantListViewManager_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnSelectItem__, v4, v5);
    byte_4B12173 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v7 = this->fields.partyServantListViewManager,
        v11 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                              v8,
                                                              v9,
                                                              v10),
        PartyServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v12),
        !v7) )
  {
    sub_1BCAA3C(partyServantListViewManager, result);
  }
  v7->fields.callbackFunc = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&v7->fields.callbackFunc, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  PartyServantListViewManager__SetMode_32871668(v7, 2, v19);
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
      sub_1BCAA3C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32871668(partyServantListViewManager, 3, v6);
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
      sub_1BCAA3C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32871668(partyServantListViewManager, 3, v6);
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
      sub_1BCAA3C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32871668(partyServantListViewManager, 3, v6);
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
      sub_1BCAA3C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32871668(partyServantListViewManager, 3, v6);
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
      sub_1BCAA3C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32871668(partyServantListViewManager, 3, v6);
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
      sub_1BCAA3C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32871668(partyServantListViewManager, 3, v6);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__EndCloseShowServant(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  PartyServantListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3

  if ( (byte_4B1216F & 1) == 0 )
  {
    sub_1BCA7E0(&PartyServantListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnSelectItem__, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6, v7);
    byte_4B1216F = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager )
    goto LABEL_8;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)partyServantListViewManager,
    this->fields.modeKind,
    v2);
  v9 = this->fields.partyServantListViewManager;
  v13 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                        PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                        v10,
                                                        v11,
                                                        v12);
  PartyServantListViewManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v14);
  if ( !v9
    || (v9->fields.callbackFunc = v13,
        sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.callbackFunc, (int64_t)v13, v15, v16, v17, v18, v19, v20),
        PartyServantListViewManager__SetMode_32871668(v9, 2, v21),
        (partyServantListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_1BCAA3C(partyServantListViewManager, method);
  }
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)partyServantListViewManager + 16), 0LL) )
    PartyServantSelectMenu__Callback(this, 3, -1, v22);
}


void __fastcall PartyServantSelectMenu__EndCloseShowServantQuestJump(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B12170 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B12170 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialSelect; // w2
  const MethodInfo *v5; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  tutorialSelect = this->fields.tutorialSelect;
  this->fields.state = 3;
  PartyServantSelectMenu__Callback(this, 1, tutorialSelect, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndOpen(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
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
  int32_t v15; // w1
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  PartyServantListViewManager_o *tutorialMaskBase; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x21
  float v32; // s0
  float v33; // s3
  float v34; // s4
  int v35; // s1
  int v36; // s5
  int v37; // s6
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  PartyServantListViewManager_CallbackFunc_o *v43; // x21
  const MethodInfo *v44; // x3
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  const MethodInfo *v51; // x2
  PartyOrganizationUtility_o *p_openCallbackFunc; // x19
  struct System_Action_o *v53; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4B12161 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyServantListViewManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&FSUtility_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__, v9, v10);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnSelectItem__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    byte_4B12161 = 1;
  }
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v3);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v43 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                          PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                          v40,
                                                          v41,
                                                          v42);
    PartyServantListViewManager_CallbackFunc___ctor(
      v43,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      v44);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v43;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&partyServantListViewManager->fields.callbackFunc,
        (int64_t)v43,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      PartyServantListViewManager__SetMode_32871668(partyServantListViewManager, 2, v51);
      goto LABEL_17;
    }
LABEL_20:
    sub_1BCAA3C(tutorialMaskBase, v16);
  }
  v15 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v15, 0, v3);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  PartyServantListViewManager__SetMode_32871668(tutorialMaskBase, 1, v17);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_17;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v25);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
    goto LABEL_20;
  v32 = -367.0;
  v33 = -450.0;
  if ( !IsUnderVista )
    v33 = -442.0;
  if ( IsUnderVista )
    v32 = -375.0;
  v34 = -30.0;
  v35 = 1120403456;
  v36 = 1125515264;
  v37 = 1127481344;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v32,
    0.0,
    *(UnityEngine_Rect_o *)&v33,
    v31,
    0LL);
LABEL_17:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc;
  v53 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1BCA784(p_openCallbackFunc, 0LL, v19, v20, v21, v22, v23, v24);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v53->fields.m_target)(
      v53->fields.original_method_info,
      *(_QWORD *)&v53->fields.extra_arg);
  }
}


void __fastcall PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Behaviour_o *statusTabButton; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  PartyServantListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_4B12162 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyServantListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnSelectItem__, v4, v5);
    byte_4B12162 = 1;
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
        v11 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                              v8,
                                                              v9,
                                                              v10),
        PartyServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          v12),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_1BCAA3C(statusTabButton, method);
  }
  partyServantListViewManager->fields.callbackFunc = v11;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&partyServantListViewManager->fields.callbackFunc,
    (int64_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  PartyServantListViewManager__SetMode_32871668(partyServantListViewManager, 5, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndShowServant(
        PartyServantSelectMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v14; // x2
  int32_t v15; // w1
  RandomLimitCountManager_c *v16; // x0
  Il2CppObject *Instance; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x21

  if ( (byte_4B1216D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndCloseShowServant__, v7, v8);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    byte_4B1216D = 1;
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
          v15 = 4;
LABEL_18:
          PartyServantListViewManager__SetMode_32871668(partyServantListViewManager, v15, v14);
          goto LABEL_19;
        }
LABEL_17:
        v15 = 3;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1BCAA3C(partyServantListViewManager, isDecide);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, isDecide);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, isDecide, isNeedSort);
    byte_4B12177 = 1;
  }
  v16 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, isDecide);
    v16 = RandomLimitCountManager_TypeInfo;
  }
  if ( v16->static_fields->enableRandomLimitCount )
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v21, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1216E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    byte_4B1216E = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v18, v19);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v17, 0LL);
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
    sub_1BCA784(p_requedstCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(0LL, method);
  PartyServantListViewManager__DestroyList(partyServantListViewManager, method);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyServantSelectMenu__OnClickCancel(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  PartyServantSelectMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_4B12166 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndClickCancel__, method, v2);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B12166 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_1BCAA3C(0LL, method);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    v9 = Method_PartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnClickCancel__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
    v14 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                            PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                            v11,
                                                            v12,
                                                            v13);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickCancel__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v14, v15);
  }
}


void __fastcall PartyServantSelectMenu__OnClickDecide(PartyServantSelectMenu_o *this, const MethodInfo *method)
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
  PartyServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B12165 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndClickDecide__, method, v2);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnClickDecide__, v4, v5);
    sub_1BCA7E0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B12165 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v8 = Method_PartyServantSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                            PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                            v10,
                                                            v11,
                                                            v12);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickDecide__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v13, v14);
  }
}


void __fastcall PartyServantSelectMenu__OnClickScaleChange(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4B12171 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnClickScaleChange__, method, v2);
    byte_4B12171 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ChangeIconScale(partyServantListViewManager, v6),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                                           partyServantListViewManager,
                                                                           v6),
          !scaleChangeTabSprite) )
    {
      sub_1BCAA3C(partyServantListViewManager, v6);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)partyServantListViewManager, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabChoice(PartyServantSelectMenu_o *this, const MethodInfo *method)
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
  const MethodInfo *v12; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v16; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4B12169 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnClickTabChoice__, v4, v5);
    sub_1BCA7E0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B12169 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_PartyServantSelectMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnClickTabChoice__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v14 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v10,
                                                                v11,
                                                                v12);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v14, v15);
        return;
      }
      v16 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                              PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                              v10,
                                                              v11,
                                                              v12);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabChoice__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v16, v17);
    }
    PartyServantSelectMenu__SetTabKind(this, 2, 0, v12);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabLock(PartyServantSelectMenu_o *this, const MethodInfo *method)
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
  const MethodInfo *v12; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v16; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4B12168 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnClickTabLock__, v4, v5);
    sub_1BCA7E0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B12168 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_PartyServantSelectMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnClickTabLock__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v14 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v10,
                                                                v11,
                                                                v12);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v14, v15);
        return;
      }
      v16 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                              PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                              v10,
                                                              v11,
                                                              v12);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabLock__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v16, v17);
    }
    PartyServantSelectMenu__SetTabKind(this, 1, 0, v12);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabPush(PartyServantSelectMenu_o *this, const MethodInfo *method)
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
  PartyServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B1216A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndClickTabPush__, method, v2);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnClickTabPush__, v4, v5);
    sub_1BCA7E0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B1216A = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_PartyServantSelectMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnClickTabPush__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                            PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                            v10,
                                                            v11,
                                                            v12);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabPush__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v13, v14);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabStatus(PartyServantSelectMenu_o *this, const MethodInfo *method)
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
  PartyServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B12167 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndClickTabStatus__, method, v2);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnClickTabStatus__, v4, v5);
    sub_1BCA7E0(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B12167 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_PartyServantSelectMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnClickTabStatus__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                            PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                            v10,
                                                            v11,
                                                            v12);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabStatus__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v13, v14);
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
  __int64 v55; // x20
  int64_t partyServantListViewManager; // x0
  PartyServantListViewItem_o *v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  const MethodInfo *v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int32_t state; // w8
  PartyServantListViewItem_o *Item; // x1
  int32_t tutorialMode; // w8
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  Il2CppObject *Instance; // x20
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  System_Action_o *v79; // x21
  PartyServantListViewItem_o **v80; // x21
  __int64 v81; // x2
  const MethodInfo *v82; // x3
  PartyServantListViewItem_o *v83; // x8
  unsigned int commonRestrictionId; // w10
  unsigned int v85; // w20
  int32_t modeKind; // w8
  struct PartyServantListViewManager_o *v87; // x20
  PartyServantListViewManager_CallbackFunc_o *v88; // x0
  const MethodInfo *v89; // x3
  intptr_t v90; // w2
  _QWORD *v91; // x0
  System_Reflection_MethodBase_o *v92; // x0
  const MethodInfo *v93; // x3
  int32_t v94; // w2
  PartyServantSelectMenu_o *v95; // x0
  int32_t v96; // w1
  _QWORD *v97; // x0
  System_Reflection_MethodBase_o *v98; // x0
  __int64 v99; // x2
  __int64 v100; // x3
  _QWORD *v101; // x0
  System_Reflection_MethodBase_o *v102; // x0
  PartyServantListViewManager_CallbackFunc_c *v103; // x0
  _BOOL4 isEnabled; // w23
  _QWORD *v105; // x0
  System_Reflection_MethodBase_o *v106; // x0
  const MethodInfo *v107; // x2
  int64_t v108; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v110; // q1
  _QWORD *v111; // x0
  System_Reflection_MethodBase_o *v112; // x0
  _QWORD *v113; // x0
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x3
  int64_t v117; // x21
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  const MethodInfo *v124; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v126; // x19
  void *monitor; // x22
  Il2CppClass *klass; // x23
  __int64 v129; // x1
  Il2CppObject *v130; // x26
  __int64 v131; // x1
  Il2CppObject *Master_object; // x24
  System_String_o *v133; // x19
  System_String_o *v134; // x22
  __int64 v135; // x23
  __int64 v136; // x1
  int32_t Rarity; // w27
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  int64_t v144; // x27
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int64_t v151; // x26
  int32_t v152; // w0
  Il2CppClass *v153; // x8
  int32_t v154; // w25
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int64_t v161; // x25
  int32_t v162; // w0
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  int64_t v169; // x25
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  int64_t v176; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v177; // x8
  int32_t v178; // w21
  int32_t v179; // w0
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  int64_t v186; // x21
  System_String_o *v187; // x21
  System_String_o *v188; // x22
  System_String_o *v189; // x23
  Il2CppObject *v190; // x24
  __int64 v191; // x1
  __int64 v192; // x2
  __int64 v193; // x3
  CommonConfirmDialog_ClickDelegate_o *v194; // x25
  __int64 v195; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v196; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v197; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v199; // 0:x0.16

  if ( (byte_4B1216C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&PartyServantListViewManager_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&object___TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__, v33, v34);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnSelectItem__, v35, v36);
    sub_1BCA7E0(&Rarity_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    sub_1BCA7E0(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__, v43, v44);
    sub_1BCA7E0(&PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo, v45, v46);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v53, v54);
    byte_4B1216C = 1;
  }
  v55 = sub_1BCAA2C(PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n, method);
  PartyServantSelectMenu___c__DisplayClass68_0___ctor((PartyServantSelectMenu___c__DisplayClass68_0_o *)v55, 0LL);
  if ( !v55 )
    goto LABEL_120;
  *(_QWORD *)(v55 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 16), (int64_t)this, v58, v59, v60, v61, v62, v63);
  state = this->fields.state;
  if ( state == 7 )
  {
    tutorialMode = this->fields.tutorialMode;
    this->fields.tutorialSelect = n;
    if ( tutorialMode != 2 )
      return;
    this->fields.state = 8;
    v73 = Method_PartyServantSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v73 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnSelectItem__);
    v74 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v73, v73[4]);
    OverwriteAssetSoundName__PlaySystemSe(v74, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v79 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v76, v77, v78);
    System_Action___ctor(v79, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v79, 0LL);
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
    Item = PartyServantListViewManager__GetItem((PartyServantListViewManager_o *)partyServantListViewManager, n, v64);
  }
  *(_QWORD *)(v55 + 24) = Item;
  v80 = (PartyServantListViewItem_o **)(v55 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 24), (int64_t)Item, (int64_t)v64, v65, v66, v67, v68, v69);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      this->fields.state = 2;
      v87 = this->fields.partyServantListViewManager;
      v88 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                            PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                            v57,
                                                            v81,
                                                            v82);
      v90 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    else
    {
      v57 = *v80;
      if ( !*v80 )
        goto LABEL_120;
      if ( v57->fields.userServantEntity )
      {
        PartyServantSelectMenu__OpenServantDetail_32891432(this, v57, 1, v82);
        return;
      }
      v111 = Method_PartyServantSelectMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v111 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnSelectItem__);
      v112 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v111, v111[4]);
LABEL_70:
      OverwriteAssetSoundName__PlaySystemSe(v112, 2, 0LL);
      v87 = this->fields.partyServantListViewManager;
      v88 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                            PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                            v114,
                                                            v115,
                                                            v116);
      v90 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
    }
    goto LABEL_71;
  }
  if ( kind == 2 )
  {
    switch ( this->fields.modeKind )
    {
      case 0:
        v83 = *v80;
        if ( !*v80 )
          goto LABEL_120;
        if ( !v83->fields.isBase && v83->fields.isQuestRestriction || v83->fields.isSame )
          goto LABEL_65;
        commonRestrictionId = v83->fields.commonRestrictionId;
        v85 = commonRestrictionId >> 31;
        if ( !v83->fields.isBase && (commonRestrictionId & 0x80000000) != 0 )
        {
          if ( v83->fields.isLeave
            || (v83->fields.fatigureTime & 0x8000000000000000LL) == 0
            || v83->fields._IsAllOutBattle_k__BackingField
            || v83->fields._IsDataLost_k__BackingField
            || v83->fields._TimesToRestart_k__BackingField > 0 )
          {
LABEL_65:
            LOBYTE(v85) = 0;
          }
          else
          {
            LOBYTE(v85) = !v83->fields._IsClearedWave_k__BackingField;
          }
        }
        v113 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v113 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnSelectItem__);
        v112 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v113, v113[4]);
        if ( (v85 & 1) == 0 )
          goto LABEL_70;
        OverwriteAssetSoundName__PlaySystemSe(v112, 0, 0LL);
        v96 = 1;
        v95 = this;
        v94 = n;
        this->fields.state = 3;
        goto LABEL_35;
      case 1:
        v97 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v97 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnSelectItem__);
        v98 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v97, v97[4]);
        OverwriteAssetSoundName__PlaySystemSe(v98, 11, 0LL);
        if ( !*v80 )
          goto LABEL_120;
        (*v80)->fields.isSwapLock ^= 1u;
        goto LABEL_47;
      case 2:
        v101 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v101 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnSelectItem__);
        v102 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v101, v101[4]);
        OverwriteAssetSoundName__PlaySystemSe(v102, 0, 0LL);
        if ( !*v80 )
          goto LABEL_120;
        (*v80)->fields.isSwapChoice ^= 1u;
LABEL_47:
        this->fields.state = 2;
        v87 = this->fields.partyServantListViewManager;
        v103 = PartyServantListViewManager_CallbackFunc_TypeInfo;
        goto LABEL_48;
      case 3:
        if ( !*v80 )
          goto LABEL_120;
        isEnabled = (*v80)->fields.isEnabled;
        v105 = Method_PartyServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v105 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnSelectItem__);
        v106 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v105, v105[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v106, 0, 0LL);
          partyServantListViewManager = (int64_t)UserGameMaster__getSelfUserGame(0LL);
          if ( !partyServantListViewManager )
            goto LABEL_120;
          v108 = *(_QWORD *)(partyServantListViewManager + 120);
          if ( !v108 )
          {
LABEL_60:
            PartyServantSelectMenu__PushRequest(this, *v80, v107);
            return;
          }
          if ( !*v80 )
            goto LABEL_120;
          userServantEntity = (*v80)->fields.userServantEntity;
          if ( !userServantEntity )
            goto LABEL_120;
          v110 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v197.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v197.fields.fakeValue = v110;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v57);
          v196 = v197;
          if ( v108 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v196, 0LL) )
            goto LABEL_60;
          partyServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_120;
          partyServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !partyServantListViewManager )
            goto LABEL_120;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager,
                     v108,
                     (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          partyServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !partyServantListViewManager )
            goto LABEL_120;
          partyServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)partyServantListViewManager,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_120;
          v126 = (DataMasterBase_TMaster__TEntity__PKType__o *)partyServantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v57);
          *(_QWORD *)&v198.fields.currentCryptoKey = klass;
          *(_QWORD *)&v198.fields.fakeValue = monitor;
          partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v198, 0LL);
          if ( !v126 )
            goto LABEL_120;
          v130 = DataMasterBase_object__object__int___GetEntity(
                   v126,
                   partyServantListViewManager,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v129);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v131);
          v133 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v134 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v135 = sub_1BCA888(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v136);
          partyServantListViewManager = (int64_t)Rarity__getRarityType(Rarity, 0LL);
          if ( !v135 )
            goto LABEL_120;
          v144 = partyServantListViewManager;
          if ( !partyServantListViewManager
            || (partyServantListViewManager = sub_1BCA91C(
                                                partyServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v135 + 24) )
              goto LABEL_121;
            *(_QWORD *)(v135 + 32) = v144;
            sub_1BCA784((PartyOrganizationUtility_o *)(v135 + 32), v144, v138, v139, v140, v141, v142, v143);
            if ( !v130 )
              goto LABEL_120;
            partyServantListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v130, 0LL);
            v151 = partyServantListViewManager;
            if ( !partyServantListViewManager
              || (partyServantListViewManager = sub_1BCA91C(
                                                  partyServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v135 + 24) <= 1u )
                goto LABEL_121;
              *(_QWORD *)(v135 + 40) = v151;
              sub_1BCA784((PartyOrganizationUtility_o *)(v135 + 40), v151, v145, v146, v147, v148, v149, v150);
              v152 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                       0LL);
              v153 = Entity[6].klass;
              *(_QWORD *)&v199.fields.fakeValue = Entity[6].monitor;
              v154 = v152;
              *(_QWORD *)&v199.fields.currentCryptoKey = v153;
              partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v199,
                                              0LL);
              if ( !Master_object )
                goto LABEL_120;
              partyServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                       (ServantLimitImageMaster_o *)Master_object,
                                                       v154,
                                                       partyServantListViewManager,
                                                       0LL);
              v161 = partyServantListViewManager;
              if ( !partyServantListViewManager
                || (partyServantListViewManager = sub_1BCA91C(
                                                    partyServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v135 + 24) <= 2u )
                  goto LABEL_121;
                *(_QWORD *)(v135 + 48) = v161;
                sub_1BCA784((PartyOrganizationUtility_o *)(v135 + 48), v161, v155, v156, v157, v158, v159, v160);
                if ( !*v80 )
                  goto LABEL_120;
                partyServantListViewManager = (int64_t)(*v80)->fields.userServantEntity;
                if ( !partyServantListViewManager )
                  goto LABEL_120;
                v162 = UserServantEntity__getRarity((UserServantEntity_o *)partyServantListViewManager, 0LL);
                partyServantListViewManager = (int64_t)Rarity__getRarityType(v162, 0LL);
                v169 = partyServantListViewManager;
                if ( !partyServantListViewManager
                  || (partyServantListViewManager = sub_1BCA91C(
                                                      partyServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v135 + 24) <= 3u )
                    goto LABEL_121;
                  *(_QWORD *)(v135 + 56) = v169;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v135 + 56), v169, v163, v164, v165, v166, v167, v168);
                  if ( !*v80 )
                    goto LABEL_120;
                  partyServantListViewManager = (int64_t)(*v80)->fields.servantEntity;
                  if ( !partyServantListViewManager )
                    goto LABEL_120;
                  partyServantListViewManager = (int64_t)ServantEntity__getClassName(
                                                           (ServantEntity_o *)partyServantListViewManager,
                                                           0LL);
                  v176 = partyServantListViewManager;
                  if ( !partyServantListViewManager
                    || (partyServantListViewManager = sub_1BCA91C(
                                                        partyServantListViewManager,
                                                        *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v135 + 24) <= 4u )
                      goto LABEL_121;
                    *(_QWORD *)(v135 + 64) = v176;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v135 + 64), v176, v170, v171, v172, v173, v174, v175);
                    partyServantListViewManager = (int64_t)*v80;
                    if ( !*v80 )
                      goto LABEL_120;
                    partyServantListViewManager = PartyServantListViewItem__get_SvtId(
                                                    (PartyServantListViewItem_o *)partyServantListViewManager,
                                                    (const MethodInfo *)v57);
                    if ( !*v80 )
                      goto LABEL_120;
                    v177 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v80)->fields.userServantEntity;
                    if ( !v177 )
                      goto LABEL_120;
                    v178 = partyServantListViewManager;
                    v179 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v177[6], 0LL);
                    partyServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                             (ServantLimitImageMaster_o *)Master_object,
                                                             v178,
                                                             v179,
                                                             0LL);
                    v186 = partyServantListViewManager;
                    if ( !partyServantListViewManager
                      || (partyServantListViewManager = sub_1BCA91C(
                                                          partyServantListViewManager,
                                                          *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v135 + 24) > 5u )
                      {
                        *(_QWORD *)(v135 + 72) = v186;
                        sub_1BCA784((PartyOrganizationUtility_o *)(v135 + 72), v186, v180, v181, v182, v183, v184, v185);
                        v187 = System_String__Format_62415728(v134, (System_Object_array *)v135, 0LL);
                        v188 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v189 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        v190 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v194 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                        v191,
                                                                        v192,
                                                                        v193);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v194,
                          (Il2CppObject *)v55,
                          Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__,
                          0LL);
                        partyServantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v57);
                        if ( v190 )
                        {
                          CommonUI__OpenConfirmDialog_30766228(
                            (CommonUI_o *)v190,
                            v133,
                            v187,
                            v188,
                            v189,
                            v194,
                            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                            0,
                            0,
                            0LL);
                          return;
                        }
LABEL_120:
                        sub_1BCAA3C(partyServantListViewManager, v57);
                      }
LABEL_121:
                      sub_1BCAA44(partyServantListViewManager, v57);
                    }
                  }
                }
              }
            }
          }
          v195 = sub_1BCAA60();
          sub_1BCA908(v195, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v106, 2, 0LL);
        this->fields.state = 2;
        v87 = this->fields.partyServantListViewManager;
        v103 = PartyServantListViewManager_CallbackFunc_TypeInfo;
LABEL_48:
        v88 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(v103, v57, v99, v100);
        v90 = (int)Method_PartyServantSelectMenu_OnSelectItem__;
        break;
      default:
        return;
    }
LABEL_71:
    v117 = (int64_t)v88;
    PartyServantListViewManager_CallbackFunc___ctor(v88, (Il2CppObject *)this, v90, v89);
    if ( v87 )
    {
      v87->fields.callbackFunc = (struct PartyServantListViewManager_CallbackFunc_o *)v117;
      sub_1BCA784((PartyOrganizationUtility_o *)&v87->fields.callbackFunc, v117, v118, v119, v120, v121, v122, v123);
      PartyServantListViewManager__SetMode_32871668(v87, 2, v124);
      return;
    }
    goto LABEL_120;
  }
  v91 = Method_PartyServantSelectMenu_OnSelectItem__;
  if ( (*((_BYTE *)Method_PartyServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
    v91 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OnSelectItem__);
  v92 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v91, v91[4]);
  OverwriteAssetSoundName__PlaySystemSe(v92, 1, 0LL);
  v94 = -1;
  this->fields.state = 3;
  v95 = this;
  v96 = 0;
LABEL_35:
  PartyServantSelectMenu__Callback(v95, v96, v94, v93);
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
  __int64 v20; // x2
  unsigned int state; // w8
  int v22; // w8
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  struct TitleInfoControl_o *titleInfo; // x8
  PartyServantSelectMenu_o *v26; // x26
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x7
  const MethodInfo *v30; // x2
  System_Int32_array *waveBattleEnemyClassIds; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x20

  v18 = this;
  if ( (byte_4B1215F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseDeckItemList, partyItem);
    this = (PartyServantSelectMenu_o *)sub_1BCA7E0(&Method_PartyServantSelectMenu_EndOpen__, v19, v20);
    byte_4B1215F = 1;
  }
  state = v18->fields.state;
  v18->fields.canMoveCombine = inCanMoveCombine;
  if ( state <= 7 )
  {
    v22 = 1 << state;
    if ( (v22 & 0xCC) != 0 )
    {
      v18->fields.tutorialMode = tutorialMode;
      v18->fields.callbackFunc = callback;
      sub_1BCA784(&v18->fields.callbackFunc, callback);
      v18->fields.openCallbackFunc = openCallback;
      sub_1BCA784(&v18->fields.openCallbackFunc, openCallback);
      PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 0, v23);
      PartyServantSelectMenu__EndOpen(v18, v24);
      return;
    }
    if ( (v22 & 0x11) != 0 )
    {
      if ( partyItem )
      {
        this = (PartyServantSelectMenu_o *)PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( this )
        {
          titleInfo = this->fields.titleInfo;
          v26 = this;
          v18->fields.tutorialMode = tutorialMode;
          v18->fields.isSelectedSvt = titleInfo != 0LL;
          v18->fields.callbackFunc = callback;
          sub_1BCA784(&v18->fields.callbackFunc, callback);
          v18->fields.openCallbackFunc = openCallback;
          sub_1BCA784(&v18->fields.openCallbackFunc, openCallback);
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
                PartyServantSelectMenu__SetTabKind(v18, v18->fields.modeKind, 1, v28);
                this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                if ( this )
                {
                  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 71, 0LL);
                  this = (PartyServantSelectMenu_o *)v18->fields.titleInfo;
                  if ( this )
                  {
                    TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
                        v29);
                      this = (PartyServantSelectMenu_o *)v18->fields.partyServantListViewManager;
                      if ( this )
                      {
                        PartyServantListViewManager__SetMode_32871668((PartyServantListViewManager_o *)this, 1, v30);
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
                          HIDWORD(v26[1].fields.baseWindow),
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
                            v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
                            System_Action___ctor(v36, (Il2CppObject *)v18, Method_PartyServantSelectMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)v18, v36, 0LL);
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
      sub_1BCAA3C(this, baseDeckItemList);
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
      PartyServantSelectMenu__OpenServantDetail_32891432(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        v5);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_32871668(partyServantListViewManager, 4, v7);
        return;
      }
    }
LABEL_7:
    sub_1BCAA3C(partyServantListViewManager, userServantId);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__OpenServantDetail_32891432(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *partyServantListViewItem,
        bool isPlaySe,
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
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v23; // q1
  struct ServantEntity_o *equipServantEntity; // x8
  struct System_Int64_array *equipIdList; // x8
  int32_t partyIndex; // w23
  int32_t PartyListViewItemMenuKind_k__BackingField; // w24
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  UserServantEntity_o *v32; // x21
  CommonUI_o *v33; // x22
  System_Int64_array *v34; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  ServantStatusDialog_ResultDelegate_o *v36; // x24
  ServantStatusDialog_ResultDelegate_o *v37; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v38; // x24
  ServantStatusDialog_EndIndividualityDelegate_o *v39; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-60h]

  if ( (byte_4B12174 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, partyServantListViewItem, isPlaySe);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndShowServantWithQuest__, v9, v10);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndShowServant__, v11, v12);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OpenServantDetail__, v13, v14);
    sub_1BCA7E0(&ServantStatusDialog_ResultDelegate_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    byte_4B12174 = 1;
  }
  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_28;
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
  if ( isPlaySe )
  {
    v20 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1BCA7F8(Method_PartyServantSelectMenu_OpenServantDetail__);
    v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
  }
  this->fields.state = 5;
  if ( !partyServantListViewItem )
    goto LABEL_28;
  userServantEntity = partyServantListViewItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_28;
  v23 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v23;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, partyServantListViewItem);
  v40 = v41;
  partyServantListViewManager = (ListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                       &v40,
                                                       0LL);
  this->fields._SelectUserSvtId_k__BackingField = (int64_t)partyServantListViewManager;
  equipServantEntity = partyServantListViewItem->fields.equipServantEntity;
  if ( equipServantEntity )
  {
    equipIdList = partyServantListViewItem->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_28;
    if ( !equipIdList->max_length )
      sub_1BCAA44(partyServantListViewManager, partyServantListViewItem);
    equipServantEntity = (struct ServantEntity_o *)equipIdList->m_Items[0];
  }
  this->fields._SelectServantEquipId_k__BackingField = (int64_t)equipServantEntity;
  partyIndex = partyServantListViewItem->fields.partyIndex;
  PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = partyServantListViewItem->fields.userServantEntity;
  v33 = (CommonUI_o *)Instance;
  if ( (partyIndex & 0x80000000) != 0 )
  {
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v37 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v29,
                                                      v30,
                                                      v31);
      ServantStatusDialog_ResultDelegate___ctor(
        v37,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( !v33 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30777260(v33, 0, v32, v37, this->fields.canMoveCombine, 0LL);
    }
    else
    {
      v39 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1BCAA2C(
                                                                ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                                v29,
                                                                v30,
                                                                v31);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v39,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0LL);
      if ( !v33 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30777024(v33, 0, v32, v39, this->fields.canMoveCombine, 0LL);
    }
  }
  else
  {
    v34 = partyServantListViewItem->fields.equipIdList;
    questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v36 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v29,
                                                      v30,
                                                      v31);
      ServantStatusDialog_ResultDelegate___ctor(
        v36,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( v33 )
      {
        CommonUI__OpenServantStatusDialog_30777768(
          v33,
          0,
          v32,
          v34,
          questRestrictionInfo,
          v36,
          this->fields.canMoveCombine,
          0LL);
        return;
      }
LABEL_28:
      sub_1BCAA3C(partyServantListViewManager, partyServantListViewItem);
    }
    v38 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1BCAA2C(
                                                              ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                              v29,
                                                              v30,
                                                              v31);
    ServantStatusDialog_EndIndividualityDelegate___ctor(
      v38,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServant__,
      0LL);
    if ( !v33 )
      goto LABEL_28;
    CommonUI__OpenServantStatusDialog_30777496(
      v33,
      0,
      v32,
      v34,
      questRestrictionInfo,
      v38,
      this->fields.canMoveCombine,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__Open_32883852(
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
  __int64 v18; // x2
  unsigned int state; // w8
  int v20; // w8
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v36; // x1
  UnityEngine_GameObject_o *v37; // x25
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x6
  const MethodInfo *v40; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x20

  if ( (byte_4B12160 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, partyItem, *(_QWORD *)&num);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndOpen__, v17, v18);
    byte_4B12160 = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v20 = 1 << state;
    if ( (v20 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        *(int64_t *)&num,
        tutorialMode,
        (System_String_o *)setupInfo,
        (BattleSetupInfo_o *)questRestrictionInfo,
        (FollowerInfo_o *)callback,
        (PartyListViewItem_o *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
        (int64_t)openCallback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v27);
      PartyServantSelectMenu__EndOpen(this, v28);
    }
    else if ( (v20 & 0x11) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        *(int64_t *)&num,
        tutorialMode,
        (System_String_o *)setupInfo,
        (BattleSetupInfo_o *)questRestrictionInfo,
        (FollowerInfo_o *)callback,
        (PartyListViewItem_o *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
        (int64_t)openCallback,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
      if ( !gameObject )
        goto LABEL_19;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
      if ( !v37 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(v37, (unsigned __int8)gameObject & 1, 0LL);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 1, v38);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 71, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_32866708(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v39);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_32871668((PartyServantListViewManager_o *)gameObject, 1, v40),
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
                                                       v36),
            !scaleChangeTabSprite) )
      {
LABEL_19:
        sub_1BCAA3C(gameObject, v36);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
      System_Action___ctor(v45, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v45, 0LL);
    }
  }
}


void __fastcall PartyServantSelectMenu__PushRequest(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *selectItem,
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
  struct UserServantEntity_o *userServantEntity; // x19
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

  if ( (byte_4B12172 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__, v13, v14);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B12172 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v23 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v23 || !userServantEntity )
    goto LABEL_18;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
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
  v31 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v23->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v23->fields.masterLoadThreads;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
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
void __fastcall PartyServantSelectMenu__SetTabKind(
        PartyServantSelectMenu_o *this,
        int32_t modeKind,
        bool isInit,
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
  bool v37; // w21
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v39; // x8
  bool v40; // w23
  unsigned int v41; // w21
  UICommonButton_o *v42; // x22
  bool enabled; // w0
  __int64 *v44; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v46; // w0
  __int64 *v47; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v49; // w0
  __int64 v50; // x1
  UnityEngine_Object_o *pushTabButton; // x21
  __int64 *v52; // x8
  UICommonButton_o *v53; // x22
  bool v54; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v56; // x8
  int32_t state; // w8
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  PartyServantListViewManager_CallbackFunc_o *v62; // x21
  const MethodInfo *v63; // x3
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int32_t v70; // w1

  if ( (byte_4B12164 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind, isInit);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnSelectItem__, v11, v12);
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_10464/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_10467/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10465/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10466/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v35, v36);
    byte_4B12164 = 1;
  }
  v37 = !this->fields.isInitTab || isInit;
  if ( v37 || this->fields.modeKind != modeKind )
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
    v39 = &StringLiteral_17841/*"button_select_reg"*/;
    if ( modeKind )
      v39 = &StringLiteral_17842/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v39, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    v40 = !v37;
    v41 = !v37;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v41,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    v42 = this->fields.statusTabButton;
    if ( !v42 )
      goto LABEL_59;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(v42, enabled, v41, 0LL);
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
    v44 = &StringLiteral_17827/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v44 = &StringLiteral_17828/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v44, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v40,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_59;
    v46 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v46, v40, 0LL);
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
    v47 = &StringLiteral_17825/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v47 = &StringLiteral_17826/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v47, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_59;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v40,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_59;
    v49 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v49, v40, 0LL);
    pushTabButton = (UnityEngine_Object_o *)this->fields.pushTabButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
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
      v52 = &StringLiteral_17839/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v52 = &StringLiteral_17840/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v52, 0LL);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_59;
      statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                     statusTabButton,
                                                     0LL,
                                                     v40,
                                                     statusTabButton->klass[1]._1.interfaceOffsets);
      v53 = this->fields.pushTabButton;
      if ( !v53 )
        goto LABEL_59;
      v54 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
      UICommonButton__SetColliderEnable(v53, v54, v40, 0LL);
    }
    switch ( modeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v56 = &StringLiteral_10467/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_50;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v56 = &StringLiteral_10465/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_50;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v56 = &StringLiteral_10464/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_50;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v56 = &StringLiteral_10466/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
LABEL_50:
        statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v56, 0LL);
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
      v70 = 1;
      goto LABEL_58;
    }
LABEL_59:
    sub_1BCAA3C(statusTabButton, *(_QWORD *)&modeKind);
  }
  if ( !statusTabButton )
    goto LABEL_59;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)statusTabButton,
    modeKind,
    (const MethodInfo *)isInit);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  v62 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                        PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                        v59,
                                                        v60,
                                                        v61);
  PartyServantListViewManager_CallbackFunc___ctor(
    v62,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    v63);
  if ( !partyServantListViewManager )
    goto LABEL_59;
  partyServantListViewManager->fields.callbackFunc = v62;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&partyServantListViewManager->fields.callbackFunc,
    (int64_t)v62,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = 2;
  statusTabButton = (UnityEngine_Behaviour_o *)partyServantListViewManager;
LABEL_58:
  PartyServantListViewManager__SetMode_32871668(
    (PartyServantListViewManager_o *)statusTabButton,
    v70,
    (const MethodInfo *)isInit);
}


void __fastcall PartyServantSelectMenu__StatusRequest(
        PartyServantSelectMenu_o *this,
        PartyServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t modeKind; // w8
  PartyServantListViewManager_o *partyServantListViewManager; // x0
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

  if ( (byte_4B1216B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_EndStatusSync__, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B1216B = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v40 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_21;
    if ( PartyServantListViewManager__GetSwapChoiceList(partyServantListViewManager, &choiceList, &v40, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
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
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v38,
                                                                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v26 = v40;
        v25 = choiceList;
        v28 = 1;
        v27 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BCAA3C(partyServantListViewManager, callback);
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
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
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
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                       v23,
                                                                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v26 = unlockList;
        v25 = lockList;
        v27 = 1;
        v28 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)partyServantListViewManager,
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

  if ( (byte_4B1215D & 1) == 0 )
  {
    sub_1BCA7E0(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1215D = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B1215E & 1) == 0 )
  {
    sub_1BCA7E0(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1215E = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyServantSelectMenu_o *)sub_1BCACFC(v8);
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
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A07A70;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07A18;
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
  if ( (byte_4B12271 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyServantSelectMenu_ResultKind_TypeInfo, *(_QWORD *)&result, item);
    byte_4B12271 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07ACC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07A84;
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
  if ( (byte_4B12272 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B12272 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  struct PartyServantSelectMenu_o *_4__this; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x19
  PartyServantListViewManager_CallbackFunc_o *v29; // x21

  if ( (byte_4B12273 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&PartyServantListViewManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_PartyServantSelectMenu_OnSelectItem__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__, v11, v12);
    byte_4B12273 = 1;
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
        Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__,
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
  partyServantListViewManager = _4__this->fields.partyServantListViewManager;
  v29 = (PartyServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                        PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                        v14,
                                                        v25,
                                                        v26);
  PartyServantListViewManager_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !partyServantListViewManager )
    goto LABEL_12;
  PartyServantListViewManager__SetMode(partyServantListViewManager, 2, v29, 0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  PartyServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  PartyServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}