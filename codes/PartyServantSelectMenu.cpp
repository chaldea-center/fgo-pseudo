void __fastcall PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FDE81 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FDE81 = 1;
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
  const MethodInfo *v14; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *Item; // x2

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_B170D4();
      Item = PartyServantListViewManager__GetItem(partyServantListViewManager, n, v14);
    }
    PartyServantSelectMenu_CallbackFunc__Invoke(v10, result, Item, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__ClearScrollValue(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0

  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_B170D4();
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_32582488(this, 0LL, v2);
}


void __fastcall PartyServantSelectMenu__Close_32582488(
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x20

  if ( (byte_40FDE70 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PartyServantSelectMenu_EndClose__, v6);
    byte_40FDE70 = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_B170D4();
  PartyServantListViewManager__SetMode_32568528(partyServantListViewManager, 1, v7);
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.state = 4;
  v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v19, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  PartyServantListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_40FDE80 & 1) == 0 )
  {
    sub_B16FFC(&PartyServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    byte_40FDE80 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v6 = this->fields.partyServantListViewManager,
        v11 = (PartyServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                              v7,
                                                              v8,
                                                              v9,
                                                              v10),
        PartyServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL),
        !v6) )
  {
    sub_B170D4();
  }
  v6->fields.callbackFunc = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  PartyServantListViewManager__SetMode_32568528(v6, 2, v18);
}


void __fastcall PartyServantSelectMenu__EndClickCancel(
        PartyServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v6; // x2
  PartyServantListViewManager_o *v7; // x0

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (v7 = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    PartyServantListViewManager__SetMode_32568528(v7, 3, v6);
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
  PartyServantListViewManager_o *v7; // x0

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (v7 = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    PartyServantListViewManager__SetMode_32568528(v7, 3, v6);
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
  PartyServantListViewManager_o *v7; // x0

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (v7 = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    PartyServantListViewManager__SetMode_32568528(v7, 3, v6);
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
  PartyServantListViewManager_o *v7; // x0

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (v7 = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    PartyServantListViewManager__SetMode_32568528(v7, 3, v6);
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
  PartyServantListViewManager_o *v7; // x0

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (v7 = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    PartyServantListViewManager__SetMode_32568528(v7, 3, v6);
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
  PartyServantListViewManager_o *v7; // x0

  if ( isRequest )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, method),
          (v7 = this->fields.partyServantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    PartyServantListViewManager__SetMode_32568528(v7, 3, v6);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__EndCloseShowServant(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  PartyServantListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_40FDE7C & 1) == 0 )
  {
    sub_B16FFC(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_PartyServantSelectMenu_OnSelectItem__, v4);
    byte_40FDE7C = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, v2),
        v6 = this->fields.partyServantListViewManager,
        v11 = (PartyServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                              v7,
                                                              v8,
                                                              v9,
                                                              v10),
        PartyServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL),
        !v6) )
  {
    sub_B170D4();
  }
  v6->fields.callbackFunc = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  PartyServantListViewManager__SetMode_32568528(v6, 2, v18);
}


void __fastcall PartyServantSelectMenu__EndCloseShowServantQuestJump(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FDE7D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FDE7D = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_B170D4();
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
  const MethodInfo *v10; // x2
  PartyServantListViewManager_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float v22; // s7
  int v23; // s0
  int v27; // s8
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  PartyServantListViewManager_CallbackFunc_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x2
  float x; // s0
  float v43; // s4
  WebViewManager_o *Instance; // x0
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  CommonUI_o *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x21
  BattleServantConfConponent_o *p_openCallbackFunc; // x19
  System_Action_o *v54; // x20
  struct System_Action_o *openCallbackFunc; // t1
  MethodInfo v56; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector2_o v57; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v60; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_40FDE6E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&PartyServantListViewManager_CallbackFunc_TypeInfo, v4);
    sub_B16FFC(&FSUtility_TypeInfo, v5);
    sub_B16FFC(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__, v6);
    sub_B16FFC(&Method_PartyServantSelectMenu_OnSelectItem__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_40FDE6E = 1;
  }
  v56.methodPointer = 0LL;
  v56.invoker_method = 0LL;
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v2);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v34 = (PartyServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                          PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                          v30,
                                                          v31,
                                                          v32,
                                                          v33);
    PartyServantListViewManager_CallbackFunc___ctor(
      v34,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      0LL);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v34;
      sub_B16F98(
        (BattleServantConfConponent_o *)&partyServantListViewManager->fields.callbackFunc,
        (System_Int32_array **)v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      PartyServantListViewManager__SetMode_32568528(partyServantListViewManager, 2, v41);
      goto LABEL_17;
    }
LABEL_20:
    sub_B170D4();
  }
  v9 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v9, 0, v2);
  v11 = this->fields.partyServantListViewManager;
  if ( !v11 )
    goto LABEL_20;
  PartyServantListViewManager__SetMode_32568528(v11, 1, v10);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_17;
  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
  v58.fields.m_XMin = -450.0;
  v58.fields.m_Width = 150.0;
  v58.fields.m_Height = 180.0;
  v58.fields.m_YMin = -30.0;
  UnityEngine_Rect___ctor(v58, v19, v20, v21, v22, &v56);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v27 = -1011122176;
  }
  else
  {
    x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v23, &v56);
    v59.fields.m_YMin = 8.0;
    v59.fields.m_XMin = x + 8.0;
    UnityEngine_Rect__set_x(v59, v43, &v56);
    v27 = -1011384320;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  methodPointer = v56.methodPointer;
  invoker_method = v56.invoker_method;
  v47 = (CommonUI_o *)Instance;
  v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0LL);
  if ( !v47 )
    goto LABEL_20;
  v57.fields.y = 100.0;
  LODWORD(v57.fields.x) = v27;
  *(_QWORD *)&v60.fields.m_XMin = methodPointer;
  *(_QWORD *)&v60.fields.m_Width = invoker_method;
  CommonUI__OpenTutorialArrowMark(v47, v57, 0.0, v60, v52, 0LL);
LABEL_17:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
  v54 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_B16F98(p_openCallbackFunc, 0LL, v12, v13, v14, v15, v16, v17);
    System_Action__Invoke(v54, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UICommonButton_o *statusTabButton; // x0
  UnityEngine_Behaviour_o *v5; // x0
  struct UICommonButton_o *v6; // x0
  struct UICommonButton_o *lockTabButton; // x0
  UnityEngine_Behaviour_o *v8; // x0
  struct UICommonButton_o *v9; // x0
  struct UICommonButton_o *choiceTabButton; // x0
  UnityEngine_Behaviour_o *v11; // x0
  struct UICommonButton_o *v12; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  PartyServantListViewManager_CallbackFunc_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_40FDE6F & 1) == 0 )
  {
    sub_B16FFC(&PartyServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_PartyServantSelectMenu_OnSelectItem__, v3);
    byte_40FDE6F = 1;
  }
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))statusTabButton->klass->vtable._5_set_isEnabled.method)(
    statusTabButton,
    1LL,
    statusTabButton->klass->vtable._6_OnInit.methodPtr);
  v5 = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !v5 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
  v6 = this->fields.statusTabButton;
  if ( !v6 )
    goto LABEL_14;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v6->klass->vtable._14_SetState.method)(
    v6,
    0LL,
    0LL,
    v6->klass->vtable._15_OnPress.methodPtr);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))lockTabButton->klass->vtable._5_set_isEnabled.method)(
    lockTabButton,
    1LL,
    lockTabButton->klass->vtable._6_OnInit.methodPtr);
  v8 = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v8, 1, 0LL);
  v9 = this->fields.lockTabButton;
  if ( !v9 )
    goto LABEL_14;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v9->klass->vtable._14_SetState.method)(
    v9,
    0LL,
    0LL,
    v9->klass->vtable._15_OnPress.methodPtr);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_14;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))choiceTabButton->klass->vtable._5_set_isEnabled.method)(
    choiceTabButton,
    1LL,
    choiceTabButton->klass->vtable._6_OnInit.methodPtr);
  v11 = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !v11
    || (UnityEngine_Behaviour__set_enabled(v11, 1, 0LL), (v12 = this->fields.choiceTabButton) == 0LL)
    || (((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v12->klass->vtable._14_SetState.method)(
          v12,
          0LL,
          0LL,
          v12->klass->vtable._15_OnPress.methodPtr),
        this->fields.state = 7,
        partyServantListViewManager = this->fields.partyServantListViewManager,
        v18 = (PartyServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                              v14,
                                                              v15,
                                                              v16,
                                                              v17),
        PartyServantListViewManager_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_B170D4();
  }
  partyServantListViewManager->fields.callbackFunc = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&partyServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  PartyServantListViewManager__SetMode_32568528(partyServantListViewManager, 5, v25);
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
  PartyServantListViewManager_o *v12; // x0
  int32_t v13; // w1
  RandomLimitCountManager_c *v14; // x0
  PartyServantListViewManager_o *v15; // x0
  CommonUI_o *Instance; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x21

  if ( (byte_40FDE7A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_PartyServantSelectMenu_EndCloseShowServant__, v7);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_40FDE7A = 1;
  }
  if ( isDecide )
  {
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( partyServantListViewManager )
    {
      PartyServantListViewManager__ModifyList(partyServantListViewManager, 0, (const MethodInfo *)isNeedSort);
      v12 = this->fields.partyServantListViewManager;
      if ( v12 )
      {
        if ( isNeedSort )
        {
          v13 = 4;
LABEL_20:
          PartyServantListViewManager__SetMode_32568528(v12, v13, v11);
          goto LABEL_21;
        }
LABEL_19:
        v13 = 3;
        goto LABEL_20;
      }
    }
LABEL_23:
    sub_B170D4();
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, isDecide);
    byte_40F8215 = 1;
  }
  v14 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v14 = RandomLimitCountManager_TypeInfo;
  }
  if ( v14->static_fields->enableRandomLimitCount )
  {
    v15 = this->fields.partyServantListViewManager;
    if ( v15 )
    {
      PartyServantListViewManager__ModifyList(v15, 0, (const MethodInfo *)isNeedSort);
      v12 = this->fields.partyServantListViewManager;
      if ( v12 )
        goto LABEL_19;
    }
    goto LABEL_23;
  }
LABEL_21:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__CloseServantStatusDialog(Instance, v21, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x23

  if ( (byte_40FDE7B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_40FDE7B = 1;
  }
  if ( questId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__CloseServantStatusDialog(Instance, v16, 0LL);
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
    sub_B16F98(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B170D4();
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  PartyServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_40FDE73 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyServantSelectMenu_EndClickCancel__, method);
    sub_B16FFC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FDE73 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_B170D4();
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v10 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                            PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                            v6,
                                                            v7,
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FDE72 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyServantSelectMenu_EndClickDecide__, method);
    sub_B16FFC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FDE72 = 1;
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
    v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                           PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                           v5,
                                                           v6,
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
  const MethodInfo *v3; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v5; // x1
  PartyServantListViewManager_o *v6; // x0
  UISprite_o *scaleChangeTabSprite; // x19
  System_String_o *ScaleButtonSpriteName; // x0

  if ( (byte_40FDE7E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDE7E = 1;
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
          (v6 = this->fields.partyServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          ScaleButtonSpriteName = PartyServantListViewManager__GetScaleButtonSpriteName(v6, v5),
          !scaleChangeTabSprite) )
    {
      sub_B170D4();
    }
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabChoice(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x4
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FDE76 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyServantSelectMenu_EndClickTabChoice__, method);
    sub_B16FFC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FDE76 = 1;
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
        v10 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v5,
                                                                v6,
                                                                v7,
                                                                v8);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                              PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                              v5,
                                                              v6,
                                                              v7,
                                                              v8);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabChoice__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v12, v13);
    }
    PartyServantSelectMenu__SetTabKind(this, 2, 0, v7);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabLock(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x4
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FDE75 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyServantSelectMenu_EndClickTabLock__, method);
    sub_B16FFC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FDE75 = 1;
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
        v10 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                                PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v5,
                                                                v6,
                                                                v7,
                                                                v8);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                              PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                              v5,
                                                              v6,
                                                              v7,
                                                              v8);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabLock__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v12, v13);
    }
    PartyServantSelectMenu__SetTabKind(this, 1, 0, v7);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabPush(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FDE77 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyServantSelectMenu_EndClickTabPush__, method);
    sub_B16FFC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FDE77 = 1;
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
    v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                           PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                           v5,
                                                           v6,
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  PartyServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FDE74 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyServantSelectMenu_EndClickTabStatus__, method);
    sub_B16FFC(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FDE74 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                           PartyServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                           v5,
                                                           v6,
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
  __int64 v4; // x4
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
  __int64 v36; // x1
  __int64 v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  MethodInfo *v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t state; // w8
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  System_Int32_array **Item; // x1
  int32_t tutorialMode; // w8
  CommonUI_o *Instance; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Action_o *v59; // x21
  PartyServantListViewItem_o **v60; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  PartyServantListViewItem_o *v65; // x8
  SoundManager_c *v66; // x0
  const MethodInfo *v67; // x3
  int32_t v68; // w1
  PartyServantSelectMenu_o *v69; // x0
  int32_t v70; // w2
  int32_t modeKind; // w8
  struct PartyServantListViewManager_o *v72; // x20
  ListViewManager_o *v73; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v75; // q1
  PartyServantListViewItem_o *v76; // x8
  int32_t partyIndex; // w22
  int32_t PartyListViewItemMenuKind_k__BackingField; // w24
  WebViewManager_o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  PartyServantListViewItem_o *v84; // x8
  UserServantEntity_o *v85; // x20
  CommonUI_o *v86; // x21
  System_Int64_array *equipIdList; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  ServantStatusDialog_ResultDelegate_o *v89; // x24
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v91; // x2
  int64_t pushUserSvtId; // x22
  struct UserServantEntity_o *v93; // x8
  __int128 v94; // q1
  PartyServantListViewManager_CallbackFunc_c *v95; // x0
  ServantStatusDialog_ResultDelegate_o *v96; // x22
  PartyServantListViewManager_CallbackFunc_o *v97; // x21
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  const MethodInfo *v104; // x2
  ServantStatusDialog_EndIndividualityDelegate_o *v105; // x24
  ServantStatusDialog_EndIndividualityDelegate_o *v106; // x22
  WebViewManager_o *v107; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x26
  WebViewManager_o *v110; // x0
  WarQuestSelectionMaster_o *v111; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v112; // x19
  __int64 v113; // x22
  __int64 v114; // x23
  int32_t v115; // w0
  ServantEntity_o *v116; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x19
  int32_t v118; // w22
  int32_t v119; // w0
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v121; // x1
  int32_t v122; // w27
  int32_t SvtId; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v124; // x8
  int32_t v125; // w22
  int32_t v126; // w0
  int32_t v127; // w23
  System_String_o *v128; // x19
  System_String_o *v129; // x22
  __int64 v130; // x2
  System_Object_array *v131; // x24
  int32_t Rarity; // w26
  System_String_o *RarityType; // x0
  __int64 v134; // x1
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x26
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x26
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x25
  UserServantEntity_o *v154; // x0
  int32_t v155; // w0
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x25
  ServantEntity_o *servantEntity; // x0
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Int32_array **v168; // x25
  ServantEntity_o *v169; // x0
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_Int32_array **v175; // x20
  System_String_o *v176; // x20
  System_String_o *v177; // x22
  System_String_o *v178; // x23
  CommonUI_o *v179; // x24
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x3
  __int64 v183; // x4
  CommonConfirmDialog_ClickDelegate_o *v184; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v185; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v186; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v187; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16

  if ( (byte_40FDE79 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&BalanceConfig_TypeInfo, v8);
    sub_B16FFC(&PartyServantListViewManager_CallbackFunc_TypeInfo, v9);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v16);
    sub_B16FFC(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&object___TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B16FFC(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__, v22);
    sub_B16FFC(&Method_PartyServantSelectMenu_EndShowServantWithQuest__, v23);
    sub_B16FFC(&Method_PartyServantSelectMenu_EndShowServant__, v24);
    sub_B16FFC(&Method_PartyServantSelectMenu_OnSelectItem__, v25);
    sub_B16FFC(&Rarity_TypeInfo, v26);
    sub_B16FFC(&ServantStatusDialog_ResultDelegate_TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29);
    sub_B16FFC(&SoundManager_TypeInfo, v30);
    sub_B16FFC(&Method_PartyServantSelectMenu___c__DisplayClass60_0__OnSelectItem_b__0__, v31);
    sub_B16FFC(&PartyServantSelectMenu___c__DisplayClass60_0_TypeInfo, v32);
    sub_B16FFC(&StringLiteral_11946/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v33);
    sub_B16FFC(&StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v34);
    sub_B16FFC(&StringLiteral_11945/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v35);
    sub_B16FFC(&StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v36);
    byte_40FDE79 = 1;
  }
  v37 = sub_B170CC(PartyServantSelectMenu___c__DisplayClass60_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n, method, v4);
  PartyServantSelectMenu___c__DisplayClass60_0___ctor((PartyServantSelectMenu___c__DisplayClass60_0_o *)v37, 0LL);
  if ( !v37 )
    goto LABEL_160;
  *(_QWORD *)(v37 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v59 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v55, v56, v57, v58);
    System_Action___ctor(v59, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark(Instance, v59, 0LL);
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
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager )
      goto LABEL_160;
    Item = (System_Int32_array **)PartyServantListViewManager__GetItem(partyServantListViewManager, n, v44);
  }
  *(_QWORD *)(v37 + 24) = Item;
  v60 = (PartyServantListViewItem_o **)(v37 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v37 + 24), Item, (System_String_array **)v44, v45, v46, v47, v48, v49);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      v72 = this->fields.partyServantListViewManager;
      this->fields.state = 2;
      goto LABEL_91;
    }
    if ( !*v60 )
      goto LABEL_160;
    if ( !(*v60)->fields.userServantEntity )
    {
LABEL_86:
      v66 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
LABEL_87:
        if ( !v66->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v66);
      }
LABEL_89:
      SoundManager__playSystemSe(2, 0LL);
      goto LABEL_90;
    }
    v73 = (ListViewManager_o *)this->fields.partyServantListViewManager;
    if ( v73 )
    {
      ListViewManager__ClearScrollBarValue(v73, 1, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this->fields.state = 5;
      if ( *v60 )
      {
        userServantEntity = (*v60)->fields.userServantEntity;
        if ( userServantEntity )
        {
          v75 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v187.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v187.fields.fakeValue = v75;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v185 = v187;
          this->fields.selectUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
                                           &v185,
                                           0LL);
          v76 = *v60;
          if ( *v60 )
          {
            partyIndex = v76->fields.partyIndex;
            PartyListViewItemMenuKind_k__BackingField = v76->fields._PartyListViewItemMenuKind_k__BackingField;
            v79 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v84 = *v60;
            if ( *v60 )
            {
              v85 = v84->fields.userServantEntity;
              v86 = (CommonUI_o *)v79;
              if ( (partyIndex & 0x80000000) != 0 )
              {
                if ( PartyListViewItemMenuKind_k__BackingField == 8 )
                {
                  v96 = (ServantStatusDialog_ResultDelegate_o *)sub_B170CC(
                                                                  ServantStatusDialog_ResultDelegate_TypeInfo,
                                                                  v80,
                                                                  v81,
                                                                  v82,
                                                                  v83);
                  ServantStatusDialog_ResultDelegate___ctor(
                    v96,
                    (Il2CppObject *)this,
                    Method_PartyServantSelectMenu_EndShowServantWithQuest__,
                    0LL);
                  if ( v86 )
                  {
                    CommonUI__OpenServantStatusDialog_18248808(v86, 0, v85, v96, 0LL);
                    return;
                  }
                }
                else
                {
                  v106 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B170CC(
                                                                             ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                                             v80,
                                                                             v81,
                                                                             v82,
                                                                             v83);
                  ServantStatusDialog_EndIndividualityDelegate___ctor(
                    v106,
                    (Il2CppObject *)this,
                    Method_PartyServantSelectMenu_EndShowServant__,
                    0LL);
                  if ( v86 )
                  {
                    CommonUI__OpenServantStatusDialog_18248568(v86, 0, v85, v106, 0LL);
                    return;
                  }
                }
              }
              else
              {
                equipIdList = v84->fields.equipIdList;
                questRestrictionInfo = v84->fields.questRestrictionInfo;
                if ( PartyListViewItemMenuKind_k__BackingField == 8 )
                {
                  v89 = (ServantStatusDialog_ResultDelegate_o *)sub_B170CC(
                                                                  ServantStatusDialog_ResultDelegate_TypeInfo,
                                                                  v80,
                                                                  v81,
                                                                  v82,
                                                                  v83);
                  ServantStatusDialog_ResultDelegate___ctor(
                    v89,
                    (Il2CppObject *)this,
                    Method_PartyServantSelectMenu_EndShowServantWithQuest__,
                    0LL);
                  if ( v86 )
                  {
                    CommonUI__OpenServantStatusDialog_18249312(v86, 0, v85, equipIdList, questRestrictionInfo, v89, 0LL);
                    return;
                  }
                }
                else
                {
                  v105 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B170CC(
                                                                             ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                                             v80,
                                                                             v81,
                                                                             v82,
                                                                             v83);
                  ServantStatusDialog_EndIndividualityDelegate___ctor(
                    v105,
                    (Il2CppObject *)this,
                    Method_PartyServantSelectMenu_EndShowServant__,
                    0LL);
                  if ( v86 )
                  {
                    CommonUI__OpenServantStatusDialog_18249048(
                      v86,
                      0,
                      v85,
                      equipIdList,
                      questRestrictionInfo,
                      v105,
                      0LL);
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
    sub_B170D4();
  }
  if ( kind != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v70 = -1;
    this->fields.state = 3;
    v69 = this;
    v68 = 0;
    goto LABEL_35;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      v65 = *v60;
      if ( !*v60 )
        goto LABEL_160;
      if ( !v65->fields.isBase && v65->fields.isQuestRestriction
        || v65->fields.isSame
        || (v65->fields.commonRestrictionId & 0x80000000) == 0 )
      {
        goto LABEL_86;
      }
      if ( v65->fields.isBase )
      {
        v66 = SoundManager_TypeInfo;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          goto LABEL_25;
        goto LABEL_27;
      }
      if ( v65->fields.isLeave
        || (v65->fields.fatigureTime & 0x8000000000000000LL) == 0
        || v65->fields._IsAllOutBattle_k__BackingField
        || v65->fields._IsDataLost_k__BackingField )
      {
        goto LABEL_86;
      }
      v66 = SoundManager_TypeInfo;
      if ( v65->fields._TimesToRestart_k__BackingField < 1 )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_25:
          if ( !v66->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v66);
        }
LABEL_27:
        SoundManager__playSystemSe(0, 0LL);
        v68 = 1;
        v69 = this;
        v70 = n;
        this->fields.state = 3;
LABEL_35:
        PartyServantSelectMenu__Callback(v69, v68, v70, v67);
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
      if ( !*v60 )
        goto LABEL_160;
      (*v60)->fields.isSwapLock ^= 1u;
      goto LABEL_77;
    case 2:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( !*v60 )
        goto LABEL_160;
      (*v60)->fields.isSwapChoice ^= 1u;
LABEL_77:
      this->fields.state = 2;
      v72 = this->fields.partyServantListViewManager;
      v95 = PartyServantListViewManager_CallbackFunc_TypeInfo;
      goto LABEL_92;
    case 3:
      if ( !*v60 )
        goto LABEL_160;
      if ( !(*v60)->fields.isEnabled )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        this->fields.state = 2;
LABEL_90:
        v72 = this->fields.partyServantListViewManager;
LABEL_91:
        v95 = PartyServantListViewManager_CallbackFunc_TypeInfo;
LABEL_92:
        v97 = (PartyServantListViewManager_CallbackFunc_o *)sub_B170CC(v95, v61, v62, v63, v64);
        PartyServantListViewManager_CallbackFunc___ctor(
          v97,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL);
        if ( v72 )
        {
          v72->fields.callbackFunc = v97;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v72->fields.callbackFunc,
            (System_Int32_array **)v97,
            v98,
            v99,
            v100,
            v101,
            v102,
            v103);
          PartyServantListViewManager__SetMode_32568528(v72, 2, v104);
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
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        goto LABEL_160;
      pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
      if ( !pushUserSvtId )
      {
LABEL_71:
        PartyServantSelectMenu__PushRequest(this, *v60, v91);
        return;
      }
      if ( !*v60 )
        goto LABEL_160;
      v93 = (*v60)->fields.userServantEntity;
      if ( !v93 )
        goto LABEL_160;
      v94 = *(_OWORD *)&v93->fields.id.fields.fakeValue;
      *(_OWORD *)&v187.fields.currentCryptoKey = *(_OWORD *)&v93->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v187.fields.fakeValue = v94;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v186 = v187;
      if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v186, 0LL) )
        goto LABEL_71;
      v107 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v107 )
        goto LABEL_160;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v107, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_160;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 pushUserSvtId,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v110 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v110 )
        goto LABEL_160;
      v111 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)v110,
               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Entity )
        goto LABEL_160;
      v112 = (DataMasterBase_WarMaster__WarEntity__int__o *)v111;
      v114 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
      v113 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v188.fields.currentCryptoKey = v114;
      *(_QWORD *)&v188.fields.fakeValue = v113;
      v115 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v188, 0LL);
      if ( !v112 )
        goto LABEL_160;
      v116 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v112,
                                  v115,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.svtId, 0LL);
      v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_160;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     Master_WarQuestSelectionMaster,
                                     v118,
                                     v119,
                                     0LL);
      if ( !*v60 )
        goto LABEL_160;
      v122 = ServantLimitCountSealAfter;
      SvtId = PartyServantListViewItem__get_SvtId(*v60, v121);
      if ( !*v60 )
        goto LABEL_160;
      v124 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v60)->fields.userServantEntity;
      if ( !v124 )
        goto LABEL_160;
      v125 = SvtId;
      v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v124[6], 0LL);
      v127 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, v125, v126, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v128 = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
      v129 = LocalizationManager__Get((System_String_o *)StringLiteral_11946/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
      v131 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v130);
      Rarity = UserServantEntity__getRarity(Entity, 0LL);
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      RarityType = Rarity__getRarityType(Rarity, 0LL);
      if ( !v131 )
        goto LABEL_160;
      v141 = (System_Int32_array **)RarityType;
      if ( RarityType )
      {
        RarityType = (System_String_o *)sub_B170BC(RarityType, v131->obj.klass->_1.element_class);
        if ( !RarityType )
          goto LABEL_162;
      }
      if ( !v131->max_length )
        goto LABEL_161;
      v131->m_Items[0] = (Il2CppObject *)v141;
      sub_B16F98((BattleServantConfConponent_o *)v131->m_Items, v141, v135, v136, v137, v138, v139, v140);
      if ( !v116 )
        goto LABEL_160;
      RarityType = ServantEntity__getClassName(v116, 0LL);
      v147 = (System_Int32_array **)RarityType;
      if ( RarityType )
      {
        RarityType = (System_String_o *)sub_B170BC(RarityType, v131->obj.klass->_1.element_class);
        if ( !RarityType )
          goto LABEL_162;
      }
      if ( v131->max_length <= 1 )
        goto LABEL_161;
      v131->m_Items[1] = (Il2CppObject *)v147;
      sub_B16F98((BattleServantConfConponent_o *)&v131->m_Items[1], v147, v135, v142, v143, v144, v145, v146);
      RarityType = ServantEntity__getName(v116, v122, -1, 0LL);
      v153 = (System_Int32_array **)RarityType;
      if ( RarityType )
      {
        RarityType = (System_String_o *)sub_B170BC(RarityType, v131->obj.klass->_1.element_class);
        if ( !RarityType )
          goto LABEL_162;
      }
      if ( v131->max_length <= 2 )
        goto LABEL_161;
      v131->m_Items[2] = (Il2CppObject *)v153;
      sub_B16F98((BattleServantConfConponent_o *)&v131->m_Items[2], v153, v135, v148, v149, v150, v151, v152);
      if ( !*v60 )
        goto LABEL_160;
      v154 = (*v60)->fields.userServantEntity;
      if ( !v154 )
        goto LABEL_160;
      v155 = UserServantEntity__getRarity(v154, 0LL);
      RarityType = Rarity__getRarityType(v155, 0LL);
      v161 = (System_Int32_array **)RarityType;
      if ( RarityType )
      {
        RarityType = (System_String_o *)sub_B170BC(RarityType, v131->obj.klass->_1.element_class);
        if ( !RarityType )
          goto LABEL_162;
      }
      if ( v131->max_length <= 3 )
        goto LABEL_161;
      v131->m_Items[3] = (Il2CppObject *)v161;
      sub_B16F98((BattleServantConfConponent_o *)&v131->m_Items[3], v161, v135, v156, v157, v158, v159, v160);
      if ( !*v60 )
        goto LABEL_160;
      servantEntity = (*v60)->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_160;
      RarityType = ServantEntity__getClassName(servantEntity, 0LL);
      v168 = (System_Int32_array **)RarityType;
      if ( RarityType )
      {
        RarityType = (System_String_o *)sub_B170BC(RarityType, v131->obj.klass->_1.element_class);
        if ( !RarityType )
          goto LABEL_162;
      }
      if ( v131->max_length <= 4 )
        goto LABEL_161;
      v131->m_Items[4] = (Il2CppObject *)v168;
      sub_B16F98((BattleServantConfConponent_o *)&v131->m_Items[4], v168, v135, v163, v164, v165, v166, v167);
      if ( !*v60 )
        goto LABEL_160;
      v169 = (*v60)->fields.servantEntity;
      if ( !v169 )
        goto LABEL_160;
      RarityType = ServantEntity__getName(v169, v127, -1, 0LL);
      v175 = (System_Int32_array **)RarityType;
      if ( RarityType )
      {
        RarityType = (System_String_o *)sub_B170BC(RarityType, v131->obj.klass->_1.element_class);
        if ( !RarityType )
        {
LABEL_162:
          sub_B170F4(RarityType);
          sub_B170A0();
        }
      }
      if ( v131->max_length <= 5 )
      {
LABEL_161:
        sub_B17100(RarityType, v134, v135);
        sub_B170A0();
      }
      v131->m_Items[5] = (Il2CppObject *)v175;
      sub_B16F98((BattleServantConfConponent_o *)&v131->m_Items[5], v175, v135, v170, v171, v172, v173, v174);
      v176 = System_String__Format_43822456(v129, v131, 0LL);
      v177 = LocalizationManager__Get((System_String_o *)StringLiteral_11945/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v178 = LocalizationManager__Get((System_String_o *)StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      v179 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v184 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                      CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                      v180,
                                                      v181,
                                                      v182,
                                                      v183);
      CommonConfirmDialog_ClickDelegate___ctor(
        v184,
        (Il2CppObject *)v37,
        Method_PartyServantSelectMenu___c__DisplayClass60_0__OnSelectItem_b__0__,
        0LL);
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v179 )
        goto LABEL_160;
      CommonUI__OpenConfirmDialog_18236860(
        v179,
        v128,
        v176,
        v177,
        v178,
        v184,
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
  PartyOrganizationListViewItem_o *Member; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationListViewItem_o *v37; // x26
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *v46; // x27
  bool IsActiveBgTxt; // w0
  const MethodInfo *v48; // x3
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v50; // x0
  const MethodInfo *v51; // x7
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v53; // x2
  PartyServantListViewManager_o *v54; // x0
  FollowerQuestInfomationDraw_o *questInfomationDraw; // x0
  System_Int32_array *waveBattleEnemyClassIds; // x3
  QuestRestrictionInfo_o *v57; // x1
  const MethodInfo *v58; // x1
  PartyServantListViewManager_o *v59; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_String_o *ScaleButtonSpriteName; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Action_o *v66; // x20

  if ( (byte_40FDE6C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseDeckItemList);
    sub_B16FFC(&Method_PartyServantSelectMenu_EndOpen__, v18);
    byte_40FDE6C = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v20 = 1 << state;
    if ( (v20 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        (System_String_array **)partyItem,
        *(System_String_array ***)&num,
        *(System_Boolean_array ***)&tutorialMode,
        (System_Int32_array **)setupInfo,
        (System_Int32_array *)questRestrictionInfo,
        (System_Int32_array *)callback);
      this->fields.openCallbackFunc = openCallback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v27);
      PartyServantSelectMenu__EndOpen(this, v28);
      return;
    }
    if ( (v20 & 0x11) != 0 )
    {
      if ( partyItem )
      {
        Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( Member )
        {
          userServantEntity = Member->fields.userServantEntity;
          v37 = Member;
          this->fields.tutorialMode = tutorialMode;
          this->fields.isSelectedSvt = userServantEntity != 0LL;
          this->fields.callbackFunc = callback;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)callback,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          this->fields.openCallbackFunc = openCallback;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
            (System_Int32_array **)openCallback,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
            if ( bgTxtSprite )
            {
              v46 = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
              IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
              if ( v46 )
              {
                UnityEngine_GameObject__SetActive(v46, IsActiveBgTxt, 0LL);
                PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 1, v48);
                titleInfo = this->fields.titleInfo;
                if ( titleInfo )
                {
                  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 70, 0LL);
                  v50 = this->fields.titleInfo;
                  if ( v50 )
                  {
                    TitleInfoControl__setBackBtnSprite_19608808(v50, 1, 0, 0, 0LL);
                    partyServantListViewManager = this->fields.partyServantListViewManager;
                    if ( partyServantListViewManager )
                    {
                      PartyServantListViewManager__CreateList(
                        partyServantListViewManager,
                        baseDeckItemList,
                        partyItem,
                        num,
                        tutorialMode,
                        setupInfo,
                        questRestrictionInfo,
                        v51);
                      v54 = this->fields.partyServantListViewManager;
                      if ( v54 )
                      {
                        PartyServantListViewManager__SetMode_32568528(v54, 1, v53);
                        questInfomationDraw = this->fields.questInfomationDraw;
                        if ( partyItem->fields.menuKind == 9 )
                        {
                          if ( !questInfomationDraw )
                            goto LABEL_25;
                          waveBattleEnemyClassIds = partyItem->fields.waveBattleEnemyClassIds;
                          v57 = questRestrictionInfo;
                        }
                        else
                        {
                          if ( !questInfomationDraw )
                            goto LABEL_25;
                          v57 = questRestrictionInfo;
                          waveBattleEnemyClassIds = 0LL;
                        }
                        FollowerQuestInfomationDraw__SetInfomation(
                          questInfomationDraw,
                          v57,
                          v37->fields._InitPos_k__BackingField,
                          waveBattleEnemyClassIds,
                          0LL);
                        v59 = this->fields.partyServantListViewManager;
                        if ( v59 )
                        {
                          scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
                          ScaleButtonSpriteName = PartyServantListViewManager__GetScaleButtonSpriteName(v59, v58);
                          if ( scaleChangeTabSprite )
                          {
                            UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
                            this->fields.state = 1;
                            v66 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v62, v63, v64, v65);
                            System_Action___ctor(
                              v66,
                              (Il2CppObject *)this,
                              Method_PartyServantSelectMenu_EndOpen__,
                              0LL);
                            BaseMenu__Open((BaseMenu_o *)this, v66, 0LL);
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
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__Open_32581428(
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
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *v36; // x25
  bool IsActiveBgTxt; // w0
  const MethodInfo *v38; // x3
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v40; // x0
  const MethodInfo *v41; // x6
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v43; // x2
  PartyServantListViewManager_o *v44; // x0
  FollowerQuestInfomationDraw_o *questInfomationDraw; // x0
  const MethodInfo *v46; // x1
  PartyServantListViewManager_o *v47; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_String_o *ScaleButtonSpriteName; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Action_o *v54; // x20

  if ( (byte_40FDE6D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, partyItem);
    sub_B16FFC(&Method_PartyServantSelectMenu_EndOpen__, v17);
    byte_40FDE6D = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v19 = 1 << state;
    if ( (v19 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&num,
        *(System_String_array ***)&tutorialMode,
        (System_Boolean_array **)setupInfo,
        (System_Int32_array **)questRestrictionInfo,
        (System_Int32_array *)callback,
        (System_Int32_array *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_B16F98(
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
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&num,
        *(System_String_array ***)&tutorialMode,
        (System_Boolean_array **)setupInfo,
        (System_Int32_array **)questRestrictionInfo,
        (System_Int32_array *)callback,
        (System_Int32_array *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_B16F98(
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
      bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
      if ( !bgTxtSprite )
        goto LABEL_19;
      v36 = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
      IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
      if ( !v36 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(v36, IsActiveBgTxt, 0LL);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 1, v38);
      titleInfo = this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_19;
      TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 70, 0LL);
      v40 = this->fields.titleInfo;
      if ( !v40 )
        goto LABEL_19;
      TitleInfoControl__setBackBtnSprite_19608808(v40, 1, 0, 0, 0LL);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_32564212(
        partyServantListViewManager,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v41);
      v44 = this->fields.partyServantListViewManager;
      if ( !v44
        || (PartyServantListViewManager__SetMode_32568528(v44, 1, v43),
            (questInfomationDraw = this->fields.questInfomationDraw) == 0LL)
        || (FollowerQuestInfomationDraw__SetInfomation(questInfomationDraw, questRestrictionInfo, 0, 0LL, 0LL),
            (v47 = this->fields.partyServantListViewManager) == 0LL)
        || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
            ScaleButtonSpriteName = PartyServantListViewManager__GetScaleButtonSpriteName(v47, v46),
            !scaleChangeTabSprite) )
      {
LABEL_19:
        sub_B170D4();
      }
      UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
      this->fields.state = 1;
      v54 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v50, v51, v52, v53);
      System_Action___ctor(v54, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v54, 0LL);
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
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userServantEntity; // x19
  UserGameEntity_o *v15; // x23
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v18; // x21
  int64_t userId; // x22
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t v22; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CommonUI_o *v24; // x0
  __int128 v25; // q1
  UserServantEntity_Fields *p_fields; // x24
  int64_t pushUserSvtId; // x8
  int64_t v28; // x0
  __int128 v29; // q0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  NetworkManager_ResultCallbackFunc_o *v34; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v36; // q0
  CardFavoriteRequest_o *v37; // x20
  int32_t v38; // w27
  int32_t v39; // w28
  int32_t v40; // w21
  bool IsLock; // w23
  bool IsChoice; // w0
  bool v43; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v47; // w0
  __int64 v48; // x8
  int32_t randomSettingSupport; // w19
  int32_t limitCountSupport; // w0
  int32_t v51; // [xsp+50h] [xbp-110h]
  int32_t v52; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v54; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v56; // [xsp+70h] [xbp-F0h]
  int64_t v57; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_40FDE7F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__, v9);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40FDE7F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v15 = SelfUserGame;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_21;
  v18 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  userId = v15->fields.userId;
  v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v21;
  *(_QWORD *)&v62.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
  if ( !v18 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, userId, v22, 0LL);
  v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v24 )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag(v24, 0, 0LL);
  v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  pushUserSvtId = v15->fields.pushUserSvtId;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v25;
  v57 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v60 = v61;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v60, 0LL);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  favoriteUserSvtId = v15->fields.favoriteUserSvtId;
  v56 = v28;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v29;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v59, 0LL);
  v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v30,
                                                 v31,
                                                 v32,
                                                 v33);
  NetworkManager_ResultCallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v34,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v36 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v37 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v36;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v58, 0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  IsChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v43 = IsChoice;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v48 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v63.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v47;
  *(_QWORD *)&v63.fields.currentCryptoKey = v48;
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
  if ( !v37 )
LABEL_21:
    sub_B170D4();
  CardFavoriteRequest__beginRequest(
    v37,
    targetUsrSVtId,
    v52,
    v51,
    v38,
    v39,
    v40,
    favoriteUserSvtId == v54,
    IsLock,
    v43,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v57 != v56,
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
  struct UICommonButton_o *statusTabButton; // x0
  UnityEngine_Behaviour_o *v24; // x0
  UISprite_o *statusTabSprite; // x0
  System_String_o **v26; // x8
  struct UICommonButton_o *v27; // x0
  bool v28; // w23
  unsigned int v29; // w21
  UICommonButton_o *v30; // x22
  bool enabled; // w0
  struct UICommonButton_o *lockTabButton; // x0
  UnityEngine_Behaviour_o *v33; // x0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v35; // x8
  struct UICommonButton_o *v36; // x0
  UICommonButton_o *v37; // x22
  bool v38; // w0
  struct UICommonButton_o *choiceTabButton; // x0
  UnityEngine_Behaviour_o *v40; // x0
  UISprite_o *choiceTabSprite; // x0
  System_String_o **v42; // x8
  struct UICommonButton_o *v43; // x0
  UICommonButton_o *v44; // x22
  bool v45; // w0
  UnityEngine_Object_o *pushTabButton; // x21
  struct UICommonButton_o *v47; // x0
  UnityEngine_Behaviour_o *v48; // x0
  UISprite_o *pushTabSprite; // x0
  System_String_o **v50; // x8
  struct UICommonButton_o *v51; // x0
  UICommonButton_o *v52; // x22
  bool v53; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v55; // x8
  System_String_o *v56; // x0
  int32_t state; // w8
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  PartyServantListViewManager_CallbackFunc_o *v64; // x21
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  int32_t v71; // w1

  if ( (byte_40FDE71 & 1) == 0 )
  {
    sub_B16FFC(&PartyServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_PartyServantSelectMenu_OnSelectItem__, v9);
    sub_B16FFC(&StringLiteral_17071/*"button_push_reg"*/, v10);
    sub_B16FFC(&StringLiteral_17072/*"button_push_unreg"*/, v11);
    sub_B16FFC(&StringLiteral_17057/*"button_allchoice_reg"*/, v12);
    sub_B16FFC(&StringLiteral_17060/*"button_alllock_unreg"*/, v13);
    sub_B16FFC(&StringLiteral_10377/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/, v14);
    sub_B16FFC(&StringLiteral_10380/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/, v15);
    sub_B16FFC(&StringLiteral_17073/*"button_select_reg"*/, v16);
    sub_B16FFC(&StringLiteral_10378/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/, v17);
    sub_B16FFC(&StringLiteral_10379/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/, v18);
    sub_B16FFC(&StringLiteral_17074/*"button_select_unreg"*/, v19);
    sub_B16FFC(&StringLiteral_17059/*"button_alllock_reg"*/, v20);
    sub_B16FFC(&StringLiteral_17058/*"button_allchoice_unreg"*/, v21);
    byte_40FDE71 = 1;
  }
  v22 = !this->fields.isInitTab || isInit;
  if ( v22 || this->fields.modeKind != modeKind )
  {
    statusTabButton = this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, const MethodInfo *))statusTabButton->klass->vtable._5_set_isEnabled.method)(
      statusTabButton,
      1LL,
      statusTabButton->klass->vtable._6_OnInit.methodPtr,
      method);
    v24 = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !v24 )
      goto LABEL_64;
    UnityEngine_Behaviour__set_enabled(v24, modeKind != 0, 0LL);
    statusTabSprite = this->fields.statusTabSprite;
    if ( !statusTabSprite )
      goto LABEL_64;
    v26 = (System_String_o **)&StringLiteral_17073/*"button_select_reg"*/;
    if ( modeKind )
      v26 = (System_String_o **)&StringLiteral_17074/*"button_select_unreg"*/;
    UISprite__set_spriteName(statusTabSprite, *v26, 0LL);
    v27 = this->fields.statusTabButton;
    if ( !v27 )
      goto LABEL_64;
    v28 = !v22;
    v29 = !v22;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v27->klass->vtable._14_SetState.method)(
      v27,
      0LL,
      v29,
      v27->klass->vtable._15_OnPress.methodPtr);
    v30 = this->fields.statusTabButton;
    if ( !v30 )
      goto LABEL_64;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(v30, enabled, v29, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_64;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))lockTabButton->klass->vtable._5_set_isEnabled.method)(
      lockTabButton,
      1LL,
      lockTabButton->klass->vtable._6_OnInit.methodPtr);
    v33 = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !v33 )
      goto LABEL_64;
    UnityEngine_Behaviour__set_enabled(v33, modeKind != 1, 0LL);
    lockTabSprite = this->fields.lockTabSprite;
    if ( !lockTabSprite )
      goto LABEL_64;
    v35 = (System_String_o **)&StringLiteral_17059/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v35 = (System_String_o **)&StringLiteral_17060/*"button_alllock_unreg"*/;
    UISprite__set_spriteName(lockTabSprite, *v35, 0LL);
    v36 = this->fields.lockTabButton;
    if ( !v36 )
      goto LABEL_64;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v36->klass->vtable._14_SetState.method)(
      v36,
      0LL,
      v28,
      v36->klass->vtable._15_OnPress.methodPtr);
    v37 = this->fields.lockTabButton;
    if ( !v37 )
      goto LABEL_64;
    v38 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(v37, v38, v28, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_64;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))choiceTabButton->klass->vtable._5_set_isEnabled.method)(
      choiceTabButton,
      1LL,
      choiceTabButton->klass->vtable._6_OnInit.methodPtr);
    v40 = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !v40 )
      goto LABEL_64;
    UnityEngine_Behaviour__set_enabled(v40, modeKind != 2, 0LL);
    choiceTabSprite = this->fields.choiceTabSprite;
    if ( !choiceTabSprite )
      goto LABEL_64;
    v42 = (System_String_o **)&StringLiteral_17057/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v42 = (System_String_o **)&StringLiteral_17058/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName(choiceTabSprite, *v42, 0LL);
    v43 = this->fields.choiceTabButton;
    if ( !v43 )
      goto LABEL_64;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v43->klass->vtable._14_SetState.method)(
      v43,
      0LL,
      v28,
      v43->klass->vtable._15_OnPress.methodPtr);
    v44 = this->fields.choiceTabButton;
    if ( !v44 )
      goto LABEL_64;
    v45 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(v44, v45, v28, 0LL);
    pushTabButton = (UnityEngine_Object_o *)this->fields.pushTabButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(pushTabButton, 0LL, 0LL) )
    {
      v47 = this->fields.pushTabButton;
      if ( !v47 )
        goto LABEL_64;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v47->klass->vtable._5_set_isEnabled.method)(
        v47,
        1LL,
        v47->klass->vtable._6_OnInit.methodPtr);
      v48 = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !v48 )
        goto LABEL_64;
      UnityEngine_Behaviour__set_enabled(v48, modeKind != 3, 0LL);
      pushTabSprite = this->fields.pushTabSprite;
      if ( !pushTabSprite )
        goto LABEL_64;
      v50 = (System_String_o **)&StringLiteral_17071/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v50 = (System_String_o **)&StringLiteral_17072/*"button_push_unreg"*/;
      UISprite__set_spriteName(pushTabSprite, *v50, 0LL);
      v51 = this->fields.pushTabButton;
      if ( !v51 )
        goto LABEL_64;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v51->klass->vtable._14_SetState.method)(
        v51,
        0LL,
        v28,
        v51->klass->vtable._15_OnPress.methodPtr);
      v52 = this->fields.pushTabButton;
      if ( !v52 )
        goto LABEL_64;
      v53 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
      UICommonButton__SetColliderEnable(v52, v53, v28, 0LL);
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
        v55 = &StringLiteral_10380/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_55;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v55 = &StringLiteral_10378/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_55;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v55 = &StringLiteral_10377/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_55;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v55 = &StringLiteral_10379/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
LABEL_55:
        v56 = LocalizationManager__Get((System_String_o *)*v55, 0LL);
        if ( !explanationLabel )
          goto LABEL_64;
        UILabel__set_text(explanationLabel, v56, 0LL);
        break;
      default:
        break;
    }
  }
  state = this->fields.state;
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.isInitTab = 1;
  this->fields.modeKind = modeKind;
  if ( state != 2 )
  {
    if ( partyServantListViewManager )
    {
      v71 = 1;
      goto LABEL_63;
    }
LABEL_64:
    sub_B170D4();
  }
  if ( !partyServantListViewManager )
    goto LABEL_64;
  PartyServantListViewManager__UpdateItemState(partyServantListViewManager, modeKind, (const MethodInfo *)isInit);
  v59 = this->fields.partyServantListViewManager;
  v64 = (PartyServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                        PartyServantListViewManager_CallbackFunc_TypeInfo,
                                                        v60,
                                                        v61,
                                                        v62,
                                                        v63);
  PartyServantListViewManager_CallbackFunc___ctor(
    v64,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !v59 )
    goto LABEL_64;
  v59->fields.callbackFunc = v64;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v59->fields.callbackFunc,
    (System_Int32_array **)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v71 = 2;
  partyServantListViewManager = v59;
LABEL_63:
  PartyServantListViewManager__SetMode_32568528(partyServantListViewManager, v71, (const MethodInfo *)isInit);
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
  PartyServantListViewManager_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v23; // x2
  System_Int64_array *v24; // x1
  bool v25; // w4
  bool v26; // w5
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  NetworkManager_ResultCallbackFunc_o *v38; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40FDE78 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_PartyServantSelectMenu_EndStatusSync__, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40FDE78 = 1;
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
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v38 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v34,
                                                     v35,
                                                     v36,
                                                     v37);
      NetworkManager_ResultCallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v38,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v23 = unchoiceList;
        v24 = choiceList;
        v26 = 1;
        v25 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B170D4();
    }
  }
  else if ( modeKind == 1 )
  {
    v10 = this->fields.partyServantListViewManager;
    if ( !v10 )
      goto LABEL_23;
    if ( PartyServantListViewManager__GetSwapLockList(v10, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v17,
                                                     v18,
                                                     v19,
                                                     v20);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v21,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v23 = unlockList;
        v24 = lockList;
        v25 = 1;
        v26 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v24, v23, 0, v25, v26, 0LL);
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

  if ( (byte_40FDE6A & 1) == 0 )
  {
    sub_B16FFC(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FDE6A = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_40FDE6B & 1) == 0 )
  {
    sub_B16FFC(&PartyServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FDE6B = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyServantSelectMenu__GetModeKind(v11, v12);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F838E & 1) == 0 )
  {
    sub_B16FFC(&PartyServantSelectMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_40F838E = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, item);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, PartyServantListViewItem_o *, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F838F & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F838F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isRequest, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  CommonUI_o *v14; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct PartyServantSelectMenu_o *_4__this; // x8
  struct PartyServantSelectMenu_o *v27; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x19
  __int64 v29; // x21
  __int64 v30; // x9
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F838D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&PartyServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B16FFC(&Method_PartyServantSelectMenu_OnSelectItem__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_PartyServantSelectMenu___c__DisplayClass60_0__OnSelectItem_b__1__, v8);
    byte_40F838D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu___c__DisplayClass60_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18237824(v14, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_13;
  partyServantListViewManager = v27->fields.partyServantListViewManager;
  v29 = sub_B170CC(PartyServantListViewManager_CallbackFunc_TypeInfo, v22, v23, v24, v25);
  v30 = *(_QWORD *)Method_PartyServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v29 + 40) = Method_PartyServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v29 + 16) = v30;
  *(_QWORD *)(v29 + 32) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 32), (System_Int32_array **)v27, v31, v32, v33, v34, v35, v36);
  if ( !partyServantListViewManager )
    goto LABEL_13;
  PartyServantListViewManager__SetMode(
    partyServantListViewManager,
    2,
    (PartyServantListViewManager_CallbackFunc_o *)v29,
    0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass60_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  PartyServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  PartyServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}