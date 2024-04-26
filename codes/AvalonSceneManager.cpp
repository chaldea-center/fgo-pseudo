void __fastcall AvalonSceneManager___cctor(const MethodInfo *method)
{
  if ( (byte_434F746 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    byte_434F746 = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void __fastcall AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_434F745 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
    sub_B70694(&System_Collections_Generic_Stack_SceneTemp__TypeInfo);
    byte_434F745 = 1;
  }
  v3 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B70764(System_Collections_Generic_Stack_SceneTemp__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v3,
    (const MethodInfo_2CFBE58 *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.scenestack,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_1BDB500 *method)
{
  AvalonSceneManager_o *v7; // x20
  struct SceneRootComponent_o *targetRoot; // x23
  Il2CppClass *_0_T; // x22
  UnityEngine_Component_o *v10; // x0
  SceneRootComponent_o *v11; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  System_Type_o *v14; // x0
  struct PlayMakerGUI_o *playMakerGUI; // x8
  System_String_o *SceneName; // x19
  AvalonSceneManager_o *v17; // x0
  const MethodInfo_1BDB6E4 *v18; // x1
  System_RuntimeTypeHandle_o v19; // 0:w0.4
  System_RuntimeTypeHandle_o v20; // 0:w0.4

  v7 = this;
  if ( (byte_4353F93 & 1) == 0 )
  {
    sub_B70694(&BattleRootComponent_var);
    sub_B70694(&BattleRootComponent_TypeInfo);
    sub_B70694(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    this = (AvalonSceneManager_o *)sub_B70694(&System_Type_TypeInfo);
    byte_4353F93 = 1;
  }
  if ( !v7 )
    goto LABEL_24;
  this = (AvalonSceneManager_o *)AvalonSceneManager__checkNowScene(v7, sceneType, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  targetRoot = v7->fields.targetRoot;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    this = (AvalonSceneManager_o *)sub_B08394(method->rgctx_data->_0_T);
  if ( !targetRoot )
    goto LABEL_24;
  v10 = (UnityEngine_Component_o *)sub_B70754(targetRoot, _0_T);
  if ( !v10 )
  {
    sub_B70A60(targetRoot);
    AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(v17, v18);
    return;
  }
  v11 = (SceneRootComponent_o *)v10;
  this = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
  if ( !this )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v19.fields.value = (int)_1_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v19, 0LL);
  v20.fields.value = (int)BattleRootComponent_var;
  v14 = System_Type__GetTypeFromHandle(v20, 0LL);
  if ( !System_Type__op_Equality(TypeFromHandle, v14, 0LL) )
    goto LABEL_18;
  this = (AvalonSceneManager_o *)sub_B70754(v11, BattleRootComponent_TypeInfo);
  if ( !this
    || (this = (AvalonSceneManager_o *)sub_B70754(v11, BattleRootComponent_TypeInfo),
        (playMakerGUI = this->fields.playMakerGUI) == 0LL)
    || (this = (AvalonSceneManager_o *)playMakerGUI[10].monitor) == 0LL )
  {
LABEL_24:
    sub_B7076C(this, *(_QWORD *)&sceneType);
  }
  BattleResultComponent__EndResult((BattleResultComponent_o *)this, 0LL);
LABEL_18:
  if ( forceUnload )
  {
    SceneName = SceneRootComponent__getSceneName(v11, 0LL);
    if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    UnityEngine_SceneManagement_SceneManager__UnloadScene_36141064(SceneName, 0LL);
  }
}


SceneRootComponent_o *__fastcall AvalonSceneManager__GetStackedRootComponent(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8
  System_String_o *StackSceneName; // x0
  const MethodInfo *v5; // x2

  v2 = this;
  if ( (byte_434F744 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_434F744 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_B7076C(this, method);
  if ( !scenestack->fields._size )
    return 0LL;
  StackSceneName = AvalonSceneManager__getStackSceneName(v2, method);
  return AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)StackSceneName, StackSceneName, v5);
}


bool __fastcall AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  v2 = this;
  if ( (byte_434F732 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_434F732 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_B7076C(this, method);
  return scenestack->fields._size > 0;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__UnloadSceneAsync_TerminalSceneComponent_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_1BDB8C4 *method)
{
  Il2CppClass *_0_AvalonSceneManager__UnloadSceneAsync_d__42_T; // x21
  __int64 v6; // x0
  const MethodInfo_1BDB8C4_RGCTXs *rgctx_data; // x8
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  _0_AvalonSceneManager__UnloadSceneAsync_d__42_T = method->rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__42_T_;
  if ( (BYTE2(_0_AvalonSceneManager__UnloadSceneAsync_d__42_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__42_T_);
  v6 = sub_B70764(_0_AvalonSceneManager__UnloadSceneAsync_d__42_T);
  rgctx_data = method->rgctx_data;
  v8 = v6;
  v9 = ((__int64 (__fastcall *)(__int64, _QWORD))rgctx_data->_1_AvalonSceneManager__UnloadSceneAsync_d__42_T___ctor->methodPointer)(
         v6,
         0LL);
  if ( !v8 )
    sub_B7076C(v9, v10);
  *(_QWORD *)(v8 + 32) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)callback, v11, v12, v13, v14, v15, v16);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
        AvalonSceneManager_o *this,
        const MethodInfo_1BDB6E4 *method)
{
  int32_t i; // w20
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v6; // x1
  UIWidget_o *Component_UIWidget; // x21
  Il2CppClass *_0_T; // x22
  __int64 v9; // x22
  Il2CppClass *v10; // x21
  UnityEngine_Object_o *v11; // x0
  int32_t *v12; // x0
  System_String_o *name; // x21
  __int64 v14; // x0
  AvalonSceneManager_o *v15; // x0
  System_Action_o *v16; // x1
  const MethodInfo_1BDB8C4 *v17; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4353F94 & 1) == 0 )
  {
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4353F94 = 1;
  }
  m_Handle = 0;
  if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  }
  for ( i = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1; i >= 0; --i )
  {
    if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(i, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                        (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                        0LL);
    if ( !RootGameObjects )
      sub_B7076C(0LL, v6);
    if ( !RootGameObjects->max_length )
    {
      v14 = sub_B70798(RootGameObjects);
      sub_B70738(v14, 0LL);
    }
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           RootGameObjects->m_Items[0],
                           (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_T);
    v9 = sub_B70754(Component_UIWidget, _0_T);
    v10 = method->rgctx_data->_0_T;
    if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_T);
    if ( v9 )
    {
      v11 = (UnityEngine_Object_o *)sub_B70754(v9, v10);
      if ( !v11 )
      {
        sub_B70A60(v9);
        AvalonSceneManager__UnloadSceneAsync_TerminalSceneComponent_(v15, v16, v17);
        return;
      }
    }
    else
    {
      v11 = 0LL;
    }
    if ( UnityEngine_Object__op_Implicit(v11, 0LL) )
    {
      v12 = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v12, 0LL);
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      UnityEngine_SceneManagement_SceneManager__UnloadScene_36141064(name, 0LL);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__changeNextSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_434F741 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager__changeNextSceneCoroutine_d__36_TypeInfo);
    byte_434F741 = 1;
  }
  v7 = sub_B70764(AvalonSceneManager__changeNextSceneCoroutine_d__36_TypeInfo);
  AvalonSceneManager__changeNextSceneCoroutine_d__36___ctor(
    (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 48) = changeType;
  *(_QWORD *)(v7 + 40) = scenename;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)scenename, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__changePrevSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_434F740 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager__changePrevSceneCoroutine_d__35_TypeInfo);
    byte_434F740 = 1;
  }
  v8 = sub_B70764(AvalonSceneManager__changePrevSceneCoroutine_d__35_TypeInfo);
  AvalonSceneManager__changePrevSceneCoroutine_d__35___ctor(
    (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B7076C(v9, v10);
  *(_QWORD *)(v8 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v8 + 44) = changeType;
  *(_BYTE *)(v8 + 40) = fadeTimeSkip;
  return (System_Collections_IEnumerator_o *)v8;
}


bool __fastcall AvalonSceneManager__changeScene(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v10; // x6

  if ( (byte_434F73C & 1) == 0 )
  {
    sub_B70694(&SceneList_TypeInfo);
    byte_434F73C = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_20803340(this, 2, SceneName, fade, data, 0, v10);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__changeSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        bool fadeTimeSkip,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_434F73F & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager__changeSceneCoroutine_d__34_TypeInfo);
    byte_434F73F = 1;
  }
  v11 = sub_B70764(AvalonSceneManager__changeSceneCoroutine_d__34_TypeInfo);
  AvalonSceneManager__changeSceneCoroutine_d__34___ctor((AvalonSceneManager__changeSceneCoroutine_d__34_o *)v11, 0, 0LL);
  if ( !v11 )
    sub_B7076C(v12, v13);
  *(_QWORD *)(v11 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 48) = changeType;
  *(_QWORD *)(v11 + 32) = scenename;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)scenename, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v11 + 52) = fadeTimeSkip;
  *(_QWORD *)(v11 + 56) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v11 + 56), (System_Int32_array **)callback, v26, v27, v28, v29, v30, v31);
  return (System_Collections_IEnumerator_o *)v11;
}


bool __fastcall AvalonSceneManager__changeScene_20803340(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  bool v13; // w25
  CrashReporter_o *Instance; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x5
  System_Collections_IEnumerator_o *v23; // x0

  if ( (byte_434F73D & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_434F73D = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v15);
  CrashReporter__LeaveBreadcrumb(Instance, scenename, 0LL);
  v13 = 1;
  this->fields.fadeType = fade;
  this->fields.isBusySceneChange = 1;
  this->fields.sendData = data;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.sendData,
    (System_Int32_array **)data,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v23 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0LL, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
  return v13;
}


bool __fastcall AvalonSceneManager__changeScene_20804096(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  bool v13; // w25
  CrashReporter_o *Instance; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x5
  System_Collections_IEnumerator_o *v23; // x0

  if ( (byte_434F73E & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_434F73E = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v15);
  CrashReporter__LeaveBreadcrumb(Instance, scenename, 0LL);
  v13 = 1;
  this->fields.fadeType = fade;
  this->fields.isBusySceneChange = 1;
  this->fields.sendData = data;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.sendData,
    (System_Int32_array **)data,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v23 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, 0, callback, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
  return v13;
}


bool __fastcall AvalonSceneManager__changeScene_20804668(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_20803340(this, 2, scenename, fade, data, 0, v5);
}


bool __fastcall AvalonSceneManager__checkLoadedScene(
        AvalonSceneManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x19
  int32_t *p_m_Handle; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434F736 & 1) == 0 )
  {
    sub_B70694(&SceneList_TypeInfo);
    sub_B70694(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_434F736 = 1;
  }
  m_Handle = 0;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( System_String__IsNullOrEmpty(SceneName, 0LL) )
  {
    return 0;
  }
  else
  {
    if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(SceneName, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    return UnityEngine_SceneManagement_Scene__get_isLoaded((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  }
}


bool __fastcall AvalonSceneManager__checkNowScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  System_String_o *SceneName; // x0
  __int64 v6; // x1
  struct SceneTemp_o *prevscenetemp; // x8

  if ( (byte_434F734 & 1) == 0 )
  {
    sub_B70694(&SceneList_TypeInfo);
    byte_434F734 = 1;
  }
  if ( !this->fields.prevscenetemp )
    return 0;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  prevscenetemp = this->fields.prevscenetemp;
  if ( !prevscenetemp )
    sub_B7076C(SceneName, v6);
  return System_String__op_Equality(SceneName, prevscenetemp->fields.sceneName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkStackScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x0
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v6; // x0
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v7; // x20
  System_String_o *SceneName; // x0

  if ( (byte_434F735 & 1) == 0 )
  {
    sub_B70694(&SceneList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
    byte_434F735 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B7076C(0LL, *(_QWORD *)&type);
  v6 = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Peek(
         (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
         (const MethodInfo_2CFC3F0 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( v6 )
  {
    v7 = v6;
    if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    SceneName = SceneList__getSceneName(type, 0LL);
    LOBYTE(v6) = System_String__op_Equality(SceneName, *(System_String_o **)&v7->fields, 0LL);
  }
  return (char)v6;
}


void __fastcall AvalonSceneManager__destroySceneObject(AvalonSceneManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t i; // w19
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434F731 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
    byte_434F731 = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.prevscenetemp, 0LL, v2, v3, v4, v5, v6, v7);
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B7076C(0LL, v9);
  System_Collections_Generic_Stack_SceneTemp___Clear(
    scenestack,
    (const MethodInfo_2CFC01C *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.targetRoot, 0LL, v11, v12, v13, v14, v15, v16);
  if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  }
  for ( i = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1; i >= 0; --i )
  {
    if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(i, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
    UnityEngine_SceneManagement_SceneManager__UnloadScene_36141064(name, 0LL);
  }
}


void __fastcall AvalonSceneManager__endInitialize(
        AvalonSceneManager_o *this,
        SceneRootComponent_o *comp,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_sendData; // x0
  Il2CppObject *v9; // x20
  Il2CppObject *sendData; // t1
  __int64 v12; // x0
  __int64 v13; // x1

  sendData = this->fields.sendData;
  p_sendData = (BattleServantConfConponent_o *)&this->fields.sendData;
  v9 = sendData;
  p_sendData->klass = 0LL;
  sub_B70630(p_sendData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( !comp )
    sub_B7076C(v12, v13);
  ((void (__fastcall *)(SceneRootComponent_o *, Il2CppObject *, Il2CppMethodPointer))comp->klass->vtable._5_beginStartUp.method)(
    comp,
    v9,
    comp->klass->vtable._6_beginStartUp.methodPtr);
}


System_String_o *__fastcall AvalonSceneManager__getNowSceneName(AvalonSceneManager_o *this, const MethodInfo *method)
{
  struct SceneTemp_o *prevscenetemp; // x8

  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    return prevscenetemp->fields.sceneName;
  else
    return 0LL;
}


SceneRootComponent_o *__fastcall AvalonSceneManager__getNowSceneRootComponent(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  return this->fields.targetRoot;
}


System_String_o *__fastcall AvalonSceneManager__getStackSceneName(AvalonSceneManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x0
  System_String_o *result; // x0

  if ( (byte_434F733 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
    byte_434F733 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B7076C(0LL, method);
  result = (System_String_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Peek(
                                (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
                                (const MethodInfo_2CFC3F0 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( result )
    return (System_String_o *)result->fields;
  return result;
}


SceneRootComponent_o *__fastcall AvalonSceneManager__getTargetRoot(
        AvalonSceneManager_o *this,
        System_String_o *scenenName,
        const MethodInfo *method)
{
  int32_t *p_m_Handle; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  int32_t *v6; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v8; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v10; // x20
  unsigned int v11; // w22
  __int64 v13; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_434F730 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_434F730 = 1;
  }
  m_Handle = 0;
  if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  }
  m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(scenenName, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  Component_srcLineSprite = 0LL;
  if ( UnityEngine_SceneManagement_Scene__get_isLoaded((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL) )
  {
    v6 = &m_Handle;
    RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                        (UnityEngine_SceneManagement_Scene_o)v6,
                        0LL);
    if ( !RootGameObjects )
      goto LABEL_21;
    max_length = RootGameObjects->max_length;
    v10 = RootGameObjects;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
        {
          v13 = sub_B70798(RootGameObjects);
          sub_B70738(v13, 0LL);
        }
        RootGameObjects = (UnityEngine_GameObject_array *)v10->m_Items[v11];
        if ( !RootGameObjects )
          break;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)RootGameObjects,
                                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        RootGameObjects = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Inequality(
                                                            Component_srcLineSprite,
                                                            0LL,
                                                            0LL);
        if ( ((unsigned __int8)RootGameObjects & 1) != 0 )
        {
          if ( !Component_srcLineSprite )
            break;
          RootGameObjects = (UnityEngine_GameObject_array *)SceneRootComponent__checkSceneName(
                                                              (SceneRootComponent_o *)Component_srcLineSprite,
                                                              scenenName,
                                                              0LL);
          if ( ((unsigned __int8)RootGameObjects & 1) != 0 )
            return (SceneRootComponent_o *)Component_srcLineSprite;
        }
        max_length = v10->max_length;
        if ( (int)++v11 >= max_length )
          return 0LL;
      }
LABEL_21:
      sub_B7076C(RootGameObjects, v8);
    }
    return 0LL;
  }
  return (SceneRootComponent_o *)Component_srcLineSprite;
}


bool __fastcall AvalonSceneManager__popScene(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_20803580(this, fade, data, 0, v4);
}


bool __fastcall AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_20803580(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__popScene_20803580(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        bool isRefresh,
        const MethodInfo *method)
{
  void *scenestack; // x0
  const MethodInfo *v10; // x6
  int32_t v11; // w1

  if ( (byte_434F738 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_434F738 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  if ( *((int *)scenestack + 6) < 1 )
    return 0;
  scenestack = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                 (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
                 (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_B7076C(scenestack, *(_QWORD *)&fade);
  if ( isRefresh )
    v11 = 5;
  else
    v11 = 4;
  AvalonSceneManager__changeScene_20803340(this, v11, *((System_String_o **)scenestack + 2), fade, data, 0, v10);
  return 1;
}


bool __fastcall AvalonSceneManager__pushScene(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetRoot; // x23
  bool v10; // w0
  __int64 v11; // x1
  struct SceneTemp_o *prevscenetemp; // x23
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x0
  System_String_o *SceneName; // x0
  const MethodInfo *v15; // x6
  const MethodInfo *v17; // x6

  if ( (byte_434F737 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SceneList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    byte_434F737 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
  prevscenetemp = 0LL;
  if ( v10 )
  {
    prevscenetemp = this->fields.prevscenetemp;
    if ( prevscenetemp )
    {
      scenestack = this->fields.scenestack;
      if ( !scenestack )
        goto LABEL_19;
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
        (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
        (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)this->fields.prevscenetemp,
        (const MethodInfo_2CFC4EC *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( AvalonSceneManager__changeScene_20803340(this, 3, SceneName, fade, data, 0, v15) )
    return 1;
  if ( prevscenetemp )
  {
    scenestack = this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
        (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
        (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_20803340(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v17);
      return 0;
    }
LABEL_19:
    sub_B7076C(scenestack, v11);
  }
  return 0;
}


// attributes: thunk
void __fastcall AvalonSceneManager__reboot(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager__destroySceneObject(this, method);
}


bool __fastcall AvalonSceneManager__setTargetRootActive(
        AvalonSceneManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetRoot; // x21
  __int64 v6; // x1
  SceneRootComponent_o *v7; // x0

  if ( (byte_434F743 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F743 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
    return 0;
  v7 = this->fields.targetRoot;
  if ( !v7 )
    sub_B7076C(0LL, v6);
  return SceneRootComponent__SetSceneActive(v7, flag, 0LL);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__setupUI(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager__setupUI_d__37_o *v2; // x19

  if ( (byte_434F742 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager__setupUI_d__37_TypeInfo);
    byte_434F742 = 1;
  }
  v2 = (AvalonSceneManager__setupUI_d__37_o *)sub_B70764(AvalonSceneManager__setupUI_d__37_TypeInfo);
  AvalonSceneManager__setupUI_d__37___ctor(v2, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v2;
}


bool __fastcall AvalonSceneManager__transitionScene(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v10; // x6

  if ( (byte_434F739 & 1) == 0 )
  {
    sub_B70694(&SceneList_TypeInfo);
    byte_434F739 = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_20803340(this, 1, SceneName, fade, data, 0, v10);
}


bool __fastcall AvalonSceneManager__transitionSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x0
  const MethodInfo *v12; // x6

  if ( (byte_434F73B & 1) == 0 )
  {
    sub_B70694(&SceneList_TypeInfo);
    byte_434F73B = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_20803340(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_20803936(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_434F73A & 1) == 0 )
  {
    sub_B70694(&SceneList_TypeInfo);
    byte_434F73A = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_20804096(this, 1, SceneName, fade, data, callback, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_20804644(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_20803340(this, 1, scenename, fade, data, 0, v5);
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        int32_t 1__state,
        const MethodInfo_26444A0 *method)
{
  if ( !this )
    sub_B7076C(0LL, 1__state);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_26444D8 *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  int32_t v6; // w21
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  UIWidget_o *Component_UIWidget; // x22
  Il2CppClass *_0_T; // x23
  __int64 v11; // x23
  Il2CppClass *v12; // x22
  UnityEngine_Object_o *v13; // x0
  int32_t *v14; // x0
  System_String_o *name; // x20
  struct UnityEngine_AsyncOperation_o *v16; // x0
  struct UnityEngine_AsyncOperation_o **p_asyncOp_5__2; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  Il2CppObject *v25; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0
  AvalonSceneManager__UnloadSceneAsync_d__42_T__o *v34; // x0
  const MethodInfo_264476C *v35; // x1
  int v36; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_435B7E5 & 1) == 0 )
  {
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_435B7E5 = 1;
  }
  m_Handle = 0;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p_asyncOp_5__2 = &this->fields._asyncOp_5__2;
    this->fields.__1__state = -1;
LABEL_32:
    RootGameObjects = (UnityEngine_GameObject_array *)*p_asyncOp_5__2;
    if ( !*p_asyncOp_5__2 )
LABEL_37:
      sub_B7076C(RootGameObjects, method);
    if ( UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)RootGameObjects, 0LL) )
      goto LABEL_34;
    v36 = 0;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v24);
    this->fields.__2__current = v25;
    p__2__current = &this->fields.__2__current;
    sub_B70630((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v25, v27, v28, v29, v30, v31, v32);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      v6 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
      while ( (v6 & 0x80000000) == 0 )
      {
        if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
        }
        m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v6, 0LL).fields.m_Handle;
        p_m_Handle = &m_Handle;
        RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                            (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                            0LL);
        if ( !RootGameObjects )
          goto LABEL_37;
        if ( !RootGameObjects->max_length )
        {
          v33 = sub_B70798(RootGameObjects);
          sub_B70738(v33, 0LL);
        }
        Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                               RootGameObjects->m_Items[0],
                               (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        _0_T = method->klass->rgctx_data->_0_T;
        if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->klass->rgctx_data->_0_T);
        v11 = sub_B70754(Component_UIWidget, _0_T);
        v12 = method->klass->rgctx_data->_0_T;
        if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->klass->rgctx_data->_0_T);
        if ( v11 )
        {
          v13 = (UnityEngine_Object_o *)sub_B70754(v11, v12);
          if ( !v13 )
          {
            sub_B70A60(v11);
            return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                      v34,
                                      v35);
          }
        }
        else
        {
          v13 = 0LL;
        }
        --v6;
        if ( UnityEngine_Object__op_Implicit(v13, 0LL) )
        {
          v14 = &m_Handle;
          name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v14, 0LL);
          if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          }
          v16 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_36141344(name, 0LL);
          this->fields._asyncOp_5__2 = v16;
          p_asyncOp_5__2 = &this->fields._asyncOp_5__2;
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields._asyncOp_5__2,
            (System_Int32_array **)v16,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          goto LABEL_32;
        }
      }
LABEL_34:
      ActionExtensions__Call(this->fields.callback, 0LL);
      return 0;
    }
  }
  return result;
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_264476C *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_2644774 *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_AvalonSceneManager__UnloadSceneAsync_d__42_object__System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_26447B4 *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_26444D4 *method)
{
  ;
}


void __fastcall AvalonSceneManager___c__DisplayClass37_0___ctor(
        AvalonSceneManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AvalonSceneManager___c__DisplayClass37_0___setupUI_b__0(
        AvalonSceneManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndTerminalBG = 1;
}


void __fastcall AvalonSceneManager___c__DisplayClass37_0___setupUI_b__1(
        AvalonSceneManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndTerminalUI = 1;
}


void __fastcall AvalonSceneManager___c__DisplayClass37_0___setupUI_b__2(
        AvalonSceneManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndCommonBG = 1;
}


void __fastcall AvalonSceneManager___c__DisplayClass37_0___setupUI_b__3(
        AvalonSceneManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndEffect = 1;
}


bool __fastcall AvalonSceneManager___c__DisplayClass37_0___setupUI_b__4(
        AvalonSceneManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  return this->fields.loadEndTerminalBG
      && this->fields.loadEndTerminalUI
      && this->fields.loadEndCommonBG
      && this->fields.loadEndEffect;
}


void __fastcall AvalonSceneManager__changeNextSceneCoroutine_d__36___ctor(
        AvalonSceneManager__changeNextSceneCoroutine_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__changeNextSceneCoroutine_d__36__MoveNext(
        AvalonSceneManager__changeNextSceneCoroutine_d__36_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v8; // x19
  struct AvalonSceneManager_o *_4__this; // x24
  BattleServantConfConponent_o *p_newTargetRoot_5__2; // x21
  UnityEngine_Object_o *targetRoot; // x22
  bool v12; // w22
  bool v13; // w0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_Int32_array **v21; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  bool v29; // w20
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Object_o *newTargetRoot_5__2; // x22
  System_String_o *v38; // x22
  int32_t *v39; // x0
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v41; // x22
  unsigned int v42; // w27
  UnityEngine_GameObject_o *v43; // x23
  int v44; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v45; // x24
  int i; // w20
  AvalonSceneManager__changeNextSceneCoroutine_d__36_c **v47; // x8
  UnityEngine_Component_o *gameObject; // x25
  UnityEngine_Object_c *v49; // x0
  int v50; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v51; // x23
  unsigned int v52; // w20
  AvalonSceneManager__changeNextSceneCoroutine_d__36_c **v53; // x8
  UnityEngine_Component_o *v54; // x24
  UnityEngine_Object_c *v55; // x0
  UnityEngine_Object_o *klass; // x22
  System_String_o *scenename; // x22
  int32_t *p_m_Handle; // x0
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_Object_o *v66; // x22
  System_String_o *v67; // x21
  BattleServantConfConponent_o *v68; // x19
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  UnityEngine_Object_o *v75; // x22
  UnityEngine_Object_o *v76; // x22
  AvalonSceneManager__changeNextSceneCoroutine_d__36_c *v77; // x8
  void (*v78)(void); // x9
  SceneRootComponent_o *v79; // x23
  SceneTemp_o *v80; // x22
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o **p_targetRoot; // x21
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  Il2CppObject *v101; // x19
  BattleServantConfConponent_o *p_sendData; // x24
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v105; // x22
  UnityEngine_Object_o *v106; // x21
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_o *v113; // x20
  BattleServantConfConponent_o *v114; // x19
  __int64 v115; // x0
  struct AvalonSceneManager_o *v116; // [xsp+0h] [xbp-60h]
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_43509E2 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponents_Component___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_B70694(&SceneTemp_TypeInfo);
    sub_B70694(&StringLiteral_2849/*"BattleScriptScene"*/);
    sub_B70694(&StringLiteral_2848/*"BattleScene"*/);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_43509E2 = 1;
  }
  m_Handle = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields._newTargetRoot_5__2 = 0LL;
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2;
      v8->fields.__1__state = -1;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_119;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
      v13 = System_String__op_Equality(v8->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !v12 )
        goto LABEL_12;
      if ( v13 )
        goto LABEL_13;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_119;
      v13 = SceneRootComponent__checkSceneName((SceneRootComponent_o *)this, v8->fields.scenename, 0LL);
LABEL_12:
      if ( v13 )
      {
LABEL_13:
        v20 = (System_Int32_array **)_4__this->fields.targetRoot;
        p_newTargetRoot_5__2->klass = (BattleServantConfConponent_c *)v20;
        sub_B70630((BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2, v20, v14, v15, v16, v17, v18, v19);
      }
      if ( v8->fields.changeType <= 1u
        && System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_2849/*"BattleScriptScene"*/, 0LL)
        && System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_2848/*"BattleScene"*/, 0LL) )
      {
        v21 = (System_Int32_array **)AvalonSceneManager__setupUI(_4__this, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v21;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B70630(p__2__current, v21, v23, v24, v25, v26, v27, v28);
        v29 = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return v29;
      }
LABEL_62:
      klass = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
        goto LABEL_80;
      scenename = v8->fields.scenename;
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(scenename, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_SceneManagement_Scene__get_isLoaded(
                                                                       (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                                                       0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_72;
      if ( !_4__this )
        goto LABEL_119;
      v59 = (System_Int32_array **)AvalonSceneManager__getTargetRoot(_4__this, v8->fields.scenename, 0LL);
      v8->fields._newTargetRoot_5__2 = (struct SceneRootComponent_o *)v59;
      sub_B70630(p_newTargetRoot_5__2, v59, v60, v61, v62, v63, v64, v65);
LABEL_72:
      v66 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v66, 0LL, 0LL) )
        goto LABEL_80;
      v67 = v8->fields.scenename;
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      v29 = 1;
      UnityEngine_SceneManagement_SceneManager__LoadScene(v67, 1, 0LL);
      v8->fields.__2__current = 0LL;
      v68 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B70630(v68, 0LL, v69, v70, v71, v72, v73, v74);
      *(_DWORD *)&v68[-1].fields.isOpenAfter = 2;
      return v29;
    case 1:
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2;
      v8->fields.__1__state = -1;
      goto LABEL_62;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_119;
      v30 = (System_Int32_array **)AvalonSceneManager__getTargetRoot(_4__this, v8->fields.scenename, 0LL);
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2;
      v8->fields._newTargetRoot_5__2 = (struct SceneRootComponent_o *)v30;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2, v30, v31, v32, v33, v34, v35, v36);
      newTargetRoot_5__2 = (UnityEngine_Object_o *)v8->fields._newTargetRoot_5__2;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(newTargetRoot_5__2, 0LL, 0LL) )
        return 0;
      v38 = v8->fields.scenename;
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v38, 0LL).fields.m_Handle;
      v39 = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                                                                       (UnityEngine_SceneManagement_Scene_o)v39,
                                                                       0LL);
      if ( !this )
        goto LABEL_119;
      _2__current = (int)this->fields.__2__current;
      v41 = this;
      if ( _2__current < 1 )
        goto LABEL_80;
      v116 = _4__this;
      v42 = 0;
      break;
    case 3:
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2;
      v8->fields.__1__state = -1;
      goto LABEL_94;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v42 >= _2__current )
    {
LABEL_120:
      v115 = sub_B70798(this);
      sub_B70738(v115, 0LL);
    }
    v43 = (UnityEngine_GameObject_o *)*((_QWORD *)&v41->fields.__4__this + (int)v42);
    if ( !v43 )
      goto LABEL_119;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                                                     v43,
                                                                     (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !this )
      goto LABEL_119;
    v44 = (int)this->fields.__2__current;
    v45 = this;
    if ( v44 >= 1 )
    {
      for ( i = 0; i < v44; ++i )
      {
        if ( i >= (unsigned int)v44 )
          goto LABEL_120;
        v47 = &v45->klass + i;
        gameObject = (UnityEngine_Component_o *)v47[4];
        if ( !gameObject )
          goto LABEL_119;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_Component__GetComponents_iTween_(
                                                                         (UnityEngine_Component_o *)v47[4],
                                                                         (const MethodInfo_1BE4328 *)Method_UnityEngine_Component_GetComponents_Component___);
        if ( !this )
          goto LABEL_119;
        if ( LODWORD(this->fields.__2__current) == 1 )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
            || UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            goto LABEL_44;
          }
          v49 = UnityEngine_Object_TypeInfo;
        }
        else
        {
          v49 = UnityEngine_Object_TypeInfo;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
            || UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            goto LABEL_44;
          }
        }
        j_il2cpp_runtime_class_init_0(v49);
LABEL_44:
        UnityEngine_Object__DestroyImmediate_36067420((UnityEngine_Object_o *)gameObject, 0LL);
        v44 = (int)v45->fields.__2__current;
      }
    }
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                                                     v43,
                                                                     (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !this )
      goto LABEL_119;
    v50 = (int)this->fields.__2__current;
    v51 = this;
    if ( v50 >= 1 )
      break;
LABEL_59:
    _2__current = (int)v41->fields.__2__current;
    if ( (int)++v42 >= _2__current )
    {
      _4__this = v116;
LABEL_80:
      v75 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_Object__op_Inequality(v75, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !_4__this )
          goto LABEL_119;
        v76 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
        {
          if ( !_4__this->fields.prevscenetemp )
            goto LABEL_106;
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)_4__this->fields.targetRoot;
          if ( this )
          {
            v77 = this->klass;
            if ( v8->fields.changeType == 3 )
              v78 = (void (*)(void))v77->vtable._8_System_Collections_IEnumerator_Reset.method;
            else
              v78 = (void (*)(void))v77->vtable._7_System_Collections_IEnumerator_get_Current.method;
            v78();
LABEL_106:
            v105 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v106 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v105, v106, 0LL) )
            {
LABEL_118:
              v8->fields.__2__current = 0LL;
              v114 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B70630(v114, 0LL, v107, v108, v109, v110, v111, v112);
              *(_DWORD *)&v114[-1].fields.isOpenAfter = 3;
              return 1;
            }
            this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)_4__this->fields.targetRoot;
            if ( this )
            {
              if ( v8->fields.changeType == 5 )
              {
                v113 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                }
                UnityEngine_SceneManagement_SceneManager__UnloadScene_36141064(v113, 0LL);
                goto LABEL_118;
              }
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                goto LABEL_118;
              }
            }
          }
LABEL_119:
          sub_B7076C(this, method);
        }
LABEL_94:
        v79 = (SceneRootComponent_o *)p_newTargetRoot_5__2->klass;
        v80 = (SceneTemp_o *)sub_B70764(SceneTemp_TypeInfo);
        SceneTemp___ctor_17528252(v80, v79, 0LL);
        if ( !_4__this )
          goto LABEL_119;
        _4__this->fields.prevscenetemp = v80;
        sub_B70630(
          (BattleServantConfConponent_o *)&_4__this->fields.prevscenetemp,
          (System_Int32_array **)v80,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86);
        v87 = (System_Int32_array **)p_newTargetRoot_5__2->klass;
        p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o **)&_4__this->fields.targetRoot;
        _4__this->fields.targetRoot = (struct SceneRootComponent_o *)v87;
        sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.targetRoot, v87, v89, v90, v91, v92, v93, v94);
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)_4__this->fields.targetRoot;
        if ( !this )
          goto LABEL_119;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
        if ( !this )
          goto LABEL_119;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        _4__this->fields.isBusySceneChange = 0;
        if ( (v8->fields.changeType & 0xFFFFFFFE) == 4 )
        {
          sendData = _4__this->fields.sendData;
          p_sendData = (BattleServantConfConponent_o *)&_4__this->fields.sendData;
          v101 = sendData;
          p_sendData->klass = 0LL;
          sub_B70630(p_sendData, 0LL, v95, v96, v97, v98, v99, v100);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)p_sendData[-1].fields.BattleAssetUIAtlas;
          if ( !this )
            goto LABEL_119;
          ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__36_o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
            this,
            v101,
            this->klass[1]._1.name);
        }
        else
        {
          this = *p_targetRoot;
          if ( !*p_targetRoot )
            goto LABEL_119;
          ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__36_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
            this,
            this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
        }
      }
      return 0;
    }
  }
  v52 = 0;
  while ( 1 )
  {
    if ( v52 >= v50 )
      goto LABEL_120;
    v53 = &v51->klass + (int)v52;
    v54 = (UnityEngine_Component_o *)v53[4];
    if ( !v54 )
      goto LABEL_119;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_Component__GetComponents_iTween_(
                                                                     (UnityEngine_Component_o *)v53[4],
                                                                     (const MethodInfo_1BE4328 *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !this )
      goto LABEL_119;
    if ( LODWORD(this->fields.__2__current) == 2 )
    {
      v54 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v54, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_58;
      }
      v55 = UnityEngine_Object_TypeInfo;
    }
    else
    {
      v55 = UnityEngine_Object_TypeInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_58;
      }
    }
    j_il2cpp_runtime_class_init_0(v55);
LABEL_58:
    UnityEngine_Object__DestroyImmediate_36067420((UnityEngine_Object_o *)v54, 0LL);
    v50 = (int)v51->fields.__2__current;
    if ( (int)++v52 >= v50 )
      goto LABEL_59;
  }
}


Il2CppObject *__fastcall AvalonSceneManager__changeNextSceneCoroutine_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changeNextSceneCoroutine_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__changeNextSceneCoroutine_d__36__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changeNextSceneCoroutine_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__36_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall AvalonSceneManager__changeNextSceneCoroutine_d__36__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changeNextSceneCoroutine_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__changeNextSceneCoroutine_d__36__System_IDisposable_Dispose(
        AvalonSceneManager__changeNextSceneCoroutine_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AvalonSceneManager__changePrevSceneCoroutine_d__35___ctor(
        AvalonSceneManager__changePrevSceneCoroutine_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__changePrevSceneCoroutine_d__35__MoveNext(
        AvalonSceneManager__changePrevSceneCoroutine_d__35_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AvalonSceneManager__changePrevSceneCoroutine_d__35_o *v8; // x19
  struct AvalonSceneManager_o *_4__this; // x20
  AvalonSceneManager_c *v10; // x0
  int32_t fadeType; // w8
  float duration_5__2; // s0
  int32_t v13; // w1
  BattleServantConfConponent_o *v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int v21; // w8
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  bool result; // w0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Object_o *targetRoot; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  AvalonSceneManager__changePrevSceneCoroutine_d__35_o *v48; // x22
  UnityEngine_Object_o *v49; // x21
  int32_t v50; // w19
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *v53; // x21
  BattleServantConfConponent_o *p__2__current; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_43509E3 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)sub_B70694(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_43509E3 = 1;
  }
  m_Handle = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_80;
      if ( !_4__this->fields.fadeType )
        goto LABEL_35;
      v10 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v10 = AvalonSceneManager_TypeInfo;
      }
      LODWORD(v8->fields._duration_5__2) = LODWORD(v10->static_fields->DEFAULT_FADE_TIME);
      if ( (unsigned int)(_4__this->fields.fadeType - 1) > 1 )
        goto LABEL_12;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_80;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
LABEL_12:
      if ( !v8->fields.fadeTimeSkip )
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B70630(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      v8->fields._duration_5__2 = 0.0;
LABEL_15:
      fadeType = _4__this->fields.fadeType;
      if ( fadeType == 2 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_80;
        duration_5__2 = v8->fields._duration_5__2;
        v13 = 2;
      }
      else
      {
        if ( fadeType != 1 )
          goto LABEL_31;
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_80;
        duration_5__2 = v8->fields._duration_5__2;
        v13 = 1;
      }
      CommonUI__maskFadeout((CommonUI_o *)this, v13, duration_5__2, 0LL, 0LL);
LABEL_31:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_80;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        v8->fields.__2__current = 0LL;
        v14 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B70630(v14, 0LL, v29, v30, v31, v32, v33, v34);
        v21 = 2;
LABEL_34:
        *(_DWORD *)&v14[-1].fields.isOpenAfter = v21;
        return 1;
      }
LABEL_35:
      MainMenuBar__setButtonActive(0, 0LL);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_80;
      CommonUI__InitTurotialArrowMark((CommonUI_o *)this, 0LL);
      if ( v8->fields.changeType <= 1u )
      {
        if ( !_4__this )
          goto LABEL_80;
        if ( _4__this->fields.prevscenetemp )
        {
          targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)_4__this->fields.targetRoot;
            if ( !this )
              goto LABEL_80;
            ((void (__fastcall *)(AvalonSceneManager__changePrevSceneCoroutine_d__35_o *, Il2CppMethodPointer))this->klass->vtable._7_System_Collections_IEnumerator_get_Current.method)(
              this,
              this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr);
          }
          _4__this->fields.prevscenetemp = 0LL;
          sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.prevscenetemp, 0LL, v42, v43, v44, v45, v46, v47);
        }
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)_4__this->fields.scenestack;
        if ( this )
        {
          while ( SLODWORD(this->fields.__2__current) > 0 )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                                                             (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
                                                                             (const MethodInfo_2CFC460 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
            if ( !this )
              goto LABEL_80;
            v48 = this;
            v49 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(
                                            _4__this,
                                            *(System_String_o **)&this->fields.__1__state,
                                            0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Object__op_Inequality(
                                                                             v49,
                                                                             0LL,
                                                                             0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v49 )
                goto LABEL_80;
              if ( SceneRootComponent__checkSceneName(
                     (SceneRootComponent_o *)v49,
                     *(System_String_o **)&v48->fields.__1__state,
                     0LL) )
              {
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v49,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_80;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                (*(void (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&v49->klass[1]._1.this_arg.bits)(
                  v49,
                  v49->klass[1]._1.element_class);
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v49,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_80;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
            }
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)_4__this->fields.scenestack;
            if ( !this )
              goto LABEL_80;
          }
          if ( !v8->fields.changeType )
          {
            v8->fields.__2__current = 0LL;
            v14 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B70630(v14, 0LL, v35, v36, v37, v38, v39, v40);
            v21 = 3;
            goto LABEL_34;
          }
          if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          }
          v50 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
          if ( v50 >= 0 )
          {
            while ( 1 )
            {
              if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
              }
              m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v50, 0LL).fields.m_Handle;
              p_m_Handle = &m_Handle;
              name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
              v53 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(_4__this, name, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Object__op_Inequality(
                                                                               v53,
                                                                               0LL,
                                                                               0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v53 )
                  goto LABEL_80;
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v53,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_80;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              if ( --v50 < 0 )
                return 0;
            }
          }
          return 0;
        }
LABEL_80:
        sub_B7076C(this, method);
      }
      return 0;
    case 1:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_80;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_31;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_80;
      AvalonSceneManager__destroySceneObject(_4__this, 0LL);
      v8->fields.__2__current = 0LL;
      v14 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B70630(v14, 0LL, v15, v16, v17, v18, v19, v20);
      v21 = 4;
      goto LABEL_34;
    case 4:
      v8->fields.__1__state = -1;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_80;
      AtlasManager__ReleaseNoneResidentAtlas((AtlasManager_o *)this, 0LL);
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      CommonEffectManager__ReleaseSkinEffects(0LL);
      v8->fields.__2__current = 0LL;
      v14 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B70630(v14, 0LL, v22, v23, v24, v25, v26, v27);
      v21 = 5;
      goto LABEL_34;
    case 5:
      result = 0;
      v8->fields.__1__state = -1;
      return result;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AvalonSceneManager__changePrevSceneCoroutine_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changePrevSceneCoroutine_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__changePrevSceneCoroutine_d__35__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changePrevSceneCoroutine_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__35_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall AvalonSceneManager__changePrevSceneCoroutine_d__35__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changePrevSceneCoroutine_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__changePrevSceneCoroutine_d__35__System_IDisposable_Dispose(
        AvalonSceneManager__changePrevSceneCoroutine_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AvalonSceneManager__changeSceneCoroutine_d__34___ctor(
        AvalonSceneManager__changeSceneCoroutine_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__changeSceneCoroutine_d__34__MoveNext(
        AvalonSceneManager__changeSceneCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager__changeSceneCoroutine_d__34_o *v2; // x19
  AvalonSceneManager_o *_4__this; // x20
  System_String_o *scenename; // x21
  int v5; // w21
  bool v6; // w0
  bool v7; // w0
  bool v8; // w0
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  bool result; // w0
  System_Action_o *callback; // x0
  System_Int32_array **v18; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int v26; // w8
  int32_t changeType; // w8
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_WaitForEndOfFrame_o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  bool v42; // w0
  bool v43; // w0
  int32_t ConnectMarkEventId; // w1
  bool v45; // w2
  bool v46; // w22
  bool v47; // zf
  AvalonSceneManager__changeSceneCoroutine_d__34_o *v48; // x21

  v2 = this;
  if ( (byte_43509E4 & 1) == 0 )
  {
    sub_B70694(&System_GC_TypeInfo);
    sub_B70694(&SceneList_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_43509E4 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      scenename = v2->fields.scenename;
      if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SceneList__getSceneType(scenename, 0LL);
      if ( (unsigned int)((_DWORD)this - 10) <= 0x3E
        && ((1LL << ((unsigned __int8)this - 10)) & 0x4004000053000001LL) != 0 )
      {
        if ( !_4__this )
          goto LABEL_55;
        v5 = (int)this;
        v6 = AvalonSceneManager__checkNowScene(_4__this, 10, 0LL);
        if ( v5 != 38 || !v6 )
        {
          v7 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
          if ( v5 != 10 || !v7 )
          {
            v8 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
            if ( v5 != 38 || !v8 )
            {
              v42 = AvalonSceneManager__checkNowScene(_4__this, 39, 0LL);
              if ( v5 == 40 && v42 || (v43 = AvalonSceneManager__checkNowScene(_4__this, 39, 0LL), v5 == 60) && v43 )
              {
                this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !this )
                  goto LABEL_55;
                ConnectMarkEventId = 0;
                v45 = 0;
              }
              else
              {
                v46 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
                this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v47 = v5 == 34;
                v48 = this;
                if ( v47 && v46 )
                {
                  if ( !this )
                    goto LABEL_55;
                  v45 = 1;
                  ConnectMarkEventId = 0;
                }
                else
                {
                  this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)TerminalPramsManager_TypeInfo;
                  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  }
                  if ( !v48 )
                    goto LABEL_55;
                  v45 = 1;
                  this = v48;
                  ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
                }
              }
              CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, ConnectMarkEventId, v45, 0LL);
              goto LABEL_18;
            }
          }
        }
        this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0LL);
LABEL_18:
          v9 = (System_Int32_array **)AvalonSceneManager__changePrevSceneCoroutine(
                                        _4__this,
                                        v2->fields.changeType,
                                        v2->fields.scenename,
                                        v2->fields.fadeTimeSkip,
                                        0LL);
          v2->fields.__2__current = (Il2CppObject *)v9;
          sub_B70630((BattleServantConfConponent_o *)&v2->fields.__2__current, v9, v10, v11, v12, v13, v14, v15);
          result = 1;
          v2->fields.__1__state = 1;
          return result;
        }
      }
      else
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
          if ( _4__this )
            goto LABEL_18;
        }
      }
LABEL_55:
      sub_B7076C(this, method);
    case 1:
      changeType = v2->fields.changeType;
      v2->fields.__1__state = -1;
      if ( changeType )
      {
        if ( !_4__this )
          goto LABEL_55;
LABEL_28:
        v28 = (System_Int32_array **)AvalonSceneManager__changeNextSceneCoroutine(
                                       _4__this,
                                       v2->fields.changeType,
                                       v2->fields.scenename,
                                       0LL);
        v2->fields.__2__current = (Il2CppObject *)v28;
        sub_B70630((BattleServantConfConponent_o *)&v2->fields.__2__current, v28, v29, v30, v31, v32, v33, v34);
        v2->fields.__1__state = 4;
      }
      else
      {
        v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_44134460(0LL);
        v2->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B70630(p__2__current, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
        v26 = 2;
LABEL_33:
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v26;
      }
      return 1;
    case 2:
      v2->fields.__1__state = -1;
      this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      v18 = (System_Int32_array **)AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v18;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B70630(p__2__current, v18, v20, v21, v22, v23, v24, v25);
      v26 = 3;
      goto LABEL_33;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      goto LABEL_28;
    case 4:
      callback = v2->fields.callback;
      v2->fields.__1__state = -1;
      ActionExtensions__Call(callback, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AvalonSceneManager__changeSceneCoroutine_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changeSceneCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__changeSceneCoroutine_d__34__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changeSceneCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_AvalonSceneManager__changeSceneCoroutine_d__34_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall AvalonSceneManager__changeSceneCoroutine_d__34__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changeSceneCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__changeSceneCoroutine_d__34__System_IDisposable_Dispose(
        AvalonSceneManager__changeSceneCoroutine_d__34_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AvalonSceneManager__setupUI_d__37___ctor(
        AvalonSceneManager__setupUI_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__setupUI_d__37__MoveNext(
        AvalonSceneManager__setupUI_d__37_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v5; // x20
  AtlasManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w21
  int32_t v9; // w8
  System_Action_o *v10; // x22
  System_Action_o *v11; // x22
  System_Action_o *v12; // x22
  System_Action_o *v13; // x22
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitUntil_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_43509E5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_B70694(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__0__);
    sub_B70694(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__1__);
    sub_B70694(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__2__);
    sub_B70694(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__3__);
    sub_B70694(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__4__);
    sub_B70694(&AvalonSceneManager___c__DisplayClass37_0_TypeInfo);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    byte_43509E5 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v9 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v5 = sub_B70764(AvalonSceneManager___c__DisplayClass37_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    if ( !v5 )
      goto LABEL_46;
    *(_DWORD *)(v5 + 16) = 0;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v8 = OptionManager__isSavedMemoryMode(0LL) ? 1 : 10;
    Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData(Instance, 7, 0LL) )
    {
      *(_BYTE *)(v5 + 16) = 1;
    }
    else
    {
      v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v10, 7, v8, 0LL);
    }
    Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData(Instance, 1, 0LL) )
    {
      *(_BYTE *)(v5 + 17) = 1;
    }
    else
    {
      v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__1__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v11, 1, v8, 0LL);
    }
    Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_B7076C(Instance, v7);
    if ( AtlasManager__isLoadedSkinData(Instance, 2, 0LL) )
    {
      *(_BYTE *)(v5 + 18) = 1;
    }
    else
    {
      v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v12,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__2__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v12, 2, v8, 0LL);
    }
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    if ( CommonEffectManager__IsLoadedSkinData(0LL) )
    {
      *(_BYTE *)(v5 + 19) = 1;
    }
    else
    {
      v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__3__,
        0LL);
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      CommonEffectManager__LoadSkinEffects(v13, v8, 0LL);
    }
    v14 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__4__,
      (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
    v15 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v15, v14, 0LL);
    this->fields.__2__current = (Il2CppObject *)v15;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v9 = 1;
    result = 1;
  }
  this->fields.__1__state = v9;
  return result;
}


Il2CppObject *__fastcall AvalonSceneManager__setupUI_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__setupUI_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__setupUI_d__37__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__setupUI_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_AvalonSceneManager__setupUI_d__37_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall AvalonSceneManager__setupUI_d__37__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__setupUI_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__setupUI_d__37__System_IDisposable_Dispose(
        AvalonSceneManager__setupUI_d__37_o *this,
        const MethodInfo *method)
{
  ;
}