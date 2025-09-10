void AvalonSceneManager___cctor(const MethodInfo *method)
{
  if ( (byte_4C268E3 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    byte_4C268E3 = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Stack_T__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Diagnostics_Stopwatch_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C268E2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
    sub_1C2D490(&System_Collections_Generic_Stack_SceneTemp__TypeInfo);
    sub_1C2D490(&System_Diagnostics_Stopwatch_TypeInfo);
    byte_4C268E2 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v3,
    (const MethodInfo_3413944 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent___ctor__);
  this->fields.dicRootComponent = (struct System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dicRootComponent, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Stack_T__o *)sub_1C2D6DC(System_Collections_Generic_Stack_SceneTemp__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v6,
    (const MethodInfo_39E9C74 *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scenestack, (int32_t)v6, v7, v8);
  v9 = (System_Diagnostics_Stopwatch_o *)sub_1C2D6DC(System_Diagnostics_Stopwatch_TypeInfo);
  System_Diagnostics_Stopwatch___ctor(v9, 0);
  this->fields._transitionStopwatch = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._transitionStopwatch, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.m_listUnloadScenes = (struct System_Collections_Generic_List_string__o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_listUnloadScenes, (int32_t)v12, v13, v14);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


void AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_30B63DC *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  long double v10; // q0
  struct SceneRootComponent_o *targetRoot; // x24
  Il2CppClass *_0_T; // x23
  UnityEngine_Component_o *v13; // x0
  SceneRootComponent_o *v14; // x21
  Il2CppType *_1_T; // x22
  System_RuntimeTypeHandle_o v16; // x0
  System_Type_o *TypeFromHandle; // x22
  System_RuntimeTypeHandle_o v18; // x0
  System_Type_o *v19; // x0
  __int64 naturalAligment; // x10
  intptr_t m_CachedPtr; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x19
  System_String_o *SceneName; // x20
  System_String_o *v24; // x19
  AvalonSceneManager_o *v25; // x0
  int32_t v26; // w1
  const MethodInfo_30B6634 *v27; // x2

  if ( !method->rgctx_data )
  {
    sub_1C2D490(&BattleRootComponent_var);
    sub_1C2D490(&BattleRootComponent_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1C2D490(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C7DC00(method);
  }
  gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager__checkNowScene(this, sceneType, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    targetRoot = this->fields.targetRoot;
    _0_T = method->rgctx_data->_0_T;
    if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_1C7DBA4(v10);
      _0_T = (Il2CppClass *)gameObject;
    }
    if ( targetRoot )
    {
      v13 = (UnityEngine_Component_o *)sub_1C2D5CC(targetRoot, _0_T);
      if ( !v13 )
      {
        sub_1C2D9AC(targetRoot);
        AvalonSceneManager__GetSceneRootComponent_object_(v25, v26, v27);
        return;
      }
      v14 = (SceneRootComponent_o *)v13;
      gameObject = UnityEngine_Component__get_gameObject(v13, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        _1_T = method->rgctx_data->_1_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v16.fields.value = (intptr_t)_1_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0);
        v18.fields.value = (intptr_t)BattleRootComponent_var;
        v19 = System_Type__GetTypeFromHandle(v18, 0);
        gameObject = (UnityEngine_GameObject_o *)System_Type__op_Equality(TypeFromHandle, v19, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment;
          if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment )
            goto LABEL_26;
          if ( (BattleRootComponent_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != BattleRootComponent_TypeInfo )
            goto LABEL_26;
          m_CachedPtr = v14[1].fields.m_CachedPtr;
          if ( !m_CachedPtr )
            goto LABEL_26;
          gameObject = *(UnityEngine_GameObject_o **)(m_CachedPtr + 528);
          if ( !gameObject )
            goto LABEL_26;
          BattleResultComponent__EndResult((BattleResultComponent_o *)gameObject, 0);
        }
        if ( !forceUnload )
          return;
        dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicRootComponent;
        SceneName = SceneRootComponent__getSceneName(v14, 0);
        if ( !SceneList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)SceneList__getSceneType(SceneName, 0);
        if ( dicRootComponent )
        {
          System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
            dicRootComponent,
            (int32_t)gameObject,
            0,
            (const MethodInfo_3414304 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
          v24 = SceneRootComponent__getSceneName(v14, 0);
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_71217592(v24, 0);
          return;
        }
      }
    }
LABEL_26:
    sub_1C2D6EC(gameObject, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *AvalonSceneManager__GetSceneRootComponent_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        const MethodInfo_30B6634 *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x0
  long double v7; // q0
  Il2CppObject *v8; // x20
  Il2CppClass *_0_T; // x1
  __int64 v10; // x20
  long double v11; // q0
  Il2CppClass *v12; // x19
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TryGetValue__);
    if ( !method->rgctx_data )
      sub_1C7DC00(method);
  }
  value = 0;
  dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicRootComponent;
  if ( !dicRootComponent )
    sub_1C2D6EC(0, *(_QWORD *)&sceneType);
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
         dicRootComponent,
         sceneType,
         &value,
         (const MethodInfo_3415A8C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TryGetValue__) )
  {
    v8 = value;
    _0_T = method->rgctx_data->_0_T;
    if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1C7DBA4(v7);
    v10 = sub_1C2D5CC(v8, _0_T);
    v12 = method->rgctx_data->_0_T;
    if ( (*(&v12->_2.bitflags2 + 2) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1C7DBA4(v11);
    if ( v10 )
    {
      result = (Il2CppObject *)sub_1C2D5CC(v10, v12);
      if ( result )
        return result;
      sub_1C2D9AC(v10);
    }
  }
  return 0;
}


SceneRootComponent_o *AvalonSceneManager__GetStackedRootComponent(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8
  AvalonSceneManager_o *StackSceneName; // x0
  const MethodInfo *v5; // x2

  v2 = this;
  if ( (byte_4C268E0 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4C268E0 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1C2D6EC(this, method);
  if ( !scenestack->fields._size )
    return 0;
  StackSceneName = (AvalonSceneManager_o *)AvalonSceneManager__getStackSceneName(v2, method);
  return AvalonSceneManager__getTargetRoot(StackSceneName, (System_String_o *)StackSceneName, v5);
}


bool AvalonSceneManager__IsNothingUnloadScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *m_listUnloadScenes; // x8

  v2 = this;
  if ( (byte_4C268CB & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4C268CB = 1;
  }
  m_listUnloadScenes = v2->fields.m_listUnloadScenes;
  if ( !m_listUnloadScenes )
    sub_1C2D6EC(this, method);
  return m_listUnloadScenes->fields._size == 0;
}


bool AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  v2 = this;
  if ( (byte_4C268CF & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4C268CF = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1C2D6EC(this, method);
  return scenestack->fields._size > 0;
}


void AvalonSceneManager__StartTransitionTime(AvalonSceneManager_o *this, const MethodInfo *method)
{
  struct System_Diagnostics_Stopwatch_o *transitionStopwatch; // x0

  transitionStopwatch = this->fields._transitionStopwatch;
  if ( !transitionStopwatch )
    goto LABEL_5;
  if ( transitionStopwatch->fields.is_running )
    return;
  System_Diagnostics_Stopwatch__Reset(transitionStopwatch, 0);
  transitionStopwatch = this->fields._transitionStopwatch;
  if ( !transitionStopwatch )
LABEL_5:
    sub_1C2D6EC(transitionStopwatch, method);
  System_Diagnostics_Stopwatch__Start(transitionStopwatch, 0);
}


void AvalonSceneManager__StopTransitionTime(
        AvalonSceneManager_o *this,
        System_String_o *strSceneName,
        const MethodInfo *method)
{
  System_Diagnostics_Stopwatch_o *transitionStopwatch; // x0
  System_TimeSpan_o v6; // x0
  Il2CppObject *Instance; // x20
  double v8; // d0
  Il2CppObject *v9; // x20
  int64_t ticks; // [xsp+8h] [xbp-38h] BYREF
  double TotalSeconds; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C268E1 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C2D490(&System_TimeSpan_TypeInfo);
    sub_1C2D490(&StringLiteral_19729/*"game.last_scene_transtime"*/);
    sub_1C2D490(&StringLiteral_7473/*"IN_"*/);
    byte_4C268E1 = 1;
  }
  TotalSeconds = 0.0;
  transitionStopwatch = this->fields._transitionStopwatch;
  if ( !transitionStopwatch )
    goto LABEL_12;
  if ( !transitionStopwatch->fields.is_running )
    return;
  System_Diagnostics_Stopwatch__Stop(transitionStopwatch, 0);
  transitionStopwatch = this->fields._transitionStopwatch;
  if ( !transitionStopwatch )
    goto LABEL_12;
  ticks = System_Diagnostics_Stopwatch__get_Elapsed(transitionStopwatch, 0).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v6.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v6, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  transitionStopwatch = (System_Diagnostics_Stopwatch_o *)System_Double__ToString(v8, (const MethodInfo *)&TotalSeconds);
  if ( !Instance
    || (CrashReporter__AddCustomKey(
          (CrashReporter_o *)Instance,
          (System_String_o *)StringLiteral_19729/*"game.last_scene_transtime"*/,
          (System_String_o *)transitionStopwatch,
          0),
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
        transitionStopwatch = (System_Diagnostics_Stopwatch_o *)System_String__Concat_63457864(
                                                                  (System_String_o *)StringLiteral_7473/*"IN_"*/,
                                                                  strSceneName,
                                                                  0),
        !v9) )
  {
LABEL_12:
    sub_1C2D6EC(transitionStopwatch, strSceneName);
  }
  CrashReporter__SetNowState((CrashReporter_o *)v9, (System_String_o *)transitionStopwatch, 0);
}


System_Collections_IEnumerator_o *AvalonSceneManager__UnloadSceneAsync_object_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_30B6954 *method)
{
  long double v3; // q0
  const MethodInfo_30B6954_RGCTXs *rgctx_data; // x8
  __int64 _0_AvalonSceneManager__UnloadSceneAsync_d__47_T; // x0
  AvalonSceneManager__UnloadSceneAsync_d__47_T__o *v9; // x0
  const MethodInfo_30B6954_RGCTXs *v10; // x8
  AvalonSceneManager__UnloadSceneAsync_d__47_T__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C7DC00(method);
    rgctx_data = method->rgctx_data;
  }
  _0_AvalonSceneManager__UnloadSceneAsync_d__47_T = (__int64)rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__47_T_;
  if ( (*(&rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__47_T_->_2.bitflags2 + 2) & 1) == 0 )
    _0_AvalonSceneManager__UnloadSceneAsync_d__47_T = sub_1C7DBA4(v3);
  v9 = (AvalonSceneManager__UnloadSceneAsync_d__47_T__o *)sub_1C2D6DC(_0_AvalonSceneManager__UnloadSceneAsync_d__47_T);
  v10 = method->rgctx_data;
  v11 = v9;
  AvalonSceneManager__UnloadSceneAsync_d__47_object____ctor(
    v9,
    0,
    (const MethodInfo_33F4FFC *)v10->_1_AvalonSceneManager__UnloadSceneAsync_d__47_T___ctor);
  if ( !v11 )
    sub_1C2D6EC(v12, v13);
  v11->fields.__4__this = this;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.__4__this, (int32_t)this, v14, v15);
  v11->fields.callback = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.callback, (int32_t)callback, v16, v17);
  return (System_Collections_IEnumerator_o *)v11;
}


void AvalonSceneManager__UnloadScene_object_(AvalonSceneManager_o *this, const MethodInfo_30B6718 *method)
{
  int32_t i; // w21
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x22
  long double inited; // q0
  Il2CppClass *_0_T; // x1
  __int64 v12; // x23
  long double v13; // q0
  Il2CppClass *v14; // x22
  UnityEngine_Object_o *v15; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x22
  int32_t *v17; // x0
  System_String_o *name; // x23
  int32_t *v19; // x0
  System_String_o *v20; // x22
  AvalonSceneManager_o *v21; // x0
  System_Action_o *v22; // x1
  const MethodInfo_30B6954 *v23; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C7DC00(method);
  }
  m_Handle = 0;
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  for ( i = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0) - 1; i >= 0; --i )
  {
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(i, 0).fields.m_Handle;
    p_m_Handle = &m_Handle;
    RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                        (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                        0);
    if ( !RootGameObjects )
LABEL_30:
      sub_1C2D6EC(RootGameObjects, v7);
    if ( !LODWORD(RootGameObjects->max_length) )
      sub_1C2D6F4(RootGameObjects, v7, v8);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         RootGameObjects->m_Items[0],
                         (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    _0_T = method->rgctx_data->_0_T;
    if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1C7DBA4(inited);
    v12 = sub_1C2D5CC(Component_object, _0_T);
    v14 = method->rgctx_data->_0_T;
    if ( (*(&v14->_2.bitflags2 + 2) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1C7DBA4(v13);
    if ( v12 )
    {
      v15 = (UnityEngine_Object_o *)sub_1C2D5CC(v12, v14);
      if ( !v15 )
      {
        sub_1C2D9AC(v12);
        AvalonSceneManager__UnloadSceneAsync_object_(v21, v22, v23);
        return;
      }
    }
    else
    {
      v15 = 0;
    }
    if ( UnityEngine_Object__op_Implicit(v15, 0) )
    {
      dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicRootComponent;
      v17 = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v17, 0);
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      RootGameObjects = (UnityEngine_GameObject_array *)SceneList__getSceneType(name, 0);
      if ( !dicRootComponent )
        goto LABEL_30;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        dicRootComponent,
        (int32_t)RootGameObjects,
        0,
        (const MethodInfo_3414304 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
      v19 = &m_Handle;
      v20 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v19, 0);
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_71217592(v20, 0);
    }
  }
}


System_Collections_IEnumerator_o *AvalonSceneManager__changeNextSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C268DD & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager__changeNextSceneCoroutine_d__41_TypeInfo);
    byte_4C268DD = 1;
  }
  v7 = sub_1C2D6DC(AvalonSceneManager__changeNextSceneCoroutine_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 48) = changeType;
  *(_QWORD *)(v7 + 40) = scenename;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), (int32_t)scenename, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *AvalonSceneManager__changePrevSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  bool v9; // w23
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C268DC & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager__changePrevSceneCoroutine_d__40_TypeInfo);
    byte_4C268DC = 1;
  }
  v9 = fadeTimeSkip;
  v10 = sub_1C2D6DC(AvalonSceneManager__changePrevSceneCoroutine_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(_DWORD *)(v10 + 44) = changeType;
  *(_QWORD *)(v10 + 48) = scenename;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 48), (int32_t)scenename, v13, v14);
  *(_BYTE *)(v10 + 40) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


bool AvalonSceneManager__changeScene(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v10; // x6

  if ( (byte_4C268D8 & 1) == 0 )
  {
    sub_1C2D490(&SceneList_TypeInfo);
    byte_4C268D8 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0);
  return AvalonSceneManager__changeScene_40936176(this, 2, SceneName, fade, data, 0, v10);
}


System_Collections_IEnumerator_o *AvalonSceneManager__changeSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        bool fadeTimeSkip,
        System_Action_o *callback,
        const MethodInfo *method)
{
  bool v11; // w24
  __int64 v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C268DB & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager__changeSceneCoroutine_d__39_TypeInfo);
    byte_4C268DB = 1;
  }
  v11 = fadeTimeSkip;
  v12 = sub_1C2D6DC(AvalonSceneManager__changeSceneCoroutine_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 40) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 40), (int32_t)this, v13, v14);
  *(_DWORD *)(v12 + 48) = changeType;
  *(_QWORD *)(v12 + 32) = scenename;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 32), (int32_t)scenename, v15, v16);
  *(_BYTE *)(v12 + 52) = v11;
  *(_QWORD *)(v12 + 56) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 56), (int32_t)callback, v17, v18);
  return (System_Collections_IEnumerator_o *)v12;
}


bool AvalonSceneManager__changeScene_40936176(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v19; // x23
  int32_t SceneType; // w23
  int32_t v21; // w0
  const MethodInfo *v22; // x5
  TerminalSceneComponent_c *v23; // x0
  TerminalSceneComponent_c *v24; // x0
  System_Collections_IEnumerator_o *v25; // x0

  if ( (byte_4C268D9 & 1) == 0 )
  {
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_19728/*"game.last_scene"*/);
    byte_4C268D9 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance
    || (CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v15);
  }
  CrashReporter__AddCustomKey((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_19728/*"game.last_scene"*/, scenename, 0);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sendData, (int32_t)data, v16, v17);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v19 = prevscenetemp->fields.sceneName;
  else
    v19 = 0;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v19, 0);
  v21 = SceneList__getSceneType(scenename, 0);
  if ( SceneType == 9 )
  {
    if ( v21 == 34 )
    {
      v23 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v23 = TerminalSceneComponent_TypeInfo;
      }
      v23->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v21 == 34 )
  {
    v24 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v24 = TerminalSceneComponent_TypeInfo;
    }
    v24->static_fields->isSummonToTerminalTransition = 1;
  }
  v25 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v25, 0);
  return 1;
}


bool AvalonSceneManager__changeScene_40937144(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v19; // x23
  int32_t SceneType; // w23
  int32_t v21; // w0
  const MethodInfo *v22; // x5
  TerminalSceneComponent_c *v23; // x0
  TerminalSceneComponent_c *v24; // x0
  System_Collections_IEnumerator_o *v25; // x0

  if ( (byte_4C268DA & 1) == 0 )
  {
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_19728/*"game.last_scene"*/);
    byte_4C268DA = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance
    || (CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v15);
  }
  CrashReporter__AddCustomKey((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_19728/*"game.last_scene"*/, scenename, 0);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sendData, (int32_t)data, v16, v17);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v19 = prevscenetemp->fields.sceneName;
  else
    v19 = 0;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v19, 0);
  v21 = SceneList__getSceneType(scenename, 0);
  if ( SceneType == 9 )
  {
    if ( v21 == 34 )
    {
      v23 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v23 = TerminalSceneComponent_TypeInfo;
      }
      v23->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v21 == 34 )
  {
    v24 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v24 = TerminalSceneComponent_TypeInfo;
    }
    v24->static_fields->isSummonToTerminalTransition = 1;
  }
  v25 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, 0, callback, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v25, 0);
  return 1;
}


bool AvalonSceneManager__changeScene_40937944(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_40936176(this, 2, scenename, fade, data, 0, v5);
}


bool AvalonSceneManager__checkLoadedScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  System_String_o *SceneName; // x19
  int32_t *p_m_Handle; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C268D2 & 1) == 0 )
  {
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4C268D2 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0);
  if ( System_String__IsNullOrEmpty(SceneName, 0) )
  {
    return 0;
  }
  else
  {
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(SceneName, 0).fields.m_Handle;
    p_m_Handle = &m_Handle;
    return UnityEngine_SceneManagement_Scene__get_isLoaded((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0);
  }
}


bool AvalonSceneManager__checkNowScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  struct SceneTemp_o *prevscenetemp; // x8

  prevscenetemp = this->fields.prevscenetemp;
  return prevscenetemp && prevscenetemp->fields.sceneType == type;
}


// local variable allocation has failed, the output may be wrong!
bool AvalonSceneManager__checkStackScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  Il2CppObject *v6; // x0

  if ( (byte_4C268D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
    byte_4C268D1 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1C2D6EC(0, *(_QWORD *)&type);
  v6 = System_Collections_Generic_Stack_object___Peek(
         scenestack,
         (const MethodInfo_39EA1F8 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( v6 )
    LOBYTE(v6) = LODWORD(v6[1].monitor) == type;
  return (char)v6;
}


System_Collections_IEnumerator_o *AvalonSceneManager__checkUnloadScenes(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C268CC & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager__checkUnloadScenes_d__18_TypeInfo);
    byte_4C268CC = 1;
  }
  v3 = sub_1C2D6DC(AvalonSceneManager__checkUnloadScenes_d__18_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void AvalonSceneManager__destroySceneObject(AvalonSceneManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  int32_t v10; // w20
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x21
  int32_t *v13; // x0
  System_String_o *v14; // x21
  System_Collections_Generic_List_object__o *m_listUnloadScenes; // x21
  int32_t *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Collections_Generic_Stack_T__o *v22; // x1
  Il2CppClass **v23; // x0
  System_Collections_IEnumerator_o *v24; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C268CD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
    byte_4C268CD = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.prevscenetemp, 0, v2, v3);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_23;
  System_Collections_Generic_Stack_object___Clear(
    scenestack,
    (const MethodInfo_39E9E48 *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetRoot, 0, v7, v8);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.dicRootComponent;
  if ( !scenestack )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_Int32Enum__object___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)scenestack,
    (const MethodInfo_34144A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__Clear__);
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  v10 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0) - 1;
  if ( v10 >= 0 )
  {
    while ( 1 )
    {
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v10, 0).fields.m_Handle;
      p_m_Handle = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0);
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      scenestack = (System_Collections_Generic_Stack_T__o *)SceneList__getSceneName(0, 0);
      if ( !name )
        break;
      if ( !System_String__Contains(name, (System_String_o *)scenestack, 0) )
      {
        v13 = &m_Handle;
        v14 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v13, 0);
        if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
        UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_71217592(v14, 0);
        m_listUnloadScenes = (System_Collections_Generic_List_object__o *)this->fields.m_listUnloadScenes;
        v16 = &m_Handle;
        scenestack = (System_Collections_Generic_Stack_T__o *)UnityEngine_SceneManagement_Scene__get_name(
                                                                (UnityEngine_SceneManagement_Scene_o)v16,
                                                                0);
        if ( !m_listUnloadScenes )
          break;
        items = m_listUnloadScenes->fields._items;
        v20 = Method_System_Collections_Generic_List_string__Add__;
        ++m_listUnloadScenes->fields._version;
        if ( !items )
          break;
        size = m_listUnloadScenes->fields._size;
        v22 = scenestack;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            m_listUnloadScenes,
            (Il2CppObject *)scenestack,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          m_listUnloadScenes->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v22;
          sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
        }
      }
      if ( --v10 < 0 )
        goto LABEL_22;
    }
LABEL_23:
    sub_1C2D6EC(scenestack, v5);
  }
LABEL_22:
  v24 = AvalonSceneManager__checkUnloadScenes(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v24, 0);
}


void AvalonSceneManager__endInitialize(
        AvalonSceneManager_o *this,
        SceneRootComponent_o *comp,
        const MethodInfo *method)
{
  __int64 v5; // x21
  SceneRootComponent_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  SceneRootComponent_o **v10; // x20
  Il2CppObject *sendData; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  System_Object_array *v16; // x22
  int32_t v17; // w1
  System_Func_object__bool__o *v18; // x23
  System_String_o *SceneName; // x1
  const MethodInfo *v20; // x2

  if ( (byte_4C268CE & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_string____77997088);
    sub_1C2D490(&System_Func_string__bool__TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&Method_AvalonSceneManager___c__DisplayClass20_0__endInitialize_b__0__);
    sub_1C2D490(&AvalonSceneManager___c__DisplayClass20_0_TypeInfo);
    sub_1C2D490(&StringLiteral_3122/*"BattleScene"*/);
    byte_4C268CE = 1;
  }
  v5 = sub_1C2D6DC(AvalonSceneManager___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = comp;
  v10 = (SceneRootComponent_o **)(v5 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)comp, v8, v9);
  sendData = this->fields.sendData;
  this->fields.sendData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sendData, 0, v12, v13);
  v6 = *(SceneRootComponent_o **)(v5 + 16);
  if ( !v6 )
    goto LABEL_10;
  ((void (__fastcall *)(SceneRootComponent_o *, Il2CppObject *, const MethodInfo *))v6->klass->vtable._5_beginStartUp.methodPtr)(
    v6,
    sendData,
    v6->klass->vtable._5_beginStartUp.method);
  v6 = (SceneRootComponent_o *)sub_1C2D538(string___TypeInfo, 1);
  if ( !v6 )
    goto LABEL_10;
  v16 = (System_Object_array *)v6;
  if ( !LODWORD(v6->fields.m_CancellationTokenSource) )
    sub_1C2D6F4(v6, v7, v14);
  v17 = StringLiteral_3122/*"BattleScene"*/;
  v6->fields.myFSM = (struct PlayMakerFSM_o *)StringLiteral_3122/*"BattleScene"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.myFSM, v17, v14, v15);
  v18 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_AvalonSceneManager___c__DisplayClass20_0__endInitialize_b__0__,
    0);
  if ( !BasicHelper__Any_object__51084700(
          v16,
          (System_Func_T__bool__o *)v18,
          (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_string____77997088) )
  {
    v6 = *v10;
    if ( *v10 )
    {
      SceneName = SceneRootComponent__getSceneName(v6, 0);
      AvalonSceneManager__StopTransitionTime(this, SceneName, v20);
      return;
    }
LABEL_10:
    sub_1C2D6EC(v6, v7);
  }
}


System_String_o *AvalonSceneManager__getNowSceneName(AvalonSceneManager_o *this, const MethodInfo *method)
{
  struct SceneTemp_o *prevscenetemp; // x8

  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    return prevscenetemp->fields.sceneName;
  else
    return 0;
}


SceneRootComponent_o *AvalonSceneManager__getNowSceneRootComponent(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  return this->fields.targetRoot;
}


System_String_o *AvalonSceneManager__getStackSceneName(AvalonSceneManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  System_String_o *result; // x0

  if ( (byte_4C268D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
    byte_4C268D0 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1C2D6EC(0, method);
  result = (System_String_o *)System_Collections_Generic_Stack_object___Peek(
                                scenestack,
                                (const MethodInfo_39EA1F8 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( result )
    return (System_String_o *)result->fields;
  return result;
}


SceneRootComponent_o *AvalonSceneManager__getTargetRoot(
        AvalonSceneManager_o *this,
        System_String_o *scenenName,
        const MethodInfo *method)
{
  int32_t *p_m_Handle; // x0
  Il2CppObject *Component_object; // x21
  int32_t *v6; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  UnityEngine_GameObject_array *v11; // x20
  unsigned int v12; // w22
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C268CA & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4C268CA = 1;
  }
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(scenenName, 0).fields.m_Handle;
  p_m_Handle = &m_Handle;
  Component_object = 0;
  if ( UnityEngine_SceneManagement_Scene__get_isLoaded((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0) )
  {
    v6 = &m_Handle;
    RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects((UnityEngine_SceneManagement_Scene_o)v6, 0);
    if ( !RootGameObjects )
      goto LABEL_19;
    max_length = RootGameObjects->max_length;
    v11 = RootGameObjects;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= max_length )
          sub_1C2D6F4(RootGameObjects, v8, v9);
        RootGameObjects = (UnityEngine_GameObject_array *)v11->m_Items[v12];
        if ( !RootGameObjects )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)RootGameObjects,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        RootGameObjects = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)Component_object,
                                                            0,
                                                            0);
        if ( ((unsigned __int8)RootGameObjects & 1) != 0 )
        {
          if ( !Component_object )
            break;
          RootGameObjects = (UnityEngine_GameObject_array *)SceneRootComponent__checkSceneName(
                                                              (SceneRootComponent_o *)Component_object,
                                                              scenenName,
                                                              0);
          if ( ((unsigned __int8)RootGameObjects & 1) != 0 )
            return (SceneRootComponent_o *)Component_object;
        }
        max_length = v11->max_length;
        if ( (int)++v12 >= max_length )
          return 0;
      }
LABEL_19:
      sub_1C2D6EC(RootGameObjects, v8);
    }
    return 0;
  }
  return (SceneRootComponent_o *)Component_object;
}


bool AvalonSceneManager__popScene(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_40936668(this, fade, data, 0, v4);
}


bool AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_40936668(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool AvalonSceneManager__popScene_40936668(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        bool isRefresh,
        const MethodInfo *method)
{
  void *scenestack; // x0
  int v10; // w23
  const MethodInfo *v11; // x6
  int32_t v12; // w1

  if ( (byte_4C268D4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4C268D4 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  v10 = *((_DWORD *)scenestack + 6);
  if ( v10 < 1 )
    return v10 > 0;
  scenestack = System_Collections_Generic_Stack_object___Pop(
                 (System_Collections_Generic_Stack_T__o *)scenestack,
                 (const MethodInfo_39EA23C *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_1C2D6EC(scenestack, *(_QWORD *)&fade);
  if ( isRefresh )
    v12 = 5;
  else
    v12 = 4;
  AvalonSceneManager__changeScene_40936176(this, v12, *((System_String_o **)scenestack + 2), fade, data, 0, v11);
  return v10 > 0;
}


bool AvalonSceneManager__pushScene(
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
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  System_String_o *SceneName; // x0
  const MethodInfo *v15; // x6
  const MethodInfo *v17; // x6

  if ( (byte_4C268D3 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    byte_4C268D3 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(targetRoot, 0, 0);
  prevscenetemp = 0;
  if ( v10 )
  {
    prevscenetemp = this->fields.prevscenetemp;
    if ( prevscenetemp )
    {
      scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
      if ( !scenestack )
        goto LABEL_17;
      System_Collections_Generic_Stack_object___Push(
        scenestack,
        (Il2CppObject *)this->fields.prevscenetemp,
        (const MethodInfo_39EA29C *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0);
  if ( AvalonSceneManager__changeScene_40936176(this, 3, SceneName, fade, data, 0, v15) )
    return 1;
  if ( prevscenetemp )
  {
    scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_object___Pop(
        scenestack,
        (const MethodInfo_39EA23C *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_40936176(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v17);
      return 0;
    }
LABEL_17:
    sub_1C2D6EC(scenestack, v11);
  }
  return 0;
}


// attributes: thunk
void AvalonSceneManager__reboot(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager__destroySceneObject(this, method);
}


bool AvalonSceneManager__setTargetRootActive(AvalonSceneManager_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *targetRoot; // x21
  __int64 v6; // x1
  SceneRootComponent_o *v7; // x0

  if ( (byte_4C268DF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C268DF = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0, 0) )
    return 0;
  v7 = this->fields.targetRoot;
  if ( !v7 )
    sub_1C2D6EC(0, v6);
  return SceneRootComponent__SetSceneActive(v7, flag, 0);
}


System_Collections_IEnumerator_o *AvalonSceneManager__setupUI(AvalonSceneManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4C268DE & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager__setupUI_d__42_TypeInfo);
    byte_4C268DE = 1;
  }
  v2 = sub_1C2D6DC(AvalonSceneManager__setupUI_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


bool AvalonSceneManager__transitionScene(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v10; // x6

  if ( (byte_4C268D5 & 1) == 0 )
  {
    sub_1C2D490(&SceneList_TypeInfo);
    byte_4C268D5 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0);
  return AvalonSceneManager__changeScene_40936176(this, 1, SceneName, fade, data, 0, v10);
}


bool AvalonSceneManager__transitionSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x0
  const MethodInfo *v12; // x6

  if ( (byte_4C268D7 & 1) == 0 )
  {
    sub_1C2D490(&SceneList_TypeInfo);
    byte_4C268D7 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0);
  return AvalonSceneManager__changeScene_40936176(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


bool AvalonSceneManager__transitionScene_40936996(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_4C268D6 & 1) == 0 )
  {
    sub_1C2D490(&SceneList_TypeInfo);
    byte_4C268D6 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0);
  return AvalonSceneManager__changeScene_40937144(this, 1, SceneName, fade, data, callback, v12);
}


bool AvalonSceneManager__transitionScene_40937920(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_40936176(this, 1, scenename, fade, data, 0, v5);
}


void AvalonSceneManager__UnloadSceneAsync_d__47_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        int32_t 1__state,
        const MethodInfo_33F4FFC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AvalonSceneManager__UnloadSceneAsync_d__47_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        const MethodInfo_33F5028 *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  struct AvalonSceneManager_o *_4__this; // x25
  int32_t v7; // w21
  int32_t *p_m_Handle; // x0
  void *RootGameObjects; // x0
  __int64 v10; // x2
  Il2CppObject *Component_object; // x22
  __int64 _1_T; // x1
  __int64 v13; // x23
  __int64 v14; // x22
  UnityEngine_Object_o *v15; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x20
  int32_t *v17; // x0
  System_String_o *name; // x21
  int32_t *v19; // x0
  System_String_o *v20; // x20
  struct UnityEngine_AsyncOperation_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject **p__2__current; // x19
  AvalonSceneManager__UnloadSceneAsync_d__47_T__o *v27; // x0
  const MethodInfo_33F52E4 *v28; // x1
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2CE18 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4C2CE18 = 1;
  }
  m_Handle = 0;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_32;
  }
  result = 0;
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    v7 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0) - 1;
    do
    {
      if ( v7 < 0 )
        goto LABEL_34;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v7, 0).fields.m_Handle;
      p_m_Handle = &m_Handle;
      RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                          (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                          0);
      if ( !RootGameObjects )
        goto LABEL_37;
      if ( !*((_DWORD *)RootGameObjects + 6) )
        sub_1C2D6F4(RootGameObjects, method, v10);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           *((UnityEngine_GameObject_o **)RootGameObjects + 4),
                           (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _1_T = (__int64)method->klass->rgctx_data->_1_T;
      if ( (*(_BYTE *)(_1_T + 309) & 1) == 0 )
        _1_T = sub_1C7DBA4();
      v13 = sub_1C2D5CC(Component_object, _1_T);
      v14 = (__int64)method->klass->rgctx_data->_1_T;
      if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
        v14 = sub_1C7DBA4();
      if ( v13 )
      {
        v15 = (UnityEngine_Object_o *)sub_1C2D5CC(v13, v14);
        if ( !v15 )
        {
          sub_1C2D9AC(v13);
          return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__47_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                    v27,
                                    v28);
        }
      }
      else
      {
        v15 = 0;
      }
      RootGameObjects = (void *)UnityEngine_Object__op_Implicit(v15, 0);
      --v7;
    }
    while ( ((unsigned __int8)RootGameObjects & 1) == 0 );
    if ( !_4__this )
      goto LABEL_37;
    dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
    v17 = &m_Handle;
    name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v17, 0);
    if ( !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    RootGameObjects = (void *)SceneList__getSceneType(name, 0);
    if ( !dicRootComponent )
      goto LABEL_37;
    System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
      dicRootComponent,
      (int32_t)RootGameObjects,
      0,
      (const MethodInfo_3414304 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    v19 = &m_Handle;
    v20 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v19, 0);
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    v21 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_71217592(v20, 0);
    this->fields._asyncOp_5__2 = v21;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields._asyncOp_5__2, (int32_t)v21, v22, v23);
LABEL_32:
    RootGameObjects = this->fields._asyncOp_5__2;
    if ( !RootGameObjects )
LABEL_37:
      sub_1C2D6EC(RootGameObjects, method);
    if ( UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)RootGameObjects, 0) )
    {
LABEL_34:
      ActionExtensions__Call(this->fields.callback, 0);
      return 0;
    }
    else
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C2D434((CGThumbnailListItem_o *)p__2__current, 0, v24, v25);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
  }
  return result;
}


Il2CppObject *AvalonSceneManager__UnloadSceneAsync_d__47_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        const MethodInfo_33F52E4 *method)
{
  return this->fields.__2__current;
}


void __noreturn AvalonSceneManager__UnloadSceneAsync_d__47_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        const MethodInfo_33F52EC *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1C2D6DC(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_1C2D5B8(v4, method);
}


Il2CppObject *AvalonSceneManager__UnloadSceneAsync_d__47_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        const MethodInfo_33F5320 *method)
{
  return this->fields.__2__current;
}


void AvalonSceneManager__UnloadSceneAsync_d__47_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        const MethodInfo_33F5024 *method)
{
  ;
}


void AvalonSceneManager___c__DisplayClass20_0___ctor(
        AvalonSceneManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AvalonSceneManager___c__DisplayClass20_0___endInitialize_b__0(
        AvalonSceneManager___c__DisplayClass20_0_o *this,
        System_String_o *v,
        const MethodInfo *method)
{
  SceneRootComponent_o *comp; // x0
  System_String_o *SceneName; // x1

  comp = this->fields.comp;
  if ( !comp )
    sub_1C2D6EC(0, v);
  SceneName = SceneRootComponent__getSceneName(comp, 0);
  return System_String__op_Equality(v, SceneName, 0);
}


void AvalonSceneManager___c__DisplayClass42_0___ctor(
        AvalonSceneManager___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AvalonSceneManager___c__DisplayClass42_0___setupUI_b__0(
        AvalonSceneManager___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndTerminalBG = 1;
}


void AvalonSceneManager___c__DisplayClass42_0___setupUI_b__1(
        AvalonSceneManager___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndTerminalUI = 1;
}


void AvalonSceneManager___c__DisplayClass42_0___setupUI_b__2(
        AvalonSceneManager___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndCommonBG_01 = 1;
}


void AvalonSceneManager___c__DisplayClass42_0___setupUI_b__3(
        AvalonSceneManager___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndCommonBG_02 = 1;
}


void AvalonSceneManager___c__DisplayClass42_0___setupUI_b__4(
        AvalonSceneManager___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndEffect = 1;
}


bool AvalonSceneManager___c__DisplayClass42_0___setupUI_b__5(
        AvalonSceneManager___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  return this->fields.loadEndTerminalUI
      && this->fields.loadEndTerminalBG
      && this->fields.loadEndCommonBG_01
      && this->fields.loadEndCommonBG_02
      && this->fields.loadEndEffect;
}


void AvalonSceneManager__changeNextSceneCoroutine_d__41___ctor(
        AvalonSceneManager__changeNextSceneCoroutine_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AvalonSceneManager__changeNextSceneCoroutine_d__41__MoveNext(
        AvalonSceneManager__changeNextSceneCoroutine_d__41_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  AvalonSceneManager__changeNextSceneCoroutine_d__41_o *v3; // x19
  struct AvalonSceneManager_o *_4__this; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *targetRoot; // x22
  bool v8; // w22
  bool v9; // w0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct SceneRootComponent_o *v12; // x1
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_IEnumerator_o *v15; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool v19; // w20
  UnityEngine_Object_o **p_newTargetRoot_5__2; // x21
  UnityEngine_Object_o *newTargetRoot_5__2; // x22
  System_String_o *scenename; // x22
  int32_t *p_m_Handle; // x0
  const MethodInfo *v24; // x2
  SceneRootComponent_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *v28; // x22
  System_String_o *v29; // x21
  CGThumbnailListItem_o *v30; // x19
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  SceneRootComponent_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Object_o *v36; // x22
  System_String_o *v37; // x22
  int32_t *v38; // x0
  __int64 v39; // x2
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__41_o *v41; // x22
  unsigned int v42; // w27
  UnityEngine_GameObject_o *v43; // x23
  int v44; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__41_o *v45; // x24
  int i; // w28
  AvalonSceneManager__changeNextSceneCoroutine_d__41_c **v47; // x8
  UnityEngine_Component_o *gameObject; // x25
  UnityEngine_Object_c *v49; // x0
  int v50; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__41_o *v51; // x23
  unsigned int v52; // w25
  AvalonSceneManager__changeNextSceneCoroutine_d__41_c **v53; // x8
  UnityEngine_Component_o *v54; // x24
  UnityEngine_Object_c *v55; // x0
  UnityEngine_Object_o *v56; // x22
  UnityEngine_Object_o *v57; // x22
  AvalonSceneManager__changeNextSceneCoroutine_d__41_c *klass; // x8
  void (*methodPtr)(void); // x9
  SceneRootComponent_o *v60; // x22
  SceneTemp_o *v61; // x21
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct SceneRootComponent_o *v64; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__41_o **p_targetRoot; // x21
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v68; // x22
  System_String_o *v69; // x23
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  Il2CppObject *v72; // x19
  CGThumbnailListItem_o *p_sendData; // x20
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v76; // x22
  UnityEngine_Object_o *v77; // x21
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x21
  System_String_o *v81; // x22
  System_String_o *v82; // x20
  CGThumbnailListItem_o *v83; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-68h] BYREF

  v3 = this;
  if ( (byte_4C268E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponents_Component___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1C2D490(&SceneTemp_TypeInfo);
    sub_1C2D490(&StringLiteral_3124/*"BattleScriptScene"*/);
    sub_1C2D490(&StringLiteral_3122/*"BattleScene"*/);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C268E4 = 1;
  }
  m_Handle = 0;
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_112;
      AvalonSceneManager__StartTransitionTime(_4__this, method);
      v3->fields._newTargetRoot_5__2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._newTargetRoot_5__2, 0, v5, v6);
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Inequality(targetRoot, 0, 0);
      v9 = System_String__op_Equality(v3->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( !v8 )
        goto LABEL_11;
      if ( v9 )
        goto LABEL_12;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_112;
      v9 = SceneRootComponent__checkSceneName((SceneRootComponent_o *)this, v3->fields.scenename, 0);
LABEL_11:
      if ( v9 )
      {
LABEL_12:
        v12 = _4__this->fields.targetRoot;
        v3->fields._newTargetRoot_5__2 = v12;
        sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._newTargetRoot_5__2, (int32_t)v12, v10, v11);
      }
      if ( v3->fields.changeType <= 1u
        && System_String__op_Inequality(v3->fields.scenename, (System_String_o *)StringLiteral_3124/*"BattleScriptScene"*/, 0) )
      {
        v13 = System_String__op_Inequality(v3->fields.scenename, (System_String_o *)StringLiteral_3122/*"BattleScene"*/, 0);
        if ( v13 )
        {
          v15 = AvalonSceneManager__setupUI((AvalonSceneManager_o *)v13, v14);
          v3->fields.__2__current = (Il2CppObject *)v15;
          p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
          sub_1C2D434(p__2__current, (int32_t)v15, v17, v18);
          v19 = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return v19;
        }
      }
LABEL_18:
      p_newTargetRoot_5__2 = (UnityEngine_Object_o **)&v3->fields._newTargetRoot_5__2;
      newTargetRoot_5__2 = (UnityEngine_Object_o *)v3->fields._newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(newTargetRoot_5__2, 0, 0) )
        goto LABEL_68;
      scenename = v3->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(scenename, 0).fields.m_Handle;
      p_m_Handle = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_SceneManagement_Scene__get_isLoaded(
                                                                       (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                                                       0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_26;
      if ( !_4__this )
        goto LABEL_112;
      v25 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v3->fields.scenename, v24);
      v3->fields._newTargetRoot_5__2 = v25;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._newTargetRoot_5__2, (int32_t)v25, v26, v27);
LABEL_26:
      v28 = *p_newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v28, 0, 0) )
      {
LABEL_68:
        v56 = *p_newTargetRoot_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_Object__op_Inequality(v56, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !_4__this )
            goto LABEL_112;
          v57 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v57, 0, 0) )
          {
            if ( _4__this->fields.prevscenetemp )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)_4__this->fields.targetRoot;
              if ( !this )
                goto LABEL_112;
              klass = this->klass;
              if ( v3->fields.changeType == 3 )
                methodPtr = klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr;
              else
                methodPtr = klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr;
              methodPtr();
            }
            v76 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v77 = *p_newTargetRoot_5__2;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v76, v77, 0) )
              goto LABEL_111;
            if ( v3->fields.changeType == 5 )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)_4__this->fields.targetRoot;
              if ( this )
              {
                dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
                v81 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0);
                if ( !SceneList_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
                this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)SceneList__getSceneType(v81, 0);
                if ( dicRootComponent )
                {
                  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
                    dicRootComponent,
                    (int32_t)this,
                    0,
                    (const MethodInfo_3414304 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
                  this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)_4__this->fields.targetRoot;
                  if ( this )
                  {
                    v82 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0);
                    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                    UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_71217592(v82, 0);
                    goto LABEL_111;
                  }
                }
              }
            }
            else
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)_4__this->fields.targetRoot;
              if ( this )
              {
                this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)this,
                                                                                 0);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_111:
                  v3->fields.__2__current = 0;
                  v83 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
                  sub_1C2D434(v83, 0, v78, v79);
                  LODWORD(v83[-1].fields._ThumbnailSpritePath_k__BackingField) = 3;
                  return 1;
                }
              }
            }
LABEL_112:
            sub_1C2D6EC(this, method);
          }
LABEL_80:
          v60 = v3->fields._newTargetRoot_5__2;
          v61 = (SceneTemp_o *)sub_1C2D6DC(SceneTemp_TypeInfo);
          SceneTemp___ctor_41259960(v61, v60, 0);
          if ( !_4__this )
            goto LABEL_112;
          _4__this->fields.prevscenetemp = v61;
          sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.prevscenetemp, (int32_t)v61, v62, v63);
          v64 = v3->fields._newTargetRoot_5__2;
          _4__this->fields.targetRoot = v64;
          p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o **)&_4__this->fields.targetRoot;
          sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.targetRoot, (int32_t)v64, v66, v67);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)v3->fields._newTargetRoot_5__2;
          if ( !this )
            goto LABEL_112;
          v68 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
          v69 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0);
          if ( !SceneList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)SceneList__getSceneType(v69, 0);
          if ( !v68 )
            goto LABEL_112;
          System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
            v68,
            (int32_t)this,
            (Il2CppObject *)v3->fields._newTargetRoot_5__2,
            (const MethodInfo_3414304 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
          this = *p_targetRoot;
          if ( !*p_targetRoot )
            goto LABEL_112;
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
          if ( !this )
            goto LABEL_112;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          _4__this->fields.isBusySceneChange = 0;
          if ( (v3->fields.changeType & 0xFFFFFFFE) == 4 )
          {
            sendData = _4__this->fields.sendData;
            p_sendData = (CGThumbnailListItem_o *)&_4__this->fields.sendData;
            v72 = sendData;
            p_sendData->klass = 0;
            sub_1C2D434(p_sendData, 0, v70, v71);
            this = *(AvalonSceneManager__changeNextSceneCoroutine_d__41_o **)&p_sendData[-1].fields.basePosition.fields.y;
            if ( !this )
              goto LABEL_112;
            ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__41_o *, Il2CppObject *, void *))this->klass[1]._1.image)(
              this,
              v72,
              this->klass[1]._1.gc_desc);
          }
          else
          {
            this = *p_targetRoot;
            if ( !*p_targetRoot )
              goto LABEL_112;
            ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__41_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
              this,
              this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
          }
        }
        return 0;
      }
      v29 = v3->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      v19 = 1;
      UnityEngine_SceneManagement_SceneManager__LoadScene(v29, 1, 0);
      v3->fields.__2__current = 0;
      v30 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1C2D434(v30, 0, v31, v32);
      LODWORD(v30[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
      return v19;
    case 1:
      v3->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_112;
      v33 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v3->fields.scenename, v2);
      v3->fields._newTargetRoot_5__2 = v33;
      p_newTargetRoot_5__2 = (UnityEngine_Object_o **)&v3->fields._newTargetRoot_5__2;
      sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._newTargetRoot_5__2, (int32_t)v33, v34, v35);
      v36 = (UnityEngine_Object_o *)v3->fields._newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v36, 0, 0) )
        return 0;
      v37 = v3->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v37, 0).fields.m_Handle;
      v38 = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                                                                       (UnityEngine_SceneManagement_Scene_o)v38,
                                                                       0);
      if ( !this )
        goto LABEL_112;
      _2__current = (int)this->fields.__2__current;
      v41 = this;
      if ( _2__current < 1 )
        goto LABEL_68;
      v42 = 0;
      break;
    case 3:
      v3->fields.__1__state = -1;
      goto LABEL_80;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v42 >= _2__current )
LABEL_113:
      sub_1C2D6F4(this, method, v39);
    v43 = (UnityEngine_GameObject_o *)*((_QWORD *)&v41->fields.__4__this + (int)v42);
    if ( !v43 )
      goto LABEL_112;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                                                     v43,
                                                                     (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !this )
      goto LABEL_112;
    v44 = (int)this->fields.__2__current;
    v45 = this;
    if ( v44 >= 1 )
    {
      for ( i = 0; i < v44; ++i )
      {
        if ( i >= (unsigned int)v44 )
          goto LABEL_113;
        v47 = &v45->klass + i;
        gameObject = (UnityEngine_Component_o *)v47[4];
        if ( !gameObject )
          goto LABEL_112;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_Component__GetComponents_object__51141684(
                                                                         (UnityEngine_Component_o *)v47[4],
                                                                         (const MethodInfo_30C5C34 *)Method_UnityEngine_Component_GetComponents_Component___);
        if ( !this )
          goto LABEL_112;
        if ( LODWORD(this->fields.__2__current) == 1 )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            v49 = UnityEngine_Object_TypeInfo;
LABEL_53:
            j_il2cpp_runtime_class_init_0(v49);
          }
        }
        else
        {
          v49 = UnityEngine_Object_TypeInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            goto LABEL_53;
        }
        UnityEngine_Object__DestroyImmediate_71163892((UnityEngine_Object_o *)gameObject, 0);
        v44 = (int)v45->fields.__2__current;
      }
    }
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                                                     v43,
                                                                     (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !this )
      goto LABEL_112;
    v50 = (int)this->fields.__2__current;
    v51 = this;
    if ( v50 >= 1 )
      break;
LABEL_67:
    _2__current = (int)v41->fields.__2__current;
    if ( (int)++v42 >= _2__current )
      goto LABEL_68;
  }
  v52 = 0;
  while ( 1 )
  {
    if ( v52 >= v50 )
      goto LABEL_113;
    v53 = &v51->klass + (int)v52;
    v54 = (UnityEngine_Component_o *)v53[4];
    if ( !v54 )
      goto LABEL_112;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_Component__GetComponents_object__51141684(
                                                                     (UnityEngine_Component_o *)v53[4],
                                                                     (const MethodInfo_30C5C34 *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !this )
      goto LABEL_112;
    if ( LODWORD(this->fields.__2__current) == 2 )
    {
      v54 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v54, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        v55 = UnityEngine_Object_TypeInfo;
LABEL_65:
        j_il2cpp_runtime_class_init_0(v55);
      }
    }
    else
    {
      v55 = UnityEngine_Object_TypeInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        goto LABEL_65;
    }
    UnityEngine_Object__DestroyImmediate_71163892((UnityEngine_Object_o *)v54, 0);
    v50 = (int)v51->fields.__2__current;
    if ( (int)++v52 >= v50 )
      goto LABEL_67;
  }
}


Il2CppObject *AvalonSceneManager__changeNextSceneCoroutine_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changeNextSceneCoroutine_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AvalonSceneManager__changeNextSceneCoroutine_d__41__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changeNextSceneCoroutine_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *AvalonSceneManager__changeNextSceneCoroutine_d__41__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changeNextSceneCoroutine_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AvalonSceneManager__changeNextSceneCoroutine_d__41__System_IDisposable_Dispose(
        AvalonSceneManager__changeNextSceneCoroutine_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void AvalonSceneManager__changePrevSceneCoroutine_d__40___ctor(
        AvalonSceneManager__changePrevSceneCoroutine_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AvalonSceneManager__changePrevSceneCoroutine_d__40__MoveNext(
        AvalonSceneManager__changePrevSceneCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AvalonSceneManager__changePrevSceneCoroutine_d__40_o *v4; // x19
  struct AvalonSceneManager_o *_4__this; // x20
  int32_t fadeType; // w8
  AvalonSceneManager_c *v7; // x0
  CGThumbnailListItem_o *v8; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int v11; // w8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w8
  float duration_5__2; // s0
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool result; // w0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *targetRoot; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  AvalonSceneManager__changePrevSceneCoroutine_d__40_o *v26; // x22
  UnityEngine_Object_o *v27; // x21
  int32_t v28; // w21
  int32_t *p_m_Handle; // x0
  AvalonSceneManager_o *name; // x0
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *v32; // x22
  System_String_o *scenename; // x19
  unsigned int v34; // w19
  Il2CppObject *value; // x20
  _BOOL8 v36; // x0
  __int64 v37; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+0h] [xbp-70h] BYREF
  int32_t m_Handle; // [xsp+38h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C268E5 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__SceneRootComponent__get_Value__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)sub_1C2D490(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4C268E5 = 1;
  }
  m_Handle = 0;
  memset(&v39, 0, sizeof(v39));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      fadeType = _4__this->fields.fadeType;
      if ( !fadeType )
        goto LABEL_33;
      v7 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v7 = AvalonSceneManager_TypeInfo;
        fadeType = _4__this->fields.fadeType;
      }
      LODWORD(v4->fields._duration_5__2) = LODWORD(v7->static_fields->DEFAULT_FADE_TIME);
      if ( (unsigned int)(fadeType - 1) > 1 )
        goto LABEL_11;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0);
LABEL_11:
      if ( !v4->fields.fadeTimeSkip )
      {
        v4->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(p__2__current, 0, v2, v3);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      v4->fields._duration_5__2 = 0.0;
LABEL_21:
      v14 = _4__this->fields.fadeType;
      if ( v14 == 2 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v4->fields._duration_5__2;
        v16 = 2;
      }
      else
      {
        if ( v14 != 1 )
          goto LABEL_29;
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v4->fields._duration_5__2;
        v16 = 1;
      }
      CommonUI__maskFadeout((CommonUI_o *)this, v16, duration_5__2, 0, 0);
LABEL_29:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
      {
        v4->fields.__2__current = 0;
        v8 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v8, 0, v17, v18);
        v11 = 2;
LABEL_32:
        LODWORD(v8[-1].fields._ThumbnailSpritePath_k__BackingField) = v11;
        return 1;
      }
LABEL_33:
      MainMenuBar__setButtonActive(0, 0);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__InitTurotialArrowMark((CommonUI_o *)this, 0);
      if ( v4->fields.changeType > 1u )
        goto LABEL_69;
      if ( !_4__this )
        goto LABEL_55;
      if ( !_4__this->fields.prevscenetemp )
        goto LABEL_43;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(targetRoot, 0, 0) )
        goto LABEL_42;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_55;
      ((void (__fastcall *)(AvalonSceneManager__changePrevSceneCoroutine_d__40_o *, const MethodInfo *))this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr)(
        this,
        this->klass->vtable._7_System_Collections_IEnumerator_get_Current.method);
LABEL_42:
      _4__this->fields.prevscenetemp = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.prevscenetemp, 0, v23, v24);
LABEL_43:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)_4__this->fields.scenestack;
      if ( !this )
        goto LABEL_55;
      while ( SLODWORD(this->fields.__2__current) > 0 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)System_Collections_Generic_Stack_object___Pop(
                                                                         (System_Collections_Generic_Stack_T__o *)this,
                                                                         (const MethodInfo_39EA23C *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
        if ( !this )
          goto LABEL_55;
        v26 = this;
        v27 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(
                                        (AvalonSceneManager_o *)this,
                                        *(System_String_o **)&this->fields.__1__state,
                                        v25);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v27 )
            goto LABEL_55;
          if ( SceneRootComponent__checkSceneName(
                 (SceneRootComponent_o *)v27,
                 *(System_String_o **)&v26->fields.__1__state,
                 0) )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v27,
                                                                             0);
            if ( !this )
              goto LABEL_55;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD))v27->klass[1]._1.this_arg.data)(
              v27,
              *(_QWORD *)&v27->klass[1]._1.this_arg.bits);
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v27,
                                                                             0);
            if ( !this )
              goto LABEL_55;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          }
        }
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)_4__this->fields.scenestack;
        if ( !this )
          goto LABEL_55;
      }
      if ( !v4->fields.changeType )
      {
        v4->fields.__2__current = 0;
        v8 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v8, 0, v20, v21);
        v11 = 3;
        goto LABEL_32;
      }
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      v28 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0) - 1;
      if ( v28 >= 0 )
      {
        do
        {
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v28, 0).fields.m_Handle;
          p_m_Handle = &m_Handle;
          name = (AvalonSceneManager_o *)UnityEngine_SceneManagement_Scene__get_name(
                                           (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                           0);
          v32 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(name, (System_String_o *)name, v31);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)UnityEngine_Object__op_Inequality(v32, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v32 )
              goto LABEL_55;
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v32,
                                                                             0);
            if ( !this )
              goto LABEL_55;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          }
        }
        while ( --v28 >= 0 );
      }
LABEL_69:
      scenename = v4->fields.scenename;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)SceneList__getSceneType(scenename, 0);
      if ( !_4__this
        || (v34 = (unsigned int)this,
            (this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)_4__this->fields.dicRootComponent) == 0) )
      {
LABEL_55:
        sub_1C2D6EC(this, method);
      }
      System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator(
        &v39,
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
        (const MethodInfo_3414750 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__GetEnumerator__);
      while ( System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext(
                &v39,
                (const MethodInfo_353D4E0 *)Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__MoveNext__) )
      {
        value = v39.fields._current.fields.value;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v36 = UnityEngine_Object__op_Equality(0, (UnityEngine_Object_o *)value, 0);
        if ( !v36 )
        {
          if ( !value )
            sub_1C2D6EC(v36, v37);
          ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))value->klass->vtable[11].methodPtr)(
            value,
            v34,
            value->klass->vtable[11].method);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
        &v39,
        (const MethodInfo_353D604 *)Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__Dispose__);
      return 0;
    case 1:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_21;
      goto LABEL_55;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_29;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      AvalonSceneManager__destroySceneObject(_4__this, method);
      v4->fields.__2__current = 0;
      v8 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v8, 0, v12, v13);
      v11 = 4;
      goto LABEL_32;
    case 4:
      v4->fields.__1__state = -1;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__40_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AtlasManager__ReleaseNoneResidentAtlas((AtlasManager_o *)this, 0);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__ReleaseSkinEffects(0);
      v4->fields.__2__current = 0;
      v8 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v8, 0, v9, v10);
      v11 = 5;
      goto LABEL_32;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_69;
    default:
      return 0;
  }
}


Il2CppObject *AvalonSceneManager__changePrevSceneCoroutine_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changePrevSceneCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AvalonSceneManager__changePrevSceneCoroutine_d__40__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changePrevSceneCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__40_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *AvalonSceneManager__changePrevSceneCoroutine_d__40__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changePrevSceneCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AvalonSceneManager__changePrevSceneCoroutine_d__40__System_IDisposable_Dispose(
        AvalonSceneManager__changePrevSceneCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  ;
}


void AvalonSceneManager__changeSceneCoroutine_d__39___ctor(
        AvalonSceneManager__changeSceneCoroutine_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AvalonSceneManager__changeSceneCoroutine_d__39__MoveNext(
        AvalonSceneManager__changeSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AvalonSceneManager__changeSceneCoroutine_d__39_o *v3; // x19
  AvalonSceneManager_o *_4__this; // x20
  System_String_o *scenename; // x21
  int32_t SceneType; // w0
  unsigned int v7; // w22
  struct SceneTemp_o *prevscenetemp; // x8
  AvalonSceneManager__changeSceneCoroutine_d__39_o *v9; // x21
  int32_t v10; // w8
  const MethodInfo *v11; // x4
  int32_t changeType; // w8
  UnityEngine_WaitForEndOfFrame_o *v13; // x20
  CGThumbnailListItem_o *v14; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int v17; // w8
  System_Collections_IEnumerator_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_IEnumerator_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  bool result; // w0
  System_Action_o *callback; // x0
  int32_t ConnectMarkEventId; // w1
  bool v27; // w2
  AvalonSceneManager__changeSceneCoroutine_d__39_o *v28; // x22
  System_Collections_IEnumerator_o *v29; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  v3 = this;
  if ( (byte_4C268E6 & 1) == 0 )
  {
    sub_1C2D490(&System_GC_TypeInfo);
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    this = (AvalonSceneManager__changeSceneCoroutine_d__39_o *)sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C268E6 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      scenename = v3->fields.scenename;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneType = SceneList__getSceneType(scenename, 0);
      if ( (unsigned int)(SceneType - 10) > 0x3E
        || ((1LL << ((unsigned __int8)SceneType - 10)) & 0x400C000053400001LL) == 0 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0);
          if ( _4__this )
            goto LABEL_53;
        }
        goto LABEL_54;
      }
      v7 = SceneType;
      this = (AvalonSceneManager__changeSceneCoroutine_d__39_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_54;
      prevscenetemp = _4__this->fields.prevscenetemp;
      v9 = this;
      if ( !prevscenetemp )
        goto LABEL_42;
      v10 = prevscenetemp->fields.sceneType;
      if ( v7 == 38 && v10 == 10 || (v7 == 10 || v7 == 38) && v10 == 9 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0);
          if ( !v9 )
            goto LABEL_53;
          goto LABEL_52;
        }
LABEL_54:
        sub_1C2D6EC(this, method);
      }
      if ( v10 == 39 )
      {
        if ( v7 <= 0x3D && ((1LL << v7) & 0x3000010000000000LL) != 0 )
        {
          this = (AvalonSceneManager__changeSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_54;
          ConnectMarkEventId = 0;
          v27 = 0;
          goto LABEL_51;
        }
      }
      else if ( v7 == 34 && v10 == 9 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_54;
        v27 = 1;
        ConnectMarkEventId = 0;
        goto LABEL_51;
      }
LABEL_42:
      if ( this && v7 == 32 && !this[2].fields.fadeTimeSkip )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_54;
        CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0);
LABEL_52:
        v9[2].fields.fadeTimeSkip = 0;
        goto LABEL_53;
      }
      this = (AvalonSceneManager__changeSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = this;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v28 )
        goto LABEL_54;
      v27 = 1;
      this = v28;
      ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
LABEL_51:
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, ConnectMarkEventId, v27, 0);
      if ( v9 )
        goto LABEL_52;
LABEL_53:
      v29 = AvalonSceneManager__changePrevSceneCoroutine(
              _4__this,
              v3->fields.changeType,
              v3->fields.scenename,
              v3->fields.fadeTimeSkip,
              v11);
      v3->fields.__2__current = (Il2CppObject *)v29;
      p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)v29, v31, v32);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      changeType = v3->fields.changeType;
      v3->fields.__1__state = -1;
      if ( changeType )
        goto LABEL_25;
      v13 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v13, 0);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v3->fields.__2__current = (Il2CppObject *)v13;
      v14 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1C2D434(v14, (int32_t)v13, v15, v16);
      v17 = 2;
      goto LABEL_27;
    case 2:
      v3->fields.__1__state = -1;
      this = (AvalonSceneManager__changeSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_54;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
      this = (AvalonSceneManager__changeSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_54;
      v18 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
      v3->fields.__2__current = (Il2CppObject *)v18;
      v14 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1C2D434(v14, (int32_t)v18, v19, v20);
      v17 = 3;
      goto LABEL_27;
    case 3:
      v3->fields.__1__state = -1;
LABEL_25:
      if ( !_4__this )
        goto LABEL_54;
      v21 = AvalonSceneManager__changeNextSceneCoroutine(_4__this, v3->fields.changeType, v3->fields.scenename, v2);
      v3->fields.__2__current = (Il2CppObject *)v21;
      v14 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1C2D434(v14, (int32_t)v21, v22, v23);
      v17 = 4;
LABEL_27:
      LODWORD(v14[-1].fields._ThumbnailSpritePath_k__BackingField) = v17;
      return 1;
    case 4:
      callback = v3->fields.callback;
      v3->fields.__1__state = -1;
      ActionExtensions__Call(callback, 0);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *AvalonSceneManager__changeSceneCoroutine_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changeSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AvalonSceneManager__changeSceneCoroutine_d__39__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changeSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_AvalonSceneManager__changeSceneCoroutine_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *AvalonSceneManager__changeSceneCoroutine_d__39__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changeSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AvalonSceneManager__changeSceneCoroutine_d__39__System_IDisposable_Dispose(
        AvalonSceneManager__changeSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void AvalonSceneManager__checkUnloadScenes_d__18___ctor(
        AvalonSceneManager__checkUnloadScenes_d__18_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AvalonSceneManager__checkUnloadScenes_d__18__MoveNext(
        AvalonSceneManager__checkUnloadScenes_d__18_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager__checkUnloadScenes_d__18_o *v2; // x19
  int32_t _1__state; // w9
  struct AvalonSceneManager_o *_4__this; // x8
  _BOOL4 bContinue_5__2; // w9
  Il2CppObject *current; // x20
  int32_t *p_m_Handle; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_string__o *m_listUnloadScenes; // x8
  int32_t size; // w2
  int v13; // w9
  int32_t m_Handle; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4C268E7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    this = (AvalonSceneManager__checkUnloadScenes_d__18_o *)sub_1C2D490(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4C268E7 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  m_Handle = 0;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    bContinue_5__2 = v2->fields._bContinue_5__2;
    v2->fields.__1__state = -1;
    if ( !bContinue_5__2 )
    {
      if ( _4__this )
      {
        m_listUnloadScenes = _4__this->fields.m_listUnloadScenes;
        if ( m_listUnloadScenes )
        {
          size = m_listUnloadScenes->fields._size;
          v13 = m_listUnloadScenes->fields._version + 1;
          m_listUnloadScenes->fields._size = 0;
          m_listUnloadScenes->fields._version = v13;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)m_listUnloadScenes->fields._items, 0, size, 0);
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
LABEL_22:
      sub_1C2D6EC(this, method);
    }
  }
  else
  {
    this = 0;
    if ( _1__state )
      return (char)this;
    v2->fields.__1__state = -1;
    v2->fields._bContinue_5__2 = 1;
  }
  v2->fields._bContinue_5__2 = 0;
  if ( !_4__this )
    goto LABEL_22;
  this = (AvalonSceneManager__checkUnloadScenes_d__18_o *)_4__this->fields.m_listUnloadScenes;
  if ( !this )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v16.fields._current;
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName((System_String_o *)current, 0).fields.m_Handle;
    p_m_Handle = &m_Handle;
    if ( UnityEngine_SceneManagement_Scene__get_buildIndex((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0) >= 1 )
    {
      v2->fields._bContinue_5__2 = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v2->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C2D434(p__2__current, 0, v9, v10);
  LOBYTE(this) = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return (char)this;
}


Il2CppObject *AvalonSceneManager__checkUnloadScenes_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__checkUnloadScenes_d__18_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AvalonSceneManager__checkUnloadScenes_d__18__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__checkUnloadScenes_d__18_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_AvalonSceneManager__checkUnloadScenes_d__18_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *AvalonSceneManager__checkUnloadScenes_d__18__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__checkUnloadScenes_d__18_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AvalonSceneManager__checkUnloadScenes_d__18__System_IDisposable_Dispose(
        AvalonSceneManager__checkUnloadScenes_d__18_o *this,
        const MethodInfo *method)
{
  ;
}


void AvalonSceneManager__setupUI_d__42___ctor(
        AvalonSceneManager__setupUI_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AvalonSceneManager__setupUI_d__42__MoveNext(AvalonSceneManager__setupUI_d__42_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w21
  int32_t v9; // w8
  System_Action_o *v10; // x22
  System_Action_o *v11; // x22
  System_Action_o *v12; // x22
  System_Action_o *v13; // x22
  System_Action_o *v14; // x22
  System_Func_bool__o *v15; // x21
  UnityEngine_WaitUntil_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C268E8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C2D490(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__0__);
    sub_1C2D490(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__1__);
    sub_1C2D490(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__2__);
    sub_1C2D490(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__3__);
    sub_1C2D490(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__4__);
    sub_1C2D490(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__5__);
    sub_1C2D490(&AvalonSceneManager___c__DisplayClass42_0_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C268E8 = 1;
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
    v5 = sub_1C2D6DC(AvalonSceneManager___c__DisplayClass42_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !v5 )
      goto LABEL_46;
    *(_BYTE *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 17) = 0;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v8 = OptionManager__isSavedMemoryMode(0) ? 1 : 10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 7, 0) )
    {
      *(_BYTE *)(v5 + 16) = 1;
    }
    else
    {
      v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)v5, Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__0__, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v10, 7, v8, 0);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0) )
    {
      *(_BYTE *)(v5 + 17) = 1;
    }
    else
    {
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)v5, Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__1__, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v11, 1, v8, 0);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 2, 0) )
    {
      *(_BYTE *)(v5 + 18) = 1;
    }
    else
    {
      v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)v5, Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__2__, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v12, 2, v8, 0);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_1C2D6EC(Instance, v7);
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0) )
    {
      *(_BYTE *)(v5 + 19) = 1;
    }
    else
    {
      v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)v5, Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__3__, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v13, 4, v8, 0);
    }
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( CommonEffectManager__IsLoadedSkinData(0) )
    {
      *(_BYTE *)(v5 + 20) = 1;
    }
    else
    {
      v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)v5, Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__4__, 0);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__LoadSkinEffects(v14, v8, 0);
    }
    v15 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__5__,
      0);
    v16 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v16, v15, 0);
    this->fields.__2__current = (Il2CppObject *)v16;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v16, v17, v18);
    v9 = 1;
    result = 1;
  }
  this->fields.__1__state = v9;
  return result;
}


Il2CppObject *AvalonSceneManager__setupUI_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__setupUI_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AvalonSceneManager__setupUI_d__42__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__setupUI_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_AvalonSceneManager__setupUI_d__42_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *AvalonSceneManager__setupUI_d__42__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__setupUI_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AvalonSceneManager__setupUI_d__42__System_IDisposable_Dispose(
        AvalonSceneManager__setupUI_d__42_o *this,
        const MethodInfo *method)
{
  ;
}