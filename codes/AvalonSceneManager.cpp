void __fastcall AvalonSceneManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B440C8 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v1);
    byte_4B440C8 = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void __fastcall AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Stack_T__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B440C7 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_Stack_SceneTemp__TypeInfo, v8);
    byte_4B440C7 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v9,
    (const MethodInfo_336C63C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent___ctor__);
  this->fields.dicRootComponent = (struct System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__o *)v9;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dicRootComponent, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Stack_T__o *)sub_1BDBAC4(System_Collections_Generic_Stack_SceneTemp__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v12,
    (const MethodInfo_392C230 *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v12;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.scenestack, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.m_listUnloadScenes = (struct System_Collections_Generic_List_string__o *)v15;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.m_listUnloadScenes, (int32_t)v15, v16, v17);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39166A0 *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_301B5CC *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  long double v15; // q0
  struct SceneRootComponent_o *targetRoot; // x24
  Il2CppClass *_0_T; // x23
  UnityEngine_Component_o *v18; // x0
  SceneRootComponent_o *v19; // x21
  Il2CppType *_1_T; // x22
  System_Type_o *TypeFromHandle; // x22
  System_Type_o *v22; // x0
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x19
  System_String_o *SceneName; // x20
  System_String_o *v27; // x19
  AvalonSceneManager_o *v28; // x0
  const MethodInfo_301B824 *v29; // x1
  System_RuntimeTypeHandle_o v30; // 0:w0.4
  System_RuntimeTypeHandle_o v31; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1BDB878(&BattleRootComponent_var, *(_QWORD *)&sceneType);
    sub_1BDB878(&BattleRootComponent_TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__, v9);
    sub_1BDB878(&SceneList_TypeInfo, v10);
    sub_1BDB878(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v11);
    sub_1BDB878(&System_Type_TypeInfo, v12);
    if ( !method->rgctx_data )
      sub_1C2BF64(method);
  }
  gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager__checkNowScene(this, sceneType, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    targetRoot = this->fields.targetRoot;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_1C2BF08(v15);
      _0_T = (Il2CppClass *)gameObject;
    }
    if ( targetRoot )
    {
      v18 = (UnityEngine_Component_o *)sub_1BDB9B4(targetRoot, _0_T);
      if ( !v18 )
      {
        sub_1BDBD94(targetRoot);
        AvalonSceneManager__UnloadScene_object_(v28, v29);
        return;
      }
      v19 = (SceneRootComponent_o *)v18;
      gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        _1_T = method->rgctx_data->_1_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v30.fields.value = (int)_1_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v30, 0LL);
        v31.fields.value = (int)BattleRootComponent_var;
        v22 = System_Type__GetTypeFromHandle(v31, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_Type__op_Equality(TypeFromHandle, v22, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
            goto LABEL_26;
          if ( (BattleRootComponent_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != BattleRootComponent_TypeInfo )
            goto LABEL_26;
          v24 = *(_QWORD *)&v19[1].fields.m_CachedPtr;
          if ( !v24 )
            goto LABEL_26;
          gameObject = *(UnityEngine_GameObject_o **)(v24 + 536);
          if ( !gameObject )
            goto LABEL_26;
          BattleResultComponent__EndResult((BattleResultComponent_o *)gameObject, 0LL);
        }
        if ( !forceUnload )
          return;
        dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicRootComponent;
        SceneName = SceneRootComponent__getSceneName(v19, 0LL);
        if ( !SceneList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)SceneList__getSceneType(SceneName, 0LL);
        if ( dicRootComponent )
        {
          System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
            dicRootComponent,
            (int32_t)gameObject,
            0LL,
            (const MethodInfo_336CFFC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
          v27 = SceneRootComponent__getSceneName(v19, 0LL);
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70338728(v27, 0LL);
          return;
        }
      }
    }
LABEL_26:
    sub_1BDBAD4(gameObject, v14);
  }
}


SceneRootComponent_o *__fastcall AvalonSceneManager__GetStackedRootComponent(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8
  AvalonSceneManager_o *StackSceneName; // x0
  const MethodInfo *v5; // x2

  v2 = this;
  if ( (byte_4B440C6 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1BDB878(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_4B440C6 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1BDBAD4(this, method);
  if ( !scenestack->fields._size )
    return 0LL;
  StackSceneName = (AvalonSceneManager_o *)AvalonSceneManager__getStackSceneName(v2, method);
  return AvalonSceneManager__getTargetRoot(StackSceneName, (System_String_o *)StackSceneName, v5);
}


bool __fastcall AvalonSceneManager__IsNothingUnloadScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *m_listUnloadScenes; // x8

  v2 = this;
  if ( (byte_4B440B2 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_4B440B2 = 1;
  }
  m_listUnloadScenes = v2->fields.m_listUnloadScenes;
  if ( !m_listUnloadScenes )
    sub_1BDBAD4(this, method);
  return m_listUnloadScenes->fields._size == 0;
}


bool __fastcall AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  v2 = this;
  if ( (byte_4B440B5 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1BDB878(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_4B440B5 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1BDBAD4(this, method);
  return scenestack->fields._size > 0;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__UnloadSceneAsync_object_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_301BA60 *method)
{
  long double v3; // q0
  const MethodInfo_301BA60_RGCTXs *rgctx_data; // x8
  __int64 _0_AvalonSceneManager__UnloadSceneAsync_d__46_T; // x0
  AvalonSceneManager__UnloadSceneAsync_d__46_T__o *v9; // x0
  const MethodInfo_301BA60_RGCTXs *v10; // x8
  AvalonSceneManager__UnloadSceneAsync_d__46_T__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C2BF64(method);
    rgctx_data = method->rgctx_data;
  }
  _0_AvalonSceneManager__UnloadSceneAsync_d__46_T = (__int64)rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__46_T_;
  if ( (BYTE5(rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__46_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_AvalonSceneManager__UnloadSceneAsync_d__46_T = sub_1C2BF08(v3);
  v9 = (AvalonSceneManager__UnloadSceneAsync_d__46_T__o *)sub_1BDBAC4(_0_AvalonSceneManager__UnloadSceneAsync_d__46_T);
  v10 = method->rgctx_data;
  v11 = v9;
  AvalonSceneManager__UnloadSceneAsync_d__46_object____ctor(
    v9,
    0,
    (const MethodInfo_334FBFC *)v10->_1_AvalonSceneManager__UnloadSceneAsync_d__46_T___ctor);
  if ( !v11 )
    sub_1BDBAD4(v12, v13);
  v11->fields.__4__this = this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v11->fields.__4__this, (int32_t)this, v14, v15);
  v11->fields.callback = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&v11->fields.callback, (int32_t)callback, v16, v17);
  return (System_Collections_IEnumerator_o *)v11;
}


void __fastcall AvalonSceneManager__UnloadScene_object_(AvalonSceneManager_o *this, const MethodInfo_301B824 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t i; // w21
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Component_object; // x22
  long double inited; // q0
  Il2CppClass *_0_T; // x1
  __int64 v16; // x23
  long double v17; // q0
  Il2CppClass *v18; // x22
  UnityEngine_Object_o *v19; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x22
  int32_t *v21; // x0
  System_String_o *name; // x23
  int32_t *v23; // x0
  System_String_o *v24; // x22
  AvalonSceneManager_o *v25; // x0
  System_Action_o *v26; // x1
  const MethodInfo_301BA60 *v27; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__, method);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&SceneList_TypeInfo, v6);
    sub_1BDB878(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v7);
    if ( !method->rgctx_data )
      sub_1C2BF64(method);
  }
  m_Handle = 0;
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  for ( i = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1; i >= 0; --i )
  {
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(i, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                        (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                        0LL);
    if ( !RootGameObjects )
LABEL_30:
      sub_1BDBAD4(RootGameObjects, v11);
    if ( !RootGameObjects->max_length )
      sub_1BDBADC(RootGameObjects, v11, v12);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         RootGameObjects->m_Items[0],
                         (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1C2BF08(inited);
    v16 = sub_1BDB9B4(Component_object, _0_T);
    v18 = method->rgctx_data->_0_T;
    if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1C2BF08(v17);
    if ( v16 )
    {
      v19 = (UnityEngine_Object_o *)sub_1BDB9B4(v16, v18);
      if ( !v19 )
      {
        sub_1BDBD94(v16);
        AvalonSceneManager__UnloadSceneAsync_object_(v25, v26, v27);
        return;
      }
    }
    else
    {
      v19 = 0LL;
    }
    if ( UnityEngine_Object__op_Implicit(v19, 0LL) )
    {
      dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicRootComponent;
      v21 = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v21, 0LL);
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      RootGameObjects = (UnityEngine_GameObject_array *)SceneList__getSceneType(name, 0LL);
      if ( !dicRootComponent )
        goto LABEL_30;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        dicRootComponent,
        (int32_t)RootGameObjects,
        0LL,
        (const MethodInfo_336CFFC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
      v23 = &m_Handle;
      v24 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v23, 0LL);
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70338728(v24, 0LL);
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
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B440C3 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager__changeNextSceneCoroutine_d__40_TypeInfo, *(_QWORD *)&changeType);
    byte_4B440C3 = 1;
  }
  v7 = sub_1BDBAC4(AvalonSceneManager__changeNextSceneCoroutine_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 48) = changeType;
  *(_QWORD *)(v7 + 40) = scenename;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)scenename, v10, v11);
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
  bool v9; // w23
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B440C2 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager__changePrevSceneCoroutine_d__39_TypeInfo, *(_QWORD *)&changeType);
    byte_4B440C2 = 1;
  }
  v9 = fadeTimeSkip;
  v10 = sub_1BDBAC4(AvalonSceneManager__changePrevSceneCoroutine_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(_DWORD *)(v10 + 44) = changeType;
  *(_QWORD *)(v10 + 48) = scenename;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 48), (int32_t)scenename, v13, v14);
  *(_BYTE *)(v10 + 40) = v9;
  return (System_Collections_IEnumerator_o *)v10;
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

  if ( (byte_4B440BE & 1) == 0 )
  {
    sub_1BDB878(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4B440BE = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_40164476(this, 2, SceneName, fade, data, 0, v10);
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
  bool v11; // w24
  __int64 v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B440C1 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager__changeSceneCoroutine_d__38_TypeInfo, *(_QWORD *)&changeType);
    byte_4B440C1 = 1;
  }
  v11 = fadeTimeSkip;
  v12 = sub_1BDBAC4(AvalonSceneManager__changeSceneCoroutine_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 40) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 40), (int32_t)this, v13, v14);
  *(_DWORD *)(v12 + 48) = changeType;
  *(_QWORD *)(v12 + 32) = scenename;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 32), (int32_t)scenename, v15, v16);
  *(_BYTE *)(v12 + 52) = v11;
  *(_QWORD *)(v12 + 56) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 56), (int32_t)callback, v17, v18);
  return (System_Collections_IEnumerator_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_40164476(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v21; // x23
  int32_t SceneType; // w23
  int32_t v23; // w0
  const MethodInfo *v24; // x5
  TerminalSceneComponent_c *v25; // x0
  TerminalSceneComponent_c *v26; // x0
  System_Collections_IEnumerator_o *v27; // x0

  if ( (byte_4B440BF & 1) == 0 )
  {
    sub_1BDB878(&SceneList_TypeInfo, *(_QWORD *)&changeType);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v13);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v14);
    byte_4B440BF = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v17);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.sendData, (int32_t)data, v18, v19);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v21 = prevscenetemp->fields.sceneName;
  else
    v21 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v21, 0LL);
  v23 = SceneList__getSceneType(scenename, 0LL);
  if ( SceneType == 9 )
  {
    if ( v23 == 34 )
    {
      v25 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v25 = TerminalSceneComponent_TypeInfo;
      }
      v25->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v23 == 34 )
  {
    v26 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v26 = TerminalSceneComponent_TypeInfo;
    }
    v26->static_fields->isSummonToTerminalTransition = 1;
  }
  v27 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0LL, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_40165396(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v21; // x23
  int32_t SceneType; // w23
  int32_t v23; // w0
  const MethodInfo *v24; // x5
  TerminalSceneComponent_c *v25; // x0
  TerminalSceneComponent_c *v26; // x0
  System_Collections_IEnumerator_o *v27; // x0

  if ( (byte_4B440C0 & 1) == 0 )
  {
    sub_1BDB878(&SceneList_TypeInfo, *(_QWORD *)&changeType);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v13);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v14);
    byte_4B440C0 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v17);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.sendData, (int32_t)data, v18, v19);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v21 = prevscenetemp->fields.sceneName;
  else
    v21 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v21, 0LL);
  v23 = SceneList__getSceneType(scenename, 0LL);
  if ( SceneType == 9 )
  {
    if ( v23 == 34 )
    {
      v25 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v25 = TerminalSceneComponent_TypeInfo;
      }
      v25->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v23 == 34 )
  {
    v26 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v26 = TerminalSceneComponent_TypeInfo;
    }
    v26->static_fields->isSummonToTerminalTransition = 1;
  }
  v27 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, 0, callback, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
  return 1;
}


bool __fastcall AvalonSceneManager__changeScene_40166148(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_40164476(this, 2, scenename, fade, data, 0, v5);
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
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B440B8 & 1) == 0 )
  {
    sub_1BDB878(&SceneList_TypeInfo, *(_QWORD *)&type);
    sub_1BDB878(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v4);
    byte_4B440B8 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( System_String__IsNullOrEmpty(SceneName, 0LL) )
  {
    return 0;
  }
  else
  {
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(SceneName, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    return UnityEngine_SceneManagement_Scene__get_isLoaded((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  }
}


bool __fastcall AvalonSceneManager__checkNowScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  struct SceneTemp_o *prevscenetemp; // x8

  prevscenetemp = this->fields.prevscenetemp;
  return prevscenetemp && prevscenetemp->fields.sceneType == type;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkStackScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  Il2CppObject *v6; // x0

  if ( (byte_4B440B7 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, *(_QWORD *)&type);
    byte_4B440B7 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1BDBAD4(0LL, *(_QWORD *)&type);
  v6 = System_Collections_Generic_Stack_object___Peek(
         scenestack,
         (const MethodInfo_392C7B4 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( v6 )
    LOBYTE(v6) = LODWORD(v6[1].monitor) == type;
  return (char)v6;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__checkUnloadScenes(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B440B3 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager__checkUnloadScenes_d__17_TypeInfo, method);
    byte_4B440B3 = 1;
  }
  v3 = sub_1BDBAC4(AvalonSceneManager__checkUnloadScenes_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AvalonSceneManager__destroySceneObject(AvalonSceneManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  int32_t v14; // w20
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x21
  int32_t *v17; // x0
  System_String_o *v18; // x21
  System_Collections_Generic_List_object__o *m_listUnloadScenes; // x21
  int32_t *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_Collections_Generic_Stack_T__o *v26; // x1
  Il2CppClass **v27; // x0
  System_Collections_IEnumerator_o *v28; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B440B4 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__Clear__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1BDB878(&SceneList_TypeInfo, v6);
    sub_1BDB878(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__, v8);
    byte_4B440B4 = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.prevscenetemp, 0, v2, v3);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_23;
  System_Collections_Generic_Stack_object___Clear(
    scenestack,
    (const MethodInfo_392C404 *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetRoot, 0, v11, v12);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.dicRootComponent;
  if ( !scenestack )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_Int32Enum__object___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)scenestack,
    (const MethodInfo_336D198 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__Clear__);
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  v14 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
  if ( v14 >= 0 )
  {
    while ( 1 )
    {
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v14, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      scenestack = (System_Collections_Generic_Stack_T__o *)SceneList__getSceneName(0, 0LL);
      if ( !name )
        break;
      if ( !System_String__Contains(name, (System_String_o *)scenestack, 0LL) )
      {
        v17 = &m_Handle;
        v18 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v17, 0LL);
        if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
        UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70338728(v18, 0LL);
        m_listUnloadScenes = (System_Collections_Generic_List_object__o *)this->fields.m_listUnloadScenes;
        v20 = &m_Handle;
        scenestack = (System_Collections_Generic_Stack_T__o *)UnityEngine_SceneManagement_Scene__get_name(
                                                                (UnityEngine_SceneManagement_Scene_o)v20,
                                                                0LL);
        if ( !m_listUnloadScenes )
          break;
        items = m_listUnloadScenes->fields._items;
        v24 = Method_System_Collections_Generic_List_string__Add__;
        ++m_listUnloadScenes->fields._version;
        if ( !items )
          break;
        size = m_listUnloadScenes->fields._size;
        v26 = scenestack;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            m_listUnloadScenes,
            (Il2CppObject *)scenestack,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          m_listUnloadScenes->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_1BDB81C((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
        }
      }
      if ( --v14 < 0 )
        goto LABEL_22;
    }
LABEL_23:
    sub_1BDBAD4(scenestack, v9);
  }
LABEL_22:
  v28 = AvalonSceneManager__checkUnloadScenes(this, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
}


void __fastcall AvalonSceneManager__endInitialize(
        AvalonSceneManager_o *this,
        SceneRootComponent_o *comp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_sendData; // x0
  Il2CppObject *v5; // x20
  Il2CppObject *sendData; // t1
  __int64 v8; // x0
  __int64 v9; // x1

  sendData = this->fields.sendData;
  p_sendData = (CGThumbnailListItem_o *)&this->fields.sendData;
  v5 = sendData;
  p_sendData->klass = 0LL;
  sub_1BDB81C(p_sendData, 0, (int32_t)method, v3);
  if ( !comp )
    sub_1BDBAD4(v8, v9);
  ((void (__fastcall *)(SceneRootComponent_o *, Il2CppObject *, Il2CppMethodPointer))comp->klass->vtable._5_beginStartUp.method)(
    comp,
    v5,
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
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  System_String_o *result; // x0

  if ( (byte_4B440B6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, method);
    byte_4B440B6 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1BDBAD4(0LL, method);
  result = (System_String_o *)System_Collections_Generic_Stack_object___Peek(
                                scenestack,
                                (const MethodInfo_392C7B4 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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
  Il2CppObject *Component_object; // x21
  int32_t *v8; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  UnityEngine_GameObject_array *v13; // x20
  unsigned int v14; // w22
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B440B1 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___, scenenName);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    sub_1BDB878(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v5);
    byte_4B440B1 = 1;
  }
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(scenenName, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  Component_object = 0LL;
  if ( UnityEngine_SceneManagement_Scene__get_isLoaded((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL) )
  {
    v8 = &m_Handle;
    RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                        (UnityEngine_SceneManagement_Scene_o)v8,
                        0LL);
    if ( !RootGameObjects )
      goto LABEL_19;
    max_length = RootGameObjects->max_length;
    v13 = RootGameObjects;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          sub_1BDBADC(RootGameObjects, v10, v11);
        RootGameObjects = (UnityEngine_GameObject_array *)v13->m_Items[v14];
        if ( !RootGameObjects )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)RootGameObjects,
                             (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        RootGameObjects = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)Component_object,
                                                            0LL,
                                                            0LL);
        if ( ((unsigned __int8)RootGameObjects & 1) != 0 )
        {
          if ( !Component_object )
            break;
          RootGameObjects = (UnityEngine_GameObject_array *)SceneRootComponent__checkSceneName(
                                                              (SceneRootComponent_o *)Component_object,
                                                              scenenName,
                                                              0LL);
          if ( ((unsigned __int8)RootGameObjects & 1) != 0 )
            return (SceneRootComponent_o *)Component_object;
        }
        max_length = v13->max_length;
        if ( (int)++v14 >= max_length )
          return 0LL;
      }
LABEL_19:
      sub_1BDBAD4(RootGameObjects, v10);
    }
    return 0LL;
  }
  return (SceneRootComponent_o *)Component_object;
}


bool __fastcall AvalonSceneManager__popScene(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_40164920(this, fade, data, 0, v4);
}


bool __fastcall AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_40164920(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__popScene_40164920(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        bool isRefresh,
        const MethodInfo *method)
{
  __int64 v9; // x1
  void *scenestack; // x0
  int v11; // w23
  const MethodInfo *v12; // x6
  int32_t v13; // w1

  if ( (byte_4B440BA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, *(_QWORD *)&fade);
    sub_1BDB878(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, v9);
    byte_4B440BA = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  v11 = *((_DWORD *)scenestack + 6);
  if ( v11 < 1 )
    return v11 > 0;
  scenestack = System_Collections_Generic_Stack_object___Pop(
                 (System_Collections_Generic_Stack_T__o *)scenestack,
                 (const MethodInfo_392C7F8 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_1BDBAD4(scenestack, *(_QWORD *)&fade);
  if ( isRefresh )
    v13 = 5;
  else
    v13 = 4;
  AvalonSceneManager__changeScene_40164476(this, v13, *((System_String_o **)scenestack + 2), fade, data, 0, v12);
  return v11 > 0;
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
  __int64 v14; // x1
  struct SceneTemp_o *prevscenetemp; // x23
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  System_String_o *SceneName; // x0
  const MethodInfo *v18; // x6
  const MethodInfo *v20; // x6

  if ( (byte_4B440B9 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    sub_1BDB878(&SceneList_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_Stack_SceneTemp__Push__, v11);
    byte_4B440B9 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
  prevscenetemp = 0LL;
  if ( v13 )
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
        (const MethodInfo_392C858 *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( AvalonSceneManager__changeScene_40164476(this, 3, SceneName, fade, data, 0, v18) )
    return 1;
  if ( prevscenetemp )
  {
    scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_object___Pop(
        scenestack,
        (const MethodInfo_392C7F8 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_40164476(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v20);
      return 0;
    }
LABEL_17:
    sub_1BDBAD4(scenestack, v14);
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
  __int64 v6; // x1
  SceneRootComponent_o *v7; // x0

  if ( (byte_4B440C5 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, flag);
    byte_4B440C5 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
    return 0;
  v7 = this->fields.targetRoot;
  if ( !v7 )
    sub_1BDBAD4(0LL, v6);
  return SceneRootComponent__SetSceneActive(v7, flag, 0LL);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__setupUI(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4B440C4 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager__setupUI_d__41_TypeInfo, method);
    byte_4B440C4 = 1;
  }
  v2 = sub_1BDBAC4(AvalonSceneManager__setupUI_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
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

  if ( (byte_4B440BB & 1) == 0 )
  {
    sub_1BDB878(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4B440BB = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_40164476(this, 1, SceneName, fade, data, 0, v10);
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

  if ( (byte_4B440BD & 1) == 0 )
  {
    sub_1BDB878(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4B440BD = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_40164476(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__transitionScene_40165248(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_4B440BC & 1) == 0 )
  {
    sub_1BDB878(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4B440BC = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_40165396(this, 1, SceneName, fade, data, callback, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_40166124(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_40164476(this, 1, scenename, fade, data, 0, v5);
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        int32_t 1__state,
        const MethodInfo_334FBFC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_334FC28 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  bool result; // w0
  struct AvalonSceneManager_o *_4__this; // x25
  int32_t v11; // w21
  int32_t *p_m_Handle; // x0
  void *RootGameObjects; // x0
  __int64 v14; // x2
  Il2CppObject *Component_object; // x22
  __int64 _1_T; // x1
  __int64 v17; // x23
  __int64 v18; // x22
  UnityEngine_Object_o *v19; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x20
  int32_t *v21; // x0
  System_String_o *name; // x21
  int32_t *v23; // x0
  System_String_o *v24; // x20
  struct UnityEngine_AsyncOperation_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject **p__2__current; // x19
  AvalonSceneManager__UnloadSceneAsync_d__46_T__o *v31; // x0
  const MethodInfo_334FEE4 *v32; // x1
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B4A7CA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__, method);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&SceneList_TypeInfo, v6);
    sub_1BDB878(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v7);
    byte_4B4A7CA = 1;
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
    v11 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
    do
    {
      if ( (v11 & 0x80000000) != 0 )
        goto LABEL_34;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v11, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                          (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                          0LL);
      if ( !RootGameObjects )
        goto LABEL_37;
      if ( !*((_DWORD *)RootGameObjects + 6) )
        sub_1BDBADC(RootGameObjects, method, v14);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           *((UnityEngine_GameObject_o **)RootGameObjects + 4),
                           (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _1_T = (__int64)method->klass->rgctx_data->_1_T;
      if ( (*(_BYTE *)(_1_T + 309) & 1) == 0 )
        _1_T = sub_1C2BF08();
      v17 = sub_1BDB9B4(Component_object, _1_T);
      v18 = (__int64)method->klass->rgctx_data->_1_T;
      if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
        v18 = sub_1C2BF08();
      if ( v17 )
      {
        v19 = (UnityEngine_Object_o *)sub_1BDB9B4(v17, v18);
        if ( !v19 )
        {
          sub_1BDBD94(v17);
          return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                    v31,
                                    v32);
        }
      }
      else
      {
        v19 = 0LL;
      }
      RootGameObjects = (void *)UnityEngine_Object__op_Implicit(v19, 0LL);
      --v11;
    }
    while ( ((unsigned __int8)RootGameObjects & 1) == 0 );
    if ( !_4__this )
      goto LABEL_37;
    dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
    v21 = &m_Handle;
    name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v21, 0LL);
    if ( !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    RootGameObjects = (void *)SceneList__getSceneType(name, 0LL);
    if ( !dicRootComponent )
      goto LABEL_37;
    System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
      dicRootComponent,
      (int32_t)RootGameObjects,
      0LL,
      (const MethodInfo_336CFFC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    v23 = &m_Handle;
    v24 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v23, 0LL);
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    v25 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70338728(v24, 0LL);
    this->fields._asyncOp_5__2 = v25;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._asyncOp_5__2, (int32_t)v25, v26, v27);
LABEL_32:
    RootGameObjects = this->fields._asyncOp_5__2;
    if ( !RootGameObjects )
LABEL_37:
      sub_1BDBAD4(RootGameObjects, method);
    if ( UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)RootGameObjects, 0LL) )
    {
LABEL_34:
      ActionExtensions__Call(this->fields.callback, 0LL);
      return 0;
    }
    else
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1BDB81C((CGThumbnailListItem_o *)p__2__current, 0, v28, v29);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_334FEE4 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_334FEEC *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1BDBAC4(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1BDB9A0(v4, method);
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_334FF20 *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_334FC24 *method)
{
  ;
}


void __fastcall AvalonSceneManager___c__DisplayClass41_0___ctor(
        AvalonSceneManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AvalonSceneManager___c__DisplayClass41_0___setupUI_b__0(
        AvalonSceneManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndTerminalBG = 1;
}


void __fastcall AvalonSceneManager___c__DisplayClass41_0___setupUI_b__1(
        AvalonSceneManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndTerminalUI = 1;
}


void __fastcall AvalonSceneManager___c__DisplayClass41_0___setupUI_b__2(
        AvalonSceneManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndCommonBG_01 = 1;
}


void __fastcall AvalonSceneManager___c__DisplayClass41_0___setupUI_b__3(
        AvalonSceneManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndCommonBG_02 = 1;
}


void __fastcall AvalonSceneManager___c__DisplayClass41_0___setupUI_b__4(
        AvalonSceneManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndEffect = 1;
}


bool __fastcall AvalonSceneManager___c__DisplayClass41_0___setupUI_b__5(
        AvalonSceneManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  return this->fields.loadEndTerminalUI
      && this->fields.loadEndTerminalBG
      && this->fields.loadEndCommonBG_01
      && this->fields.loadEndCommonBG_02
      && this->fields.loadEndEffect;
}


void __fastcall AvalonSceneManager__changeNextSceneCoroutine_d__40___ctor(
        AvalonSceneManager__changeNextSceneCoroutine_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__changeNextSceneCoroutine_d__40__MoveNext(
        AvalonSceneManager__changeNextSceneCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o *v4; // x19
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
  struct AvalonSceneManager_o *_4__this; // x20
  UnityEngine_Object_o *targetRoot; // x22
  bool v17; // w22
  bool v18; // w0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct SceneRootComponent_o *v21; // x1
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x1
  System_Collections_IEnumerator_o *v24; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  bool v28; // w20
  UnityEngine_Object_o **p_newTargetRoot_5__2; // x21
  UnityEngine_Object_o *newTargetRoot_5__2; // x22
  System_String_o *scenename; // x22
  int32_t *p_m_Handle; // x0
  const MethodInfo *v33; // x2
  SceneRootComponent_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UnityEngine_Object_o *v37; // x22
  System_String_o *v38; // x21
  CGThumbnailListItem_o *v39; // x19
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  SceneRootComponent_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  UnityEngine_Object_o *v45; // x22
  System_String_o *v46; // x22
  int32_t *v47; // x0
  __int64 v48; // x2
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o *v50; // x22
  unsigned int v51; // w27
  UnityEngine_GameObject_o *v52; // x23
  int v53; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o *v54; // x24
  int i; // w28
  AvalonSceneManager__changeNextSceneCoroutine_d__40_c **v56; // x8
  UnityEngine_Component_o *gameObject; // x25
  UnityEngine_Object_c *v58; // x0
  int v59; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o *v60; // x23
  unsigned int v61; // w25
  AvalonSceneManager__changeNextSceneCoroutine_d__40_c **v62; // x8
  UnityEngine_Component_o *v63; // x24
  UnityEngine_Object_c *v64; // x0
  UnityEngine_Object_o *v65; // x22
  UnityEngine_Object_o *v66; // x22
  AvalonSceneManager__changeNextSceneCoroutine_d__40_c *klass; // x8
  void (*v68)(void); // x9
  SceneRootComponent_o *v69; // x22
  SceneTemp_o *v70; // x21
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct SceneRootComponent_o *v73; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o **p_targetRoot; // x21
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v77; // x22
  System_String_o *v78; // x23
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  Il2CppObject *v81; // x19
  CGThumbnailListItem_o *p_sendData; // x20
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v85; // x22
  UnityEngine_Object_o *v86; // x21
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x21
  System_String_o *v90; // x22
  System_String_o *v91; // x20
  CGThumbnailListItem_o *v92; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4B440C9 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponents_Component___, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__, v5);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___, v6);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    sub_1BDB878(&SceneList_TypeInfo, v9);
    sub_1BDB878(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v10);
    sub_1BDB878(&SceneTemp_TypeInfo, v11);
    sub_1BDB878(&StringLiteral_3170/*"BattleScriptScene"*/, v12);
    sub_1BDB878(&StringLiteral_3168/*"BattleScene"*/, v13);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)sub_1BDB878(&StringLiteral_1/*""*/, v14);
    byte_4B440C9 = 1;
  }
  m_Handle = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields._newTargetRoot_5__2 = 0LL;
      v4->fields.__1__state = -1;
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._newTargetRoot_5__2, 0, (int32_t)v2, v3);
      if ( !_4__this )
        goto LABEL_112;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
      v18 = System_String__op_Equality(v4->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !v17 )
        goto LABEL_11;
      if ( v18 )
        goto LABEL_12;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_112;
      v18 = SceneRootComponent__checkSceneName((SceneRootComponent_o *)this, v4->fields.scenename, 0LL);
LABEL_11:
      if ( v18 )
      {
LABEL_12:
        v21 = _4__this->fields.targetRoot;
        v4->fields._newTargetRoot_5__2 = v21;
        sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v21, v19, v20);
      }
      if ( v4->fields.changeType <= 1u
        && System_String__op_Inequality(v4->fields.scenename, (System_String_o *)StringLiteral_3170/*"BattleScriptScene"*/, 0LL) )
      {
        v22 = System_String__op_Inequality(v4->fields.scenename, (System_String_o *)StringLiteral_3168/*"BattleScene"*/, 0LL);
        if ( v22 )
        {
          v24 = AvalonSceneManager__setupUI((AvalonSceneManager_o *)v22, v23);
          v4->fields.__2__current = (Il2CppObject *)v24;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BDB81C(p__2__current, (int32_t)v24, v26, v27);
          v28 = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return v28;
        }
      }
LABEL_18:
      p_newTargetRoot_5__2 = (UnityEngine_Object_o **)&v4->fields._newTargetRoot_5__2;
      newTargetRoot_5__2 = (UnityEngine_Object_o *)v4->fields._newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(newTargetRoot_5__2, 0LL, 0LL) )
        goto LABEL_68;
      scenename = v4->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(scenename, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_SceneManagement_Scene__get_isLoaded(
                                                                       (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                                                       0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_26;
      if ( !_4__this )
        goto LABEL_112;
      v34 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v4->fields.scenename, v33);
      v4->fields._newTargetRoot_5__2 = v34;
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v34, v35, v36);
LABEL_26:
      v37 = *p_newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v37, 0LL, 0LL) )
      {
LABEL_68:
        v65 = *p_newTargetRoot_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_Object__op_Inequality(v65, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !_4__this )
            goto LABEL_112;
          v66 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
          {
            if ( _4__this->fields.prevscenetemp )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
              if ( !this )
                goto LABEL_112;
              klass = this->klass;
              if ( v4->fields.changeType == 3 )
                v68 = (void (*)(void))klass->vtable._8_System_Collections_IEnumerator_Reset.method;
              else
                v68 = (void (*)(void))klass->vtable._7_System_Collections_IEnumerator_get_Current.method;
              v68();
            }
            v85 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v86 = *p_newTargetRoot_5__2;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v85, v86, 0LL) )
              goto LABEL_111;
            if ( v4->fields.changeType == 5 )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
              if ( this )
              {
                dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
                v90 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                if ( !SceneList_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
                this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)SceneList__getSceneType(v90, 0LL);
                if ( dicRootComponent )
                {
                  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
                    dicRootComponent,
                    (int32_t)this,
                    0LL,
                    (const MethodInfo_336CFFC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
                  this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
                  if ( this )
                  {
                    v91 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                    UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70338728(v91, 0LL);
                    goto LABEL_111;
                  }
                }
              }
            }
            else
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
              if ( this )
              {
                this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)this,
                                                                                 0LL);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_111:
                  v4->fields.__2__current = 0LL;
                  v92 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1BDB81C(v92, 0, v87, v88);
                  LODWORD(v92[-1].fields._ThumbnailSpritePath_k__BackingField) = 3;
                  return 1;
                }
              }
            }
LABEL_112:
            sub_1BDBAD4(this, method);
          }
LABEL_80:
          v69 = v4->fields._newTargetRoot_5__2;
          v70 = (SceneTemp_o *)sub_1BDBAC4(SceneTemp_TypeInfo);
          SceneTemp___ctor_40484860(v70, v69, 0LL);
          if ( !_4__this )
            goto LABEL_112;
          _4__this->fields.prevscenetemp = v70;
          sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.prevscenetemp, (int32_t)v70, v71, v72);
          v73 = v4->fields._newTargetRoot_5__2;
          _4__this->fields.targetRoot = v73;
          p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o **)&_4__this->fields.targetRoot;
          sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.targetRoot, (int32_t)v73, v75, v76);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)v4->fields._newTargetRoot_5__2;
          if ( !this )
            goto LABEL_112;
          v77 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
          v78 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
          if ( !SceneList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)SceneList__getSceneType(v78, 0LL);
          if ( !v77 )
            goto LABEL_112;
          System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
            v77,
            (int32_t)this,
            (Il2CppObject *)v4->fields._newTargetRoot_5__2,
            (const MethodInfo_336CFFC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
          this = *p_targetRoot;
          if ( !*p_targetRoot )
            goto LABEL_112;
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
          if ( !this )
            goto LABEL_112;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          _4__this->fields.isBusySceneChange = 0;
          if ( (v4->fields.changeType & 0xFFFFFFFE) == 4 )
          {
            sendData = _4__this->fields.sendData;
            p_sendData = (CGThumbnailListItem_o *)&_4__this->fields.sendData;
            v81 = sendData;
            p_sendData->klass = 0LL;
            sub_1BDB81C(p_sendData, 0, v79, v80);
            this = *(AvalonSceneManager__changeNextSceneCoroutine_d__40_o **)&p_sendData[-1].fields.basePosition.fields.y;
            if ( !this )
              goto LABEL_112;
            ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__40_o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
              this,
              v81,
              this->klass[1]._1.name);
          }
          else
          {
            this = *p_targetRoot;
            if ( !*p_targetRoot )
              goto LABEL_112;
            ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__40_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
              this,
              this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          }
        }
        return 0;
      }
      v38 = v4->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      v28 = 1;
      UnityEngine_SceneManagement_SceneManager__LoadScene(v38, 1, 0LL);
      v4->fields.__2__current = 0LL;
      v39 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BDB81C(v39, 0, v40, v41);
      LODWORD(v39[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
      return v28;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_112;
      v42 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v4->fields.scenename, v2);
      v4->fields._newTargetRoot_5__2 = v42;
      p_newTargetRoot_5__2 = (UnityEngine_Object_o **)&v4->fields._newTargetRoot_5__2;
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v42, v43, v44);
      v45 = (UnityEngine_Object_o *)v4->fields._newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v45, 0LL, 0LL) )
        return 0;
      v46 = v4->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v46, 0LL).fields.m_Handle;
      v47 = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                                                                       (UnityEngine_SceneManagement_Scene_o)v47,
                                                                       0LL);
      if ( !this )
        goto LABEL_112;
      _2__current = (int)this->fields.__2__current;
      v50 = this;
      if ( _2__current < 1 )
        goto LABEL_68;
      v51 = 0;
      break;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_80;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v51 >= _2__current )
LABEL_113:
      sub_1BDBADC(this, method, v48);
    v52 = (UnityEngine_GameObject_o *)*((_QWORD *)&v50->fields.__4__this + (int)v51);
    if ( !v52 )
      goto LABEL_112;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50893124(
                                                                     v52,
                                                                     (const MethodInfo_3089144 *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !this )
      goto LABEL_112;
    v53 = (int)this->fields.__2__current;
    v54 = this;
    if ( v53 >= 1 )
    {
      for ( i = 0; i < v53; ++i )
      {
        if ( i >= (unsigned int)v53 )
          goto LABEL_113;
        v56 = &v54->klass + i;
        gameObject = (UnityEngine_Component_o *)v56[4];
        if ( !gameObject )
          goto LABEL_112;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_Component__GetComponents_object__50506816(
                                                                         (UnityEngine_Component_o *)v56[4],
                                                                         (const MethodInfo_302AC40 *)Method_UnityEngine_Component_GetComponents_Component___);
        if ( !this )
          goto LABEL_112;
        if ( LODWORD(this->fields.__2__current) == 1 )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            v58 = UnityEngine_Object_TypeInfo;
LABEL_53:
            j_il2cpp_runtime_class_init_0(v58);
          }
        }
        else
        {
          v58 = UnityEngine_Object_TypeInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            goto LABEL_53;
        }
        UnityEngine_Object__DestroyImmediate_70284388((UnityEngine_Object_o *)gameObject, 0LL);
        v53 = (int)v54->fields.__2__current;
      }
    }
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50893124(
                                                                     v52,
                                                                     (const MethodInfo_3089144 *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !this )
      goto LABEL_112;
    v59 = (int)this->fields.__2__current;
    v60 = this;
    if ( v59 >= 1 )
      break;
LABEL_67:
    _2__current = (int)v50->fields.__2__current;
    if ( (int)++v51 >= _2__current )
      goto LABEL_68;
  }
  v61 = 0;
  while ( 1 )
  {
    if ( v61 >= v59 )
      goto LABEL_113;
    v62 = &v60->klass + (int)v61;
    v63 = (UnityEngine_Component_o *)v62[4];
    if ( !v63 )
      goto LABEL_112;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_Component__GetComponents_object__50506816(
                                                                     (UnityEngine_Component_o *)v62[4],
                                                                     (const MethodInfo_302AC40 *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !this )
      goto LABEL_112;
    if ( LODWORD(this->fields.__2__current) == 2 )
    {
      v63 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v63, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        v64 = UnityEngine_Object_TypeInfo;
LABEL_65:
        j_il2cpp_runtime_class_init_0(v64);
      }
    }
    else
    {
      v64 = UnityEngine_Object_TypeInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        goto LABEL_65;
    }
    UnityEngine_Object__DestroyImmediate_70284388((UnityEngine_Object_o *)v63, 0LL);
    v59 = (int)v60->fields.__2__current;
    if ( (int)++v61 >= v59 )
      goto LABEL_67;
  }
}


Il2CppObject *__fastcall AvalonSceneManager__changeNextSceneCoroutine_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changeNextSceneCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__changeNextSceneCoroutine_d__40__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changeNextSceneCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__40_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall AvalonSceneManager__changeNextSceneCoroutine_d__40__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changeNextSceneCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__changeNextSceneCoroutine_d__40__System_IDisposable_Dispose(
        AvalonSceneManager__changeNextSceneCoroutine_d__40_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AvalonSceneManager__changePrevSceneCoroutine_d__39___ctor(
        AvalonSceneManager__changePrevSceneCoroutine_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__changePrevSceneCoroutine_d__39__MoveNext(
        AvalonSceneManager__changePrevSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AvalonSceneManager__changePrevSceneCoroutine_d__39_o *v4; // x19
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
  __int64 v17; // x1
  struct AvalonSceneManager_o *_4__this; // x20
  int32_t fadeType; // w8
  AvalonSceneManager_c *v20; // x0
  CGThumbnailListItem_o *v21; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int v24; // w8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w8
  float duration_5__2; // s0
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  bool result; // w0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Object_o *targetRoot; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  AvalonSceneManager__changePrevSceneCoroutine_d__39_o *v39; // x22
  UnityEngine_Object_o *v40; // x21
  int32_t v41; // w21
  int32_t *p_m_Handle; // x0
  AvalonSceneManager_o *name; // x0
  const MethodInfo *v44; // x2
  UnityEngine_Object_o *v45; // x22
  System_String_o *scenename; // x19
  unsigned int v47; // w19
  Il2CppObject *value; // x20
  _BOOL8 v49; // x0
  __int64 v50; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+0h] [xbp-70h] BYREF
  int32_t m_Handle; // [xsp+38h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B440CA & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager_TypeInfo, method);
    sub_1BDB878(&CommonEffectManager_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__GetEnumerator__, v6);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__Dispose__,
      v7);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__MoveNext__,
      v8);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__get_Current__,
      v9);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__SceneRootComponent__get_Value__, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    sub_1BDB878(&SceneList_TypeInfo, v12);
    sub_1BDB878(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v13);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v16);
    this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)sub_1BDB878(
                                                                     &Method_System_Collections_Generic_Stack_SceneTemp__get_Count__,
                                                                     v17);
    byte_4B440CA = 1;
  }
  m_Handle = 0;
  memset(&v52, 0, sizeof(v52));
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
      v20 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v20 = AvalonSceneManager_TypeInfo;
        fadeType = _4__this->fields.fadeType;
      }
      LODWORD(v4->fields._duration_5__2) = LODWORD(v20->static_fields->DEFAULT_FADE_TIME);
      if ( (unsigned int)(fadeType - 1) > 1 )
        goto LABEL_11;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
LABEL_11:
      if ( !v4->fields.fadeTimeSkip )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BDB81C(p__2__current, 0, v2, v3);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      v4->fields._duration_5__2 = 0.0;
LABEL_21:
      v27 = _4__this->fields.fadeType;
      if ( v27 == 2 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v4->fields._duration_5__2;
        v29 = 2;
      }
      else
      {
        if ( v27 != 1 )
          goto LABEL_29;
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v4->fields._duration_5__2;
        v29 = 1;
      }
      CommonUI__maskFadeout((CommonUI_o *)this, v29, duration_5__2, 0LL, 0LL);
LABEL_29:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        v4->fields.__2__current = 0LL;
        v21 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BDB81C(v21, 0, v30, v31);
        v24 = 2;
LABEL_32:
        LODWORD(v21[-1].fields._ThumbnailSpritePath_k__BackingField) = v24;
        return 1;
      }
LABEL_33:
      MainMenuBar__setButtonActive(0, 0LL);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__InitTurotialArrowMark((CommonUI_o *)this, 0LL);
      if ( v4->fields.changeType > 1u )
        goto LABEL_69;
      if ( !_4__this )
        goto LABEL_55;
      if ( !_4__this->fields.prevscenetemp )
        goto LABEL_43;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
        goto LABEL_42;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_55;
      ((void (__fastcall *)(AvalonSceneManager__changePrevSceneCoroutine_d__39_o *, Il2CppMethodPointer))this->klass->vtable._7_System_Collections_IEnumerator_get_Current.method)(
        this,
        this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr);
LABEL_42:
      _4__this->fields.prevscenetemp = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.prevscenetemp, 0, v36, v37);
LABEL_43:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)_4__this->fields.scenestack;
      if ( !this )
        goto LABEL_55;
      while ( SLODWORD(this->fields.__2__current) > 0 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)System_Collections_Generic_Stack_object___Pop(
                                                                         (System_Collections_Generic_Stack_T__o *)this,
                                                                         (const MethodInfo_392C7F8 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
        if ( !this )
          goto LABEL_55;
        v39 = this;
        v40 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(
                                        (AvalonSceneManager_o *)this,
                                        *(System_String_o **)&this->fields.__1__state,
                                        v38);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v40 )
            goto LABEL_55;
          if ( SceneRootComponent__checkSceneName(
                 (SceneRootComponent_o *)v40,
                 *(System_String_o **)&v39->fields.__1__state,
                 0LL) )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v40,
                                                                             0LL);
            if ( !this )
              goto LABEL_55;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            (*(void (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&v40->klass[1]._1.this_arg.bits)(
              v40,
              v40->klass[1]._1.element_class);
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v40,
                                                                             0LL);
            if ( !this )
              goto LABEL_55;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
        }
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)_4__this->fields.scenestack;
        if ( !this )
          goto LABEL_55;
      }
      if ( !v4->fields.changeType )
      {
        v4->fields.__2__current = 0LL;
        v21 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BDB81C(v21, 0, v33, v34);
        v24 = 3;
        goto LABEL_32;
      }
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      v41 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
      if ( v41 >= 0 )
      {
        do
        {
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v41, 0LL).fields.m_Handle;
          p_m_Handle = &m_Handle;
          name = (AvalonSceneManager_o *)UnityEngine_SceneManagement_Scene__get_name(
                                           (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                           0LL);
          v45 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(name, (System_String_o *)name, v44);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Object__op_Inequality(
                                                                           v45,
                                                                           0LL,
                                                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v45 )
              goto LABEL_55;
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v45,
                                                                             0LL);
            if ( !this )
              goto LABEL_55;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
        }
        while ( --v41 >= 0 );
      }
LABEL_69:
      scenename = v4->fields.scenename;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SceneList__getSceneType(scenename, 0LL);
      if ( !_4__this
        || (v47 = (unsigned int)this,
            (this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)_4__this->fields.dicRootComponent) == 0LL) )
      {
LABEL_55:
        sub_1BDBAD4(this, method);
      }
      System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator(
        &v52,
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
        (const MethodInfo_336D448 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__GetEnumerator__);
      while ( System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext(
                &v52,
                (const MethodInfo_3492E88 *)Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__MoveNext__) )
      {
        value = v52.fields._current.fields.value;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v49 = UnityEngine_Object__op_Equality(0LL, (UnityEngine_Object_o *)value, 0LL);
        if ( !v49 )
        {
          if ( !value )
            sub_1BDBAD4(v49, v50);
          ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))value->klass->vtable[11].method)(
            value,
            v47,
            value->klass->vtable[12].methodPtr);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
        &v52,
        (const MethodInfo_3492FAC *)Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__Dispose__);
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
      v4->fields.__2__current = 0LL;
      v21 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BDB81C(v21, 0, v25, v26);
      v24 = 4;
      goto LABEL_32;
    case 4:
      v4->fields.__1__state = -1;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AtlasManager__ReleaseNoneResidentAtlas((AtlasManager_o *)this, 0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__ReleaseSkinEffects(0LL);
      v4->fields.__2__current = 0LL;
      v21 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BDB81C(v21, 0, v22, v23);
      v24 = 5;
      goto LABEL_32;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_69;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AvalonSceneManager__changePrevSceneCoroutine_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changePrevSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__changePrevSceneCoroutine_d__39__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changePrevSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__39_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall AvalonSceneManager__changePrevSceneCoroutine_d__39__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changePrevSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__changePrevSceneCoroutine_d__39__System_IDisposable_Dispose(
        AvalonSceneManager__changePrevSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AvalonSceneManager__changeSceneCoroutine_d__38___ctor(
        AvalonSceneManager__changeSceneCoroutine_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__changeSceneCoroutine_d__38__MoveNext(
        AvalonSceneManager__changeSceneCoroutine_d__38_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AvalonSceneManager__changeSceneCoroutine_d__38_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  AvalonSceneManager_o *_4__this; // x20
  System_String_o *scenename; // x21
  int32_t SceneType; // w0
  unsigned int v13; // w22
  struct SceneTemp_o *prevscenetemp; // x8
  AvalonSceneManager__changeSceneCoroutine_d__38_o *v15; // x21
  int32_t v16; // w8
  const MethodInfo *v17; // x4
  int32_t changeType; // w8
  UnityEngine_WaitForEndOfFrame_o *v19; // x20
  CGThumbnailListItem_o *v20; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w8
  System_Collections_IEnumerator_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_IEnumerator_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  bool result; // w0
  System_Action_o *callback; // x0
  int32_t ConnectMarkEventId; // w1
  bool v33; // w2
  AvalonSceneManager__changeSceneCoroutine_d__38_o *v34; // x22
  System_Collections_IEnumerator_o *v35; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  v3 = this;
  if ( (byte_4B440CB & 1) == 0 )
  {
    sub_1BDB878(&System_GC_TypeInfo, method);
    sub_1BDB878(&SceneList_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)sub_1BDB878(&UnityEngine_WaitForEndOfFrame_TypeInfo, v9);
    byte_4B440CB = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      scenename = v3->fields.scenename;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneType = SceneList__getSceneType(scenename, 0LL);
      if ( (unsigned int)(SceneType - 10) > 0x3E
        || ((1LL << ((unsigned __int8)SceneType - 10)) & 0x400C000053400001LL) == 0 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
          if ( _4__this )
            goto LABEL_53;
        }
        goto LABEL_54;
      }
      v13 = SceneType;
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_54;
      prevscenetemp = _4__this->fields.prevscenetemp;
      v15 = this;
      if ( !prevscenetemp )
        goto LABEL_42;
      v16 = prevscenetemp->fields.sceneType;
      if ( v13 == 38 && v16 == 10 || (v13 == 10 || v13 == 38) && v16 == 9 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0LL);
          if ( !v15 )
            goto LABEL_53;
          goto LABEL_52;
        }
LABEL_54:
        sub_1BDBAD4(this, method);
      }
      if ( v16 == 39 )
      {
        if ( v13 <= 0x3D && ((1LL << v13) & 0x3000010000000000LL) != 0 )
        {
          this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_54;
          ConnectMarkEventId = 0;
          v33 = 0;
          goto LABEL_51;
        }
      }
      else if ( v13 == 34 && v16 == 9 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_54;
        v33 = 1;
        ConnectMarkEventId = 0;
        goto LABEL_51;
      }
LABEL_42:
      if ( this && v13 == 32 && !BYTE4(this[2].fields.__4__this) )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_54;
        CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
LABEL_52:
        BYTE4(v15[2].fields.__4__this) = 0;
        goto LABEL_53;
      }
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v34 = this;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v34 )
        goto LABEL_54;
      v33 = 1;
      this = v34;
      ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
LABEL_51:
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, ConnectMarkEventId, v33, 0LL);
      if ( v15 )
        goto LABEL_52;
LABEL_53:
      v35 = AvalonSceneManager__changePrevSceneCoroutine(
              _4__this,
              v3->fields.changeType,
              v3->fields.scenename,
              v3->fields.fadeTimeSkip,
              v17);
      v3->fields.__2__current = (Il2CppObject *)v35;
      p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1BDB81C(p__2__current, (int32_t)v35, v37, v38);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      changeType = v3->fields.changeType;
      v3->fields.__1__state = -1;
      if ( changeType )
        goto LABEL_25;
      v19 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v19, 0LL);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v3->fields.__2__current = (Il2CppObject *)v19;
      v20 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1BDB81C(v20, (int32_t)v19, v21, v22);
      v23 = 2;
      goto LABEL_27;
    case 2:
      v3->fields.__1__state = -1;
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_54;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_54;
      v24 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v24;
      v20 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1BDB81C(v20, (int32_t)v24, v25, v26);
      v23 = 3;
      goto LABEL_27;
    case 3:
      v3->fields.__1__state = -1;
LABEL_25:
      if ( !_4__this )
        goto LABEL_54;
      v27 = AvalonSceneManager__changeNextSceneCoroutine(_4__this, v3->fields.changeType, v3->fields.scenename, v2);
      v3->fields.__2__current = (Il2CppObject *)v27;
      v20 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1BDB81C(v20, (int32_t)v27, v28, v29);
      v23 = 4;
LABEL_27:
      LODWORD(v20[-1].fields._ThumbnailSpritePath_k__BackingField) = v23;
      return 1;
    case 4:
      callback = v3->fields.callback;
      v3->fields.__1__state = -1;
      ActionExtensions__Call(callback, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AvalonSceneManager__changeSceneCoroutine_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changeSceneCoroutine_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__changeSceneCoroutine_d__38__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changeSceneCoroutine_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_AvalonSceneManager__changeSceneCoroutine_d__38_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall AvalonSceneManager__changeSceneCoroutine_d__38__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changeSceneCoroutine_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__changeSceneCoroutine_d__38__System_IDisposable_Dispose(
        AvalonSceneManager__changeSceneCoroutine_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AvalonSceneManager__checkUnloadScenes_d__17___ctor(
        AvalonSceneManager__checkUnloadScenes_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__checkUnloadScenes_d__17__MoveNext(
        AvalonSceneManager__checkUnloadScenes_d__17_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager__checkUnloadScenes_d__17_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w9
  struct AvalonSceneManager_o *_4__this; // x8
  _BOOL4 bContinue_5__2; // w9
  Il2CppObject *current; // x20
  int32_t *p_m_Handle; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_List_string__o *m_listUnloadScenes; // x8
  int32_t size; // w2
  int v18; // w9
  int32_t m_Handle; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4B440CC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    this = (AvalonSceneManager__checkUnloadScenes_d__17_o *)sub_1BDB878(
                                                              &UnityEngine_SceneManagement_SceneManager_TypeInfo,
                                                              v7);
    byte_4B440CC = 1;
  }
  memset(&v21, 0, sizeof(v21));
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
          v18 = m_listUnloadScenes->fields._version + 1;
          m_listUnloadScenes->fields._size = 0;
          m_listUnloadScenes->fields._version = v18;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)m_listUnloadScenes->fields._items, 0, size, 0LL);
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
LABEL_22:
      sub_1BDBAD4(this, method);
    }
  }
  else
  {
    this = 0LL;
    if ( _1__state )
      return (char)this;
    v2->fields.__1__state = -1;
    v2->fields._bContinue_5__2 = 1;
  }
  v2->fields._bContinue_5__2 = 0;
  if ( !_4__this )
    goto LABEL_22;
  this = (AvalonSceneManager__checkUnloadScenes_d__17_o *)_4__this->fields.m_listUnloadScenes;
  if ( !this )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v21.fields._current;
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName((System_String_o *)current, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    if ( UnityEngine_SceneManagement_Scene__get_buildIndex((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL) >= 1 )
    {
      v2->fields._bContinue_5__2 = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v2->fields.__2__current = 0LL;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BDB81C(p__2__current, 0, v14, v15);
  LOBYTE(this) = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return (char)this;
}


Il2CppObject *__fastcall AvalonSceneManager__checkUnloadScenes_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__checkUnloadScenes_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__checkUnloadScenes_d__17__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__checkUnloadScenes_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_AvalonSceneManager__checkUnloadScenes_d__17_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall AvalonSceneManager__checkUnloadScenes_d__17__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__checkUnloadScenes_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__checkUnloadScenes_d__17__System_IDisposable_Dispose(
        AvalonSceneManager__checkUnloadScenes_d__17_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AvalonSceneManager__setupUI_d__41___ctor(
        AvalonSceneManager__setupUI_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__setupUI_d__41__MoveNext(
        AvalonSceneManager__setupUI_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v18; // x20
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  int32_t v21; // w21
  int32_t v22; // w8
  System_Action_o *v23; // x22
  System_Action_o *v24; // x22
  System_Action_o *v25; // x22
  System_Action_o *v26; // x22
  System_Action_o *v27; // x22
  System_Func_bool__o *v28; // x21
  UnityEngine_WaitUntil_o *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4B440CD & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AtlasManager_TypeInfo, v3);
    sub_1BDB878(&CommonEffectManager_TypeInfo, v4);
    sub_1BDB878(&System_Func_bool__TypeInfo, v5);
    sub_1BDB878(&OptionManager_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v7);
    sub_1BDB878(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__0__, v8);
    sub_1BDB878(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__1__, v9);
    sub_1BDB878(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__2__, v10);
    sub_1BDB878(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__3__, v11);
    sub_1BDB878(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__4__, v12);
    sub_1BDB878(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__5__, v13);
    sub_1BDB878(&AvalonSceneManager___c__DisplayClass41_0_TypeInfo, v14);
    sub_1BDB878(&UnityEngine_WaitUntil_TypeInfo, v15);
    byte_4B440CD = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v22 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v18 = sub_1BDBAC4(AvalonSceneManager___c__DisplayClass41_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0LL);
    if ( !v18 )
      goto LABEL_46;
    *(_BYTE *)(v18 + 16) = 0;
    *(_DWORD *)(v18 + 17) = 0;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v21 = OptionManager__isSavedMemoryMode(0LL) ? 1 : 10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 7, 0LL) )
    {
      *(_BYTE *)(v18 + 16) = 1;
    }
    else
    {
      v23 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v23,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v23, 7, v21, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
    {
      *(_BYTE *)(v18 + 17) = 1;
    }
    else
    {
      v24 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v24,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v24, 1, v21, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 2, 0LL) )
    {
      *(_BYTE *)(v18 + 18) = 1;
    }
    else
    {
      v25 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v25,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v25, 2, v21, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_1BDBAD4(Instance, v20);
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0LL) )
    {
      *(_BYTE *)(v18 + 19) = 1;
    }
    else
    {
      v26 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v26, 4, v21, 0LL);
    }
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( CommonEffectManager__IsLoadedSkinData(0LL) )
    {
      *(_BYTE *)(v18 + 20) = 1;
    }
    else
    {
      v27 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__4__,
        0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__LoadSkinEffects(v27, v21, 0LL);
    }
    v28 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v28,
      (Il2CppObject *)v18,
      Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__5__,
      0LL);
    v29 = (UnityEngine_WaitUntil_o *)sub_1BDBAC4(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v29, v28, 0LL);
    this->fields.__2__current = (Il2CppObject *)v29;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v29, v30, v31);
    v22 = 1;
    result = 1;
  }
  this->fields.__1__state = v22;
  return result;
}


Il2CppObject *__fastcall AvalonSceneManager__setupUI_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__setupUI_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__setupUI_d__41__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__setupUI_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_AvalonSceneManager__setupUI_d__41_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall AvalonSceneManager__setupUI_d__41__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__setupUI_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__setupUI_d__41__System_IDisposable_Dispose(
        AvalonSceneManager__setupUI_d__41_o *this,
        const MethodInfo *method)
{
  ;
}