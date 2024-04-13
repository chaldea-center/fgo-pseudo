void __fastcall PartyServantSelectMenu___ctor(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC409 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC409 = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_B5D69C(0LL, v14);
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
    sub_B5D69C(0LL, method);
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
}


void __fastcall PartyServantSelectMenu__Close(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyServantSelectMenu__Close_32107072(this, 0LL, v2);
}


void __fastcall PartyServantSelectMenu__Close_32107072(
        PartyServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o *v18; // x20

  if ( (byte_42EC3F7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndClose__, v6, v7, v8);
    byte_42EC3F7 = 1;
  }
  PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_B5D69C(0LL, v9);
  PartyServantListViewManager__SetMode_32092560(partyServantListViewManager, 1, v10);
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.state = 4;
  v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v18, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCardFavoriteRequest(
        PartyServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v9; // x20
  PartyServantListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_42EC407 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyServantSelectMenu_OnSelectItem__, v5, v6, v7);
    byte_42EC407 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager
    || (PartyServantListViewManager__UpdateItemState(partyServantListViewManager, this->fields.modeKind, method),
        v9 = this->fields.partyServantListViewManager,
        v10 = (PartyServantListViewManager_CallbackFunc_o *)sub_B5D694(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL),
        !v9) )
  {
    sub_B5D69C(partyServantListViewManager, result);
  }
  v9->fields.callbackFunc = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.callbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  PartyServantListViewManager__SetMode_32092560(v9, 2, v17);
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
      sub_B5D69C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32092560(partyServantListViewManager, 3, v6);
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
      sub_B5D69C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32092560(partyServantListViewManager, 3, v6);
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
      sub_B5D69C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32092560(partyServantListViewManager, 3, v6);
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
      sub_B5D69C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32092560(partyServantListViewManager, 3, v6);
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
      sub_B5D69C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32092560(partyServantListViewManager, 3, v6);
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
      sub_B5D69C(partyServantListViewManager, isRequest);
    }
    PartyServantListViewManager__SetMode_32092560(partyServantListViewManager, 3, v6);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__EndCloseShowServant(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *partyServantListViewManager; // x0
  struct PartyServantListViewManager_o *v15; // x20
  PartyServantListViewManager_CallbackFunc_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3

  if ( (byte_42EC403 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_PartyServantSelectMenu_OnSelectItem__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v11, v12, v13);
    byte_42EC403 = 1;
  }
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.state = 2;
  if ( !partyServantListViewManager )
    goto LABEL_11;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)partyServantListViewManager,
    this->fields.modeKind,
    v2);
  v15 = this->fields.partyServantListViewManager;
  v16 = (PartyServantListViewManager_CallbackFunc_o *)sub_B5D694(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !v15 )
    goto LABEL_11;
  v15->fields.callbackFunc = v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v15->fields.callbackFunc,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  PartyServantListViewManager__SetMode_32092560(v15, 2, v23);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  partyServantListViewManager = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !partyServantListViewManager )
LABEL_11:
    sub_B5D69C(partyServantListViewManager, method);
  if ( !System_String__IsNullOrEmpty(*((System_String_o **)partyServantListViewManager + 14), 0LL) )
    PartyServantSelectMenu__Callback(this, 3, -1, v24);
}


void __fastcall PartyServantSelectMenu__EndCloseShowServantQuestJump(
        PartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EC404 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EC404 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyServantSelectMenu__EndCloseTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyServantSelectMenu__Callback(this, 1, this->fields.tutorialSelect, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndOpen(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t v20; // w1
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  PartyServantListViewManager_o *tutorialMaskBase; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  float v30; // s4
  float v31; // s5
  float v32; // s6
  float v33; // s7
  int v34; // s0
  int v38; // s8
  int32_t modeKind; // w1
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x2
  float x; // s0
  float v50; // s4
  WebViewManager_o *Instance; // x0
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  CommonUI_o *v54; // x20
  System_Action_o *v55; // x21
  BattleServantConfConponent_o *p_openCallbackFunc; // x19
  System_Action_o *v57; // x20
  struct System_Action_o *openCallbackFunc; // t1
  MethodInfo v59; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector2_o v60; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v63; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42EC3F5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyServantListViewManager_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FSUtility_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndOpenTutorialArrow__, v11, v12, v13);
    sub_B5D5C4(&Method_PartyServantSelectMenu_OnSelectItem__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    byte_42EC3F5 = 1;
  }
  v59.methodPointer = 0LL;
  v59.invoker_method = 0LL;
  if ( !this->fields.tutorialMode )
  {
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    PartyServantSelectMenu__SetTabKind(this, modeKind, 0, v3);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    v41 = (PartyServantListViewManager_CallbackFunc_o *)sub_B5D694(PartyServantListViewManager_CallbackFunc_TypeInfo);
    PartyServantListViewManager_CallbackFunc___ctor(
      v41,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      0LL);
    if ( partyServantListViewManager )
    {
      partyServantListViewManager->fields.callbackFunc = v41;
      sub_B5D560(
        (BattleServantConfConponent_o *)&partyServantListViewManager->fields.callbackFunc,
        (System_Int32_array **)v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      PartyServantListViewManager__SetMode_32092560(partyServantListViewManager, 2, v48);
      goto LABEL_17;
    }
LABEL_20:
    sub_B5D69C(tutorialMaskBase, v21);
  }
  v20 = this->fields.modeKind;
  this->fields.state = 6;
  PartyServantSelectMenu__SetTabKind(this, v20, 0, v3);
  tutorialMaskBase = this->fields.partyServantListViewManager;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  PartyServantListViewManager__SetMode_32092560(tutorialMaskBase, 1, v22);
  if ( this->fields.tutorialMode != 2 )
    goto LABEL_17;
  tutorialMaskBase = (PartyServantListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tutorialMaskBase, 1, 0LL);
  v61.fields.m_XMin = -450.0;
  v61.fields.m_Width = 150.0;
  v61.fields.m_Height = 180.0;
  v61.fields.m_YMin = -30.0;
  UnityEngine_Rect___ctor(v61, v30, v31, v32, v33, &v59);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v38 = -1011122176;
  }
  else
  {
    x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v34, &v59);
    v62.fields.m_YMin = 8.0;
    v62.fields.m_XMin = x + 8.0;
    UnityEngine_Rect__set_x(v62, v50, &v59);
    v38 = -1011384320;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  methodPointer = v59.methodPointer;
  invoker_method = v59.invoker_method;
  v54 = (CommonUI_o *)Instance;
  v55 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpenTutorialArrow__, 0LL);
  if ( !v54 )
    goto LABEL_20;
  v60.fields.y = 100.0;
  LODWORD(v60.fields.x) = v38;
  *(_QWORD *)&v63.fields.m_XMin = methodPointer;
  *(_QWORD *)&v63.fields.m_Width = invoker_method;
  CommonUI__OpenTutorialArrowMark(v54, v60, 0.0, v63, v55, 0LL);
LABEL_17:
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
  v57 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_B5D560(p_openCallbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
    System_Action__Invoke(v57, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__EndOpenTutorialArrow(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Behaviour_o *statusTabButton; // x0
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_42EC3F6 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyServantSelectMenu_OnSelectItem__, v5, v6, v7);
    byte_42EC3F6 = 1;
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
        v10 = (PartyServantListViewManager_CallbackFunc_o *)sub_B5D694(PartyServantListViewManager_CallbackFunc_TypeInfo),
        PartyServantListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
          0LL),
        !partyServantListViewManager) )
  {
LABEL_14:
    sub_B5D69C(statusTabButton, method);
  }
  partyServantListViewManager->fields.callbackFunc = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&partyServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  PartyServantListViewManager__SetMode_32092560(partyServantListViewManager, 5, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__EndShowServant(
        PartyServantSelectMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v17; // x2
  int32_t v18; // w1
  RandomLimitCountManager_c *v19; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v21; // x21

  if ( (byte_42EC401 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, method);
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndCloseShowServant__, v7, v8, v9);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14, v15);
    byte_42EC401 = 1;
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
          v18 = 4;
LABEL_20:
          PartyServantListViewManager__SetMode_32092560(partyServantListViewManager, v18, v17);
          goto LABEL_21;
        }
LABEL_19:
        v18 = 3;
        goto LABEL_20;
      }
    }
LABEL_23:
    sub_B5D69C(partyServantListViewManager, isDecide);
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, isDecide, isNeedSort, method);
    byte_42E6BE7 = 1;
  }
  v19 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v19 = RandomLimitCountManager_TypeInfo;
  }
  if ( v19->static_fields->enableRandomLimitCount )
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
  char v9; // w1
  char v10; // w2
  __int64 v11; // x3
  char v12; // w1
  char v13; // w2
  __int64 v14; // x3
  CommonUI_o *Instance; // x22
  System_Action_o *v16; // x23
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_42EC402 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    byte_42EC402 = 1;
  }
  if ( questId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseShowServantQuestJump__, 0LL);
    if ( !Instance )
      sub_B5D69C(v17, v18);
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
    sub_B5D560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D69C(0LL, method);
  PartyServantListViewManager__DestroyList(partyServantListViewManager, method);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyServantSelectMenu__OnClickCancel(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ListViewManager_o *partyServantListViewManager; // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_42EC3FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndClickCancel__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC3FA = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        sub_B5D69C(0LL, method);
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v12 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickCancel__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v12, v13);
  }
}


void __fastcall PartyServantSelectMenu__OnClickDecide(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  PartyServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EC3F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndClickDecide__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC3F9 = 1;
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
    v11 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickDecide__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v11, v12);
  }
}


void __fastcall PartyServantSelectMenu__OnClickScaleChange(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_42EC405 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC405 = 1;
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
      || (PartyServantListViewManager__ChangeIconScale(partyServantListViewManager, v5),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewManager__GetScaleButtonSpriteName(
                                                                           partyServantListViewManager,
                                                                           v5),
          !scaleChangeTabSprite) )
    {
      sub_B5D69C(partyServantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)partyServantListViewManager, 0LL);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabChoice(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42EC3FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndClickTabChoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC3FD = 1;
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
        v13 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabChoice__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabChoice__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v15, v16);
    }
    PartyServantSelectMenu__SetTabKind(this, 2, 0, v11);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabLock(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x3
  int32_t modeKind; // w8
  PartyServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  PartyServantSelectMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42EC3FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndClickTabLock__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC3FC = 1;
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
        v13 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PartyServantSelectMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_PartyServantSelectMenu_EndClickTabLock__,
          0LL);
        PartyServantSelectMenu__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PartyServantSelectMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndClickTabLock__,
        0LL);
      PartyServantSelectMenu__StatusRequest(this, v15, v16);
    }
    PartyServantSelectMenu__SetTabKind(this, 1, 0, v11);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabPush(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  PartyServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EC3FE & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndClickTabPush__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC3FE = 1;
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
    v11 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabPush__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v11, v12);
  }
}


void __fastcall PartyServantSelectMenu__OnClickTabStatus(PartyServantSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  PartyServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EC3FB & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndClickTabStatus__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyServantSelectMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC3FB = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (PartyServantSelectMenu_RequestCallbackFunc_o *)sub_B5D694(PartyServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PartyServantSelectMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndClickTabStatus__,
      0LL);
    PartyServantSelectMenu__StatusRequest(this, v11, v12);
  }
}


void __fastcall PartyServantSelectMenu__OnSelectItem(
        PartyServantSelectMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  __int64 v82; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  PartyServantListViewItem_o *v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  MethodInfo *v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  int32_t state; // w8
  System_Int32_array **Item; // x1
  int32_t tutorialMode; // w8
  CommonUI_o *Instance; // x20
  System_Action_o *v101; // x21
  PartyServantListViewItem_o **v102; // x21
  const MethodInfo *v103; // x3
  PartyServantListViewItem_o *v104; // x8
  SoundManager_c *v105; // x0
  const MethodInfo *v106; // x3
  int32_t v107; // w1
  PartyServantSelectMenu_o *v108; // x0
  int32_t v109; // w2
  int32_t modeKind; // w8
  struct PartyServantListViewManager_o *v111; // x20
  const MethodInfo *v112; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v115; // q1
  PartyServantListViewManager_CallbackFunc_c *v116; // x0
  PartyServantListViewManager_CallbackFunc_o *v117; // x21
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  const MethodInfo *v124; // x2
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v126; // x19
  __int64 v127; // x22
  __int64 v128; // x23
  ServantEntity_o *v129; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x19
  int32_t v131; // w22
  int32_t v132; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v133; // x8
  int32_t v134; // w22
  int32_t v135; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v137; // x19
  System_String_o *v138; // x22
  System_Object_array *v139; // x24
  int32_t Rarity; // w26
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x26
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Int32_array **v154; // x26
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x25
  int32_t v162; // w0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_Int32_array **v169; // x25
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Int32_array **v176; // x25
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  System_Int32_array **v183; // x21
  System_String_o *v184; // x21
  System_String_o *v185; // x22
  System_String_o *v186; // x23
  CommonUI_o *v187; // x24
  CommonConfirmDialog_ClickDelegate_o *v188; // x25
  __int64 v189; // x0
  __int64 v190; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v191; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v192; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16

  if ( (byte_42EC400 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, n, method);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&PartyServantListViewManager_CallbackFunc_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v22, v23, v24);
    sub_B5D5C4(&DataManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v31, v32, v33);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&object___TypeInfo, v37, v38, v39);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndCloseTutorialArrow__, v46, v47, v48);
    sub_B5D5C4(&Method_PartyServantSelectMenu_OnSelectItem__, v49, v50, v51);
    sub_B5D5C4(&Rarity_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v55, v56, v57);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v58, v59, v60);
    sub_B5D5C4(&SoundManager_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__, v64, v65, v66);
    sub_B5D5C4(&PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v79, v80, v81);
    byte_42EC400 = 1;
  }
  v82 = sub_B5D694(PartyServantSelectMenu___c__DisplayClass68_0_TypeInfo);
  PartyServantSelectMenu___c__DisplayClass68_0___ctor((PartyServantSelectMenu___c__DisplayClass68_0_o *)v82, 0LL);
  if ( !v82 )
    goto LABEL_140;
  *(_QWORD *)(v82 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v82 + 16), (System_Int32_array **)this, v85, v86, v87, v88, v89, v90);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v101 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v101, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndCloseTutorialArrow__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark(Instance, v101, 0LL);
      return;
    }
LABEL_140:
    sub_B5D69C(partyServantListViewManager, v84);
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
    Item = (System_Int32_array **)PartyServantListViewManager__GetItem(partyServantListViewManager, n, v91);
  }
  *(_QWORD *)(v82 + 24) = Item;
  v102 = (PartyServantListViewItem_o **)(v82 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v82 + 24), Item, (System_String_array **)v91, v92, v93, v94, v95, v96);
  if ( kind == 3 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
      v111 = this->fields.partyServantListViewManager;
      this->fields.state = 2;
      goto LABEL_74;
    }
    v84 = *v102;
    if ( !*v102 )
      goto LABEL_140;
    if ( v84->fields.userServantEntity )
    {
      PartyServantSelectMenu__OpenServantDetail_32113932(this, v84, 1, v103);
      return;
    }
LABEL_69:
    v105 = SoundManager_TypeInfo;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
LABEL_70:
      if ( !v105->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v105);
    }
LABEL_72:
    SoundManager__playSystemSe(2, 0LL);
LABEL_73:
    v111 = this->fields.partyServantListViewManager;
LABEL_74:
    v116 = PartyServantListViewManager_CallbackFunc_TypeInfo;
LABEL_75:
    v117 = (PartyServantListViewManager_CallbackFunc_o *)sub_B5D694(v116);
    PartyServantListViewManager_CallbackFunc___ctor(
      v117,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
      0LL);
    if ( v111 )
    {
      v111->fields.callbackFunc = v117;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v111->fields.callbackFunc,
        (System_Int32_array **)v117,
        v118,
        v119,
        v120,
        v121,
        v122,
        v123);
      PartyServantListViewManager__SetMode_32092560(v111, 2, v124);
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
    v109 = -1;
    this->fields.state = 3;
    v108 = this;
    v107 = 0;
    goto LABEL_35;
  }
  switch ( this->fields.modeKind )
  {
    case 0:
      v104 = *v102;
      if ( !*v102 )
        goto LABEL_140;
      if ( !v104->fields.isBase && v104->fields.isQuestRestriction
        || v104->fields.isSame
        || (v104->fields.commonRestrictionId & 0x80000000) == 0 )
      {
        goto LABEL_69;
      }
      if ( v104->fields.isBase )
      {
        v105 = SoundManager_TypeInfo;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          goto LABEL_25;
        goto LABEL_27;
      }
      if ( v104->fields.isLeave
        || (v104->fields.fatigureTime & 0x8000000000000000LL) == 0
        || v104->fields._IsAllOutBattle_k__BackingField
        || v104->fields._IsDataLost_k__BackingField
        || v104->fields._TimesToRestart_k__BackingField >= 1 )
      {
        goto LABEL_69;
      }
      v105 = SoundManager_TypeInfo;
      if ( !v104->fields._IsClearedWave_k__BackingField )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
        {
LABEL_25:
          if ( !v105->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v105);
        }
LABEL_27:
        SoundManager__playSystemSe(0, 0LL);
        v107 = 1;
        v108 = this;
        v109 = n;
        this->fields.state = 3;
LABEL_35:
        PartyServantSelectMenu__Callback(v108, v107, v109, v106);
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
      if ( !*v102 )
        goto LABEL_140;
      (*v102)->fields.isSwapLock ^= 1u;
      goto LABEL_63;
    case 2:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( !*v102 )
        goto LABEL_140;
      (*v102)->fields.isSwapChoice ^= 1u;
LABEL_63:
      this->fields.state = 2;
      v111 = this->fields.partyServantListViewManager;
      v116 = PartyServantListViewManager_CallbackFunc_TypeInfo;
      goto LABEL_75;
    case 3:
      if ( !*v102 )
        goto LABEL_140;
      if ( !(*v102)->fields.isEnabled )
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
        PartyServantSelectMenu__PushRequest(this, *v102, v112);
        return;
      }
      if ( !*v102 )
        goto LABEL_140;
      userServantEntity = (*v102)->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_140;
      v115 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v192.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v192.fields.fakeValue = v115;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v191 = v192;
      if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v191, 0LL) )
        goto LABEL_57;
      partyServantListViewManager = (PartyServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !partyServantListViewManager )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)partyServantListViewManager,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !partyServantListViewManager )
        goto LABEL_140;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)partyServantListViewManager,
                 dropList,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      partyServantListViewManager = (PartyServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !partyServantListViewManager )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)partyServantListViewManager,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Entity )
        goto LABEL_140;
      v126 = (DataMasterBase_WarMaster__WarEntity__int__o *)partyServantListViewManager;
      v128 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
      v127 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v193.fields.currentCryptoKey = v128;
      *(_QWORD *)&v193.fields.fakeValue = v127;
      partyServantListViewManager = (PartyServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                       v193,
                                                                       0LL);
      if ( !v126 )
        goto LABEL_140;
      v129 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v126,
                                  (int32_t)partyServantListViewManager,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v131 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(Entity->fields.svtId, 0LL);
      partyServantListViewManager = (PartyServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                       Entity->fields.limitCount,
                                                                       0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                       Master_WarQuestSelectionMaster,
                                                                       v131,
                                                                       (int32_t)partyServantListViewManager,
                                                                       0LL);
      if ( !*v102 )
        goto LABEL_140;
      v132 = (int)partyServantListViewManager;
      partyServantListViewManager = (PartyServantListViewManager_o *)PartyServantListViewItem__get_SvtId(
                                                                       *v102,
                                                                       (const MethodInfo *)v84);
      if ( !*v102 )
        goto LABEL_140;
      v133 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v102)->fields.userServantEntity;
      if ( !v133 )
        goto LABEL_140;
      v134 = (int)partyServantListViewManager;
      v135 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v133[6], 0LL);
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     Master_WarQuestSelectionMaster,
                                     v134,
                                     v135,
                                     0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v137 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
      v138 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
      v139 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
      Rarity = UserServantEntity__getRarity(Entity, 0LL);
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      partyServantListViewManager = (PartyServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
      if ( !v139 )
        goto LABEL_140;
      v147 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B5D684(
                                                                         partyServantListViewManager,
                                                                         v139->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_142;
      }
      if ( !v139->max_length )
        goto LABEL_141;
      v139->m_Items[0] = (Il2CppObject *)v147;
      sub_B5D560((BattleServantConfConponent_o *)v139->m_Items, v147, v141, v142, v143, v144, v145, v146);
      if ( !v129 )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getClassName(v129, 0LL);
      v154 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B5D684(
                                                                         partyServantListViewManager,
                                                                         v139->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_142;
      }
      if ( v139->max_length <= 1 )
        goto LABEL_141;
      v139->m_Items[1] = (Il2CppObject *)v154;
      sub_B5D560((BattleServantConfConponent_o *)&v139->m_Items[1], v154, v148, v149, v150, v151, v152, v153);
      partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getName(v129, v132, -1, 0LL);
      v161 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B5D684(
                                                                         partyServantListViewManager,
                                                                         v139->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_142;
      }
      if ( v139->max_length <= 2 )
        goto LABEL_141;
      v139->m_Items[2] = (Il2CppObject *)v161;
      sub_B5D560((BattleServantConfConponent_o *)&v139->m_Items[2], v161, v155, v156, v157, v158, v159, v160);
      if ( !*v102 )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)(*v102)->fields.userServantEntity;
      if ( !partyServantListViewManager )
        goto LABEL_140;
      v162 = UserServantEntity__getRarity((UserServantEntity_o *)partyServantListViewManager, 0LL);
      partyServantListViewManager = (PartyServantListViewManager_o *)Rarity__getRarityType(v162, 0LL);
      v169 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B5D684(
                                                                         partyServantListViewManager,
                                                                         v139->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_142;
      }
      if ( v139->max_length <= 3 )
        goto LABEL_141;
      v139->m_Items[3] = (Il2CppObject *)v169;
      sub_B5D560((BattleServantConfConponent_o *)&v139->m_Items[3], v169, v163, v164, v165, v166, v167, v168);
      if ( !*v102 )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)(*v102)->fields.servantEntity;
      if ( !partyServantListViewManager )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getClassName(
                                                                       (ServantEntity_o *)partyServantListViewManager,
                                                                       0LL);
      v176 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B5D684(
                                                                         partyServantListViewManager,
                                                                         v139->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
          goto LABEL_142;
      }
      if ( v139->max_length <= 4 )
        goto LABEL_141;
      v139->m_Items[4] = (Il2CppObject *)v176;
      sub_B5D560((BattleServantConfConponent_o *)&v139->m_Items[4], v176, v170, v171, v172, v173, v174, v175);
      if ( !*v102 )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)(*v102)->fields.servantEntity;
      if ( !partyServantListViewManager )
        goto LABEL_140;
      partyServantListViewManager = (PartyServantListViewManager_o *)ServantEntity__getName(
                                                                       (ServantEntity_o *)partyServantListViewManager,
                                                                       ServantLimitCountSealAfter,
                                                                       -1,
                                                                       0LL);
      v183 = (System_Int32_array **)partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        partyServantListViewManager = (PartyServantListViewManager_o *)sub_B5D684(
                                                                         partyServantListViewManager,
                                                                         v139->obj.klass->_1.element_class);
        if ( !partyServantListViewManager )
        {
LABEL_142:
          v190 = sub_B5D6BC(partyServantListViewManager);
          sub_B5D668(v190, 0LL);
        }
      }
      if ( v139->max_length <= 5 )
      {
LABEL_141:
        v189 = sub_B5D6C8(partyServantListViewManager);
        sub_B5D668(v189, 0LL);
      }
      v139->m_Items[5] = (Il2CppObject *)v183;
      sub_B5D560((BattleServantConfConponent_o *)&v139->m_Items[5], v183, v177, v178, v179, v180, v181, v182);
      v184 = System_String__Format_44656512(v138, v139, 0LL);
      v185 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v186 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      v187 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v188 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v188,
        (Il2CppObject *)v82,
        Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__0__,
        0LL);
      partyServantListViewManager = (PartyServantListViewManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v187 )
        goto LABEL_140;
      CommonUI__OpenConfirmDialog_18201384(
        v187,
        v137,
        v184,
        v185,
        v186,
        v188,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  unsigned int state; // w8
  int v22; // w8
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct FollowerQuestInfomationDraw_o *questInfomationDraw; // x8
  PartyServantSelectMenu_o *v38; // x26
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_GameObject_o *gameObject; // x27
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x7
  const MethodInfo *v48; // x2
  System_Int32_array *waveBattleEnemyClassIds; // x3
  QuestRestrictionInfo_o *v50; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v52; // x20

  v17 = this;
  if ( (byte_42EC3F3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseDeckItemList, (_DWORD)partyItem, *(_QWORD *)&num);
    this = (PartyServantSelectMenu_o *)sub_B5D5C4(&Method_PartyServantSelectMenu_EndOpen__, v18, v19, v20);
    byte_42EC3F3 = 1;
  }
  state = v17->fields.state;
  v17->fields.canMoveCombine = inCanMoveCombine;
  if ( state <= 7 )
  {
    v22 = 1 << state;
    if ( (v22 & 0xCC) != 0 )
    {
      v17->fields.tutorialMode = tutorialMode;
      v17->fields.callbackFunc = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v17->fields.callbackFunc,
        (System_Int32_array **)callback,
        (System_String_array **)partyItem,
        *(System_String_array ***)&num,
        *(System_Boolean_array ***)&tutorialMode,
        (System_Int32_array **)setupInfo,
        (System_Int32_array *)questRestrictionInfo,
        (System_Int32_array *)callback);
      v17->fields.openCallbackFunc = openCallback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v17->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      PartyServantSelectMenu__SetTabKind(v17, v17->fields.modeKind, 0, v29);
      PartyServantSelectMenu__EndOpen(v17, v30);
      return;
    }
    if ( (v22 & 0x11) != 0 )
    {
      if ( partyItem )
      {
        this = (PartyServantSelectMenu_o *)PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( this )
        {
          questInfomationDraw = this->fields.questInfomationDraw;
          v38 = this;
          v17->fields.tutorialMode = tutorialMode;
          v17->fields.isSelectedSvt = questInfomationDraw != 0LL;
          v17->fields.callbackFunc = callback;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v17->fields.callbackFunc,
            (System_Int32_array **)callback,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          v17->fields.openCallbackFunc = openCallback;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v17->fields.openCallbackFunc,
            (System_Int32_array **)openCallback,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
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
                PartyServantSelectMenu__SetTabKind(v17, v17->fields.modeKind, 1, v46);
                this = (PartyServantSelectMenu_o *)v17->fields.titleInfo;
                if ( this )
                {
                  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 70, 0LL);
                  this = (PartyServantSelectMenu_o *)v17->fields.titleInfo;
                  if ( this )
                  {
                    TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
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
                        v47);
                      this = (PartyServantSelectMenu_o *)v17->fields.partyServantListViewManager;
                      if ( this )
                      {
                        PartyServantListViewManager__SetMode_32092560((PartyServantListViewManager_o *)this, 1, v48);
                        this = (PartyServantSelectMenu_o *)v17->fields.questInfomationDraw;
                        if ( partyItem->fields.menuKind == 9 )
                        {
                          if ( !this )
                            goto LABEL_25;
                          waveBattleEnemyClassIds = partyItem->fields.waveBattleEnemyClassIds;
                          v50 = questRestrictionInfo;
                        }
                        else
                        {
                          if ( !this )
                            goto LABEL_25;
                          v50 = questRestrictionInfo;
                          waveBattleEnemyClassIds = 0LL;
                        }
                        FollowerQuestInfomationDraw__SetInfomation(
                          (FollowerQuestInfomationDraw_o *)this,
                          v50,
                          HIDWORD(v38[1].fields.enterTransform),
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
                            v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                            System_Action___ctor(v52, (Il2CppObject *)v17, Method_PartyServantSelectMenu_EndOpen__, 0LL);
                            BaseMenu__Open((BaseMenu_o *)v17, v52, 0LL);
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
      sub_B5D69C(this, baseDeckItemList);
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
      PartyServantSelectMenu__OpenServantDetail_32113932(
        this,
        (PartyServantListViewItem_o *)partyServantListViewManager,
        0,
        v5);
      partyServantListViewManager = this->fields.partyServantListViewManager;
      if ( partyServantListViewManager )
      {
        PartyServantListViewManager__SetMode_32092560(partyServantListViewManager, 4, v7);
        return;
      }
    }
LABEL_7:
    sub_B5D69C(partyServantListViewManager, userServantId);
  }
}


void __fastcall PartyServantSelectMenu__OpenServantDetail_32113932(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *partyServantListViewItem,
        bool isPlaySe,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v29; // q1
  struct ServantEntity_o *equipServantEntity; // x8
  struct System_Int64_array *equipIdList; // x8
  int32_t partyIndex; // w23
  int32_t PartyListViewItemMenuKind_k__BackingField; // w24
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *v35; // x21
  CommonUI_o *v36; // x22
  System_Int64_array *v37; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  ServantStatusDialog_ResultDelegate_o *v39; // x24
  ServantStatusDialog_ResultDelegate_o *v40; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v41; // x24
  ServantStatusDialog_EndIndividualityDelegate_o *v42; // x20
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-50h]

  if ( (byte_42EC408 & 1) == 0 )
  {
    sub_B5D5C4(
      &ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
      (_DWORD)partyServantListViewItem,
      isPlaySe,
      method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndShowServantWithQuest__, v10, v11, v12);
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndShowServant__, v13, v14, v15);
    sub_B5D5C4(&Method_PartyServantSelectMenu_OpenServantDetail__, v16, v17, v18);
    sub_B5D5C4(&ServantStatusDialog_ResultDelegate_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22, v23, v24);
    byte_42EC408 = 1;
  }
  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    goto LABEL_29;
  ListViewManager__ClearScrollBarValue(partyServantListViewManager, 1, 0LL);
  if ( isPlaySe )
  {
    v26 = Method_PartyServantSelectMenu_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyServantSelectMenu_OpenServantDetail__ + 75) & 2) != 0 )
      v26 = (_QWORD *)sub_B5D5CC(Method_PartyServantSelectMenu_OpenServantDetail__);
    v27 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v26, v26[3]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
  }
  this->fields.state = 5;
  if ( !partyServantListViewItem )
    goto LABEL_29;
  userServantEntity = partyServantListViewItem->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_29;
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v29;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v44 = v45;
  partyServantListViewManager = (ListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                       &v44,
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
      v43 = sub_B5D6C8(partyServantListViewManager);
      sub_B5D668(v43, 0LL);
    }
    equipServantEntity = (struct ServantEntity_o *)equipIdList->m_Items[0];
  }
  this->fields._SelectServantEquipId_k__BackingField = (int64_t)equipServantEntity;
  partyIndex = partyServantListViewItem->fields.partyIndex;
  PartyListViewItemMenuKind_k__BackingField = partyServantListViewItem->fields._PartyListViewItemMenuKind_k__BackingField;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = partyServantListViewItem->fields.userServantEntity;
  v36 = (CommonUI_o *)Instance;
  if ( (partyIndex & 0x80000000) != 0 )
  {
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v40 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v40,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( !v36 )
        goto LABEL_29;
      CommonUI__OpenServantStatusDialog_18213380(v36, 0, v35, v40, this->fields.canMoveCombine, 0LL);
    }
    else
    {
      v42 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B5D694(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
      ServantStatusDialog_EndIndividualityDelegate___ctor(
        v42,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServant__,
        0LL);
      if ( !v36 )
        goto LABEL_29;
      CommonUI__OpenServantStatusDialog_18213124(v36, 0, v35, v42, this->fields.canMoveCombine, 0LL);
    }
  }
  else
  {
    v37 = partyServantListViewItem->fields.equipIdList;
    questRestrictionInfo = partyServantListViewItem->fields.questRestrictionInfo;
    if ( PartyListViewItemMenuKind_k__BackingField == 8 )
    {
      v39 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v39,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndShowServantWithQuest__,
        0LL);
      if ( v36 )
      {
        CommonUI__OpenServantStatusDialog_18213928(
          v36,
          0,
          v35,
          v37,
          questRestrictionInfo,
          v39,
          this->fields.canMoveCombine,
          0LL);
        return;
      }
LABEL_29:
      sub_B5D69C(partyServantListViewManager, partyServantListViewItem);
    }
    v41 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B5D694(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    ServantStatusDialog_EndIndividualityDelegate___ctor(
      v41,
      (Il2CppObject *)this,
      Method_PartyServantSelectMenu_EndShowServant__,
      0LL);
    if ( !v36 )
      goto LABEL_29;
    CommonUI__OpenServantStatusDialog_18213636(
      v36,
      0,
      v35,
      v37,
      questRestrictionInfo,
      v41,
      this->fields.canMoveCombine,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__Open_32106012(
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  unsigned int state; // w8
  int v21; // w8
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v37; // x1
  UnityEngine_GameObject_o *v38; // x25
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x6
  const MethodInfo *v41; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v43; // x20

  if ( (byte_42EC3F4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)partyItem, num, *(_QWORD *)&tutorialMode);
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndOpen__, v17, v18, v19);
    byte_42EC3F4 = 1;
  }
  state = this->fields.state;
  if ( state <= 7 )
  {
    v21 = 1 << state;
    if ( (v21 & 0xCC) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&num,
        *(System_String_array ***)&tutorialMode,
        (System_Boolean_array **)setupInfo,
        (System_Int32_array **)questRestrictionInfo,
        (System_Int32_array *)callback,
        (System_Int32_array *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 0, v28);
      PartyServantSelectMenu__EndOpen(this, v29);
    }
    else if ( (v21 & 0x11) != 0 )
    {
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&num,
        *(System_String_array ***)&tutorialMode,
        (System_Boolean_array **)setupInfo,
        (System_Int32_array **)questRestrictionInfo,
        (System_Int32_array *)callback,
        (System_Int32_array *)openCallback);
      this->fields.openCallbackFunc = openCallback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
      if ( !gameObject )
        goto LABEL_19;
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
      if ( !v38 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(v38, (unsigned __int8)gameObject & 1, 0LL);
      PartyServantSelectMenu__SetTabKind(this, this->fields.modeKind, 1, v39);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 70, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( !gameObject )
        goto LABEL_19;
      TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject )
        goto LABEL_19;
      PartyServantListViewManager__CreateList_32087624(
        (PartyServantListViewManager_o *)gameObject,
        partyItem,
        num,
        tutorialMode,
        setupInfo,
        questRestrictionInfo,
        v40);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyServantListViewManager;
      if ( !gameObject
        || (PartyServantListViewManager__SetMode_32092560((PartyServantListViewManager_o *)gameObject, 1, v41),
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
                                                       v37),
            !scaleChangeTabSprite) )
      {
LABEL_19:
        sub_B5D69C(gameObject, v37);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_PartyServantSelectMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v43, 0LL);
    }
  }
}


void __fastcall PartyServantSelectMenu__PushRequest(
        PartyServantSelectMenu_o *this,
        PartyServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  DataManager_o *limitCountSupport; // x0
  __int64 v31; // x1
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v33; // x23
  UserServantCollectionMaster_o *v34; // x21
  int64_t v35; // x22
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v39; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v41; // x8
  int64_t v42; // x0
  __int128 v43; // q0
  NetworkManager_ResultCallbackFunc_o *v44; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v46; // q0
  CardFavoriteRequest_o *v47; // x20
  int32_t v48; // w27
  int32_t v49; // w28
  int32_t v50; // w21
  bool IsLock; // w23
  char v52; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v56; // w0
  __int64 v57; // x8
  int32_t randomSettingSupport; // w19
  int32_t v59; // [xsp+50h] [xbp-110h]
  int32_t v60; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v62; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v64; // [xsp+70h] [xbp-F0h]
  __int64 v65; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42EC406 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndCardFavoriteRequest__, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    byte_42EC406 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v33 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v33 || !userServantEntity )
    goto LABEL_21;
  v34 = (UserServantCollectionMaster_o *)limitCountSupport;
  v35 = *(_QWORD *)&v33->fields.m_CachedPtr;
  v37 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v37;
  *(_QWORD *)&v70.fields.fakeValue = v36;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  if ( !v34 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v35, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v39 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v41 = *(_QWORD *)&v33->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v39;
  v65 = v41;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
  v43 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v33->fields.writeMasterDataThread;
  v64 = v42;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v43;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
  v44 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    Method_PartyServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v44,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v46 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v47 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v46;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v52 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v57 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v56;
  *(_QWORD *)&v71.fields.currentCryptoKey = v57;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  if ( !v47 )
LABEL_21:
    sub_B5D69C(limitCountSupport, v31);
  CardFavoriteRequest__beginRequest(
    v47,
    targetUsrSVtId,
    v60,
    v59,
    v48,
    v49,
    v50,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v62,
    IsLock,
    v52 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v65 != v64,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantSelectMenu__SetTabKind(
        PartyServantSelectMenu_o *this,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  bool v52; // w21
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v54; // x8
  bool v55; // w23
  unsigned int v56; // w21
  UICommonButton_o *v57; // x22
  bool enabled; // w0
  __int64 *v59; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v61; // w0
  __int64 *v62; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v64; // w0
  UnityEngine_Object_o *pushTabButton; // x21
  __int64 *v66; // x8
  UICommonButton_o *v67; // x22
  bool v68; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v70; // x8
  int32_t state; // w8
  struct PartyServantListViewManager_o *partyServantListViewManager; // x20
  PartyServantListViewManager_CallbackFunc_o *v73; // x21
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  int32_t v80; // w1

  if ( (byte_42EC3F8 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantListViewManager_CallbackFunc_TypeInfo, modeKind, isInit, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_PartyServantSelectMenu_OnSelectItem__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_10518/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_10521/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_10519/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_10520/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v49, v50, v51);
    byte_42EC3F8 = 1;
  }
  v52 = !this->fields.isInitTab || isInit;
  if ( v52 || this->fields.modeKind != modeKind )
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
    v54 = &StringLiteral_17349/*"button_select_reg"*/;
    if ( modeKind )
      v54 = &StringLiteral_17350/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v54, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    v55 = !v52;
    v56 = !v52;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v56,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    v57 = this->fields.statusTabButton;
    if ( !v57 )
      goto LABEL_64;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(v57, enabled, v56, 0LL);
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
    v59 = &StringLiteral_17335/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v59 = &StringLiteral_17336/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v59, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v55,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_64;
    v61 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v61, v55, 0LL);
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
    v62 = &StringLiteral_17333/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v62 = &StringLiteral_17334/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v62, 0LL);
    statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !statusTabButton )
      goto LABEL_64;
    statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                   statusTabButton,
                                                   0LL,
                                                   v55,
                                                   statusTabButton->klass[1]._1.interfaceOffsets);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_64;
    v64 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v64, v55, 0LL);
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
      v66 = &StringLiteral_17347/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v66 = &StringLiteral_17348/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v66, 0LL);
      statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !statusTabButton )
        goto LABEL_64;
      statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                     statusTabButton,
                                                     0LL,
                                                     v55,
                                                     statusTabButton->klass[1]._1.interfaceOffsets);
      v67 = this->fields.pushTabButton;
      if ( !v67 )
        goto LABEL_64;
      v68 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
      UICommonButton__SetColliderEnable(v67, v68, v55, 0LL);
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
        v70 = &StringLiteral_10521/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_STATUS"*/;
        goto LABEL_55;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v70 = &StringLiteral_10519/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_LOCK"*/;
        goto LABEL_55;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v70 = &StringLiteral_10518/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_CHOICE"*/;
        goto LABEL_55;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v70 = &StringLiteral_10520/*"PARTY_ORGANIZATION_SERVANT_SELECT_EXPLANATION_PUSH"*/;
LABEL_55:
        statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v70, 0LL);
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
      v80 = 1;
      goto LABEL_63;
    }
LABEL_64:
    sub_B5D69C(statusTabButton, *(_QWORD *)&modeKind);
  }
  if ( !statusTabButton )
    goto LABEL_64;
  PartyServantListViewManager__UpdateItemState(
    (PartyServantListViewManager_o *)statusTabButton,
    modeKind,
    (const MethodInfo *)isInit);
  partyServantListViewManager = this->fields.partyServantListViewManager;
  v73 = (PartyServantListViewManager_CallbackFunc_o *)sub_B5D694(PartyServantListViewManager_CallbackFunc_TypeInfo);
  PartyServantListViewManager_CallbackFunc___ctor(
    v73,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !partyServantListViewManager )
    goto LABEL_64;
  partyServantListViewManager->fields.callbackFunc = v73;
  sub_B5D560(
    (BattleServantConfConponent_o *)&partyServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = 2;
  statusTabButton = (UnityEngine_Behaviour_o *)partyServantListViewManager;
LABEL_63:
  PartyServantListViewManager__SetMode_32092560(
    (PartyServantListViewManager_o *)statusTabButton,
    v80,
    (const MethodInfo *)isInit);
}


void __fastcall PartyServantSelectMenu__StatusRequest(
        PartyServantSelectMenu_o *this,
        PartyServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t modeKind; // w8
  PartyServantListViewManager_o *partyServantListViewManager; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  System_Int64_array *v24; // x2
  System_Int64_array *v25; // x1
  bool v26; // w4
  bool v27; // w5
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  NetworkManager_ResultCallbackFunc_o *v34; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42EC3FF & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_PartyServantSelectMenu_EndStatusSync__, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42EC3FF = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v34,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v34,
                                                                       (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v24 = unchoiceList;
        v25 = choiceList;
        v27 = 1;
        v26 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B5D69C(partyServantListViewManager, callback);
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      partyServantListViewManager = (PartyServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v23,
                                                                       (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( partyServantListViewManager )
      {
        v24 = unlockList;
        v25 = lockList;
        v26 = 1;
        v27 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)partyServantListViewManager,
          v25,
          v24,
          0,
          v26,
          v27,
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
  __int64 v3; // x3
  struct PartyServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyServantSelectMenu_o *v12; // x0
  PartyServantSelectMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EC3F1 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC3F1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyServantSelectMenu_CallbackFunc_c *)v9->klass != PartyServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyServantSelectMenu__remove_callbackFunc(v12, v13, v14);
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
  __int64 v3; // x3
  struct PartyServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyServantSelectMenu_o *v12; // x0
  int64_t v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EC3F2 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC3F2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyServantSelectMenu_CallbackFunc_c *)v9->klass != PartyServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyServantSelectMenu__set_SelectUserSvtId(v12, v13, v14);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
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
  if ( (byte_42E5AA1 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantSelectMenu_ResultKind_TypeInfo, result, (_DWORD)item, callback);
    byte_42E5AA1 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyServantSelectMenu_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
}


void __fastcall PartyServantSelectMenu_CallbackFunc__EndInvoke(
        PartyServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, item);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, PartyServantListViewItem_o *, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5AA2 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E5AA2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PartyServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PartyServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  PartyServantSelectMenu_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  PartyServantSelectMenu_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CommonUI_o *Instance; // x0
  __int64 v19; // x1
  CommonUI_o *v20; // x20
  System_Action_o *_9__1; // x22
  struct PartyServantSelectMenu_o *_4__this; // x8
  struct PartyServantSelectMenu_o *v23; // x20
  PartyServantListViewManager_o *partyServantListViewManager; // x19
  __int64 v25; // x21
  __int64 v26; // x9

  if ( (byte_42E5AA0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&PartyServantListViewManager_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_PartyServantSelectMenu_OnSelectItem__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__, v15, v16, v17);
    byte_42E5AA0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PartyServantSelectMenu___c__DisplayClass68_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B5D560(&this->fields.__9__1);
    }
    if ( v20 )
    {
      CommonUI__CloseConfirmDialog_18202348(v20, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B5D69C(Instance, v19);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_13;
  partyServantListViewManager = v23->fields.partyServantListViewManager;
  v25 = sub_B5D694(PartyServantListViewManager_CallbackFunc_TypeInfo);
  v26 = *(_QWORD *)Method_PartyServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v25 + 40) = Method_PartyServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v25 + 16) = v26;
  *(_QWORD *)(v25 + 32) = v23;
  sub_B5D560(v25 + 32);
  if ( !partyServantListViewManager )
    goto LABEL_13;
  PartyServantListViewManager__SetMode(
    partyServantListViewManager,
    2,
    (PartyServantListViewManager_CallbackFunc_o *)v25,
    0LL);
}


void __fastcall PartyServantSelectMenu___c__DisplayClass68_0___OnSelectItem_b__1(
        PartyServantSelectMenu___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  PartyServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  PartyServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}