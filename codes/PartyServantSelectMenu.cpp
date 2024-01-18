void __fastcall PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418B857 & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_418B857 = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_B2C434(0LL, v14);
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
    sub_B2C434(0LL, method);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_32396636(this, 0LL, v2);
}


void __fastcall PartyServantSelectMenu__Close_32396636(
        PartyServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_418B846 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyServantSelectMenu_EndClose__, v6);
    byte_418B846 = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_B2C434(0LL, v7);
  PartyServantListViewManager__SetMode_32382676(partyServantListViewManager, 1, v8);
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.state = 4;
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_418B856 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    byte_418B856 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v6 = this->fields.partyServantListViewManager,
        v7 = (PartyServantListViewManager_CallbackFunc_o *)sub_B2C42C(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL),
        !v6) )
  {
    sub_B2C434(partyServantListViewManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  PartyServantListViewManager__SetMode_32382676(v6, 2, v14);
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
      sub_B2C434(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32382676(partyServantListViewManager, 3, v6);
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
      sub_B2C434(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32382676(partyServantListViewManager, 3, v6);
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
      sub_B2C434(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32382676(partyServantListViewManager, 3, v6);
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
      sub_B2C434(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32382676(partyServantListViewManager, 3, v6);
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
      sub_B2C434(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32382676(partyServantListViewManager, 3, v6);
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
      sub_B2C434(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32382676(partyServantListViewManager, 3, v6);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__EndCloseShowServant(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v6; // x20
  PartyServantListViewManager_CallbackFunc_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_418B852 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    byte_418B852 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, v2),
        v6 = this->fields.partyServantListViewManager,
        v7 = (PartyServantListViewManager_CallbackFunc_o *)sub_B2C42C(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL),
        !v6) )
  {
    sub_B2C434(partyServantListViewManager, method);
  }
  v6->fields.callbackFunc = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  PartyServantListViewManager__SetMode_32382676(v6, 2, v14);
}


void __fastcall PartyServantSelectMenu__EndCloseShowServantQuestJump(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_418B853 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_418B853 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_B2C434(0LL, method);
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyServantSelectMenu__Callback(this, 1, this->fields.tutorialSelect, v4);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float v22; // s7
  int v23; // s0
  int v27; // s8
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  float x; // s0
  float v39; // s4
  WebViewManager_o *Instance; // x0
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  CommonUI_o *v43; // x20
  System_Action_o *v44; // x21
  BattleServantConfConponent_o *p_openCallbackFunc; // x19
  System_Action_o *v46; // x20
  struct System_Action_o *openCallbackFunc; // t1
  MethodInfo v48; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector2_o v49; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v52; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_418B844 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&PartyServantListViewManager_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&FSUtility_TypeInfo, v5);
    sub_B2C35C(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__, v6);
    sub_B2C35C(&Method_PartyServantSelectMenu_OnSelectItem__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_418B844 = 1;
  }
  v48.methodPointer = 0LL;
  v48.invoker_method = 0LL;
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v30 = (PartyServantListViewManager_CallbackFunc_o *)sub_B2C42C(PartyServantListViewManager_CallbackFunc_TypeInfo);
    PartyServantListViewManager_CallbackFunc___ctor(
      v30,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      0LL);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v30;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&partyServantListViewManager->fields.callbackFunc,
        (System_Int32_array **)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      PartyServantListViewManager__SetMode_32382676(partyServantListViewManager, 2, v37);
      goto LABEL_17;
    }
LABEL_20:
    sub_B2C434(tutorialMaskBase, v10);
  }
  v9 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v9, 0, v2);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  PartyServantListViewManager__SetMode_32382676(tutorialMaskBase, 1, v11);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_17;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0LL);
  v50.fields.m_XMin = -450.0;
  v50.fields.m_Width = 150.0;
  v50.fields.m_Height = 180.0;
  v50.fields.m_YMin = -30.0;
  UnityEngine_Rect___ctor(v50, v19, v20, v21, v22, &v48);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v27 = -1011122176;
  }
  else
  {
    x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v23, &v48);
    v51.fields.m_YMin = 8.0;
    v51.fields.m_XMin = x + 8.0;
    UnityEngine_Rect__set_x(v51, v39, &v48);
    v27 = -1011384320;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  methodPointer = v48.methodPointer;
  invoker_method = v48.invoker_method;
  v43 = (CommonUI_o *)Instance;
  v44 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0LL);
  if ( !v43 )
    goto LABEL_20;
  v49.fields.y = 100.0;
  LODWORD(v49.fields.x) = v27;
  *(_QWORD *)&v52.fields.m_XMin = methodPointer;
  *(_QWORD *)&v52.fields.m_Width = invoker_method;
  CommonUI__OpenTutorialArrowMark(v43, v49, 0.0, v52, v44, 0LL);
LABEL_17:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
  v46 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_openCallbackFunc, 0LL, v13, v14, v15, v16, v17, v18);
    System_Action__Invoke(v46, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *statusTabButton; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_418B845 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyServantSelectMenu_OnSelectItem__, v3);
    byte_418B845 = 1;
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
        v6 = (PartyServantListViewManager_CallbackFunc_o *)sub_B2C42C(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_B2C434(statusTabButton, method);
  }
  partyServantListViewManager->fields.callbackFunc = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&partyServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  PartyServantListViewManager__SetMode_32382676(partyServantListViewManager, 5, v13);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x21

  if ( (byte_418B850 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyServantSelectMenu_EndCloseShowServant__, v7);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_418B850 = 1;
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
LABEL_20:
          PartyServantListViewManager__SetMode_32382676(partyServantListViewManager, v12, v11);
          goto LABEL_21;
        }
LABEL_19:
        v12 = 3;
        goto LABEL_20;
      }
    }
LABEL_23:
    sub_B2C434(partyServantListViewManager, isDecide);
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, isDecide);
    byte_4185F2D = 1;
  }
  v13 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
        goto LABEL_19;
    }
    goto LABEL_23;
  }
LABEL_21:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__CloseServantStatusDialog(Instance, v15, 0LL);
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
  CommonUI_o *Instance; // x22
  System_Action_o *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_418B851 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_418B851 = 1;
  }
  if ( questId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_B2C434(v13, v14);
    CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
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
    sub_B2C2F8(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C434(0LL, method);
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
  PartyServantSelectMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_418B849 & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyServantSelectMenu_EndClickCancel__, method);
    sub_B2C35C(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418B849 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_B2C434(0LL, method);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v6 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickCancel__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v6, v7);
  }
}


void __fastcall PartyServantSelectMenu__OnClickDecide(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PartyServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418B848 & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyServantSelectMenu_EndClickDecide__, method);
    sub_B2C35C(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418B848 = 1;
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
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickDecide__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v5, v6);
  }
}


void __fastcall PartyServantSelectMenu__OnClickScaleChange(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_418B854 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B854 = 1;
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
      sub_B2C434(partyServantListViewManager, v3);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)partyServantListViewManager, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabChoice(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_418B84C & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyServantSelectMenu_EndClickTabChoice__, method);
    sub_B2C35C(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418B84C = 1;
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
        v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabChoice__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v9, v10);
    }
    PartyServantSelectMenu__SetTabKind(this, 2, 0, v5);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabLock(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_418B84B & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyServantSelectMenu_EndClickTabLock__, method);
    sub_B2C35C(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418B84B = 1;
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
        v7 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabLock__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v9, v10);
    }
    PartyServantSelectMenu__SetTabKind(this, 1, 0, v5);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabPush(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PartyServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418B84D & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyServantSelectMenu_EndClickTabPush__, method);
    sub_B2C35C(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418B84D = 1;
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
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabPush__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v5, v6);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabStatus(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PartyServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418B84A & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyServantSelectMenu_EndClickTabStatus__, method);
    sub_B2C35C(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418B84A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabStatus__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v5, v6);
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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x21
  __int64 partyServantListViewManager; // x0
  const MethodInfo *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  MethodInfo *v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int32_t state; // w8
  System_Int32_array **Item; // x1
  int32_t tutorialMode; // w8
  CommonUI_o *Instance; // x20
  System_Action_o *v55; // x21
  PartyServantListViewItem_o **v56; // x20
  PartyServantListViewItem_o *v57; // x8
  SoundManager_c *v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // w1
  PartyServantSelectMenu_o *v61; // x0
  int32_t v62; // w2
  int32_t modeKind; // w8
  struct PartyServantListViewManager_o *v64; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v66; // q1
  PartyServantListViewItem_o *v67; // x8
  int32_t partyIndex; // w22
  int32_t PartyListViewItemMenuKind_k__BackingField; // w24
  PartyServantListViewItem_o *v70; // x8
  UserServantEntity_o *v71; // x20
  CommonUI_o *v72; // x21
  System_Int64_array *equipIdList; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  ServantStatusDialog_ResultDelegate_o *v75; // x24
  const MethodInfo *v76; // x2
  int64_t v77; // x22
  struct UserServantEntity_o *v78; // x8
  __int128 v79; // q1
  PartyServantListViewManager_CallbackFunc_c *v80; // x0
  ServantStatusDialog_ResultDelegate_o *v81; // x22
  PartyServantListViewManager_CallbackFunc_o *v82; // x21
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  const MethodInfo *v89; // x2
  ServantStatusDialog_EndIndividualityDelegate_o *v90; // x24
  ServantStatusDialog_EndIndividualityDelegate_o *v91; // x22
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v93; // x19
  __int64 v94; // x22
  __int64 v95; // x23
  ServantEntity_o *v96; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x19
  int32_t v98; // w22
  int32_t v99; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v100; // x8
  int32_t v101; // w22
  int32_t v102; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v104; // x19
  System_String_o *v105; // x22
  System_Object_array *v106; // x24
  int32_t Rarity; // w26
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x26
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x26
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x25
  int32_t v129; // w0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x25
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **v143; // x25
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x20
  System_String_o *v151; // x20
  System_String_o *v152; // x22
  System_String_o *v153; // x23
  CommonUI_o *v154; // x24
  CommonConfirmDialog_ClickDelegate_o *v155; // x25
  __int64 v156; // x0
  __int64 v157; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  if ( (byte_418B84F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&BalanceConfig_TypeInfo, v7);
    sub_B2C35C(&PartyServantListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B2C35C(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&object___TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_B2C35C(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__, v21);
    sub_B2C35C(&Method_PartyServantSelectMenu_EndShowServantWithQuest__, v22);
    sub_B2C35C(&Method_PartyServantSelectMenu_EndShowServant__, v23);
    sub_B2C35C(&Method_PartyServantSelectMenu_OnSelectItem__, v24);
    sub_B2C35C(&Rarity_TypeInfo, v25);
    sub_B2C35C(&ServantStatusDialog_ResultDelegate_TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28);
    sub_B2C35C(&SoundManager_TypeInfo, v29);
    sub_B2C35C(&Method_PartyServantSelectMenu___c__DisplayClass60_0__OnSelectItem_b__0__, v30);
    sub_B2C35C(&PartyServantSelectMenu___c__DisplayClass60_0_TypeInfo, v31);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v32);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v33);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v34);
    sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v35);
    byte_418B84F = 1;
  }
  v36 = sub_B2C42C(PartyServantSelectMenu___c__DisplayClass60_0_TypeInfo);
  PartyServantSelectMenu___c__DisplayClass60_0___ctor((PartyServantSelectMenu___c__DisplayClass60_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_160;
  *(_QWORD *)(v36 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v55 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v55, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark(Instance, v55, 0LL);
      return;
    }
    goto LABEL_160;
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
      goto LABEL_160;
    Item = (System_Int32_array **)PartyServantListViewManager__GetItem(
                                    (PartyServantListViewManager_o *)partyServantListViewManager,
                                    n,
                                    v45);
  }
  *(_QWORD *)(v36 + 24) = Item;
  v56 = (PartyServantListViewItem_o **)(v36 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v36 + 24), Item, (System_String_array **)v45, v46, v47, v48, v49, v50);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      v64 = this->fields.partyServantListViewManager;
      this->fields.state = 2;
      goto LABEL_91;
    }
    if ( !*v56 )
      goto LABEL_160;
    if ( !(*v56)->fields.userServantEntity )
    {
LABEL_86:
      v58 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
LABEL_87:
        if ( !v58->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v58);
      }
LABEL_89:
      SoundManager__playSystemSe(2, 0LL);
      goto LABEL_90;
    }
    partyServantListViewManager = (__int64)this->fields.partyServantListViewManager;
    if ( partyServantListViewManager )
    {
      ListViewManager__ClearScrollBarValue((ListViewManager_o *)partyServantListViewManager, 1, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this->fields.state = 5;
      if ( *v56 )
      {
        userServantEntity = (*v56)->fields.userServantEntity;
        if ( userServantEntity )
        {
          v66 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v160.fields.fakeValue = v66;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v158 = v160;
          partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v158, 0LL);
          this->fields.selectUserSvtId = partyServantListViewManager;
          v67 = *v56;
          if ( *v56 )
          {
            partyIndex = v67->fields.partyIndex;
            PartyListViewItemMenuKind_k__BackingField = v67->fields._PartyListViewItemMenuKind_k__BackingField;
            partyServantListViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v70 = *v56;
            if ( *v56 )
            {
              v71 = v70->fields.userServantEntity;
              v72 = (CommonUI_o *)partyServantListViewManager;
              if ( (partyIndex & 0x80000000) != 0 )
              {
                if ( PartyListViewItemMenuKind_k__BackingField == 8 )
                {
                  v81 = (ServantStatusDialog_ResultDelegate_o *)sub_B2C42C(ServantStatusDialog_ResultDelegate_TypeInfo);
                  ServantStatusDialog_ResultDelegate___ctor(
                    v81,
                    (Il2CppObject *)this,
                    Method_PartyServantSelectMenu_EndShowServantWithQuest__,
                    0LL);
                  if ( v72 )
                  {
                    CommonUI__OpenServantStatusDialog_17982572(v72, 0, v71, v81, 0LL);
                    return;
                  }
                }
                else
                {
                  v91 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B2C42C(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
                  ServantStatusDialog_EndIndividualityDelegate___ctor(
                    v91,
                    (Il2CppObject *)this,
                    Method_PartyServantSelectMenu_EndShowServant__,
                    0LL);
                  if ( v72 )
                  {
                    CommonUI__OpenServantStatusDialog_17982332(v72, 0, v71, v91, 0LL);
                    return;
                  }
                }
              }
              else
              {
                equipIdList = v70->fields.equipIdList;
                questRestrictionInfo = v70->fields.questRestrictionInfo;
                if ( PartyListViewItemMenuKind_k__BackingField == 8 )
                {
                  v75 = (ServantStatusDialog_ResultDelegate_o *)sub_B2C42C(ServantStatusDialog_ResultDelegate_TypeInfo);
                  ServantStatusDialog_ResultDelegate___ctor(
                    v75,
                    (Il2CppObject *)this,
                    Method_PartyServantSelectMenu_EndShowServantWithQuest__,
                    0LL);
                  if ( v72 )
                  {
                    CommonUI__OpenServantStatusDialog_17983076(v72, 0, v71, equipIdList, questRestrictionInfo, v75, 0LL);
                    return;
                  }
                }
                else
                {
                  v90 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B2C42C(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
                  ServantStatusDialog_EndIndividualityDelegate___ctor(
                    v90,
                    (Il2CppObject *)this,
                    Method_PartyServantSelectMenu_EndShowServant__,
                    0LL);
                  if ( v72 )
                  {
                    CommonUI__OpenServantStatusDialog_17982812(v72, 0, v71, equipIdList, questRestrictionInfo, v90, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_160:
    sub_B2C434(partyServantListViewManager, v38);
  }
  if ( kind != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v62 = -1;
    this->fields.state = 3;
    v61 = this;
    v60 = 0;
    goto LABEL_35;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      v57 = *v56;
      if ( !*v56 )
        goto LABEL_160;
      if ( !v57->fields.isBase && v57->fields.isQuestRestriction
        || v57->fields.isSame
        || (v57->fields.commonRestrictionId & 0x80000000) == 0 )
      {
        goto LABEL_86;
      }
      if ( v57->fields.isBase )
      {
        v58 = SoundManager_TypeInfo;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          goto LABEL_25;
        goto LABEL_27;
      }
      if ( v57->fields.isLeave
        || (v57->fields.fatigureTime & 0x8000000000000000LL) == 0
        || v57->fields._IsAllOutBattle_k__BackingField
        || v57->fields._IsDataLost_k__BackingField )
      {
        goto LABEL_86;
      }
      v58 = SoundManager_TypeInfo;
      if ( v57->fields._TimesToRestart_k__BackingField < 1 )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_25:
          if ( !v58->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v58);
        }
LABEL_27:
        SoundManager__playSystemSe(0, 0LL);
        v60 = 1;
        v61 = this;
        v62 = n;
        this->fields.state = 3;
LABEL_35:
        PartyServantSelectMenu__Callback(v61, v60, v62, v59);
        return;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        goto LABEL_89;
      goto LABEL_87;
    case 1:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(11, 0LL);
      if ( !*v56 )
        goto LABEL_160;
      (*v56)->fields.isSwapLock ^= 1u;
      goto LABEL_77;
    case 2:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( !*v56 )
        goto LABEL_160;
      (*v56)->fields.isSwapChoice ^= 1u;
LABEL_77:
      this->fields.state = 2;
      v64 = this->fields.partyServantListViewManager;
      v80 = PartyServantListViewManager_CallbackFunc_TypeInfo;
      goto LABEL_92;
    case 3:
      if ( !*v56 )
        goto LABEL_160;
      if ( !(*v56)->fields.isEnabled )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        this->fields.state = 2;
LABEL_90:
        v64 = this->fields.partyServantListViewManager;
LABEL_91:
        v80 = PartyServantListViewManager_CallbackFunc_TypeInfo;
LABEL_92:
        v82 = (PartyServantListViewManager_CallbackFunc_o *)sub_B2C42C(v80);
        PartyServantListViewManager_CallbackFunc___ctor(
          v82,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL);
        if ( v64 )
        {
          v64->fields.callbackFunc = v82;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v64->fields.callbackFunc,
            (System_Int32_array **)v82,
            v83,
            v84,
            v85,
            v86,
            v87,
            v88);
          PartyServantListViewManager__SetMode_32382676(v64, 2, v89);
          return;
        }
        goto LABEL_160;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyServantListViewManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
      if ( !partyServantListViewManager )
        goto LABEL_160;
      v77 = *(_QWORD *)(partyServantListViewManager + 120);
      if ( !v77 )
      {
LABEL_71:
        PartyServantSelectMenu__PushRequest(this, *v56, v76);
        return;
      }
      if ( !*v56 )
        goto LABEL_160;
      v78 = (*v56)->fields.userServantEntity;
      if ( !v78 )
        goto LABEL_160;
      v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
      *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v160.fields.fakeValue = v79;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v159 = v160;
      if ( v77 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v159, 0LL) )
        goto LABEL_71;
      partyServantListViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !partyServantListViewManager )
        goto LABEL_160;
      partyServantListViewManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)partyServantListViewManager,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !partyServantListViewManager )
        goto LABEL_160;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)partyServantListViewManager,
                 v77,
                 (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      partyServantListViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !partyServantListViewManager )
        goto LABEL_160;
      partyServantListViewManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)partyServantListViewManager,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Entity )
        goto LABEL_160;
      v93 = (DataMasterBase_WarMaster__WarEntity__int__o *)partyServantListViewManager;
      v95 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
      v94 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v161.fields.currentCryptoKey = v95;
      *(_QWORD *)&v161.fields.fakeValue = v94;
      partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v161, 0LL);
      if ( !v93 )
        goto LABEL_160;
      v96 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v93,
                                 partyServantListViewManager,
                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(Entity->fields.svtId, 0LL);
      partyServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                      Entity->fields.limitCount,
                                      0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_160;
      partyServantListViewManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      Master_WarQuestSelectionMaster,
                                      v98,
                                      partyServantListViewManager,
                                      0LL);
      if ( !*v56 )
        goto LABEL_160;
      v99 = partyServantListViewManager;
      partyServantListViewManager = PartyServantListViewItem__get_SvtId(*v56, v38);
      if ( !*v56 )
        goto LABEL_160;
      v100 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v56)->fields.userServantEntity;
      if ( !v100 )
        goto LABEL_160;
      v101 = partyServantListViewManager;
      v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v100[6], 0LL);
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     Master_WarQuestSelectionMaster,
                                     v101,
                                     v102,
                                     0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
      v105 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
      v106 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
      Rarity = UserServantEntity__getRarity(Entity, 0LL);
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      partyServantListViewManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
      if ( !v106 )
        goto LABEL_160;
      v114 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = sub_B2C41C(partyServantListViewManager, v106->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_162;
      }
      if ( !v106->max_length )
        goto LABEL_161;
      v106->m_Items[0] = (Il2CppObject *)v114;
      sub_B2C2F8((BattleServantConfConponent_o *)v106->m_Items, v114, v108, v109, v110, v111, v112, v113);
      if ( !v96 )
        goto LABEL_160;
      partyServantListViewManager = (__int64)ServantEntity__getClassName(v96, 0LL);
      v121 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = sub_B2C41C(partyServantListViewManager, v106->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_162;
      }
      if ( v106->max_length <= 1 )
        goto LABEL_161;
      v106->m_Items[1] = (Il2CppObject *)v121;
      sub_B2C2F8((BattleServantConfConponent_o *)&v106->m_Items[1], v121, v115, v116, v117, v118, v119, v120);
      partyServantListViewManager = (__int64)ServantEntity__getName(v96, v99, -1, 0LL);
      v128 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = sub_B2C41C(partyServantListViewManager, v106->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_162;
      }
      if ( v106->max_length <= 2 )
        goto LABEL_161;
      v106->m_Items[2] = (Il2CppObject *)v128;
      sub_B2C2F8((BattleServantConfConponent_o *)&v106->m_Items[2], v128, v122, v123, v124, v125, v126, v127);
      if ( !*v56 )
        goto LABEL_160;
      partyServantListViewManager = (__int64)(*v56)->fields.userServantEntity;
      if ( !partyServantListViewManager )
        goto LABEL_160;
      v129 = UserServantEntity__getRarity((UserServantEntity_o *)partyServantListViewManager, 0LL);
      partyServantListViewManager = (__int64)Rarity__getRarityType(v129, 0LL);
      v136 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = sub_B2C41C(partyServantListViewManager, v106->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_162;
      }
      if ( v106->max_length <= 3 )
        goto LABEL_161;
      v106->m_Items[3] = (Il2CppObject *)v136;
      sub_B2C2F8((BattleServantConfConponent_o *)&v106->m_Items[3], v136, v130, v131, v132, v133, v134, v135);
      if ( !*v56 )
        goto LABEL_160;
      partyServantListViewManager = (__int64)(*v56)->fields.servantEntity;
      if ( !partyServantListViewManager )
        goto LABEL_160;
      partyServantListViewManager = (__int64)ServantEntity__getClassName(
                                               (ServantEntity_o *)partyServantListViewManager,
                                               0LL);
      v143 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = sub_B2C41C(partyServantListViewManager, v106->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_162;
      }
      if ( v106->max_length <= 4 )
        goto LABEL_161;
      v106->m_Items[4] = (Il2CppObject *)v143;
      sub_B2C2F8((BattleServantConfConponent_o *)&v106->m_Items[4], v143, v137, v138, v139, v140, v141, v142);
      if ( !*v56 )
        goto LABEL_160;
      partyServantListViewManager = (__int64)(*v56)->fields.servantEntity;
      if ( !partyServantListViewManager )
        goto LABEL_160;
      partyServantListViewManager = (__int64)ServantEntity__getName(
                                               (ServantEntity_o *)partyServantListViewManager,
                                               ServantLimitCountSealAfter,
                                               -1,
                                               0LL);
      v150 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = sub_B2C41C(partyServantListViewManager, v106->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
        {
LABEL_162:
          v157 = sub_B2C454(partyServantListViewManager);
          sub_B2C400(v157, 0LL);
        }
      }
      if ( v106->max_length <= 5 )
      {
LABEL_161:
        v156 = sub_B2C460(partyServantListViewManager);
        sub_B2C400(v156, 0LL);
      }
      v106->m_Items[5] = (Il2CppObject *)v150;
      sub_B2C2F8((BattleServantConfConponent_o *)&v106->m_Items[5], v150, v144, v145, v146, v147, v148, v149);
      v151 = System_String__Format_44384256(v105, v106, 0LL);
      v152 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v153 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      v154 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v155 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v155,
        (Il2CppObject *)v36,
        Method_PartyServantSelectMenu___c__DisplayClass60_0__OnSelectItem_b__0__,
        0LL);
      partyServantListViewManager = (__int64)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v154 )
        goto LABEL_160;
      CommonUI__OpenConfirmDialog_17970624(
        v154,
        v104,
        v151,
        v152,
        v153,
        v155,
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
        const MethodInfo *method)
{
  PartyServantSelectMenu_o *v17; // x19
  __int64 v18; // x1
  unsigned int state; // w8
  int v20; // w8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct FollowerQuestInfomationDraw_o *questInfomationDraw; // x8
  PartyServantSelectMenu_o *v36; // x26
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x7
  const MethodInfo *v46; // x2
  System_Int32_array *waveBattleEnemyClassIds; // x3
  QuestRestrictionInfo_o *v48; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v50; // x20

  v17 = this;
  if ( (byte_418B842 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, baseDeckItemList);
    this = (PartyServantSelectMenu_o *)sub_B2C35C(&Method_PartyServantSelectMenu_EndOpen__, v18);
    byte_418B842 = 1;
  }
  state = v17->fields.state;
  if ( state <= 7 )
  {
    v20 = 1 << state;
    if ( (v20 & 0xCC) != 0 )
    {
      v17->fields.tutorialMode = tutorialMode;
      v17->fields.callbackFunc = callback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v17->fields.callbackFunc,
        (System_Int32_array **)callback,
        (System_String_array **)partyItem,
        *(System_String_array ***)&num,
        *(System_Boolean_array ***)&tutorialMode,
        (System_Int32_array **)setupInfo,
        (System_Int32_array *)questRestrictionInfo,
        (System_Int32_array *)callback);
      v17->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v17->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      PartyServantSelectMenu__SetTabKind(v17, v17->fields.modeKind, 0, v27);
      PartyServantSelectMenu__EndOpen(v17, v28);
      return;
    }
    if ( (v20 & 0x11) != 0 )
    {
      if ( partyItem )
      {
        this = (PartyServantSelectMenu_o *)PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( this )
        {
          questInfomationDraw = this->fields.questInfomationDraw;
          v36 = this;
          v17->fields.tutorialMode = tutorialMode;
          v17->fields.isSelectedSvt = questInfomationDraw != 0LL;
          v17->fields.callbackFunc = callback;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v17->fields.callbackFunc,
            (System_Int32_array **)callback,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          v17->fields.openCallbackFunc = openCallback;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v17->fields.openCallbackFunc,
            (System_Int32_array **)openCallback,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
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
                PartyServantSelectMenu__SetTabKind(v17, v17->fields.modeKind, 1, v44);
                this = (PartyServantSelectMenu_o *)v17->fields.titleInfo;
                if ( this )
                {
                  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 70, 0LL);
                  this = (PartyServantSelectMenu_o *)v17->fields.titleInfo;
                  if ( this )
                  {
                    TitleInfoControl__setBackBtnSprite_19529688((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
                        v45);
                      this = (PartyServantSelectMenu_o *)v17->fields.partyServantListViewManager;
                      if ( this )
                      {
                        PartyServantListViewManager__SetMode_32382676((PartyServantListViewManager_o *)this, 1, v46);
                        this = (PartyServantSelectMenu_o *)v17->fields.questInfomationDraw;
                        if ( partyItem->fields.menuKind == 9 )
                        {
                          if ( !this )
                            goto LABEL_25;
                          waveBattleEnemyClassIds = partyItem->fields.waveBattleEnemyClassIds;
                          v48 = questRestrictionInfo;
                        }
                        else
                        {
                          if ( !this )
                            goto LABEL_25;
                          v48 = questRestrictionInfo;
                          waveBattleEnemyClassIds = 0LL;
                        }
                        FollowerQuestInfomationDraw__SetInfomation(
                          (FollowerQuestInfomationDraw_o *)this,
                          v48,
                          HIDWORD(v36[1].fields.closeTransform),
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
                            v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                            System_Action___ctor(v50, (Il2CppObject *)v17, Method_PartyServantSelectMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)v17, v50, 0LL);
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
      sub_B2C434(this, baseDeckItemList);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__Open_32395576(
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v35; // x1
  UnityEngine_GameObject_o *v36; // x25
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x6
  const MethodInfo *v39; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v41; // x20

  if ( (byte_418B843 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, partyItem);
    sub_B2C35C(&Method_PartyServantSelectMenu_EndOpen__, v17);
    byte_418B843 = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v19 = 1 << state;
    if ( (v19 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&num,
        *(System_String_array ***)&tutorialMode,
        (System_Boolean_array **)setupInfo,
        (System_Int32_array **)questRestrictionInfo,
        (System_Int32_array *)callback,
        (System_Int32_array *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&num,
        *(System_String_array ***)&tutorialMode,
        (System_Boolean_array **)setupInfo,
        (System_Int32_array **)questRestrictionInfo,
        (System_Int32_array *)callback,
        (System_Int32_array *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
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
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 70, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setBackBtnSprite_19529688((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_32378360(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v38);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_32382676((PartyServantListViewManager_o *)gameObject, 1, v39),
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
        sub_B2C434(gameObject, v35);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v16; // x23
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v24; // x8
  int64_t v25; // x0
  __int128 v26; // q0
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v29; // q0
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w27
  int32_t v32; // w28
  int32_t v33; // w21
  bool IsLock; // w23
  char v35; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t randomSettingSupport; // w19
  int32_t v42; // [xsp+50h] [xbp-110h]
  int32_t v43; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  __int64 v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_418B855 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__, v9);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_418B855 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v16 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v16 || !userServantEntity )
    goto LABEL_21;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v16->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
  if ( !v17 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v24 = *(_QWORD *)&v16->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v16->fields.writeMasterDataThread;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v27,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v35 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v40 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v39;
  *(_QWORD *)&v54.fields.currentCryptoKey = v40;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
  if ( !v30 )
LABEL_21:
    sub_B2C434(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    v43,
    v42,
    v31,
    v32,
    v33,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v45,
    IsLock,
    v35 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != v47,
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
  System_String_o **v24; // x8
  bool v25; // w23
  unsigned int v26; // w21
  UICommonButton_o *v27; // x22
  bool enabled; // w0
  System_String_o **v29; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v31; // w0
  System_String_o **v32; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v34; // w0
  UnityEngine_Object_o *pushTabButton; // x21
  System_String_o **v36; // x8
  UICommonButton_o *v37; // x22
  bool v38; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v40; // x8
  int32_t state; // w8
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t v50; // w1

  if ( (byte_418B847 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_PartyServantSelectMenu_OnSelectItem__, v9);
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, v10);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v11);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v12);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v13);
    sub_B2C35C(&StringLiteral_10410/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/, v14);
    sub_B2C35C(&StringLiteral_10413/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/, v15);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v16);
    sub_B2C35C(&StringLiteral_10411/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/, v17);
    sub_B2C35C(&StringLiteral_10412/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/, v18);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v19);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v20);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v21);
    byte_418B847 = 1;
  }
  v22 = !this->fields.isInitTab || isInit;
  if ( v22 || this->fields.modeKind != modeKind )
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
    v24 = (System_String_o **)&StringLiteral_17139/*"button_select_reg"*/;
    if ( modeKind )
      v24 = (System_String_o **)&StringLiteral_17140/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, *v24, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    v25 = !v22;
    v26 = !v22;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v26,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    v27 = this->fields.statusTabButton;
    if ( !v27 )
      goto LABEL_64;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(v27, enabled, v26, 0LL);
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
    v29 = (System_String_o **)&StringLiteral_17125/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v29 = (System_String_o **)&StringLiteral_17126/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, *v29, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v25,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_64;
    v31 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v31, v25, 0LL);
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
    v32 = (System_String_o **)&StringLiteral_17123/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v32 = (System_String_o **)&StringLiteral_17124/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, *v32, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v25,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_64;
    v34 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v34, v25, 0LL);
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
      v36 = (System_String_o **)&StringLiteral_17137/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v36 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabButton, *v36, 0LL);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_64;
      statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                     statusTabButton,
                                                     0LL,
                                                     v25,
                                                     statusTabButton->klass[1]._1.interfaceOffsets);
      v37 = this->fields.pushTabButton;
      if ( !v37 )
        goto LABEL_64;
      v38 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
      UICommonButton__SetColliderEnable(v37, v38, v25, 0LL);
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
        v40 = &StringLiteral_10413/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_55;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = &StringLiteral_10411/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_55;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = &StringLiteral_10410/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_55;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = &StringLiteral_10412/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
LABEL_55:
        statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v40, 0LL);
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
      v50 = 1;
      goto LABEL_63;
    }
LABEL_64:
    sub_B2C434(statusTabButton, *(_QWORD *)&modeKind);
  }
  if ( !statusTabButton )
    goto LABEL_64;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)statusTabButton,
    modeKind,
    (const MethodInfo *)isInit);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  v43 = (PartyServantListViewManager_CallbackFunc_o *)sub_B2C42C(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v43,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !partyServantListViewManager )
    goto LABEL_64;
  partyServantListViewManager->fields.callbackFunc = v43;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&partyServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = 2;
  statusTabButton = (UnityEngine_Behaviour_o *)partyServantListViewManager;
LABEL_63:
  PartyServantListViewManager__SetMode_32382676(
    (PartyServantListViewManager_o *)statusTabButton,
    v50,
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // x2
  System_Int64_array *v19; // x1
  bool v20; // w4
  bool v21; // w5
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_418B84E & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_PartyServantSelectMenu_EndStatusSync__, v7);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_418B84E = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v28,
                                                                       (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v18 = unchoiceList;
        v19 = choiceList;
        v21 = 1;
        v20 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B2C434(partyServantListViewManager, callback);
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v17,
                                                                       (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v18 = unlockList;
        v19 = lockList;
        v20 = 1;
        v21 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)partyServantListViewManager,
          v19,
          v18,
          0,
          v20,
          v21,
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

  if ( (byte_418B840 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418B840 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  PartyServantSelectMenu__remove_callbackFunc(v11, v12, v13);
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
  const MethodInfo *v12; // x1

  if ( (byte_418B841 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418B841 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  PartyServantSelectMenu__GetModeKind(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu_CallbackFunc___ctor(
        PartyServantSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = result;
  if ( (byte_41852A4 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantSelectMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_41852A4 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, PartyServantListViewItem_o *, _QWORD); // x0
  PartyServantSelectMenu_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, PartyServantListViewItem_o *, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  PartyServantSelectMenu_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, PartyServantListViewItem_o *, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, item, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, item, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, item, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, PartyServantListViewItem_o *, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, item, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, PartyServantListViewItem_o *, _QWORD))v17)(
            v22,
            v14,
            item,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, PartyServantListViewItem_o *, _QWORD))(*v22
                                                                                          + 16LL
                                                                                          * *(unsigned __int16 *)(v23 + 72)
                                                                                          + 312))(
            v22,
            v34,
            item,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, PartyServantListViewItem_o *, __int64))v24)(v22, v34, item, v23);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41852A5 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_41852A5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu_RequestCallbackFunc__Invoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PartyServantSelectMenu_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PartyServantSelectMenu_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyServantSelectMenu_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
    goto LABEL_37;
  }
}


void __fastcall PartyServantSelectMenu___c__DisplayClass60_0___ctor(
        PartyServantSelectMenu___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu___c__DisplayClass60_0___OnSelectItem_b__0(
        PartyServantSelectMenu___c__DisplayClass60_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  CommonUI_o *v11; // x20
  System_Action_o *_9__1; // x22
  struct PartyServantSelectMenu_o *_4__this; // x8
  struct PartyServantSelectMenu_o *v14; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x19
  __int64 v16; // x21
  __int64 v17; // x9

  if ( (byte_41852A3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&PartyServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_PartyServantSelectMenu_OnSelectItem__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_PartyServantSelectMenu___c__DisplayClass60_0__OnSelectItem_b__1__, v8);
    byte_41852A3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu___c__DisplayClass60_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B2C2F8(&this->fields.__9__1, _9__1);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_17971588(v11, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B2C434(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_13;
  partyServantListViewManager = v14->fields.partyServantListViewManager;
  v16 = sub_B2C42C(PartyServantListViewManager_CallbackFunc_TypeInfo);
  v17 = *(_QWORD *)Method_PartyServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v16 + 40) = Method_PartyServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v16 + 16) = v17;
  *(_QWORD *)(v16 + 32) = v14;
  sub_B2C2F8(v16 + 32, v14);
  if ( !partyServantListViewManager )
    goto LABEL_13;
  PartyServantListViewManager__SetMode(
    partyServantListViewManager,
    2,
    (PartyServantListViewManager_CallbackFunc_o *)v16,
    0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass60_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  PartyServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  PartyServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}