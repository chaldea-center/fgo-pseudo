void AvalonSceneManager___cctor(const MethodInfo *method)
{
  if ( (byte_5937C53 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    byte_5937C53 = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Stack_T__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Diagnostics_Stopwatch_o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5937C52 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
    sub_21FFC50(&System_Collections_Generic_Stack_SceneTemp__TypeInfo);
    sub_21FFC50(&System_Diagnostics_Stopwatch_TypeInfo);
    byte_5937C52 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v3,
    (const MethodInfo_3F88244 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent___ctor__);
  this->fields.dicRootComponent = (struct System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dicRootComponent, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Stack_T__o *)sub_21FFEBC(System_Collections_Generic_Stack_SceneTemp__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v10,
    (const MethodInfo_3B293E4 *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.scenestack, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Diagnostics_Stopwatch_o *)sub_21FFEBC(System_Diagnostics_Stopwatch_TypeInfo);
  System_Diagnostics_Stopwatch___ctor(v17, 0);
  this->fields._transitionStopwatch = v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._transitionStopwatch,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.m_listUnloadScenes = (struct System_Collections_Generic_List_string__o *)v24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_listUnloadScenes,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


void AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_37DB02C *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  long double v10; // q0
  struct SceneRootComponent_o *targetRoot; // x24
  Il2CppClass *_0_T; // x23
  UnityEngine_Component_o *v13; // x0
  __int64 v14; // x2
  SceneRootComponent_o *v15; // x21
  __int64 v16; // x1
  Il2CppType *_1_T; // x22
  System_RuntimeTypeHandle_o v18; // x0
  System_Type_o *TypeFromHandle; // x22
  System_RuntimeTypeHandle_o v20; // x0
  System_Type_o *v21; // x0
  __int64 naturalAligment; // x10
  intptr_t m_CachedPtr; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x19
  __int64 v25; // x1
  System_String_o *SceneName; // x20
  __int64 v27; // x1
  System_String_o *v28; // x19
  AvalonSceneManager_o *v29; // x0
  int32_t v30; // w1
  const MethodInfo_37DB27C *v31; // x2

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&BattleRootComponent_var);
    sub_21FFC50(&BattleRootComponent_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54(method);
  }
  gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager__checkNowScene(this, sceneType, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    targetRoot = this->fields.targetRoot;
    _0_T = method->rgctx_data->_0_T;
    if ( (*((_WORD *)&_0_T->_2.bitflags2 + 1) & 1) == 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_2237AF8(v10);
      _0_T = (Il2CppClass *)gameObject;
    }
    if ( targetRoot )
    {
      v13 = (UnityEngine_Component_o *)sub_21FFDA4(targetRoot, _0_T);
      if ( !v13 )
      {
        sub_220024C(targetRoot, _0_T, v14);
        AvalonSceneManager__GetSceneRootComponent_object_(v29, v30, v31);
        return;
      }
      v15 = (SceneRootComponent_o *)v13;
      gameObject = UnityEngine_Component__get_gameObject(v13, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        _1_T = method->rgctx_data->_1_T;
        if ( !*(_DWORD *)(qword_594C108 + 228) )
          j_il2cpp_runtime_class_init_0(qword_594C108, v16);
        v18.fields.value = (intptr_t)_1_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0);
        v20.fields.value = (intptr_t)BattleRootComponent_var;
        v21 = System_Type__GetTypeFromHandle(v20, 0);
        gameObject = (UnityEngine_GameObject_o *)System_Type__op_Equality(TypeFromHandle, v21, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment;
          if ( v15->klass->_2.naturalAligment < (unsigned int)naturalAligment )
            goto LABEL_26;
          if ( (BattleRootComponent_c *)v15->klass->_2.typeHierarchy[naturalAligment - 1] != BattleRootComponent_TypeInfo )
            goto LABEL_26;
          m_CachedPtr = v15[1].fields.m_CachedPtr;
          if ( !m_CachedPtr )
            goto LABEL_26;
          gameObject = *(UnityEngine_GameObject_o **)(m_CachedPtr + 536);
          if ( !gameObject )
            goto LABEL_26;
          BattleResultComponent__EndResult((BattleResultComponent_o *)gameObject, 0);
        }
        if ( !forceUnload )
          return;
        dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicRootComponent;
        SceneName = SceneRootComponent__getSceneName(v15, 0);
        if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v25);
        gameObject = (UnityEngine_GameObject_o *)SceneList__getSceneType(SceneName, 0);
        if ( dicRootComponent )
        {
          System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
            dicRootComponent,
            (int32_t)gameObject,
            0,
            (const MethodInfo_3F88BE4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
          v28 = SceneRootComponent__getSceneName(v15, 0);
          if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v27);
          UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_83310544(v28, 0);
          return;
        }
      }
    }
LABEL_26:
    sub_21FFECC(gameObject, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *AvalonSceneManager__GetSceneRootComponent_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        const MethodInfo_37DB27C *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x0
  long double v7; // q0
  const MethodInfo_37DB27C_RGCTXs *rgctx_data; // x8
  Il2CppObject *v9; // x19
  __int64 _0_T; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TryGetValue__);
    if ( !method->rgctx_data )
      sub_2237B54(method);
  }
  dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicRootComponent;
  value = 0;
  if ( !dicRootComponent )
    sub_21FFECC(0, *(_QWORD *)&sceneType);
  if ( !System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
          dicRootComponent,
          sceneType,
          &value,
          (const MethodInfo_3F8A6D4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TryGetValue__) )
    return 0;
  rgctx_data = method->rgctx_data;
  v9 = value;
  _0_T = (__int64)rgctx_data->_0_T;
  if ( (*((_WORD *)&rgctx_data->_0_T->_2.bitflags2 + 1) & 1) == 0 )
    _0_T = sub_2237AF8(v7);
  return (Il2CppObject *)sub_21FFDA4(v9, _0_T);
}


SceneRootComponent_o *AvalonSceneManager__GetStackedRootComponent(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8
  AvalonSceneManager_o *StackSceneName; // x0
  const MethodInfo *v5; // x2

  v2 = this;
  if ( (byte_5937C50 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_5937C50 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_21FFECC(this, method);
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
  if ( (byte_5937C3B & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_5937C3B = 1;
  }
  m_listUnloadScenes = v2->fields.m_listUnloadScenes;
  if ( !m_listUnloadScenes )
    sub_21FFECC(this, method);
  return m_listUnloadScenes->fields._size == 0;
}


bool AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  v2 = this;
  if ( (byte_5937C3F & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_5937C3F = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_21FFECC(this, method);
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
    sub_21FFECC(transitionStopwatch, method);
  System_Diagnostics_Stopwatch__Start(transitionStopwatch, 0);
}


void AvalonSceneManager__StopTransitionTime(
        AvalonSceneManager_o *this,
        System_String_o *strSceneName,
        const MethodInfo *method)
{
  System_Diagnostics_Stopwatch_o *transitionStopwatch; // x0
  System_TimeSpan_o v6; // x1
  System_TimeSpan_o v7; // x0
  Il2CppObject *Instance; // x20
  double v9; // d0
  Il2CppObject *v10; // x20
  int64_t ticks; // [xsp+8h] [xbp-38h] BYREF
  double TotalSeconds; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5937C51 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_21FFC50(&System_TimeSpan_TypeInfo);
    sub_21FFC50(&StringLiteral_20633/*"game.last_scene_transtime"*/);
    sub_21FFC50(&StringLiteral_7788/*"IN_"*/);
    byte_5937C51 = 1;
  }
  transitionStopwatch = this->fields._transitionStopwatch;
  TotalSeconds = 0.0;
  ticks = 0;
  if ( !transitionStopwatch )
    goto LABEL_12;
  if ( !transitionStopwatch->fields.is_running )
    return;
  System_Diagnostics_Stopwatch__Stop(transitionStopwatch, 0);
  transitionStopwatch = this->fields._transitionStopwatch;
  if ( !transitionStopwatch )
    goto LABEL_12;
  ticks = System_Diagnostics_Stopwatch__get_Elapsed(transitionStopwatch, 0).fields._ticks;
  if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v6.fields._ticks);
  v7.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v7, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  transitionStopwatch = (System_Diagnostics_Stopwatch_o *)System_Double__ToString(v9, (const MethodInfo *)&TotalSeconds);
  if ( !Instance
    || (CrashReporter__AddCustomKey(
          (CrashReporter_o *)Instance,
          (System_String_o *)StringLiteral_20633/*"game.last_scene_transtime"*/,
          (System_String_o *)transitionStopwatch,
          0),
        v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
        transitionStopwatch = (System_Diagnostics_Stopwatch_o *)System_String__Concat_75438412(
                                                                  (System_String_o *)StringLiteral_7788/*"IN_"*/,
                                                                  strSceneName,
                                                                  0),
        !v10) )
  {
LABEL_12:
    sub_21FFECC(transitionStopwatch, strSceneName);
  }
  CrashReporter__SetNowState((CrashReporter_o *)v10, (System_String_o *)transitionStopwatch, 0);
}


System_Collections_IEnumerator_o *AvalonSceneManager__UnloadSceneAsync_object_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_37DB528 *method)
{
  long double v3; // q0
  const MethodInfo_37DB528_RGCTXs *rgctx_data; // x8
  __int64 _0_AvalonSceneManager__UnloadSceneAsync_d__47_T; // x0
  AvalonSceneManager__UnloadSceneAsync_d__47_T__o *v9; // x0
  const MethodInfo_37DB528_RGCTXs *v10; // x8
  AvalonSceneManager__UnloadSceneAsync_d__47_T__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2237B54(method);
    rgctx_data = method->rgctx_data;
  }
  _0_AvalonSceneManager__UnloadSceneAsync_d__47_T = (__int64)rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__47_T_;
  if ( (*((_WORD *)&rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__47_T_->_2.bitflags2 + 1) & 1) == 0 )
    _0_AvalonSceneManager__UnloadSceneAsync_d__47_T = sub_2237AF8(v3);
  v9 = (AvalonSceneManager__UnloadSceneAsync_d__47_T__o *)sub_21FFEBC(_0_AvalonSceneManager__UnloadSceneAsync_d__47_T);
  v10 = method->rgctx_data;
  v11 = v9;
  AvalonSceneManager__UnloadSceneAsync_d__47_object____ctor(
    v9,
    0,
    (const MethodInfo_3F0B9C8 *)v10->_1_AvalonSceneManager__UnloadSceneAsync_d__47_T___ctor);
  if ( !v11 )
    sub_21FFECC(v12, v13);
  v11->fields.__4__this = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->fields.__4__this, (int32_t)this, v14, v15, v16, v17, v18, v19);
  v11->fields.callback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v11->fields.callback,
    (int32_t)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  return (System_Collections_IEnumerator_o *)v11;
}


void AvalonSceneManager__UnloadScene_object_(AvalonSceneManager_o *this, const MethodInfo_37DB328 *method)
{
  int32_t sceneCount; // w0
  __int64 v5; // x1
  int v6; // w21
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Component_object; // x22
  long double v12; // q0
  Il2CppClass *_0_T; // x1
  UnityEngine_Object_o *v14; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x22
  int32_t *v16; // x0
  __int64 v17; // x1
  System_String_o *name; // x23
  int32_t *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x22
  int32_t m_Handle; // [xsp+Ch] [xbp-54h] BYREF

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54(method);
  }
  m_Handle = 0;
  if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
  sceneCount = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0);
  if ( sceneCount - 1 >= 0 )
  {
    v6 = sceneCount;
    while ( 1 )
    {
      if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v5);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(--v6, 0).fields.m_Handle;
      p_m_Handle = &m_Handle;
      RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                          (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                          0);
      if ( !RootGameObjects )
        break;
      if ( !LODWORD(RootGameObjects->max_length) )
        sub_21FFED4(RootGameObjects);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           RootGameObjects->m_Items[0],
                           (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      _0_T = method->rgctx_data->_0_T;
      if ( (*((_WORD *)&_0_T->_2.bitflags2 + 1) & 1) == 0 )
        _0_T = (Il2CppClass *)sub_2237AF8(v12);
      v14 = (UnityEngine_Object_o *)sub_21FFDA4(Component_object, _0_T);
      if ( UnityEngine_Object__op_Implicit(v14, 0) )
      {
        dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicRootComponent;
        v16 = &m_Handle;
        name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v16, 0);
        if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v17);
        RootGameObjects = (UnityEngine_GameObject_array *)SceneList__getSceneType(name, 0);
        if ( !dicRootComponent )
          break;
        System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
          dicRootComponent,
          (int32_t)RootGameObjects,
          0,
          (const MethodInfo_3F88BE4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
        v19 = &m_Handle;
        v21 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v19, 0);
        if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v20);
        UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_83310544(v21, 0);
      }
      if ( v6 <= 0 )
        return;
    }
    sub_21FFECC(RootGameObjects, v9);
  }
}


System_Collections_IEnumerator_o *AvalonSceneManager__changeNextSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5937C4D & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager__changeNextSceneCoroutine_d__41_TypeInfo);
    byte_5937C4D = 1;
  }
  v7 = sub_21FFEBC(AvalonSceneManager__changeNextSceneCoroutine_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 48) = changeType;
  *(_QWORD *)(v7 + 40) = scenename;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)scenename, v14, v15, v16, v17, v18, v19);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5937C4C & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager__changePrevSceneCoroutine_d__40_TypeInfo);
    byte_5937C4C = 1;
  }
  v9 = fadeTimeSkip;
  v10 = sub_21FFEBC(AvalonSceneManager__changePrevSceneCoroutine_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 32), (int32_t)this, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v10 + 44) = changeType;
  *(_QWORD *)(v10 + 48) = scenename;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 48), (int32_t)scenename, v17, v18, v19, v20, v21, v22);
  result = (System_Collections_IEnumerator_o *)v10;
  *(_BYTE *)(v10 + 40) = v9;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool AvalonSceneManager__changeScene(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v10; // x6

  if ( (byte_5937C48 & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    byte_5937C48 = 1;
  }
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0);
  return AvalonSceneManager__changeScene_48091088(this, 2, SceneName, fade, data, 0, v10);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5937C4B & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager__changeSceneCoroutine_d__39_TypeInfo);
    byte_5937C4B = 1;
  }
  v11 = fadeTimeSkip;
  v12 = sub_21FFEBC(AvalonSceneManager__changeSceneCoroutine_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 40), (int32_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v12 + 48) = changeType;
  *(_QWORD *)(v12 + 32) = scenename;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 32), (int32_t)scenename, v19, v20, v21, v22, v23, v24);
  *(_BYTE *)(v12 + 52) = v11;
  *(_QWORD *)(v12 + 56) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 56), (int32_t)callback, v25, v26, v27, v28, v29, v30);
  return (System_Collections_IEnumerator_o *)v12;
}


bool AvalonSceneManager__changeScene_48091088(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v24; // x23
  int32_t SceneType; // w23
  int32_t v26; // w0
  __int64 v27; // x1
  const MethodInfo *v28; // x5
  TerminalSceneComponent_c *v29; // x0
  TerminalSceneComponent_c *v30; // x0
  System_Collections_IEnumerator_o *v31; // x0

  if ( (byte_5937C49 & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_20632/*"game.last_scene"*/);
    byte_5937C49 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance
    || (CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v15);
  }
  CrashReporter__AddCustomKey((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_20632/*"game.last_scene"*/, scenename, 0);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sendData, (int32_t)data, v16, v17, v18, v19, v20, v21);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v24 = prevscenetemp->fields.sceneName;
  else
    v24 = 0;
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v22);
  SceneType = SceneList__getSceneType(v24, 0);
  v26 = SceneList__getSceneType(scenename, 0);
  if ( SceneType == 9 )
  {
    if ( v26 == 34 )
    {
      v29 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v27);
        v29 = TerminalSceneComponent_TypeInfo;
      }
      v29->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v26 == 34 )
  {
    v30 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v27);
      v30 = TerminalSceneComponent_TypeInfo;
    }
    v30->static_fields->isSummonToTerminalTransition = 1;
  }
  v31 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0, v28);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v31, 0);
  return 1;
}


bool AvalonSceneManager__changeScene_48092056(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v24; // x23
  int32_t SceneType; // w23
  int32_t v26; // w0
  __int64 v27; // x1
  const MethodInfo *v28; // x5
  TerminalSceneComponent_c *v29; // x0
  TerminalSceneComponent_c *v30; // x0
  System_Collections_IEnumerator_o *v31; // x0

  if ( (byte_5937C4A & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_20632/*"game.last_scene"*/);
    byte_5937C4A = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance
    || (CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v15);
  }
  CrashReporter__AddCustomKey((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_20632/*"game.last_scene"*/, scenename, 0);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sendData, (int32_t)data, v16, v17, v18, v19, v20, v21);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v24 = prevscenetemp->fields.sceneName;
  else
    v24 = 0;
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v22);
  SceneType = SceneList__getSceneType(v24, 0);
  v26 = SceneList__getSceneType(scenename, 0);
  if ( SceneType == 9 )
  {
    if ( v26 == 34 )
    {
      v29 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v27);
        v29 = TerminalSceneComponent_TypeInfo;
      }
      v29->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v26 == 34 )
  {
    v30 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v27);
      v30 = TerminalSceneComponent_TypeInfo;
    }
    v30->static_fields->isSummonToTerminalTransition = 1;
  }
  v31 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, 0, callback, v28);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v31, 0);
  return 1;
}


bool AvalonSceneManager__changeScene_48092856(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_48091088(this, 2, scenename, fade, data, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
bool AvalonSceneManager__checkLoadedScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  System_String_o *SceneName; // x19
  __int64 v5; // x1
  int32_t *p_m_Handle; // x0
  int32_t m_Handle; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937C42 & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_5937C42 = 1;
  }
  m_Handle = 0;
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0);
  if ( System_String__IsNullOrEmpty(SceneName, 0) )
  {
    return 0;
  }
  else
  {
    if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v5);
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

  if ( (byte_5937C41 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
    byte_5937C41 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_21FFECC(0, *(_QWORD *)&type);
  v6 = System_Collections_Generic_Stack_object___Peek(
         scenestack,
         (const MethodInfo_3B29974 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( v6 )
    LOBYTE(v6) = LODWORD(v6[1].monitor) == type;
  return (char)v6;
}


System_Collections_IEnumerator_o *AvalonSceneManager__checkUnloadScenes(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5937C3C & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager__checkUnloadScenes_d__18_TypeInfo);
    byte_5937C3C = 1;
  }
  v3 = sub_21FFEBC(AvalonSceneManager__checkUnloadScenes_d__18_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void AvalonSceneManager__destroySceneObject(AvalonSceneManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  int32_t sceneCount; // w0
  const MethodInfo *v19; // x1
  int v20; // w20
  int32_t *p_m_Handle; // x0
  __int64 v22; // x1
  System_String_o *name; // x21
  int32_t *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x21
  System_Collections_Generic_List_object__o *m_listUnloadScenes; // x21
  int32_t *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  System_Collections_Generic_Stack_T__o *v38; // x1
  Il2CppClass **v39; // x0
  System_Collections_IEnumerator_o *v40; // x0
  int32_t m_Handle; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5937C3D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
    byte_5937C3D = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.prevscenetemp, 0, v2, v3, v4, v5, v6, v7);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_24;
  System_Collections_Generic_Stack_object___Clear(
    scenestack,
    (const MethodInfo_3B295C4 *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.targetRoot, 0, v11, v12, v13, v14, v15, v16);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.dicRootComponent;
  if ( !scenestack )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_Int32Enum__object___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)scenestack,
    (const MethodInfo_3F88D80 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__Clear__);
  if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v17);
  sceneCount = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0);
  if ( sceneCount - 1 >= 0 )
  {
    v20 = sceneCount;
    while ( 1 )
    {
      if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v19);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(--v20, 0).fields.m_Handle;
      p_m_Handle = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0);
      if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v22);
      scenestack = (System_Collections_Generic_Stack_T__o *)SceneList__getSceneName(0, 0);
      if ( !name )
        break;
      if ( !System_String__Contains(name, (System_String_o *)scenestack, 0) )
      {
        v24 = &m_Handle;
        v26 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v24, 0);
        if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v25);
        UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_83310544(v26, 0);
        m_listUnloadScenes = (System_Collections_Generic_List_object__o *)this->fields.m_listUnloadScenes;
        v28 = &m_Handle;
        scenestack = (System_Collections_Generic_Stack_T__o *)UnityEngine_SceneManagement_Scene__get_name(
                                                                (UnityEngine_SceneManagement_Scene_o)v28,
                                                                0);
        if ( !m_listUnloadScenes )
          break;
        items = m_listUnloadScenes->fields._items;
        v36 = Method_System_Collections_Generic_List_string__Add__;
        ++m_listUnloadScenes->fields._version;
        if ( !items )
          break;
        size = m_listUnloadScenes->fields._size;
        v38 = scenestack;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            m_listUnloadScenes,
            (Il2CppObject *)scenestack,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          m_listUnloadScenes->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v38;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v38, v29, v30, v31, v32, v33, v34);
        }
      }
      if ( v20 <= 0 )
        goto LABEL_23;
    }
LABEL_24:
    sub_21FFECC(scenestack, v9);
  }
LABEL_23:
  v40 = AvalonSceneManager__checkUnloadScenes(this, v19);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v40, 0);
}


void AvalonSceneManager__endInitialize(
        AvalonSceneManager_o *this,
        SceneRootComponent_o *comp,
        const MethodInfo *method)
{
  __int64 v5; // x21
  SceneRootComponent_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  SceneRootComponent_o **v14; // x20
  Il2CppObject *sendData; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Object_array *v28; // x22
  int32_t v29; // w1
  System_Func_object__bool__o *v30; // x23
  System_String_o *SceneName; // x1
  const MethodInfo *v32; // x2

  if ( (byte_5937C3E & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_string____91485272);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&Method_AvalonSceneManager___c__DisplayClass20_0__endInitialize_b__0__);
    sub_21FFC50(&AvalonSceneManager___c__DisplayClass20_0_TypeInfo);
    sub_21FFC50(&StringLiteral_3244/*"BattleScene"*/);
    byte_5937C3E = 1;
  }
  v5 = sub_21FFEBC(AvalonSceneManager___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = comp;
  v14 = (SceneRootComponent_o **)(v5 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)comp, v8, v9, v10, v11, v12, v13);
  sendData = this->fields.sendData;
  this->fields.sendData = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sendData, 0, v16, v17, v18, v19, v20, v21);
  v6 = *(SceneRootComponent_o **)(v5 + 16);
  if ( !v6 )
    goto LABEL_10;
  ((void (__fastcall *)(SceneRootComponent_o *, Il2CppObject *, const MethodInfo *))v6->klass->vtable._5_beginStartUp.methodPtr)(
    v6,
    sendData,
    v6->klass->vtable._5_beginStartUp.method);
  v6 = (SceneRootComponent_o *)sub_21FFD10(string___TypeInfo, 1);
  if ( !v6 )
    goto LABEL_10;
  v28 = (System_Object_array *)v6;
  if ( !LODWORD(v6->fields.m_CancellationTokenSource) )
    sub_21FFED4(v6);
  v29 = StringLiteral_3244/*"BattleScene"*/;
  v6->fields.myFSM = (struct PlayMakerFSM_o *)StringLiteral_3244/*"BattleScene"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->fields.myFSM, v29, v22, v23, v24, v25, v26, v27);
  v30 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v5,
    Method_AvalonSceneManager___c__DisplayClass20_0__endInitialize_b__0__,
    0);
  if ( !BasicHelper__Any_object__58575580(
          v28,
          (System_Func_T__bool__o *)v30,
          (const MethodInfo_37DCADC *)Method_BasicHelper_Any_string____91485272) )
  {
    v6 = *v14;
    if ( *v14 )
    {
      SceneName = SceneRootComponent__getSceneName(v6, 0);
      AvalonSceneManager__StopTransitionTime(this, SceneName, v32);
      return;
    }
LABEL_10:
    sub_21FFECC(v6, v7);
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

  if ( (byte_5937C40 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
    byte_5937C40 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_21FFECC(0, method);
  result = (System_String_o *)System_Collections_Generic_Stack_object___Peek(
                                scenestack,
                                (const MethodInfo_3B29974 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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
  int max_length; // w8
  UnityEngine_GameObject_array *v10; // x20
  unsigned int v11; // w24
  __int64 v12; // x1
  int32_t m_Handle; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5937C3A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_5937C3A = 1;
  }
  m_Handle = 0;
  if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, scenenName);
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
    v10 = RootGameObjects;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
          sub_21FFED4(RootGameObjects);
        RootGameObjects = (UnityEngine_GameObject_array *)v10->m_Items[v11];
        if ( !RootGameObjects )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)RootGameObjects,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
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
        max_length = v10->max_length;
        if ( (int)++v11 >= max_length )
          return 0;
      }
LABEL_19:
      sub_21FFECC(RootGameObjects, v8);
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

  return AvalonSceneManager__popScene_48091580(this, fade, data, 0, v4);
}


bool AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_48091580(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool AvalonSceneManager__popScene_48091580(
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

  if ( (byte_5937C44 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_5937C44 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  v10 = *((_DWORD *)scenestack + 6);
  if ( v10 < 1 )
    return v10 > 0;
  scenestack = System_Collections_Generic_Stack_object___Pop(
                 (System_Collections_Generic_Stack_T__o *)scenestack,
                 (const MethodInfo_3B299B8 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_21FFECC(scenestack, *(_QWORD *)&fade);
  if ( isRefresh )
    v12 = 5;
  else
    v12 = 4;
  AvalonSceneManager__changeScene_48091088(this, v12, *((System_String_o **)scenestack + 2), fade, data, 0, v11);
  return v10 > 0;
}


// local variable allocation has failed, the output may be wrong!
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
  bool v16; // w22
  const MethodInfo *v17; // x6

  if ( (byte_5937C43 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    byte_5937C43 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
  v10 = UnityEngine_Object__op_Inequality(targetRoot, 0, 0);
  prevscenetemp = 0;
  if ( v10 )
  {
    prevscenetemp = this->fields.prevscenetemp;
    if ( prevscenetemp )
    {
      scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
      if ( !scenestack )
        goto LABEL_16;
      System_Collections_Generic_Stack_object___Push(
        scenestack,
        (Il2CppObject *)this->fields.prevscenetemp,
        (const MethodInfo_3B29AB4 *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v11);
  SceneName = SceneList__getSceneName(type, 0);
  v16 = AvalonSceneManager__changeScene_48091088(this, 3, SceneName, fade, data, 0, v15);
  if ( !v16 && prevscenetemp )
  {
    scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_object___Pop(
        scenestack,
        (const MethodInfo_3B299B8 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_48091088(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v17);
      return v16;
    }
LABEL_16:
    sub_21FFECC(scenestack, v11);
  }
  return v16;
}


// attributes: thunk
void AvalonSceneManager__reboot(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager__destroySceneObject(this, method);
}


// local variable allocation has failed, the output may be wrong!
bool AvalonSceneManager__setTargetRootActive(AvalonSceneManager_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *targetRoot; // x21
  __int64 v6; // x1
  SceneRootComponent_o *v7; // x0

  if ( (byte_5937C4F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937C4F = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flag);
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0, 0) )
    return 0;
  v7 = this->fields.targetRoot;
  if ( !v7 )
    sub_21FFECC(0, v6);
  return SceneRootComponent__SetSceneActive(v7, flag, 0);
}


System_Collections_IEnumerator_o *AvalonSceneManager__setupUI(AvalonSceneManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5937C4E & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager__setupUI_d__42_TypeInfo);
    byte_5937C4E = 1;
  }
  v2 = sub_21FFEBC(AvalonSceneManager__setupUI_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  result = (System_Collections_IEnumerator_o *)v2;
  *(_DWORD *)(v2 + 16) = 0;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool AvalonSceneManager__transitionScene(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v10; // x6

  if ( (byte_5937C45 & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    byte_5937C45 = 1;
  }
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0);
  return AvalonSceneManager__changeScene_48091088(this, 1, SceneName, fade, data, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
bool AvalonSceneManager__transitionSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t type,
        int32_t fade,
        Il2CppObject *data,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_5937C47 & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    byte_5937C47 = 1;
  }
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0);
  return AvalonSceneManager__changeScene_48091088(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


// local variable allocation has failed, the output may be wrong!
bool AvalonSceneManager__transitionScene_48091908(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_5937C46 & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    byte_5937C46 = 1;
  }
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0);
  return AvalonSceneManager__changeScene_48092056(this, 1, SceneName, fade, data, callback, v12);
}


bool AvalonSceneManager__transitionScene_48092832(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_48091088(this, 1, scenename, fade, data, 0, v5);
}


void AvalonSceneManager__UnloadSceneAsync_d__47_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        int32_t 1__state,
        const MethodInfo_3F0B9C8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AvalonSceneManager__UnloadSceneAsync_d__47_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        const MethodInfo_3F0B9F4 *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  struct AvalonSceneManager_o *_4__this; // x24
  int32_t v7; // w21
  int32_t *p_m_Handle; // x0
  void *RootGameObjects; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x22
  __int64 _1_T; // x1
  UnityEngine_Object_o *v13; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x20
  int32_t *v15; // x0
  __int64 v16; // x1
  System_String_o *name; // x21
  int32_t *v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x20
  struct UnityEngine_AsyncOperation_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject **p__2__current; // x19
  int32_t m_Handle; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_593F04A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_593F04A = 1;
  }
  _1__state = this->fields.__1__state;
  m_Handle = 0;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
  }
  else
  {
    result = 0;
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
    v7 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0) - 1;
    do
    {
      if ( v7 < 0 )
        goto LABEL_28;
      if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v7, 0).fields.m_Handle;
      p_m_Handle = &m_Handle;
      RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                          (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                          0);
      if ( !RootGameObjects )
        goto LABEL_31;
      if ( !*((_DWORD *)RootGameObjects + 6) )
        sub_21FFED4(RootGameObjects);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           *((UnityEngine_GameObject_o **)RootGameObjects + 4),
                           (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      _1_T = (__int64)method->klass->rgctx_data->_1_T;
      if ( (*(_WORD *)(_1_T + 309) & 1) == 0 )
        _1_T = sub_2237AF8();
      v13 = (UnityEngine_Object_o *)sub_21FFDA4(Component_object, _1_T);
      RootGameObjects = (void *)UnityEngine_Object__op_Implicit(v13, 0);
      --v7;
    }
    while ( ((unsigned __int8)RootGameObjects & 1) == 0 );
    if ( !_4__this )
      goto LABEL_31;
    dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
    v15 = &m_Handle;
    name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v15, 0);
    if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v16);
    RootGameObjects = (void *)SceneList__getSceneType(name, 0);
    if ( !dicRootComponent )
LABEL_31:
      sub_21FFECC(RootGameObjects, method);
    System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
      dicRootComponent,
      (int32_t)RootGameObjects,
      0,
      (const MethodInfo_3F88BE4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    v18 = &m_Handle;
    v20 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v18, 0);
    if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v19);
    v21 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_83310544(v20, 0);
    this->fields._asyncOp_5__2 = v21;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._asyncOp_5__2,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  RootGameObjects = this->fields._asyncOp_5__2;
  if ( !RootGameObjects )
    goto LABEL_31;
  if ( UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)RootGameObjects, 0) )
  {
LABEL_28:
    ActionExtensions__Call(this->fields.callback, 0);
    return 0;
  }
  else
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v28, v29, v30, v31, v32, v33);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return result;
}


Il2CppObject *AvalonSceneManager__UnloadSceneAsync_d__47_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        const MethodInfo_3F0BC60 *method)
{
  return this->fields.__2__current;
}


void __noreturn AvalonSceneManager__UnloadSceneAsync_d__47_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        const MethodInfo_3F0BC68 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_21FFEBC(v3);
  System_NotSupportedException___ctor(v4, 0);
  sub_21FFD90(v4, method);
}


Il2CppObject *AvalonSceneManager__UnloadSceneAsync_d__47_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        const MethodInfo_3F0BC9C *method)
{
  return this->fields.__2__current;
}


void AvalonSceneManager__UnloadSceneAsync_d__47_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__47_T__o *this,
        const MethodInfo_3F0B9F0 *method)
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
    sub_21FFECC(0, v);
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
  int _1__state; // w8
  struct AvalonSceneManager_o *_4__this; // x20
  bool v6; // w21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x22
  bool v15; // w22
  bool v16; // w0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct SceneRootComponent_o *v23; // x1
  _BOOL8 v24; // x0
  System_Collections_IEnumerator_o *v25; // x0
  MissionNaviTransitionBoardItem_o *v26; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  UnityEngine_Object_o *v33; // x22
  System_String_o *v34; // x22
  int32_t *v35; // x0
  const MethodInfo *v36; // x2
  SceneRootComponent_o *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  UnityEngine_Object_o *v44; // x21
  System_String_o *v45; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int v53; // w8
  SceneRootComponent_o *TargetRoot; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  __int64 v61; // x1
  UnityEngine_Object_o *v62; // x21
  __int64 v63; // x1
  System_String_o *v64; // x21
  int32_t *p_m_Handle; // x0
  unsigned __int64 _2__current_low; // x8
  AvalonSceneManager__changeNextSceneCoroutine_d__41_o *v67; // x21
  unsigned __int64 v68; // x29
  AvalonSceneManager__changeNextSceneCoroutine_d__41_c **v69; // x8
  UnityEngine_GameObject_o *v70; // x22
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__41_o *v72; // x23
  int i; // w26
  AvalonSceneManager__changeNextSceneCoroutine_d__41_c **v74; // x8
  UnityEngine_Component_o *gameObject; // x24
  UnityEngine_Object_c *v76; // x0
  int v77; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__41_o *v78; // x22
  unsigned int v79; // w24
  AvalonSceneManager__changeNextSceneCoroutine_d__41_c **v80; // x8
  UnityEngine_Component_o *v81; // x23
  UnityEngine_Object_c *v82; // x0
  UnityEngine_Object_o *v83; // x21
  UnityEngine_Object_o *v84; // x21
  VirtualInvokeData *p__8_System_Collections_IEnumerator_Reset; // x8
  SceneRootComponent_o *newTargetRoot_5__2; // x22
  SceneTemp_o *v87; // x21
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  struct SceneRootComponent_o *v94; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__41_o **p_targetRoot; // x21
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x22
  __int64 v103; // x1
  System_String_o *SceneName; // x23
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  int32_t changeType; // w8
  Il2CppObject *v112; // x19
  MissionNaviTransitionBoardItem_o *p_sendData; // x20
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v115; // x21
  UnityEngine_Object_o *v116; // x22
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v123; // x21
  __int64 v124; // x1
  System_String_o *v125; // x22
  __int64 v126; // x1
  System_String_o *v127; // x20
  int32_t m_Handle; // [xsp+Ch] [xbp-64h] BYREF

  v3 = this;
  if ( (byte_5937C54 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponents_Component___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_21FFC50(&SceneTemp_TypeInfo);
    sub_21FFC50(&StringLiteral_3247/*"BattleScriptScene"*/);
    sub_21FFC50(&StringLiteral_3244/*"BattleScene"*/);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937C54 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  v6 = 0;
  m_Handle = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state != 2 )
    {
      if ( _1__state == 3 )
      {
        v3->fields.__1__state = -1;
LABEL_84:
        newTargetRoot_5__2 = v3->fields._newTargetRoot_5__2;
        v87 = (SceneTemp_o *)sub_21FFEBC(SceneTemp_TypeInfo);
        SceneTemp___ctor_48429740(v87, newTargetRoot_5__2, 0);
        if ( !_4__this )
          goto LABEL_118;
        _4__this->fields.prevscenetemp = v87;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.prevscenetemp,
          (int32_t)v87,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93);
        v94 = v3->fields._newTargetRoot_5__2;
        _4__this->fields.targetRoot = v94;
        p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o **)&_4__this->fields.targetRoot;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.targetRoot,
          (int32_t)v94,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)v3->fields._newTargetRoot_5__2;
        if ( !this )
          goto LABEL_118;
        dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
        SceneName = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0);
        if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v103);
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)SceneList__getSceneType(SceneName, 0);
        if ( !dicRootComponent )
          goto LABEL_118;
        System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
          dicRootComponent,
          (int32_t)this,
          (Il2CppObject *)v3->fields._newTargetRoot_5__2,
          (const MethodInfo_3F88BE4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
        this = *p_targetRoot;
        if ( !*p_targetRoot )
          goto LABEL_118;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0);
        if ( !this )
          goto LABEL_118;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        changeType = v3->fields.changeType;
        _4__this->fields.isBusySceneChange = 0;
        if ( (changeType & 0xFFFFFFFE) == 4 )
        {
          sendData = _4__this->fields.sendData;
          p_sendData = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.sendData;
          v112 = sendData;
          p_sendData->klass = 0;
          sub_21FFBF4(p_sendData, 0, v105, v106, v107, v108, v109, v110);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)p_sendData[-1].fields._Name_k__BackingField;
          if ( !this )
            goto LABEL_118;
          ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__41_o *, Il2CppObject *, void *))this->klass[1]._1.image)(
            this,
            v112,
            this->klass[1]._1.gc_desc);
        }
        else
        {
          this = *p_targetRoot;
          if ( !*p_targetRoot )
            goto LABEL_118;
          ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__41_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
            this,
            this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
        }
        return 0;
      }
      return v6;
    }
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_118;
    TargetRoot = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v3->fields.scenename, v2);
    v3->fields._newTargetRoot_5__2 = TargetRoot;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v3->fields._newTargetRoot_5__2,
      (int32_t)TargetRoot,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    v62 = (UnityEngine_Object_o *)v3->fields._newTargetRoot_5__2;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
    if ( UnityEngine_Object__op_Equality(v62, 0, 0) )
      return 0;
    v64 = v3->fields.scenename;
    if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v63);
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v64, 0).fields.m_Handle;
    p_m_Handle = &m_Handle;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                                                                     (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                                                     0);
    if ( !this )
      goto LABEL_118;
    _2__current_low = LODWORD(this->fields.__2__current);
    v67 = this;
    if ( (int)_2__current_low < 1 )
    {
LABEL_73:
      v83 = (UnityEngine_Object_o *)v3->fields._newTargetRoot_5__2;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_Object__op_Inequality(v83, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !_4__this )
          goto LABEL_118;
        v84 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(v84, 0, 0) )
        {
          if ( _4__this->fields.prevscenetemp )
          {
            this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)_4__this->fields.targetRoot;
            if ( v3->fields.changeType == 3 )
            {
              if ( !this )
                goto LABEL_118;
              p__8_System_Collections_IEnumerator_Reset = &this->klass->vtable._8_System_Collections_IEnumerator_Reset;
            }
            else
            {
              if ( !this )
                goto LABEL_118;
              p__8_System_Collections_IEnumerator_Reset = &this->klass->vtable._7_System_Collections_IEnumerator_get_Current;
            }
            p__8_System_Collections_IEnumerator_Reset->methodPtr();
          }
          v115 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          v116 = (UnityEngine_Object_o *)v3->fields._newTargetRoot_5__2;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          if ( !UnityEngine_Object__op_Inequality(v115, v116, 0) )
            goto LABEL_115;
          if ( v3->fields.changeType == 5 )
          {
            this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)_4__this->fields.targetRoot;
            if ( this )
            {
              v123 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
              v125 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0);
              if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v124);
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)SceneList__getSceneType(v125, 0);
              if ( v123 )
              {
                System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
                  v123,
                  (int32_t)this,
                  0,
                  (const MethodInfo_3F88BE4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
                this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)_4__this->fields.targetRoot;
                if ( this )
                {
                  v127 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0);
                  if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v126);
                  UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_83310544(v127, 0);
                  goto LABEL_115;
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
LABEL_115:
                v3->fields.__2__current = 0;
                p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
                sub_21FFBF4(p__2__current, 0, v117, v118, v119, v120, v121, v122);
                v53 = 3;
                v6 = 1;
LABEL_116:
                p__2__current[-1].fields._BoardType_k__BackingField = v53;
                return v6;
              }
            }
          }
LABEL_118:
          sub_21FFECC(this, method);
        }
        goto LABEL_84;
      }
      return 0;
    }
    v68 = 0;
    while ( 1 )
    {
      if ( v68 >= _2__current_low )
LABEL_119:
        sub_21FFED4(this);
      v69 = &v67->klass + v68;
      v70 = (UnityEngine_GameObject_o *)v69[4];
      if ( !v70 )
        goto LABEL_118;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                                                       (UnityEngine_GameObject_o *)v69[4],
                                                                       (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
      if ( !this )
        goto LABEL_118;
      _2__current = (int)this->fields.__2__current;
      v72 = this;
      if ( _2__current >= 1 )
      {
        for ( i = 0; i < _2__current; ++i )
        {
          if ( i >= (unsigned int)_2__current )
            goto LABEL_119;
          v74 = &v72->klass + i;
          gameObject = (UnityEngine_Component_o *)v74[4];
          if ( !gameObject )
            goto LABEL_118;
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_Component__GetComponents_object__58646812(
                                                                           (UnityEngine_Component_o *)v74[4],
                                                                           (const MethodInfo_37EE11C *)Method_UnityEngine_Component_GetComponents_Component___);
          if ( !this )
            goto LABEL_118;
          if ( LODWORD(this->fields.__2__current) == 1 )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            {
              v76 = UnityEngine_Object_TypeInfo;
LABEL_58:
              j_il2cpp_runtime_class_init_0(v76, method);
            }
          }
          else
          {
            v76 = UnityEngine_Object_TypeInfo;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              goto LABEL_58;
          }
          UnityEngine_Object__DestroyImmediate_83246828((UnityEngine_Object_o *)gameObject, 0);
          _2__current = (int)v72->fields.__2__current;
        }
      }
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                                                       v70,
                                                                       (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
      if ( !this )
        goto LABEL_118;
      v77 = (int)this->fields.__2__current;
      v78 = this;
      if ( v77 >= 1 )
        break;
LABEL_72:
      _2__current_low = LODWORD(v67->fields.__2__current);
      if ( (int)++v68 >= (int)_2__current_low )
        goto LABEL_73;
    }
    v79 = 0;
    while ( 1 )
    {
      if ( v79 >= v77 )
        goto LABEL_119;
      v80 = &v78->klass + (int)v79;
      v81 = (UnityEngine_Component_o *)v80[4];
      if ( !v81 )
        goto LABEL_118;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_Component__GetComponents_object__58646812(
                                                                       (UnityEngine_Component_o *)v80[4],
                                                                       (const MethodInfo_37EE11C *)Method_UnityEngine_Component_GetComponents_Component___);
      if ( !this )
        goto LABEL_118;
      if ( LODWORD(this->fields.__2__current) == 2 )
      {
        v81 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v81, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        {
          v82 = UnityEngine_Object_TypeInfo;
LABEL_70:
          j_il2cpp_runtime_class_init_0(v82, method);
        }
      }
      else
      {
        v82 = UnityEngine_Object_TypeInfo;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_70;
      }
      UnityEngine_Object__DestroyImmediate_83246828((UnityEngine_Object_o *)v81, 0);
      v77 = (int)v78->fields.__2__current;
      if ( (int)++v79 >= v77 )
        goto LABEL_72;
    }
  }
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      v3->fields.__1__state = -1;
      goto LABEL_23;
    }
    return v6;
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_118;
  AvalonSceneManager__StartTransitionTime(_4__this, method);
  v3->fields._newTargetRoot_5__2 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields._newTargetRoot_5__2, 0, v7, v8, v9, v10, v11, v12);
  v14 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = UnityEngine_Object__op_Inequality(v14, 0, 0);
  v16 = System_String__op_Equality(v3->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !v15 )
  {
LABEL_17:
    if ( !v16 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( !v16 )
  {
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)_4__this->fields.targetRoot;
    if ( !this )
      goto LABEL_118;
    v16 = SceneRootComponent__checkSceneName((SceneRootComponent_o *)this, v3->fields.scenename, 0);
    goto LABEL_17;
  }
LABEL_18:
  v23 = _4__this->fields.targetRoot;
  v3->fields._newTargetRoot_5__2 = v23;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields._newTargetRoot_5__2,
    (int32_t)v23,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
LABEL_19:
  if ( v3->fields.changeType > 1u
    || !System_String__op_Inequality(v3->fields.scenename, (System_String_o *)StringLiteral_3247/*"BattleScriptScene"*/, 0)
    || !(v24 = System_String__op_Inequality(v3->fields.scenename, (System_String_o *)StringLiteral_3244/*"BattleScene"*/, 0)) )
  {
LABEL_23:
    v33 = (UnityEngine_Object_o *)v3->fields._newTargetRoot_5__2;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(v33, 0, 0) )
    {
      v34 = v3->fields.scenename;
      if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v34, 0).fields.m_Handle;
      v35 = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__41_o *)UnityEngine_SceneManagement_Scene__get_isLoaded(
                                                                       (UnityEngine_SceneManagement_Scene_o)v35,
                                                                       0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !_4__this )
          goto LABEL_118;
        v37 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v3->fields.scenename, v36);
        v3->fields._newTargetRoot_5__2 = v37;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v3->fields._newTargetRoot_5__2,
          (int32_t)v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
      v44 = (UnityEngine_Object_o *)v3->fields._newTargetRoot_5__2;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Equality(v44, 0, 0) )
      {
        v45 = v3->fields.scenename;
        if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
        v6 = 1;
        UnityEngine_SceneManagement_SceneManager__LoadScene(v45, 1, 0);
        v3->fields.__2__current = 0;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
        sub_21FFBF4(p__2__current, 0, v47, v48, v49, v50, v51, v52);
        v53 = 2;
        goto LABEL_116;
      }
    }
    goto LABEL_73;
  }
  v25 = AvalonSceneManager__setupUI((AvalonSceneManager_o *)v24, method);
  v3->fields.__2__current = (Il2CppObject *)v25;
  v26 = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
  sub_21FFBF4(v26, (int32_t)v25, v27, v28, v29, v30, v31, v32);
  v6 = 1;
  v26[-1].fields._BoardType_k__BackingField = 1;
  return v6;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__41_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct AvalonSceneManager_o *_4__this; // x20
  void *Instance; // x0
  int32_t fadeType; // w8
  AvalonSceneManager_c *v13; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int v21; // w8
  int32_t v22; // w8
  float duration_5__2; // s0
  int32_t v24; // w1
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  UnityEngine_Object_o *targetRoot; // x22
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  const MethodInfo *v51; // x2
  System_String_o **v52; // x22
  __int64 v53; // x1
  UnityEngine_Object_o *v54; // x21
  int32_t sceneCount; // w0
  int v56; // w21
  int32_t *p_m_Handle; // x0
  AvalonSceneManager_o *name; // x0
  const MethodInfo *v59; // x2
  __int64 v60; // x1
  UnityEngine_Object_o *v61; // x22
  System_String_o *scenename; // x19
  unsigned int v63; // w19
  __int64 v64; // x1
  Il2CppObject *value; // x20
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject **v68; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v70; // [xsp+10h] [xbp-70h] BYREF
  int32_t m_Handle; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_5937C55 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__SceneRootComponent__get_Value__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_5937C55 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  Instance = 0;
  m_Handle = 0;
  memset(&v70, 0, sizeof(v70));
  if ( _1__state > 2 )
  {
    switch ( _1__state )
    {
      case 3:
        this->fields.__1__state = -1;
        if ( _4__this )
        {
          AvalonSceneManager__destroySceneObject(_4__this, method);
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v15, v16, v17, v18, v19, v20);
          v21 = 4;
LABEL_38:
          *((_DWORD *)p__2__current - 2) = v21;
          LOBYTE(Instance) = 1;
          return (char)Instance;
        }
        break;
      case 4:
        this->fields.__1__state = -1;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
        if ( Instance )
        {
          AtlasManager__ReleaseNoneResidentAtlas((AtlasManager_o *)Instance, 0);
          if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v25);
          CommonEffectManager__ReleaseSkinEffects(0);
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v26, v27, v28, v29, v30, v31);
          v21 = 5;
          goto LABEL_38;
        }
        break;
      case 5:
        this->fields.__1__state = -1;
        goto LABEL_76;
      default:
        return (char)Instance;
    }
    goto LABEL_61;
  }
  if ( _1__state )
  {
    if ( _1__state != 1 )
    {
      if ( _1__state != 2 )
        return (char)Instance;
      this->fields.__1__state = -1;
      goto LABEL_35;
    }
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_61;
  }
  else
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_61;
    fadeType = _4__this->fields.fadeType;
    if ( !fadeType )
      goto LABEL_39;
    v13 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      v13 = AvalonSceneManager_TypeInfo;
      fadeType = _4__this->fields.fadeType;
    }
    LODWORD(this->fields._duration_5__2) = LODWORD(v13->static_fields->DEFAULT_FADE_TIME);
    if ( (unsigned int)(fadeType - 1) <= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_61;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 1, 0);
    }
    if ( !this->fields.fadeTimeSkip )
    {
      this->fields.__2__current = 0;
      v68 = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v68, 0, v2, v3, v4, v5, v6, v7);
      LOBYTE(Instance) = 1;
      *((_DWORD *)v68 - 2) = 1;
      return (char)Instance;
    }
    this->fields._duration_5__2 = 0.0;
  }
  v22 = _4__this->fields.fadeType;
  if ( v22 == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_61;
    duration_5__2 = this->fields._duration_5__2;
    v24 = 2;
    goto LABEL_34;
  }
  if ( v22 == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_61;
    duration_5__2 = this->fields._duration_5__2;
    v24 = 1;
LABEL_34:
    CommonUI__maskFadeout((CommonUI_o *)Instance, v24, duration_5__2, 0, 0);
  }
LABEL_35:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  if ( CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0) )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v32, v33, v34, v35, v36, v37);
    v21 = 2;
    goto LABEL_38;
  }
LABEL_39:
  MainMenuBar__setButtonActive(0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  CommonUI__InitTurotialArrowMark((CommonUI_o *)Instance, 0);
  if ( this->fields.changeType <= 1u )
  {
    if ( !_4__this )
      goto LABEL_61;
    if ( _4__this->fields.prevscenetemp )
    {
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(targetRoot, 0, 0) )
      {
        Instance = _4__this->fields.targetRoot;
        if ( !Instance )
          goto LABEL_61;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 424LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 432LL));
      }
      _4__this->fields.prevscenetemp = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.prevscenetemp, 0, v45, v46, v47, v48, v49, v50);
    }
    Instance = _4__this->fields.scenestack;
    if ( Instance )
    {
      while ( *((int *)Instance + 6) > 0 )
      {
        Instance = System_Collections_Generic_Stack_object___Pop(
                     (System_Collections_Generic_Stack_T__o *)Instance,
                     (const MethodInfo_3B299B8 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
        if ( !Instance )
          goto LABEL_61;
        v52 = (System_String_o **)Instance;
        v54 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(
                                        (AvalonSceneManager_o *)Instance,
                                        *((System_String_o **)Instance + 2),
                                        v51);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
        Instance = (void *)UnityEngine_Object__op_Inequality(v54, 0, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v54 )
            goto LABEL_61;
          if ( SceneRootComponent__checkSceneName((SceneRootComponent_o *)v54, v52[2], 0) )
          {
            Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v54, 0);
            if ( !Instance )
              goto LABEL_61;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
            ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD))v54->klass[1]._1.this_arg.data)(
              v54,
              *(_QWORD *)&v54->klass[1]._1.this_arg.bits);
            Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v54, 0);
            if ( !Instance )
              goto LABEL_61;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          }
        }
        Instance = _4__this->fields.scenestack;
        if ( !Instance )
          goto LABEL_61;
      }
      if ( !this->fields.changeType )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v38, v39, v40, v41, v42, v43);
        v21 = 3;
        goto LABEL_38;
      }
      if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
      sceneCount = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0);
      if ( sceneCount - 1 >= 0 )
      {
        v56 = sceneCount;
        while ( 1 )
        {
          if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
          m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(--v56, 0).fields.m_Handle;
          p_m_Handle = &m_Handle;
          name = (AvalonSceneManager_o *)UnityEngine_SceneManagement_Scene__get_name(
                                           (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                           0);
          v61 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(name, (System_String_o *)name, v59);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
          Instance = (void *)UnityEngine_Object__op_Inequality(v61, 0, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v61 )
              goto LABEL_61;
            Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v61, 0);
            if ( !Instance )
              goto LABEL_61;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          }
          if ( v56 <= 0 )
            goto LABEL_76;
        }
      }
      goto LABEL_76;
    }
LABEL_61:
    sub_21FFECC(Instance, method);
  }
LABEL_76:
  scenename = this->fields.scenename;
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, method);
  Instance = (void *)SceneList__getSceneType(scenename, 0);
  if ( !_4__this )
    goto LABEL_61;
  v63 = (unsigned int)Instance;
  Instance = _4__this->fields.dicRootComponent;
  if ( !Instance )
    goto LABEL_61;
  System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator(
    &v70,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
    (const MethodInfo_3F89034 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext(
            &v70,
            (const MethodInfo_412A7B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__MoveNext__) )
  {
    value = v70.fields._current.fields.value;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
    v66 = UnityEngine_Object__op_Equality(0, (UnityEngine_Object_o *)value, 0);
    if ( !v66 )
    {
      if ( !value )
        sub_21FFECC(v66, v67);
      ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))value->klass->vtable[11].methodPtr)(
        value,
        v63,
        value->klass->vtable[11].method);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
    &v70,
    (const MethodInfo_412A8D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__Dispose__);
  LOBYTE(Instance) = 0;
  return (char)Instance;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__40_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  int32_t _1__state; // w8
  struct AvalonSceneManager_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  System_Action_o *callback; // x0
  int32_t changeType; // w8
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  __int64 v10; // x1
  Il2CppObject **p__2__current; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int v18; // w8
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *scenename; // x21
  int32_t SceneType; // w0
  unsigned int v35; // w22
  struct SceneTemp_o *prevscenetemp; // x8
  Il2CppObject *v37; // x21
  int32_t v38; // w8
  bool v39; // zf
  const MethodInfo *v40; // x4
  int32_t ConnectMarkEventId; // w1
  bool v42; // w2
  Il2CppObject *v43; // x22
  Il2CppObject *v44; // x0
  Il2CppObject **v45; // x19
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7

  if ( (byte_5937C56 & 1) == 0 )
  {
    sub_21FFC50(&System_GC_TypeInfo);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_5937C56 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  Instance = 0;
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return (char)Instance;
      changeType = this->fields.changeType;
      this->fields.__1__state = -1;
      if ( !changeType )
      {
        v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
        if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v10);
        System_GC__Collect(0);
        this->fields.__2__current = (Il2CppObject *)v9;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v9, v12, v13, v14, v15, v16, v17);
        v18 = 2;
        goto LABEL_20;
      }
LABEL_18:
      if ( _4__this )
      {
        v26 = (Il2CppObject *)AvalonSceneManager__changeNextSceneCoroutine(
                                _4__this,
                                this->fields.changeType,
                                this->fields.scenename,
                                v2);
        this->fields.__2__current = v26;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v26, v27, v28, v29, v30, v31, v32);
        v18 = 4;
        goto LABEL_20;
      }
      goto LABEL_64;
    }
    scenename = this->fields.scenename;
    this->fields.__1__state = -1;
    if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, method);
    SceneType = SceneList__getSceneType(scenename, 0);
    if ( (unsigned int)(SceneType - 10) > 0x3E
      || ((1LL << ((unsigned __int8)SceneType - 10)) & 0x400C000053400001LL) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)Instance, 0, 0, 0);
      if ( !_4__this )
        goto LABEL_64;
LABEL_62:
      v44 = (Il2CppObject *)AvalonSceneManager__changePrevSceneCoroutine(
                              _4__this,
                              this->fields.changeType,
                              this->fields.scenename,
                              this->fields.fadeTimeSkip,
                              v40);
      this->fields.__2__current = v44;
      v45 = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v45, (int32_t)v44, v46, v47, v48, v49, v50, v51);
      LOBYTE(Instance) = 1;
      *((_DWORD *)v45 - 2) = 1;
      return (char)Instance;
    }
    v35 = SceneType;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !_4__this )
      goto LABEL_64;
    prevscenetemp = _4__this->fields.prevscenetemp;
    v37 = Instance;
    if ( prevscenetemp )
    {
      v38 = prevscenetemp->fields.sceneType;
      if ( v35 == 38 && v38 == 10 || (v35 != 38 ? (v39 = v35 == 10) : (v39 = 1), v39 && v38 == 9) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_64;
        CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)Instance, 0);
        if ( !v37 )
          goto LABEL_62;
LABEL_61:
        BYTE4(v37[12].monitor) = 0;
        goto LABEL_62;
      }
      if ( v38 == 39 )
      {
        if ( v35 <= 0x3D && ((1LL << v35) & 0x3000010000000000LL) != 0 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_64;
          ConnectMarkEventId = 0;
          v42 = 0;
LABEL_60:
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)Instance, ConnectMarkEventId, v42, 0);
          if ( !v37 )
            goto LABEL_62;
          goto LABEL_61;
        }
      }
      else if ( v35 == 34 && v38 == 9 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_64;
        ConnectMarkEventId = 0;
LABEL_59:
        v42 = 1;
        goto LABEL_60;
      }
    }
    if ( Instance && v35 == 32 && !BYTE4(Instance[12].monitor) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)Instance, 0, 0, 0);
      goto LABEL_61;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v43 = Instance;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !v43 )
      goto LABEL_64;
    Instance = v43;
    ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
    goto LABEL_59;
  }
  switch ( _1__state )
  {
    case 2:
      this->fields.__1__state = -1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( Instance )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( Instance )
        {
          v19 = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)Instance, 0);
          this->fields.__2__current = v19;
          p__2__current = &this->fields.__2__current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v19, v20, v21, v22, v23, v24, v25);
          v18 = 3;
LABEL_20:
          *((_DWORD *)p__2__current - 2) = v18;
          LOBYTE(Instance) = 1;
          return (char)Instance;
        }
      }
LABEL_64:
      sub_21FFECC(Instance, method);
    case 3:
      this->fields.__1__state = -1;
      goto LABEL_18;
    case 4:
      callback = this->fields.callback;
      this->fields.__1__state = -1;
      ActionExtensions__Call(callback, 0);
      LOBYTE(Instance) = 0;
      break;
  }
  return (char)Instance;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AvalonSceneManager__changeSceneCoroutine_d__39_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  __int64 v6; // x1
  Il2CppObject *current; // x20
  int32_t *p_m_Handle; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Collections_Generic_List_string__o *m_listUnloadScenes; // x8
  int32_t size; // w2
  int v18; // w9
  int32_t m_Handle; // [xsp+14h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+18h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_5937C57 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    this = (AvalonSceneManager__checkUnloadScenes_d__18_o *)sub_21FFC50(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_5937C57 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  memset(&v21, 0, sizeof(v21));
  m_Handle = 0;
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
          v18 = m_listUnloadScenes->fields._version + 1;
          m_listUnloadScenes->fields._size = 0;
          m_listUnloadScenes->fields._version = v18;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)m_listUnloadScenes->fields._items, 0, size, 0);
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
LABEL_22:
      sub_21FFECC(this, method);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v21.fields._current;
    if ( !*(&UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v6);
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName((System_String_o *)current, 0).fields.m_Handle;
    p_m_Handle = &m_Handle;
    if ( UnityEngine_SceneManagement_Scene__get_buildIndex((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0) >= 1 )
    {
      v2->fields._bContinue_5__2 = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v2->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_21FFBF4(p__2__current, 0, v10, v11, v12, v13, v14, v15);
  LOBYTE(this) = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AvalonSceneManager__checkUnloadScenes_d__18_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  int32_t _1__state; // w23
  int32_t v4; // w8
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w21
  System_Action_o *v9; // x22
  __int64 v10; // x1
  System_Action_o *v11; // x22
  __int64 v12; // x1
  System_Action_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x1
  System_Action_o *v16; // x22
  __int64 v17; // x1
  System_Action_o *v18; // x22
  __int64 v19; // x1
  System_Func_bool__o *v20; // x21
  UnityEngine_WaitUntil_o *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5937C58 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_21FFC50(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__0__);
    sub_21FFC50(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__1__);
    sub_21FFC50(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__2__);
    sub_21FFC50(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__3__);
    sub_21FFC50(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__4__);
    sub_21FFC50(&Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__5__);
    sub_21FFC50(&AvalonSceneManager___c__DisplayClass42_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_5937C58 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = sub_21FFEBC(AvalonSceneManager___c__DisplayClass42_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !v5 )
      goto LABEL_46;
    *(_DWORD *)(v5 + 16) = 0;
    *(_BYTE *)(v5 + 20) = 0;
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v7);
    v8 = OptionManager__isSavedMemoryMode(0) ? 1 : 10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 7, 0) )
    {
      *(_BYTE *)(v5 + 16) = 1;
    }
    else
    {
      v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)v5, Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__0__, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
      AtlasManager__LoadUISkin(v9, 7, v8, 0);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0) )
    {
      *(_BYTE *)(v5 + 17) = 1;
    }
    else
    {
      v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)v5, Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__1__, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
      AtlasManager__LoadUISkin(v11, 1, v8, 0);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 2, 0) )
    {
      *(_BYTE *)(v5 + 18) = 1;
    }
    else
    {
      v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)v5, Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__2__, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
      AtlasManager__LoadUISkin(v13, 2, v8, 0);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_21FFECC(Instance, v7);
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0) )
    {
      *(_BYTE *)(v5 + 19) = 1;
    }
    else
    {
      v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)v5, Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__3__, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
      AtlasManager__LoadUISkin(v16, 4, v8, 0);
    }
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v15);
    if ( CommonEffectManager__IsLoadedSkinData(0) )
    {
      *(_BYTE *)(v5 + 20) = 1;
    }
    else
    {
      v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)v5, Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__4__, 0);
      if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v19);
      CommonEffectManager__LoadSkinEffects(v18, v8, 0);
    }
    v20 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v20,
      (Il2CppObject *)v5,
      Method_AvalonSceneManager___c__DisplayClass42_0__setupUI_b__5__,
      0);
    v21 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v21, v20, 0);
    this->fields.__2__current = (Il2CppObject *)v21;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    v4 = 1;
    goto LABEL_44;
  }
  if ( _1__state == 1 )
  {
    v4 = -1;
LABEL_44:
    this->fields.__1__state = v4;
  }
  return _1__state == 0;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AvalonSceneManager__setupUI_d__42_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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