void __fastcall AvalonSceneManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E65D7 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v1, v2, v3);
    byte_42E65D7 = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void __fastcall AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v11; // x20

  if ( (byte_42E65D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Stack_SceneTemp__TypeInfo, v8, v9, v10);
    byte_42E65D6 = 1;
  }
  v11 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B5D694(System_Collections_Generic_Stack_SceneTemp__TypeInfo);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v11,
    (const MethodInfo_2CC5340 *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v11;
  sub_B5D560(&this->fields.scenestack);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_1AD57AC *method)
{
  AvalonSceneManager_o *v7; // x20
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  struct SceneRootComponent_o *targetRoot; // x23
  Il2CppClass *_0_T; // x22
  UnityEngine_Component_o *v19; // x0
  SceneRootComponent_o *v20; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  System_Type_o *v23; // x0
  struct PlayMakerGUI_o *playMakerGUI; // x8
  System_String_o *SceneName; // x19
  AvalonSceneManager_o *v26; // x0
  const MethodInfo_1AD5990 *v27; // x1
  System_RuntimeTypeHandle_o v28; // 0:w0.4
  System_RuntimeTypeHandle_o v29; // 0:w0.4

  v7 = this;
  if ( (byte_42EA26C & 1) == 0 )
  {
    sub_B5D5C4(&BattleRootComponent_var, sceneType, forceUnload, method);
    sub_B5D5C4(&BattleRootComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v11, v12, v13);
    this = (AvalonSceneManager_o *)sub_B5D5C4(&System_Type_TypeInfo, v14, v15, v16);
    byte_42EA26C = 1;
  }
  if ( !v7 )
    goto LABEL_24;
  this = (AvalonSceneManager_o *)AvalonSceneManager__checkNowScene(v7, sceneType, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  targetRoot = v7->fields.targetRoot;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    this = (AvalonSceneManager_o *)sub_AF52C4(method->rgctx_data->_0_T);
  if ( !targetRoot )
    goto LABEL_24;
  v19 = (UnityEngine_Component_o *)sub_B5D684(targetRoot, _0_T);
  if ( !v19 )
  {
    v26 = (AvalonSceneManager_o *)sub_B5D990(targetRoot);
    AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(v26, v27);
    return;
  }
  v20 = (SceneRootComponent_o *)v19;
  this = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
  if ( !this )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v28.fields.value = (int)_1_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v28, 0LL);
  v29.fields.value = (int)BattleRootComponent_var;
  v23 = System_Type__GetTypeFromHandle(v29, 0LL);
  if ( !System_Type__op_Equality(TypeFromHandle, v23, 0LL) )
    goto LABEL_18;
  this = (AvalonSceneManager_o *)sub_B5D684(v20, BattleRootComponent_TypeInfo);
  if ( !this
    || (this = (AvalonSceneManager_o *)sub_B5D684(v20, BattleRootComponent_TypeInfo),
        (playMakerGUI = this->fields.playMakerGUI) == 0LL)
    || (this = *(AvalonSceneManager_o **)&playMakerGUI[9].fields.GUITextureStateLabels) == 0LL )
  {
LABEL_24:
    sub_B5D69C(this, *(_QWORD *)&sceneType);
  }
  BattleResultComponent__EndResult((BattleResultComponent_o *)this, 0LL);
LABEL_18:
  if ( forceUnload )
  {
    SceneName = SceneRootComponent__getSceneName(v20, 0LL);
    if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    UnityEngine_SceneManagement_SceneManager__UnloadScene_35694092(SceneName, 0LL);
  }
}


SceneRootComponent_o *__fastcall AvalonSceneManager__GetStackedRootComponent(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *v4; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8
  System_String_o *StackSceneName; // x0
  const MethodInfo *v7; // x2

  v4 = this;
  if ( (byte_42E65D5 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_Stack_SceneTemp__get_Count__,
                                     (_DWORD)method,
                                     v2,
                                     v3);
    byte_42E65D5 = 1;
  }
  scenestack = v4->fields.scenestack;
  if ( !scenestack )
    sub_B5D69C(this, method);
  if ( !scenestack->fields._size )
    return 0LL;
  StackSceneName = AvalonSceneManager__getStackSceneName(v4, method);
  return AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)StackSceneName, StackSceneName, v7);
}


bool __fastcall AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *v4; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  v4 = this;
  if ( (byte_42E65C3 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_Stack_SceneTemp__get_Count__,
                                     (_DWORD)method,
                                     v2,
                                     v3);
    byte_42E65C3 = 1;
  }
  scenestack = v4->fields.scenestack;
  if ( !scenestack )
    sub_B5D69C(this, method);
  return scenestack->fields._size > 0;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__UnloadSceneAsync_TerminalSceneComponent_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_1AD5B70 *method)
{
  Il2CppClass *_0_AvalonSceneManager__UnloadSceneAsync_d__42_T; // x21
  __int64 v6; // x0
  const MethodInfo_1AD5B70_RGCTXs *rgctx_data; // x8
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
    sub_AF52C4(method->rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__42_T_);
  v6 = sub_B5D694(_0_AvalonSceneManager__UnloadSceneAsync_d__42_T);
  rgctx_data = method->rgctx_data;
  v8 = v6;
  v9 = ((__int64 (__fastcall *)(__int64, _QWORD))rgctx_data->_1_AvalonSceneManager__UnloadSceneAsync_d__42_T___ctor->methodPointer)(
         v6,
         0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  *(_QWORD *)(v8 + 32) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)callback, v11, v12, v13, v14, v15, v16);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
        AvalonSceneManager_o *this,
        const MethodInfo_1AD5990 *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t i; // w20
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v14; // x1
  UIWidget_o *Component_UIWidget; // x21
  Il2CppClass *_0_T; // x22
  __int64 v17; // x22
  Il2CppClass *v18; // x21
  UnityEngine_Object_o *v19; // x0
  int32_t *v20; // x0
  System_String_o *name; // x21
  __int64 v22; // x0
  AvalonSceneManager_o *v23; // x0
  System_Action_o *v24; // x1
  const MethodInfo_1AD5B70 *v25; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EA26D & 1) == 0 )
  {
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v8, v9, v10);
    byte_42EA26D = 1;
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
      sub_B5D69C(0LL, v14);
    if ( !RootGameObjects->max_length )
    {
      v22 = sub_B5D6C8(RootGameObjects);
      sub_B5D668(v22, 0LL);
    }
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           RootGameObjects->m_Items[0],
                           (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_0_T);
    v17 = sub_B5D684(Component_UIWidget, _0_T);
    v18 = method->rgctx_data->_0_T;
    if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_0_T);
    if ( v17 )
    {
      v19 = (UnityEngine_Object_o *)sub_B5D684(v17, v18);
      if ( !v19 )
      {
        v23 = (AvalonSceneManager_o *)sub_B5D990(v17);
        AvalonSceneManager__UnloadSceneAsync_TerminalSceneComponent_(v23, v24, v25);
        return;
      }
    }
    else
    {
      v19 = 0LL;
    }
    if ( UnityEngine_Object__op_Implicit(v19, 0LL) )
    {
      v20 = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v20, 0LL);
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      UnityEngine_SceneManagement_SceneManager__UnloadScene_35694092(name, 0LL);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__changeNextSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        const MethodInfo *method)
{
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42E65D2 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager__changeNextSceneCoroutine_d__36_TypeInfo, changeType, (_DWORD)scenename, method);
    byte_42E65D2 = 1;
  }
  v7 = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)sub_B5D694(AvalonSceneManager__changeNextSceneCoroutine_d__36_TypeInfo);
  AvalonSceneManager__changeNextSceneCoroutine_d__36___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  v7->fields.__4__this = this;
  sub_B5D560(&v7->fields.__4__this);
  v7->fields.changeType = changeType;
  v7->fields.scenename = scenename;
  sub_B5D560(&v7->fields.scenename);
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
  __int64 v10; // x1

  if ( (byte_42E65D1 & 1) == 0 )
  {
    sub_B5D5C4(
      &AvalonSceneManager__changePrevSceneCoroutine_d__35_TypeInfo,
      changeType,
      (_DWORD)scenename,
      fadeTimeSkip);
    byte_42E65D1 = 1;
  }
  v8 = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)sub_B5D694(AvalonSceneManager__changePrevSceneCoroutine_d__35_TypeInfo);
  AvalonSceneManager__changePrevSceneCoroutine_d__35___ctor(v8, 0, 0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  v8->fields.__4__this = this;
  sub_B5D560(&v8->fields.__4__this);
  v8->fields.changeType = changeType;
  v8->fields.fadeTimeSkip = fadeTimeSkip;
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

  if ( (byte_42E65CD & 1) == 0 )
  {
    sub_B5D5C4(&SceneList_TypeInfo, type, fade, data);
    byte_42E65CD = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_21029804(this, 2, SceneName, fade, data, 0, v10);
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
  __int64 v13; // x1

  if ( (byte_42E65D0 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager__changeSceneCoroutine_d__34_TypeInfo, changeType, (_DWORD)scenename, fadeTimeSkip);
    byte_42E65D0 = 1;
  }
  v11 = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)sub_B5D694(AvalonSceneManager__changeSceneCoroutine_d__34_TypeInfo);
  AvalonSceneManager__changeSceneCoroutine_d__34___ctor(v11, 0, 0LL);
  if ( !v11 )
    sub_B5D69C(v12, v13);
  v11->fields.__4__this = this;
  sub_B5D560(&v11->fields.__4__this);
  v11->fields.changeType = changeType;
  v11->fields.scenename = scenename;
  sub_B5D560(&v11->fields.scenename);
  v11->fields.fadeTimeSkip = fadeTimeSkip;
  v11->fields.callback = callback;
  sub_B5D560(&v11->fields.callback);
  return (System_Collections_IEnumerator_o *)v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_21029804(
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
  const MethodInfo *v16; // x5
  System_Collections_IEnumerator_o *v17; // x0

  if ( (byte_42E65CE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CrashReporter__get_Instance__,
      changeType,
      (_DWORD)scenename,
      *(_QWORD *)&fade);
    byte_42E65CE = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v15);
  CrashReporter__LeaveBreadcrumb(Instance, scenename, 0LL);
  v13 = 1;
  this->fields.fadeType = fade;
  this->fields.isBusySceneChange = 1;
  this->fields.sendData = data;
  sub_B5D560(&this->fields.sendData);
  v17 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0LL, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_21030560(
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
  const MethodInfo *v16; // x5
  System_Collections_IEnumerator_o *v17; // x0

  if ( (byte_42E65CF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CrashReporter__get_Instance__,
      changeType,
      (_DWORD)scenename,
      *(_QWORD *)&fade);
    byte_42E65CF = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v15);
  CrashReporter__LeaveBreadcrumb(Instance, scenename, 0LL);
  v13 = 1;
  this->fields.fadeType = fade;
  this->fields.isBusySceneChange = 1;
  this->fields.sendData = data;
  sub_B5D560(&this->fields.sendData);
  v17 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, 0, callback, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
  return v13;
}


bool __fastcall AvalonSceneManager__changeScene_21031132(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_21029804(this, 2, scenename, fade, data, 0, v5);
}


bool __fastcall AvalonSceneManager__checkLoadedScene(
        AvalonSceneManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *SceneName; // x19
  int32_t *p_m_Handle; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E65C7 & 1) == 0 )
  {
    sub_B5D5C4(&SceneList_TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v5, v6, v7);
    byte_42E65C7 = 1;
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
  __int64 v3; // x3
  System_String_o *SceneName; // x0
  __int64 v7; // x1
  struct SceneTemp_o *prevscenetemp; // x8

  if ( (byte_42E65C5 & 1) == 0 )
  {
    sub_B5D5C4(&SceneList_TypeInfo, type, (_DWORD)method, v3);
    byte_42E65C5 = 1;
  }
  if ( !this->fields.prevscenetemp )
    return 0;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  prevscenetemp = this->fields.prevscenetemp;
  if ( !prevscenetemp )
    sub_B5D69C(SceneName, v7);
  return System_String__op_Equality(SceneName, prevscenetemp->fields.sceneName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkStackScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x0
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v10; // x0
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v11; // x20
  System_String_o *SceneName; // x0

  if ( (byte_42E65C6 & 1) == 0 )
  {
    sub_B5D5C4(&SceneList_TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, v6, v7, v8);
    byte_42E65C6 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B5D69C(0LL, *(_QWORD *)&type);
  v10 = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Peek(
          (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
          (const MethodInfo_2CC58D8 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( v10 )
  {
    v11 = v10;
    if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    SceneName = SceneList__getSceneName(type, 0LL);
    LOBYTE(v10) = System_String__op_Equality(SceneName, *(System_String_o **)&v11->fields, 0LL);
  }
  return (char)v10;
}


void __fastcall AvalonSceneManager__destroySceneObject(AvalonSceneManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x0
  int32_t i; // w19
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E65C2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__, v5, v6, v7);
    byte_42E65C2 = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0LL;
  sub_B5D560(&this->fields.prevscenetemp);
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B5D69C(0LL, v8);
  System_Collections_Generic_Stack_SceneTemp___Clear(
    scenestack,
    (const MethodInfo_2CC5504 *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0LL;
  sub_B5D560(&this->fields.targetRoot);
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
    UnityEngine_SceneManagement_SceneManager__UnloadScene_35694092(name, 0LL);
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
  __int64 v8; // x1
  long double v9; // q0

  sendData = this->fields.sendData;
  p_sendData = &this->fields.sendData;
  v4 = sendData;
  *p_sendData = 0LL;
  *(__n128 *)&v9 = sub_B5D560(p_sendData);
  if ( !comp )
    sub_B5D69C(v7, v8);
  ((void (__fastcall *)(SceneRootComponent_o *, Il2CppObject *, Il2CppMethodPointer, long double))comp->klass->vtable._5_beginStartUp.method)(
    comp,
    v4,
    comp->klass->vtable._6_beginStartUp.methodPtr,
    v9);
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
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x0
  System_String_o *result; // x0

  if ( (byte_42E65C4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, (_DWORD)method, v2, v3);
    byte_42E65C4 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B5D69C(0LL, method);
  result = (System_String_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Peek(
                                (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
                                (const MethodInfo_2CC58D8 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( result )
    return (System_String_o *)result->fields;
  return result;
}


SceneRootComponent_o *__fastcall AvalonSceneManager__getTargetRoot(
        AvalonSceneManager_o *this,
        System_String_o *scenenName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t *p_m_Handle; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  int32_t *v13; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v15; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v17; // x20
  unsigned int v18; // w22
  __int64 v20; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E65C1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___,
      (_DWORD)scenenName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v8, v9, v10);
    byte_42E65C1 = 1;
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
    v13 = &m_Handle;
    RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                        (UnityEngine_SceneManagement_Scene_o)v13,
                        0LL);
    if ( !RootGameObjects )
      goto LABEL_21;
    max_length = RootGameObjects->max_length;
    v17 = RootGameObjects;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= max_length )
        {
          v20 = sub_B5D6C8(RootGameObjects);
          sub_B5D668(v20, 0LL);
        }
        RootGameObjects = (UnityEngine_GameObject_array *)v17->m_Items[v18];
        if ( !RootGameObjects )
          break;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)RootGameObjects,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
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
        max_length = v17->max_length;
        if ( (int)++v18 >= max_length )
          return 0LL;
      }
LABEL_21:
      sub_B5D69C(RootGameObjects, v15);
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

  return AvalonSceneManager__popScene_21030044(this, fade, data, 0, v4);
}


bool __fastcall AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_21030044(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__popScene_21030044(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        bool isRefresh,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  void *scenestack; // x0
  const MethodInfo *v13; // x6
  int32_t v14; // w1

  if ( (byte_42E65C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, fade, (_DWORD)data, isRefresh);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, v9, v10, v11);
    byte_42E65C9 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  if ( *((int *)scenestack + 6) < 1 )
    return 0;
  scenestack = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                 (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
                 (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_B5D69C(scenestack, *(_QWORD *)&fade);
  if ( isRefresh )
    v14 = 5;
  else
    v14 = 4;
  AvalonSceneManager__changeScene_21029804(this, v14, *((System_String_o **)scenestack + 2), fade, data, 0, v13);
  return 1;
}


bool __fastcall AvalonSceneManager__pushScene(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_Object_o *targetRoot; // x23
  bool v19; // w0
  __int64 v20; // x1
  struct SceneTemp_o *prevscenetemp; // x23
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x0
  System_String_o *SceneName; // x0
  const MethodInfo *v24; // x6
  const MethodInfo *v26; // x6

  if ( (byte_42E65C8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, type, fade, data);
    sub_B5D5C4(&SceneList_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_SceneTemp__Push__, v15, v16, v17);
    byte_42E65C8 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
  prevscenetemp = 0LL;
  if ( v19 )
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
        (const MethodInfo_2CC59D4 *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( AvalonSceneManager__changeScene_21029804(this, 3, SceneName, fade, data, 0, v24) )
    return 1;
  if ( prevscenetemp )
  {
    scenestack = this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
        (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
        (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_21029804(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v26);
      return 0;
    }
LABEL_19:
    sub_B5D69C(scenestack, v20);
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
  __int64 v3; // x3
  UnityEngine_Object_o *targetRoot; // x21
  __int64 v7; // x1
  SceneRootComponent_o *v8; // x0

  if ( (byte_42E65D4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, flag, (_DWORD)method, v3);
    byte_42E65D4 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
    return 0;
  v8 = this->fields.targetRoot;
  if ( !v8 )
    sub_B5D69C(0LL, v7);
  return SceneRootComponent__SetSceneActive(v8, flag, 0LL);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__setupUI(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager__setupUI_d__37_o *v4; // x19

  if ( (byte_42E65D3 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager__setupUI_d__37_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E65D3 = 1;
  }
  v4 = (AvalonSceneManager__setupUI_d__37_o *)sub_B5D694(AvalonSceneManager__setupUI_d__37_TypeInfo);
  AvalonSceneManager__setupUI_d__37___ctor(v4, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v4;
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

  if ( (byte_42E65CA & 1) == 0 )
  {
    sub_B5D5C4(&SceneList_TypeInfo, type, fade, data);
    byte_42E65CA = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_21029804(this, 1, SceneName, fade, data, 0, v10);
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

  if ( (byte_42E65CC & 1) == 0 )
  {
    sub_B5D5C4(&SceneList_TypeInfo, type, fade, data);
    byte_42E65CC = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_21029804(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__transitionScene_21030400(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_42E65CB & 1) == 0 )
  {
    sub_B5D5C4(&SceneList_TypeInfo, type, (_DWORD)callback, *(_QWORD *)&fade);
    byte_42E65CB = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_21030560(this, 1, SceneName, fade, data, callback, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_21031108(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_21029804(this, 1, scenename, fade, data, 0, v5);
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        int32_t 1__state,
        const MethodInfo_2583984 *method)
{
  if ( !this )
    sub_B5D69C(0LL, 1__state);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_25839BC *method)
{
  int v2; // w2
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
  int32_t _1__state; // w8
  bool result; // w0
  int32_t v17; // w21
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  UIWidget_o *Component_UIWidget; // x22
  Il2CppClass *_0_T; // x23
  __int64 v22; // x23
  Il2CppClass *v23; // x22
  UnityEngine_Object_o *v24; // x0
  int32_t *v25; // x0
  System_String_o *name; // x20
  struct UnityEngine_AsyncOperation_o *v27; // x0
  struct UnityEngine_AsyncOperation_o **p_asyncOp_5__2; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  Il2CppObject *v35; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x0
  AvalonSceneManager__UnloadSceneAsync_d__42_T__o *v44; // x0
  const MethodInfo_2583C50 *v45; // x1
  int v46; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42F1377 & 1) == 0 )
  {
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v12, v13, v14);
    byte_42F1377 = 1;
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
      sub_B5D69C(RootGameObjects, method);
    if ( UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)RootGameObjects, 0LL) )
      goto LABEL_34;
    v46 = 0;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
    this->fields.__2__current = v35;
    p__2__current = &this->fields.__2__current;
    sub_B5D560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v35, v37, v38, v39, v40, v41, v42);
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
      v17 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
      while ( (v17 & 0x80000000) == 0 )
      {
        if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
        }
        m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v17, 0LL).fields.m_Handle;
        p_m_Handle = &m_Handle;
        RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                            (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                            0LL);
        if ( !RootGameObjects )
          goto LABEL_37;
        if ( !RootGameObjects->max_length )
        {
          v43 = sub_B5D6C8(RootGameObjects);
          sub_B5D668(v43, 0LL);
        }
        Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                               RootGameObjects->m_Items[0],
                               (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        _0_T = method->klass->rgctx_data->_0_T;
        if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4(method->klass->rgctx_data->_0_T);
        v22 = sub_B5D684(Component_UIWidget, _0_T);
        v23 = method->klass->rgctx_data->_0_T;
        if ( (BYTE2(v23->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4(method->klass->rgctx_data->_0_T);
        if ( v22 )
        {
          v24 = (UnityEngine_Object_o *)sub_B5D684(v22, v23);
          if ( !v24 )
          {
            sub_B5D990(v22);
            return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                      v44,
                                      v45);
          }
        }
        else
        {
          v24 = 0LL;
        }
        --v17;
        if ( UnityEngine_Object__op_Implicit(v24, 0LL) )
        {
          v25 = &m_Handle;
          name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v25, 0LL);
          if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          }
          v27 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_35694372(name, 0LL);
          this->fields._asyncOp_5__2 = v27;
          p_asyncOp_5__2 = &this->fields._asyncOp_5__2;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields._asyncOp_5__2,
            (System_Int32_array **)v27,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
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
        const MethodInfo_2583C50 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_2583C58 *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AvalonSceneManager__UnloadSceneAsync_d__42_object__System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_2583C98 *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_25839B8 *method)
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  struct AvalonSceneManager_o *_4__this; // x24
  BattleServantConfConponent_o *p_newTargetRoot_5__2; // x21
  UnityEngine_Object_o *targetRoot; // x22
  bool v36; // w22
  bool v37; // w0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_Int32_array **v45; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  bool v53; // w20
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UnityEngine_Object_o *newTargetRoot_5__2; // x22
  System_String_o *v62; // x22
  int32_t *v63; // x0
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v65; // x22
  unsigned int v66; // w27
  UnityEngine_GameObject_o *v67; // x23
  int v68; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v69; // x24
  int i; // w20
  AvalonSceneManager__changeNextSceneCoroutine_d__36_c **v71; // x8
  UnityEngine_Component_o *gameObject; // x25
  UnityEngine_Object_c *v73; // x0
  int v74; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o *v75; // x23
  unsigned int v76; // w20
  AvalonSceneManager__changeNextSceneCoroutine_d__36_c **v77; // x8
  UnityEngine_Component_o *v78; // x24
  UnityEngine_Object_c *v79; // x0
  UnityEngine_Object_o *klass; // x22
  System_String_o *scenename; // x22
  int32_t *p_m_Handle; // x0
  System_Int32_array **v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  UnityEngine_Object_o *v90; // x22
  System_String_o *v91; // x21
  BattleServantConfConponent_o *v92; // x19
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  UnityEngine_Object_o *v99; // x22
  UnityEngine_Object_o *v100; // x22
  AvalonSceneManager__changeNextSceneCoroutine_d__36_c *v101; // x8
  void (*v102)(void); // x9
  SceneRootComponent_o *v103; // x23
  SceneTemp_o *v104; // x22
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__36_o **p_targetRoot; // x21
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  Il2CppObject *v125; // x19
  BattleServantConfConponent_o *p_sendData; // x24
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v129; // x22
  UnityEngine_Object_o *v130; // x21
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_o *v137; // x20
  BattleServantConfConponent_o *v138; // x19
  __int64 v139; // x0
  struct AvalonSceneManager_o *v140; // [xsp+0h] [xbp-60h]
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_42E7543 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponents_Component___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&SceneTemp_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_2840/*"BattleScriptScene"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_2839/*"BattleScene"*/, v27, v28, v29);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42E7543 = 1;
  }
  m_Handle = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields._newTargetRoot_5__2 = 0LL;
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2;
      v8->fields.__1__state = -1;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_119;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v36 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
      v37 = System_String__op_Equality(v8->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !v36 )
        goto LABEL_12;
      if ( v37 )
        goto LABEL_13;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_119;
      v37 = SceneRootComponent__checkSceneName((SceneRootComponent_o *)this, v8->fields.scenename, 0LL);
LABEL_12:
      if ( v37 )
      {
LABEL_13:
        v44 = (System_Int32_array **)_4__this->fields.targetRoot;
        p_newTargetRoot_5__2->klass = (BattleServantConfConponent_c *)v44;
        sub_B5D560((BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2, v44, v38, v39, v40, v41, v42, v43);
      }
      if ( v8->fields.changeType <= 1u
        && System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_2840/*"BattleScriptScene"*/, 0LL)
        && System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_2839/*"BattleScene"*/, 0LL) )
      {
        v45 = (System_Int32_array **)AvalonSceneManager__setupUI(_4__this, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v45;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B5D560(p__2__current, v45, v47, v48, v49, v50, v51, v52);
        v53 = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return v53;
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
      v83 = (System_Int32_array **)AvalonSceneManager__getTargetRoot(_4__this, v8->fields.scenename, 0LL);
      v8->fields._newTargetRoot_5__2 = (struct SceneRootComponent_o *)v83;
      sub_B5D560(p_newTargetRoot_5__2, v83, v84, v85, v86, v87, v88, v89);
LABEL_72:
      v90 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v90, 0LL, 0LL) )
        goto LABEL_80;
      v91 = v8->fields.scenename;
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      v53 = 1;
      UnityEngine_SceneManagement_SceneManager__LoadScene(v91, 1, 0LL);
      v8->fields.__2__current = 0LL;
      v92 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(v92, 0LL, v93, v94, v95, v96, v97, v98);
      *(_DWORD *)&v92[-1].fields.isOpenAfter = 2;
      return v53;
    case 1:
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2;
      v8->fields.__1__state = -1;
      goto LABEL_62;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_119;
      v54 = (System_Int32_array **)AvalonSceneManager__getTargetRoot(_4__this, v8->fields.scenename, 0LL);
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2;
      v8->fields._newTargetRoot_5__2 = (struct SceneRootComponent_o *)v54;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._newTargetRoot_5__2, v54, v55, v56, v57, v58, v59, v60);
      newTargetRoot_5__2 = (UnityEngine_Object_o *)v8->fields._newTargetRoot_5__2;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(newTargetRoot_5__2, 0LL, 0LL) )
        return 0;
      v62 = v8->fields.scenename;
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v62, 0LL).fields.m_Handle;
      v63 = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                                                                       (UnityEngine_SceneManagement_Scene_o)v63,
                                                                       0LL);
      if ( !this )
        goto LABEL_119;
      _2__current = (int)this->fields.__2__current;
      v65 = this;
      if ( _2__current < 1 )
        goto LABEL_80;
      v140 = _4__this;
      v66 = 0;
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
    if ( v66 >= _2__current )
    {
LABEL_120:
      v139 = sub_B5D6C8(this);
      sub_B5D668(v139, 0LL);
    }
    v67 = (UnityEngine_GameObject_o *)*((_QWORD *)&v65->fields.__4__this + (int)v66);
    if ( !v67 )
      goto LABEL_119;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                                     v67,
                                                                     (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !this )
      goto LABEL_119;
    v68 = (int)this->fields.__2__current;
    v69 = this;
    if ( v68 >= 1 )
    {
      for ( i = 0; i < v68; ++i )
      {
        if ( i >= (unsigned int)v68 )
          goto LABEL_120;
        v71 = &v69->klass + i;
        gameObject = (UnityEngine_Component_o *)v71[4];
        if ( !gameObject )
          goto LABEL_119;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_Component__GetComponents_iTween_(
                                                                         (UnityEngine_Component_o *)v71[4],
                                                                         (const MethodInfo_1ADE5D4 *)Method_UnityEngine_Component_GetComponents_Component___);
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
          v73 = UnityEngine_Object_TypeInfo;
        }
        else
        {
          v73 = UnityEngine_Object_TypeInfo;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
            || UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            goto LABEL_44;
          }
        }
        j_il2cpp_runtime_class_init_0(v73);
LABEL_44:
        UnityEngine_Object__DestroyImmediate_35620448((UnityEngine_Object_o *)gameObject, 0LL);
        v68 = (int)v69->fields.__2__current;
      }
    }
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                                     v67,
                                                                     (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !this )
      goto LABEL_119;
    v74 = (int)this->fields.__2__current;
    v75 = this;
    if ( v74 >= 1 )
      break;
LABEL_59:
    _2__current = (int)v65->fields.__2__current;
    if ( (int)++v66 >= _2__current )
    {
      _4__this = v140;
LABEL_80:
      v99 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_Object__op_Inequality(v99, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !_4__this )
          goto LABEL_119;
        v100 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v100, 0LL, 0LL) )
        {
          if ( !_4__this->fields.prevscenetemp )
            goto LABEL_106;
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)_4__this->fields.targetRoot;
          if ( this )
          {
            v101 = this->klass;
            if ( v8->fields.changeType == 3 )
              v102 = (void (*)(void))v101->vtable._8_System_Collections_IEnumerator_Reset.method;
            else
              v102 = (void (*)(void))v101->vtable._7_System_Collections_IEnumerator_get_Current.method;
            v102();
LABEL_106:
            v129 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v130 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v129, v130, 0LL) )
            {
LABEL_118:
              v8->fields.__2__current = 0LL;
              v138 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B5D560(v138, 0LL, v131, v132, v133, v134, v135, v136);
              *(_DWORD *)&v138[-1].fields.isOpenAfter = 3;
              return 1;
            }
            this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)_4__this->fields.targetRoot;
            if ( this )
            {
              if ( v8->fields.changeType == 5 )
              {
                v137 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                }
                UnityEngine_SceneManagement_SceneManager__UnloadScene_35694092(v137, 0LL);
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
          sub_B5D69C(this, method);
        }
LABEL_94:
        v103 = (SceneRootComponent_o *)p_newTargetRoot_5__2->klass;
        v104 = (SceneTemp_o *)sub_B5D694(SceneTemp_TypeInfo);
        SceneTemp___ctor_17513572(v104, v103, 0LL);
        if ( !_4__this )
          goto LABEL_119;
        _4__this->fields.prevscenetemp = v104;
        sub_B5D560(
          (BattleServantConfConponent_o *)&_4__this->fields.prevscenetemp,
          (System_Int32_array **)v104,
          v105,
          v106,
          v107,
          v108,
          v109,
          v110);
        v111 = (System_Int32_array **)p_newTargetRoot_5__2->klass;
        p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o **)&_4__this->fields.targetRoot;
        _4__this->fields.targetRoot = (struct SceneRootComponent_o *)v111;
        sub_B5D560(
          (BattleServantConfConponent_o *)&_4__this->fields.targetRoot,
          v111,
          v113,
          v114,
          v115,
          v116,
          v117,
          v118);
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
          v125 = sendData;
          p_sendData->klass = 0LL;
          sub_B5D560(p_sendData, 0LL, v119, v120, v121, v122, v123, v124);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)p_sendData[-1].fields.BattleAssetUIAtlas;
          if ( !this )
            goto LABEL_119;
          ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__36_o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
            this,
            v125,
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
  v76 = 0;
  while ( 1 )
  {
    if ( v76 >= v74 )
      goto LABEL_120;
    v77 = &v75->klass + (int)v76;
    v78 = (UnityEngine_Component_o *)v77[4];
    if ( !v78 )
      goto LABEL_119;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)UnityEngine_Component__GetComponents_iTween_(
                                                                     (UnityEngine_Component_o *)v77[4],
                                                                     (const MethodInfo_1ADE5D4 *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !this )
      goto LABEL_119;
    if ( LODWORD(this->fields.__2__current) == 2 )
    {
      v78 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v78, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_58;
      }
      v79 = UnityEngine_Object_TypeInfo;
    }
    else
    {
      v79 = UnityEngine_Object_TypeInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_58;
      }
    }
    j_il2cpp_runtime_class_init_0(v79);
LABEL_58:
    UnityEngine_Object__DestroyImmediate_35620448((UnityEngine_Object_o *)v78, 0LL);
    v74 = (int)v75->fields.__2__current;
    if ( (int)++v76 >= v74 )
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__36_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  struct AvalonSceneManager_o *_4__this; // x20
  AvalonSceneManager_c *v31; // x0
  int32_t fadeType; // w8
  float duration_5__2; // s0
  int32_t v34; // w1
  BattleServantConfConponent_o *v35; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int v42; // w8
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  bool result; // w0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_Object_o *targetRoot; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  AvalonSceneManager__changePrevSceneCoroutine_d__35_o *v69; // x22
  UnityEngine_Object_o *v70; // x21
  int32_t v71; // w19
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *v74; // x21
  BattleServantConfConponent_o *p__2__current; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_42E7544 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&CommonEffectManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v24, v25, v26);
    this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)sub_B5D5C4(
                                                                     &Method_System_Collections_Generic_Stack_SceneTemp__get_Count__,
                                                                     v27,
                                                                     v28,
                                                                     v29);
    byte_42E7544 = 1;
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
      v31 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v31 = AvalonSceneManager_TypeInfo;
      }
      LODWORD(v8->fields._duration_5__2) = LODWORD(v31->static_fields->DEFAULT_FADE_TIME);
      if ( (unsigned int)(_4__this->fields.fadeType - 1) > 1 )
        goto LABEL_12;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_80;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
LABEL_12:
      if ( !v8->fields.fadeTimeSkip )
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B5D560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      v8->fields._duration_5__2 = 0.0;
LABEL_15:
      fadeType = _4__this->fields.fadeType;
      if ( fadeType == 2 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_80;
        duration_5__2 = v8->fields._duration_5__2;
        v34 = 2;
      }
      else
      {
        if ( fadeType != 1 )
          goto LABEL_31;
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_80;
        duration_5__2 = v8->fields._duration_5__2;
        v34 = 1;
      }
      CommonUI__maskFadeout((CommonUI_o *)this, v34, duration_5__2, 0LL, 0LL);
LABEL_31:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_80;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        v8->fields.__2__current = 0LL;
        v35 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B5D560(v35, 0LL, v50, v51, v52, v53, v54, v55);
        v42 = 2;
LABEL_34:
        *(_DWORD *)&v35[-1].fields.isOpenAfter = v42;
        return 1;
      }
LABEL_35:
      MainMenuBar__setButtonActive(0, 0LL);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.prevscenetemp, 0LL, v63, v64, v65, v66, v67, v68);
        }
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)_4__this->fields.scenestack;
        if ( this )
        {
          while ( SLODWORD(this->fields.__2__current) > 0 )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                                                             (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
                                                                             (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
            if ( !this )
              goto LABEL_80;
            v69 = this;
            v70 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(
                                            _4__this,
                                            *(System_String_o **)&this->fields.__1__state,
                                            0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Object__op_Inequality(
                                                                             v70,
                                                                             0LL,
                                                                             0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v70 )
                goto LABEL_80;
              if ( SceneRootComponent__checkSceneName(
                     (SceneRootComponent_o *)v70,
                     *(System_String_o **)&v69->fields.__1__state,
                     0LL) )
              {
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v70,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_80;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                (*(void (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&v70->klass[1]._1.this_arg.bits)(
                  v70,
                  v70->klass[1]._1.element_class);
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v70,
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
            v35 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B5D560(v35, 0LL, v56, v57, v58, v59, v60, v61);
            v42 = 3;
            goto LABEL_34;
          }
          if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          }
          v71 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
          if ( v71 >= 0 )
          {
            while ( 1 )
            {
              if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
              }
              m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v71, 0LL).fields.m_Handle;
              p_m_Handle = &m_Handle;
              name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
              v74 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(_4__this, name, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Object__op_Inequality(
                                                                               v74,
                                                                               0LL,
                                                                               0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v74 )
                  goto LABEL_80;
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v74,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_80;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              if ( --v71 < 0 )
                return 0;
            }
          }
          return 0;
        }
LABEL_80:
        sub_B5D69C(this, method);
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
      v35 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(v35, 0LL, v36, v37, v38, v39, v40, v41);
      v42 = 4;
      goto LABEL_34;
    case 4:
      v8->fields.__1__state = -1;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
      v35 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(v35, 0LL, v43, v44, v45, v46, v47, v48);
      v42 = 5;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__35_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager__changeSceneCoroutine_d__34_o *v4; // x19
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
  AvalonSceneManager_o *_4__this; // x20
  System_String_o *scenename; // x21
  int v22; // w21
  bool v23; // w0
  bool v24; // w0
  bool v25; // w0
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  bool result; // w0
  System_Action_o *callback; // x0
  System_Int32_array **v35; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int v43; // w8
  int32_t changeType; // w8
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_WaitForEndOfFrame_o *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  bool v59; // w0
  bool v60; // w0
  int32_t ConnectMarkEventId; // w1
  bool v62; // w2
  bool v63; // w22
  bool v64; // zf
  AvalonSceneManager__changeSceneCoroutine_d__34_o *v65; // x21

  v4 = this;
  if ( (byte_42E7545 & 1) == 0 )
  {
    sub_B5D5C4(&System_GC_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SceneList_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)sub_B5D5C4(
                                                                 &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                 v17,
                                                                 v18,
                                                                 v19);
    byte_42E7545 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      scenename = v4->fields.scenename;
      if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SceneList__getSceneType(scenename, 0LL);
      if ( (unsigned int)((_DWORD)this - 10) <= 0x3E
        && ((1LL << ((unsigned __int8)this - 10)) & 0x4004000053000001LL) != 0 )
      {
        if ( !_4__this )
          goto LABEL_55;
        v22 = (int)this;
        v23 = AvalonSceneManager__checkNowScene(_4__this, 10, 0LL);
        if ( v22 != 38 || !v23 )
        {
          v24 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
          if ( v22 != 10 || !v24 )
          {
            v25 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
            if ( v22 != 38 || !v25 )
            {
              v59 = AvalonSceneManager__checkNowScene(_4__this, 39, 0LL);
              if ( v22 == 40 && v59 || (v60 = AvalonSceneManager__checkNowScene(_4__this, 39, 0LL), v22 == 60) && v60 )
              {
                this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !this )
                  goto LABEL_55;
                ConnectMarkEventId = 0;
                v62 = 0;
              }
              else
              {
                v63 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
                this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v64 = v22 == 34;
                v65 = this;
                if ( v64 && v63 )
                {
                  if ( !this )
                    goto LABEL_55;
                  v62 = 1;
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
                  if ( !v65 )
                    goto LABEL_55;
                  v62 = 1;
                  this = v65;
                  ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
                }
              }
              CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, ConnectMarkEventId, v62, 0LL);
              goto LABEL_18;
            }
          }
        }
        this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0LL);
LABEL_18:
          v26 = (System_Int32_array **)AvalonSceneManager__changePrevSceneCoroutine(
                                         _4__this,
                                         v4->fields.changeType,
                                         v4->fields.scenename,
                                         v4->fields.fadeTimeSkip,
                                         0LL);
          v4->fields.__2__current = (Il2CppObject *)v26;
          sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, v26, v27, v28, v29, v30, v31, v32);
          result = 1;
          v4->fields.__1__state = 1;
          return result;
        }
      }
      else
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
          if ( _4__this )
            goto LABEL_18;
        }
      }
LABEL_55:
      sub_B5D69C(this, method);
    case 1:
      changeType = v4->fields.changeType;
      v4->fields.__1__state = -1;
      if ( changeType )
      {
        if ( !_4__this )
          goto LABEL_55;
LABEL_28:
        v45 = (System_Int32_array **)AvalonSceneManager__changeNextSceneCoroutine(
                                       _4__this,
                                       v4->fields.changeType,
                                       v4->fields.scenename,
                                       0LL);
        v4->fields.__2__current = (Il2CppObject *)v45;
        sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, v45, v46, v47, v48, v49, v50, v51);
        v4->fields.__1__state = 4;
      }
      else
      {
        v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v52, 0LL);
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_43893280(0LL);
        v4->fields.__2__current = (Il2CppObject *)v52;
        p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(p__2__current, (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
        v43 = 2;
LABEL_33:
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v43;
      }
      return 1;
    case 2:
      v4->fields.__1__state = -1;
      this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (AvalonSceneManager__changeSceneCoroutine_d__34_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      v35 = (System_Int32_array **)AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v35;
      p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(p__2__current, v35, v37, v38, v39, v40, v41, v42);
      v43 = 3;
      goto LABEL_33;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      goto LABEL_28;
    case 4:
      callback = v4->fields.callback;
      v4->fields.__1__state = -1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AvalonSceneManager__changeSceneCoroutine_d__34_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v46; // x20
  AtlasManager_o *Instance; // x0
  __int64 v48; // x1
  int32_t v49; // w21
  int32_t v50; // w8
  System_Action_o *v51; // x22
  System_Action_o *v52; // x22
  System_Action_o *v53; // x22
  System_Action_o *v54; // x22
  System_Func_bool__o *v55; // x21
  UnityEngine_WaitUntil_o *v56; // x20
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7

  if ( (byte_42E7546 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CommonEffectManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&OptionManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__0__, v23, v24, v25);
    sub_B5D5C4(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__1__, v26, v27, v28);
    sub_B5D5C4(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__2__, v29, v30, v31);
    sub_B5D5C4(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__3__, v32, v33, v34);
    sub_B5D5C4(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__4__, v35, v36, v37);
    sub_B5D5C4(&AvalonSceneManager___c__DisplayClass37_0_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v41, v42, v43);
    byte_42E7546 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v50 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v46 = sub_B5D694(AvalonSceneManager___c__DisplayClass37_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v46, 0LL);
    if ( !v46 )
      goto LABEL_46;
    *(_DWORD *)(v46 + 16) = 0;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v49 = OptionManager__isSavedMemoryMode(0LL) ? 1 : 10;
    Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData(Instance, 7, 0LL) )
    {
      *(_BYTE *)(v46 + 16) = 1;
    }
    else
    {
      v51 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v51,
        (Il2CppObject *)v46,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v51, 7, v49, 0LL);
    }
    Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData(Instance, 1, 0LL) )
    {
      *(_BYTE *)(v46 + 17) = 1;
    }
    else
    {
      v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v52,
        (Il2CppObject *)v46,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__1__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v52, 1, v49, 0LL);
    }
    Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_B5D69C(Instance, v48);
    if ( AtlasManager__isLoadedSkinData(Instance, 2, 0LL) )
    {
      *(_BYTE *)(v46 + 18) = 1;
    }
    else
    {
      v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v53,
        (Il2CppObject *)v46,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__2__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v53, 2, v49, 0LL);
    }
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    if ( CommonEffectManager__IsLoadedSkinData(0LL) )
    {
      *(_BYTE *)(v46 + 19) = 1;
    }
    else
    {
      v54 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v54,
        (Il2CppObject *)v46,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__3__,
        0LL);
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      CommonEffectManager__LoadSkinEffects(v54, v49, 0LL);
    }
    v55 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v55,
      (Il2CppObject *)v46,
      Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__4__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v56 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v56, v55, 0LL);
    this->fields.__2__current = (Il2CppObject *)v56;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    v50 = 1;
    result = 1;
  }
  this->fields.__1__state = v50;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AvalonSceneManager__setupUI_d__37_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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