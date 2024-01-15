void __fastcall AvalonSceneManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F6E9B & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v1);
    byte_40F6E9B = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void __fastcall AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F6E9A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Stack_SceneTemp__TypeInfo, v7);
    byte_40F6E9A = 1;
  }
  v8 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B170CC(
                                                                                             System_Collections_Generic_Stack_SceneTemp__TypeInfo,
                                                                                             method,
                                                                                             v2,
                                                                                             v3,
                                                                                             v4);
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
    v8,
    (const MethodInfo_2BCD288 *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.scenestack,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_18B4A40 *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct SceneRootComponent_o *targetRoot; // x23
  Il2CppClass *_0_T; // x22
  UnityEngine_Component_o *v13; // x0
  SceneRootComponent_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  System_Type_o *v18; // x0
  __int64 v19; // x8
  BattleResultComponent_o *v20; // x0
  System_String_o *SceneName; // x19
  AvalonSceneManager_o *v22; // x0
  const MethodInfo_18B4C24 *v23; // x1
  System_RuntimeTypeHandle_o v24; // 0:w0.4
  System_RuntimeTypeHandle_o v25; // 0:w0.4

  if ( (byte_40FA635 & 1) == 0 )
  {
    sub_B16FFC(&BattleRootComponent_var, *(_QWORD *)&sceneType);
    sub_B16FFC(&BattleRootComponent_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v9);
    sub_B16FFC(&System_Type_TypeInfo, v10);
    byte_40FA635 = 1;
  }
  if ( !this )
    goto LABEL_24;
  if ( !AvalonSceneManager__checkNowScene(this, sceneType, 0LL) )
    return;
  targetRoot = this->fields.targetRoot;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T);
  if ( !targetRoot )
    goto LABEL_24;
  v13 = (UnityEngine_Component_o *)sub_B170BC(targetRoot, _0_T);
  if ( !v13 )
  {
    v22 = (AvalonSceneManager_o *)sub_B173C8(targetRoot);
    AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(v22, v23);
    return;
  }
  v14 = (SceneRootComponent_o *)v13;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v24.fields.value = (int)_1_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v24, 0LL);
  v25.fields.value = (int)BattleRootComponent_var;
  v18 = System_Type__GetTypeFromHandle(v25, 0LL);
  if ( !System_Type__op_Equality(TypeFromHandle, v18, 0LL) )
    goto LABEL_18;
  if ( !sub_B170BC(v14, BattleRootComponent_TypeInfo)
    || (v19 = *(_QWORD *)(sub_B170BC(v14, BattleRootComponent_TypeInfo) + 72)) == 0
    || (v20 = *(BattleResultComponent_o **)(v19 + 456)) == 0LL )
  {
LABEL_24:
    sub_B170D4();
  }
  BattleResultComponent__EndResult(v20, 0LL);
LABEL_18:
  if ( forceUnload )
  {
    SceneName = SceneRootComponent__getSceneName(v14, 0LL);
    if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    }
    UnityEngine_SceneManagement_SceneManager__UnloadScene_34883320(SceneName, 0LL);
  }
}


SceneRootComponent_o *__fastcall AvalonSceneManager__GetStackedRootComponent(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8
  System_String_o *StackSceneName; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40F6E99 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_40F6E99 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B170D4();
  if ( !scenestack->fields._size )
    return 0LL;
  StackSceneName = AvalonSceneManager__getStackSceneName(this, method);
  return AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)StackSceneName, StackSceneName, v5);
}


bool __fastcall AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  if ( (byte_40F6E87 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_40F6E87 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B170D4();
  return scenestack->fields._size > 0;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__UnloadSceneAsync_TerminalSceneComponent_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_18B4E04 *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppClass *_0_AvalonSceneManager__UnloadSceneAsync_d__42_T; // x21
  __int64 v8; // x0
  const MethodInfo_18B4E04_RGCTXs *rgctx_data; // x8
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  _0_AvalonSceneManager__UnloadSceneAsync_d__42_T = method->rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__42_T_;
  if ( (BYTE2(_0_AvalonSceneManager__UnloadSceneAsync_d__42_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__42_T_);
  v8 = sub_B170CC(_0_AvalonSceneManager__UnloadSceneAsync_d__42_T, callback, method, v3, v4);
  rgctx_data = method->rgctx_data;
  v10 = v8;
  ((void (__fastcall *)(__int64, _QWORD))rgctx_data->_1_AvalonSceneManager__UnloadSceneAsync_d__42_T___ctor->methodPointer)(
    v8,
    0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 32) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)callback, v11, v12, v13, v14, v15, v16);
  return (System_Collections_IEnumerator_o *)v10;
}


void __fastcall AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
        AvalonSceneManager_o *this,
        const MethodInfo_18B4C24 *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t i; // w20
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UIWidget_o *Component_UIWidget; // x21
  Il2CppClass *_0_T; // x22
  __int64 v12; // x22
  Il2CppClass *v13; // x21
  UnityEngine_Object_o *v14; // x0
  int32_t *v15; // x0
  System_String_o *name; // x21
  AvalonSceneManager_o *v17; // x0
  System_Action_o *v18; // x1
  const MethodInfo_18B4E04 *v19; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA636 & 1) == 0 )
  {
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v4);
    byte_40FA636 = 1;
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
      sub_B170D4();
    if ( !RootGameObjects->max_length )
    {
      sub_B17100(RootGameObjects, v8, v9);
      sub_B170A0();
    }
    Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                           RootGameObjects->m_Items[0],
                           (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_0_T);
    v12 = sub_B170BC(Component_UIWidget, _0_T);
    v13 = method->rgctx_data->_0_T;
    if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_0_T);
    if ( v12 )
    {
      v14 = (UnityEngine_Object_o *)sub_B170BC(v12, v13);
      if ( !v14 )
      {
        v17 = (AvalonSceneManager_o *)sub_B173C8(v12);
        AvalonSceneManager__UnloadSceneAsync_TerminalSceneComponent_(v17, v18, v19);
        return;
      }
    }
    else
    {
      v14 = 0LL;
    }
    if ( UnityEngine_Object__op_Implicit(v14, 0LL) )
    {
      v15 = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v15, 0LL);
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      UnityEngine_SceneManagement_SceneManager__UnloadScene_34883320(name, 0LL);
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
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F6E96 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager__changeNextSceneCoroutine_d__36_TypeInfo, *(_QWORD *)&changeType);
    byte_40F6E96 = 1;
  }
  v8 = sub_B170CC(
         AvalonSceneManager__changeNextSceneCoroutine_d__36_TypeInfo,
         *(_QWORD *)&changeType,
         scenename,
         method,
         v4);
  AvalonSceneManager__changeNextSceneCoroutine_d__36___ctor(
    (AvalonSceneManager__changeNextSceneCoroutine_d__36_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 48) = changeType;
  *(_QWORD *)(v8 + 40) = scenename;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)scenename, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__changePrevSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F6E95 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager__changePrevSceneCoroutine_d__35_TypeInfo, *(_QWORD *)&changeType);
    byte_40F6E95 = 1;
  }
  v8 = sub_B170CC(
         AvalonSceneManager__changePrevSceneCoroutine_d__35_TypeInfo,
         *(_QWORD *)&changeType,
         scenename,
         fadeTimeSkip,
         method);
  AvalonSceneManager__changePrevSceneCoroutine_d__35___ctor(
    (AvalonSceneManager__changePrevSceneCoroutine_d__35_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 44) = changeType;
  *(_BYTE *)(v8 + 40) = fadeTimeSkip;
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

  if ( (byte_40F6E91 & 1) == 0 )
  {
    sub_B16FFC(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_40F6E91 = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_19205044(this, 2, SceneName, fade, data, 0, v10);
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
  __int64 v11; // x23
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_40F6E94 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager__changeSceneCoroutine_d__34_TypeInfo, *(_QWORD *)&changeType);
    byte_40F6E94 = 1;
  }
  v11 = sub_B170CC(
          AvalonSceneManager__changeSceneCoroutine_d__34_TypeInfo,
          *(_QWORD *)&changeType,
          scenename,
          fadeTimeSkip,
          callback);
  AvalonSceneManager__changeSceneCoroutine_d__34___ctor((AvalonSceneManager__changeSceneCoroutine_d__34_o *)v11, 0, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v11 + 48) = changeType;
  *(_QWORD *)(v11 + 32) = scenename;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)scenename, v18, v19, v20, v21, v22, v23);
  *(_BYTE *)(v11 + 52) = fadeTimeSkip;
  *(_QWORD *)(v11 + 56) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 56), (System_Int32_array **)callback, v24, v25, v26, v27, v28, v29);
  return (System_Collections_IEnumerator_o *)v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_19205044(
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x5
  System_Collections_IEnumerator_o *v22; // x0

  if ( (byte_40F6E92 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, *(_QWORD *)&changeType);
    byte_40F6E92 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CrashReporter__LeaveBreadcrumb(Instance, scenename, 0LL);
  v13 = 1;
  this->fields.fadeType = fade;
  this->fields.isBusySceneChange = 1;
  this->fields.sendData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sendData,
    (System_Int32_array **)data,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v22 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0LL, v21);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v22, 0LL);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_19205800(
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x5
  System_Collections_IEnumerator_o *v22; // x0

  if ( (byte_40F6E93 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, *(_QWORD *)&changeType);
    byte_40F6E93 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CrashReporter__LeaveBreadcrumb(Instance, scenename, 0LL);
  v13 = 1;
  this->fields.fadeType = fade;
  this->fields.isBusySceneChange = 1;
  this->fields.sendData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sendData,
    (System_Int32_array **)data,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v22 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, 0, callback, v21);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v22, 0LL);
  return v13;
}


bool __fastcall AvalonSceneManager__changeScene_19206372(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_19205044(this, 2, scenename, fade, data, 0, v5);
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

  if ( (byte_40F6E8B & 1) == 0 )
  {
    sub_B16FFC(&SceneList_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v4);
    byte_40F6E8B = 1;
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

  if ( (byte_40F6E89 & 1) == 0 )
  {
    sub_B16FFC(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_40F6E89 = 1;
  }
  if ( !this->fields.prevscenetemp )
    return 0;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  prevscenetemp = this->fields.prevscenetemp;
  if ( !prevscenetemp )
    sub_B170D4();
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

  if ( (byte_40F6E8A & 1) == 0 )
  {
    sub_B16FFC(&SceneList_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, v5);
    byte_40F6E8A = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B170D4();
  v7 = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Peek(
         (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
         (const MethodInfo_2BCD820 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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

  if ( (byte_40F6E86 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__, v9);
    byte_40F6E86 = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.prevscenetemp, 0LL, v2, v3, v4, v5, v6, v7);
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B170D4();
  System_Collections_Generic_Stack_SceneTemp___Clear(
    scenestack,
    (const MethodInfo_2BCD44C *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetRoot, 0LL, v11, v12, v13, v14, v15, v16);
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
    UnityEngine_SceneManagement_SceneManager__UnloadScene_34883320(name, 0LL);
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

  sendData = this->fields.sendData;
  p_sendData = (BattleServantConfConponent_o *)&this->fields.sendData;
  v9 = sendData;
  p_sendData->klass = 0LL;
  sub_B16F98(p_sendData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( !comp )
    sub_B170D4();
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

  if ( (byte_40F6E88 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, method);
    byte_40F6E88 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    sub_B170D4();
  result = (System_String_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Peek(
                                (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)scenestack,
                                (const MethodInfo_2BCD820 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  UnityEngine_GameObject_array *v13; // x20
  unsigned int v14; // w22
  UnityEngine_GameObject_o *v15; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F6E85 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___, scenenName);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v5);
    byte_40F6E85 = 1;
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
    v13 = RootGameObjects;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
        {
          sub_B17100(RootGameObjects, v10, v11);
          sub_B170A0();
        }
        v15 = v13->m_Items[v14];
        if ( !v15 )
          break;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v15,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
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
        max_length = v13->max_length;
        if ( (int)++v14 >= max_length )
          return 0LL;
      }
LABEL_21:
      sub_B170D4();
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

  return AvalonSceneManager__popScene_19205284(this, fade, data, 0, v4);
}


bool __fastcall AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_19205284(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__popScene_19205284(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        bool isRefresh,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *scenestack; // x0
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v11; // x0
  const MethodInfo *v12; // x6
  int32_t v13; // w1

  if ( (byte_40F6E8D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, *(_QWORD *)&fade);
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, v9);
    byte_40F6E8D = 1;
  }
  scenestack = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  if ( scenestack->fields._size < 1 )
    return 0;
  v11 = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
          scenestack,
          (const MethodInfo_2BCD890 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !v11 )
LABEL_11:
    sub_B170D4();
  if ( isRefresh )
    v13 = 5;
  else
    v13 = 4;
  AvalonSceneManager__changeScene_19205044(this, v13, *(System_String_o **)&v11->fields, fade, data, 0, v12);
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
  struct System_Collections_Generic_Stack_SceneTemp__o *v19; // x0
  const MethodInfo *v20; // x6

  if ( (byte_40F6E8C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&SceneList_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp__Push__, v11);
    byte_40F6E8C = 1;
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
        (const MethodInfo_2BCD91C *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( AvalonSceneManager__changeScene_19205044(this, 3, SceneName, fade, data, 0, v17) )
    return 1;
  if ( prevscenetemp )
  {
    v19 = this->fields.scenestack;
    if ( v19 )
    {
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
        (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)v19,
        (const MethodInfo_2BCD890 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_19205044(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v20);
      return 0;
    }
LABEL_19:
    sub_B170D4();
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

  if ( (byte_40F6E98 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, flag);
    byte_40F6E98 = 1;
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
    sub_B170D4();
  return SceneRootComponent__SetSceneActive(v6, flag, 0LL);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__setupUI(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AvalonSceneManager__setupUI_d__37_o *v5; // x19

  if ( (byte_40F6E97 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager__setupUI_d__37_TypeInfo, method);
    byte_40F6E97 = 1;
  }
  v5 = (AvalonSceneManager__setupUI_d__37_o *)sub_B170CC(AvalonSceneManager__setupUI_d__37_TypeInfo, method, v2, v3, v4);
  AvalonSceneManager__setupUI_d__37___ctor(v5, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v5;
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

  if ( (byte_40F6E8E & 1) == 0 )
  {
    sub_B16FFC(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_40F6E8E = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_19205044(this, 1, SceneName, fade, data, 0, v10);
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

  if ( (byte_40F6E90 & 1) == 0 )
  {
    sub_B16FFC(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_40F6E90 = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_19205044(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__transitionScene_19205640(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_40F6E8F & 1) == 0 )
  {
    sub_B16FFC(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_40F6E8F = 1;
  }
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_19205800(this, 1, SceneName, fade, data, callback, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_19206348(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_19205044(this, 1, scenename, fade, data, 0, v5);
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        int32_t 1__state,
        const MethodInfo_24B090C *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_24B0944 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  bool result; // w0
  int32_t v9; // w21
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UIWidget_o *Component_UIWidget; // x22
  Il2CppClass *_0_T; // x23
  __int64 v16; // x23
  Il2CppClass *v17; // x22
  UnityEngine_Object_o *v18; // x0
  int32_t *v19; // x0
  System_String_o *name; // x20
  struct UnityEngine_AsyncOperation_o *v21; // x0
  UnityEngine_AsyncOperation_o **p_asyncOp_5__2; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  Il2CppObject *v29; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  AvalonSceneManager__UnloadSceneAsync_d__42_T__o *v37; // x0
  const MethodInfo_24B0BD8 *v38; // x1
  int v39; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4102789 & 1) == 0 )
  {
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, method);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v6);
    byte_4102789 = 1;
  }
  m_Handle = 0;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p_asyncOp_5__2 = &this->fields._asyncOp_5__2;
    this->fields.__1__state = -1;
LABEL_32:
    if ( !*p_asyncOp_5__2 )
LABEL_37:
      sub_B170D4();
    if ( UnityEngine_AsyncOperation__get_isDone(*p_asyncOp_5__2, 0LL) )
      goto LABEL_34;
    v39 = 0;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    this->fields.__2__current = v29;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v29, v31, v32, v33, v34, v35, v36);
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
          sub_B17100(RootGameObjects, v12, v13);
          sub_B170A0();
        }
        Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                               RootGameObjects->m_Items[0],
                               (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        _0_T = method->klass->rgctx_data->_0_T;
        if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC(method->klass->rgctx_data->_0_T);
        v16 = sub_B170BC(Component_UIWidget, _0_T);
        v17 = method->klass->rgctx_data->_0_T;
        if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC(method->klass->rgctx_data->_0_T);
        if ( v16 )
        {
          v18 = (UnityEngine_Object_o *)sub_B170BC(v16, v17);
          if ( !v18 )
          {
            sub_B173C8(v16);
            return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                      v37,
                                      v38);
          }
        }
        else
        {
          v18 = 0LL;
        }
        --v9;
        if ( UnityEngine_Object__op_Implicit(v18, 0LL) )
        {
          v19 = &m_Handle;
          name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v19, 0LL);
          if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          }
          v21 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_34883600(name, 0LL);
          this->fields._asyncOp_5__2 = v21;
          p_asyncOp_5__2 = &this->fields._asyncOp_5__2;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._asyncOp_5__2,
            (System_Int32_array **)v21,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
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
        const MethodInfo_24B0BD8 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_24B0BE0 *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AvalonSceneManager__UnloadSceneAsync_d__42_object__System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_24B0C20 *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__42_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__42_T__o *this,
        const MethodInfo_24B0940 *method)
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
  SceneRootComponent_o *v28; // x0
  System_Int32_array **v29; // x1
  Il2CppObject *v30; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  bool v38; // w20
  struct SceneRootComponent_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Object_o *newTargetRoot_5__2; // x22
  System_String_o *v47; // x22
  int32_t *v48; // x0
  _DWORD *RootGameObjects; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  int v52; // w8
  _DWORD *v53; // x22
  unsigned int v54; // w27
  UnityEngine_GameObject_o *v55; // x23
  int v56; // w8
  _DWORD *v57; // x24
  int i; // w20
  _DWORD *v59; // x8
  UnityEngine_Component_o *gameObject; // x25
  iTween_array *Components_iTween; // x0
  UnityEngine_Object_c *v62; // x0
  int v63; // w8
  _DWORD *v64; // x23
  unsigned int v65; // w20
  _DWORD *v66; // x8
  UnityEngine_Component_o *v67; // x24
  iTween_array *v68; // x0
  UnityEngine_Object_c *v69; // x0
  UnityEngine_Object_o *klass; // x22
  System_String_o *scenename; // x22
  int32_t *p_m_Handle; // x0
  struct SceneRootComponent_o *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  UnityEngine_Object_o *v80; // x22
  System_String_o *v81; // x21
  Il2CppObject **v82; // x19
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  UnityEngine_Object_o *v89; // x22
  UnityEngine_Object_o *v90; // x22
  struct SceneRootComponent_o *v91; // x0
  SceneRootComponent_c *v92; // x8
  void (*v93)(void); // x9
  SceneRootComponent_o *v94; // x23
  SceneTemp_o *v95; // x22
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x1
  struct SceneRootComponent_o **p_targetRoot; // x21
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  UnityEngine_Component_o *v110; // x0
  UnityEngine_GameObject_o *v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  Il2CppObject *v118; // x19
  BattleServantConfConponent_o *p_sendData; // x24
  Il2CppObject *sendData; // t1
  struct UIAtlas_o *BattleAssetUIAtlas; // x0
  UnityEngine_Object_o *v123; // x22
  UnityEngine_Object_o *v124; // x21
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  SceneRootComponent_o *v131; // x0
  System_String_o *v132; // x20
  UnityEngine_GameObject_o *v133; // x0
  Il2CppObject **v134; // x19
  struct AvalonSceneManager_o *v135; // [xsp+0h] [xbp-60h]
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F914D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponents_Component___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v12);
    sub_B16FFC(&SceneTemp_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_2773/*"BattleScriptScene"*/, v14);
    sub_B16FFC(&StringLiteral_2772/*"BattleScene"*/, v15);
    sub_B16FFC(&StringLiteral_1/*""*/, v16);
    byte_40F914D = 1;
  }
  m_Handle = 0;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields._newTargetRoot_5__2 = 0LL;
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&this->fields._newTargetRoot_5__2;
      this->fields.__1__state = -1;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._newTargetRoot_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_119;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v20 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
      v21 = System_String__op_Equality(this->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !v20 )
        goto LABEL_12;
      if ( v21 )
        goto LABEL_13;
      v28 = _4__this->fields.targetRoot;
      if ( !v28 )
        goto LABEL_119;
      v21 = SceneRootComponent__checkSceneName(v28, this->fields.scenename, 0LL);
LABEL_12:
      if ( v21 )
      {
LABEL_13:
        v29 = (System_Int32_array **)_4__this->fields.targetRoot;
        p_newTargetRoot_5__2->klass = (BattleServantConfConponent_c *)v29;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields._newTargetRoot_5__2, v29, v22, v23, v24, v25, v26, v27);
      }
      if ( this->fields.changeType <= 1u
        && System_String__op_Inequality(this->fields.scenename, (System_String_o *)StringLiteral_2773/*"BattleScriptScene"*/, 0LL)
        && System_String__op_Inequality(this->fields.scenename, (System_String_o *)StringLiteral_2772/*"BattleScene"*/, 0LL) )
      {
        v30 = (Il2CppObject *)AvalonSceneManager__setupUI(_4__this, 0LL);
        this->fields.__2__current = v30;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v30,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        v38 = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return v38;
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
      scenename = this->fields.scenename;
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(scenename, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      if ( !UnityEngine_SceneManagement_Scene__get_isLoaded((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL) )
        goto LABEL_72;
      if ( !_4__this )
        goto LABEL_119;
      v73 = AvalonSceneManager__getTargetRoot(_4__this, this->fields.scenename, 0LL);
      this->fields._newTargetRoot_5__2 = v73;
      sub_B16F98(p_newTargetRoot_5__2, (System_Int32_array **)v73, v74, v75, v76, v77, v78, v79);
LABEL_72:
      v80 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v80, 0LL, 0LL) )
        goto LABEL_80;
      v81 = this->fields.scenename;
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      v38 = 1;
      UnityEngine_SceneManagement_SceneManager__LoadScene(v81, 1, 0LL);
      this->fields.__2__current = 0LL;
      v82 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v82, 0LL, v83, v84, v85, v86, v87, v88);
      *((_DWORD *)v82 - 2) = 2;
      return v38;
    case 1:
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&this->fields._newTargetRoot_5__2;
      this->fields.__1__state = -1;
      goto LABEL_62;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_119;
      v39 = AvalonSceneManager__getTargetRoot(_4__this, this->fields.scenename, 0LL);
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&this->fields._newTargetRoot_5__2;
      this->fields._newTargetRoot_5__2 = v39;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._newTargetRoot_5__2,
        (System_Int32_array **)v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      newTargetRoot_5__2 = (UnityEngine_Object_o *)this->fields._newTargetRoot_5__2;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(newTargetRoot_5__2, 0LL, 0LL) )
        return 0;
      v47 = this->fields.scenename;
      if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      }
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v47, 0LL).fields.m_Handle;
      v48 = &m_Handle;
      RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                          (UnityEngine_SceneManagement_Scene_o)v48,
                          0LL);
      if ( !RootGameObjects )
        goto LABEL_119;
      v52 = RootGameObjects[6];
      v53 = RootGameObjects;
      if ( v52 < 1 )
        goto LABEL_80;
      v135 = _4__this;
      v54 = 0;
      break;
    case 3:
      p_newTargetRoot_5__2 = (BattleServantConfConponent_o *)&this->fields._newTargetRoot_5__2;
      this->fields.__1__state = -1;
      goto LABEL_94;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v54 >= v52 )
    {
LABEL_120:
      sub_B17100(RootGameObjects, v50, v51);
      sub_B170A0();
    }
    v55 = *(UnityEngine_GameObject_o **)&v53[2 * v54 + 8];
    if ( !v55 )
      goto LABEL_119;
    RootGameObjects = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                        v55,
                        (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !RootGameObjects )
      goto LABEL_119;
    v56 = RootGameObjects[6];
    v57 = RootGameObjects;
    if ( v56 >= 1 )
    {
      for ( i = 0; i < v56; ++i )
      {
        if ( i >= (unsigned int)v56 )
          goto LABEL_120;
        v59 = &v57[2 * i];
        gameObject = (UnityEngine_Component_o *)*((_QWORD *)v59 + 4);
        if ( !gameObject )
          goto LABEL_119;
        Components_iTween = UnityEngine_Component__GetComponents_iTween_(
                              *((UnityEngine_Component_o **)v59 + 4),
                              (const MethodInfo_18BD75C *)Method_UnityEngine_Component_GetComponents_Component___);
        if ( !Components_iTween )
          goto LABEL_119;
        if ( Components_iTween->max_length == 1 )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
            || UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            goto LABEL_44;
          }
          v62 = UnityEngine_Object_TypeInfo;
        }
        else
        {
          v62 = UnityEngine_Object_TypeInfo;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
            || UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            goto LABEL_44;
          }
        }
        j_il2cpp_runtime_class_init_0(v62);
LABEL_44:
        UnityEngine_Object__DestroyImmediate_34809676((UnityEngine_Object_o *)gameObject, 0LL);
        v56 = v57[6];
      }
    }
    RootGameObjects = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                        v55,
                        (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !RootGameObjects )
      goto LABEL_119;
    v63 = RootGameObjects[6];
    v64 = RootGameObjects;
    if ( v63 >= 1 )
      break;
LABEL_59:
    v52 = v53[6];
    if ( (int)++v54 >= v52 )
    {
      _4__this = v135;
LABEL_80:
      v89 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v89, 0LL, 0LL) )
      {
        if ( !_4__this )
          goto LABEL_119;
        v90 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
        {
          if ( !_4__this->fields.prevscenetemp )
            goto LABEL_106;
          v91 = _4__this->fields.targetRoot;
          if ( v91 )
          {
            v92 = v91->klass;
            if ( this->fields.changeType == 3 )
              v93 = (void (*)(void))v92->vtable._8_beginPause.method;
            else
              v93 = (void (*)(void))v92->vtable._7_beginFinish.method;
            v93();
LABEL_106:
            v123 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v124 = (UnityEngine_Object_o *)p_newTargetRoot_5__2->klass;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v123, v124, 0LL) )
            {
LABEL_118:
              this->fields.__2__current = 0LL;
              v134 = &this->fields.__2__current;
              sub_B16F98((BattleServantConfConponent_o *)v134, 0LL, v125, v126, v127, v128, v129, v130);
              *((_DWORD *)v134 - 2) = 3;
              return 1;
            }
            v131 = _4__this->fields.targetRoot;
            if ( v131 )
            {
              if ( this->fields.changeType == 5 )
              {
                v132 = SceneRootComponent__getSceneName(v131, 0LL);
                if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                }
                UnityEngine_SceneManagement_SceneManager__UnloadScene_34883320(v132, 0LL);
                goto LABEL_118;
              }
              v133 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v131, 0LL);
              if ( v133 )
              {
                UnityEngine_GameObject__SetActive(v133, 0, 0LL);
                goto LABEL_118;
              }
            }
          }
LABEL_119:
          sub_B170D4();
        }
LABEL_94:
        v94 = (SceneRootComponent_o *)p_newTargetRoot_5__2->klass;
        v95 = (SceneTemp_o *)sub_B170CC(SceneTemp_TypeInfo, method, v2, v3, v4);
        SceneTemp___ctor_29752520(v95, v94, 0LL);
        if ( !_4__this )
          goto LABEL_119;
        _4__this->fields.prevscenetemp = v95;
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.prevscenetemp,
          (System_Int32_array **)v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
        v102 = (System_Int32_array **)p_newTargetRoot_5__2->klass;
        p_targetRoot = &_4__this->fields.targetRoot;
        _4__this->fields.targetRoot = (struct SceneRootComponent_o *)v102;
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.targetRoot,
          v102,
          v104,
          v105,
          v106,
          v107,
          v108,
          v109);
        v110 = (UnityEngine_Component_o *)_4__this->fields.targetRoot;
        if ( !v110 )
          goto LABEL_119;
        v111 = UnityEngine_Component__get_gameObject(v110, 0LL);
        if ( !v111 )
          goto LABEL_119;
        UnityEngine_GameObject__SetActive(v111, 1, 0LL);
        _4__this->fields.isBusySceneChange = 0;
        if ( (this->fields.changeType & 0xFFFFFFFE) == 4 )
        {
          sendData = _4__this->fields.sendData;
          p_sendData = (BattleServantConfConponent_o *)&_4__this->fields.sendData;
          v118 = sendData;
          p_sendData->klass = 0LL;
          sub_B16F98(p_sendData, 0LL, v112, v113, v114, v115, v116, v117);
          BattleAssetUIAtlas = p_sendData[-1].fields.BattleAssetUIAtlas;
          if ( !BattleAssetUIAtlas )
            goto LABEL_119;
          ((void (__fastcall *)(struct UIAtlas_o *, Il2CppObject *, void *))BattleAssetUIAtlas->klass[1]._1.parent)(
            BattleAssetUIAtlas,
            v118,
            BattleAssetUIAtlas->klass[1]._1.generic_class);
        }
        else
        {
          if ( !*p_targetRoot )
            goto LABEL_119;
          ((void (__fastcall *)(struct SceneRootComponent_o *, Il2CppMethodPointer))(*p_targetRoot)->klass->vtable._4_beginInitialize.method)(
            *p_targetRoot,
            (*p_targetRoot)->klass->vtable._5_beginStartUp.methodPtr);
        }
      }
      return 0;
    }
  }
  v65 = 0;
  while ( 1 )
  {
    if ( v65 >= v63 )
      goto LABEL_120;
    v66 = &v64[2 * v65];
    v67 = (UnityEngine_Component_o *)*((_QWORD *)v66 + 4);
    if ( !v67 )
      goto LABEL_119;
    v68 = UnityEngine_Component__GetComponents_iTween_(
            *((UnityEngine_Component_o **)v66 + 4),
            (const MethodInfo_18BD75C *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !v68 )
      goto LABEL_119;
    if ( v68->max_length == 2 )
    {
      v67 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v67, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_58;
      }
      v69 = UnityEngine_Object_TypeInfo;
    }
    else
    {
      v69 = UnityEngine_Object_TypeInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_58;
      }
    }
    j_il2cpp_runtime_class_init_0(v69);
LABEL_58:
    UnityEngine_Object__DestroyImmediate_34809676((UnityEngine_Object_o *)v67, 0LL);
    v63 = v64[6];
    if ( (int)++v65 >= v63 )
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__36_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct AvalonSceneManager_o *_4__this; // x20
  AvalonSceneManager_c *v17; // x0
  CommonUI_o *Instance; // x0
  int32_t fadeType; // w8
  CommonUI_o *v20; // x0
  float duration_5__2; // s0
  int32_t v22; // w1
  Il2CppObject **v23; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int v30; // w8
  AtlasManager_o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  bool result; // w0
  CommonUI_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  CommonUI_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_Object_o *targetRoot; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct SceneRootComponent_o *v60; // x0
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *scenestack; // x0
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v62; // x0
  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *v63; // x22
  UnityEngine_Component_o *v64; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v66; // x0
  int32_t v67; // w19
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x0
  UnityEngine_Component_o *v70; // x21
  UnityEngine_GameObject_o *v71; // x0
  Il2CppObject **p__2__current; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F914E & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&CommonEffectManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, v15);
    byte_40F914E = 1;
  }
  m_Handle = 0;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
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
      LODWORD(this->fields._duration_5__2) = LODWORD(v17->static_fields->DEFAULT_FADE_TIME);
      if ( (unsigned int)(_4__this->fields.fadeType - 1) > 1 )
        goto LABEL_12;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
LABEL_12:
      if ( !this->fields.fadeTimeSkip )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      this->fields._duration_5__2 = 0.0;
LABEL_15:
      fadeType = _4__this->fields.fadeType;
      if ( fadeType == 2 )
      {
        v20 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v20 )
          goto LABEL_80;
        duration_5__2 = this->fields._duration_5__2;
        v22 = 2;
      }
      else
      {
        if ( fadeType != 1 )
          goto LABEL_31;
        v20 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v20 )
          goto LABEL_80;
        duration_5__2 = this->fields._duration_5__2;
        v22 = 1;
      }
      CommonUI__maskFadeout(v20, v22, duration_5__2, 0LL, 0LL);
LABEL_31:
      v39 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v39 )
        goto LABEL_80;
      if ( CommonUI__maskFadeIsBusy(v39, 0LL) )
      {
        this->fields.__2__current = 0LL;
        v23 = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)v23, 0LL, v40, v41, v42, v43, v44, v45);
        v30 = 2;
LABEL_34:
        *((_DWORD *)v23 - 2) = v30;
        return 1;
      }
LABEL_35:
      MainMenuBar__setButtonActive(0, 0LL);
      v46 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v46 )
        goto LABEL_80;
      CommonUI__InitTurotialArrowMark(v46, 0LL);
      if ( this->fields.changeType <= 1u )
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
            v60 = _4__this->fields.targetRoot;
            if ( !v60 )
              goto LABEL_80;
            ((void (__fastcall *)(struct SceneRootComponent_o *, Il2CppMethodPointer))v60->klass->vtable._7_beginFinish.method)(
              v60,
              v60->klass->vtable._8_beginPause.methodPtr);
          }
          _4__this->fields.prevscenetemp = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.prevscenetemp, 0LL, v54, v55, v56, v57, v58, v59);
        }
        scenestack = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)_4__this->fields.scenestack;
        if ( scenestack )
        {
          while ( scenestack->fields._size > 0 )
          {
            v62 = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                    scenestack,
                    (const MethodInfo_2BCD890 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
            if ( !v62 )
              goto LABEL_80;
            v63 = v62;
            v64 = (UnityEngine_Component_o *)AvalonSceneManager__getTargetRoot(
                                               _4__this,
                                               *(System_String_o **)&v62->fields,
                                               0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v64, 0LL, 0LL) )
            {
              if ( !v64 )
                goto LABEL_80;
              if ( SceneRootComponent__checkSceneName(
                     (SceneRootComponent_o *)v64,
                     *(System_String_o **)&v63->fields,
                     0LL) )
              {
                gameObject = UnityEngine_Component__get_gameObject(v64, 0LL);
                if ( !gameObject )
                  goto LABEL_80;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                (*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&v64->klass[1]._1.this_arg.bits)(
                  v64,
                  v64->klass[1]._1.element_class);
                v66 = UnityEngine_Component__get_gameObject(v64, 0LL);
                if ( !v66 )
                  goto LABEL_80;
                UnityEngine_GameObject__SetActive(v66, 0, 0LL);
              }
            }
            scenestack = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)_4__this->fields.scenestack;
            if ( !scenestack )
              goto LABEL_80;
          }
          if ( !this->fields.changeType )
          {
            this->fields.__2__current = 0LL;
            v23 = &this->fields.__2__current;
            sub_B16F98((BattleServantConfConponent_o *)v23, 0LL, v47, v48, v49, v50, v51, v52);
            v30 = 3;
            goto LABEL_34;
          }
          if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          }
          v67 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
          if ( v67 >= 0 )
          {
            while ( 1 )
            {
              if ( (BYTE3(UnityEngine_SceneManagement_SceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
              }
              m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v67, 0LL).fields.m_Handle;
              p_m_Handle = &m_Handle;
              name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
              v70 = (UnityEngine_Component_o *)AvalonSceneManager__getTargetRoot(_4__this, name, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v70, 0LL, 0LL) )
              {
                if ( !v70 )
                  goto LABEL_80;
                v71 = UnityEngine_Component__get_gameObject(v70, 0LL);
                if ( !v71 )
                  goto LABEL_80;
                UnityEngine_GameObject__SetActive(v71, 0, 0LL);
              }
              if ( --v67 < 0 )
                return 0;
            }
          }
          return 0;
        }
LABEL_80:
        sub_B170D4();
      }
      return 0;
    case 1:
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_80;
    case 2:
      this->fields.__1__state = -1;
      goto LABEL_31;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_80;
      AvalonSceneManager__destroySceneObject(_4__this, 0LL);
      this->fields.__2__current = 0LL;
      v23 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v23, 0LL, v24, v25, v26, v27, v28, v29);
      v30 = 4;
      goto LABEL_34;
    case 4:
      this->fields.__1__state = -1;
      v31 = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !v31 )
        goto LABEL_80;
      AtlasManager__ReleaseNoneResidentAtlas(v31, 0LL);
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      CommonEffectManager__ReleaseSkinEffects(0LL);
      this->fields.__2__current = 0LL;
      v23 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v23, 0LL, v32, v33, v34, v35, v36, v37);
      v30 = 5;
      goto LABEL_34;
    case 5:
      result = 0;
      this->fields.__1__state = -1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__35_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AvalonSceneManager_o *_4__this; // x20
  System_String_o *scenename; // x21
  int32_t SceneType; // w0
  int32_t v14; // w21
  bool v15; // w0
  bool v16; // w0
  bool v17; // w0
  CommonUI_o *v18; // x0
  Il2CppObject *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  bool result; // w0
  System_Action_o *callback; // x0
  AssetManager_o *v28; // x0
  AssetManager_o *v29; // x0
  Il2CppObject *v30; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int v38; // w8
  int32_t changeType; // w8
  Il2CppObject *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_WaitForEndOfFrame_o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  CommonUI_o *v54; // x0
  bool v55; // w0
  bool v56; // w0
  CommonUI_o *Instance; // x0
  int32_t ConnectMarkEventId; // w1
  bool v59; // w2
  bool v60; // w22
  bool v61; // zf
  CommonUI_o *v62; // x21

  if ( (byte_40F914F & 1) == 0 )
  {
    sub_B16FFC(&System_GC_TypeInfo, method);
    sub_B16FFC(&SceneList_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v10);
    byte_40F914F = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      scenename = this->fields.scenename;
      if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneType = SceneList__getSceneType(scenename, 0LL);
      if ( (unsigned int)(SceneType - 10) <= 0x3E
        && ((1LL << ((unsigned __int8)SceneType - 10)) & 0x4004000053000001LL) != 0 )
      {
        if ( !_4__this )
          goto LABEL_55;
        v14 = SceneType;
        v15 = AvalonSceneManager__checkNowScene(_4__this, 10, 0LL);
        if ( v14 != 38 || !v15 )
        {
          v16 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
          if ( v14 != 10 || !v16 )
          {
            v17 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
            if ( v14 != 38 || !v17 )
            {
              v55 = AvalonSceneManager__checkNowScene(_4__this, 39, 0LL);
              if ( v14 == 40 && v55 || (v56 = AvalonSceneManager__checkNowScene(_4__this, 39, 0LL), v14 == 60) && v56 )
              {
                Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !Instance )
                  goto LABEL_55;
                ConnectMarkEventId = 0;
                v59 = 0;
              }
              else
              {
                v60 = AvalonSceneManager__checkNowScene(_4__this, 9, 0LL);
                Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v61 = v14 == 34;
                v62 = Instance;
                if ( v61 && v60 )
                {
                  if ( !Instance )
                    goto LABEL_55;
                  v59 = 1;
                  ConnectMarkEventId = 0;
                }
                else
                {
                  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  }
                  if ( !v62 )
                    goto LABEL_55;
                  v59 = 1;
                  Instance = v62;
                  ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
                }
              }
              CommonUI__CheckChangeOtherConnectMarkFromEventId(Instance, ConnectMarkEventId, v59, 0LL);
              goto LABEL_18;
            }
          }
        }
        v18 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( v18 )
        {
          CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs(v18, 0LL);
LABEL_18:
          v19 = (Il2CppObject *)AvalonSceneManager__changePrevSceneCoroutine(
                                  _4__this,
                                  this->fields.changeType,
                                  this->fields.scenename,
                                  this->fields.fadeTimeSkip,
                                  0LL);
          this->fields.__2__current = v19;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__2__current,
            (System_Int32_array **)v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          result = 1;
          this->fields.__1__state = 1;
          return result;
        }
      }
      else
      {
        v54 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( v54 )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId(v54, 0, 0, 0LL);
          if ( _4__this )
            goto LABEL_18;
        }
      }
LABEL_55:
      sub_B170D4();
    case 1:
      changeType = this->fields.changeType;
      this->fields.__1__state = -1;
      if ( changeType )
      {
        if ( !_4__this )
          goto LABEL_55;
LABEL_28:
        v40 = (Il2CppObject *)AvalonSceneManager__changeNextSceneCoroutine(
                                _4__this,
                                this->fields.changeType,
                                this->fields.scenename,
                                0LL);
        this->fields.__2__current = v40;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__2__current,
          (System_Int32_array **)v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        this->fields.__1__state = 4;
      }
      else
      {
        v47 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
        UnityEngine_WaitForEndOfFrame___ctor(v47, 0LL);
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_42843716(0LL);
        this->fields.__2__current = (Il2CppObject *)v47;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        v38 = 2;
LABEL_33:
        *((_DWORD *)p__2__current - 2) = v38;
      }
      return 1;
    case 2:
      this->fields.__1__state = -1;
      v28 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !v28 )
        goto LABEL_55;
      AssetManager__RequestUnloadUnusedAssets(v28, 0LL, 0LL);
      v29 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !v29 )
        goto LABEL_55;
      v30 = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(v29, 0LL);
      this->fields.__2__current = v30;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v30,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      v38 = 3;
      goto LABEL_33;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      goto LABEL_28;
    case 4:
      callback = this->fields.callback;
      this->fields.__1__state = -1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AvalonSceneManager__changeSceneCoroutine_d__34_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v21; // x20
  int32_t v22; // w21
  AtlasManager_o *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  int32_t v28; // w8
  System_Action_o *v29; // x22
  AtlasManager_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x22
  AtlasManager_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Action_o *v46; // x22
  System_Func_bool__o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  UnityEngine_WaitUntil_o *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  if ( (byte_40F9150 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v6);
    sub_B16FFC(&CommonEffectManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v8);
    sub_B16FFC(&System_Func_bool__TypeInfo, v9);
    sub_B16FFC(&OptionManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v11);
    sub_B16FFC(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__0__, v12);
    sub_B16FFC(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__1__, v13);
    sub_B16FFC(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__2__, v14);
    sub_B16FFC(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__3__, v15);
    sub_B16FFC(&Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__4__, v16);
    sub_B16FFC(&AvalonSceneManager___c__DisplayClass37_0_TypeInfo, v17);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v18);
    byte_40F9150 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v28 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v21 = sub_B170CC(AvalonSceneManager___c__DisplayClass37_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor((Il2CppObject *)v21, 0LL);
    if ( !v21 )
      goto LABEL_46;
    *(_DWORD *)(v21 + 16) = 0;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    v22 = OptionManager__isSavedMemoryMode(0LL) ? 1 : 10;
    Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData(Instance, 7, 0LL) )
    {
      *(_BYTE *)(v21 + 16) = 1;
    }
    else
    {
      v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
      System_Action___ctor(
        v29,
        (Il2CppObject *)v21,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v29, 7, v22, 0LL);
    }
    v30 = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !v30 )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData(v30, 1, 0LL) )
    {
      *(_BYTE *)(v21 + 17) = 1;
    }
    else
    {
      v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
      System_Action___ctor(
        v35,
        (Il2CppObject *)v21,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__1__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v35, 1, v22, 0LL);
    }
    v36 = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !v36 )
LABEL_46:
      sub_B170D4();
    if ( AtlasManager__isLoadedSkinData(v36, 2, 0LL) )
    {
      *(_BYTE *)(v21 + 18) = 1;
    }
    else
    {
      v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
      System_Action___ctor(
        v41,
        (Il2CppObject *)v21,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__2__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadUISkin(v41, 2, v22, 0LL);
    }
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    if ( CommonEffectManager__IsLoadedSkinData(0LL) )
    {
      *(_BYTE *)(v21 + 19) = 1;
    }
    else
    {
      v46 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v42, v43, v44, v45);
      System_Action___ctor(
        v46,
        (Il2CppObject *)v21,
        Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__3__,
        0LL);
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      CommonEffectManager__LoadSkinEffects(v46, v22, 0LL);
    }
    v47 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v42, v43, v44, v45);
    System_Func_bool____ctor(
      v47,
      (Il2CppObject *)v21,
      Method_AvalonSceneManager___c__DisplayClass37_0__setupUI_b__4__,
      (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
    v52 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v48, v49, v50, v51);
    UnityEngine_WaitUntil___ctor(v52, v47, 0LL);
    this->fields.__2__current = (Il2CppObject *)v52;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    v28 = 1;
    result = 1;
  }
  this->fields.__1__state = v28;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AvalonSceneManager__setupUI_d__37_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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