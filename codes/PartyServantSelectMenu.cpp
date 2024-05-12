void __fastcall PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438EDC3 & 1) == 0 )
  {
    sub_B775C4(&BaseMenu_TypeInfo);
    byte_438EDC3 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyServantSelectMenu_CallbackFunc_o *v10; // x20
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *Item; // x2

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_B7769C(0LL, v14);
      Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, v15);
    }
    PartyServantSelectMenu_CallbackFunc__Invoke(v10, result, Item, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__ClearScrollValue(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0

  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_B7769C(0LL, method);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_32394588(this, 0LL, v2);
}


void __fastcall PartyServantSelectMenu__Close_32394588(
        PartyServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Action_o *v15; // x20

  if ( (byte_438EDB1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_EndClose__);
    byte_438EDB1 = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_B7769C(0LL, v6);
  PartyServantListViewManager__SetMode_32379976(partyServantListViewManager, 1, v7);
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v15, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCardFavoriteRequest(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v5; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_438EDC1 & 1) == 0 )
  {
    sub_B775C4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_OnSelectItem__);
    byte_438EDC1 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v5 = this->fields.partyServantListViewManager,
        v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_B77694(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL),
        !v5) )
  {
    sub_B7769C(partyServantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_B77560(
    (BattleServantConfConponent_o *)&v5->fields.callbackFunc,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  PartyServantListViewManager__SetMode_32379976(v5, 2, v13);
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
      sub_B7769C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32379976(partyServantListViewManager, 3, v6);
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
      sub_B7769C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32379976(partyServantListViewManager, 3, v6);
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
      sub_B7769C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32379976(partyServantListViewManager, 3, v6);
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
      sub_B7769C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32379976(partyServantListViewManager, 3, v6);
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
      sub_B7769C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32379976(partyServantListViewManager, 3, v6);
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
      sub_B7769C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32379976(partyServantListViewManager, 3, v6);
  }
  PartyServantSelectMenu__SetTabKind(this, 0, 0, v3);
}


void __fastcall PartyServantSelectMenu__EndClose(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyServantSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__EndCloseShowServant(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  void *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v5; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_438EDBD & 1) == 0 )
  {
    sub_B775C4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_438EDBD = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager )
    goto LABEL_11;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)partyServantListViewManager,
    this->fields.modeKind,
    v2);
  v5 = this->fields.partyServantListViewManager;
  v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_B77694(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !v5 )
    goto LABEL_11;
  v5->fields.callbackFunc = v6;
  sub_B77560(
    (BattleServantConfConponent_o *)&v5->fields.callbackFunc,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  PartyServantListViewManager__SetMode_32379976(v5, 2, v13);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  partyServantListViewManager = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !partyServantListViewManager )
LABEL_11:
    sub_B7769C(partyServantListViewManager, method);
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)partyServantListViewManager + 15), 0LL) )
    PartyServantSelectMenu__Callback(this, 3, -1, v14);
}


void __fastcall PartyServantSelectMenu__EndCloseShowServantQuestJump(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438EDBE & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_438EDBE = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_B7769C(0LL, method);
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyServantSelectMenu__Callback(this, 1, this->fields.tutorialSelect, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndOpen(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PartyServantListViewManager_o *tutorialMaskBase; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  float v14; // s4
  float v15; // s5
  float v16; // s6
  float v17; // s7
  int v18; // s0
  int v22; // s8
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  float x; // s0
  float v34; // s4
  WebViewManager_o *Instance; // x0
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  CommonUI_o *v38; // x20
  System_Action_o *v39; // x21
  BattleServantConfConponent_o *p_openCallbackFunc; // x19
  System_Action_o *v41; // x20
  struct System_Action_o *openCallbackFunc; // t1
  MethodInfo v43; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector2_o v44; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_438EDAF & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&FSUtility_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__);
    sub_B775C4(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438EDAF = 1;
  }
  v43.methodPointer = 0LL;
  v43.invoker_method = 0LL;
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v25 = (PartyServantListViewManager_CallbackFunc_o *)sub_B77694(PartyServantListViewManager_CallbackFunc_TypeInfo);
    PartyServantListViewManager_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      0LL);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v25;
      sub_B77560(
        (BattleServantConfConponent_o *)&partyServantListViewManager->fields.callbackFunc,
        (System_Int32_array **)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      PartyServantListViewManager__SetMode_32379976(partyServantListViewManager, 2, v32);
      goto LABEL_17;
    }
LABEL_20:
    sub_B7769C(tutorialMaskBase, v5);
  }
  v4 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v4, 0, v2);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  PartyServantListViewManager__SetMode_32379976(tutorialMaskBase, 1, v6);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_17;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0LL);
  v45.fields.m_XMin = -450.0;
  v45.fields.m_Width = 150.0;
  v45.fields.m_Height = 180.0;
  v45.fields.m_YMin = -30.0;
  UnityEngine_Rect___ctor(v45, v14, v15, v16, v17, &v43);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v22 = -1011122176;
  }
  else
  {
    x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v18, &v43);
    v46.fields.m_YMin = 8.0;
    v46.fields.m_XMin = x + 8.0;
    UnityEngine_Rect__set_x(v46, v34, &v43);
    v22 = -1011384320;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  methodPointer = v43.methodPointer;
  invoker_method = v43.invoker_method;
  v38 = (CommonUI_o *)Instance;
  v39 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0LL);
  if ( !v38 )
    goto LABEL_20;
  v44.fields.y = 100.0;
  LODWORD(v44.fields.x) = v22;
  *(_QWORD *)&v47.fields.m_XMin = methodPointer;
  *(_QWORD *)&v47.fields.m_Width = invoker_method;
  CommonUI__OpenTutorialArrowMark(v38, v44, 0.0, v47, v39, 0LL);
LABEL_17:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
  v41 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_B77560(p_openCallbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
    System_Action__Invoke(v41, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2

  if ( (byte_438EDB0 & 1) == 0 )
  {
    sub_B775C4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_OnSelectItem__);
    byte_438EDB0 = 1;
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
        v5 = (PartyServantListViewManager_CallbackFunc_o *)sub_B77694(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_B7769C(statusTabButton, method);
  }
  partyServantListViewManager->fields.callbackFunc = v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&partyServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  PartyServantListViewManager__SetMode_32379976(partyServantListViewManager, 5, v12);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21

  if ( (byte_438EDBB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_EndCloseShowServant__);
    sub_B775C4(&RandomLimitCountManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438EDBB = 1;
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
LABEL_20:
          PartyServantListViewManager__SetMode_32379976(partyServantListViewManager, v9, v8);
          goto LABEL_21;
        }
LABEL_19:
        v9 = 3;
        goto LABEL_20;
      }
    }
LABEL_23:
    sub_B7769C(partyServantListViewManager, isDecide);
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4389478 )
  {
    sub_B775C4(&RandomLimitCountManager_TypeInfo);
    byte_4389478 = 1;
  }
  v10 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
        goto LABEL_19;
    }
    goto LABEL_23;
  }
LABEL_21:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndShowServantWithQuest(
        PartyServantSelectMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x22
  System_Action_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_438EDBC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438EDBC = 1;
  }
  if ( questId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_B7769C(v11, v12);
    CommonUI__CloseServantStatusDialog(Instance, v10, 0LL);
  }
  PartyServantSelectMenu__EndShowServant(this, isDecide, isNeedSort, *(const MethodInfo **)&questId);
}


void __fastcall PartyServantSelectMenu__EndStatusSync(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyServantSelectMenu_RequestCallbackFunc_o *requedstCallback; // x19
  BattleServantConfConponent_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (BattleServantConfConponent_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0LL;
    sub_B77560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyServantSelectMenu_RequestCallbackFunc__Invoke(requedstCallback, 1, 0LL);
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
    sub_B7769C(0LL, method);
  PartyServantListViewManager__DestroyList(partyServantListViewManager, method);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyServantSelectMenu__OnClickCancel(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_438EDB4 & 1) == 0 )
  {
    sub_B775C4(&Method_PartyServantSelectMenu_EndClickCancel__);
    sub_B775C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EDB4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_B7769C(0LL, method);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v4 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B77694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickCancel__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v4, v5);
  }
}


void __fastcall PartyServantSelectMenu__OnClickDecide(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  PartyServantSelectMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438EDB3 & 1) == 0 )
  {
    sub_B775C4(&Method_PartyServantSelectMenu_EndClickDecide__);
    sub_B775C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EDB3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B77694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickDecide__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v3, v4);
  }
}


void __fastcall PartyServantSelectMenu__OnClickScaleChange(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_438EDBF & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EDBF = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ChangeIconScale(partyServantListViewManager, v3),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                                           partyServantListViewManager,
                                                                           v3),
          !scaleChangeTabSprite) )
    {
      sub_B7769C(partyServantListViewManager, v3);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)partyServantListViewManager, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabChoice(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_438EDB7 & 1) == 0 )
  {
    sub_B775C4(&Method_PartyServantSelectMenu_EndClickTabChoice__);
    sub_B775C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EDB7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B77694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v5, v6);
        return;
      }
      v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B77694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabChoice__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v7, v8);
    }
    PartyServantSelectMenu__SetTabKind(this, 2, 0, v3);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabLock(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_438EDB6 & 1) == 0 )
  {
    sub_B775C4(&Method_PartyServantSelectMenu_EndClickTabLock__);
    sub_B775C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EDB6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B77694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v5, v6);
        return;
      }
      v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B77694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabLock__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v7, v8);
    }
    PartyServantSelectMenu__SetTabKind(this, 1, 0, v3);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabPush(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  PartyServantSelectMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438EDB8 & 1) == 0 )
  {
    sub_B775C4(&Method_PartyServantSelectMenu_EndClickTabPush__);
    sub_B775C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EDB8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B77694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabPush__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v3, v4);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabStatus(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  PartyServantSelectMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438EDB5 & 1) == 0 )
  {
    sub_B775C4(&Method_PartyServantSelectMenu_EndClickTabStatus__);
    sub_B775C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EDB5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B77694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabStatus__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v3, v4);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  MethodInfo *v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t state; // w8
  System_Int32_array **Item; // x1
  int32_t tutorialMode; // w8
  CommonUI_o *Instance; // x20
  System_Action_o *v26; // x21
  PartyServantListViewItem_o **v27; // x21
  const MethodInfo *v28; // x3
  PartyServantListViewItem_o *v29; // x8
  SoundManager_c *v30; // x0
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  PartyServantSelectMenu_o *v33; // x0
  int32_t v34; // w2
  int32_t modeKind; // w8
  struct PartyServantListViewManager_o *v36; // x20
  const MethodInfo *v37; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v40; // q1
  PartyServantListViewManager_CallbackFunc_c *v41; // x0
  PartyServantListViewManager_CallbackFunc_o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  const MethodInfo *v49; // x2
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x19
  __int64 v52; // x22
  __int64 v53; // x23
  ServantEntity_o *v54; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x19
  int32_t v56; // w22
  int32_t v57; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  int32_t v59; // w22
  int32_t v60; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v62; // x19
  System_String_o *v63; // x22
  System_Object_array *v64; // x24
  int32_t Rarity; // w26
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x26
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x26
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x25
  int32_t v87; // w0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x25
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x25
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x21
  System_String_o *v109; // x21
  System_String_o *v110; // x22
  System_String_o *v111; // x23
  CommonUI_o *v112; // x24
  CommonConfirmDialog_ClickDelegate_o *v113; // x25
  __int64 v114; // x0
  __int64 v115; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  if ( (byte_438EDBA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__);
    sub_B775C4(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__);
    sub_B775C4(&PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo);
    sub_B775C4(&StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_438EDBA = 1;
  }
  v7 = sub_B77694(PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo);
  PartyServantSelectMenu___c__DisplayClass68_0___ctor((PartyServantSelectMenu___c__DisplayClass68_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_140;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  state = this->fields.state;
  if ( state == 7 )
  {
    tutorialMode = this->fields.tutorialMode;
    this->fields.tutorialSelect = n;
    if ( tutorialMode != 2 )
      return;
    this->fields.state = 8;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark(Instance, v26, 0LL);
      return;
    }
LABEL_140:
    sub_B7769C(partyServantListViewManager, v9);
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
      goto LABEL_140;
    Item = (System_Int32_array **)PartyServantListViewManager__GetItem(partyServantListViewManager, n, v16);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v27 = (PartyServantListViewItem_o **)(v7 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), Item, (System_String_array **)v16, v17, v18, v19, v20, v21);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      v36 = this->fields.partyServantListViewManager;
      this->fields.state = 2;
      goto LABEL_74;
    }
    v9 = *v27;
    if ( !*v27 )
      goto LABEL_140;
    if ( v9->fields.userServantEntity )
    {
      PartyServantSelectMenu__OpenServantDetail_32401448(this, v9, 1, v28);
      return;
    }
LABEL_69:
    v30 = SoundManager_TypeInfo;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
LABEL_70:
      if ( !v30->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v30);
    }
LABEL_72:
    SoundManager__playSystemSe(2, 0LL);
LABEL_73:
    v36 = this->fields.partyServantListViewManager;
LABEL_74:
    v41 = PartyServantListViewManager_CallbackFunc_TypeInfo;
LABEL_75:
    v42 = (PartyServantListViewManager_CallbackFunc_o *)sub_B77694(v41);
    PartyServantListViewManager_CallbackFunc___ctor(
      v42,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      0LL);
    if ( v36 )
    {
      v36->fields.callbackFunc = v42;
      sub_B77560(
        (BattleServantConfConponent_o *)&v36->fields.callbackFunc,
        (System_Int32_array **)v42,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      PartyServantListViewManager__SetMode_32379976(v36, 2, v49);
      return;
    }
    goto LABEL_140;
  }
  if ( kind != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v34 = -1;
    this->fields.state = 3;
    v33 = this;
    v32 = 0;
    goto LABEL_35;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      v29 = *v27;
      if ( !*v27 )
        goto LABEL_140;
      if ( !v29->fields.isBase && v29->fields.isQuestRestriction
        || v29->fields.isSame
        || (v29->fields.commonRestrictionId & 0x80000000) == 0 )
      {
        goto LABEL_69;
      }
      if ( v29->fields.isBase )
      {
        v30 = SoundManager_TypeInfo;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          goto LABEL_25;
        goto LABEL_27;
      }
      if ( v29->fields.isLeave
        || (v29->fields.fatigureTime & 0x8000000000000000LL) == 0
        || v29->fields._IsAllOutBattle_k__BackingField
        || v29->fields._IsDataLost_k__BackingField
        || v29->fields._TimesToRestart_k__BackingField >= 1 )
      {
        goto LABEL_69;
      }
      v30 = SoundManager_TypeInfo;
      if ( !v29->fields._IsClearedWave_k__BackingField )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_25:
          if ( !v30->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v30);
        }
LABEL_27:
        SoundManager__playSystemSe(0, 0LL);
        v32 = 1;
        v33 = this;
        v34 = n;
        this->fields.state = 3;
LABEL_35:
        PartyServantSelectMenu__Callback(v33, v32, v34, v31);
        return;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        goto LABEL_72;
      goto LABEL_70;
    case 1:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(11, 0LL);
      if ( !*v27 )
        goto LABEL_140;
      (*v27)->fields.isSwapLock ^= 1u;
      goto LABEL_63;
    case 2:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( !*v27 )
        goto LABEL_140;
      (*v27)->fields.isSwapChoice ^= 1u;
LABEL_63:
      this->fields.state = 2;
      v36 = this->fields.partyServantListViewManager;
      v41 = PartyServantListViewManager_CallbackFunc_TypeInfo;
      goto LABEL_75;
    case 3:
      if ( !*v27 )
        goto LABEL_140;
      if ( !(*v27)->fields.isEnabled )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        this->fields.state = 2;
        goto LABEL_73;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyServantListViewManager = (PartyServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !partyServantListViewManager )
        goto LABEL_140;
      dropList = (int64_t)partyServantListViewManager->fields.dropList;
      if ( !dropList )
      {
LABEL_57:
        PartyServantSelectMenu__PushRequest(this, *v27, v37);
        return;
      }
      if ( !*v27 )
        goto LABEL_140;
      userServantEntity = (*v27)->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_140;
      v40 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v117.fields.fakeValue = v40;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v116 = v117;
      if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v116, 0LL) )
        goto LABEL_57;
      partyServantListViewManager = (PartyServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !partyServantListViewManager )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)partyServantListViewManager,
                                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !partyServantListViewManager )
        goto LABEL_140;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)partyServantListViewManager,
                 dropList,
                 (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      partyServantListViewManager = (PartyServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !partyServantListViewManager )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)partyServantListViewManager,
                                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Entity )
        goto LABEL_140;
      v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)partyServantListViewManager;
      v53 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
      v52 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v118.fields.currentCryptoKey = v53;
      *(_QWORD *)&v118.fields.fakeValue = v52;
      partyServantListViewManager = (PartyServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                       v118,
                                                                       0LL);
      if ( !v51 )
        goto LABEL_140;
      v54 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v51,
                                 (int32_t)partyServantListViewManager,
                                 (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(Entity->fields.svtId, 0LL);
      partyServantListViewManager = (PartyServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                       Entity->fields.limitCount,
                                                                       0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                       Master_WarQuestSelectionMaster,
                                                                       v56,
                                                                       (int32_t)partyServantListViewManager,
                                                                       0LL);
      if ( !*v27 )
        goto LABEL_140;
      v57 = (int)partyServantListViewManager;
      partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewItem__get_SvtId(
                                                                       *v27,
                                                                       (const MethodInfo *)v9);
      if ( !*v27 )
        goto LABEL_140;
      v58 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v27)->fields.userServantEntity;
      if ( !v58 )
        goto LABEL_140;
      v59 = (int)partyServantListViewManager;
      v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v58[6], 0LL);
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     Master_WarQuestSelectionMaster,
                                     v59,
                                     v60,
                                     0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
      v64 = (System_Object_array *)sub_B775DC(object___TypeInfo, 6LL);
      Rarity = UserServantEntity__getRarity(Entity, 0LL);
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
      if ( !v64 )
        goto LABEL_140;
      v72 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B77684(
                                                                         partyServantListViewManager,
                                                                         v64->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_142;
      }
      if ( !v64->max_length )
        goto LABEL_141;
      v64->m_Items[0] = (Il2CppObject *)v72;
      sub_B77560((BattleServantConfConponent_o *)v64->m_Items, v72, v66, v67, v68, v69, v70, v71);
      if ( !v54 )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getClassName(v54, 0LL);
      v79 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B77684(
                                                                         partyServantListViewManager,
                                                                         v64->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_142;
      }
      if ( v64->max_length <= 1 )
        goto LABEL_141;
      v64->m_Items[1] = (Il2CppObject *)v79;
      sub_B77560((BattleServantConfConponent_o *)&v64->m_Items[1], v79, v73, v74, v75, v76, v77, v78);
      partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getName(v54, v57, -1, 0LL);
      v86 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B77684(
                                                                         partyServantListViewManager,
                                                                         v64->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_142;
      }
      if ( v64->max_length <= 2 )
        goto LABEL_141;
      v64->m_Items[2] = (Il2CppObject *)v86;
      sub_B77560((BattleServantConfConponent_o *)&v64->m_Items[2], v86, v80, v81, v82, v83, v84, v85);
      if ( !*v27 )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)(*v27)->fields.userServantEntity;
      if ( !partyServantListViewManager )
        goto LABEL_140;
      v87 = UserServantEntity__getRarity((UserServantEntity_o *)partyServantListViewManager, 0LL);
      partyServantListViewManager = (PartyServantListViewManager_o *)Rarity__getRarityType(v87, 0LL);
      v94 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B77684(
                                                                         partyServantListViewManager,
                                                                         v64->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_142;
      }
      if ( v64->max_length <= 3 )
        goto LABEL_141;
      v64->m_Items[3] = (Il2CppObject *)v94;
      sub_B77560((BattleServantConfConponent_o *)&v64->m_Items[3], v94, v88, v89, v90, v91, v92, v93);
      if ( !*v27 )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)(*v27)->fields.servantEntity;
      if ( !partyServantListViewManager )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getClassName(
                                                                       (ServantEntity_o *)partyServantListViewManager,
                                                                       0LL);
      v101 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B77684(
                                                                         partyServantListViewManager,
                                                                         v64->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_142;
      }
      if ( v64->max_length <= 4 )
        goto LABEL_141;
      v64->m_Items[4] = (Il2CppObject *)v101;
      sub_B77560((BattleServantConfConponent_o *)&v64->m_Items[4], v101, v95, v96, v97, v98, v99, v100);
      if ( !*v27 )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)(*v27)->fields.servantEntity;
      if ( !partyServantListViewManager )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getName(
                                                                       (ServantEntity_o *)partyServantListViewManager,
                                                                       ServantLimitCountSealAfter,
                                                                       -1,
                                                                       0LL);
      v108 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B77684(
                                                                         partyServantListViewManager,
                                                                         v64->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
        {
LABEL_142:
          v115 = sub_B776BC(partyServantListViewManager);
          sub_B77668(v115, 0LL);
        }
      }
      if ( v64->max_length <= 5 )
      {
LABEL_141:
        v114 = sub_B776C8(partyServantListViewManager);
        sub_B77668(v114, 0LL);
      }
      v64->m_Items[5] = (Il2CppObject *)v108;
      sub_B77560((BattleServantConfConponent_o *)&v64->m_Items[5], v108, v102, v103, v104, v105, v106, v107);
      v109 = System_String__Format_44980660(v63, v64, 0LL);
      v110 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v111 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      v112 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v113 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v113,
        (Il2CppObject *)v7,
        Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__,
        0LL);
      partyServantListViewManager = (PartyServantListViewManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v112 )
        goto LABEL_140;
      CommonUI__OpenConfirmDialog_18055364(
        v112,
        v62,
        v109,
        v110,
        v111,
        v113,
        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
        0,
        0,
        0LL);
      return;
    default:
      return;
  }
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
  PartyServantSelectMenu_o *v17; // x19
  unsigned int state; // w8
  int v19; // w8
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct FollowerQuestInfomationDraw_o *questInfomationDraw; // x8
  PartyServantSelectMenu_o *v35; // x26
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x7
  const MethodInfo *v45; // x2
  System_Int32_array *waveBattleEnemyClassIds; // x3
  QuestRestrictionInfo_o *v47; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v49; // x20

  v17 = this;
  if ( (byte_438EDAD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (PartyServantSelectMenu_o *)sub_B775C4(&Method_PartyServantSelectMenu_EndOpen__);
    byte_438EDAD = 1;
  }
  state = v17->fields.state;
  v17->fields.canMoveCombine = inCanMoveCombine;
  if ( state <= 7 )
  {
    v19 = 1 << state;
    if ( (v19 & 0xCC) != 0 )
    {
      v17->fields.tutorialMode = tutorialMode;
      v17->fields.callbackFunc = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&v17->fields.callbackFunc,
        (System_Int32_array **)callback,
        (System_String_array **)partyItem,
        *(System_String_array ***)&num,
        *(System_Boolean_array ***)&tutorialMode,
        (System_Int32_array **)setupInfo,
        (System_Int32_array *)questRestrictionInfo,
        (System_Int32_array *)callback);
      v17->fields.openCallbackFunc = openCallback;
      sub_B77560(
        (BattleServantConfConponent_o *)&v17->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      PartyServantSelectMenu__SetTabKind(v17, v17->fields.modeKind, 0, v26);
      PartyServantSelectMenu__EndOpen(v17, v27);
      return;
    }
    if ( (v19 & 0x11) != 0 )
    {
      if ( partyItem )
      {
        this = (PartyServantSelectMenu_o *)PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( this )
        {
          questInfomationDraw = this->fields.questInfomationDraw;
          v35 = this;
          v17->fields.tutorialMode = tutorialMode;
          v17->fields.isSelectedSvt = questInfomationDraw != 0LL;
          v17->fields.callbackFunc = callback;
          sub_B77560(
            (BattleServantConfConponent_o *)&v17->fields.callbackFunc,
            (System_Int32_array **)callback,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          v17->fields.openCallbackFunc = openCallback;
          sub_B77560(
            (BattleServantConfConponent_o *)&v17->fields.openCallbackFunc,
            (System_Int32_array **)openCallback,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          this = (PartyServantSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (PartyServantSelectMenu_o *)v17->fields.bgTxtSprite;
            if ( this )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              this = (PartyServantSelectMenu_o *)BgTxtManager__IsActiveBgTxt(0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0LL);
                PartyServantSelectMenu__SetTabKind(v17, v17->fields.modeKind, 1, v43);
                this = (PartyServantSelectMenu_o *)v17->fields.titleInfo;
                if ( this )
                {
                  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 70, 0LL);
                  this = (PartyServantSelectMenu_o *)v17->fields.titleInfo;
                  if ( this )
                  {
                    TitleInfoControl__setBackBtnSprite_18688908((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
                    this = (PartyServantSelectMenu_o *)v17->fields.partyServantListViewManager;
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
                        v44);
                      this = (PartyServantSelectMenu_o *)v17->fields.partyServantListViewManager;
                      if ( this )
                      {
                        PartyServantListViewManager__SetMode_32379976((PartyServantListViewManager_o *)this, 1, v45);
                        this = (PartyServantSelectMenu_o *)v17->fields.questInfomationDraw;
                        if ( partyItem->fields.menuKind == 9 )
                        {
                          if ( !this )
                            goto LABEL_25;
                          waveBattleEnemyClassIds = partyItem->fields.waveBattleEnemyClassIds;
                          v47 = questRestrictionInfo;
                        }
                        else
                        {
                          if ( !this )
                            goto LABEL_25;
                          v47 = questRestrictionInfo;
                          waveBattleEnemyClassIds = 0LL;
                        }
                        FollowerQuestInfomationDraw__SetInfomation(
                          (FollowerQuestInfomationDraw_o *)this,
                          v47,
                          HIDWORD(v35[1].fields.enterTransform),
                          waveBattleEnemyClassIds,
                          0LL);
                        this = (PartyServantSelectMenu_o *)v17->fields.partyServantListViewManager;
                        if ( this )
                        {
                          scaleChangeTabSprite = v17->fields.scaleChangeTabSprite;
                          this = (PartyServantSelectMenu_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                               (PartyServantListViewManager_o *)this,
                                                               (const MethodInfo *)baseDeckItemList);
                          if ( scaleChangeTabSprite )
                          {
                            UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
                            v17->fields.state = 1;
                            v49 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                            System_Action___ctor(v49, (Il2CppObject *)v17, Method_PartyServantSelectMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)v17, v49, 0LL);
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
      sub_B7769C(this, baseDeckItemList);
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
      BYTE4(partyServantListViewManager->fields.smallSizeSeed) = 1;
      this->fields.canMoveCombine = 1;
      PartyServantSelectMenu__OpenServantDetail_32401448(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        v5);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_32379976(partyServantListViewManager, 4, v7);
        return;
      }
    }
LABEL_7:
    sub_B7769C(partyServantListViewManager, userServantId);
  }
}


void __fastcall PartyServantSelectMenu__OpenServantDetail_32401448(
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
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *v17; // x21
  CommonUI_o *v18; // x22
  System_Int64_array *v19; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  ServantStatusDialog_ResultDelegate_o *v21; // x24
  ServantStatusDialog_ResultDelegate_o *v22; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v23; // x24
  ServantStatusDialog_EndIndividualityDelegate_o *v24; // x20
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-50h]

  if ( (byte_438EDC2 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_EndShowServantWithQuest__);
    sub_B775C4(&Method_PartyServantSelectMenu_EndShowServant__);
    sub_B775C4(&Method_PartyServantSelectMenu_OpenServantDetail__);
    sub_B775C4(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438EDC2 = 1;
  }
  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_29;
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
  if ( isPlaySe )
  {
    v8 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 75) & 2) != 0 )
      v8 = (_QWORD *)sub_B775CC(Method_PartyServantSelectMenu_OpenServantDetail__);
    v9 = (System_Reflection_MethodBase_o *)sub_B775A8(v8, v8[3]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  }
  this->fields.state = 5;
  if ( !partyServantListViewItem )
    goto LABEL_29;
  userServantEntity = partyServantListViewItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_29;
  v11 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v11;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v26 = v27;
  partyServantListViewManager = (ListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                       &v26,
                                                       0LL);
  this->fields._SelectUserSvtId_k__BackingField = (int64_t)partyServantListViewManager;
  equipServantEntity = partyServantListViewItem->fields.equipServantEntity;
  if ( equipServantEntity )
  {
    equipIdList = partyServantListViewItem->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_29;
    if ( !equipIdList->max_length )
    {
      v25 = sub_B776C8(partyServantListViewManager);
      sub_B77668(v25, 0LL);
    }
    equipServantEntity = (struct ServantEntity_o *)equipIdList->m_Items[0];
  }
  this->fields._SelectServantEquipId_k__BackingField = (int64_t)equipServantEntity;
  partyIndex = partyServantListViewItem->fields.partyIndex;
  PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = partyServantListViewItem->fields.userServantEntity;
  v18 = (CommonUI_o *)Instance;
  if ( (partyIndex & 0x80000000) != 0 )
  {
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v22 = (ServantStatusDialog_ResultDelegate_o *)sub_B77694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v22,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( !v18 )
        goto LABEL_29;
      CommonUI__OpenServantStatusDialog_18067360(v18, 0, v17, v22, this->fields.canMoveCombine, 0LL);
    }
    else
    {
      v24 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B77694(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v24,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0LL);
      if ( !v18 )
        goto LABEL_29;
      CommonUI__OpenServantStatusDialog_18067104(v18, 0, v17, v24, this->fields.canMoveCombine, 0LL);
    }
  }
  else
  {
    v19 = partyServantListViewItem->fields.equipIdList;
    questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v21 = (ServantStatusDialog_ResultDelegate_o *)sub_B77694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v21,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( v18 )
      {
        CommonUI__OpenServantStatusDialog_18067908(
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
LABEL_29:
      sub_B7769C(partyServantListViewManager, partyServantListViewItem);
    }
    v23 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B77694(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    ServantStatusDialog_EndIndividualityDelegate___ctor(
      v23,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServant__,
      0LL);
    if ( !v18 )
      goto LABEL_29;
    CommonUI__OpenServantStatusDialog_18067616(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__Open_32393528(
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v34; // x1
  UnityEngine_GameObject_o *v35; // x25
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x6
  const MethodInfo *v38; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v40; // x20

  if ( (byte_438EDAE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_EndOpen__);
    byte_438EDAE = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v18 = 1 << state;
    if ( (v18 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&num,
        *(System_String_array ***)&tutorialMode,
        (System_Boolean_array **)setupInfo,
        (System_Int32_array **)questRestrictionInfo,
        (System_Int32_array *)callback,
        (System_Int32_array *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
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
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&num,
        *(System_String_array ***)&tutorialMode,
        (System_Boolean_array **)setupInfo,
        (System_Int32_array **)questRestrictionInfo,
        (System_Int32_array *)callback,
        (System_Int32_array *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
      if ( !gameObject )
        goto LABEL_19;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
      if ( !v35 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(v35, (unsigned __int8)gameObject & 1, 0LL);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 1, v36);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 70, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setBackBtnSprite_18688908((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_32375040(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v37);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_32379976((PartyServantListViewManager_o *)gameObject, 1, v38),
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
                                                       v34),
            !scaleChangeTabSprite) )
      {
LABEL_19:
        sub_B7769C(gameObject, v34);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v40 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v40, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v40, 0LL);
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
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v8; // x23
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v16; // x8
  int64_t v17; // x0
  __int128 v18; // q0
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v21; // q0
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w21
  bool IsLock; // w23
  char v27; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t v34; // [xsp+50h] [xbp-110h]
  int32_t v35; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  __int64 v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_438EDC0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438EDC0 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v8 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v8 || !userServantEntity )
    goto LABEL_21;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v8->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v45, 0LL);
  if ( !v9 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v16 = *(_QWORD *)&v8->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v43, 0LL);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v8->fields.writeMasterDataThread;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v19,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v41, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v32 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v46.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v46, 0LL);
  if ( !v22 )
LABEL_21:
    sub_B7769C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    v35,
    v34,
    v23,
    v24,
    v25,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v37,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != v39,
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
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int32_t v35; // w1

  if ( (byte_438EDB2 & 1) == 0 )
  {
    sub_B775C4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_B775C4(&StringLiteral_17477/*"button_push_reg"*/);
    sub_B775C4(&StringLiteral_17478/*"button_push_unreg"*/);
    sub_B775C4(&StringLiteral_17463/*"button_allchoice_reg"*/);
    sub_B775C4(&StringLiteral_17466/*"button_alllock_unreg"*/);
    sub_B775C4(&StringLiteral_10598/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_10601/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/);
    sub_B775C4(&StringLiteral_17479/*"button_select_reg"*/);
    sub_B775C4(&StringLiteral_10599/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/);
    sub_B775C4(&StringLiteral_10600/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/);
    sub_B775C4(&StringLiteral_17480/*"button_select_unreg"*/);
    sub_B775C4(&StringLiteral_17465/*"button_alllock_reg"*/);
    sub_B775C4(&StringLiteral_17464/*"button_allchoice_unreg"*/);
    byte_438EDB2 = 1;
  }
  v7 = !this->fields.isInitTab || isInit;
  if ( v7 || this->fields.modeKind != modeKind )
  {
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *, const MethodInfo *))statusTabButton->klass[1]._1.namespaze)(
      statusTabButton,
      1LL,
      statusTabButton->klass[1]._1.byval_arg.data,
      method);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
    if ( !statusTabButton )
      goto LABEL_64;
    v9 = &StringLiteral_17479/*"button_select_reg"*/;
    if ( modeKind )
      v9 = &StringLiteral_17480/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    v10 = !v7;
    v11 = !v7;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v11,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    v12 = this->fields.statusTabButton;
    if ( !v12 )
      goto LABEL_64;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(v12, enabled, v11, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
      statusTabButton,
      1LL,
      statusTabButton->klass[1]._1.byval_arg.data);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !statusTabButton )
      goto LABEL_64;
    v14 = &StringLiteral_17465/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v14 = &StringLiteral_17466/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v14, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v10,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_64;
    v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v16, v10, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
      statusTabButton,
      1LL,
      statusTabButton->klass[1]._1.byval_arg.data);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !statusTabButton )
      goto LABEL_64;
    v17 = &StringLiteral_17463/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v17 = &StringLiteral_17464/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v17, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v10,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_64;
    v19 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v19, v10, 0LL);
    pushTabButton = (UnityEngine_Object_o *)this->fields.pushTabButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(pushTabButton, 0LL, 0LL) )
    {
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_64;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
        statusTabButton,
        1LL,
        statusTabButton->klass[1]._1.byval_arg.data);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_64;
      UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0LL);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
      if ( !statusTabButton )
        goto LABEL_64;
      v21 = &StringLiteral_17477/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v21 = &StringLiteral_17478/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v21, 0LL);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_64;
      statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                     statusTabButton,
                                                     0LL,
                                                     v10,
                                                     statusTabButton->klass[1]._1.interfaceOffsets);
      v22 = this->fields.pushTabButton;
      if ( !v22 )
        goto LABEL_64;
      v23 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
      UICommonButton__SetColliderEnable(v22, v23, v10, 0LL);
    }
    switch ( modeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = &StringLiteral_10601/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_55;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = &StringLiteral_10599/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_55;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = &StringLiteral_10598/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_55;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = &StringLiteral_10600/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
LABEL_55:
        statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v25, 0LL);
        if ( !explanationLabel )
          goto LABEL_64;
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
      v35 = 1;
      goto LABEL_63;
    }
LABEL_64:
    sub_B7769C(statusTabButton, *(_QWORD *)&modeKind);
  }
  if ( !statusTabButton )
    goto LABEL_64;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)statusTabButton,
    modeKind,
    (const MethodInfo *)isInit);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  v28 = (PartyServantListViewManager_CallbackFunc_o *)sub_B77694(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !partyServantListViewManager )
    goto LABEL_64;
  partyServantListViewManager->fields.callbackFunc = v28;
  sub_B77560(
    (BattleServantConfConponent_o *)&partyServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = 2;
  statusTabButton = (UnityEngine_Behaviour_o *)partyServantListViewManager;
LABEL_63:
  PartyServantListViewManager__SetMode_32379976(
    (PartyServantListViewManager_o *)statusTabButton,
    v35,
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x2
  System_Int64_array *v16; // x1
  bool v17; // w4
  bool v18; // w5
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_438EDB9 & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_EndStatusSync__);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438EDB9 = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_23;
    if ( PartyServantListViewManager__GetSwapChoiceList(partyServantListViewManager, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v25,
                                                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v15 = unchoiceList;
        v16 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B7769C(partyServantListViewManager, callback);
    }
  }
  else if ( modeKind == 1 )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_23;
    if ( PartyServantListViewManager__GetSwapLockList(partyServantListViewManager, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v14,
                                                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v15 = unlockList;
        v16 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)partyServantListViewManager,
          v16,
          v15,
          0,
          v17,
          v18,
          0LL);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    PartyServantSelectMenu_RequestCallbackFunc__Invoke(callback, 0, 0LL);
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

  if ( (byte_438EDAB & 1) == 0 )
  {
    sub_B775C4(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    byte_438EDAB = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
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

  if ( (byte_438EDAC & 1) == 0 )
  {
    sub_B775C4(&PartyServantSelectMenu_CallbackFunc_TypeInfo);
    byte_438EDAC = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall PartyServantSelectMenu_CallbackFunc__BeginInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = result;
  if ( (byte_438A0D7 & 1) == 0 )
  {
    sub_B775C4(&PartyServantSelectMenu_ResultKind_TypeInfo);
    byte_438A0D7 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12, item);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu_CallbackFunc__Invoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  PartyServantSelectMenu_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, PartyServantListViewItem_o *, _QWORD); // x0
  PartyServantSelectMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, PartyServantListViewItem_o *, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  PartyServantSelectMenu_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyServantSelectMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, PartyServantListViewItem_o *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, item, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, item, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, PartyServantListViewItem_o *, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, v26, item, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B0F4C0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, PartyServantListViewItem_o *, _QWORD))v16)(
            v21,
            v13,
            item,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, PartyServantListViewItem_o *, _QWORD))(*v21
                                                                                          + 16LL
                                                                                          * *(unsigned __int16 *)(v22 + 72)
                                                                                          + 312))(
            v21,
            v32,
            item,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, PartyServantListViewItem_o *, __int64))v23)(v21, v32, item, v22);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu_RequestCallbackFunc___ctor(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall PartyServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_438A0D8 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438A0D8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu_RequestCallbackFunc__Invoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyServantSelectMenu_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  PartyServantSelectMenu_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PartyServantSelectMenu_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isRequest, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
    goto LABEL_37;
  }
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
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct PartyServantSelectMenu_o *_4__this; // x8
  struct PartyServantSelectMenu_o *v16; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x19
  __int64 v18; // x21
  __int64 v19; // x9
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_438A0D6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&PartyServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PartyServantSelectMenu_OnSelectItem__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__);
    byte_438A0D6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_18056328(v7, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B7769C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_13;
  partyServantListViewManager = v16->fields.partyServantListViewManager;
  v18 = sub_B77694(PartyServantListViewManager_CallbackFunc_TypeInfo);
  v19 = *(_QWORD *)Method_PartyServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v18 + 40) = Method_PartyServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v18 + 16) = v19;
  *(_QWORD *)(v18 + 32) = v16;
  sub_B77560((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v16, v20, v21, v22, v23, v24, v25);
  if ( !partyServantListViewManager )
    goto LABEL_13;
  PartyServantListViewManager__SetMode(
    partyServantListViewManager,
    2,
    (PartyServantListViewManager_CallbackFunc_o *)v18,
    0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  PartyServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  PartyServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}