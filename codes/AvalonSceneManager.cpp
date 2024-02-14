void __fastcall AvalonSceneManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42115E8 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v1);
    byte_42115E8 = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void __fastcall AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v6; // x20

  if ( (byte_42115E7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Stack_SceneTemp__TypeInfo, v5);
    byte_42115E7 = 1;
  }
  v6 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B0D974(
                                                                                             System_Collections_Generic_Stack_SceneTemp__TypeInfo,
                                                                                             method,
                                                                                             v2);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v6,
    (const MethodInfo_2A98B4C *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v6;
  sub_B0D840(&this->fields.scenestack, v6);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_1705BB0 *method)
{
  AvalonSceneManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct SceneRootComponent_o *targetRoot; // x23
  Il2CppClass *_0_T; // x22
  UnityEngine_Component_o *v13; // x0
  SceneRootComponent_o *v14; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  System_Type_o *v17; // x0
  struct PlayMakerGUI_o *playMakerGUI; // x8
  System_String_o *SceneName; // x19
  AvalonSceneManager_o *v20; // x0
  const MethodInfo_1705D94 *v21; // x1
  System_RuntimeTypeHandle_o v22; // 0:w0.4
  System_RuntimeTypeHandle_o v23; // 0:w0.4

  v7 = this;
  if ( (byte_42142FC & 1) == 0 )
  {
    sub_B0D8A4(&BattleRootComponent_var, *(_QWORD *)&sceneType);
    sub_B0D8A4(&BattleRootComponent_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v9);
    this = (AvalonSceneManager_o *)sub_B0D8A4(&System_Type_TypeInfo, v10);
    byte_42142FC = 1;
  }
  if ( !v7 )
    goto LABEL_24;
  this = (AvalonSceneManager_o *)AvalonSceneManager__checkNowScene(v7, sceneType, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  targetRoot = v7->fields.targetRoot;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    this = (AvalonSceneManager_o *)sub_AA65A4(method->rgctx_data->_0_T);
  if ( !targetRoot )
    goto LABEL_24;
  v13 = (UnityEngine_Component_o *)sub_B0D964(targetRoot, _0_T);
  if ( !v13 )
  {
    v20 = (AvalonSceneManager_o *)sub_B0DC70(targetRoot);
    AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(v20, v21);
    return;
  }
  v14 = (SceneRootComponent_o *)v13;
  this = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
  if ( !this )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v22.fields.value = (int)_1_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v22, 0LL);
  v23.fields.value = (int)BattleRootComponent_var;
  v17 = System_Type__GetTypeFromHandle(v23, 0LL);
  if ( !System_Type__op_Equality(TypeFromHandle, v17, 0LL) )
    goto LABEL_18;
  this = (AvalonSceneManager_o *)sub_B0D964(v14, BattleRootComponent_TypeInfo);
  if ( !this
    || (this = (AvalonSceneManager_o *)sub_B0D964(v14, BattleRootComponent_TypeInfo),
        (playMakerGUI = this->fields.playMakerGUI) == 0LL)
    || (this = *(AvalonSceneManager_o **)&playMakerGUI[9].fields.GUITextureStateLabels) == 0LL )
  {
LABEL_24:
    sub_B0D97C(this);
  }
  BattleResultComponent__EndResult((BattleResultComponent_o *)this, 0LL);
LABEL_18:
  if ( forceUnload )
  {
    SceneName = SceneRootComponent__getSceneName(v14, 0LL);
    if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    UnityEngine_SceneManagement_SceneManager__UnloadScene_35009132(SceneName, 0LL);
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
  if ( (byte_42115E6 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_B0D8A4(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_42115E6 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_B0D97C(this);
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
  if ( (byte_42115D4 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_B0D8A4(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_42115D4 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_B0D97C(this);
  return scenestack->fields._size > 0;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__UnloadSceneAsync_TerminalSceneComponent_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_1705F74 *method)
{
  Il2CppClass *_0_AvalonSceneManager__UnloadSceneAsync_d__42_T; // x21
  __int64 v6; // x0
  const MethodInfo_1705F74_RGCTXs *rgctx_data; // x8
  __int64 v8; // x20
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  _0_AvalonSceneManager__UnloadSceneAsync_d__42_T = method->rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__42_T_;
  if ( (BYTE2(_0_AvalonSceneManager__UnloadSceneAsync_d__42_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__42_T_);
  v6 = sub_B0D974(_0_AvalonSceneManager__UnloadSceneAsync_d__42_T, callback, method);
  rgctx_data = method->rgctx_data;
  v8 = v6;
  v9 = ((__int64 (__fastcall *)(__int64, _QWORD))rgctx_data->_1_AvalonSceneManager__UnloadSceneAsync_d__42_T___ctor->methodPointer)(
         v6,
         0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 32) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)callback, v10, v11, v12, v13, v14, v15);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
        AvalonSceneManager_o *this,
        const MethodInfo_1705D94 *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t i; // w20
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  UIWidget_o *Component_UIWidget; // x21
  Il2CppClass *_0_T; // x22
  __int64 v10; // x22
  Il2CppClass *v11; // x21
  UnityEngine_Object_o *v12; // x0
  int32_t *v13; // x0
  System_String_o *name; // x21
  __int64 v15; // x0
  AvalonSceneManager_o *v16; // x0
  System_Action_o *v17; // x1
  const MethodInfo_1705F74 *v18; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42142FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v4);
    byte_42142FD = 1;
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
      sub_B0D97C(0LL);
    if ( !RootGameObjects->max_length )
    {
      v15 = sub_B0D9A8(RootGameObjects);
      sub_B0D948(v15, 0LL);
    }
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           RootGameObjects->m_Items[0],
                           (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(method->rgctx_data->_0_T);
    v10 = sub_B0D964(Component_UIWidget, _0_T);
    v11 = method->rgctx_data->_0_T;
    if ( (BYTE2(v11->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(method->rgctx_data->_0_T);
    if ( v10 )
    {
      v12 = (UnityEngine_Object_o *)sub_B0D964(v10, v11);
      if ( !v12 )
      {
        v16 = (AvalonSceneManager_o *)sub_B0DC70(v10);
        AvalonSceneManager__UnloadSceneAsync_TerminalSceneComponent_(v16, v17, v18);
        return;
      }
    }
    else
    {
      v12 = 0LL;
    }
    if ( UnityEngine_Object__op_Implicit(v12, 0LL) )
    {
      v13 = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v13, 0LL);
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      UnityEngine_SceneManagement_SceneManager__UnloadScene_35009132(name, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__changeNextSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        const MethodInfo *method)
{
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v7; // x22
  __int64 v8; // x0

  if ( (byte_42115E3 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager__changeNextSceneCoroutine_d__36_TypeInfo, *(_QWORD *)&changeType);
    byte_42115E3 = 1;
  }
  v7 = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)sub_B0D974(
                                                                 AvalonSceneManager__changeNextSceneCoroutine_d__36_TypeInfo,
                                                                 *(_QWORD *)&changeType,
                                                                 scenename);
  AvalonSceneManager__changeNextSceneCoroutine_d__36___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  v7->fields.__4__this = this;
  sub_B0D840(&v7->fields.__4__this, this);
  v7->fields.changeType = changeType;
  v7->fields.scenename = scenename;
  sub_B0D840(&v7->fields.scenename, scenename);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__changePrevSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  AvalonSceneManager__changePrevSceneCoroutine_d__35_o *v8; // x22
  __int64 v9; // x0

  if ( (byte_42115E2 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager__changePrevSceneCoroutine_d__35_TypeInfo, *(_QWORD *)&changeType);
    byte_42115E2 = 1;
  }
  v8 = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)sub_B0D974(
                                                                 AvalonSceneManager__changePrevSceneCoroutine_d__35_TypeInfo,
                                                                 *(_QWORD *)&changeType,
                                                                 scenename);
  AvalonSceneManager__changePrevSceneCoroutine_d__35___ctor(v8, 0, 0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  v8->fields.__4__this = this;
  sub_B0D840(&v8->fields.__4__this, this);
  v8->fields.changeType = changeType;
  v8->fields.fadeTimeSkip = fadeTimeSkip;
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v10; // x6

  if ( (byte_42115DE & 1) == 0 )
  {
    sub_B0D8A4(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_42115DE = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_18658776(this, 2, SceneName, fade, data, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__changeSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        bool fadeTimeSkip,
        System_Action_o *callback,
        const MethodInfo *method)
{
  AvalonSceneManager__changeSceneCoroutine_d__34_o *v11; // x23
  __int64 v12; // x0

  if ( (byte_42115E1 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager__changeSceneCoroutine_d__34_TypeInfo, *(_QWORD *)&changeType);
    byte_42115E1 = 1;
  }
  v11 = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)sub_B0D974(
                                                              AvalonSceneManager__changeSceneCoroutine_d__34_TypeInfo,
                                                              *(_QWORD *)&changeType,
                                                              scenename);
  AvalonSceneManager__changeSceneCoroutine_d__34___ctor(v11, 0, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v11->fields.__4__this = this;
  sub_B0D840(&v11->fields.__4__this, this);
  v11->fields.changeType = changeType;
  v11->fields.scenename = scenename;
  sub_B0D840(&v11->fields.scenename, scenename);
  v11->fields.fadeTimeSkip = fadeTimeSkip;
  v11->fields.callback = callback;
  sub_B0D840(&v11->fields.callback, callback);
  return (System_Collections_IEnumerator_o *)v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_18658776(
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
  const MethodInfo *v15; // x5
  System_Collections_IEnumerator_o *v16; // x0

  if ( (byte_42115DF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, *(_QWORD *)&changeType);
    byte_42115DF = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CrashReporter__LeaveBreadcrumb(Instance, scenename, 0LL);
  v13 = 1;
  this->fields.fadeType = fade;
  this->fields.isBusySceneChange = 1;
  this->fields.sendData = data;
  sub_B0D840(&this->fields.sendData, data);
  v16 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0LL, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_18659532(
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
  const MethodInfo *v15; // x5
  System_Collections_IEnumerator_o *v16; // x0

  if ( (byte_42115E0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, *(_QWORD *)&changeType);
    byte_42115E0 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CrashReporter__LeaveBreadcrumb(Instance, scenename, 0LL);
  v13 = 1;
  this->fields.fadeType = fade;
  this->fields.isBusySceneChange = 1;
  this->fields.sendData = data;
  sub_B0D840(&this->fields.sendData, data);
  v16 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, 0, callback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
  return v13;
}


bool __fastcall AvalonSceneManager__changeScene_18660104(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_18658776(this, 2, scenename, fade, data, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkLoadedScene(
        AvalonSceneManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *SceneName; // x19
  int32_t *p_m_Handle; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42115D8 & 1) == 0 )
  {
    sub_B0D8A4(&SceneList_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v4);
    byte_42115D8 = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkNowScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  System_String_o *SceneName; // x0
  struct SceneTemp_o *prevscenetemp; // x8

  if ( (byte_42115D6 & 1) == 0 )
  {
    sub_B0D8A4(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_42115D6 = 1;
  }
  if ( !this->fields.prevscenetemp )
    return 0;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  prevscenetemp = this->fields.prevscenetemp;
  if ( !prevscenetemp )
    sub_B0D97C(SceneName);
  return System_String__op_Equality(SceneName, prevscenetemp->fields.sceneName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkStackScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x0
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v7; // x0
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v8; // x20
  System_String_o *SceneName; // x0

  if ( (byte_42115D7 & 1) == 0 )
  {
    sub_B0D8A4(&SceneList_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, v5);
    byte_42115D7 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B0D97C(0LL);
  v7 = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Peek(
         (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
         (const MethodInfo_2A990E4 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( v7 )
  {
    v8 = v7;
    if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    SceneName = SceneList__getSceneName(type, 0LL);
    LOBYTE(v7) = System_String__op_Equality(SceneName, *(System_String_o **)&v8->fields, 0LL);
  }
  return (char)v7;
}


void __fastcall AvalonSceneManager__destroySceneObject(AvalonSceneManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x0
  int32_t i; // w19
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42115D3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__, v3);
    byte_42115D3 = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0LL;
  sub_B0D840(&this->fields.prevscenetemp, 0LL);
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B0D97C(0LL);
  System_Collections_Generic_Stack_SceneTemp___Clear(
    scenestack,
    (const MethodInfo_2A98D10 *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0LL;
  sub_B0D840(&this->fields.targetRoot, 0LL);
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
    UnityEngine_SceneManagement_SceneManager__UnloadScene_35009132(name, 0LL);
  }
}


void __fastcall AvalonSceneManager__endInitialize(
        AvalonSceneManager_o *this,
        SceneRootComponent_o *comp,
        const MethodInfo *method)
{
  Il2CppObject **p_sendData; // x0
  Il2CppObject *v4; // x20
  Il2CppObject *sendData; // t1
  __int64 v7; // x0
  long double v8; // q0

  sendData = this->fields.sendData;
  p_sendData = &this->fields.sendData;
  v4 = sendData;
  *p_sendData = 0LL;
  *(__n128 *)&v8 = sub_B0D840(p_sendData, 0LL);
  if ( !comp )
    sub_B0D97C(v7);
  ((void (__fastcall *)(SceneRootComponent_o *, Il2CppObject *, Il2CppMethodPointer, long double))comp->klass->vtable._5_beginStartUp.method)(
    comp,
    v4,
    comp->klass->vtable._6_beginStartUp.methodPtr,
    v8);
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

  if ( (byte_42115D5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, method);
    byte_42115D5 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B0D97C(0LL);
  result = (System_String_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Peek(
                                (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
                                (const MethodInfo_2A990E4 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( result )
    return (System_String_o *)result->fields;
  return result;
}


SceneRootComponent_o *__fastcall AvalonSceneManager__getTargetRoot(
        AvalonSceneManager_o *this,
        System_String_o *scenenName,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t *p_m_Handle; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  int32_t *v8; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  int max_length; // w8
  UnityEngine_GameObject_array *v11; // x20
  unsigned int v12; // w22
  __int64 v14; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42115D2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___, scenenName);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v5);
    byte_42115D2 = 1;
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
    v8 = &m_Handle;
    RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                        (UnityEngine_SceneManagement_Scene_o)v8,
                        0LL);
    if ( !RootGameObjects )
      goto LABEL_21;
    max_length = RootGameObjects->max_length;
    v11 = RootGameObjects;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= max_length )
        {
          v14 = sub_B0D9A8(RootGameObjects);
          sub_B0D948(v14, 0LL);
        }
        RootGameObjects = (UnityEngine_GameObject_array *)v11->m_Items[v12];
        if ( !RootGameObjects )
          break;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)RootGameObjects,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
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
        max_length = v11->max_length;
        if ( (int)++v12 >= max_length )
          return 0LL;
      }
LABEL_21:
      sub_B0D97C(RootGameObjects);
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

  return AvalonSceneManager__popScene_18659016(this, fade, data, 0, v4);
}


bool __fastcall AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_18659016(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__popScene_18659016(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        bool isRefresh,
        const MethodInfo *method)
{
  __int64 v9; // x1
  void *scenestack; // x0
  const MethodInfo *v11; // x6
  int32_t v12; // w1

  if ( (byte_42115DA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, *(_QWORD *)&fade);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, v9);
    byte_42115DA = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  if ( *((int *)scenestack + 6) < 1 )
    return 0;
  scenestack = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                 (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
                 (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_B0D97C(scenestack);
  if ( isRefresh )
    v12 = 5;
  else
    v12 = 4;
  AvalonSceneManager__changeScene_18658776(this, v12, *((System_String_o **)scenestack + 2), fade, data, 0, v11);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__pushScene(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *targetRoot; // x23
  bool v13; // w0
  struct SceneTemp_o *prevscenetemp; // x23
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x0
  System_String_o *SceneName; // x0
  const MethodInfo *v17; // x6
  const MethodInfo *v19; // x6

  if ( (byte_42115D9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&SceneList_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_SceneTemp__Push__, v11);
    byte_42115D9 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
  prevscenetemp = 0LL;
  if ( v13 )
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
        (const MethodInfo_2A991E0 *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( AvalonSceneManager__changeScene_18658776(this, 3, SceneName, fade, data, 0, v17) )
    return 1;
  if ( prevscenetemp )
  {
    scenestack = this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
        (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
        (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_18658776(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v19);
      return 0;
    }
LABEL_19:
    sub_B0D97C(scenestack);
  }
  return 0;
}


// attributes: thunk
void __fastcall AvalonSceneManager__reboot(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager__destroySceneObject(this, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__setTargetRootActive(
        AvalonSceneManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetRoot; // x21
  SceneRootComponent_o *v6; // x0

  if ( (byte_42115E5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, flag);
    byte_42115E5 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
    return 0;
  v6 = this->fields.targetRoot;
  if ( !v6 )
    sub_B0D97C(0LL);
  return SceneRootComponent__SetSceneActive(v6, flag, 0LL);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__setupUI(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AvalonSceneManager__setupUI_d__37_o *v3; // x19

  if ( (byte_42115E4 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager__setupUI_d__37_TypeInfo, method);
    byte_42115E4 = 1;
  }
  v3 = (AvalonSceneManager__setupUI_d__37_o *)sub_B0D974(AvalonSceneManager__setupUI_d__37_TypeInfo, method, v2);
  AvalonSceneManager__setupUI_d__37___ctor(v3, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__transitionScene(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v10; // x6

  if ( (byte_42115DB & 1) == 0 )
  {
    sub_B0D8A4(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_42115DB = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_18658776(this, 1, SceneName, fade, data, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42115DD & 1) == 0 )
  {
    sub_B0D8A4(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_42115DD = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_18658776(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__transitionScene_18659372(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_42115DC & 1) == 0 )
  {
    sub_B0D8A4(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_42115DC = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_18659532(this, 1, SceneName, fade, data, callback, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_18660080(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_18658776(this, 1, scenename, fade, data, 0, v5);
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        int32_t 1__state,
        const MethodInfo_246769C *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_24676D4 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  bool result; // w0
  int32_t v9; // w21
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  UIWidget_o *Component_UIWidget; // x22
  Il2CppClass *_0_T; // x23
  __int64 v14; // x23
  Il2CppClass *v15; // x22
  UnityEngine_Object_o *v16; // x0
  int32_t *v17; // x0
  System_String_o *name; // x20
  struct UnityEngine_AsyncOperation_o *v19; // x0
  struct UnityEngine_AsyncOperation_o **p_asyncOp_5__2; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppObject *v27; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  AvalonSceneManager__UnloadSceneAsync_d__42_T__o *v36; // x0
  const MethodInfo_2467968 *v37; // x1
  int v38; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_421D2D6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, method);
    sub_B0D8A4(&int_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v6);
    byte_421D2D6 = 1;
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
      sub_B0D97C(RootGameObjects);
    if ( UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)RootGameObjects, 0LL) )
      goto LABEL_34;
    v38 = 0;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    this->fields.__2__current = v27;
    p__2__current = &this->fields.__2__current;
    sub_B0D840((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
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
      v9 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
      while ( (v9 & 0x80000000) == 0 )
      {
        if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
        }
        m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v9, 0LL).fields.m_Handle;
        p_m_Handle = &m_Handle;
        RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                            (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                            0LL);
        if ( !RootGameObjects )
          goto LABEL_37;
        if ( !RootGameObjects->max_length )
        {
          v35 = sub_B0D9A8(RootGameObjects);
          sub_B0D948(v35, 0LL);
        }
        Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                               RootGameObjects->m_Items[0],
                               (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        _0_T = method->klass->rgctx_data->_0_T;
        if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
          sub_AA65A4(method->klass->rgctx_data->_0_T);
        v14 = sub_B0D964(Component_UIWidget, _0_T);
        v15 = method->klass->rgctx_data->_0_T;
        if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
          sub_AA65A4(method->klass->rgctx_data->_0_T);
        if ( v14 )
        {
          v16 = (UnityEngine_Object_o *)sub_B0D964(v14, v15);
          if ( !v16 )
          {
            sub_B0DC70(v14);
            return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                      v36,
                                      v37);
          }
        }
        else
        {
          v16 = 0LL;
        }
        --v9;
        if ( UnityEngine_Object__op_Implicit(v16, 0LL) )
        {
          v17 = &m_Handle;
          name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v17, 0LL);
          if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          }
          v19 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_35009412(name, 0LL);
          this->fields._asyncOp_5__2 = v19;
          p_asyncOp_5__2 = &this->fields._asyncOp_5__2;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields._asyncOp_5__2,
            (System_Int32_array **)v19,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
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
        const MethodInfo_2467968 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_2467970 *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_AvalonSceneManager__UnloadSceneAsync_d__42_object__System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_24679B0 *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_24676D0 *method)
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct AvalonSceneManager_o *_4__this; // x24
  BattleServantConfConponent_o *p_newTargetRoot_5__2; // x21
  UnityEngine_Object_o *targetRoot; // x22
  bool v20; // w22
  bool v21; // w0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_Int32_array **v29; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  bool v37; // w20
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Object_o *newTargetRoot_5__2; // x22
  System_String_o *v46; // x22
  int32_t *v47; // x0
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v49; // x22
  unsigned int v50; // w27
  UnityEngine_GameObject_o *v51; // x23
  int v52; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v53; // x24
  int i; // w20
  AvalonSceneManager__changeNextSceneCoroutine_d__36_c **v55; // x8
  UnityEngine_Component_o *gameObject; // x25
  UnityEngine_Object_c *v57; // x0
  int v58; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v59; // x23
  unsigned int v60; // w20
  AvalonSceneManager__changeNextSceneCoroutine_d__36_c **v61; // x8
  UnityEngine_Component_o *v62; // x24
  UnityEngine_Object_c *v63; // x0
  UnityEngine_Object_o *klass; // x22
  System_String_o *scenename; // x22
  int32_t *p_m_Handle; // x0
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Object_o *v74; // x22
  System_String_o *v75; // x21
  BattleServantConfConponent_o *v76; // x19
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  UnityEngine_Object_o *v83; // x22
  UnityEngine_Object_o *v84; // x22
  AvalonSceneManager__changeNextSceneCoroutine_d__36_c *v85; // x8
  void (*v86)(void); // x9
  SceneRootComponent_o *v87; // x23
  SceneTemp_o *v88; // x22
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o **p_targetRoot; // x21
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  Il2CppObject *v109; // x19
  BattleServantConfConponent_o *p_sendData; // x24
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v113; // x22
  UnityEngine_Object_o *v114; // x21
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_String_o *v121; // x20
  BattleServantConfConponent_o *v122; // x19
  __int64 v123; // x0
  struct AvalonSceneManager_o *v124; // [xsp+0h] [xbp-60h]
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_421398D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponents_Component___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v12);
    sub_B0D8A4(&SceneTemp_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_2796/*"BattleScriptScene"*/, v14);
    sub_B0D8A4(&StringLiteral_2795/*"BattleScene"*/, v15);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v16);
    byte_421398D = 1;
  }
  m_Handle = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields._newTargetRoot_5__2 = 0LL;
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2;
      v8->fields.__1__state = -1;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_119;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v20 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
      v21 = System_String__op_Equality(v8->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !v20 )
        goto LABEL_12;
      if ( v21 )
        goto LABEL_13;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_119;
      v21 = SceneRootComponent__checkSceneName((SceneRootComponent_o *)this, v8->fields.scenename, 0LL);
LABEL_12:
      if ( v21 )
      {
LABEL_13:
        v28 = (System_Int32_array **)_4__this->fields.targetRoot;
        p_newTargetRoot_5__2->klass = (BattleServantConfConponent_c *)v28;
        sub_B0D840((BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2, v28, v22, v23, v24, v25, v26, v27);
      }
      if ( v8->fields.changeType <= 1u
        && System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_2796/*"BattleScriptScene"*/, 0LL)
        && System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_2795/*"BattleScene"*/, 0LL) )
      {
        v29 = (System_Int32_array **)AvalonSceneManager__setupUI(_4__this, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v29;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B0D840(p__2__current, v29, v31, v32, v33, v34, v35, v36);
        v37 = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return v37;
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
      v67 = (System_Int32_array **)AvalonSceneManager__getTargetRoot(_4__this, v8->fields.scenename, 0LL);
      v8->fields._newTargetRoot_5__2 = (struct SceneRootComponent_o *)v67;
      sub_B0D840(p_newTargetRoot_5__2, v67, v68, v69, v70, v71, v72, v73);
LABEL_72:
      v74 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v74, 0LL, 0LL) )
        goto LABEL_80;
      v75 = v8->fields.scenename;
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      v37 = 1;
      UnityEngine_SceneManagement_SceneManager__LoadScene(v75, 1, 0LL);
      v8->fields.__2__current = 0LL;
      v76 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B0D840(v76, 0LL, v77, v78, v79, v80, v81, v82);
      *(_DWORD *)&v76[-1].fields.isOpenAfter = 2;
      return v37;
    case 1:
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2;
      v8->fields.__1__state = -1;
      goto LABEL_62;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_119;
      v38 = (System_Int32_array **)AvalonSceneManager__getTargetRoot(_4__this, v8->fields.scenename, 0LL);
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2;
      v8->fields._newTargetRoot_5__2 = (struct SceneRootComponent_o *)v38;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2, v38, v39, v40, v41, v42, v43, v44);
      newTargetRoot_5__2 = (UnityEngine_Object_o *)v8->fields._newTargetRoot_5__2;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(newTargetRoot_5__2, 0LL, 0LL) )
        return 0;
      v46 = v8->fields.scenename;
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v46, 0LL).fields.m_Handle;
      v47 = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                                                                       (UnityEngine_SceneManagement_Scene_o)v47,
                                                                       0LL);
      if ( !this )
        goto LABEL_119;
      _2__current = (int)this->fields.__2__current;
      v49 = this;
      if ( _2__current < 1 )
        goto LABEL_80;
      v124 = _4__this;
      v50 = 0;
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
    if ( v50 >= _2__current )
    {
LABEL_120:
      v123 = sub_B0D9A8(this);
      sub_B0D948(v123, 0LL);
    }
    v51 = (UnityEngine_GameObject_o *)*((_QWORD *)&v49->fields.__4__this + (int)v50);
    if ( !v51 )
      goto LABEL_119;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                                                     v51,
                                                                     (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !this )
      goto LABEL_119;
    v52 = (int)this->fields.__2__current;
    v53 = this;
    if ( v52 >= 1 )
    {
      for ( i = 0; i < v52; ++i )
      {
        if ( i >= (unsigned int)v52 )
          goto LABEL_120;
        v55 = &v53->klass + i;
        gameObject = (UnityEngine_Component_o *)v55[4];
        if ( !gameObject )
          goto LABEL_119;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_Component__GetComponents_iTween_(
                                                                         (UnityEngine_Component_o *)v55[4],
                                                                         (const MethodInfo_170E9D8 *)Method_UnityEngine_Component_GetComponents_Component___);
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
          v57 = UnityEngine_Object_TypeInfo;
        }
        else
        {
          v57 = UnityEngine_Object_TypeInfo;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
            || UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            goto LABEL_44;
          }
        }
        j_il2cpp_runtime_class_init_0(v57);
LABEL_44:
        UnityEngine_Object__DestroyImmediate_34935488((UnityEngine_Object_o *)gameObject, 0LL);
        v52 = (int)v53->fields.__2__current;
      }
    }
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                                                     v51,
                                                                     (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !this )
      goto LABEL_119;
    v58 = (int)this->fields.__2__current;
    v59 = this;
    if ( v58 >= 1 )
      break;
LABEL_59:
    _2__current = (int)v49->fields.__2__current;
    if ( (int)++v50 >= _2__current )
    {
      _4__this = v124;
LABEL_80:
      v83 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !_4__this )
          goto LABEL_119;
        v84 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v84, 0LL, 0LL) )
        {
          if ( !_4__this->fields.prevscenetemp )
            goto LABEL_106;
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)_4__this->fields.targetRoot;
          if ( this )
          {
            v85 = this->klass;
            if ( v8->fields.changeType == 3 )
              v86 = (void (*)(void))v85->vtable._8_System_Collections_IEnumerator_Reset.method;
            else
              v86 = (void (*)(void))v85->vtable._7_System_Collections_IEnumerator_get_Current.method;
            v86();
LABEL_106:
            v113 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v114 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v113, v114, 0LL) )
            {
LABEL_118:
              v8->fields.__2__current = 0LL;
              v122 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B0D840(v122, 0LL, v115, v116, v117, v118, v119, v120);
              *(_DWORD *)&v122[-1].fields.isOpenAfter = 3;
              return 1;
            }
            this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)_4__this->fields.targetRoot;
            if ( this )
            {
              if ( v8->fields.changeType == 5 )
              {
                v121 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                }
                UnityEngine_SceneManagement_SceneManager__UnloadScene_35009132(v121, 0LL);
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
          sub_B0D97C(this);
        }
LABEL_94:
        v87 = (SceneRootComponent_o *)p_newTargetRoot_5__2->klass;
        v88 = (SceneTemp_o *)sub_B0D974(SceneTemp_TypeInfo, method, v2);
        SceneTemp___ctor_16656144(v88, v87, 0LL);
        if ( !_4__this )
          goto LABEL_119;
        _4__this->fields.prevscenetemp = v88;
        sub_B0D840(
          (BattleServantConfConponent_o *)&_4__this->fields.prevscenetemp,
          (System_Int32_array **)v88,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94);
        v95 = (System_Int32_array **)p_newTargetRoot_5__2->klass;
        p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o **)&_4__this->fields.targetRoot;
        _4__this->fields.targetRoot = (struct SceneRootComponent_o *)v95;
        sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.targetRoot, v95, v97, v98, v99, v100, v101, v102);
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
          v109 = sendData;
          p_sendData->klass = 0LL;
          sub_B0D840(p_sendData, 0LL, v103, v104, v105, v106, v107, v108);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)p_sendData[-1].fields.BattleAssetUIAtlas;
          if ( !this )
            goto LABEL_119;
          ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__36_o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
            this,
            v109,
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
  v60 = 0;
  while ( 1 )
  {
    if ( v60 >= v58 )
      goto LABEL_120;
    v61 = &v59->klass + (int)v60;
    v62 = (UnityEngine_Component_o *)v61[4];
    if ( !v62 )
      goto LABEL_119;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_Component__GetComponents_iTween_(
                                                                     (UnityEngine_Component_o *)v61[4],
                                                                     (const MethodInfo_170E9D8 *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !this )
      goto LABEL_119;
    if ( LODWORD(this->fields.__2__current) == 2 )
    {
      v62 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v62, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_58;
      }
      v63 = UnityEngine_Object_TypeInfo;
    }
    else
    {
      v63 = UnityEngine_Object_TypeInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_58;
      }
    }
    j_il2cpp_runtime_class_init_0(v63);
LABEL_58:
    UnityEngine_Object__DestroyImmediate_34935488((UnityEngine_Object_o *)v62, 0LL);
    v58 = (int)v59->fields.__2__current;
    if ( (int)++v60 >= v58 )
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__36_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct AvalonSceneManager_o *_4__this; // x20
  AvalonSceneManager_c *v17; // x0
  int32_t fadeType; // w8
  float duration_5__2; // s0
  int32_t v20; // w1
  BattleServantConfConponent_o *v21; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // w8
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  bool result; // w0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Object_o *targetRoot; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  AvalonSceneManager__changePrevSceneCoroutine_d__35_o *v55; // x22
  UnityEngine_Object_o *v56; // x21
  int32_t v57; // w19
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *v60; // x21
  BattleServantConfConponent_o *p__2__current; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_421398E & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&CommonEffectManager_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v14);
    this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)sub_B0D8A4(
                                                                     &Method_System_Collections_Generic_Stack_SceneTemp__get_Count__,
                                                                     v15);
    byte_421398E = 1;
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
      v17 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v17 = AvalonSceneManager_TypeInfo;
      }
      LODWORD(v8->fields._duration_5__2) = LODWORD(v17->static_fields->DEFAULT_FADE_TIME);
      if ( (unsigned int)(_4__this->fields.fadeType - 1) > 1 )
        goto LABEL_12;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_80;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
LABEL_12:
      if ( !v8->fields.fadeTimeSkip )
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B0D840(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      v8->fields._duration_5__2 = 0.0;
LABEL_15:
      fadeType = _4__this->fields.fadeType;
      if ( fadeType == 2 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_80;
        duration_5__2 = v8->fields._duration_5__2;
        v20 = 2;
      }
      else
      {
        if ( fadeType != 1 )
          goto LABEL_31;
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_80;
        duration_5__2 = v8->fields._duration_5__2;
        v20 = 1;
      }
      CommonUI__maskFadeout((CommonUI_o *)this, v20, duration_5__2, 0LL, 0LL);
LABEL_31:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_80;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        v8->fields.__2__current = 0LL;
        v21 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B0D840(v21, 0LL, v36, v37, v38, v39, v40, v41);
        v28 = 2;
LABEL_34:
        *(_DWORD *)&v21[-1].fields.isOpenAfter = v28;
        return 1;
      }
LABEL_35:
      MainMenuBar__setButtonActive(0, 0LL);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.prevscenetemp, 0LL, v49, v50, v51, v52, v53, v54);
        }
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)_4__this->fields.scenestack;
        if ( this )
        {
          while ( SLODWORD(this->fields.__2__current) > 0 )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                                                             (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
                                                                             (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
            if ( !this )
              goto LABEL_80;
            v55 = this;
            v56 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(
                                            _4__this,
                                            *(System_String_o **)&this->fields.__1__state,
                                            0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Object__op_Inequality(
                                                                             v56,
                                                                             0LL,
                                                                             0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v56 )
                goto LABEL_80;
              if ( SceneRootComponent__checkSceneName(
                     (SceneRootComponent_o *)v56,
                     *(System_String_o **)&v55->fields.__1__state,
                     0LL) )
              {
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v56,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_80;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                (*(void (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&v56->klass[1]._1.this_arg.bits)(
                  v56,
                  v56->klass[1]._1.element_class);
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v56,
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
            v21 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B0D840(v21, 0LL, v42, v43, v44, v45, v46, v47);
            v28 = 3;
            goto LABEL_34;
          }
          if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          }
          v57 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
          if ( v57 >= 0 )
          {
            while ( 1 )
            {
              if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
              }
              m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v57, 0LL).fields.m_Handle;
              p_m_Handle = &m_Handle;
              name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
              v60 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(_4__this, name, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Object__op_Inequality(
                                                                               v60,
                                                                               0LL,
                                                                               0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v60 )
                  goto LABEL_80;
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v60,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_80;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              if ( --v57 < 0 )
                return 0;
            }
          }
          return 0;
        }
LABEL_80:
        sub_B0D97C(this);
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
      v21 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B0D840(v21, 0LL, v22, v23, v24, v25, v26, v27);
      v28 = 4;
      goto LABEL_34;
    case 4:
      v8->fields.__1__state = -1;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
      v21 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B0D840(v21, 0LL, v29, v30, v31, v32, v33, v34);
      v28 = 5;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__35_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  AvalonSceneManager__changeSceneCoroutine_d__34_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AvalonSceneManager_o *_4__this; // x20
  System_String_o *scenename; // x21
  int v11; // w21
  bool v12; // w0
  bool v13; // w0
  bool v14; // w0
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  bool result; // w0
  System_Action_o *callback; // x0
  System_Int32_array **v24; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int v32; // w8
  int32_t changeType; // w8
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_WaitForEndOfFrame_o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  bool v48; // w0
  bool v49; // w0
  int32_t ConnectMarkEventId; // w1
  bool v51; // w2
  bool v52; // w22
  bool v53; // zf
  AvalonSceneManager__changeSceneCoroutine_d__34_o *v54; // x21

  v3 = this;
  if ( (byte_421398F & 1) == 0 )
  {
    sub_B0D8A4(&System_GC_TypeInfo, method);
    sub_B0D8A4(&SceneList_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v7);
    this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v8);
    byte_421398F = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      scenename = v3->fields.scenename;
      if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SceneList__getSceneType(scenename, 0LL);
      if ( (unsigned int)((_DWORD)this - 10) <= 0x3E
        && ((1LL << ((unsigned __int8)this - 10)) & 0x4004000053000001LL) != 0 )
      {
        if ( !_4__this )
          goto LABEL_55;
        v11 = (int)this;
        v12 = AvalonSceneManager__checkNowScene(_4__this, 10, 0LL);
        if ( v11 != 38 || !v12 )
        {
          v13 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
          if ( v11 != 10 || !v13 )
          {
            v14 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
            if ( v11 != 38 || !v14 )
            {
              v48 = AvalonSceneManager__checkNowScene(_4__this, 39, 0LL);
              if ( v11 == 40 && v48 || (v49 = AvalonSceneManager__checkNowScene(_4__this, 39, 0LL), v11 == 60) && v49 )
              {
                this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !this )
                  goto LABEL_55;
                ConnectMarkEventId = 0;
                v51 = 0;
              }
              else
              {
                v52 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
                this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v53 = v11 == 34;
                v54 = this;
                if ( v53 && v52 )
                {
                  if ( !this )
                    goto LABEL_55;
                  v51 = 1;
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
                  if ( !v54 )
                    goto LABEL_55;
                  v51 = 1;
                  this = v54;
                  ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
                }
              }
              CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, ConnectMarkEventId, v51, 0LL);
              goto LABEL_18;
            }
          }
        }
        this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0LL);
LABEL_18:
          v15 = (System_Int32_array **)AvalonSceneManager__changePrevSceneCoroutine(
                                         _4__this,
                                         v3->fields.changeType,
                                         v3->fields.scenename,
                                         v3->fields.fadeTimeSkip,
                                         0LL);
          v3->fields.__2__current = (Il2CppObject *)v15;
          sub_B0D840((BattleServantConfConponent_o *)&v3->fields.__2__current, v15, v16, v17, v18, v19, v20, v21);
          result = 1;
          v3->fields.__1__state = 1;
          return result;
        }
      }
      else
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
          if ( _4__this )
            goto LABEL_18;
        }
      }
LABEL_55:
      sub_B0D97C(this);
    case 1:
      changeType = v3->fields.changeType;
      v3->fields.__1__state = -1;
      if ( changeType )
      {
        if ( !_4__this )
          goto LABEL_55;
LABEL_28:
        v34 = (System_Int32_array **)AvalonSceneManager__changeNextSceneCoroutine(
                                       _4__this,
                                       v3->fields.changeType,
                                       v3->fields.scenename,
                                       0LL);
        v3->fields.__2__current = (Il2CppObject *)v34;
        sub_B0D840((BattleServantConfConponent_o *)&v3->fields.__2__current, v34, v35, v36, v37, v38, v39, v40);
        v3->fields.__1__state = 4;
      }
      else
      {
        v41 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v41, 0LL);
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_43098652(0LL);
        v3->fields.__2__current = (Il2CppObject *)v41;
        p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
        sub_B0D840(p__2__current, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
        v32 = 2;
LABEL_33:
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v32;
      }
      return 1;
    case 2:
      v3->fields.__1__state = -1;
      this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      v24 = (System_Int32_array **)AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v24;
      p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
      sub_B0D840(p__2__current, v24, v26, v27, v28, v29, v30, v31);
      v32 = 3;
      goto LABEL_33;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      goto LABEL_28;
    case 4:
      callback = v3->fields.callback;
      v3->fields.__1__state = -1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_AvalonSceneManager__changeSceneCoroutine_d__34_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v19; // x20
  AtlasManager_o *Instance; // x0
  int32_t v21; // w21
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w8
  System_Action_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x22
  System_Func_bool__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_WaitUntil_o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_4213990 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v4);
    sub_B0D8A4(&CommonEffectManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v6);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v7);
    sub_B0D8A4(&OptionManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v9);
    sub_B0D8A4(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__0__, v10);
    sub_B0D8A4(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__1__, v11);
    sub_B0D8A4(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__2__, v12);
    sub_B0D8A4(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__3__, v13);
    sub_B0D8A4(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__4__, v14);
    sub_B0D8A4(&AvalonSceneManager___c__DisplayClass37_0_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v16);
    byte_4213990 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v24 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v19 = sub_B0D974(AvalonSceneManager___c__DisplayClass37_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    if ( !v19 )
      goto LABEL_46;
    *(_DWORD *)(v19 + 16) = 0;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v21 = OptionManager__isSavedMemoryMode(0LL) ? 1 : 10;
    Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData(Instance, 7, 0LL) )
    {
      *(_BYTE *)(v19 + 16) = 1;
    }
    else
    {
      v25 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
      System_Action___ctor(
        v25,
        (Il2CppObject *)v19,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v25, 7, v21, 0LL);
    }
    Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData(Instance, 1, 0LL) )
    {
      *(_BYTE *)(v19 + 17) = 1;
    }
    else
    {
      v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v26, v27);
      System_Action___ctor(
        v28,
        (Il2CppObject *)v19,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__1__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v28, 1, v21, 0LL);
    }
    Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_B0D97C(Instance);
    if ( AtlasManager__isLoadedSkinData(Instance, 2, 0LL) )
    {
      *(_BYTE *)(v19 + 18) = 1;
    }
    else
    {
      v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v29, v30);
      System_Action___ctor(
        v31,
        (Il2CppObject *)v19,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__2__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v31, 2, v21, 0LL);
    }
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    if ( CommonEffectManager__IsLoadedSkinData(0LL) )
    {
      *(_BYTE *)(v19 + 19) = 1;
    }
    else
    {
      v34 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
      System_Action___ctor(
        v34,
        (Il2CppObject *)v19,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__3__,
        0LL);
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      CommonEffectManager__LoadSkinEffects(v34, v21, 0LL);
    }
    v35 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v32, v33);
    System_Func_bool____ctor(
      v35,
      (Il2CppObject *)v19,
      Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__4__,
      (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
    v38 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v36, v37);
    UnityEngine_WaitUntil___ctor(v38, v35, 0LL);
    this->fields.__2__current = (Il2CppObject *)v38;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v24 = 1;
    result = 1;
  }
  this->fields.__1__state = v24;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_AvalonSceneManager__setupUI_d__37_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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